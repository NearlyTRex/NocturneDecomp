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

// =============================================================================
// Internal state tracking
// =============================================================================

// GDI object tag — distinguishes fonts, brushes, bitmaps, DCs in HGDIOBJ
enum GdiObjectType {
    GDI_OBJ_DC      = 1,
    GDI_OBJ_FONT    = 2,
    GDI_OBJ_BITMAP  = 3,
    GDI_OBJ_BRUSH   = 4,
};

struct GdiBitmap {
    int tag;  // GDI_OBJ_BITMAP
    SDL_Surface* surface;
    void* pixels;  // == surface->pixels, exposed via ppvBits
    int width;
    int height;
    int bpp;
};

struct GdiFont {
    int tag;  // GDI_OBJ_FONT
    TTF_Font* ttf_font;
    int height;
    char face_name[64];
};

struct GdiBrush {
    int tag;  // GDI_OBJ_BRUSH
    COLORREF color;
};

struct GdiDC {
    int tag;  // GDI_OBJ_DC
    GdiBitmap* bitmap;      // selected bitmap (CreateDIBSection result)
    GdiFont* font;          // selected font
    GdiBrush* brush;        // selected brush
    COLORREF text_color;    // SetTextColor
    COLORREF bk_color;      // SetBkColor
    int bk_mode;            // OPAQUE(2) or TRANSPARENT(1)
    HGDIOBJ prev_font;      // previously selected font (for SelectObject return)
    HGDIOBJ prev_bitmap;
    HGDIOBJ prev_brush;
};

// TTF initialization
static int s_ttf_initialized = 0;

static void ensure_ttf_init() {
    if (!s_ttf_initialized) {
        if (TTF_Init() == 0) {
            s_ttf_initialized = 1;
        }
    }
}

// Default fallback font path — try common locations
static const char* s_fallback_font_paths[] = {
    "/usr/share/fonts/truetype/dejavu/DejaVuSansMono.ttf",
    "/usr/share/fonts/truetype/liberation/LiberationMono-Regular.ttf",
    "/usr/share/fonts/truetype/freefont/FreeMono.ttf",
    "/usr/share/fonts/TTF/DejaVuSansMono.ttf",
    "/usr/share/fonts/dejavu-sans-mono-fonts/DejaVuSansMono.ttf",
    nullptr
};

static TTF_Font* open_fallback_font(int height) {
    if (height < 0) height = -height;
    if (height == 0) height = 14;

    for (int i = 0; s_fallback_font_paths[i]; i++) {
        TTF_Font* f = TTF_OpenFont(s_fallback_font_paths[i], height);
        if (f) return f;
    }
    return nullptr;
}

// =============================================================================
// GDI Shim Functions
// =============================================================================

static HBRUSH shim_CreateBrushIndirect(LOGBRUSH* plb) {
    GdiBrush* brush = (GdiBrush*)calloc(1, sizeof(GdiBrush));
    if (!brush) return (HBRUSH)nullptr;
    brush->tag = GDI_OBJ_BRUSH;
    brush->color = plb ? plb->lbColor : 0;
    return (HBRUSH)brush;
}

static HDC shim_CreateCompatibleDC(HDC hdc) {
    (void)hdc;
    GdiDC* dc = (GdiDC*)calloc(1, sizeof(GdiDC));
    if (!dc) return (HDC)nullptr;
    dc->tag = GDI_OBJ_DC;
    dc->bk_mode = 2;  // OPAQUE
    dc->bk_color = 0xFFFFFF;  // white
    dc->text_color = 0x000000;  // black
    return (HDC)dc;
}

