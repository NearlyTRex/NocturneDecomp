// =============================================================================
// GL PRESENT — OpenGL context ownership and the 2D framebuffer blit
// =============================================================================
//
// See gl_present.h for why the context lives here rather than inside an
// SDL_Renderer.

#include "gl/gl_present.h"
#include "gl/gl_version.h"
#include "shim_config.h"
#include "core/debug_log.h"

#include <SDL.h>

#if NOCTURNE_GL_PRESENT

#include "gl/gl_api.h"
#include "gl/gl_blit.h"
#include <stdlib.h>
#include <string.h>

// The process-wide window, created by the CreateWindowExA shim (user32.cpp).
extern SDL_Window *g_sdlWindow;

namespace {

struct GLPresentState {
    SDL_Window   *window        = nullptr;
    SDL_GLContext context       = nullptr;
    GLuint        framebuffer_texture = 0;
    int           texture_width  = 0;
    int           texture_height = 0;
    GLenum        texture_format = 0;  // GL_RGB / GL_BGRA
    GLenum        texture_type   = 0;  // GL_UNSIGNED_BYTE / GL_UNSIGNED_SHORT_5_6_5
    int           logical_width  = 0;
    int           logical_height = 0;
    bool          active         = false;

    // Scene target. A DirectDraw back buffer and its Z buffer are persistent
    // memory that the renderer DLL clears only when it chooses; GL's default
    // framebuffer loses both on every SwapWindow. Everything the DLL draws goes
    // here instead, and this is blitted to the window at present time.
    GLuint        scene_fbo      = 0;
    GLuint        scene_color    = 0;
    GLuint        scene_depth    = 0;
    int           scene_width    = 0;
    int           scene_height   = 0;
};

GLPresentState g_gl;

// Leading "major.minor" of GL_VERSION, cached at context creation. Empty until
// then, and read by nocturne_gl_version_short() for the 3D API menu line.
char g_gl_version_short[16] = "";

// Map the game's back-buffer bit depth onto a GL upload format. The 32bpp case
// is SDL_PIXELFORMAT_ARGB8888, which on little-endian is B,G,R,A in memory —
// GL_BGRA, not GL_RGBA.
bool format_for_bpp(int bpp, GLenum *format, GLenum *type) {
    switch (bpp) {
        case 16: *format = GL_RGB;  *type = GL_UNSIGNED_SHORT_5_6_5; return true;
        case 24: *format = GL_RGB;  *type = GL_UNSIGNED_BYTE;        return true;
        case 32: *format = GL_BGRA; *type = GL_UNSIGNED_BYTE;        return true;
        default: return false;
    }
}

// (Re)allocate the streaming texture when the resolution or format changes.
// GL_NEAREST keeps the integer up-scale crisp, matching SDL_RenderSetIntegerScale.
bool ensure_texture(int width, int height, GLenum format, GLenum type) {
    if (g_gl.framebuffer_texture != 0 &&
        g_gl.texture_width == width && g_gl.texture_height == height &&
        g_gl.texture_format == format && g_gl.texture_type == type) {
        return true;
    }

    if (g_gl.framebuffer_texture == 0) {
        gl.GenTextures(1, &g_gl.framebuffer_texture);
        if (g_gl.framebuffer_texture == 0) return false;
    }

    gl.BindTexture(GL_TEXTURE_2D, g_gl.framebuffer_texture);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    gl.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, format, type, nullptr);

    g_gl.texture_width  = width;
    g_gl.texture_height = height;
    g_gl.texture_format = format;
    g_gl.texture_type   = type;
    return true;
}

