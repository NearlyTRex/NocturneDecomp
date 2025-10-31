
/****************************************************************************\
*                                                                            *
* penwin.h - Pen Windows functions, types, and definitions                   *
*                                                                            *
*            Version 1.1                                                     *
*                                                                            *
*            Copyright (c) 1992-1993, Microsoft Corp.  All rights reserved.  *
*                                                                            *
\****************************************************************************/

#ifndef _INC_WINDOWS
#include <windows.h>    /* <windows.h> must be pre-included */
#endif /* _INC_WINDOWS */

#ifndef _INC_PENWIN     /* prevent multiple includes */
#define _INC_PENWIN

#ifndef RC_INVOKED
#pragma pack(1)
#endif /* RC_INVOKED */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <skbapi.h>
#include <subinapi.h>

/****** Definitions ********************************************************/

#define BITPENUP               0x8000

// Default pen cursor to indicate writing, points northwest
#define IDC_PEN                MAKEINTRESOURCE(32631)
// alternate select cursor: upsidedown standard arrow, points southeast
#define IDC_ALTSELECT          MAKEINTRESOURCE(32501)

#define RC_WDEFAULT            (0xFFFF)
#define RC_LDEFAULT            (0xFFFFFFFFL)
#define RC_WDEFAULTFLAGS       (0x8000)
#define RC_LDEFAULTFLAGS       (0x80000000L)

// SYV classes:
#define SYVHI_SPECIAL          0
#define SYVHI_ANSI             1
#define SYVHI_GESTURE          2
#define SYVHI_KANJI            3
#define SYVHI_SHAPE            4
#define SYVHI_UNICODE          5
#define SYVHI_VKEY             6

// SYV values with special meanings to Pen Windows:
#define SYV_NULL               0x00000000L
#define SYV_UNKNOWN            0x00000001L
#define SYV_EMPTY              0x00000003L
#define SYV_BEGINOR            0x00000010L
#define SYV_ENDOR              0x00000011L
#define SYV_OR                 0x00000012L
#define SYV_SOFTNEWLINE        0x00000020L
#define SYV_SPACENULL          0x00010000L   // SyvCharacterToSymbol('\0')

// SYV values for gestures:
#define SYV_SELECTFIRST        0x0002FFC0L
#define SYV_SELECTLEFT         0x0002FFC2L
#define SYV_SELECTRIGHT        0x0002FFC3L
#define SYV_SELECTLAST         0x0002FFCFL

#define SYV_HELP               0x0002FFD3L
#define SYV_KKCONVERT          0x0002FFD4L
#define SYV_CLEAR              0x0002FFD5L

#define SYV_EXTENDSELECT       0x0002FFD8L
#define SYV_UNDO               0x0002FFD9L
#define SYV_COPY               0x0002FFDAL
#define SYV_CUT                0x0002FFDBL
#define SYV_PASTE              0x0002FFDCL
#define SYV_CLEARWORD          0x0002FFDDL
#define SYV_USER               0x0002FFDEL
#define SYV_CORRECT            0x0002FFDFL

#define SYV_BACKSPACE          0x00020008L
#define SYV_TAB                0x00020009L
#define SYV_RETURN             0x0002000DL
#define SYV_SPACE              0x00020020L

// Application specific gestures, Circle a-z and Circle A-Z:
#define SYV_APPGESTUREMASK     0x00020000L
#define SYV_CIRCLEUPA          0x000224B6L   // map into Unicode space
#define SYV_CIRCLEUPZ          0x000224CFL   //  for circled letters
#define SYV_CIRCLELOA          0x000224D0L
#define SYV_CIRCLELOZ          0x000224E9L

// SYV definitions for shapes:
#define SYV_SHAPELINE          0x00040001L
#define SYV_SHAPEELLIPSE       0x00040002L
#define SYV_SHAPERECT          0x00040003L
#define SYV_SHAPEMIN           SYV_SHAPELINE    // alias
#define SYV_SHAPEMAX           SYV_SHAPERECT    // alias

// Recognition Error Codes/Returns:
#define REC_OEM                (-1024)  // first recognizer-specific debug val
#define REC_LANGUAGE           (-48)    // unsupported language field
#define REC_GUIDE              (-47)    // invalid GUIDE struct
#define REC_PARAMERROR         (-46)    // bad param
#define REC_INVALIDREF         (-45)    // invalid data ref param
#define REC_RECTEXCLUDE        (-44)    // invalid rect
#define REC_RECTBOUND          (-43)    // invalid rect
#define REC_PCM                (-42)    // invalid lPcm parameter
#define REC_RESULTMODE         (-41)
#define REC_HWND               (-40)    // invalid window to send results to
#define REC_ALC                (-39)    // invalid enabled alphabet
#define REC_ERRORLEVEL         (-38)    // invalid errorlevel
#define REC_CLVERIFY           (-37)    // invalid verification level
#define REC_DICT               (-36)    // invalid dict params
#define REC_HREC               (-35)    // invalid recognition handle
#define REC_BADEVENTREF        (-33)    // invalid wEventRef
#define REC_NOCOLLECTION       (-32)    // collection mode not set
#define REC_DEBUG              (-32)    // beginning of debug values

#define REC_POINTEREVENT       (-31)    // tap or tap&hold event
#define REC_BADHPENDATA        (-9)     // invalid hpendata header or locking
#define REC_OOM                (-8)     // out of memory error
#define REC_NOINPUT            (-7)     // no data collected before termination
#define REC_NOTABLET           (-6)     // tablet not physically present
#define REC_BUSY               (-5)     // another task is using recognizer
#define REC_BUFFERTOOSMALL     (-4)     // ret by GetPenHwEventData()
#define REC_ABORT              (-3)     // recog stopped by EndPenCollection()
#define REC_OVERFLOW           (-1)     // data overflow

#define REC_OK                 0        // interrim completion
#define REC_TERMBOUND          1        // hit outside bounding rect
#define REC_TERMEX             2        // hit inside exclusion rect
#define REC_TERMPENUP          3        // pen up
#define REC_TERMRANGE          4        // pen left proximity
#define REC_TERMTIMEOUT        5        // no writing for <timeout> ms
#define REC_DONE               6        // normal completion
#define REC_TERMOEM            512      // first recognizer-specific retval

