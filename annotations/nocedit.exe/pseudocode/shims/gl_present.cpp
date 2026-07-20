// =============================================================================
// GL PRESENT — OpenGL context ownership and the 2D framebuffer blit
// =============================================================================
//
// See gl_present.h for why the context lives here rather than inside an
// SDL_Renderer.

#include "gl_present.h"
#include "shim_config.h"
#include "debug_log.h"

#include <SDL.h>

#if NOCTURNE_GL_PRESENT

#include "gl_api.h"
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

// Largest whole-number scale of the logical size that fits the drawable,
// centered — the letterbox SDL_RenderSetLogicalSize + integer scale produced.
void compute_viewport(int drawable_w, int drawable_h, int logical_w, int logical_h,
                      int *out_x, int *out_y, int *out_w, int *out_h) {
    int scale = 1;
    if (logical_w > 0 && logical_h > 0) {
        int scale_x = drawable_w / logical_w;
        int scale_y = drawable_h / logical_h;
        scale = (scale_x < scale_y) ? scale_x : scale_y;
        if (scale < 1) scale = 1;
    }
    *out_w = logical_w * scale;
    *out_h = logical_h * scale;
    *out_x = (drawable_w - *out_w) / 2;
    *out_y = (drawable_h - *out_h) / 2;
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

    DDRAW_LOG("gl_present: context up — GL_VERSION=%s GL_RENDERER=%s",
              (const char *)gl.GetString(GL_VERSION),
              (const char *)gl.GetString(GL_RENDERER));
    return 1;
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
    gl.MatrixMode(GL_PROJECTION);
    gl.PushMatrix();
    gl.LoadIdentity();
    gl.Ortho(0.0, 1.0, 1.0, 0.0, -1.0, 1.0);  // top-left origin, matching raster order
    gl.MatrixMode(GL_MODELVIEW);
    gl.PushMatrix();
    gl.LoadIdentity();

    gl.Disable(GL_DEPTH_TEST);
    gl.Disable(GL_BLEND);
    gl.Disable(GL_ALPHA_TEST);
    gl.Disable(GL_FOG);
    gl.Disable(GL_CULL_FACE);
    gl.Disable(GL_LIGHTING);
    gl.Enable(GL_TEXTURE_2D);
    gl.TexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
    gl.Color4f(1.0f, 1.0f, 1.0f, 1.0f);
    // Bind and fully re-specify the sampling state every frame. The renderer
    // DLL's D3DTSS_MINFILTER/MIPFILTER handling calls glTexParameteri against
    // whatever texture happens to be bound, and this one is still bound from the
    // previous present. A mipmap MIN_FILTER on a texture with no mipmap chain
    // makes it *incomplete*, and GL then behaves as if texturing were disabled —
    // the quad comes out in the primary colour (white), which is exactly the
    // white screen this produced. Filters are cheap; do not rely on them
    // surviving a frame of someone else's state changes.
    gl.BindTexture(GL_TEXTURE_2D, g_gl.framebuffer_texture);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

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

    gl.MatrixMode(GL_PROJECTION);
    gl.PushMatrix();
    gl.LoadIdentity();
    gl.Ortho(0.0, 1.0, 1.0, 0.0, -1.0, 1.0);  // top-left origin, matching the readback flip
    gl.MatrixMode(GL_MODELVIEW);
    gl.PushMatrix();
    gl.LoadIdentity();

    gl.Disable(GL_DEPTH_TEST);
    gl.DepthMask(GL_FALSE);
    gl.Disable(GL_BLEND);
    gl.Disable(GL_ALPHA_TEST);
    gl.Disable(GL_FOG);
    gl.Disable(GL_CULL_FACE);
    gl.Disable(GL_LIGHTING);
    gl.Enable(GL_TEXTURE_2D);
    gl.TexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
    gl.Color4f(1.0f, 1.0f, 1.0f, 1.0f);

    // Re-specify sampling state: the DLL's D3DTSS filter handling runs against
    // whatever texture is bound, and a mipmap MIN_FILTER on this single-level
    // texture would make it incomplete — GL then drops texturing silently and
    // the quad comes out flat white. Same trap as the present path.
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

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

extern "C" void nocturne_gl_shutdown(void) {
    if (!g_gl.active) return;
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
extern "C" int nocturne_gl_read_front(unsigned char **rgb, int *w, int *h) {
    (void)rgb; (void)w; (void)h; return -1;
}
extern "C" void nocturne_gl_shutdown(void) {}

#endif  // NOCTURNE_GL_PRESENT
