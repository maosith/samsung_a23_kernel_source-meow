/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _CAM_SENSOR_HI5021_H_
#define _CAM_SENSOR_HI5021_H_

#include "cam_sensor_dev.h"

struct cam_sensor_i2c_reg_array initial_settings_reg_array[] = {
    {0x0790, 0x0100, 0x00, 0x00},
    {0xA000, 0x006F, 0x00, 0x00},
    {0xA002, 0x00A0, 0x00, 0x00},
    {0xA004, 0x506F, 0x00, 0x00},
    {0xA006, 0x7FD0, 0x00, 0x00},
    {0xA008, 0x8082, 0x00, 0x00},
    {0xA00A, 0x1073, 0x00, 0x00},
    {0xA00C, 0x3050, 0x00, 0x00},
    {0xA00E, 0x0093, 0x00, 0x00},
    {0xA010, 0x0000, 0x00, 0x00},
    {0xA012, 0x8106, 0x00, 0x00},
    {0xA014, 0x8186, 0x00, 0x00},
    {0xA016, 0x8206, 0x00, 0x00},
    {0xA018, 0x8286, 0x00, 0x00},
    {0xA01A, 0x8306, 0x00, 0x00},
    {0xA01C, 0x8386, 0x00, 0x00},
    {0xA01E, 0x8406, 0x00, 0x00},
    {0xA020, 0x8486, 0x00, 0x00},
    {0xA022, 0x8506, 0x00, 0x00},
    {0xA024, 0x8586, 0x00, 0x00},
    {0xA026, 0x8606, 0x00, 0x00},
    {0xA028, 0x8686, 0x00, 0x00},
    {0xA02A, 0x8706, 0x00, 0x00},
    {0xA02C, 0x8786, 0x00, 0x00},
    {0xA02E, 0x8806, 0x00, 0x00},
    {0xA030, 0x8886, 0x00, 0x00},
    {0xA032, 0x8906, 0x00, 0x00},
    {0xA034, 0x8986, 0x00, 0x00},
    {0xA036, 0x8A06, 0x00, 0x00},
    {0xA038, 0x8A86, 0x00, 0x00},
    {0xA03A, 0x8B06, 0x00, 0x00},
    {0xA03C, 0x8B86, 0x00, 0x00},
    {0xA03E, 0x8C06, 0x00, 0x00},
    {0xA040, 0x8C86, 0x00, 0x00},
    {0xA042, 0x8D06, 0x00, 0x00},
    {0xA044, 0x8D86, 0x00, 0x00},
    {0xA046, 0x8E06, 0x00, 0x00},
    {0xA048, 0x8E86, 0x00, 0x00},
    {0xA04A, 0x8F06, 0x00, 0x00},
    {0xA04C, 0x8F86, 0x00, 0x00},
    {0xA04E, 0x3117, 0x00, 0x00},
    {0xA050, 0x0000, 0x00, 0x00},
    {0xA052, 0x0113, 0x00, 0x00},
    {0xA054, 0xFB21, 0x00, 0x00},
    {0xA056, 0x67B1, 0x00, 0x00},
    {0xA058, 0x6735, 0x00, 0x00},
    {0xA05A, 0x8693, 0x00, 0x00},
    {0xA05C, 0x0007, 0x00, 0x00},
    {0xA05E, 0x0713, 0x00, 0x00},
    {0xA060, 0xBCC7, 0x00, 0x00},
    {0xA062, 0xF963, 0x00, 0x00},
    {0xA064, 0x00E6, 0x00, 0x00},
    {0xA066, 0x8793, 0x00, 0x00},
    {0xA068, 0x0007, 0x00, 0x00},
    {0xA06A, 0xA023, 0x00, 0x00},
    {0xA06C, 0x0007, 0x00, 0x00},
    {0xA06E, 0x0791, 0x00, 0x00},
    {0xA070, 0xEDE3, 0x00, 0x00},
    {0xA072, 0xFEE7, 0x00, 0x00},
    {0xA074, 0xA7B7, 0x00, 0x00},
    {0xA076, 0x0000, 0x00, 0x00},
    {0xA078, 0x8793, 0x00, 0x00},
    {0xA07A, 0x0087, 0x00, 0x00},
    {0xA07C, 0x1101, 0x00, 0x00},
    {0xA07E, 0x67A1, 0x00, 0x00},
    {0xA080, 0xCA26, 0x00, 0x00},
    {0xA082, 0x87BE, 0x00, 0x00},
    {0xA084, 0x64B1, 0x00, 0x00},
    {0xA086, 0xCE06, 0x00, 0x00},
    {0xA088, 0xCC22, 0x00, 0x00},
    {0xA08A, 0xC84A, 0x00, 0x00},
    {0xA08C, 0xC64E, 0x00, 0x00},
    {0xA08E, 0x8426, 0x00, 0x00},
    {0xA090, 0xA583, 0x00, 0x00},
    {0xA092, 0x6FC7, 0x00, 0x00},
    {0xA094, 0x8893, 0x00, 0x00},
    {0xA096, 0x2007, 0x00, 0x00},
    {0xA098, 0x8813, 0x00, 0x00},
    {0xA09A, 0x3807, 0x00, 0x00},
    {0xA09C, 0x8513, 0x00, 0x00},
    {0xA09E, 0x3BC7, 0x00, 0x00},
    {0xA0A0, 0x8913, 0x00, 0x00},
    {0xA0A2, 0x4247, 0x00, 0x00},
    {0xA0A4, 0x8993, 0x00, 0x00},
    {0xA0A6, 0x5107, 0x00, 0x00},
    {0xA0A8, 0x2423, 0x00, 0x00},
    {0xA0AA, 0x36F4, 0x00, 0x00},
    {0xA0AC, 0x6605, 0x00, 0x00},
    {0xA0AE, 0x67A1, 0x00, 0x00},
    {0xA0B0, 0x9622, 0x00, 0x00},
    {0xA0B2, 0x8793, 0x00, 0x00},
    {0xA0B4, 0x7007, 0x00, 0x00},
    {0xA0B6, 0x2A23, 0x00, 0x00},
    {0xA0B8, 0x9F26, 0x00, 0x00},
    {0xA0BA, 0x2C23, 0x00, 0x00},
    {0xA0BC, 0x9F36, 0x00, 0x00},
    {0xA0BE, 0x2423, 0x00, 0x00},
    {0xA0C0, 0xA2B6, 0x00, 0x00},
    {0xA0C2, 0x2623, 0x00, 0x00},
    {0xA0C4, 0x3714, 0x00, 0x00},
    {0xA0C6, 0x2823, 0x00, 0x00},
    {0xA0C8, 0x3904, 0x00, 0x00},
    {0xA0CA, 0x2623, 0x00, 0x00},
    {0xA0CC, 0x38F4, 0x00, 0x00},
    {0xA0CE, 0x2C23, 0x00, 0x00},
    {0xA0D0, 0x38A4, 0x00, 0x00},
    {0xA0D2, 0xB0EF, 0x00, 0x00},
    {0xA0D4, 0x1AE0, 0x00, 0x00},
    {0xA0D6, 0x8526, 0x00, 0x00},
    {0xA0D8, 0xF0EF, 0x00, 0x00},
    {0xA0DA, 0xF31F, 0x00, 0x00},
    {0xA0DC, 0xB06F, 0x00, 0x00},
    {0xA0DE, 0x1C50, 0x00, 0x00},
    {0xA0E0, 0x8082, 0x00, 0x00},
    {0x0726, 0x0000, 0x00, 0x00},
    {0x0736, 0x00BA, 0x00, 0x00},
    {0x073C, 0x0501, 0x00, 0x00},
    {0x0742, 0x0100, 0x00, 0x00},
    {0x0748, 0x0002, 0x00, 0x00},
    {0x0766, 0x006C, 0x00, 0x00},
    {0x07A8, 0x0001, 0x00, 0x00},
    {0x027E, 0x0100, 0x00, 0x00},
    {0x0286, 0x0000, 0x00, 0x00},
    {0x0B00, 0x0000, 0x00, 0x00},
};

