// =============================================================================
// GL DDRAW — DirectDraw4 / Direct3D3 implemented on OpenGL, for tridx7.dll
// =============================================================================
//
// The decompiled renderer DLL creates its own DirectDraw via DirectDrawCreate
// and drives it through COM vtables. This file provides that DirectDraw: the
// same vtable shapes the DLL expects, backed by the GL context that
// shims/gl_present.cpp owns.
//
// This is deliberately NOT the exe's shims/ddraw.cpp. The exe's DirectDraw is
// SDL-backed and serves its software framebuffer; the two never exchange
// objects — the DLL boundary is APIDLLinit(HWND, bridge) and plain data — so
// they are independent implementations that happen to share a window.
//
// Scope: only what the DLL actually calls (28 methods over 7 interfaces).
// Unused vtable slots are filled with a stub returning DDERR_UNSUPPORTED
// rather than left null, so an unexpected call fails loudly instead of
// jumping through a null pointer.
//
// Rendering model, and why it is simple: the DLL submits pre-transformed
// screen-space vertices (D3DFVF_TLVERTEX) through exactly one call,
// DrawIndexedPrimitive(D3DPT_TRIANGLELIST). There are no transforms, no
// lighting, no materials, no clipper and no palette interface. So the whole 3D
// path is a vertex-format conversion plus glDrawElements, and the render states
// map onto fixed-function GL one for one.

#include "system/ddraw.h"
#include "system/d3d.h"

#include "gl_api.h"
#include "gl_present.h"
#include "debug_log.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// =============================================================================
// Constants (original Windows SDK values)
// =============================================================================

#define DD_OK                    0
#define DDERR_GENERIC            0x80004005
#define DDERR_INVALIDPARAMS      0x80070057
#define DDERR_OUTOFMEMORY        0x8007000E
#define DDERR_UNSUPPORTED        0x80004001
#define E_NOINTERFACE            0x80004002

#define DDSD_CAPS                0x00000001
#define DDSD_HEIGHT              0x00000002
#define DDSD_WIDTH               0x00000004
#define DDSD_PITCH               0x00000008
#define DDSD_BACKBUFFERCOUNT     0x00000020
#define DDSD_ZBUFFERBITDEPTH     0x00000040
#define DDSD_PIXELFORMAT         0x00001000
#define DDSD_MIPMAPCOUNT         0x00020000
#define DDSD_LPSURFACE           0x00000800
#define DDSD_TEXTURESTAGE        0x00100000

#define DDSCAPS_BACKBUFFER       0x00000004
#define DDSCAPS_COMPLEX          0x00000008
#define DDSCAPS_FLIP             0x00000010
#define DDSCAPS_OFFSCREENPLAIN   0x00000040
#define DDSCAPS_PRIMARYSURFACE   0x00000200
#define DDSCAPS_SYSTEMMEMORY     0x00000800
#define DDSCAPS_TEXTURE          0x00001000
#define DDSCAPS_VIDEOMEMORY      0x00004000
#define DDSCAPS_ZBUFFER          0x00020000
#define DDSCAPS_MIPMAP           0x00400000

#define DDPF_ALPHAPIXELS         0x00000001
#define DDPF_RGB                 0x00000040
#define DDPF_ZBUFFER             0x00000400

#define DDBLT_COLORFILL          0x00000400
#define DDBLT_DEPTHFILL          0x00000002

#define DDCAPS_3D                0x00000001

// D3D primitive / vertex types
#define D3DPT_TRIANGLELIST       4
#define D3DFVF_TLVERTEX          0x1c4

// =============================================================================
// Objects
// =============================================================================
//
// Every shim object puts its vtable pointer first, so the DLL's `obj->vtable`
// dispatch works and each method can cast this_ptr back to the full struct.

struct GLSurface;

struct GLDDraw {
    IDirectDraw4_vtable *vtable;   // also serves the IDirectDraw (v1) calls
    HWND      window;
    DWORD     width, height, bpp;
    GLSurface *primary;
};

struct GLTexture;

struct GLSurface {
    IDirectDrawSurface_vtable *vtable;
    GLDDraw  *owner;

    DWORD width, height, pitch, bpp;
    DWORD caps;                    // DDSCAPS_* this surface was created with

    void  *pixels;                 // CPU-side storage; always present
    int    locked;

    // Set when the CPU pixels have been written and the GPU copy is stale.
    int    cpu_dirty;

    GLSurface *back_buffer;        // primary -> back buffer of the flip chain
    GLSurface *attached_z;
    GLSurface *mip_next;           // mip chain, walked via GetAttachedSurface

    // Texture surfaces only.
    GLuint     gl_texture;
    GLTexture *texture_iface;
};

struct GLTexture {
    IDirect3DTexture2_vtable *vtable;
    GLSurface *surface;
};

struct GLViewport {
    IDirect3DViewport3_vtable *vtable;
    D3DVIEWPORT2 viewport;
};

struct GLDevice {
    IDirect3DDevice3_vtable *vtable;
    GLDDraw    *owner;
    GLSurface  *render_target;
    GLViewport *current_viewport;
    GLSurface  *bound_texture;
    int         in_scene;
};

struct GLDirect3D {
    IDirect3D3_vtable *vtable;
    GLDDraw *owner;
};

// =============================================================================
// Vertex conversion
// =============================================================================

namespace {

// D3DTLVERTEX as the DLL builds it (SScreenVertex): screen-space position with
// reciprocal homogeneous w, two packed colors, one texture coordinate pair.
struct D3DTLVertex {
    float x, y, z, rhw;
    DWORD diffuse;
    DWORD specular;
    float u, v;
};

// What we hand to GL. Position is premultiplied by w (see convert_vertices).
struct GLVertex {
    float         x, y, z, w;
    unsigned char diffuse[4];   // RGBA byte order
    unsigned char specular[4];
    float         u, v;
};

GLVertex *g_vertex_scratch      = nullptr;
size_t    g_vertex_scratch_size = 0;

bool ensure_vertex_scratch(size_t count) {
    if (count <= g_vertex_scratch_size) return true;
    size_t want = (count < 4096) ? 4096 : count;
    GLVertex *grown = (GLVertex *)realloc(g_vertex_scratch, want * sizeof(GLVertex));
    if (grown == nullptr) return false;
    g_vertex_scratch      = grown;
    g_vertex_scratch_size = want;
    return true;
}

// D3D packs colors as 0xAARRGGBB; GL wants R,G,B,A bytes.
inline void unpack_argb(DWORD argb, unsigned char *out) {
    out[0] = (unsigned char)((argb >> 16) & 0xff);
    out[1] = (unsigned char)((argb >>  8) & 0xff);
    out[2] = (unsigned char)( argb        & 0xff);
    out[3] = (unsigned char)((argb >> 24) & 0xff);
}

// Convert a run of TLVERTEX into GL vertices.
//
// The key step is the w premultiply. A TLVERTEX is already projected, carrying
// rhw = 1/w from the projection the engine did itself. Emitting the position as
// (x*w, y*w, z*w, w) means GL's perspective divide reproduces (x, y, z) exactly
// while still interpolating texture coordinates with correct perspective — the
// same thing the D3D driver did with these vertices. Passing x,y,z with w=1
// would give affine texture mapping and visibly warped textures.
void convert_vertices(const D3DTLVertex *src, GLVertex *dst, size_t count) {
    for (size_t i = 0; i < count; i++) {
        const float rhw = src[i].rhw;
        const float w   = (rhw != 0.0f) ? (1.0f / rhw) : 1.0f;
        dst[i].x = src[i].x * w;
        dst[i].y = src[i].y * w;
        dst[i].z = src[i].z * w;
        dst[i].w = w;
        unpack_argb(src[i].diffuse,  dst[i].diffuse);
        unpack_argb(src[i].specular, dst[i].specular);
        dst[i].u = src[i].u;
        dst[i].v = src[i].v;
    }
}

// Pixel-space -> clip-space projection, column major.
//   x_ndc = 2x/width  - 1        y_ndc = 1 - 2y/height   (D3D y grows downward)
//   z_ndc = 2z - 1               (D3D depth is 0..1, GL clip is -1..1)
void load_screen_projection(float width, float height) {
    const float m[16] = {
        2.0f / width,  0.0f,           0.0f,  0.0f,
        0.0f,         -2.0f / height,  0.0f,  0.0f,
        0.0f,          0.0f,           2.0f,  0.0f,
       -1.0f,          1.0f,          -1.0f,  1.0f,
    };
    gl.MatrixMode(GL_PROJECTION);
    gl.LoadMatrixf(m);
    gl.MatrixMode(GL_MODELVIEW);
    gl.LoadIdentity();
}

}  // namespace

// =============================================================================
// Pixel format helpers
// =============================================================================

