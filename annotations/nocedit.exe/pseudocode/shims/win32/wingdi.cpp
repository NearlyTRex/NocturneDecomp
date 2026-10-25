// =============================================================================
// WINGDI SHIM - SDL_ttf-backed GDI implementation
// =============================================================================
//
// The game uses GDI exclusively through CWinFont to render text into an
// offscreen DIB (CreateDIBSection), then manually composites the pixels
// into g_ScreenBufferArray using magenta (0xFF00FF) as the transparent
// color key.
//
// We implement this using SDL_ttf: CreateFontA -> TTF_OpenFont,
// TextOutA -> TTF_RenderText_Blended + blit to the DIB surface,
// CreateDIBSection -> SDL_CreateRGBSurface with accessible pixels.
//

#include "system/wingdi.h"

#include <SDL.h>
#include <SDL_ttf.h>
#include <cstdlib>
#include <cstring>
#include <string>

// =============================================================================
// Internal state tracking
// =============================================================================

// GDI object tag — distinguishes fonts, brushes, bitmaps, DCs in HGDIOBJ
enum GdiObjectType {
    GDI_OBJ_DC = 1,
    GDI_OBJ_FONT = 2,
    GDI_OBJ_BITMAP = 3,
    GDI_OBJ_BRUSH = 4,
};

struct GdiBitmap {
    int tag; // GDI_OBJ_BITMAP
    SDL_Surface *surface;
    void *pixels; // == surface->pixels, exposed via ppvBits
    int width;
    int height;
    int bpp;
};

struct GdiFont {
    int tag; // GDI_OBJ_FONT
    TTF_Font *ttf_font;
    int height;
    char face_name[64];
};

struct GdiBrush {
    int tag; // GDI_OBJ_BRUSH
    COLORREF color;
};

struct GdiDC {
    int tag;             // GDI_OBJ_DC
    GdiBitmap *bitmap;   // selected bitmap (CreateDIBSection result)
    GdiFont *font;       // selected font
    GdiBrush *brush;     // selected brush
    COLORREF text_color; // SetTextColor
    COLORREF bk_color;   // SetBkColor
    int bk_mode;         // OPAQUE(2) or TRANSPARENT(1)
    HGDIOBJ prev_font;   // previously selected font (for SelectObject return)
    HGDIOBJ prev_bitmap;
    HGDIOBJ prev_brush;
};

// A font that fails to open for want of it fails anyway, so a failed init needs
// no answer of its own.
static void ensure_ttf_init() {
    if (!TTF_WasInit())
        TTF_Init();
}

// Where the monospace font every CWinFont is drawn in is looked for, first to
// last, in the form of the host's PATH. NOCTURNE_OS_FONT_PATH replaces it.
#if defined(_WIN32)
static const char kFontPathSeparator = ';';
static const char *const kDefaultFontPath = "C:\\Windows\\Fonts\\consola.ttf;"
                                            "C:\\Windows\\Fonts\\cour.ttf;"
                                            "C:\\Windows\\Fonts\\lucon.ttf";
#elif defined(__APPLE__)
static const char kFontPathSeparator = ':';
static const char *const kDefaultFontPath = "/System/Library/Fonts/Menlo.ttc:"
                                            "/System/Library/Fonts/Supplemental/Courier New.ttf:"
                                            "/Library/Fonts/Courier New.ttf";
#else
static const char kFontPathSeparator = ':';
static const char *const kDefaultFontPath =
    "/usr/share/fonts/truetype/dejavu/DejaVuSansMono.ttf:"
    "/usr/share/fonts/truetype/liberation/LiberationMono-Regular.ttf:"
    "/usr/share/fonts/truetype/freefont/FreeMono.ttf:"
    "/usr/share/fonts/TTF/DejaVuSansMono.ttf:"
    "/usr/share/fonts/dejavu-sans-mono-fonts/DejaVuSansMono.ttf";
#endif

