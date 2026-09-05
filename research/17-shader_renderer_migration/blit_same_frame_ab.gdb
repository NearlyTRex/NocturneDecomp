# The present blit A/B with the game taken out of it entirely.
#
# blit_path_ab.gdb compares consecutive frames, which is as close as the draw
# path could get. This quad can do better, and should be held to a harder
# standard, because it only CARRIES a finished image — it rasterises nothing, so
# there is no sampling difference for the two paths to legitimately disagree
# about. The answer ought to be bit-identical, and "within the animation noise
# floor" would be settling for less than the question allows.
#
# Frame-to-frame cannot show that here: the main menu's moon and cloud layer
# never stops moving, so no two consecutive frames are equal even on one path
# (measured: mean|d| 0.16, 99.3% of bytes identical, on a same-path pair).
#
# So compare the two paths on ONE frame instead. At SDL_GL_SwapWindow the frame
# has been blitted and is sitting in GL_BACK, un-swapped, and the source texture
# is still bound with the filters the present chose. Read it, redraw the SAME
# texture over the SAME back buffer through the other path, and read it again.
# Same source, same viewport, same state, one frame — the difference is the path
# and nothing else.
#
#   /tmp/same_fixed.ppm    the immediate-mode quad, as drawn by the frame
#   /tmp/same_shader.ppm   the shader quad, alone, over a cleared buffer
#
# EXIT CRITERION: identical 100.00%.
#
# Usage — in SOFTWARE mode (nothing but this quad reaches the window there):
#   rm -f /tmp/same_*.ppm
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/blit_same_frame_ab.gdb
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

set $same_tick = 0
set $same_done = 0
set $same_blitted = 0

# Only frames that actually went through the blit can be compared. Under
# acceleration surface_Flip presents the CPU copy only when the frame was locked
# (`cpu_dirty`); otherwise it calls nocturne_gl_swap_only and no quad is drawn at
# all, and capturing one of those would compare a frame against itself.
break nocturne_gl_present_framebuffer
commands
silent
set $same_blitted = 1
cont
end

break SDL_GL_SwapWindow
commands
silent
set $same_tick = $same_tick + 1
# Draw this frame with the immediate-mode quad, so the shader is the redraw.
# The buffer is then CLEARED before the redraw: without that, a shader that drew
# nothing at all would leave the fixed-function image standing and pass as a
# perfect match. Clearing means the second capture is entirely the shader's own
# output, over the same black the present path clears to, and the letterbox bars
# come back black either way.
if $same_tick == 8
  set nocturne_gl_blit_shader = 0
end
if $same_tick > 8 && $same_done == 0 && $same_blitted == 1
  set $same_done = 1
  # The present viewport, before anything can disturb it. Needed because the
  # first dump below RESTORES THE SCENE FBO on its way out when one exists —
  # nocturne_gl_read_front has to, since the renderer DLL draws there — so the
  # redraw would otherwise land in the scene target with the scene's viewport,
  # clobbering the next frame and comparing GL_BACK against an unchanged copy of
  # itself. In software mode there is no scene FBO and this is all a no-op.
  set $same_vp = (int *)malloc(16)
  call (void)gl.GetIntegerv(0x0ba2, $same_vp)
  call (int)nocturne_dump_frontbuffer("/tmp/same_fixed.ppm")
  set nocturne_gl_blit_shader = 1
  call (void)gl.BindFramebuffer(0x8d40, 0)
  call (void)gl.Viewport($same_vp[0], $same_vp[1], $same_vp[2], $same_vp[3])
  call (void)gl.Clear(0x4000)
  call (int)nocturne_gl_blit_quad('gl_present.cpp'::'(anonymous namespace)::g_gl'.framebuffer_texture)
  call (int)nocturne_dump_frontbuffer("/tmp/same_shader.ppm")
  printf "[same-frame A/B captured @tick %d]\n", $same_tick
  printf "  present viewport %d,%d %dx%d\n", $same_vp[0], $same_vp[1], $same_vp[2], $same_vp[3]
  call (void)free($same_vp)
end
cont
end

printf "same-frame blit A/B armed — one frame, no need to hold still\n"
printf "  /tmp/same_fixed.ppm  vs  /tmp/same_shader.ppm — expect 100%% identical\n"