namespace {

// Bytes per pixel for a DDPIXELFORMAT the DLL selected. Only the two formats we
// advertise from EnumTextureFormats can appear here.
int bytes_per_pixel(const DDPIXELFORMAT *pf) {
    const DWORD bits = pf->dwBitCount.dwRGBBitCount;
    return (bits > 0) ? (int)(bits / 8) : 4;
}

// GL upload format for a surface's bit depth. ARGB8888 is BGRA byte order on
// little-endian; ARGB4444 has a matching packed GL type.
// `caps` selects the 16bpp interpretation the same way fill_surface_format does
// — texture surfaces are ARGB4444, display surfaces RGB565 — so the bytes a
// surface advertises and the bytes GL reads back are always the same layout.
void gl_format_for_bpp(DWORD bpp, DWORD caps, GLenum *format, GLenum *type) {
    if (bpp != 16) {
        *format = GL_BGRA;
        *type   = GL_UNSIGNED_BYTE;
        return;
    }
    const DWORD display_caps = DDSCAPS_PRIMARYSURFACE | DDSCAPS_BACKBUFFER;
    if ((caps & DDSCAPS_TEXTURE) != 0 && (caps & display_caps) == 0) {
        *format = GL_BGRA;
        *type   = GL_UNSIGNED_SHORT_4_4_4_4_REV;
    } else {
        *format = GL_RGB;
        *type   = GL_UNSIGNED_SHORT_5_6_5;
    }
}

void fill_argb8888(DDPIXELFORMAT *pf) {
    memset(pf, 0, sizeof(*pf));
    pf->dwSize  = sizeof(DDPIXELFORMAT);
    pf->dwFlags = DDPF_RGB | DDPF_ALPHAPIXELS;
    pf->dwBitCount.dwRGBBitCount      = 32;
    pf->dwRedYMask.dwRBitMask         = 0x00FF0000;
    pf->dwGreenUMask.dwGBitMask       = 0x0000FF00;
    pf->dwBlueVMask.dwBBitMask        = 0x000000FF;
    pf->dwAlphaBitMask.dwRGBAlphaBitMask = 0xFF000000;
}

void fill_argb4444(DDPIXELFORMAT *pf) {
    memset(pf, 0, sizeof(*pf));
    pf->dwSize  = sizeof(DDPIXELFORMAT);
    pf->dwFlags = DDPF_RGB | DDPF_ALPHAPIXELS;
    pf->dwBitCount.dwRGBBitCount      = 16;
    pf->dwRedYMask.dwRBitMask         = 0x0F00;
    pf->dwGreenUMask.dwGBitMask       = 0x00F0;
    pf->dwBlueVMask.dwBBitMask        = 0x000F;
    pf->dwAlphaBitMask.dwRGBAlphaBitMask = 0xF000;
}

// A 16-bit DirectDraw *display* surface is RGB565, not ARGB4444. The two must
// not be confused: ARGB4444 is a texture format (see EnumTextureFormats), while
// the back buffer is what nocturne_gl_present_framebuffer uploads, and that
// path is GL_UNSIGNED_SHORT_5_6_5. Reporting 4444 for a display surface made
// the engine pack 4:4:4:4 pixels that were then uploaded as 5:6:5.
void fill_rgb565(DDPIXELFORMAT *pf) {
    memset(pf, 0, sizeof(*pf));
    pf->dwSize  = sizeof(DDPIXELFORMAT);
    pf->dwFlags = DDPF_RGB;
    pf->dwBitCount.dwRGBBitCount      = 16;
    pf->dwRedYMask.dwRBitMask         = 0xF800;
    pf->dwGreenUMask.dwGBitMask       = 0x07E0;
    pf->dwBlueVMask.dwBBitMask        = 0x001F;
    pf->dwAlphaBitMask.dwRGBAlphaBitMask = 0x0000;
}

// The one place that decides what pixel format a surface advertises. Every
// query (Lock, GetSurfaceDesc, GetPixelFormat) goes through here so a display
// surface and a texture can never disagree about what 16bpp means.
void fill_surface_format(DWORD bpp, DWORD caps, DDPIXELFORMAT *pf) {
    if (bpp != 16) {
        fill_argb8888(pf);
        return;
    }
    const DWORD display_caps = DDSCAPS_PRIMARYSURFACE | DDSCAPS_BACKBUFFER;
    if ((caps & DDSCAPS_TEXTURE) != 0 && (caps & display_caps) == 0) {
        fill_argb4444(pf);   // texture
    } else {
        fill_rgb565(pf);     // display / back buffer
    }
}

void fill_zbuffer(DDPIXELFORMAT *pf, DWORD depth_bits) {
    memset(pf, 0, sizeof(*pf));
    pf->dwSize  = sizeof(DDPIXELFORMAT);
    pf->dwFlags = DDPF_ZBUFFER;
    pf->dwBitCount.dwRGBBitCount = depth_bits;   // union: dwZBufferBitDepth
}

}  // namespace

// =============================================================================
// Unimplemented-slot stub
// =============================================================================
//
// Fills every vtable entry the DLL is not expected to call. Returning an error
// (rather than leaving the slot null) turns an unexpected call into a clean
// failure the DLL's own error handling can see, and logs it once so we learn
// the surface grew.

static HRESULT gl_unsupported_stub(void *this_ptr, ...) {
    (void)this_ptr;
    DDRAW_LOG_RL(4, 1000, "gl_ddraw: unimplemented DirectX method called");
    return DDERR_UNSUPPORTED;
}

#define STUB ((void *)&gl_unsupported_stub)

// =============================================================================
// IDirect3DTexture2
// =============================================================================

static ULONG texture_AddRef(IUnknown *this_ptr)  { (void)this_ptr; return 1; }

static ULONG texture_Release(IUnknown *this_ptr) {
    // The owning surface frees this; Release is bookkeeping only.
    (void)this_ptr;
    return 0;
}

static IDirect3DTexture2_vtable g_texture_vtable = {
    (IUnknown_QueryInterface *)STUB,
    (IUnknown_AddRef *)texture_AddRef,
    (IUnknown_Release *)texture_Release,
    (IDirect3DTexture2_GetHandle *)STUB,
    (IDirect3DTexture2_PaletteChanged *)STUB,
    (IDirect3DTexture2_Load *)STUB,
};

// =============================================================================
// IDirectDrawSurface
// =============================================================================

namespace {

// Push a texture surface's CPU pixels to its GL texture. Called lazily at bind
// time so a sequence of Blt/Lock writes costs exactly one upload.
void surface_sync_texture(GLSurface *surf) {
    if (surf == nullptr || surf->pixels == nullptr) return;

    if (surf->gl_texture == 0) {
        gl.GenTextures(1, &surf->gl_texture);
        if (surf->gl_texture == 0) return;
        gl.BindTexture(GL_TEXTURE_2D, surf->gl_texture);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        // Only level 0 is ever uploaded, but the DLL's D3DTSS_MIPFILTER handling
        // can select a mipmap MIN_FILTER. A mipmap filter on a texture with no
        // mip chain makes it *incomplete*, and GL then silently disables
        // texturing for that draw — the geometry comes out in flat vertex colour
        // with no texture at all. Capping the level range at 0 makes a
        // single-level texture complete under any filter, so the DLL keeps its
        // filter choice and the texture still samples.
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, 0);
        surf->cpu_dirty = 1;
    } else {
        gl.BindTexture(GL_TEXTURE_2D, surf->gl_texture);
    }

    if (!surf->cpu_dirty) return;

    GLenum format = 0, type = 0;
    gl_format_for_bpp(surf->bpp, surf->caps, &format, &type);
    gl.PixelStorei(GL_UNPACK_ALIGNMENT, 1);
    gl.PixelStorei(GL_UNPACK_ROW_LENGTH,
                   (surf->pitch > 0) ? (GLint)(surf->pitch / (surf->bpp / 8)) : (GLint)surf->width);
    gl.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)surf->width, (GLsizei)surf->height, 0,
                  format, type, surf->pixels);
    gl.PixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    surf->cpu_dirty = 0;
}