// OEM-specific values for Pen Driver:
#define PDT_NULL               0
#define PDT_PRESSURE           1        // pressure supported
#define PDT_HEIGHT             2        // height above tablet
#define PDT_ANGLEXY            3        // xy (horiz) angle supported
#define PDT_ANGLEZ             4        // z (vert) angle supported
#define PDT_BARRELROTATION     5        // barrel is rotated
#define PDT_OEMSPECIFIC        16       // max

#define MAXOEMDATAWORDS        6        // rgwOemData[MAXOEMDATAWORDS]

// Pen Device Capabilities:
#define PDC_INTEGRATED         0x00000001L  // display==digitizer
#define PDC_PROXIMITY          0x00000002L  // detect non-contacting pen
#define PDC_RANGE              0x00000004L  // event on out-of-range
#define PDC_INVERT             0x00000008L  // pen opposite end detect
#define PDC_RELATIVE           0x00000010L  // pen driver coords
#define PDC_BARREL1            0x00000020L  // barrel button 1 present
#define PDC_BARREL2            0x00000040L  // ditto 2
#define PDC_BARREL3            0x00000080L  // ditto 3

// Pen Driver messages:
#define DRV_SetPenDriverEntryPoints    DRV_RESERVED+1
#define DRV_RemovePenDriverEntryPoints DRV_RESERVED+2
#define DRV_SetPenSamplingRate         DRV_RESERVED+3
#define DRV_SetPenSamplingDist         DRV_RESERVED+4
#define DRV_GetName                    DRV_RESERVED+5
#define DRV_GetVersion                 DRV_RESERVED+6
#define DRV_GetPenInfo                 DRV_RESERVED+7
#define DRV_PenPlayStart               DRV_RESERVED+8
#define DRV_PenPlayBack                DRV_RESERVED+9
#define DRV_PenPlayStop                DRV_RESERVED+10
#define DRV_GetCalibration             DRV_RESERVED+11
#define DRV_SetCalibration             DRV_RESERVED+12

// Pen Driver Kit states:
#define PDK_NULL               0x0000    // default to no flags set
#define PDK_DOWN               0x0001    // pentip switch ON due to contact
#define PDK_BARREL1            0x0002    // barrel1 switch depressed
#define PDK_BARREL2            0x0004    // ditto 2
#define PDK_BARREL3            0x0008    // ditto 3
#define PDK_TRANSITION         0x0010    // set by GetPenHwData
#define PDK_INVERTED           0x0080    // other end of pen used as tip
#define PDK_OUTOFRANGE         0x4000    // pen left range (OEM data invalid)
#define PDK_DRIVER             0x8000    // pen (not mouse) event
#define PDK_SWITCHES           (PDK_DOWN|PDK_BARREL1|PDK_BARREL2|PDK_BARREL3)
#define PDK_TIPMASK            0x0001    // mask for testing PDK_DOWN
#define PDK_UP                 PDK_NULL  // alias

// Pen Collection Mode termination conditions:
#define PCM_PENUP              0x00000001L  // stop on penup
#define PCM_RANGE              0x00000002L  // stop on leaving range
#define PCM_INVERT             0x00000020L  // stop on tap of opposite end
#define PCM_RECTEXCLUDE        0x00002000L  // click in exclude rect
#define PCM_RECTBOUND          0x00004000L  // click outside bounds rect
#define PCM_TIMEOUT            0x00008000L  // no activity for timeout ms
#define PCM_ADDDEFAULTS        RC_LDEFAULTFLAGS /* 0x80000000L */

// Virtual Event Layer:
#define VWM_MOUSEMOVE          0x0001
#define VWM_MOUSELEFTDOWN      0x0002
#define VWM_MOUSELEFTUP        0x0004
#define VWM_MOUSERIGHTDOWN     0x0008
#define VWM_MOUSERIGHTUP       0x0010

// RC Definitions:
#define CL_NULL                0
#define CL_MINIMUM             1        // minimum confidence level
#define CL_MAXIMUM             100      // max (require perfect recog)
#define INKWIDTH_MINIMUM       0        // 0 invisible, 1..15 pixel widths
#define INKWIDTH_MAXIMUM       15       // max width in pixels
#define ENUM_MINIMUM           1
#define ENUM_MAXIMUM           4096
#define MAXDICTIONARIES        16       // rc.rglpdf[MAXDICTIONARIES]
#define cbRcLanguageMax        44       // rc.lpLanguage[cbRcLanguageMax]
#define cbRcUserMax            32       // rc.lpUser[cbRcUserMax]
#define cbRcrgbfAlcMax         32       // rc.rgbfAlc[cbRcrgbfAlcMax]
#define cwRcReservedMax        8        // rc.rgwReserved[cwRcReservedMax]
#define MAXHOTSPOT             8        // syg.rgpntHotSpots[MAXHOTSPOT]

// RCRESULT wResultsType values:
#define RCRT_DEFAULT           0x0000   // normal ret
#define RCRT_UNIDENTIFIED      0x0001   // result contains unidentified results
#define RCRT_GESTURE           0x0002   // result is a gesture
#define RCRT_NOSYMBOLMATCH     0x0004   // nothing recognized (no ink match)
#define RCRT_PRIVATE           0x4000   // recognizer-specific symbol
#define RCRT_NORECOG           0x8000   // no recog attempted, only data ret
#define RCRT_ALREADYPROCESSED  0x0008   // GestMgr hooked it
#define RCRT_GESTURETRANSLATED 0x0010   // GestMgr translated it to ANSI value
#define RCRT_GESTURETOKEYS     0x0020   // ditto to set of virtual keys

// misc RC stuff:
#define wPntAll                (UINT)0xFFFF
#define iSycNull               (-1)
#define HKP_SETHOOK            0
#define HKP_UNHOOK             0xFFFF
#define HWR_RESULTS            0
#define HWR_APPWIDE            1
#define PEN_NOINKWIDTH         0
#define LPDFNULL               ((LPDF)NULL)

// RegisterPenApp() API constants:
#define RPA_DEFAULT            0x0001
#define RPA_KANJIFIXEDBEDIT    0x0002
#define RPA_DBCSPRIORITY       0x0004

