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

#pragma library (graph);

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
#define _TEXTBW40       0       /* 40 x 25 text, 16 grey           */
#define _TEXTC40        1       /* 40 x 25 text, 16/8 color        */
#define _TEXTBW80       2       /* 80 x 25 text, 16 grey           */
#define _TEXTC80        3       /* 80 x 25 text, 16/8 color        */
#define _MRES4COLOR     4       /* 320 x 200, 4 color              */
#define _MRESNOCOLOR    5       /* 320 x 200, 4 grey               */
#define _HRESBW         6       /* 640 x 200, BW                   */
#define _TEXTMONO       7       /* 80 x 25 text, BW                */
#define _HERCMONO       11      /* 720 x 350, BW                   */
#define _MRES16COLOR    13      /* 320 x 200, 16 color             */
#define _HRES16COLOR    14      /* 640 x 200, 16 color             */
#define _ERESNOCOLOR    15      /* 640 x 350, BW                   */
#define _ERESCOLOR      16      /* 640 x 350, 4 or 16 color        */
#define _VRES2COLOR     17      /* 640 x 480, BW                   */
#define _VRES16COLOR    18      /* 640 x 480, 16 color             */
#define _MRES256COLOR   19      /* 320 x 200, 256 color            */
#define _URES256COLOR   0x100   /* 640 x 400, 256 color            */
#define _VRES256COLOR   0x101   /* 640 x 480, 256 color            */
#define _SVRES16COLOR   0x102   /* 800 x 600, 16 color             */
#define _SVRES256COLOR  0x103   /* 800 x 600, 256 color            */
#define _XRES16COLOR    0x104   /* 1024 x 768, 16 color            */
#define _XRES256COLOR   0x105   /* 1024 x 768, 256 color           */

#define _NODISPLAY      (-1)    /* no display device            */
#define _UNKNOWN        0       /* unknown adapter/monitor type */

#define _MDPA           1       /* monochrome display/printer adapter */
#define _CGA            2       /* colour/graphics monitor adapter    */
#define _HERCULES       3       /* Hercules monochrome adapter card   */
#define _MCGA           4       /* PS/2 Model 30 monitor              */
#define _EGA            5       /* enhanced graphics adapter          */
#define _VGA            6       /* vector graphics array              */
#define _SVGA           7       /* super VGA                          */
#define _HGC            _HERCULES

#define _MONO           1       /* regular monochrome */
#define _COLOR          2       /* regular color      */
#define _ENHANCED       3       /* enhanced color     */
#define _ANALOGMONO     5       /* analog monochrome  */
#define _ANALOGCOLOR    6       /* analog color       */

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

#define _BLACK          0x000000L
#define _BLUE           0x2a0000L
#define _GREEN          0x002a00L
#define _CYAN           0x2a2a00L
#define _RED            0x00002aL
#define _MAGENTA        0x2a002aL
#define _BROWN          0x00152aL
#define _WHITE          0x2a2a2aL
#define _GRAY           0x151515L
#define _LIGHTBLUE      0x3F1515L
#define _LIGHTGREEN     0x153f15L
#define _LIGHTCYAN      0x3f3f15L
#define _LIGHTRED       0x15153fL
#define _LIGHTMAGENTA   0x3f153fL
#define _YELLOW         0x153f3fL
#define _BRIGHTWHITE    0x3f3f3fL
#define _LIGHTYELLOW    _YELLOW

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
