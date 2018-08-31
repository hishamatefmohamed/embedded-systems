/*
 * Keypad.h
 *
 *  Created on: Oct 23, 2017
 *      Author: hisham
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "DIO.h"
#include "PLATFORM_TYPES.h"
#include <avr/io.h>
#include <util/delay.h>

/*Wiring diagram*/

/* * * *c1  c2 c3
 * row1  1  2  3
 * row2  4  5  6
 * row3  7  8  9
 */

#define KEYPAD_PORT_OUT PORTA
#define KEYPAD_PORT_IN  PINA
#define KEYPAD_PORT_DIR DDRA

#define FIRST_ROW  (4)
#define SECOND_ROW (3)
#define THIRD_ROW  (2)

#define FIRST_COL  (7)
#define SECOND_COL (6)
#define THIRD_COL  (5)

void  Keypad_init(void);
uint8 Keypad_get_pressed_key(void);


#endif /* KEYPAD_H_ */