// The engine's text is CP1252 — the ANSI codepage GDI rendered it with on
// Windows. SDL_ttf's TTF_*Text_* entry points read their input as Latin-1,
// which agrees with CP1252 over 0x00..0x7F and 0xA0..0xFF and disagrees over
// 0x80..0x9F, where Latin-1 has unassigned C1 controls and CP1252 has the
// punctuation and symbols. The menu's trademark glyph is one of those: byte
// 0x99, which is U+2122 in CP1252 and a control in Latin-1, so rendering it as
// Latin-1 produces nothing.
//
// Converting to UTF-8 and using the TTF_*UTF8_* entry points instead puts every
// byte through the codepage the text was written in.
static const unsigned short kCp1252High[32] = {
    0x20AC, 0x0081, 0x201A, 0x0192, 0x201E, 0x2026, 0x2020, 0x2021, 0x02C6, 0x2030, 0x0160,
    0x2039, 0x0152, 0x008D, 0x017D, 0x008F, 0x0090, 0x2018, 0x2019, 0x201C, 0x201D, 0x2022,
    0x2013, 0x2014, 0x02DC, 0x2122, 0x0161, 0x203A, 0x0153, 0x009D, 0x017E, 0x0178};

// The first `in_len` bytes of `in`, up to a NUL. A NUL ends the text here as it
// would have for GDI's renderer.
static std::string cp1252_to_utf8(const char *in, int in_len) {
    std::string out;
    for (int i = 0; i < in_len && in[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)in[i];
        unsigned int cp = (ch >= 0x80 && ch <= 0x9F) ? kCp1252High[ch - 0x80] : ch;
        if (cp < 0x80) {
            out += (char)cp;
        } else if (cp < 0x800) {
            out += (char)(0xC0 | (cp >> 6));
            out += (char)(0x80 | (cp & 0x3F));
        } else {
            out += (char)(0xE0 | (cp >> 12));
            out += (char)(0x80 | ((cp >> 6) & 0x3F));
            out += (char)(0x80 | (cp & 0x3F));
        }
    }
    return out;
}

// GDI's height is in pixels and negative for a character height; 0 is "a
// reasonable default".
static TTF_Font *open_os_font(int height) {
    if (height < 0)
        height = -height;
    if (height == 0)
        height = 14;

    const char *asked = getenv("NOCTURNE_OS_FONT_PATH");
    const std::string list = (asked != nullptr && asked[0] != '\0') ? asked : kDefaultFontPath;
    size_t start = 0;
    while (start <= list.size()) {
        size_t end = list.find(kFontPathSeparator, start);
        if (end == std::string::npos)
            end = list.size();
        const std::string path = list.substr(start, end - start);
        TTF_Font *f = path.empty() ? nullptr : TTF_OpenFont(path.c_str(), height);
        if (f)
            return f;
        start = end + 1;
    }
    return nullptr;
}

// =============================================================================
// GDI Shim Functions
// =============================================================================

static HBRUSH shim_CreateBrushIndirect(LOGBRUSH *plb) {
    GdiBrush *brush = new GdiBrush();
    brush->tag = GDI_OBJ_BRUSH;
    brush->color = plb ? plb->lbColor : 0;
    return (HBRUSH)brush;
}

static HDC shim_CreateCompatibleDC(HDC hdc) {
    (void)hdc;
    GdiDC *dc = new GdiDC();
    dc->tag = GDI_OBJ_DC;
    dc->bk_mode = 2;           // OPAQUE
    dc->bk_color = 0xFFFFFF;   // white
    dc->text_color = 0x000000; // black
    return (HDC)dc;
}

