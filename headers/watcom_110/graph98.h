/*
 *  graph.h     Graphics functions
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _GRAPH_H_INCLUDED
#define _GRAPH_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#if defined(_M_IX86)
  #pragma pack(__push,1);
#else
  #pragma pack(__push,8);
#endif

#pragma library (graph98);

struct xycoord {                /* structure for pixel position */
	short   xcoord;
	short   ycoord;
};

struct _wxycoord {              /* structure for window position*/
	double  wx;
	double  wy;
};

struct rccoord {                /* structure for text position  */
	short   row;
	short   col;
};

struct videoconfig {            /* structure for _getvideoconfig */
	short   numxpixels;
	short   numypixels;
	short   numtextcols;
	short   numtextrows;
	short   numcolors;
	short   bitsperpixel;
	short   numvideopages;
	short   mode;
	short   adapter;
	short   monitor;
	short   memory;
};

struct textsettings {           /* structure for _gettextsettings */
	short   basevectorx;
	short   basevectory;
	short   txpath;
	short   height;
	short   width;
	short   spacing;
	short   horizalign;
	short   vertalign;
};

struct _fontinfo {              /* structure for _getfontinfo */
	short   type;
	short   ascent;
	short   pixwidth;
	short   pixheight;
	short   avgwidth;
	char    filename[ 81 ];
	char    facename[ 32 ];
};

/* Calling conventions for -fpi(87) are different than for -fpc */
#if defined( __FPI__ )
    #define _arc_w              _arc_w_87
    #define _ellipse_w          _ellipse_w_87
    #define _floodfill_w        _floodfill_w_87
    #define _getimage_w         _getimage_w_87
    #define _getpixel_w         _getpixel_w_87
    #define _getviewcoord_w     _getviewcoord_w_87
    #define _grtext_w           _grtext_w_87
    #define _imagesize_w        _imagesize_w_87
    #define _lineto_w           _lineto_w_87
    #define _moveto_w           _moveto_w_87
    #define _pie_w              _pie_w_87
    #define _putimage_w         _putimage_w_87
    #define _rectangle_w        _rectangle_w_87
    #define _setcharsize_w      _setcharsize_w_87
    #define _setcharspacing_w   _setcharspacing_w_87
    #define _setpixel_w         _setpixel_w_87
    #define _setwindow          _setwindow_87
#endif

/* Video Setup and Query Functions */

short _WCI86FAR         _setvideomode( short );
short _WCI86FAR         _setvideomoderows( short, short );
struct videoconfig _WCI86FAR * _WCI86FAR
			_getvideoconfig( struct videoconfig _WCI86FAR * );
short _WCI86FAR         _grstatus( void );
short _WCI86FAR         _setactivepage( short );
short _WCI86FAR         _getactivepage( void );
short _WCI86FAR         _setvisualpage( short );
short _WCI86FAR         _getvisualpage( void );

#define _MAXRESMODE     (-3)    /* graphics mode with highest res. */
#define _MAXCOLORMODE   (-2)    /* graphics mode with most colours */
#define _DEFAULTMODE    (-1)    /* restore screen to original mode */
#define _98TEXT80        3      /* 80 column text, 8 color         */
#define _98RESSCOLOR     81     /* 640 x 400, 8 color (superimpose)*/
#define _98RESS8COLOR    84     /* 640 x 400, 8 of 4096 (superimpose)*/
#define _98RESS16COLOR   85     /* 640 x 400, 16 of 4096 (superimpose)*/
#define _98HIRESS16COLOR 93     /* 1120 x 750, 16 of 4096 (superimpose)*/
#define _98RESCOLOR      97     /* 640 x 400, 8 color              */
#define _98RES8COLOR     100    /* 640 x 400, 8 of 4096 color      */
#define _98RES16COLOR    101    /* 640 x 400, 16 of 4096 color     */
#define _98HIRES16COLOR  109    /* 1120 x 750, 16 of 4096 color    */