// Pull the rendered frame out of GL into a back buffer's CPU pixels.
//
// This is what makes the 2D overlay work. The engine locks the back buffer and
// draws its HUD/text straight into the returned scanlines, expecting to find
// the 3D scene already there — which on real DirectDraw it would, both being
// the same memory. Reading back first reproduces that, at the cost of one
// downtransfer per locked frame.
void surface_readback_from_gl(GLSurface *surf) {
    if (surf->pixels == nullptr) return;
    if (surf->bpp != 32 && surf->bpp != 16) {
        // Never silently skip: without the readback the 3D scene never reaches
        // the CPU buffer and the frame goes black with no other symptom.
        DDRAW_LOG_RL(4, 500, "gl_ddraw: no readback path for %u-bit surface",
                     (unsigned)surf->bpp);
        return;
    }

    GLenum format = 0, type = 0;
    gl_format_for_bpp(surf->bpp, surf->caps, &format, &type);
    const GLint bytes_pp = (GLint)(surf->bpp / 8);

    gl.PixelStorei(GL_PACK_ALIGNMENT, 1);
    gl.PixelStorei(GL_PACK_ROW_LENGTH,
                   (surf->pitch > 0) ? (GLint)(surf->pitch / bytes_pp) : (GLint)surf->width);
    // With the persistent scene FBO bound, the frame lives in its colour
    // attachment; GL_BACK is only meaningful for the default framebuffer.
    gl.ReadBuffer(nocturne_gl_scene_target_active() ? GL_COLOR_ATTACHMENT0 : GL_BACK);
    gl.ReadPixels(0, 0, (GLsizei)surf->width, (GLsizei)surf->height,
                  format, type, surf->pixels);
    gl.PixelStorei(GL_PACK_ROW_LENGTH, 0);

    // GL reads bottom-up; the surface is top-down.
    const size_t row_bytes = surf->pitch;
    unsigned char *base = (unsigned char *)surf->pixels;
    unsigned char *tmp  = (unsigned char *)malloc(row_bytes);
    if (tmp == nullptr) return;
    for (DWORD y = 0; y < surf->height / 2; y++) {
        unsigned char *top    = base + (size_t)y * row_bytes;
        unsigned char *bottom = base + (size_t)(surf->height - 1 - y) * row_bytes;
        memcpy(tmp, top, row_bytes);
        memcpy(top, bottom, row_bytes);
        memcpy(bottom, tmp, row_bytes);
    }
    free(tmp);
}

}  // namespace

static HRESULT surface_QueryInterface(IUnknown *this_ptr, GUID *riid, void **ppv) {
    GLSurface *surf = (GLSurface *)this_ptr;
    if (ppv == nullptr) return DDERR_INVALIDPARAMS;

    // The DLL only ever asks a surface for IID_IDirect3DTexture2, and only to
    // get a pointer it can hand to SetTexture — it never calls Load/GetHandle.
    if (surf->texture_iface == nullptr) {
        surf->texture_iface = (GLTexture *)calloc(1, sizeof(GLTexture));
        if (surf->texture_iface == nullptr) return DDERR_OUTOFMEMORY;
        surf->texture_iface->vtable  = &g_texture_vtable;
        surf->texture_iface->surface = surf;
    }
    *ppv = surf->texture_iface;
    return DD_OK;
}

static ULONG surface_AddRef(IUnknown *this_ptr) { (void)this_ptr; return 1; }

static ULONG surface_Release(IUnknown *this_ptr) {
    GLSurface *surf = (GLSurface *)this_ptr;
    if (surf == nullptr) return 0;

    if (surf->gl_texture != 0) {
        gl.DeleteTextures(1, &surf->gl_texture);
        surf->gl_texture = 0;
    }
    free(surf->texture_iface);
    free(surf->pixels);
    free(surf);
    return 0;
}

static HRESULT surface_Lock(IDirectDrawSurface *this_ptr, RECT *rect,
                            DDSURFACEDESC2 *desc, DWORD flags, void *event) {
    (void)rect; (void)flags; (void)event;
    GLSurface *surf = (GLSurface *)this_ptr;
    if (desc == nullptr || surf->pixels == nullptr) return DDERR_INVALIDPARAMS;

    // Locking the back buffer means the caller is about to compose 2D over the
    // frame, so it needs the rendered pixels present first.
    if ((surf->caps & (DDSCAPS_BACKBUFFER | DDSCAPS_PRIMARYSURFACE)) != 0) {
        surface_readback_from_gl(surf);
    }

    desc->dwSize   = sizeof(DDSURFACEDESC2);
    desc->dwFlags  = DDSD_WIDTH | DDSD_HEIGHT | DDSD_PITCH | DDSD_LPSURFACE |
                     DDSD_CAPS | DDSD_PIXELFORMAT;
    desc->dwWidth  = surf->width;
    desc->dwHeight = surf->height;
    desc->dwPitchOrLinearSize.lPitch = (LONG)surf->pitch;
    desc->lpSurface = surf->pixels;
    desc->ddsCaps.dwCaps = surf->caps;
    // Real DirectDraw fills the whole description on Lock, pixel format
    // included, and APIDLLsetColorTable16 relies on it: it derives the channel
    // shifts by scanning each mask for its lowest set bit
    // (`for (mask = ...; (mask & 1) == 0; mask >>= 1) shift++;`).
    fill_surface_format(surf->bpp, surf->caps, &desc->ddpfPixelFormat);

    surf->locked = 1;
    return DD_OK;
}

static HRESULT surface_Unlock(IDirectDrawSurface *this_ptr, void *unused) {
    (void)unused;
    GLSurface *surf = (GLSurface *)this_ptr;
    surf->locked    = 0;
    surf->cpu_dirty = 1;
    return DD_OK;
}

static HRESULT surface_GetSurfaceDesc(IDirectDrawSurface *this_ptr, DDSURFACEDESC2 *desc) {
    GLSurface *surf = (GLSurface *)this_ptr;
    if (desc == nullptr) return DDERR_INVALIDPARAMS;

    desc->dwSize   = sizeof(DDSURFACEDESC2);
    desc->dwFlags  = DDSD_WIDTH | DDSD_HEIGHT | DDSD_PITCH | DDSD_CAPS | DDSD_PIXELFORMAT;
    desc->dwWidth  = surf->width;
    desc->dwHeight = surf->height;
    desc->dwPitchOrLinearSize.lPitch = (LONG)surf->pitch;
    desc->ddsCaps.dwCaps = surf->caps;
    fill_surface_format(surf->bpp, surf->caps, &desc->ddpfPixelFormat);
    return DD_OK;
}

static HRESULT surface_GetAttachedSurface(IDirectDrawSurface *this_ptr, DDSCAPS *caps,
                                          IDirectDrawSurface **out) {
    GLSurface *surf = (GLSurface *)this_ptr;
    if (out == nullptr) return DDERR_INVALIDPARAMS;

    const DWORD want = (caps != nullptr) ? caps->dwCaps : 0;

    if ((want & DDSCAPS_ZBUFFER) != 0 && surf->attached_z != nullptr) {
        *out = (IDirectDrawSurface *)surf->attached_z;
        return DD_OK;
    }
    // Mip-chain walk (uploadCurrentTexture) and back-buffer fetch share this
    // entry point; which one is meant is decided by what the surface has.
    if ((want & DDSCAPS_MIPMAP) != 0 || surf->mip_next != nullptr) {
        if (surf->mip_next == nullptr) return DDERR_GENERIC;
        *out = (IDirectDrawSurface *)surf->mip_next;
        return DD_OK;
    }
    if (surf->back_buffer != nullptr) {
        *out = (IDirectDrawSurface *)surf->back_buffer;
        return DD_OK;
    }
    return DDERR_GENERIC;
}

static HRESULT surface_AddAttachedSurface(IDirectDrawSurface *this_ptr,
                                          IDirectDrawSurface *attached) {
    GLSurface *surf = (GLSurface *)this_ptr;
    GLSurface *att  = (GLSurface *)attached;
    if (att != nullptr && (att->caps & DDSCAPS_ZBUFFER) != 0) {
        // The depth buffer is the GL context's own; attaching is bookkeeping.
        surf->attached_z = att;
    }
    return DD_OK;
}

static HRESULT surface_Blt(IDirectDrawSurface *this_ptr, RECT *dest_rect,
                           IDirectDrawSurface *src_surface, RECT *src_rect,
                           DWORD flags, DDBLTFX *fx) {
    (void)dest_rect; (void)src_rect;
    GLSurface *dst = (GLSurface *)this_ptr;

    // Color / depth fill. The DLL uses these to clear the back buffer, the Z
    // buffer, and sub-rectangles of the Z buffer.
    if ((flags & (DDBLT_COLORFILL | DDBLT_DEPTHFILL)) != 0) {
        if ((flags & DDBLT_DEPTHFILL) != 0 || (dst->caps & DDSCAPS_ZBUFFER) != 0) {
            gl.DepthMask(GL_TRUE);
            gl.ClearDepth(1.0);
            gl.Clear(GL_DEPTH_BUFFER_BIT);
            return DD_OK;
        }
        const DWORD fill = (fx != nullptr) ? fx->dwFillColor : 0;
        gl.ClearColor(((fill >> 16) & 0xff) / 255.0f,
                      ((fill >>  8) & 0xff) / 255.0f,
                      ( fill        & 0xff) / 255.0f,
                      1.0f);
        gl.Clear(GL_COLOR_BUFFER_BIT);
        return DD_OK;
    }

    // Surface-to-surface copy. In this DLL that is always the system-memory
    // staging texture being pushed into the "video memory" texture, so it is a
    // CPU copy plus an upload flag rather than anything GL does.
    GLSurface *src = (GLSurface *)src_surface;
    if (src != nullptr && src->pixels != nullptr && dst->pixels != nullptr) {
        const DWORD rows  = (src->height < dst->height) ? src->height : dst->height;
        const DWORD bytes = (src->pitch  < dst->pitch)  ? src->pitch  : dst->pitch;
        for (DWORD y = 0; y < rows; y++) {
            memcpy((unsigned char *)dst->pixels + (size_t)y * dst->pitch,
                   (unsigned char *)src->pixels + (size_t)y * src->pitch, bytes);
        }
        dst->cpu_dirty = 1;
    }
    return DD_OK;
}