static HBITMAP shim_CreateDIBSection(HDC hdc, BITMAPINFO* pbmi, UINT usage,
                                      void** ppvBits, HANDLE hSection, DWORD offset) {
    (void)hdc; (void)usage; (void)hSection; (void)offset;
    if (!pbmi) {
        if (ppvBits) *ppvBits = nullptr;
        return (HBITMAP)nullptr;
    }

    int width = pbmi->bmiHeader.biWidth;
    int height = pbmi->bmiHeader.biHeight;
    int bpp = pbmi->bmiHeader.biBitCount;

    // biHeight negative = top-down (which is what the game uses)
    if (height < 0) height = -height;
    if (width <= 0 || height <= 0) {
        if (ppvBits) *ppvBits = nullptr;
        return (HBITMAP)nullptr;
    }

    // Create SDL surface matching the requested format
    Uint32 rmask, gmask, bmask, amask;
    if (bpp == 16) {
        // 5-5-5 format (Windows default for 16bpp DIB)
        rmask = 0x7C00; gmask = 0x03E0; bmask = 0x001F; amask = 0;
    } else if (bpp == 24) {
        rmask = 0xFF0000; gmask = 0x00FF00; bmask = 0x0000FF; amask = 0;
    } else {
        // 32bpp
        rmask = 0x00FF0000; gmask = 0x0000FF00; bmask = 0x000000FF; amask = 0;
        if (bpp != 32) bpp = 32;
    }

    SDL_Surface* surface = SDL_CreateRGBSurface(0, width, height, bpp,
                                                  rmask, gmask, bmask, amask);
    if (!surface) {
        if (ppvBits) *ppvBits = nullptr;
        return (HBITMAP)nullptr;
    }

    GdiBitmap* bmp = (GdiBitmap*)calloc(1, sizeof(GdiBitmap));
    if (!bmp) {
        SDL_FreeSurface(surface);
        if (ppvBits) *ppvBits = nullptr;
        return (HBITMAP)nullptr;
    }

    bmp->tag = GDI_OBJ_BITMAP;
    bmp->surface = surface;
    bmp->pixels = surface->pixels;
    bmp->width = width;
    bmp->height = height;
    bmp->bpp = bpp;

    if (ppvBits) *ppvBits = surface->pixels;

    return (HBITMAP)bmp;
}

static HFONT shim_CreateFontA(int cHeight, int cWidth, int cEscapement,
                                int cOrientation, int cWeight, DWORD bItalic,
                                DWORD bUnderline, DWORD bStrikeOut,
                                DWORD iCharSet, DWORD iOutPrecision,
                                DWORD iClipPrecision, DWORD iQuality,
                                DWORD iPitchAndFamily, LPCSTR pszFaceName) {
    (void)cWidth; (void)cEscapement; (void)cOrientation; (void)cWeight;
    (void)bItalic; (void)bUnderline; (void)bStrikeOut; (void)iCharSet;
    (void)iOutPrecision; (void)iClipPrecision; (void)iQuality;
    (void)iPitchAndFamily;

    ensure_ttf_init();

    GdiFont* font = (GdiFont*)calloc(1, sizeof(GdiFont));
    if (!font) return (HFONT)nullptr;

    font->tag = GDI_OBJ_FONT;
    font->height = cHeight;
    if (pszFaceName) {
        strncpy(font->face_name, pszFaceName, sizeof(font->face_name) - 1);
    }

    // Try to open the font — fall back to system monospace fonts
    font->ttf_font = open_fallback_font(cHeight);

    // Even if font loading fails, return the handle — text will just not render
    return (HFONT)font;
}

static BOOL shim_DeleteDC(HDC hdc) {
    GdiDC* dc = (GdiDC*)hdc;
    if (dc && dc->tag == GDI_OBJ_DC) {
        free(dc);
    }
    return 1;
}

static BOOL shim_DeleteObject(HGDIOBJ ho) {
    if (!ho) return 1;
    int tag = *(int*)ho;

    switch (tag) {
    case GDI_OBJ_FONT: {
        GdiFont* font = (GdiFont*)ho;
        if (font->ttf_font) TTF_CloseFont(font->ttf_font);
        free(font);
        break;
    }
    case GDI_OBJ_BITMAP: {
        GdiBitmap* bmp = (GdiBitmap*)ho;
        if (bmp->surface) SDL_FreeSurface(bmp->surface);
        free(bmp);
        break;
    }
    case GDI_OBJ_BRUSH: {
        free(ho);
        break;
    }
    default:
        break;
    }
    return 1;
}

static LPVOID shim_GetStockObject(int i) {
    (void)i;
    return nullptr;
}

