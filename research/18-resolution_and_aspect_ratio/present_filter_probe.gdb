delete
set pagination off

# Is the window the same size as what is rendered into it?
#
# The presented frame measures clean, and the present itself is 1:1, so anything
# resampling the image has to be downstream. A window client area narrower than
# the GL drawable would mean the compositor rescales every frame across the full
# width, which is what a uniform mesh over the whole window looks like.
#
# g_gl lives in an anonymous namespace in gl_present.cpp and is only visible from
# a breakpoint inside that file. Reading it from elsewhere aborts the command
# block before its `cont` and stops the game.
set $done = 0

break gl_present.cpp:509
commands
silent
if $done == 0
  set $done = 1
  set $ww = 0
  set $wh = 0
  set $dw = 0
  set $dh = 0
  call (void)SDL_GetWindowSize(g_gl.window, &$ww, &$wh)
  call (void)SDL_GL_GetDrawableSize(g_gl.window, &$dw, &$dh)
  printf "[win] window=%dx%d drawable=%dx%d scene=%dx%d logical=%dx%d vp=%dx%d at (%d,%d)\n", \
    $ww, $wh, $dw, $dh, g_gl.scene_width, g_gl.scene_height, \
    g_gl.logical_width, g_gl.logical_height, vp_w, vp_h, vp_x, vp_y
end
cont
end