static HRESULT surface_Flip(IDirectDrawSurface *this_ptr,
                            IDirectDrawSurface *override_surface, DWORD flags) {
    (void)override_surface; (void)flags;
    GLSurface *surf = (GLSurface *)this_ptr;
    GLSurface *back = (surf->back_buffer != nullptr) ? surf->back_buffer : surf;

    // If the frame was locked, the CPU copy is now the composited truth (3D read
    // back at Lock, 2D drawn over it) and has to go back to the GPU. If it was
    // never locked, the GL framebuffer already holds the finished frame and
    // uploading a stale CPU buffer would erase it.
    if (back->cpu_dirty && back->pixels != nullptr) {
        nocturne_gl_present_framebuffer(back->pixels, (int)back->width, (int)back->height,
                                        (int)back->pitch, (int)back->bpp);
        back->cpu_dirty = 0;
    } else {
        nocturne_gl_swap_only();
    }
    return DD_OK;
}

static HRESULT surface_IsLost(IDirectDrawSurface *this_ptr) { (void)this_ptr; return DD_OK; }
static HRESULT surface_Restore(IDirectDrawSurface *this_ptr) { (void)this_ptr; return DD_OK; }

static HRESULT surface_GetCaps(IDirectDrawSurface *this_ptr, DDSCAPS *caps) {
    GLSurface *surf = (GLSurface *)this_ptr;
    if (caps == nullptr) return DDERR_INVALIDPARAMS;
    caps->dwCaps = surf->caps;
    return DD_OK;
}

static HRESULT surface_GetPixelFormat(IDirectDrawSurface *this_ptr, DDPIXELFORMAT *pf) {
    GLSurface *surf = (GLSurface *)this_ptr;
    if (pf == nullptr) return DDERR_INVALIDPARAMS;
    fill_surface_format(surf->bpp, surf->caps, pf);
    return DD_OK;
}

// GDI interop: the DLL exposes an HDC on the back buffer for the host engine's
// text drawing. There is no HDC under SDL, so report failure and let the caller
// fall back to its own rasterization.
static HRESULT surface_GetDC(IDirectDrawSurface *this_ptr, HDC *dc) {
    (void)this_ptr;
    if (dc != nullptr) *dc = nullptr;
    return DDERR_UNSUPPORTED;
}
static HRESULT surface_ReleaseDC(IDirectDrawSurface *this_ptr, HDC dc) {
    (void)this_ptr; (void)dc;
    return DD_OK;
}

static IDirectDrawSurface_vtable g_surface_vtable = {
    (IUnknown_QueryInterface *)surface_QueryInterface,
    (IUnknown_AddRef *)surface_AddRef,
    (IUnknown_Release *)surface_Release,
    (IDirectDrawSurface_AddAttachedSurface *)surface_AddAttachedSurface,
    (IDirectDrawSurface_AddOverlayDirtyRect *)STUB,
    (IDirectDrawSurface_Blt *)surface_Blt,
    (IDirectDrawSurface_BltBatch *)STUB,
    (IDirectDrawSurface_BltFast *)STUB,
    (IDirectDrawSurface_DeleteAttachedSurface *)STUB,
    (IDirectDrawSurface_EnumAttachedSurfaces *)STUB,
    (IDirectDrawSurface_EnumOverlayZOrders *)STUB,
    (IDirectDrawSurface_Flip *)surface_Flip,
    (IDirectDrawSurface_GetAttachedSurface *)surface_GetAttachedSurface,
    (IDirectDrawSurface_GetBltStatus *)STUB,
    (IDirectDrawSurface_GetCaps *)surface_GetCaps,
    (IDirectDrawSurface_GetClipper *)STUB,
    (IDirectDrawSurface_GetColorKey *)STUB,
    (IDirectDrawSurface_GetDC *)surface_GetDC,
    (IDirectDrawSurface_GetFlipStatus *)STUB,
    (IDirectDrawSurface_GetOverlayPosition *)STUB,
    (IDirectDrawSurface_GetPalette *)STUB,
    (IDirectDrawSurface_GetPixelFormat *)surface_GetPixelFormat,
    (IDirectDrawSurface_GetSurfaceDesc *)surface_GetSurfaceDesc,
    (IDirectDrawSurface_Initialize *)STUB,
    (IDirectDrawSurface_IsLost *)surface_IsLost,
    (IDirectDrawSurface_Lock *)surface_Lock,
    (IDirectDrawSurface_ReleaseDC *)surface_ReleaseDC,
    (IDirectDrawSurface_Restore *)surface_Restore,
    (IDirectDrawSurface_SetClipper *)STUB,
    (IDirectDrawSurface_SetColorKey *)STUB,
    (IDirectDrawSurface_SetOverlayPosition *)STUB,
    (IDirectDrawSurface_SetPalette *)STUB,
    (IDirectDrawSurface_Unlock *)surface_Unlock,
    (IDirectDrawSurface_UpdateOverlay *)STUB,
    (IDirectDrawSurface_UpdateOverlayDisplay *)STUB,
    (IDirectDrawSurface_UpdateOverlayZOrder *)STUB,
};

namespace {

GLSurface *alloc_surface(GLDDraw *owner, DWORD width, DWORD height, DWORD bpp, DWORD caps) {
    GLSurface *surf = (GLSurface *)calloc(1, sizeof(GLSurface));
    if (surf == nullptr) return nullptr;

    surf->vtable = &g_surface_vtable;
    surf->owner  = owner;
    surf->width  = (width  > 0) ? width  : 1;
    surf->height = (height > 0) ? height : 1;
    surf->bpp    = (bpp    > 0) ? bpp    : 32;
    surf->caps   = caps;
    surf->pitch  = surf->width * (surf->bpp / 8);

    // Z buffers have no CPU storage: depth lives in the GL context, and the DLL
    // never locks them (it only Blts to clear and Blts between master copies).
    if ((caps & DDSCAPS_ZBUFFER) == 0) {
        surf->pixels = calloc((size_t)surf->pitch * surf->height, 1);
        if (surf->pixels == nullptr) {
            free(surf);
            return nullptr;
        }
    }
    return surf;
}

}  // namespace

// =============================================================================
// IDirect3DViewport3
// =============================================================================

static ULONG viewport_AddRef(IUnknown *this_ptr) { (void)this_ptr; return 1; }
static ULONG viewport_Release(IUnknown *this_ptr) { free(this_ptr); return 0; }

static HRESULT viewport_SetViewport2(IDirect3DViewport3 *this_ptr, D3DVIEWPORT2 *data) {
    GLViewport *vp = (GLViewport *)this_ptr;
    if (data == nullptr) return DDERR_INVALIDPARAMS;
    vp->viewport = *data;
    gl.Viewport((GLint)data->dwX, (GLint)data->dwY,
                (GLsizei)data->dwWidth, (GLsizei)data->dwHeight);
    gl.DepthRange((GLclampd)data->dvMinZ, (GLclampd)data->dvMaxZ);
    return DD_OK;
}

static IDirect3DViewport3_vtable g_viewport_vtable = {
    (IUnknown_QueryInterface *)STUB,
    (IUnknown_AddRef *)viewport_AddRef,
    (IUnknown_Release *)viewport_Release,
    (IDirect3DViewport3_Initialize *)STUB,
    (IDirect3DViewport3_GetViewport *)STUB,
    (IDirect3DViewport3_SetViewport *)STUB,
    (IDirect3DViewport3_TransformVertices *)STUB,
    (IDirect3DViewport3_LightElements *)STUB,
    (IDirect3DViewport3_SetBackground *)STUB,
    (IDirect3DViewport3_GetBackground *)STUB,
    (IDirect3DViewport3_SetBackgroundDepth *)STUB,
    (IDirect3DViewport3_GetBackgroundDepth *)STUB,
    (IDirect3DViewport3_Clear *)STUB,
    (IDirect3DViewport3_AddLight *)STUB,
    (IDirect3DViewport3_DeleteLight *)STUB,
    (IDirect3DViewport3_NextLight *)STUB,
    (IDirect3DViewport3_GetViewport2 *)STUB,
    (IDirect3DViewport3_SetViewport2 *)viewport_SetViewport2,
    (IDirect3DViewport3_SetBackgroundDepth2 *)STUB,
    (IDirect3DViewport3_GetBackgroundDepth2 *)STUB,
    (IDirect3DViewport3_Clear2 *)STUB,
};