static BOOL shim_GetTextExtentPoint32A(HDC hdc, LPCSTR lpString, int c,
                                        LPSIZE psizl) {
    GdiDC* dc = (GdiDC*)hdc;
    if (!psizl) return 0;

    // Default values
    psizl->cx = c * 8;
    psizl->cy = 16;

    if (dc && dc->tag == GDI_OBJ_DC && dc->font && dc->font->ttf_font && lpString) {
        // Need null-terminated copy for TTF_SizeText
        char buf[1024];
        int len = c < (int)sizeof(buf) - 1 ? c : (int)sizeof(buf) - 1;
        memcpy(buf, lpString, len);
        buf[len] = '\0';

        int w = 0, h = 0;
        TTF_SizeText(dc->font->ttf_font, buf, &w, &h);
        psizl->cx = w;
        psizl->cy = h;
    }

    return 1;
}

static BOOL shim_Rectangle(HDC hdc, int left, int top, int right, int bottom) {
    GdiDC* dc = (GdiDC*)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC || !dc->bitmap || !dc->bitmap->surface)
        return 1;

    // Fill rectangle with the current brush color
    COLORREF color = dc->brush ? dc->brush->color : dc->bk_color;
    SDL_Surface* surf = dc->bitmap->surface;

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
    if (rect.w < 0) { rect.x += rect.w; rect.w = -rect.w; }
    if (rect.h < 0) { rect.y += rect.h; rect.h = -rect.h; }

    SDL_FillRect(surf, &rect, pixel);
    return 1;
}

static HGDIOBJ shim_SelectObject(HDC hdc, HGDIOBJ h) {
    GdiDC* dc = (GdiDC*)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC || !h) return nullptr;

    int tag = *(int*)h;
    HGDIOBJ prev = nullptr;

    switch (tag) {
    case GDI_OBJ_FONT:
        prev = (HGDIOBJ)dc->font;
        dc->font = (GdiFont*)h;
        break;
    case GDI_OBJ_BITMAP:
        prev = (HGDIOBJ)dc->bitmap;
        dc->bitmap = (GdiBitmap*)h;
        break;
    case GDI_OBJ_BRUSH:
        prev = (HGDIOBJ)dc->brush;
        dc->brush = (GdiBrush*)h;
        break;
    default:
        break;
    }

    return prev;
}

static COLORREF shim_SetBkColor(HDC hdc, COLORREF color) {
    GdiDC* dc = (GdiDC*)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC) return 0;
    COLORREF old = dc->bk_color;
    dc->bk_color = color;
    return old;
}

static int shim_SetBkMode(HDC hdc, int mode) {
    GdiDC* dc = (GdiDC*)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC) return 0;
    int old = dc->bk_mode;
    dc->bk_mode = mode;
    return old;
}

static COLORREF shim_SetTextColor(HDC hdc, COLORREF color) {
    GdiDC* dc = (GdiDC*)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC) return 0;
    COLORREF old = dc->text_color;
    dc->text_color = color;
    return old;
}

static BOOL shim_TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c) {
    GdiDC* dc = (GdiDC*)hdc;
    if (!dc || dc->tag != GDI_OBJ_DC) return 0;
    if (!dc->font || !dc->font->ttf_font || !dc->bitmap || !dc->bitmap->surface)
        return 1;  // No font or surface — silently succeed
    if (!lpString || c <= 0) return 1;

    // Null-terminate the string
    char buf[1024];
    int len = c < (int)sizeof(buf) - 1 ? c : (int)sizeof(buf) - 1;
    memcpy(buf, lpString, len);
    buf[len] = '\0';

    // Render text with SDL_ttf
    // COLORREF is 0x00BBGGRR, SDL_Color is {r, g, b, a}
    SDL_Color fg;
    fg.r = (Uint8)(dc->text_color & 0xFF);
    fg.g = (Uint8)((dc->text_color >> 8) & 0xFF);
    fg.b = (Uint8)((dc->text_color >> 16) & 0xFF);
    fg.a = 255;

    SDL_Surface* text_surface = TTF_RenderText_Blended(dc->font->ttf_font, buf, fg);
    if (!text_surface) return 1;

    // Blit text onto the DC's bitmap surface
    SDL_Rect dst_rect;
    dst_rect.x = x;
    dst_rect.y = y;
    dst_rect.w = text_surface->w;
    dst_rect.h = text_surface->h;

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