// GetGlobalRC() API return codes:
#define GGRC_OK                0        // no err
#define GGRC_DICTBUFTOOSMALL   1        // lpDefDict buffer too small for path
#define GGRC_PARAMERROR        2        // invalid params: call ignored

// SetGlobalRC() API return code flags:
#define SGRC_OK                0x0000   // no err
#define SGRC_USER              0x0001   // invalid User name
#define SGRC_PARAMERROR        0x0002   // param error: call ignored
#define SGRC_RC                0x0004   // supplied RC has errors
#define SGRC_RECOGNIZER        0x0008   // DefRecog name invalid
#define SGRC_DICTIONARY        0x0010   // lpDefDict path invalid
#define SGRC_INIFILE           0x0020   // error saving to penwin.ini

// RC Options and Flags:

// Enabled Alphabet:
#define ALC_ALL                0x000043FFL  // everything
#define ALC_DEFAULT            0x00000000L
#define ALC_LCALPHA            0x00000001L  // a..z
#define ALC_UCALPHA            0x00000002L  // A..Z
#define ALC_ALPHA              0x00000003L  // a..z A..Z
#define ALC_NUMERIC            0x00000004L  // 0..9
#define ALC_ALPHANUMERIC       0x00000007L  // a..z A..Z 0..9
#define ALC_PUNC               0x00000008L  // punctuation
#define ALC_MATH               0x00000010L  // mathematical symbols
#define ALC_MONETARY           0x00000020L  // monetary symbols
#define ALC_OTHER              0x00000040L
#define ALC_WHITE              0x00000100L  // white space
#define ALC_NONPRINT           0x00000200L
#define ALC_GESTURE            0x00004000L  // gestures
#define ALC_USEBITMAP          0x00008000L
#define ALC_DBCS               0x00000400L  // double-byte characters
#define ALC_JIS1               0x00000800L  // kanji Shift JIS level 1 JPN
#define ALC_HIRAGANA           0x00010000L  // hiragana JPN
#define ALC_KATAKANA           0x00020000L  // katakana JPN
#define ALC_KANJI              0x00040000L  // kanji JPN
#define ALC_OEM                0x0FF80000L  // OEM recognizer-specific
#define ALC_RESERVED           0xF0003000L  // for future use
#define ALC_NOPRIORITY         0x00000000L  // def for rc.alcPriority none

#define ALC_SYSMINIMUM \
   (ALC_ALPHANUMERIC | ALC_PUNC | ALC_WHITE | ALC_GESTURE)

#define ALC_KANJISYSMINIMUM \
   (ALC_SYSMINIMUM | ALC_HIRAGANA | ALC_KATAKANA | ALC_JIS1)

#define ALC_KANJIALL \
    (ALC_KANJI | ALC_HIRAGANA | ALC_KATAKANA | ALC_ALL)

// RC Options:
#define RCO_NOPOINTEREVENT     0x00000001L  // no recog tap, tap/hold
#define RCO_SAVEALLDATA        0x00000002L  // save pen data like upstrokes
#define RCO_SAVEHPENDATA       0x00000004L  // save pen data for app
#define RCO_NOFLASHUNKNOWN     0x00000008L  // no ? cursor on unknown
#define RCO_TABLETCOORD        0x00000010L  // tablet coords used in RC
#define RCO_NOSPACEBREAK       0x00000020L  // no space break recog -> dict
#define RCO_NOHIDECURSOR       0x00000040L  // display cursor during inking
#define RCO_NOHOOK             0x00000080L  // disallow ink hook (passwords)
#define RCO_BOXED              0x00000100L  // valid rc.guide provided
#define RCO_SUGGEST            0x00000200L  // for dict suggest
#define RCO_DISABLEGESMAP      0x00000400L  // disable gesture mapping
#define RCO_NOFLASHCURSOR      0x00000800L  // no cursor feedback
#define RCO_BOXCROSS           0x00001000L  // show + at boxedit center
#define RCO_COLDRECOG          0x00008000L  // result is from cold recog

#define RCO_SAVEBACKGROUND     0x00010000L  // Save background from ink
#define RCO_DODEFAULT          0x00020000L  // do default gesture processing

// RC Direction:
#define RCD_DEFAULT            0            // def none
#define RCD_LR                 1            // left to right like English
#define RCD_RL                 2            // right to left like Arabic
#define RCD_TB                 3            // top to bottom like Japanese
#define RCD_BT                 4            // bottom to top like some Chinese

// RC Preferences:
#define RCP_LEFTHAND           0x0001    // left handed input
#define RCP_MAPCHAR            0x0004    // fill in syg.lpsyc (ink) for training

// RC Orientation of Tablet:
#define RCOR_NORMAL            1            // tablet not rotated
#define RCOR_RIGHT             2            // rotated 90 deg anticlockwise
#define RCOR_UPSIDEDOWN        3            // rotated 180 deg
#define RCOR_LEFT              4            // rotated 90 deg clockwise

// RC Result Return Mode specification:
#define RRM_STROKE             0            // return results after each stroke
#define RRM_SYMBOL             1            // per symbol (e.g. boxed edits)
#define RRM_WORD               2            // on recog of a word
#define RRM_NEWLINE            3            // on recog of a line break
#define RRM_COMPLETE           16           // on PCM_xx specified completion

// RC International Preferences:
#define RCIP_ALLANSICHAR       0x0001       // all ANSI chars
#define RCIP_MASK              0x0001

// CorrectWriting() API constants:
#define CWR_STRIPCR            0x00000001L  // strip carriage ret (\r)
#define CWR_STRIPLF            0x00000002L  // strip    linefeed (\n)
#define CWR_STRIPTAB           0x00000004L  // strip tab (\t)
#define CWR_SINGLELINEEDIT     0x00000007L  // all of the above
#define CWR_TITLE              0x00000010L  // interp dwReserved as LPSTR

// Gesture Mapping aliases:
#define MAP_GESTOGES           (RCRT_GESTURE|RCRT_GESTURETRANSLATED)
#define MAP_GESTOVKEYS         (RCRT_GESTURETOKEYS|RCRT_ALREADYPROCESSED)