// =============================================================================
// IDirect3DDevice3 — render state translation
// =============================================================================

namespace {

// D3DBLEND -> GL blend factor. The DLL only uses ZERO/ONE/SRCALPHA/INVSRCALPHA,
// but the full table is cheap and avoids a silent wrong-blend if that changes.
GLenum blend_factor(DWORD d3d_blend) {
    switch (d3d_blend) {
        case 1:  return GL_ZERO;                 // D3DBLEND_ZERO
        case 2:  return GL_ONE;                  // D3DBLEND_ONE
        case 3:  return GL_SRC_COLOR;
        case 4:  return GL_ONE_MINUS_SRC_COLOR;
        case 5:  return GL_SRC_ALPHA;
        case 6:  return GL_ONE_MINUS_SRC_ALPHA;
        case 7:  return GL_DST_ALPHA;
        case 8:  return GL_ONE_MINUS_DST_ALPHA;
        case 9:  return GL_DST_COLOR;
        case 10: return GL_ONE_MINUS_DST_COLOR;
        case 11: return GL_SRC_ALPHA_SATURATE;
        default: return GL_ONE;
    }
}

// D3DCMPFUNC -> GL comparison, shared by ZFUNC and ALPHAFUNC.
GLenum compare_func(DWORD d3d_func) {
    switch (d3d_func) {
        case 1:  return GL_NEVER;
        case 2:  return GL_LESS;
        case 3:  return GL_EQUAL;
        case 4:  return GL_LEQUAL;
        case 5:  return GL_GREATER;
        case 6:  return GL_NOTEQUAL;
        case 7:  return GL_GEQUAL;
        case 8:  return GL_ALWAYS;
        default: return GL_LEQUAL;
    }
}

// Deferred pieces of state that GL needs as a pair (blend factors, alpha ref).
struct RenderStateCache {
    GLenum src_blend  = GL_ONE;
    GLenum dst_blend  = GL_ZERO;
    GLenum alpha_func = GL_GEQUAL;
    float  alpha_ref  = 0.0f;
};

RenderStateCache g_state;

}  // namespace

static HRESULT device_SetRenderState(IDirect3DDevice3 *this_ptr,
                                     D3DRENDERSTATETYPE state, DWORD value) {
    GLDevice *dev = (GLDevice *)this_ptr;

    // Same hazard as device_SetTextureStageState: the legacy TEXTUREADDRESS /
    // TEXTUREMAG / TEXTUREMIN render states below map to glTexParameteri, which
    // applies to the currently bound texture. With no texture of ours bound that
    // would be the exe's present texture.
    if (((DWORD)state == 3 || (DWORD)state == 17 || (DWORD)state == 18) &&
        dev->bound_texture == nullptr) {
        return DD_OK;
    }

    switch ((DWORD)state) {
        case 7:   // D3DRENDERSTATE_ZENABLE
            if (value) gl.Enable(GL_DEPTH_TEST); else gl.Disable(GL_DEPTH_TEST);
            break;
        case 14:  // ZWRITEENABLE
            gl.DepthMask(value ? GL_TRUE : GL_FALSE);
            break;
        case 23:  // ZFUNC
            gl.DepthFunc(compare_func(value));
            break;

        case 15:  // ALPHATESTENABLE
            if (value) gl.Enable(GL_ALPHA_TEST); else gl.Disable(GL_ALPHA_TEST);
            break;
        case 24:  // ALPHAREF — D3D passes 0..255, GL wants 0..1
            g_state.alpha_ref = (float)(value & 0xff) / 255.0f;
            gl.AlphaFunc(g_state.alpha_func, g_state.alpha_ref);
            break;
        case 25:  // ALPHAFUNC
            g_state.alpha_func = compare_func(value);
            gl.AlphaFunc(g_state.alpha_func, g_state.alpha_ref);
            break;

        case 27:  // ALPHABLENDENABLE
            if (value) gl.Enable(GL_BLEND); else gl.Disable(GL_BLEND);
            break;
        case 19:  // SRCBLEND
            g_state.src_blend = blend_factor(value);
            gl.BlendFunc(g_state.src_blend, g_state.dst_blend);
            break;
        case 20:  // DESTBLEND
            g_state.dst_blend = blend_factor(value);
            gl.BlendFunc(g_state.src_blend, g_state.dst_blend);
            break;

        case 9:   // SHADEMODE — 1 FLAT, 2 GOURAUD (3 PHONG never used)
            gl.ShadeModel((value == 1) ? GL_FLAT : GL_SMOOTH);
            break;
        case 8:   // FILLMODE — 2 WIREFRAME, 3 SOLID
            gl.PolygonMode(GL_FRONT_AND_BACK, (value == 2) ? GL_LINE : GL_FILL);
            break;
        case 22:  // CULLMODE — 1 NONE, 2 CW, 3 CCW
            if (value == 1) {
                gl.Disable(GL_CULL_FACE);
            } else {
                gl.Enable(GL_CULL_FACE);
                gl.CullFace(GL_BACK);
                gl.FrontFace((value == 2) ? GL_CW : GL_CCW);
            }
            break;

        case 28:  // FOGENABLE
            if (value) gl.Enable(GL_FOG); else gl.Disable(GL_FOG);
            break;
        case 34: { // FOGCOLOR — packed 0x00RRGGBB
            const GLfloat rgba[4] = {
                ((value >> 16) & 0xff) / 255.0f,
                ((value >>  8) & 0xff) / 255.0f,
                ( value        & 0xff) / 255.0f,
                1.0f,
            };
            gl.Fogfv(GL_FOG_COLOR, rgba);
            break;
        }
        case 35:  // FOGTABLEMODE — 0 NONE, 1 EXP, 2 EXP2, 3 LINEAR
            switch (value) {
                case 1:  gl.Fogi(GL_FOG_MODE, GL_EXP);    break;
                case 2:  gl.Fogi(GL_FOG_MODE, GL_EXP2);   break;
                case 3:  gl.Fogi(GL_FOG_MODE, GL_LINEAR); break;
                default: break;   // NONE: the vertex specular alpha carries fog
            }
            break;

        case 21:  // TEXTUREMAPBLEND — 2 MODULATE, 4 MODULATEALPHA
            gl.TexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
            break;
        case 3:   // TEXTUREADDRESS — 1 WRAP, 2 MIRROR, 3 CLAMP
            gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,
                             (value == 3) ? GL_CLAMP_TO_EDGE : GL_REPEAT);
            gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T,
                             (value == 3) ? GL_CLAMP_TO_EDGE : GL_REPEAT);
            break;
        case 17:  // TEXTUREMAG — 1 POINT, 2 LINEAR
            gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,
                             (value == 1) ? GL_NEAREST : GL_LINEAR);
            break;
        case 18:  // TEXTUREMIN
            gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                             (value == 1) ? GL_NEAREST : GL_LINEAR);
            break;

        // States with no GL equivalent, or that GL handles implicitly. Named so
        // the "unhandled" log below stays meaningful rather than constant noise:
        //   1 TEXTUREHANDLE (SetTexture supersedes)  2 ANTIALIAS
        //   4 TEXTUREPERSPECTIVE (always on; the w premultiply handles it)
        //   5 WRAPU  6 WRAPV  11 LINEPATTERN  16 LASTPIXEL  26 DITHERENABLE
        //   29 SPECULARENABLE (applied per-vertex)  30 ZVISIBLE  31 SUBPIXEL
        //   33 STIPPLEDALPHA  39 COLORKEYENABLE  41 MONOENABLE
        case 1: case 2: case 4: case 5: case 6: case 11: case 16:
        case 26: case 29: case 30: case 31: case 33: case 39: case 41:
            break;

        default:
            DDRAW_LOG_RL(4, 500, "gl_ddraw: unhandled render state %u = %u",
                         (unsigned)state, (unsigned)value);
            break;
    }
    return DD_OK;
}