// Largest scale of the logical size that fits the drawable, aspect preserved
// and centered — the letterbox SDL_RenderSetLogicalSize produced.
//
// The scale is fractional, not whole-number. Integer-only scaling is the
// crisper choice when the window is a whole multiple of the game resolution,
// but it wastes most of the screen as soon as it is not: 640x480 inside a
// 1920x1080 fullscreen drawable clamps to 2x = 1280x960, leaving thick bars on
// every side, and 640x480 inside an 800x600 window clamps to 1x — the same
// picture it started at, just with a bigger black border. Since the window can
// now be any size (fullscreen, borderless, or a resolution the user picked),
// filling it matters more than exact pixel multiples.
void compute_viewport(int drawable_w, int drawable_h, int logical_w, int logical_h,
                      int *out_x, int *out_y, int *out_w, int *out_h) {
    double scale = 1.0;
    if (logical_w > 0 && logical_h > 0) {
        double scale_x = (double)drawable_w / (double)logical_w;
        double scale_y = (double)drawable_h / (double)logical_h;
        scale = (scale_x < scale_y) ? scale_x : scale_y;
#if !(NOCTURNE_WINDOW_MODE_OPTION || NOCTURNE_MENU_APPLIES_RESOLUTION)
        // Without those features the window is always a whole multiple of the
        // game resolution, so keep the original integer-only behaviour, which
        // has no meaningful value below 1.
        scale = (double)(int)scale;
        if (scale < 1.0) scale = 1.0;
#endif
        // Deliberately NOT clamped to >= 1 here. The window can now be smaller
        // than the render (picking 512x384 while the menu still renders at
        // 640x480), and forcing 1:1 in that case shows the middle of the frame
        // with everything past the window edge cut off, rather than the whole
        // frame shrunk to fit.
        if (scale <= 0.0) scale = 1.0;
    }
    *out_w = (int)(logical_w * scale + 0.5);
    *out_h = (int)(logical_h * scale + 0.5);
    if (*out_w < 1) *out_w = 1;
    if (*out_h < 1) *out_h = 1;
    *out_x = (drawable_w - *out_w) / 2;
    *out_y = (drawable_h - *out_h) / 2;
}

// 1 when the presented quad is an exact whole multiple of the logical size, so
// the caller can keep GL_NEAREST (crisp, no resampling). At a fractional scale
// nearest-neighbour makes pixel sizes visibly uneven, so linear is the better
// pick there.
int viewport_is_integer_scale(int vp_w, int logical_w) {
    return (logical_w > 0) && (vp_w % logical_w == 0);
}

}  // namespace

extern "C" int nocturne_gl_init(SDL_Window *window) {
    if (window == nullptr) return 0;

    if (g_gl.active && g_gl.window == window) {
        return 1;
    }

    // Compatibility profile: the renderer DLL's D3D render states map onto
    // fixed-function GL, so a core profile would buy nothing and cost a shader
    // reimplementation of alpha test / fog / texture env.
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_COMPATIBILITY);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);

    g_gl.context = SDL_GL_CreateContext(window);
    if (g_gl.context == nullptr) {
        DDRAW_LOG("gl_present: SDL_GL_CreateContext failed: %s", SDL_GetError());
        return 0;
    }
    if (SDL_GL_MakeCurrent(window, g_gl.context) != 0) {
        DDRAW_LOG("gl_present: SDL_GL_MakeCurrent failed: %s", SDL_GetError());
        SDL_GL_DeleteContext(g_gl.context);
        g_gl.context = nullptr;
        return 0;
    }

    // Entry points resolve only once a context is current.
    if (!nocturne_gl_load_api()) {
        SDL_GL_DeleteContext(g_gl.context);
        g_gl.context = nullptr;
        return 0;
    }

    // Adaptive vsync where available, plain vsync otherwise. Matches the
    // SDL_RENDERER_PRESENTVSYNC the SDL_Renderer path requested.
    if (SDL_GL_SetSwapInterval(-1) != 0) {
        SDL_GL_SetSwapInterval(1);
    }

    g_gl.window = window;
    g_gl.active = true;

    // Cache the leading "major.minor" for the Graphics Options 3D API line.
    // Captured here rather than queried on demand because the menu can be drawn
    // with no context current, and glGetString would then return null.
    {
        const char *ver = (const char *)gl.GetString(GL_VERSION);
        g_gl_version_short[0] = '\0';
        if (ver != nullptr) {
            size_t n = 0;
            while (ver[n] != '\0' && n + 1 < sizeof(g_gl_version_short) &&
                   (ver[n] == '.' || (ver[n] >= '0' && ver[n] <= '9'))) {
                ++n;
            }
            // Keep only major.minor: GL_VERSION is "4.6.0 NVIDIA 595.84" and the
            // trailing ".0" and driver build add nothing here.
            size_t dots = 0, cut = n;
            for (size_t i = 0; i < n; ++i) {
                if (ver[i] == '.' && ++dots == 2) { cut = i; break; }
            }
            memcpy(g_gl_version_short, ver, cut);
            g_gl_version_short[cut] = '\0';
        }
    }

    DDRAW_LOG("gl_present: context up — GL_VERSION=%s GL_RENDERER=%s",
              (const char *)gl.GetString(GL_VERSION),
              (const char *)gl.GetString(GL_RENDERER));
    return 1;
}