#define _NODISPLAY      (-1)    /* no display device            */
#define _UNKNOWN        0       /* unknown adapter/monitor type */

#define _98CGA          0x2000  /* Color Graphics Adapter (digital)   */
#define _98EGA          0x4000  /* Enhanced Graphics Adapter (analog) */

#define _98ANALOG       0x0100  /* Analog color monitor               */
#define _98DIGITAL      0x0200  /* Digital color monitor              */

#define _GROK                   0      /* no error                     */
#define _GRERROR                (-1)   /* graphics error               */
#define _GRMODENOTSUPPORTED     (-2)   /* video mode not supported     */
#define _GRNOTINPROPERMODE      (-3)   /* function n/a in this mode    */
#define _GRINVALIDPARAMETER     (-4)   /* invalid parameter(s)         */
#define _GRINSUFFICIENTMEMORY   (-5)   /* out of memory                */
#define _GRFONTFILENOTFOUND     (-6)   /* can't open font file         */
#define _GRINVALIDFONTFILE      (-7)   /* font file has invalid format */
#define _GRNOOUTPUT             1      /* nothing was done             */
#define _GRCLIPPED              2      /* output clipped               */

/* Colour Setting and Query Functions */

short _WCI86FAR         _setcolor( short );
short _WCI86FAR         _getcolor( void );
long _WCI86FAR          _setbkcolor( long );
long _WCI86FAR          _getbkcolor( void );
long _WCI86FAR          _remappalette( short, long );
short _WCI86FAR         _remapallpalette( long _WCI86FAR * );
short _WCI86FAR         _selectpalette( short );

#define _98BLACK        0x000000L      /* colour values for analog display */
#define _98BLUE         0x0F0000L
#define _98GREEN        0x000F00L
#define _98CYAN         0x0F0F00L
#define _98RED          0x00000FL
#define _98MAGENTA      0x0F000FL
#define _98YELLOW       0x000F0FL
#define _98WHITE        0x0F0F0FL
#define _98GRAY         0x080808L
#define _98DARKBLUE     0x080000L
#define _98DARKGREEN    0x000800L
#define _98DARKCYAN     0x080800L
#define _98DARKRED      0x000008L
#define _98DARKMAGENTA  0x080008L
#define _98DARKYELLOW   0x000808L
#define _98DARKWHITE    0x0C0C0CL

#define _98BLACK_D      0x000000L      /* colour values for digital display */
#define _98BLUE_D       0x000001L
#define _98GREEN_D      0x000002L
#define _98CYAN_D       0x000003L
#define _98RED_D        0x000004L
#define _98MAGENTA_D    0x000005L
#define _98YELLOW_D     0x000006L
#define _98WHITE_D      0x000007L

/* Shape and Curve Drawing Functions */

short _WCI86FAR         _lineto( short, short );
short _WCI86FAR         _lineto_w( double, double );
short _WCI86FAR         _rectangle( short, short, short, short, short );
short _WCI86FAR         _rectangle_w( short, double, double, double, double );
short _WCI86FAR         _rectangle_wxy( short, struct _wxycoord _WCI86FAR *,
					       struct _wxycoord _WCI86FAR * );
short _WCI86FAR         _arc( short, short, short, short, short, short,
			      short, short );
short _WCI86FAR         _arc_w( double, double, double, double, double,
				double, double, double );
short _WCI86FAR         _arc_wxy( struct _wxycoord _WCI86FAR *,
				  struct _wxycoord _WCI86FAR *,
				  struct _wxycoord _WCI86FAR *,
				  struct _wxycoord _WCI86FAR * );
short _WCI86FAR         _ellipse( short, short, short, short, short );
short _WCI86FAR         _ellipse_w( short, double, double, double, double );
short _WCI86FAR         _ellipse_wxy( short, struct _wxycoord _WCI86FAR *,
				      struct _wxycoord _WCI86FAR * );