static HRESULT device_SetTextureStageState(IDirect3DDevice3 *this_ptr, DWORD stage,
                                           D3DTEXTURESTAGESTATETYPE state, DWORD value) {
    GLDevice *dev = (GLDevice *)this_ptr;
    if (stage != 0) return DD_OK;   // the DLL only ever drives stage 0

    // In D3D a stage state applies to the texture set on that stage. In GL,
    // glTexParameteri applies to whatever is bound right now — which, before the
    // first SetTexture of a frame, is still the exe's present texture. Writing a
    // mipmap MIN_FILTER onto that made it incomplete and turned the whole screen
    // white. Filter/wrap states are only meaningful with a texture bound, so
    // drop them when there is none.
    const bool needs_bound_texture =
        ((DWORD)state == 16 || (DWORD)state == 17 || (DWORD)state == 18 ||
         (DWORD)state == 19 || (DWORD)state == 20);
    if (needs_bound_texture && dev->bound_texture == nullptr) {
        return DD_OK;
    }

    switch ((DWORD)state) {
        case 1:   // D3DTSS_COLOROP — 1 DISABLE, 4 MODULATE
            if (value == 1) {
                gl.Disable(GL_TEXTURE_2D);
            } else {
                gl.Enable(GL_TEXTURE_2D);
                gl.TexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
            }
            break;
        case 16:  // D3DTSS_MAGFILTER — 1 POINT, 2 LINEAR
            gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,
                             (value == 1) ? GL_NEAREST : GL_LINEAR);
            break;
        case 17:  // D3DTSS_MINFILTER
        case 18:  // D3DTSS_MIPFILTER — 1 NONE, 2 POINT, 3 LINEAR
            // Min and mip filters combine into one GL enum, so resolve them
            // together: mip NONE means no mipmap chain is consulted at all.
            if (state == 18 && value == 1) {
                gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            } else if (state == 18) {
                gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                                 (value == 3) ? GL_LINEAR_MIPMAP_LINEAR
                                              : GL_LINEAR_MIPMAP_NEAREST);
            } else {
                gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                                 (value == 1) ? GL_NEAREST : GL_LINEAR);
            }
            break;
        default:
            DDRAW_LOG_RL(4, 500, "gl_ddraw: unhandled texture stage state %u = %u",
                         (unsigned)state, (unsigned)value);
            break;
    }
    return DD_OK;
}

static HRESULT device_SetTexture(IDirect3DDevice3 *this_ptr, DWORD stage,
                                 IDirect3DTexture2 *texture) {
    GLDevice  *dev = (GLDevice *)this_ptr;
    if (stage != 0) return DD_OK;

    GLTexture *tex = (GLTexture *)texture;
    if (tex == nullptr || tex->surface == nullptr) {
        gl.Disable(GL_TEXTURE_2D);
        dev->bound_texture = nullptr;
        return DD_OK;
    }

    gl.Enable(GL_TEXTURE_2D);
    surface_sync_texture(tex->surface);
    dev->bound_texture = tex->surface;
    return DD_OK;
}

static HRESULT device_DrawIndexedPrimitive(IDirect3DDevice3 *this_ptr,
                                           D3DPRIMITIVETYPE primitive_type,
                                           D3DVERTEXTYPE vertex_type,
                                           void *vertices, DWORD vertex_count,
                                           WORD *indices, DWORD index_count,
                                           DWORD flags) {
    (void)flags;
    GLDevice *dev = (GLDevice *)this_ptr;

    if (vertices == nullptr || indices == nullptr || vertex_count == 0 || index_count == 0) {
        return DD_OK;
    }
    if ((DWORD)primitive_type != D3DPT_TRIANGLELIST ||
        (DWORD)vertex_type != D3DFVF_TLVERTEX) {
        DDRAW_LOG_RL(4, 200, "gl_ddraw: unexpected draw prim=%u fvf=0x%x",
                     (unsigned)primitive_type, (unsigned)vertex_type);
        return DDERR_UNSUPPORTED;
    }
    if (!ensure_vertex_scratch(vertex_count)) return DDERR_OUTOFMEMORY;

    convert_vertices((const D3DTLVertex *)vertices, g_vertex_scratch, vertex_count);

    // The projection is derived from the render target rather than cached, so a
    // resolution change cannot leave a stale matrix behind.
    const GLSurface *target = dev->render_target;
    load_screen_projection((float)(target ? target->width  : 640),
                           (float)(target ? target->height : 480));

    const GLVertex *base = g_vertex_scratch;
    gl.EnableClientState(GL_VERTEX_ARRAY);
    gl.EnableClientState(GL_COLOR_ARRAY);
    gl.EnableClientState(GL_TEXTURE_COORD_ARRAY);
    gl.VertexPointer(4, GL_FLOAT, sizeof(GLVertex), &base->x);
    gl.ColorPointer(4, GL_UNSIGNED_BYTE, sizeof(GLVertex), base->diffuse);
    gl.TexCoordPointer(2, GL_FLOAT, sizeof(GLVertex), &base->u);

    // D3D's specular is an additive second color. Without the GL 1.4 entry point
    // there is nowhere to put it, so it is dropped (gl_api logs that once).
    if (nocturne_glSecondaryColorPointer != nullptr) {
        gl.EnableClientState(GL_SECONDARY_COLOR_ARRAY);
        nocturne_glSecondaryColorPointer(3, GL_UNSIGNED_BYTE, sizeof(GLVertex), base->specular);
        gl.Enable(GL_COLOR_SUM);
    }

    gl.DrawElements(GL_TRIANGLES, (GLsizei)index_count, GL_UNSIGNED_SHORT, indices);

    if (nocturne_glSecondaryColorPointer != nullptr) {
        gl.Disable(GL_COLOR_SUM);
        gl.DisableClientState(GL_SECONDARY_COLOR_ARRAY);
    }
    gl.DisableClientState(GL_TEXTURE_COORD_ARRAY);
    gl.DisableClientState(GL_COLOR_ARRAY);
    gl.DisableClientState(GL_VERTEX_ARRAY);
    return DD_OK;
}

static HRESULT device_BeginScene(IDirect3DDevice3 *this_ptr) {
    GLDevice *dev = (GLDevice *)this_ptr;
    dev->in_scene = 1;
    return DD_OK;
}

static HRESULT device_EndScene(IDirect3DDevice3 *this_ptr) {
    GLDevice *dev = (GLDevice *)this_ptr;
    dev->in_scene = 0;
    return DD_OK;
}

static HRESULT device_EnumTextureFormats(IDirect3DDevice3 *this_ptr,
                                         D3DENUMPIXELFORMATSCALLBACK *callback,
                                         void *context) {
    (void)this_ptr;
    if (callback == nullptr) return DDERR_INVALIDPARAMS;

    // The DLL accepts ARGB8888 on a 32bpp screen and ARGB4444 on 16bpp, and
    // calls fatalError if it is offered neither. Enumerate both; its callback
    // picks and returns 0 to stop.
    DDPIXELFORMAT pf;
    fill_argb8888(&pf);
    if (callback(&pf, context) == 0) return DD_OK;
    fill_argb4444(&pf);
    if (callback(&pf, context) == 0) return DD_OK;
    return DD_OK;
}

static HRESULT device_AddViewport(IDirect3DDevice3 *this_ptr, IDirect3DViewport3 *viewport) {
    (void)this_ptr; (void)viewport;
    return DD_OK;
}

static HRESULT device_SetCurrentViewport(IDirect3DDevice3 *this_ptr,
                                         IDirect3DViewport3 *viewport) {
    GLDevice *dev = (GLDevice *)this_ptr;
    dev->current_viewport = (GLViewport *)viewport;
    return DD_OK;
}

static ULONG device_AddRef(IUnknown *this_ptr) { (void)this_ptr; return 1; }
static ULONG device_Release(IUnknown *this_ptr) { free(this_ptr); return 0; }