// Pen Data Scaling values:
#define PDTS_LOMETRIC          0x0000     // 0.01mm
#define PDTS_HIMETRIC          0x0001     // 0.001mm
#define PDTS_HIENGLISH         0x0002     // 0.001"
#define PDTS_SCALEMAX          0x0003
#define PDTS_DISPLAY           0x0003     // display pixel
#define PDTS_ARBITRARY         0x0004     // app-specific scaling
#define PDTS_SCALEMASK         0x000F
#define PDTS_STANDARDSCALE     PDTS_HIENGLISH   // alias

// compact pen data trim options (internal):
#define PDTS_NOPENINFO         0x0100     // removes PENINFO struct from header
#define PDTS_NOUPPOINTS        0x0200     // remove up pts
#define PDTS_NOOEMDATA         0x0400     // remove OEM data
#define PDTS_NOCOLINEAR        0x0800     // remove successive identical pts
#define PDTS_COMPRESSED        0x8000     // perform lossless compression
#define PDTS_COMPRESSMETHOD    0x00F0     // sum of compress method flags
#define PDTS_COMPRESS2NDDERIV  0x0010     // compress using 2nd deriv

// CompactPenData() API trim options:
#define PDTT_DEFAULT           0x0000
#define PDTT_PENINFO           PDTS_NOPENINFO   // aliases; see above
#define PDTT_UPPOINTS          PDTS_NOUPPOINTS
#define PDTT_OEMDATA           PDTS_NOOEMDATA
#define PDTT_COLINEAR          PDTS_NOCOLINEAR
#define PDTT_COMPRESS          PDTS_COMPRESSED
#define PDTT_DECOMPRESS        0x4000           // decompress the data
#define PDTT_ALL (PDTT_PENINFO|PDTT_UPPOINTS|PDTT_OEMDATA|PDTT_COLINEAR)

// Dictionary:
#define cbDictPathMax          255
#define DIRQ_QUERY             1
#define DIRQ_DESCRIPTION       2
#define DIRQ_CONFIGURE         3
#define DIRQ_OPEN              4
#define DIRQ_CLOSE             5
#define DIRQ_SETWORDLISTS      6
#define DIRQ_STRING            7
#define DIRQ_SUGGEST           8
#define DIRQ_ADD               9
#define DIRQ_DELETE            10
#define DIRQ_FLUSH             11
#define DIRQ_RCCHANGE          12
#define DIRQ_SYMBOLGRAPH       13
#define DIRQ_INIT              14
#define DIRQ_CLEANUP           15
#define DIRQ_COPYRIGHT         16
#define DIRQ_USER              4096

// Windows Messages:
// (windows.h defines WM_PENWINFIRST == 0x0380, WM_PENWINLAST == 0x038F)

#define WM_RCRESULT            (WM_PENWINFIRST+1)   // 0x381
    // wParam: REC code indicating why recognition ended
    // lParam: ptr to RCRESULT struct

#define WM_HOOKRCRESULT        (WM_PENWINFIRST+2)   // 0x382
    // wParam: REC code indicating why recognition ended
    // lParam: ptr to RCRESULT struct

#define WM_GLOBALRCCHANGE      (WM_PENWINFIRST+3)   // 0x383
    // wParam: not used
    // lParam: not used

#define WM_SKB                 (WM_PENWINFIRST+4)   // 0x384
    // wParam: SKN_CHANGED
    // lParam LO: SKN_xx flag telling what changed
    // lParam HI: window handle of screen keyboard

#define WM_HEDITCTL            (WM_PENWINFIRST+5)   // 0x385
#define WM_PENCTL              (WM_PENWINFIRST+5)   // alias
    // wParam: HE_xx subfunction
    // lParam: depends on wParam

#define WM_PENMISC             (WM_PENWINFIRST+6)   // 0x386
    // wParam: PMSC_xx subfunction
    // lParam: depends on wParam

#define WM_CTLINIT             (WM_PENWINFIRST+7)   // 0x387
    // wParam: CTLINIT_xx type of control
    // lParam: ptr to control struct (CTLINITBEDIT, CTLINITCOMBOBOX, etc)

#define WM_PENEVENT            (WM_PENWINFIRST+8)   // 0x388
    // wParam: PE_xx value indicating type of event
    // lParam LO: EventRef index used in GetPenEventInfo()
    // lParam HI: PDK_xx pen state bits

#define WM_SUBINP              (WM_PENWINFIRST+9)   // 0x389
    // wParam: SIN_CHANGED
    // lParam LO: SIN_xx flag telling what changed
    // lParam HI: window handle of the sub input dialog

// WM_HEDITCTL (WM_PENCTL) wParam options:
#define HE_GETRC               3        // get RC from HEDIT/BEDIT control
#define HE_SETRC               4        // ditto set
#define HE_GETINFLATE          5        // get inflate rect
#define HE_SETINFLATE          6        // ditto set
#define HE_GETUNDERLINE        7        // get underline mode
#define HE_SETUNDERLINE        8        // ditto set
#define HE_GETINKHANDLE        9        // get handle to captured ink
#define HE_SETINKMODE          10       // begin HEDIT cold recog mode
#define HE_STOPINKMODE         11       // end cold recog mode
#define HE_GETRCRESULTCODE     12       // get result of recog after HN_ENDREC
#define HE_DEFAULTFONT         13       // switch BEDIT to def font
#define HE_CHARPOSITION        14       // BEDIT byte offset -> char position
#define HE_CHAROFFSET          15       // BEDIT char position -> byte offset
#define HE_TARGETTABLE         16       // control allows smart targeting
#define HE_GETBOXLAYOUT        20       // get BEDIT layout
#define HE_SETBOXLAYOUT        21       // ditto set
#define HE_GETRCRESULT         22       // get RCRESULT after HN_RCRESULT
#define HE_KKCONVERT           30       // JPN start kana-kanji conversion
#define HE_GETKKCONVERT        31       // JPN get KK state
#define HE_CANCELKKCONVERT     32       // JPN cancel KK conversion
#define HE_FIXKKCONVERT        33       // JPN force KK result
#define HE_ENABLEALTLIST       40       // en/disable dropdown recog alt's
#define HE_SHOWALTLIST         41       // show dropdown (assume enabled)
#define HE_HIDEALTLIST         42       // hide dropdown alternatives