extern "C" const char *nocturne_gl_version_short(void) {
    return g_gl_version_short;
}

extern "C" int nocturne_gl_is_active(void) {
    return g_gl.active ? 1 : 0;
}

// Create (or resize) the persistent scene target and make it current. Returns 0
// if FBOs are unavailable, in which case callers keep using the default
// framebuffer and the old non-persistent behaviour.
extern "C" int nocturne_gl_scene_target_bind(int width, int height) {
    if (!g_gl.active || width <= 0 || height <= 0) return 0;
    if (gl.GenFramebuffers == nullptr || gl.BindFramebuffer == nullptr ||
        gl.FramebufferTexture2D == nullptr || gl.CheckFramebufferStatus == nullptr ||
        gl.GenRenderbuffers == nullptr || gl.BindRenderbuffer == nullptr ||
        gl.RenderbufferStorage == nullptr || gl.FramebufferRenderbuffer == nullptr) {
        return 0;
    }

    if (g_gl.scene_fbo != 0 &&
        g_gl.scene_width == width && g_gl.scene_height == height) {
        gl.BindFramebuffer(GL_FRAMEBUFFER, g_gl.scene_fbo);
        return 1;
    }

    if (g_gl.scene_fbo != 0) {
        gl.DeleteFramebuffers(1, &g_gl.scene_fbo);
        gl.DeleteTextures(1, &g_gl.scene_color);
        gl.DeleteRenderbuffers(1, &g_gl.scene_depth);
        g_gl.scene_fbo = g_gl.scene_color = g_gl.scene_depth = 0;
    }

    gl.GenTextures(1, &g_gl.scene_color);
    gl.BindTexture(GL_TEXTURE_2D, g_gl.scene_color);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    gl.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0,
                  GL_BGRA, GL_UNSIGNED_BYTE, nullptr);

    gl.GenRenderbuffers(1, &g_gl.scene_depth);
    gl.BindRenderbuffer(GL_RENDERBUFFER, g_gl.scene_depth);
    gl.RenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, width, height);
    gl.BindRenderbuffer(GL_RENDERBUFFER, 0);

    gl.GenFramebuffers(1, &g_gl.scene_fbo);
    gl.BindFramebuffer(GL_FRAMEBUFFER, g_gl.scene_fbo);
    gl.FramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0,
                            GL_TEXTURE_2D, g_gl.scene_color, 0);
    gl.FramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT,
                               GL_RENDERBUFFER, g_gl.scene_depth);

    if (gl.CheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
        DDRAW_LOG("gl_present: scene FBO incomplete (%dx%d) — falling back", width, height);
        gl.BindFramebuffer(GL_FRAMEBUFFER, 0);
        gl.DeleteFramebuffers(1, &g_gl.scene_fbo);
        gl.DeleteTextures(1, &g_gl.scene_color);
        gl.DeleteRenderbuffers(1, &g_gl.scene_depth);
        g_gl.scene_fbo = g_gl.scene_color = g_gl.scene_depth = 0;
        return 0;
    }

    g_gl.scene_width  = width;
    g_gl.scene_height = height;
    // Start from a known state; from here on the contents persist exactly like
    // DirectDraw surface memory, cleared only when the DLL asks.
    gl.Viewport(0, 0, width, height);
    gl.ClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gl.ClearDepth(1.0);
    gl.DepthMask(GL_TRUE);
    gl.Clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    DDRAW_LOG("gl_present: scene FBO %dx%d ready", width, height);
    return 1;
}

extern "C" int nocturne_gl_scene_target_active(void) {
    return (g_gl.active && g_gl.scene_fbo != 0) ? 1 : 0;
}

extern "C" unsigned int nocturne_gl_scene_fbo(void) {
    return (g_gl.active) ? (unsigned int)g_gl.scene_fbo : 0u;
}

extern "C" int nocturne_gl_ensure_active(void) {
    // The renderer DLL's APIDLLinit runs during startup, well before the engine
    // sets a display mode — so the context ddraw.cpp's SetDisplayMode would have
    // created does not exist yet, and every DirectDrawCreate in the DLL fails.
    // On Windows that ordering is fine: DirectDraw is available from process
    // start. Here the GL context IS our DirectDraw, so bring it up on first use.
    //
    // The window is already up by then (nocedit creates it before loading the
    // renderer), and the HWND the engine passes around IS the SDL_Window, so
    // there is exactly one window to attach to.
    if (g_gl.active) return 1;
    if (g_sdlWindow == nullptr) return 0;
    return nocturne_gl_init(g_sdlWindow);
}