short _WCI86FAR         _pie( short, short, short, short, short, short,
			      short, short, short );
short _WCI86FAR         _pie_w( short, double, double, double, double,
				double, double, double, double );
short _WCI86FAR         _pie_wxy( short, struct _wxycoord _WCI86FAR *,
				  struct _wxycoord _WCI86FAR *,
				  struct _wxycoord _WCI86FAR *,
				  struct _wxycoord _WCI86FAR * );
short _WCI86FAR         _polygon( short, short, struct xycoord _WCI86FAR * );
short _WCI86FAR         _polygon_w( short, short, double _WCI86FAR * );
short _WCI86FAR         _polygon_wxy( short, short, struct _wxycoord _WCI86FAR * );
short _WCI86FAR         _floodfill( short, short, short );
short _WCI86FAR         _floodfill_w( double, double, short );
short _WCI86FAR         _setpixel( short, short );
short _WCI86FAR         _setpixel_w( double, double );
short _WCI86FAR         _getpixel( short, short );
short _WCI86FAR         _getpixel_w( double, double );
short _WCI86FAR         _getarcinfo( struct xycoord _WCI86FAR *,
				     struct xycoord _WCI86FAR *,
				     struct xycoord _WCI86FAR * );

/* Position Determination Functions */

struct xycoord _WCI86FAR   _getcurrentposition( void );
struct _wxycoord _WCI86FAR _getcurrentposition_w( void );
struct xycoord _WCI86FAR   _getviewcoord( short, short );
struct xycoord _WCI86FAR   _getviewcoord_w( double, double );
struct xycoord _WCI86FAR   _getviewcoord_wxy( struct _wxycoord _WCI86FAR * );
struct xycoord _WCI86FAR   _getphyscoord( short, short );
struct _wxycoord _WCI86FAR _getwindowcoord( short, short );
struct xycoord _WCI86FAR   _moveto( short, short );
struct _wxycoord _WCI86FAR _moveto_w( double, double );
struct xycoord _WCI86FAR   _setvieworg( short, short );

#define _getlogcoord    _getviewcoord        /* for compatibility */
#define _setlogorg      _setvieworg

/* Output Determination Functions */

void _WCI86FAR           _setfillmask( unsigned char _WCI86FAR * );
unsigned char _WCI86FAR * _WCI86FAR
			 _getfillmask( unsigned char _WCI86FAR * );
void _WCI86FAR           _setlinestyle( unsigned short );
unsigned short _WCI86FAR _getlinestyle( void );
short _WCI86FAR          _setplotaction( short );
short _WCI86FAR          _getplotaction( void );

#define _setwritemode   _setplotaction      /* for compatibility */
#define _getwritemode   _getplotaction

enum {                          /* plotting action */
	_GOR, _GAND, _GPRESET, _GPSET, _GXOR
};

/* Screen Manipulation Functions */

void _WCI86FAR          _clearscreen( short );
void _WCI86FAR          _setviewport( short, short, short, short );
void _WCI86FAR          _setcliprgn( short, short, short, short );
void _WCI86FAR          _getcliprgn( short _WCI86FAR *, short _WCI86FAR *,
				     short _WCI86FAR *, short _WCI86FAR * );
short _WCI86FAR         _displaycursor( short );
short _WCI86FAR         _wrapon( short );
short _WCI86FAR         _setwindow( short, double, double, double, double );

#define _GCLEARSCREEN   0
#define _GVIEWPORT      1
#define _GWINDOW        2
#define _GCLEARGRAPH    3
#define _GCLEARTEXT     4

#define _GBORDER        2
#define _GFILLINTERIOR  3

enum {                          /* cursor display */
	_GCURSOROFF, _GCURSORON
};

enum {                          /* text wrapping */
	_GWRAPOFF, _GWRAPON
};

/* Graphics Text Manipulation Functions and Constants */

struct textsettings _WCI86FAR * _WCI86FAR
			_gettextsettings( struct textsettings _WCI86FAR * );