static HBITMAP shim_CreateDIBSection(HDC hdc, BITMAPINFO *pbmi, UINT usage, void **ppvBits,
                                     HANDLE hSection, DWORD offset) {
    (void)hdc;
    (void)usage;
    (void)hSection;
    (void)offset;
    if (!pbmi) {
        if (ppvBits)
            *ppvBits = nullptr;
        return (HBITMAP) nullptr;
    }

    int width = pbmi->bmiHeader.biWidth;
    int height = pbmi->bmiHeader.biHeight;
    int bpp = pbmi->bmiHeader.biBitCount;

    // biHeight negative = top-down (which is what the game uses)
    if (height < 0)
        height = -height;
    if (width <= 0 || height <= 0) {
        if (ppvBits)
            *ppvBits = nullptr;
        return (HBITMAP) nullptr;
    }

    // Create SDL surface matching the requested format
    Uint32 rmask, gmask, bmask, amask;
    if (bpp == 16) {
        // 5-5-5 format (Windows default for 16bpp DIB)
        rmask = 0x7C00;
        gmask = 0x03E0;
        bmask = 0x001F;
        amask = 0;
    } else if (bpp == 24) {
        rmask = 0xFF0000;
        gmask = 0x00FF00;
        bmask = 0x0000FF;
        amask = 0;
    } else {
        // 32bpp
        rmask = 0x00FF0000;
        gmask = 0x0000FF00;
        bmask = 0x000000FF;
        amask = 0;
        if (bpp != 32)
            bpp = 32;
    }

    SDL_Surface *surface = SDL_CreateRGBSurface(0, width, height, bpp, rmask, gmask, bmask, amask);
    if (!surface) {
        if (ppvBits)
            *ppvBits = nullptr;
        return (HBITMAP) nullptr;
    }

    GdiBitmap *bmp = new GdiBitmap();
    bmp->tag = GDI_OBJ_BITMAP;
    bmp->surface = surface;
    bmp->pixels = surface->pixels;
    bmp->width = width;
    bmp->height = height;
    bmp->bpp = bpp;

    // Start the section at the caller's transparency key rather than at zero.
    // CWinFont::createTextBackground means to fill it magenta itself, but the
    // Rectangle it issues is (0, -top, right, 0) with `top` and `right` read
    // before they are assigned a few lines further down — zero after the reset
    // that precedes it — so the rectangle is empty and fills nothing. A section
    // left black then has no key pixels at all, and the whole box is copied to
    // the screen. Magenta here is what the blit expects to skip: SDL_MapRGB
    // gives 0x7c1f in 5-5-5 and 0x00ff00ff at 32bpp, the two values
    // CWinFont::setColorAndDrawText tests against.
    SDL_FillRect(surface, nullptr, SDL_MapRGB(surface->format, 255, 0, 255));

    if (ppvBits)
        *ppvBits = surface->pixels;

    return (HBITMAP)bmp;
}

static HFONT shim_CreateFontA(int cHeight, int cWidth, int cEscapement, int cOrientation,
                              int cWeight, DWORD bItalic, DWORD bUnderline, DWORD bStrikeOut,
                              DWORD iCharSet, DWORD iOutPrecision, DWORD iClipPrecision,
                              DWORD iQuality, DWORD iPitchAndFamily, LPCSTR pszFaceName) {
    (void)cWidth;
    (void)cEscapement;
    (void)cOrientation;
    (void)cWeight;
    (void)bItalic;
    (void)bUnderline;
    (void)bStrikeOut;
    (void)iCharSet;
    (void)iOutPrecision;
    (void)iClipPrecision;
    (void)iQuality;
    (void)iPitchAndFamily;

    ensure_ttf_init();

    GdiFont *font = new GdiFont();
    font->tag = GDI_OBJ_FONT;
    font->height = cHeight;
    if (pszFaceName) {
        strncpy(font->face_name, pszFaceName, sizeof(font->face_name) - 1);
    }

    // The face asked for is not looked up: the host's monospace stands in.
    font->ttf_font = open_os_font(cHeight);

    // Even if font loading fails, return the handle — text will just not render
    return (HFONT)font;
}

static BOOL shim_DeleteDC(HDC hdc) {
    GdiDC *dc = (GdiDC *)hdc;
    if (dc && dc->tag == GDI_OBJ_DC) {
        delete dc;
    }
    return 1;
}

static BOOL shim_DeleteObject(HGDIOBJ ho) {
    if (!ho)
        return 1;
    int tag = *(int *)ho;

    // A DC is not deleted here, and anything else is not an object of ours.
    if (tag == GDI_OBJ_FONT) {
        GdiFont *font = (GdiFont *)ho;
        if (font->ttf_font)
            TTF_CloseFont(font->ttf_font);
        delete font;
    } else if (tag == GDI_OBJ_BITMAP) {
        // A bitmap is only made with its surface.
        GdiBitmap *bmp = (GdiBitmap *)ho;
        SDL_FreeSurface(bmp->surface);
        delete bmp;
    } else if (tag == GDI_OBJ_BRUSH) {
        delete (GdiBrush *)ho;
    }
    return 1;
}