// JPN KanaKanji conversion subfunctions:
#define HEKK_DEFAULT           0        // def
#define HEKK_CONVERT           1        // convert in place
#define HEKK_CANDIDATE         2        // start conversion dialog

// HE_STOPINKMODE (stop cold recog) options:
#define HEP_NORECOG            0        // don't recog ink
#define HEP_RECOG              1        // recog ink
#define HEP_WAITFORTAP         2        // recog after tap in window

// WM_PENCTL notifications:
#define HN_ENDREC              4        // recog complete
#define HN_DELAYEDRECOGFAIL    5        // HE_STOPINKMODE (cold recog) failed
#define HN_RCRESULT            20       // HEDIT/BEDIT has an RCRESULT
#define HN_ENDKKCONVERT        30       // JPN KK conversion complete

// box edit alternative list:
#define HEAL_DEFAULT           -1L      // AltList def value for lParam

// box edit styles:
#define BXS_NONE               0x0000U  // none
#define BXS_RECT               0x0001U  // use rectangle instead of cusp
#define BXS_ENDTEXTMARK        0x0002U  // show mark at eot
#define BXS_MASK               0x0003U  // mask for above

// box edit Info:
#define BEI_FACESIZE           LF_FACESIZE  // max size of font name
#define BEIF_BOXCROSS          0x0001

// box edit size:
#define BESC_DEFAULT           0
#define BESC_ROMANFIXED        1
#define BESC_KANJIFIXED        2
#define BESC_USERDEFINED       3

#define BXD_CELLWIDTH          12
#define BXD_CELLHEIGHT         16
#define BXD_BASEHEIGHT         13
#define BXD_BASEHORZ           0
#define BXD_MIDFROMBASE        0
#define BXD_CUSPHEIGHT         2
#define BXD_ENDCUSPHEIGHT      4

#define BXDK_CELLWIDTH         32
#define BXDK_CELLHEIGHT        32
#define BXDK_BASEHEIGHT        28
#define BXDK_BASEHORZ          0
#define BXDK_MIDFROMBASE       0
#define BXDK_CUSPHEIGHT        28
#define BXDK_ENDCUSPHEIGHT     10

// ComboBox notification extensions:
#define CBN_ENDREC             16
#define CBN_DELAYEDRECOGFAIL   17
#define CBN_RCRESULT           18

// WM_PENMISC message constants:
#define PMSC_BEDITCHANGE       1        // broadcast when BEDIT changes
#define PMSC_PENUICHANGE       2        // JPN broadcast when PENUI changes
#define PMSC_SUBINPCHANGE      3        // JPN broadcast when SUBINPUT changes
#define PMSC_KKCTLENABLE       4
#define PMSC_INTERNAL          0xffff


// WM_CTLINIT message constants:
#define CTLINIT_MSGBOX         0
#define CTLINIT_EDIT           1
#define CTLINIT_LISTBOX        2
#define CTLINIT_BTN            3
#define CTLINIT_DLG            4
#define CTLINIT_SCROLLBAR      5
#define CTLINIT_STATIC         6
#define CTLINIT_BEDIT          7
#define CTLINIT_COMBOBOX       8
#define CTLINIT_IEDIT          9
#define CTLINIT_MAX            10

// WM_PENEVENT message values for wParam:
#define PE_TIP                 1        // pen tip down or up
#define PE_BARREL              2        // barrel button pressed or released
#define PE_END                 3        // opposite end of pen down or up
#define PE_RANGE               4        // pen entereing or leaving range
#define PE_BUFFER              5        // wEventRef buffer warning


// Misc Pen Info:
#define PMI_BEDIT              1

#define SPMI_OK                      0L
#define SPMI_INVALIDBOXEDITINFO      1L
#define SPMI_INIERROR                2L
#define SPMI_INVALIDPMI              0x8000L

#define GPMI_OK                      0L
#define GPMI_INVALIDPMI              0x8000L

// Ink Targeting:

// Public Bitmaps :
#define OBM_SKBBTNUP           32767
#define OBM_SKBBTNDOWN         32766
#define OBM_SKBBTNDISABLED     32765

#define OBM_ZENBTNUP           32764
#define OBM_ZENBTNDOWN         32763
#define OBM_ZENBTNDISABLED     32762

#define OBM_HANBTNUP           32761
#define OBM_HANBTNDOWN         32760
#define OBM_HANBTNDISABLED     32759

#define OBM_KKCBTNUP           32758
#define OBM_KKCBTNDOWN         32757
#define OBM_KKCBTNDISABLED     32756

#define OBM_SIPBTNUP           32755
#define OBM_SIPBTNDOWN         32754
#define OBM_SIPBTNDISABLED     32753

#define OBM_PTYBTNUP           32752
#define OBM_PTYBTNDOWN         32751
#define OBM_PTYBTNDISABLED     32750



/****** Macros **************************************************************/

// misc macros:
#define FPenUpX(x)             ((BOOL)(((x) & BITPENUP) != 0))
#define GetWEventRef()         (LOWORD(GetMessageExtraInfo()))
#define DestroyPenData(h)      (GlobalFree(h) == NULL)
#define EndEnumStrokes(h)      GlobalUnlock(h)

// SYV macros:
#define FIsSpecial(syv)        (HIWORD((syv))==SYVHI_SPECIAL)
#define FIsAnsi(syv)           (HIWORD((syv))==SYVHI_ANSI)
#define FIsGesture(syv)        (HIWORD((syv))==SYVHI_GESTURE)
#define FIsKanji(syv)          (HIWORD((syv))==SYVHI_KANJI)
#define FIsShape(syv)          (HIWORD((syv))==SYVHI_SHAPE)
#define FIsUniCode(syv)        (HIWORD((syv))==SYVHI_UNICODE)
#define FIsVKey(syv)           (HIWORD((syv))==SYVHI_VKEY)

#define ChSyvToAnsi(syv)       ((BYTE) (LOBYTE(LOWORD((syv)))))
#define WSyvToKanji(syv)       ((WORD) (LOWORD((syv))))
#define SyvCharacterToSymbol(c) ((LONG)(unsigned char)(c) | 0x00010000)
#define SyvKanjiToSymbol(c)     ((LONG)(WORD)(c) | 0x00030000)

