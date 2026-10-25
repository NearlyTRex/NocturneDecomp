// =============================================================================
// SDL GL SUPPORT — see sdl_gl_support.h
// =============================================================================

#include "sdl_gl_support.h"

#include "gl/gl_api.h"
#include "shims/renderer/gl_recorder.h"

#include <SDL.h>

namespace sdl_gl {

Stand stand;

namespace {

int g_window_marker = 0;
int g_context_marker = 0;

} // namespace

SDL_Window *window() {
    return (SDL_Window *)&g_window_marker;
}

} // namespace sdl_gl

using sdl_gl::stand;

// The process window ensure_active attaches to; user32 makes it in the game.
SDL_Window *g_sdlWindow = nullptr;

namespace {

const GLubyte *APIENTRY version_string(GLenum name) {
    if (name == GL_VERSION)
        return (const GLubyte *)stand.version;
    return (const GLubyte *)"gl_recorder";
}

} // namespace

extern "C" {

// The entry points resolve against the recorder, with GL_VERSION the stand's.
int nocturne_gl_load_api(void) {
    if (stand.load_fails)
        return 0;
    gl_recorder::install();
    gl.GetString = version_string;
    return 1;
}

int sdl_gl_support_SDL_GL_SetAttribute(SDL_GLattr, int) {
    return 0;
}

SDL_GLContext sdl_gl_support_SDL_GL_CreateContext(SDL_Window *) {
    if (stand.create_fails)
        return nullptr;
    ++stand.contexts;
    return (SDL_GLContext)&sdl_gl::g_context_marker;
}

int sdl_gl_support_SDL_GL_MakeCurrent(SDL_Window *, SDL_GLContext) {
    return stand.make_current_fails ? -1 : 0;
}

void sdl_gl_support_SDL_GL_DeleteContext(SDL_GLContext) {
    --stand.contexts;
}

int sdl_gl_support_SDL_GL_SetSwapInterval(int interval) {
    stand.intervals.push_back(interval);
    return (interval < 0 && !stand.adaptive_vsync) ? -1 : 0;
}

void sdl_gl_support_SDL_GL_GetDrawableSize(SDL_Window *, int *w, int *h) {
    *w = stand.drawable_width;
    *h = stand.drawable_height;
}

void sdl_gl_support_SDL_GL_SwapWindow(SDL_Window *) {
    ++stand.swaps;
    stand.counter += stand.swap_cost;
}

Uint64 sdl_gl_support_SDL_GetPerformanceCounter(void) {
    return stand.counter;
}

void sdl_gl_support_SDL_GetWindowSize(SDL_Window *, int *w, int *h) {
    *w = stand.window_width;
    *h = stand.window_height;
}

const char *sdl_gl_support_SDL_GetError(void) {
    return "stand";
}

} // extern "C"