extern "C" void nocturne_gl_set_logical_size(int width, int height) {
    g_gl.logical_width  = width;
    g_gl.logical_height = height;
}

extern "C" void nocturne_gl_present_framebuffer(const void *pixels, int width, int height,
                                                int pitch, int bpp) {
    if (!g_gl.active || pixels == nullptr || width <= 0 || height <= 0) return;

    GLenum format = 0, type = 0;
    if (!format_for_bpp(bpp, &format, &type)) {
        DDRAW_LOG_RL(4, 300, "gl_present: unsupported bpp=%d", bpp);
        return;
    }
    if (!ensure_texture(width, height, format, type)) return;

    // The back buffer's pitch is not necessarily width*bytes-per-pixel, so tell
    // GL the real stride rather than repacking rows on the CPU.
    const int bytes_per_pixel = bpp / 8;
    gl.PixelStorei(GL_UNPACK_ALIGNMENT, 1);
    gl.PixelStorei(GL_UNPACK_ROW_LENGTH, (pitch > 0) ? pitch / bytes_per_pixel : width);

    gl.BindTexture(GL_TEXTURE_2D, g_gl.framebuffer_texture);
    gl.TexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, height, format, type, pixels);
    gl.PixelStorei(GL_UNPACK_ROW_LENGTH, 0);

    // The composited frame goes to the WINDOW. When a scene FBO is in use it is
    // still bound at this point (the DLL renders into it), so switch to the
    // default framebuffer for the blit and switch back after the swap.
    if (g_gl.scene_fbo != 0) {
        gl.BindFramebuffer(GL_FRAMEBUFFER, 0);
    }

    int drawable_w = 0, drawable_h = 0;
    SDL_GL_GetDrawableSize(g_gl.window, &drawable_w, &drawable_h);

    const int logical_w = (g_gl.logical_width  > 0) ? g_gl.logical_width  : width;
    const int logical_h = (g_gl.logical_height > 0) ? g_gl.logical_height : height;
    int vp_x = 0, vp_y = 0, vp_w = 0, vp_h = 0;
    compute_viewport(drawable_w, drawable_h, logical_w, logical_h,
                     &vp_x, &vp_y, &vp_w, &vp_h);

    // Letterbox bars stay black; the quad covers the rest.
    gl.Viewport(0, 0, drawable_w, drawable_h);
    gl.Disable(GL_SCISSOR_TEST);
    gl.ClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gl.Clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    gl.Viewport(vp_x, vp_y, vp_w, vp_h);

    // The 2D layer is an opaque full-frame blit: no depth, no blend, no lighting.
    gl.Disable(GL_DEPTH_TEST);
    gl.Disable(GL_BLEND);
    gl.Disable(GL_ALPHA_TEST);
    gl.Disable(GL_FOG);
    gl.Disable(GL_CULL_FACE);
    gl.Disable(GL_LIGHTING);
    // Bind and fully re-specify the sampling state every frame. The renderer
    // DLL's D3DTSS_MINFILTER/MIPFILTER handling calls glTexParameteri against
    // whatever texture happens to be bound, and this one is still bound from the
    // previous present. A mipmap MIN_FILTER on a texture with no mipmap chain
    // makes it *incomplete*, and GL then behaves as if texturing were disabled —
    // the quad comes out in the primary colour (white), which is exactly the
    // white screen this produced. Filters are cheap; do not rely on them
    // surviving a frame of someone else's state changes.
    // Nearest keeps whole-multiple scaling crisp; at a fractional scale it makes
    // pixel sizes visibly uneven (some source pixels land on 1 screen pixel,
    // their neighbours on 2), so blend instead.
    const GLint present_filter =
        viewport_is_integer_scale(vp_w, logical_w) ? GL_NEAREST : GL_LINEAR;
    gl.BindTexture(GL_TEXTURE_2D, g_gl.framebuffer_texture);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, present_filter);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, present_filter);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    // Shader quad where the driver has one, the immediate-mode quad below where
    // it does not. Nothing selects between them per renderer: software mode
    // reaches the screen through here too, so this path has to be right for a
    // build with no accelerated renderer loaded at all.
    if (!nocturne_gl_blit_quad(g_gl.framebuffer_texture)) {
        gl.MatrixMode(GL_PROJECTION);
        gl.PushMatrix();
        gl.LoadIdentity();
        gl.Ortho(0.0, 1.0, 1.0, 0.0, -1.0, 1.0);  // top-left origin, matching raster order
        gl.MatrixMode(GL_MODELVIEW);
        gl.PushMatrix();
        gl.LoadIdentity();

        gl.Enable(GL_TEXTURE_2D);
        gl.TexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
        gl.Color4f(1.0f, 1.0f, 1.0f, 1.0f);

        gl.Begin(GL_TRIANGLE_STRIP);
            gl.TexCoord2f(0.0f, 0.0f); gl.Vertex2f(0.0f, 0.0f);
            gl.TexCoord2f(1.0f, 0.0f); gl.Vertex2f(1.0f, 0.0f);
            gl.TexCoord2f(0.0f, 1.0f); gl.Vertex2f(0.0f, 1.0f);
            gl.TexCoord2f(1.0f, 1.0f); gl.Vertex2f(1.0f, 1.0f);
        gl.End();

        gl.MatrixMode(GL_PROJECTION);
        gl.PopMatrix();
        gl.MatrixMode(GL_MODELVIEW);
        gl.PopMatrix();
    }

    SDL_GL_SwapWindow(g_gl.window);

    // Back to the persistent scene target for the next frame's 3D.
    if (g_gl.scene_fbo != 0) {
        gl.BindFramebuffer(GL_FRAMEBUFFER, g_gl.scene_fbo);
        gl.Viewport(0, 0, g_gl.scene_width, g_gl.scene_height);
    }
}