void _WCI86FAR          _gettextextent( short, short, char _WCI86FAR *,
			   struct xycoord _WCI86FAR *, struct xycoord _WCI86FAR * );
void _WCI86FAR          _setcharsize( short, short );
void _WCI86FAR          _setcharsize_w( double, double );
void _WCI86FAR          _settextalign( short, short );
void _WCI86FAR          _settextpath( short );
void _WCI86FAR          _settextorient( short, short );
void _WCI86FAR          _setcharspacing( short );
void _WCI86FAR          _setcharspacing_w( double );
short _WCI86FAR         _grtext( short, short, char _WCI86FAR * );
short _WCI86FAR         _grtext_w( double, double, char _WCI86FAR * );

enum {                          /* horizontal alignment */
	_NORMAL, _LEFT, _CENTER, _RIGHT
};

enum {                          /* vertical alignment */
	_TOP=1, _CAP, _HALF, _BASE, _BOTTOM
};

enum {                          /* text path */
	_PATH_RIGHT, _PATH_LEFT, _PATH_UP, _PATH_DOWN
};

/* Text Manipulation Functions */

#define _GSCROLLUP      1
#define _GSCROLLDOWN    (-1)
#define _MAXTEXTROWS    (-1)

void _WCI86FAR           _settextwindow( short, short, short, short );
void _WCI86FAR           _outtext( char _WCI86FAR * );
short _WCI86FAR          _settextcolor( short );
short _WCI86FAR          _gettextcolor( void );
struct rccoord _WCI86FAR _settextposition( short, short );
struct rccoord _WCI86FAR _gettextposition( void );
void _WCI86FAR           _scrolltextwindow( short );
void _WCI86FAR           _gettextwindow( short _WCI86FAR *, short _WCI86FAR *,
					 short _WCI86FAR *, short _WCI86FAR * );
short _WCI86FAR          _gettextcursor( void );
short _WCI86FAR          _settextcursor( short );
void _WCI86FAR           _outmem( unsigned char _WCI86FAR *, short );
short _WCI86FAR          _settextrows( short );

/* Image Manipulation Functions */

void _WCI86FAR           _getimage( short, short, short, short, char _WCI86HUGE * );
void _WCI86FAR           _getimage_w( double, double, double, double, char _WCI86HUGE * );
void _WCI86FAR           _getimage_wxy( struct _wxycoord _WCI86FAR *,
				        struct _wxycoord _WCI86FAR *, 
					char _WCI86HUGE * );
void _WCI86FAR           _putimage( short, short, char _WCI86HUGE *, short );
void _WCI86FAR           _putimage_w( double, double, char _WCI86HUGE *, short );
long _WCI86FAR           _imagesize( short, short, short, short );
long _WCI86FAR           _imagesize_w( double, double, double, double );
long _WCI86FAR           _imagesize_wxy( struct _wxycoord _WCI86FAR *,
					 struct _wxycoord _WCI86FAR * );

/* KANJI Font Functions */

short _WCI86FAR          _getkanji( unsigned short, unsigned char _WCI86FAR * );
short _WCI86FAR          _setkanji( unsigned short, unsigned char _WCI86FAR * );
short _WCI86FAR          _kanjisize( short );

/* Font Manipulation Functions */

short _WCI86FAR          _registerfonts( char _WCI86FAR * );
void _WCI86FAR           _unregisterfonts( void );
short _WCI86FAR          _setfont( char _WCI86FAR * );
short _WCI86FAR          _getfontinfo( struct _fontinfo _WCI86FAR * );
void _WCI86FAR           _outgtext( char _WCI86FAR * );
short _WCI86FAR          _getgtextextent( char _WCI86FAR * );
struct xycoord _WCI86FAR _setgtextvector( short, short );
struct xycoord _WCI86FAR _getgtextvector( void );

#pragma pack(__pop);
#ifdef __cplusplus
};
#endif
#endif
