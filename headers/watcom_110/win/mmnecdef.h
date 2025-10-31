/****************************************************************************/
/*                                                                          */
/*        MMNECDEF.H - Constants definition for NEC Multimedia Products     */
/*                                                                          */
/*        Note: You must include WINDOWS.H before including this file.      */
/*                                                                          */
/*        Copyright (c) 1990-1993, Microsoft Corp.  All rights reserved.    */
/*                                                                          */
/****************************************************************************/

/****************************************************************************

                         Manufacturer and product IDs

    Used with wMid and wPid fields in WAVEOUTCAPS, WAVEINCAPS, 
    MIDIOUTCAPS, MIDIINCAPS, AUXCAPS, JOYCAPS structures.

****************************************************************************/

/* manufacturer IDs */
#define MM_NEC                 26       /* NEC Manufacture ID */

/* product IDs */
#define MM_NEC_NECSND73_MO      5       /* PC-9801-73 MIDI Output */
#define MM_NEC_NECSND73_WO      6       /* PC-9801-73 Wave Output */
#define MM_NEC_NECSND73_WI      7       /* PC-9801-73 Wave Input  */
#define MM_NEC_NECSND26_MO      9       /* PC-9801-26K MIDI Output */
#define MM_NEC_MMMIDI_MO       10       /* MPU-PC98II MIDI Output */
#define MM_NEC_MMMIDI_MI       11       /* MPU-PC98II MIDI Input  */
#define MM_NEC_JOYSTICK        12       /* Joystick Control */