extern "C" void nocturne_gl_scene_upload(const void *pixels, int width, int height,
                                         int pitch, int bpp) {
    if (!g_gl.active || g_gl.scene_fbo == 0) return;
    if (pixels == nullptr || width <= 0 || height <= 0) return;

    GLenum format = 0, type = 0;
    if (!format_for_bpp(bpp, &format, &type)) {
        DDRAW_LOG_RL(4, 300, "gl_present: scene upload unsupported bpp=%d", bpp);
        return;
    }
    if (!ensure_texture(width, height, format, type)) return;

    // This runs MID-FRAME: after the engine's CPU write, before the renderer
    // DLL's draws. Unlike the present path (which runs at the frame boundary,
    // where the DLL re-establishes state anyway) anything left changed here
    // lands directly on the actor draws.
    const GLbitfield saved = GL_ENABLE_BIT | GL_TEXTURE_BIT | GL_DEPTH_BUFFER_BIT |
                             GL_COLOR_BUFFER_BIT | GL_CURRENT_BIT | GL_VIEWPORT_BIT |
                             GL_TRANSFORM_BIT | GL_SCISSOR_BIT | GL_POLYGON_BIT |
                             GL_LIGHTING_BIT | GL_FOG_BIT;
    if (gl.PushAttrib != nullptr)       gl.PushAttrib(saved);
    if (gl.PushClientAttrib != nullptr) gl.PushClientAttrib(GL_CLIENT_PIXEL_STORE_BIT);

    const int bytes_per_pixel = bpp / 8;
    gl.PixelStorei(GL_UNPACK_ALIGNMENT, 1);
    gl.PixelStorei(GL_UNPACK_ROW_LENGTH, (pitch > 0) ? pitch / bytes_per_pixel : width);
    gl.BindTexture(GL_TEXTURE_2D, g_gl.framebuffer_texture);
    gl.TexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, height, format, type, pixels);
    gl.PixelStorei(GL_UNPACK_ROW_LENGTH, 0);

    gl.BindFramebuffer(GL_FRAMEBUFFER, g_gl.scene_fbo);
    gl.Viewport(0, 0, g_gl.scene_width, g_gl.scene_height);
    gl.Disable(GL_SCISSOR_TEST);

    gl.Disable(GL_DEPTH_TEST);
    gl.DepthMask(GL_FALSE);
    gl.Disable(GL_BLEND);
    gl.Disable(GL_ALPHA_TEST);
    gl.Disable(GL_FOG);
    gl.Disable(GL_CULL_FACE);
    gl.Disable(GL_LIGHTING);

    // Re-specify sampling state: the DLL's D3DTSS filter handling runs against
    // whatever texture is bound, and a mipmap MIN_FILTER on this single-level
    // texture would make it incomplete — GL then drops texturing silently and
    // the quad comes out flat white. Same trap as the present path.
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    // Same quad, same choice as the present path. glPushAttrib above does not
    // cover the program or the array-buffer binding, so gl_blit puts those back
    // itself — without that, the DLL's very next draw would inherit them.
    if (!nocturne_gl_blit_quad(g_gl.framebuffer_texture)) {
        gl.MatrixMode(GL_PROJECTION);
        gl.PushMatrix();
        gl.LoadIdentity();
        gl.Ortho(0.0, 1.0, 1.0, 0.0, -1.0, 1.0);  // top-left origin, matching the readback flip
        gl.MatrixMode(GL_MODELVIEW);
        gl.PushMatrix();
        gl.LoadIdentity();

        gl.Enable(GL_TEXTURE_2D);
        gl.TexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
        gl.Color4f(1.0f, 1.0f, 1.0f, 1.0f);

        gl.Begin(GL_TRIANGLE_STRIP);
            gl.TexCoord2f(0.0f, 0.0f); gl.Vertex2f(0.0f, 0.0f);
            gl.TexCoord2f(1.0f, 0.0f); gl.Vertex2f(1.0f, 0.0f);
            gl.TexCoord2f(0.0f, 1.0f); gl.Vertex2f(0.0f, 1.0f);
            gl.TexCoord2f(1.0f, 1.0f); gl.Vertex2f(1.0f, 1.0f);
        gl.End();

        gl.MatrixMode(GL_PROJECTION);
        gl.PopMatrix();
        gl.MatrixMode(GL_MODELVIEW);
        gl.PopMatrix();
    }

    if (gl.PopClientAttrib != nullptr) gl.PopClientAttrib();
    if (gl.PopAttrib != nullptr)       gl.PopAttrib();
}