#define FIsSelectGesture(syv)  \
   ((syv) >= SYVSELECTFIRST && (syv) <= SYVSELECTLAST)

#define FIsStdGesture(syv)     \
   (                           \
   FIsSelectGesture(syv)       \
   || (syv) == SYV_CLEAR       \
   || (syv) == SYV_HELP        \
   || (syv) == SYV_EXTENDSELECT\
   || (syv) == SYV_UNDO        \
   || (syv) == SYV_COPY        \
   || (syv) == SYV_CUT         \
   || (syv) == SYV_PASTE       \
   || (syv) == SYV_CLEARWORD   \
   || (syv) == SYV_KKCONVERT   \
   || (syv) == SYV_USER        \
   || (syv) == SYV_CORRECT     \
   )

#define FIsAnsiGesture(syv)    \
   (                           \
   (syv) == SYV_BACKSPACE      \
   || (syv) == SYV_TAB         \
   || (syv) == SYV_RETURN      \
   || (syv) == SYV_SPACE       \
   )

// ALC macros:
#define MpAlcB(lprc,i) ((lprc)->rgbfAlc[((i) & 0xff) >> 3])
#define MpIbf(i)       ((BYTE)(1 << ((i) & 7)))
#define SetAlcBitAnsi(lprc,i)   do {MpAlcB(lprc,i) |= MpIbf(i);} while (0)
#define ResetAlcBitAnsi(lprc,i) do {MpAlcB(lprc,i) &= ~MpIbf(i);} while (0)
#define IsAlcBitAnsi(lprc, i)   ((MpAlcB(lprc,i) & MpIbf(i)) != 0)

// Gesture Macros:
#define FIsLoAppGesture(syv)   (syv >= SYV_CIRCLELOA && syv <= SYV_CIRCLELOZ)
#define FIsUpAppGesture(syv)   (syv >= SYV_CIRCLEUPA && syv <= SYV_CIRCLEUPZ)
#define FIsAppGesture(syv)     (syv>=SYV_CIRCLEUPA && syv<=SYV_CIRCLELOZ)
#define SyvAppGestureFromLoAnsi(ansi) ((DWORD)(BYTE)ansi- 'a' + SYV_CIRCLELOA)
#define SyvAppGestureFromUpAnsi(ansi) ((DWORD)(BYTE)ansi- 'A' + SYV_CIRCLEUPA)
#define AnsiFromSyvAppGesture(syv) ChSyvToAnsi( \
    syv-(FIsUpAppGesture(syv)? SYV_CIRCLEUPA-(SYV)'A': SYV_CIRCLELOA-(SYV)'a'))

#define IsGestureToGesture(lprcresult) \
   (((lprcresult)->wResultstype & MAP_GESTOGES) == MAP_GESTOGES)

#define IsGestureToVkeys(lprcresult) \
   (((lprcresult)->wResultstype & MAP_GESTOVKEYS) == MAP_GESTOVKEYS)

#define SetAlreadyProcessed(lprcresult) \
   ((lprcresult)->wResultsType = ((lprcresult)->wResultsType \
   & ~RCRT_GESTURETOKEYS) | RCRT_ALREADYPROCESSED)



/****** Typedefs ************************************************************/

typedef int                    REC;     // recognition result
typedef LONG                   SYV;     // Symbol Value
typedef SYV FAR                *LPSYV;  // ptr to SYV
typedef HANDLE                 HREC;    // handle to recognizer
typedef int                    CL;      // Confidence Level
typedef LONG                   ALC;     // Enabled Alphabet
typedef UINT                   HKP;     // Hook Parameter
typedef int (CALLBACK * LPDF)(int, LPVOID, LPVOID, int, DWORD, DWORD);

typedef struct tagOEMPENINFO            // OEM pen/tablet hdwe info
   {
   UINT wPdt;                           // pen data type
   UINT wValueMax;                      // largest val ret by device
   UINT wDistinct;                      // number of distinct readings possible
   }
   OEMPENINFO, FAR *LPOEMPENINFO;

typedef struct tagPENPACKET             // pen packet
   {
   UINT wTabletX;                       // x in raw coords
   UINT wTabletY;                       // ditto y
   UINT wPDK;                           // state bits
   UINT rgwOemData[MAXOEMDATAWORDS];    // OEM-specific data
   }
   PENPACKET, FAR *LPPENPACKET;

typedef BOOL (CALLBACK * LPFNRAWHOOK)(LPPENPACKET);

typedef struct tagPENINFO        // pen/tablet hdwe info
   {
   UINT cxRawWidth;              // max x coord and tablet width in 0.001"
   UINT cyRawHeight;             // ditto y, height
   UINT wDistinctWidth;          // number of distinct x values tablet ret
   UINT wDistinctHeight;         // ditto y
   int nSamplingRate;            // samples / second
   int nSamplingDist;            // min distance to move before generating event
   LONG lPdc;                    // Pen Device Capabilities
   int cPens;                    // number of pens supported
   int cbOemData;                // width of OEM data packet
   OEMPENINFO rgoempeninfo[MAXOEMDATAWORDS];    // supported OEM data types
   UINT rgwReserved[8];          // for internal use
   }
   PENINFO, FAR *LPPENINFO;

typedef struct tagSTROKEINFO     // stroke header
   {
   UINT cPnt;                    // count of points in stroke
   UINT cbPnts;                  // size of stroke in bytes
   UINT wPdk;                    // state of stroke
   DWORD dwTick;                 // time at beginning of stroke
   }
   STROKEINFO, FAR *LPSTROKEINFO;

typedef struct tagCALBSTRUCT     // pen calibration
   {
   int wOffsetX;
   int wOffsetY;
   int wDistinctWidth;
   int wDistinctHeight;
   }
   CALBSTRUCT, FAR *LPCALBSTRUCT;

typedef HANDLE HPENDATA;         // handle to ink

typedef struct tagSYC            // Symbol Correspondence for Ink
   {
   UINT wStrokeFirst;            // first stroke, inclusive
   UINT wPntFirst;               // first point in first stroke, inclusive
   UINT wStrokeLast;             // last stroke, inclusive
   UINT wPntLast;                // last point in last stroke, inclusive
   BOOL fLastSyc;                // T: no more SYCs follow for current SYE
   }
   SYC, FAR *LPSYC;