static IDirect3DDevice3_vtable g_device_vtable = {
    (IUnknown_QueryInterface *)STUB,
    (IUnknown_AddRef *)device_AddRef,
    (IUnknown_Release *)device_Release,
    (IDirect3DDevice3_GetCaps *)STUB,
    (IDirect3DDevice3_GetStats *)STUB,
    (IDirect3DDevice3_AddViewport *)device_AddViewport,
    (IDirect3DDevice3_DeleteViewport *)STUB,
    (IDirect3DDevice3_NextViewport *)STUB,
    (IDirect3DDevice3_EnumTextureFormats *)device_EnumTextureFormats,
    (IDirect3DDevice3_BeginScene *)device_BeginScene,
    (IDirect3DDevice3_EndScene *)device_EndScene,
    (IDirect3DDevice3_GetDirect3D *)STUB,
    (IDirect3DDevice3_SetCurrentViewport *)device_SetCurrentViewport,
    (IDirect3DDevice3_GetCurrentViewport *)STUB,
    (IDirect3DDevice3_SetRenderTarget *)STUB,
    (IDirect3DDevice3_GetRenderTarget *)STUB,
    (IDirect3DDevice3_Begin *)STUB,
    (IDirect3DDevice3_BeginIndexed *)STUB,
    (IDirect3DDevice3_Vertex *)STUB,
    (IDirect3DDevice3_Index *)STUB,
    (IDirect3DDevice3_End *)STUB,
    (IDirect3DDevice3_GetRenderState *)STUB,
    (IDirect3DDevice3_SetRenderState *)device_SetRenderState,
    (IDirect3DDevice3_GetLightState *)STUB,
    (IDirect3DDevice3_SetLightState *)STUB,
    (IDirect3DDevice3_SetTransform *)STUB,
    (IDirect3DDevice3_GetTransform *)STUB,
    (IDirect3DDevice3_MultiplyTransform *)STUB,
    (IDirect3DDevice3_DrawPrimitive *)STUB,
    (IDirect3DDevice3_DrawIndexedPrimitive *)device_DrawIndexedPrimitive,
    (IDirect3DDevice3_SetClipStatus *)STUB,
    (IDirect3DDevice3_GetClipStatus *)STUB,
    (IDirect3DDevice3_DrawPrimitiveStrided *)STUB,
    (IDirect3DDevice3_DrawIndexedPrimitiveStrided *)STUB,
    (IDirect3DDevice3_DrawPrimitiveVB *)STUB,
    (IDirect3DDevice3_DrawIndexedPrimitiveVB *)STUB,
    (IDirect3DDevice3_ComputeSphereVisibility *)STUB,
    (IDirect3DDevice3_GetTexture *)STUB,
    (IDirect3DDevice3_SetTexture *)device_SetTexture,
    (IDirect3DDevice3_GetTextureStageState *)STUB,
    (IDirect3DDevice3_SetTextureStageState *)device_SetTextureStageState,
    (IDirect3DDevice3_ValidateDevice *)STUB,
};

// =============================================================================
// IDirect3D3
// =============================================================================

static ULONG d3d_AddRef(IUnknown *this_ptr) { (void)this_ptr; return 1; }
static ULONG d3d_Release(IUnknown *this_ptr) { free(this_ptr); return 0; }

static HRESULT d3d_CreateDevice(IDirect3D3 *this_ptr, GUID *guid,
                                IDirectDrawSurface *surface,
                                IDirect3DDevice3 **device, IUnknown *outer) {
    (void)guid; (void)outer;
    GLDirect3D *d3d = (GLDirect3D *)this_ptr;
    if (device == nullptr) return DDERR_INVALIDPARAMS;

    GLDevice *dev = (GLDevice *)calloc(1, sizeof(GLDevice));
    if (dev == nullptr) return DDERR_OUTOFMEMORY;
    dev->vtable        = &g_device_vtable;
    dev->owner         = d3d->owner;
    dev->render_target = (GLSurface *)surface;

    // Baseline the DLL assumes before it sets anything: depth on, no lighting.
    gl.Enable(GL_DEPTH_TEST);
    gl.DepthFunc(GL_LEQUAL);
    gl.DepthMask(GL_TRUE);
    gl.Disable(GL_LIGHTING);
    gl.Disable(GL_CULL_FACE);
    gl.ShadeModel(GL_SMOOTH);

    *device = (IDirect3DDevice3 *)dev;
    return DD_OK;
}

static HRESULT d3d_CreateViewport(IDirect3D3 *this_ptr, IDirect3DViewport3 **viewport,
                                  IUnknown *outer) {
    (void)this_ptr; (void)outer;
    if (viewport == nullptr) return DDERR_INVALIDPARAMS;

    GLViewport *vp = (GLViewport *)calloc(1, sizeof(GLViewport));
    if (vp == nullptr) return DDERR_OUTOFMEMORY;
    vp->vtable = &g_viewport_vtable;
    *viewport  = (IDirect3DViewport3 *)vp;
    return DD_OK;
}

static HRESULT d3d_EnumZBufferFormats(IDirect3D3 *this_ptr, GUID *guid,
                                      D3DENUMPIXELFORMATSCALLBACK *callback, void *context) {
    (void)this_ptr; (void)guid;
    if (callback == nullptr) return DDERR_INVALIDPARAMS;

    // The DLL's callback takes the first DDPF_ZBUFFER format on a 16bpp screen,
    // and on 32bpp keeps the deepest one it is shown. Offer shallow-to-deep so
    // either rule lands somewhere sensible.
    DDPIXELFORMAT pf;
    fill_zbuffer(&pf, 16);
    if (callback(&pf, context) == 0) return DD_OK;
    fill_zbuffer(&pf, 24);
    if (callback(&pf, context) == 0) return DD_OK;
    fill_zbuffer(&pf, 32);
    if (callback(&pf, context) == 0) return DD_OK;
    return DD_OK;
}

static IDirect3D3_vtable g_d3d_vtable = {
    (IUnknown_QueryInterface *)STUB,
    (IUnknown_AddRef *)d3d_AddRef,
    (IUnknown_Release *)d3d_Release,
    (IDirect3D3_EnumDevices *)STUB,
    (IDirect3D3_CreateLight *)STUB,
    (IDirect3D3_CreateMaterial *)STUB,
    (IDirect3D3_CreateViewport *)d3d_CreateViewport,
    (IDirect3D3_FindDevice *)STUB,
    (IDirect3D3_CreateDevice *)d3d_CreateDevice,
    (IDirect3D3_CreateVertexBuffer *)STUB,
    (IDirect3D3_EnumZBufferFormats *)d3d_EnumZBufferFormats,
    (IDirect3D3_EvictManagedTextures *)STUB,
};

// =============================================================================
// IDirectDraw / IDirectDraw4
// =============================================================================

static ULONG ddraw_AddRef(IUnknown *this_ptr) { (void)this_ptr; return 1; }
static ULONG ddraw_Release(IUnknown *this_ptr) { (void)this_ptr; return 0; }

static HRESULT ddraw_QueryInterface(IUnknown *this_ptr, GUID *riid, void **ppv) {
    GLDDraw *dd = (GLDDraw *)this_ptr;
    if (ppv == nullptr || riid == nullptr) return DDERR_INVALIDPARAMS;

    // Two hops are asked for, and the GUIDs are distinguishable by Data1:
    //   IID_IDirectDraw4 {9c59509a-...}  -> the same object, richer vtable
    //   IID_IDirect3D3   {bb223240-...}  -> a fresh Direct3D object
    if (riid->Data1 == 0xbb223240) {
        GLDirect3D *d3d = (GLDirect3D *)calloc(1, sizeof(GLDirect3D));
        if (d3d == nullptr) return DDERR_OUTOFMEMORY;
        d3d->vtable = &g_d3d_vtable;
        d3d->owner  = dd;
        *ppv = d3d;
        return DD_OK;
    }
    if (riid->Data1 == 0x9c59509a) {
        // IDirectDraw and IDirectDraw4 share slot order for everything this DLL
        // touches, so the same object answers both.
        *ppv = dd;
        return DD_OK;
    }
    DDRAW_LOG("gl_ddraw: QueryInterface for unknown IID %08x", (unsigned)riid->Data1);
    return E_NOINTERFACE;
}

static HRESULT ddraw_SetCooperativeLevel(IDirectDraw4 *this_ptr, HWND window, DWORD flags) {
    (void)flags;
    GLDDraw *dd = (GLDDraw *)this_ptr;
    dd->window = window;
    return DD_OK;
}

static HRESULT ddraw_SetDisplayMode(IDirectDraw4 *this_ptr, DWORD width, DWORD height,
                                    DWORD bpp, DWORD refresh, DWORD flags) {
    (void)refresh; (void)flags;
    GLDDraw *dd = (GLDDraw *)this_ptr;
    dd->width  = width;
    dd->height = height;
    dd->bpp    = bpp;

    // The window and its GL context already exist (the exe brought them up);
    // this only re-targets the present scaling at the DLL's chosen resolution.
    nocturne_gl_set_logical_size((int)width, (int)height);
    // Give the DLL a persistent render target at the new mode's size. Without
    // it the back buffer and Z buffer are undefined after every present, which
    // is not what a DirectDraw surface does.
    nocturne_gl_scene_target_bind((int)width, (int)height);
    DDRAW_LOG("gl_ddraw: SetDisplayMode %ux%u bpp=%u", (unsigned)width, (unsigned)height,
              (unsigned)bpp);
    return DD_OK;
}

static HRESULT ddraw_RestoreDisplayMode(IDirectDraw4 *this_ptr) { (void)this_ptr; return DD_OK; }
static HRESULT ddraw_FlipToGDISurface(IDirectDraw4 *this_ptr) { (void)this_ptr; return DD_OK; }