extern "C" void nocturne_gl_swap_only(void) {
    if (!g_gl.active) return;
    SDL_GL_SwapWindow(g_gl.window);
    if (g_gl.scene_fbo != 0) {
        gl.BindFramebuffer(GL_FRAMEBUFFER, g_gl.scene_fbo);
        gl.Viewport(0, 0, g_gl.scene_width, g_gl.scene_height);
    }
}

extern "C" int nocturne_gl_read_front(unsigned char **out_rgb, int *out_width, int *out_height) {
    if (!g_gl.active || out_rgb == nullptr) return -1;

    int drawable_w = 0, drawable_h = 0;
    SDL_GL_GetDrawableSize(g_gl.window, &drawable_w, &drawable_h);
    if (drawable_w <= 0 || drawable_h <= 0) return -1;

    const size_t row_bytes = (size_t)drawable_w * 3;
    unsigned char *buf = (unsigned char *)malloc(row_bytes * (size_t)drawable_h);
    if (buf == nullptr) return -1;

    // This must read the WINDOW. Between presents the scene FBO is bound, and
    // reading that instead returns the 640x480 scene target padded into a
    // drawable-sized buffer — a dump that looks like the frame squashed into one
    // corner. Bind the default framebuffer for the read and restore after.
    if (g_gl.scene_fbo != 0) {
        gl.BindFramebuffer(GL_FRAMEBUFFER, 0);
    }

    gl.PixelStorei(GL_PACK_ALIGNMENT, 1);
    // The swap already happened, so the finished frame is in the back buffer we
    // just drew rather than the front one on a double-buffered setup.
    gl.ReadBuffer(GL_BACK);
    gl.ReadPixels(0, 0, drawable_w, drawable_h, GL_RGB, GL_UNSIGNED_BYTE, buf);

    if (g_gl.scene_fbo != 0) {
        gl.BindFramebuffer(GL_FRAMEBUFFER, g_gl.scene_fbo);
        gl.Viewport(0, 0, g_gl.scene_width, g_gl.scene_height);
    }

    // GL's origin is bottom-left; PPM (and every caller here) wants top-down.
    unsigned char *row = (unsigned char *)malloc(row_bytes);
    if (row != nullptr) {
        for (int y = 0; y < drawable_h / 2; y++) {
            unsigned char *top    = buf + (size_t)y * row_bytes;
            unsigned char *bottom = buf + (size_t)(drawable_h - 1 - y) * row_bytes;
            memcpy(row, top, row_bytes);
            memcpy(top, bottom, row_bytes);
            memcpy(bottom, row, row_bytes);
        }
        free(row);
    }

    *out_rgb = buf;
    if (out_width)  *out_width  = drawable_w;
    if (out_height) *out_height = drawable_h;
    return 0;
}