static struct cam_sensor_i2c_reg_setting sensor_init_settings[] = {
    { initial_settings_reg_array, ARRAY_SIZE(initial_settings_reg_array),
      CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

//otp mode on
struct cam_sensor_i2c_reg_array otp_mode_on_step1_reg_array[] = {
    {0x0B00, 0x00, 0x00, 0x00},
};

static struct cam_sensor_i2c_reg_setting otp_mode_on_step1_settings[] = {
    { otp_mode_on_step1_reg_array, ARRAY_SIZE(otp_mode_on_step1_reg_array),
      CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_BYTE, 10 }
};

struct cam_sensor_i2c_reg_array otp_mode_on_step2_reg_array[] = {
    {0x0266, 0x10, 0x00, 0x00},
    {0x0B00, 0x01, 0x00, 0x00},
};

static struct cam_sensor_i2c_reg_setting otp_mode_on_step2_settings[] = {
    { otp_mode_on_step2_reg_array, ARRAY_SIZE(otp_mode_on_step2_reg_array),
      CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_BYTE, 1 }
};

//read otp data
struct cam_sensor_i2c_reg_array otp_mode_read_reg_array[] = {
    {0x030C, 0x00, 0x00, 0x00},
    {0x030D, 0x01, 0x00, 0x00},
    {0x0302, 0x01, 0x00, 0x00},
};

static struct cam_sensor_i2c_reg_setting otp_mode_read_settings[] = {
    { otp_mode_read_reg_array, ARRAY_SIZE(otp_mode_read_reg_array),
      CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_BYTE, 0 }
};

//otp mode off
struct cam_sensor_i2c_reg_array otp_mode_off_step1_reg_array[] = {
    {0x0B00, 0x00, 0x00, 0x00},
};

static struct cam_sensor_i2c_reg_setting otp_mode_off_step1_settings[] = {
    { otp_mode_off_step1_reg_array, ARRAY_SIZE(otp_mode_off_step1_reg_array),
      CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_BYTE, 10 }
};

struct cam_sensor_i2c_reg_array otp_mode_off_step2_reg_array[] = {
    {0x0302, 0x00, 0x00, 0x00},
    {0x0266, 0x00, 0x00, 0x00},
    //{0x0B00, 0x01, 0x00, 0x00},
};

static struct cam_sensor_i2c_reg_setting otp_mode_off_step2_settings[] = {
    { otp_mode_off_step2_reg_array, ARRAY_SIZE(otp_mode_off_step2_reg_array),
      CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_BYTE, 1 }
};


#endif /* _CAM_SENSOR_HI5021_H_ */
