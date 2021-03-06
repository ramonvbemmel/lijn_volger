#ifndef _MATRIX_CONTROL_HPP
#define _MATRIX_CONTROL_HPP

#include <stdint.h>	// for uint8_t
#include "../../lib/BrickPi3.h" // for BrickPi3

/* function definitions */
/* function to turn left, right or go straight */
void go_right(uint8_t left_port, uint8_t right_port);

void go_left(uint8_t left_port, uint8_t right_port);

void go_straight(uint8_t left_port, uint8_t right_port);

void update_location(int &my_x, int &my_y, int &direction);

void set_encoders(int &motorEncoderLeft, int &motorEncoderRight);

void stop_engines();

void go_hard_left(int &direction);

void go_hard_right(int &direction);

void go_back(bool &obstacle, const int &motor_encoder_left, const int &motor_enocoder_right);

void reset_encoders();

#endif