static LPVOID shim_GetStockObject(int i) {
    (void)i;
    return nullptr;
}

static BOOL shim_GetTextExtentPoint32A(HDC hdc, LPCSTR lpString, int c, LPSIZE psizl) {
    GdiDC *dc = (GdiDC *)hdc;
    if (!psizl)
        return 0;

    // Default values
    psizl->cx = c * 8;
    psizl->cy = 16;

    if (dc && dc->tag == GDI_OBJ_DC && dc->font && dc->font->ttf_font && lpString) {
        // Same codepage as the render, or the extent and the glyphs disagree.
        const std::string utf8 = cp1252_to_utf8(lpString, c);
        int w = 0, h = 0;
        TTF_SizeUTF8(dc->font->ttf_font, utf8.c_str(), &w, &h);
        psizl->cx = w;
        psizl->cy = h;
    }

    return 1;
}

// A selected bitmap always has its surface: a section is only made with one.
static BOOL shim_Rectangle(HDC hdc, int left, int top, int right, int bottom) {
    GdiDC *dc = (GdiDC *)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC || !dc->bitmap)
        return 1;

    // Fill rectangle with the current brush color
    COLORREF color = dc->brush ? dc->brush->color : dc->bk_color;
    SDL_Surface *surf = dc->bitmap->surface;

    // Convert COLORREF (0x00BBGGRR) to SDL pixel value
    Uint8 r = (Uint8)(color & 0xFF);
    Uint8 g = (Uint8)((color >> 8) & 0xFF);
    Uint8 b = (Uint8)((color >> 16) & 0xFF);
    Uint32 pixel = SDL_MapRGB(surf->format, r, g, b);

    SDL_Rect rect;
    rect.x = left;
    rect.y = (top < 0) ? 0 : top;
    rect.w = right - left;
    rect.h = (top < 0) ? bottom : bottom - top;
    if (rect.w < 0) {
        rect.x += rect.w;
        rect.w = -rect.w;
    }
    if (rect.h < 0) {
        rect.y += rect.h;
        rect.h = -rect.h;
    }

    SDL_FillRect(surf, &rect, pixel);
    return 1;
}

static HGDIOBJ shim_SelectObject(HDC hdc, HGDIOBJ h) {
    GdiDC *dc = (GdiDC *)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC || !h)
        return nullptr;

    int tag = *(int *)h;
    HGDIOBJ prev = nullptr;

    switch (tag) {
    case GDI_OBJ_FONT:
        prev = (HGDIOBJ)dc->font;
        dc->font = (GdiFont *)h;
        break;
    case GDI_OBJ_BITMAP:
        prev = (HGDIOBJ)dc->bitmap;
        dc->bitmap = (GdiBitmap *)h;
        break;
    case GDI_OBJ_BRUSH:
        prev = (HGDIOBJ)dc->brush;
        dc->brush = (GdiBrush *)h;
        break;
    default:
        break;
    }

    return prev;
}

static COLORREF shim_SetBkColor(HDC hdc, COLORREF color) {
    GdiDC *dc = (GdiDC *)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC)
        return 0;
    COLORREF old = dc->bk_color;
    dc->bk_color = color;
    return old;
}

static int shim_SetBkMode(HDC hdc, int mode) {
    GdiDC *dc = (GdiDC *)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC)
        return 0;
    int old = dc->bk_mode;
    dc->bk_mode = mode;
    return old;
}

static COLORREF shim_SetTextColor(HDC hdc, COLORREF color) {
    GdiDC *dc = (GdiDC *)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC)
        return 0;
    COLORREF old = dc->text_color;
    dc->text_color = color;
    return old;
}