static HRESULT ddraw_GetCaps(IDirectDraw4 *this_ptr, DDCAPS *driver, DDCAPS *hel) {
    (void)this_ptr; (void)hel;
    if (driver == nullptr) return DDERR_INVALIDPARAMS;
    // isAdapter3DCapable tests dwCaps & DDCAPS_3D and rejects the adapter
    // otherwise, so this bit is what makes the DLL consider us usable at all.
    memset(driver, 0, sizeof(*driver));
    driver->dwSize = sizeof(DDCAPS);
    driver->dwCaps = DDCAPS_3D;
    return DD_OK;
}

static HRESULT ddraw_GetDeviceIdentifier(IDirectDraw4 *this_ptr,
                                         DDDEVICEIDENTIFIER *id, DWORD flags) {
    (void)this_ptr; (void)flags;
    if (id == nullptr) return DDERR_INVALIDPARAMS;
    memset(id, 0, sizeof(*id));

    const char *renderer = (const char *)gl.GetString(GL_RENDERER);
    const char *vendor   = (const char *)gl.GetString(GL_VENDOR);
    snprintf(id->szDriver, sizeof(id->szDriver), "%s", vendor ? vendor : "OpenGL");
    snprintf(id->szDescription, sizeof(id->szDescription), "%s",
             renderer ? renderer : "OpenGL renderer");

    // The engine special-cases a handful of 1999-era vendor/device IDs to force
    // 16bpp 640x480 (3dfx Voodoo, Intel i740, NVIDIA Riva). Reporting zero keeps
    // us out of every one of those branches.
    id->dwVendorId = 0;
    id->dwDeviceId = 0;
    return DD_OK;
}

static HRESULT ddraw_GetAvailableVidMem(IDirectDraw4 *this_ptr, DDSCAPS2 *caps,
                                        DWORD *total, DWORD *free_mem) {
    (void)this_ptr; (void)caps;
    // Reported generously: the value gates texture-cache sizing and the
    // resolution options the menu offers.
    if (total)    *total    = 256u * 1024u * 1024u;
    if (free_mem) *free_mem = 256u * 1024u * 1024u;
    return DD_OK;
}

static HRESULT ddraw_CreateSurface(IDirectDraw4 *this_ptr, DDSURFACEDESC2 *desc,
                                   IDirectDrawSurface **out, IUnknown *outer) {
    (void)outer;
    GLDDraw *dd = (GLDDraw *)this_ptr;
    if (desc == nullptr || out == nullptr) return DDERR_INVALIDPARAMS;

    const DWORD caps = desc->ddsCaps.dwCaps;
    DWORD width  = (desc->dwFlags & DDSD_WIDTH)  ? desc->dwWidth  : dd->width;
    DWORD height = (desc->dwFlags & DDSD_HEIGHT) ? desc->dwHeight : dd->height;
    DWORD bpp    = dd->bpp;

    if ((desc->dwFlags & DDSD_PIXELFORMAT) != 0 &&
        desc->ddpfPixelFormat.dwBitCount.dwRGBBitCount != 0) {
        bpp = (DWORD)(bytes_per_pixel(&desc->ddpfPixelFormat) * 8);
    }

    GLSurface *surf = alloc_surface(dd, width, height, bpp, caps);
    if (surf == nullptr) return DDERR_OUTOFMEMORY;

    // A primary surface requested with a back-buffer count is a flip chain; the
    // DLL then fetches the back buffer with GetAttachedSurface.
    if ((caps & DDSCAPS_PRIMARYSURFACE) != 0) {
        dd->primary = surf;
        if ((desc->dwFlags & DDSD_BACKBUFFERCOUNT) != 0 && desc->dwBackBufferCount > 0) {
            GLSurface *back = alloc_surface(dd, width, height, bpp,
                                            DDSCAPS_BACKBUFFER | DDSCAPS_VIDEOMEMORY);
            if (back == nullptr) {
                surface_Release((IUnknown *)surf);
                return DDERR_OUTOFMEMORY;
            }
            surf->back_buffer = back;
        }
    }

    // Mipmapped textures: build the chain now so the DLL's GetAttachedSurface
    // walk in uploadCurrentTexture finds each level.
    if ((caps & DDSCAPS_TEXTURE) != 0 && (caps & DDSCAPS_MIPMAP) != 0) {
        DWORD levels = (desc->dwFlags & DDSD_MIPMAPCOUNT)
                     ? desc->dwMipMapOrRefresh.dwMipMapCount : 1;
        GLSurface *prev = surf;
        DWORD w = width, h = height;
        for (DWORD i = 1; i < levels && w > 1 && h > 1; i++) {
            w /= 2; h /= 2;
            GLSurface *level = alloc_surface(dd, w, h, bpp, caps);
            if (level == nullptr) break;
            prev->mip_next = level;
            prev = level;
        }
    }

    *out = (IDirectDrawSurface *)surf;
    return DD_OK;
}

static IDirectDraw4_vtable g_ddraw_vtable = {
    (IUnknown_QueryInterface *)ddraw_QueryInterface,
    (IUnknown_AddRef *)ddraw_AddRef,
    (IUnknown_Release *)ddraw_Release,
    STUB,                                              // Compact
    STUB,                                              // CreateClipper
    STUB,                                              // CreatePalette
    (IDirectDraw4_CreateSurface *)ddraw_CreateSurface,
    STUB,                                              // DuplicateSurface
    STUB,                                              // EnumDisplayModes
    STUB,                                              // EnumSurfaces
    (void *)ddraw_FlipToGDISurface,
    (IDirectDraw4_GetCaps *)ddraw_GetCaps,
    STUB,                                              // GetDisplayMode
    STUB,                                              // GetFourCCCodes
    STUB,                                              // GetGDISurface
    STUB,                                              // GetMonitorFrequency
    STUB,                                              // GetScanLine
    STUB,                                              // GetVerticalBlankStatus
    STUB,                                              // Initialize
    (IDirectDraw4_RestoreDisplayMode *)ddraw_RestoreDisplayMode,
    (IDirectDraw4_SetCooperativeLevel *)ddraw_SetCooperativeLevel,
    (IDirectDraw4_SetDisplayMode *)ddraw_SetDisplayMode,
    STUB,                                              // WaitForVerticalBlank
    (IDirectDraw4_GetAvailableVidMem *)ddraw_GetAvailableVidMem,
    (IDirectDraw4_GetSurfaceFromDC *)STUB,
    (IDirectDraw4_RestoreAllSurfaces *)STUB,
    (IDirectDraw4_TestCooperativeLevel *)STUB,
    (IDirectDraw4_GetDeviceIdentifier *)ddraw_GetDeviceIdentifier,
};

// =============================================================================
// ddraw.dll exports
// =============================================================================
//
// These are the only two global entry points the DLL imports. They replace the
// real ddraw.dll ones for the renderer; the exe's own DirectDraw is a separate
// implementation reached through a different symbol (see shims/builtin_dll.h).

// Declared in system/ddraw.h without extern "C", so these definitions must use
// C++ linkage to match — the DLL's import externs resolve to exactly these.
HRESULT DirectDrawCreate(GUID *guid, LPDIRECTDRAW *out, IUnknown *outer) {
    (void)guid; (void)outer;
    if (out == nullptr) return DDERR_INVALIDPARAMS;

    // Reached from APIDLLinit during startup, before the engine sets a display
    // mode — so the context may not be up yet. Bring it up rather than refusing.
    if (!nocturne_gl_ensure_active()) {
        DDRAW_LOG("gl_ddraw: DirectDrawCreate with no GL context — refusing");
        return DDERR_GENERIC;
    }

    GLDDraw *dd = (GLDDraw *)calloc(1, sizeof(GLDDraw));
    if (dd == nullptr) return DDERR_OUTOFMEMORY;
    dd->vtable = &g_ddraw_vtable;
    dd->width  = 640;
    dd->height = 480;
    dd->bpp    = 32;

    *out = (IDirectDraw *)dd;
    return DD_OK;
}

HRESULT DirectDrawEnumerateExA(DDENUMCALLBACKEXA *callback, void *context, DWORD flags) {
    (void)flags;
    if (callback == nullptr) return DDERR_INVALIDPARAMS;

    // Enumeration runs before DirectDrawCreate, so this is the first entry point
    // that needs the context up. If it cannot be brought up at all
    // (NOCTURNE_GL_PRESENT=0, no window, or a failed context) the gl table is
    // all-null — report no adapters rather than calling through it.
    if (!nocturne_gl_ensure_active()) {
        DDRAW_LOG("gl_ddraw: DirectDrawEnumerateExA with no GL context — no adapters");
        return DD_OK;
    }

    // One adapter: the GL context. A null GUID marks it as the primary display
    // device, which is what the DLL's enumAdapterCallback expects to accept.
    const char *renderer = (const char *)gl.GetString(GL_RENDERER);
    callback(nullptr, (char *)"OpenGL", (char *)(renderer ? renderer : "display"),
             context, nullptr);
    return DD_OK;
}
