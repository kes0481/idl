#include <stdio.h>

typedef struct idl_buzzer
{
	int pwm_num;
	int pwm_hz;
	int pwm_duty;
} idl_buzzer_t;

static int fd;
static idl_buzzer_t buzzer;

int idl_buzzer_init(idl_buzzer_t *bzr)
{
	buzzer.pwm_num = 0;
	buzzer.pwm_hz = 4000;
	buzzer.pwm_duty = 50;

	bzr->pwm_num = buzzer.pwm_num;
	bzr->pwm_hz = buzzer.pwm_hz;
	bzr->pwm_duty = buzzer.pwm_duty;
}


int main(void)
{
	idl_buzzer_t bzr;
	idl_buzzer_init(&bzr);

	printf("buzzer pwm : number=%d, hz=%d, duty=%d\n",
			bzr.pwm_num, bzr.pwm_hz, bzr.pwm_duty);

	return 0;
}