static BOOL shim_TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c) {
    GdiDC *dc = (GdiDC *)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC)
        return 0;
    if (!dc->font || !dc->font->ttf_font || !dc->bitmap)
        return 1; // No font or section — silently succeed
    if (!lpString || c <= 0)
        return 1;

    // Render text with SDL_ttf
    // COLORREF is 0x00BBGGRR, SDL_Color is {r, g, b, a}
    SDL_Color fg;
    fg.r = (Uint8)(dc->text_color & 0xFF);
    fg.g = (Uint8)((dc->text_color >> 8) & 0xFF);
    fg.b = (Uint8)((dc->text_color >> 16) & 0xFF);
    fg.a = 255;

    // Solid, not Blended. The caller composites this DIB onto the screen by
    // testing each pixel against an exact transparency key — 0x7c1f at 16bpp,
    // 0x00ff00ff at 32bpp, both magenta — and copying everything that does not
    // match (CWinFont::setColorAndDrawText). Antialiased output has no exact
    // background: every edge pixel is a blend between the glyph and the magenta
    // behind it, fails the equality, and is copied, so the text arrives inside
    // a solid block of its own fringe. Solid renders hard-edged with a colour
    // key, which is the shape the equality test was written for.
    const std::string utf8 = cp1252_to_utf8(lpString, c);
    // Nothing to draw, such as a string that starts with its terminator, is no
    // surface.
    SDL_Surface *text_surface = TTF_RenderUTF8_Solid(dc->font->ttf_font, utf8.c_str(), fg);
    if (!text_surface)
        return 1;

    // Blit text onto the DC's bitmap surface
    SDL_Rect dst_rect;
    dst_rect.x = x;
    dst_rect.y = y;
    dst_rect.w = text_surface->w;
    dst_rect.h = text_surface->h;

    // OPAQUE means the text cell is painted with the background colour first,
    // which is how GDI makes each string erase whatever was drawn there before.
    // CWinFont relies on it: it sets OPAQUE and a magenta background once, then
    // reuses one DIB for every string it ever draws — CWinFont::create-
    // TextBackground reallocates only when the section is too small, so without
    // this each string is laid over the last and the section fills with
    // overlapping glyphs.
    if (dc->bk_mode == 2) {
        SDL_Rect clear_rect = dst_rect;
        SDL_FillRect(dc->bitmap->surface, &clear_rect,
                     SDL_MapRGB(dc->bitmap->surface->format, (Uint8)(dc->bk_color & 0xFF),
                                (Uint8)((dc->bk_color >> 8) & 0xFF),
                                (Uint8)((dc->bk_color >> 16) & 0xFF)));
    }

    SDL_BlitSurface(text_surface, nullptr, dc->bitmap->surface, &dst_rect);
    SDL_FreeSurface(text_surface);

    return 1;
}

// =============================================================================
// Init
// =============================================================================
#include "globals/globals_610000.h"

void shims_init_wingdi(void) {
    g_CreateBrushIndirectFunc = (decltype(g_CreateBrushIndirectFunc))shim_CreateBrushIndirect;
    g_CreateCompatibleDCFunc = (decltype(g_CreateCompatibleDCFunc))shim_CreateCompatibleDC;
    g_CreateDIBSectionFunc = (decltype(g_CreateDIBSectionFunc))shim_CreateDIBSection;
    g_CreateFontAFunc = (decltype(g_CreateFontAFunc))shim_CreateFontA;
    g_DeleteDCFunc = (decltype(g_DeleteDCFunc))shim_DeleteDC;
    g_DeleteObjectFunc = (decltype(g_DeleteObjectFunc))shim_DeleteObject;
    g_GetStockObjectFunc = (decltype(g_GetStockObjectFunc))shim_GetStockObject;
    g_GetTextExtentPoint32A = (decltype(g_GetTextExtentPoint32A))shim_GetTextExtentPoint32A;
    g_RectangleFunc = (decltype(g_RectangleFunc))shim_Rectangle;
    g_SelectObjectFunc = (decltype(g_SelectObjectFunc))shim_SelectObject;
    g_SetBkColorFunc = (decltype(g_SetBkColorFunc))shim_SetBkColor;
    g_SetBkModeFunc = (decltype(g_SetBkModeFunc))shim_SetBkMode;
    g_SetTextColorFunc = (decltype(g_SetTextColorFunc))shim_SetTextColor;
    g_TextOutAFunc = (decltype(g_TextOutAFunc))shim_TextOutA;
}
