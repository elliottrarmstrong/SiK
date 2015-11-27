/*
 * timer_config.h
 *
 *  Created on: 27/11/2015
 *      Author: kentm
 */

#ifndef TIMER_CONFIG_H_
#define TIMER_CONFIG_H_

#define USTIMER_TIMER USTIMER_TIMER0

#define TDMTIMER 									 TIMER1
#define TDMTIMER_cmuClock cmuClock_TIMER1
#define TDMTIMER_IRQn								TIMER1_IRQn
#define TDMTIMERLOC 			TIMER_ROUTE_LOCATION_LOC2
#define TDMTIMER_CCX			1
#define TDMTIMER_ROUTE_CC TIMER_ROUTE_CC1PEN

#define MSTIMER 									TIMER2
#define MSTIMER_cmuClock cmuClock_TIMER2
#define MSTIMER_IRQn								TIMER2_IRQn
#define MSTIMERLOC 			TIMER_ROUTE_LOCATION_LOC2
#define MSTIMER_CCX			1
#define MSTIMER_ROUTE_CC TIMER_ROUTE_CC1PEN

#define PWMTIMER TIMER3
#define cmuClock_PWMTIMER  cmuClock_TIMER3
#define PWMCCX	2
#define PWMTIMER_ROUTE_CCXPEN TIMER_ROUTE_CC2PEN
#define PWMTIMER_ROUTE_LOCATION TIMER_ROUTE_LOCATION_LOC1

#endif /* TIMER_CONFIG_H_ */