extern "C" void nocturne_gl_window_to_logical(int window_x, int window_y,
                                              int *out_x, int *out_y) {
    if (out_x) *out_x = window_x;
    if (out_y) *out_y = window_y;
    if (!g_gl.active || g_gl.window == nullptr) return;

    int win_w = 0, win_h = 0, drawable_w = 0, drawable_h = 0;
    SDL_GetWindowSize(g_gl.window, &win_w, &win_h);
    SDL_GL_GetDrawableSize(g_gl.window, &drawable_w, &drawable_h);
    if (win_w <= 0 || win_h <= 0 || drawable_w <= 0 || drawable_h <= 0) return;

    const int logical_w = (g_gl.logical_width  > 0) ? g_gl.logical_width  : drawable_w;
    const int logical_h = (g_gl.logical_height > 0) ? g_gl.logical_height : drawable_h;

    // SDL reports mouse in window units; the viewport is in drawable units, and
    // the two differ under HiDPI.
    const double px = (double)window_x * (double)drawable_w / (double)win_w;
    const double py = (double)window_y * (double)drawable_h / (double)win_h;

    int vp_x = 0, vp_y = 0, vp_w = 0, vp_h = 0;
    compute_viewport(drawable_w, drawable_h, logical_w, logical_h,
                     &vp_x, &vp_y, &vp_w, &vp_h);
    if (vp_w <= 0 || vp_h <= 0) return;

    double lx = (px - (double)vp_x) * (double)logical_w / (double)vp_w;
    double ly = (py - (double)vp_y) * (double)logical_h / (double)vp_h;

    // Clamp into the render area so a click on a letterbox bar still resolves to
    // the nearest edge pixel rather than a negative or out-of-range coordinate.
    if (lx < 0.0) lx = 0.0;
    if (ly < 0.0) ly = 0.0;
    if (lx > (double)(logical_w - 1)) lx = (double)(logical_w - 1);
    if (ly > (double)(logical_h - 1)) ly = (double)(logical_h - 1);

    if (out_x) *out_x = (int)lx;
    if (out_y) *out_y = (int)ly;
}

extern "C" void nocturne_gl_shutdown(void) {
    if (!g_gl.active) return;
    nocturne_gl_blit_shutdown();
    if (g_gl.framebuffer_texture != 0) {
        gl.DeleteTextures(1, &g_gl.framebuffer_texture);
        g_gl.framebuffer_texture = 0;
    }
    if (g_gl.context != nullptr) {
        SDL_GL_DeleteContext(g_gl.context);
        g_gl.context = nullptr;
    }
    g_gl.window = nullptr;
    g_gl.active = false;
}

#else  // !NOCTURNE_GL_PRESENT

extern "C" int  nocturne_gl_init(SDL_Window *w) { (void)w; return 0; }
extern "C" int  nocturne_gl_is_active(void) { return 0; }
extern "C" int  nocturne_gl_scene_target_bind(int w, int h) { (void)w; (void)h; return 0; }
extern "C" int  nocturne_gl_scene_target_active(void) { return 0; }
extern "C" unsigned int nocturne_gl_scene_fbo(void) { return 0u; }
extern "C" int  nocturne_gl_ensure_active(void) { return 0; }
extern "C" void nocturne_gl_swap_only(void) {}
extern "C" void nocturne_gl_scene_upload(const void *, int, int, int, int) {}
extern "C" void nocturne_gl_set_logical_size(int w, int h) { (void)w; (void)h; }
extern "C" void nocturne_gl_present_framebuffer(const void *p, int w, int h, int pitch, int bpp) {
    (void)p; (void)w; (void)h; (void)pitch; (void)bpp;
}
extern "C" void nocturne_gl_window_to_logical(int wx, int wy, int *ox, int *oy) {
    if (ox) *ox = wx;
    if (oy) *oy = wy;
}
extern "C" int nocturne_gl_read_front(unsigned char **rgb, int *w, int *h) {
    (void)rgb; (void)w; (void)h; return -1;
}
extern "C" void nocturne_gl_shutdown(void) {}

#endif  // NOCTURNE_GL_PRESENT
