#pragma once
/******************************************************************************/
/* File   : Template.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ADC1_XML_VERSION                                                 (20207)
#define ADC1_CHx_EIM                                                       (0x0)
#define ADC1_CHx_ESM                                                   (0x10002)
#define ADC1_CLK                                                          (0x14)
#define ADC1_DWSEL                                                         (0x0)
#define ADC1_GLOBCTR                                                     (0x301)
#define ADC1_IE                                                          (0x200)
#define ADC1_RES_OUT0                                                      (0x0)
#define ADC1_RES_OUT1                                                      (0x0)
#define ADC1_RES_OUT2                                                      (0x0)
#define ADC1_RES_OUT3                                                      (0x0)
#define ADC1_RES_OUT4                                                      (0x0)
#define ADC1_RES_OUT5                                                      (0x0)

#if(STD_ON == _ReSIM)
#define ADC1_RES_OUT6                                                      (1UL)
#else
#define ADC1_RES_OUT6                                                      (0x0)
#endif


#define ADC1_RES_OUT_EIM                                                   (0x0)
#define ADC1_SQ1_4                                                        (0x50)
#define ADC1_SQ5_8                                                         (0x0)
#define ADC1_SQ_FB                                                       (0x100)
#define ADC1_STC_0_3                                                     (0xA00)
#define ADC1_STC_4_7                                                   (0xA000A)
#define MF_P2_ADCSEL_CTRL                                                (0x400)
#define MF_REF2_CTRL                                                       (0x1)
#define MF_VMON_SEN_CTRL                                                  (0x21)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