typedef struct tagSYE            // Symbol Element
   {
   SYV syv;                      // symbol value
   LONG lRecogVal;               // for internal use by recognizer
   CL cl;                        // confidence level
   int iSyc;                     // SYC index
   }
   SYE, FAR *LPSYE;

typedef struct tagSYG            // Symbol Graph
   {
   POINT rgpntHotSpots[MAXHOTSPOT]; // hot spots (max 8)
   int cHotSpot;                 // number of valid hot spots in rgpntHotSpots
   int nFirstBox;                // row-major index to box of 1st char in result
   LONG lRecogVal;               // reserved for use by recoognizer
   LPSYE lpsye;                  // nodes of symbol graph
   int cSye;                     // number of SYEs in symbol graph
   LPSYC lpsyc;                  // ptr to corresp symbol ink
   int cSyc;                     // ditto count
   }
   SYG, FAR *LPSYG;

typedef int (CALLBACK *ENUMPROC)(LPSYV, int, VOID FAR *);

typedef struct tagGUIDE          // guide structure
   {
   int xOrigin;                  // left edge of first box (screen coord))
   int yOrigin;                  // ditto top edge
   int cxBox;                    // width of a single box
   int cyBox;                    // ditto height
   int cxBase;                   // in-box x-margin to guideline
   int cyBase;                   // in-box y offset from top to baseline
   int cHorzBox;                 // count of boxed columns
   int cVertBox;                 // ditto rows
   int cyMid;                    // 0 or distance from baseline to midline
   }
   GUIDE, FAR *LPGUIDE;

typedef BOOL (CALLBACK *RCYIELDPROC)(VOID);

typedef struct tagRC             // Recognition Context (RC)
   {
   HREC hrec;                    // handle of recognizer to use
   HWND hwnd;                    // window to send results to
   UINT wEventRef;               // index into ink buffer
   UINT wRcPreferences;          // flags: RCP_xx Preferences
   LONG lRcOptions;              // RCO_xx options
   RCYIELDPROC lpfnYield;        // procedure called during Yield()
   BYTE lpUser[cbRcUserMax];     // current writer
   UINT wCountry;                // country code
   UINT wIntlPreferences;        // flags: RCIP_xx
   char lpLanguage[cbRcLanguageMax];    // language strings
   LPDF rglpdf[MAXDICTIONARIES]; // list of dictionary functions
   UINT wTryDictionary;          // max enumerations to search
   CL clErrorLevel;              // level where recognizer should reject input
   ALC alc;                      // enabled alphabet
   ALC alcPriority;              // prioritizes the ALC_ codes
   BYTE rgbfAlc[cbRcrgbfAlcMax]; // bit field for enabled characters
   UINT wResultMode;             // RRM_xx when to send (asap or when complete)
   UINT wTimeOut;                // recognition timeout in ms
   LONG lPcm;                    // flags: PCM_xx for ending recognition
   RECT rectBound;               // bounding rect for inking (def:screen coords)
   RECT rectExclude;             // pen down inside this terminates recognition
   GUIDE guide;                  // struct: defines guidelines for recognizer
   UINT wRcOrient;               // RCOR_xx orientation of writing wrt tablet
   UINT wRcDirect;               // RCD_xx direction of writing
   int nInkWidth;                // ink width 0 (none) or 1..15 pixels
   COLORREF rgbInk;              // ink color
   DWORD dwAppParam;             // for application use
   DWORD dwDictParam;            // for app use to be passed on to dictionaries
   DWORD dwRecognizer;           // for app use to be passed on to recognizer
   UINT rgwReserved[cwRcReservedMax];   // reserved for future use by Windows
   }
   RC, FAR *LPRC;

typedef struct tagRCRESULT       // Recognition Result
   {
   SYG syg;                      // symbol graph
   UINT wResultsType;            // see RCRT_xx
   int cSyv;                     // count of symbol values
   LPSYV lpsyv;                  // NULL-term ptr to recog's best guess
   HANDLE hSyv;                  // globally-shared handle to lpsyv mem
   int nBaseLine;                // 0 or baseline of input writing
   int nMidLine;                 // ditto midline
   HPENDATA hpendata;            // pen data mem
   RECT rectBoundInk;            // ink data bounds
   POINT pntEnd;                 // pt that terminated recog
   LPRC lprc;                    // recog context used
   }
   RCRESULT, FAR *LPRCRESULT;

typedef struct tagPENDATAHEADER  // main pen data header
   {
   UINT wVersion;                // pen data format version
   UINT cbSizeUsed;              // size of pendata mem block in bytes
   UINT cStrokes;                // number of strokes (incl up-strokes)
   UINT cPnt;                    // count of all points
   UINT cPntStrokeMax;           // length (in points) of longest stroke
   RECT rectBound;               // bounding rect of all down points
   UINT wPndts;                  // PDTS_xx bits
   int  nInkWidth;               // ink width in pixels
   DWORD rgbInk;                 // ink color
   }
   PENDATAHEADER, FAR *LPPENDATAHEADER, FAR *LPPENDATA;

typedef struct tagRECTOFS        // rectangle offset for nonisometric inflation
   {
   int dLeft;                    // inflation leftwards from left side
   int dTop;                     // ditto upwards from top
   int dRight;                   // ditto rightwards from right
   int dBottom;                  // ditto downwards from bottom
   }
   RECTOFS, FAR *LPRECTOFS;

typedef struct tagBOXLAYOUT      // box edit layout
   {
   int cyCusp;                   // pixel height of box (BXS_RECT) or cusp
   int cyEndCusp;                // pixel height of cusps at extreme ends
   UINT style;                   // BXS_xx style
   DWORD rgbText;                // color of text (-1: window text color)
   DWORD rgbBox;                 // color of box (-1: window frame color)
   DWORD rgbSelect;              // color of sel (-1: window seltext color)
   }
   BOXLAYOUT, FAR *LPBOXLAYOUT;




typedef struct tagCTLINITBEDIT   // init struct for box edit
   {
   HWND hwnd;                    // box edit window handle
   int id;                       // its id
   int wSizeCategory;            // BESC_xx
   DWORD dwReserved;             // for future use
   }
   CTLINITBEDIT, FAR * LPCTLINITBEDIT;

