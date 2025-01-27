/*
 * rpdriver_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "rpdriver".
 *
 * Model version              : 1.310
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Oct 16 09:46:10 2023
 *
 * Target selection: rtcon_rpend_usb2.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rpdriver.h"
#include "rpdriver_private.h"

/* Block parameters (default storage) */
P_rpdriver_T rpdriver_P = {
  /* Expression: 1
   * Referenced by: '<Root>/Gain1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Normal'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Reset'
   */
  1.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 1
   * Referenced by: '<S1>/S-Function'
   */
  1.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 0.01
   * Referenced by: '<S1>/S-Function'
   */
  0.01,

  /* Expression: 2*pi/20000
   * Referenced by: '<S1>/Pendulum Convert to rad'
   */
  0.00031415926535897931,

  /* Expression: pi
   * Referenced by: '<S3>/Constant'
   */
  3.1415926535897931,

  /* Expression: 0
   * Referenced by: '<S1>/Memory2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/rad2rad//s'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Memory'
   */
  0.0,

  /* Expression: 1/20000000
   * Referenced by: '<S1>/Gain1'
   */
  5.0E-8,

  /* Expression: 2*pi/4096
   * Referenced by: '<S1>/DC Convert to rad'
   */
  0.0015339807878856412,

  /* Expression: 0
   * Referenced by: '<S1>/Memory1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/rad2RPM'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/DC Convert to [A]1'
   */
  1.0,

  /* Expression: 0.6
   * Referenced by: '<Root>/DC_Ctrl1'
   */
  0.6,

  /* Expression: sps.tv
   * Referenced by: '<S4>/Look-Up Table'
   */
  { 0.0, 4.0, 4.0, 9.0, 9.0, 13.0, 13.0, 14.0, 14.0, 20.0, 20.0, 23.0, 23.0,
    26.0, 26.0, 29.0, 29.0, 30.0 },

  /* Expression: sps.opv
   * Referenced by: '<S4>/Look-Up Table'
   */
  { 0.4, 0.4, 0.0, 0.0, -0.4, -0.4, 0.0, 0.0, 1.0, 1.0, -1.0, -1.0, 0.0, 0.0,
    1.0, 1.0, -1.0, -1.0 },

  /* Expression: 0.6
   * Referenced by: '<Root>/DC_Ctrl2'
   */
  0.6,

  /* Expression: 1
   * Referenced by: '<Root>/Gain3'
   */
  1.0,

  /* Expression: [1;1]
   * Referenced by: '<S1>/Gain'
   */
  { 1.0, 1.0 },

  /* Expression: 1
   * Referenced by: '<S1>/Gain2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Prescaler'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S1>/ThermFlag'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Hit  Crossing'
   */
  0.0,

  /* Computed Parameter: ResetEncoders2_CurrentSetting
   * Referenced by: '<Root>/Reset Encoders2'
   */
  0U,

  /* Computed Parameter: ResetEncoders1_CurrentSetting
   * Referenced by: '<Root>/Reset Encoders1'
   */
  1U,

  /* Computed Parameter: ResetEncoders_CurrentSetting
   * Referenced by: '<Root>/Reset Encoders'
   */
  0U
};