typedef struct tagCTLINITCOMBOBOX // init struct for combo box
   {
   HWND hwnd;                     // combo box window handle
   int id;                        // its id
   BOOL fUseBedit;                // T: use box edit in top control, else HEDIT
   }
   CTLINITCOMBOBOX, FAR * LPCTLINITCOMBOBOX;

typedef struct tagBOXEDITINFO     // box edit Size Info
   {
   int cxBox;                     // width of a single box
   int cyBox;                     // ditto height
   int cxBase;                    // in-box x-margin to guideline
   int cyBase;                    // in-box y offset from top to baseline
   int cyMid;                     // 0 or distance from baseline to midline
   BOXLAYOUT boxlayout;           // embedded BOXLAYOUT structure
   UINT wFlags;                   // BEIF_xx
   BYTE szFaceName[BEI_FACESIZE]; // font face name
   UINT wFontHeight;              // font height
   UINT rgwReserved[8];           // for future use
   }
   BOXEDITINFO, FAR *LPBOXEDITINFO;



/****** Prototypes **********************************************************/

// Pen Hdwe functions:
VOID WINAPI UpdatePenInfo(LPPENINFO);
BOOL WINAPI EndPenCollection(REC);
REC  WINAPI GetPenHwData(LPPOINT, LPVOID, int, UINT, LPSTROKEINFO);
REC  WINAPI GetPenHwEventData(UINT, UINT, LPPOINT, LPVOID, int, LPSTROKEINFO);
VOID WINAPI PenPacket(VOID);
BOOL WINAPI SetPenHook(HKP, LPFNRAWHOOK);

// Virtual Event Layer:
VOID WINAPI PostVirtualKeyEvent(UINT, BOOL);
VOID WINAPI PostVirtualMouseEvent(UINT, int, int);
VOID WINAPI AtomicVirtualEvent(BOOL);

// RC functions:
HREC WINAPI InstallRecognizer(LPSTR);
VOID WINAPI UninstallRecognizer(HREC);
UINT WINAPI GetGlobalRC(LPRC, LPSTR, LPSTR, int);
UINT WINAPI SetGlobalRC(LPRC, LPSTR, LPSTR);
VOID WINAPI RegisterPenApp(UINT, BOOL);
UINT WINAPI IsPenAware(VOID);
BOOL WINAPI SetRecogHook(UINT, UINT, HWND);
VOID WINAPI InitRC(HWND, LPRC);
REC  WINAPI Recognize(LPRC);
REC  WINAPI RecognizeData(LPRC, HPENDATA);
BOOL WINAPI TrainInk(LPRC, HPENDATA, LPSYV);
BOOL WINAPI TrainContext(LPRCRESULT, LPSYE, int, LPSYC, int);
REC  WINAPI ProcessWriting(HWND, LPRC);
BOOL WINAPI CorrectWriting(HWND, LPSTR, UINT, LPRC, DWORD, DWORD);
VOID WINAPI EmulatePen(BOOL);
int  WINAPI GetSymbolMaxLength(LPSYG);
int  WINAPI GetSymbolCount(LPSYG);
VOID WINAPI FirstSymbolFromGraph(LPSYG, LPSYV, int, int FAR *);
UINT WINAPI EnumSymbols(LPSYG, WORD, ENUMPROC, LPVOID);

// Miscellaneous Functions:
BOOL WINAPI TPtoDP(LPPOINT, int);
BOOL WINAPI DPtoTP(LPPOINT, int);
VOID WINAPI BoundingRectFromPoints(LPPOINT, int, LPRECT);
BOOL WINAPI SymbolToCharacter(LPSYV, int, LPSTR, LPINT);
int  WINAPI CharacterToSymbol(LPSTR, int, LPSYV);
UINT WINAPI GetVersionPenWin(VOID);
BOOL WINAPI ExecuteGesture(HWND, SYV, LPRCRESULT);
BOOL WINAPI IsPenEvent(UINT, LONG);
BOOL WINAPI GetPenAsyncState(UINT);
BOOL WINAPI DictionarySearch(LPRC, LPSYE, int, LPSYV, int);
BOOL WINAPI ShowKeyboard(HWND, UINT, LPPOINT, LPSKBINFO);
LONG WINAPI GetPenMiscInfo(WPARAM wParam, LPARAM lParam);
LONG WINAPI SetPenMiscInfo(WPARAM wParam, LPARAM lParam);

// PenData functions:
BOOL WINAPI GetPenDataInfo(HPENDATA, LPPENDATAHEADER, LPPENINFO, DWORD);
BOOL WINAPI GetPenDataStroke(LPPENDATA, UINT, LPPOINT FAR *, LPVOID FAR *,
    LPSTROKEINFO );
BOOL WINAPI GetPointsFromPenData(HPENDATA, UINT, UINT, UINT, LPPOINT);
VOID WINAPI DrawPenData(HDC, LPRECT, HPENDATA);
BOOL WINAPI MetricScalePenData(HPENDATA, UINT);
BOOL WINAPI ResizePenData(HPENDATA, LPRECT);
BOOL WINAPI OffsetPenData(HPENDATA, int, int);
BOOL WINAPI RedisplayPenData(HDC, HPENDATA, LPPOINT, LPPOINT, int, DWORD);
HPENDATA  WINAPI CompactPenData(HPENDATA, UINT);
BOOL      WINAPI MergePenData(HPENDATA, HPENDATA);
HPENDATA  WINAPI DuplicatePenData(HPENDATA, UINT);
HPENDATA  WINAPI CreatePenData(LPPENINFO, int, UINT, UINT);
HPENDATA  WINAPI AddPointsPenData(HPENDATA, LPPOINT, LPVOID, LPSTROKEINFO);
LPPENDATA WINAPI BeginEnumStrokes(HPENDATA );

// Ink Targeting functions:

BOOL WINAPI KKConvert(HWND hwndConvert, HWND hwndCaller, LPSTR lpBuf, UINT cbBuf, LPPOINT lpPnt);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#ifndef RC_INVOKED
#pragma pack()
#endif /* RC_INVOKED */

#endif /* #define _INC_PENWIN */
