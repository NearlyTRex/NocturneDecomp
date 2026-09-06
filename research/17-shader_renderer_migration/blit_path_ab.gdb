# Did moving the present blit off glBegin change any pixels?
#
# KEPT AS A RECORD. It drives `nocturne_gl_blit_shader`, which a core-profile
# build does not have, so it cannot execute as written.
#
# gl_present.cpp drew its full-target quad with glOrtho, an immediate-mode
# GL_TRIANGLE_STRIP and GL_REPLACE TexEnv — the last matrix-stack and glBegin
# users left after the draw path moved to buffer objects. gl_blit.cpp replaces it
# with a static 4-vertex buffer object, clip-space positions baked in place of
# the ortho, and a two-line shader that is GL_REPLACE exactly.
#
# THE ORACLE IS SOFTWARE MODE, and that is what makes this different from the
# draw-path A/B. This quad is not owned by a renderer: software mode reaches the
# screen through it, and so do the 2D DirectDraw blits and movie playback. In
# software mode NOTHING else touches the window, so the whole frame is this one
# quad and the comparison has no other moving part in it. Run it there.
#
#   /tmp/blit_0,1,2.ppm  shader quad      /tmp/blit_3,4,5.ppm  immediate mode
#
# Six captures on CONSECUTIVE frames, switching path ONCE in the middle rather
# than alternating. The reason is a cadence the first run of this probe found:
# the presented image only changes every OTHER swap, so consecutive captures come
# in matched pairs and an alternating schedule confounds the path with the phase.
# Switching once puts a same-path pair and the cross-path pair at the same phase:
#
#   0 vs 1   same path, same content    the noise floor, measured in THIS run
#   2 vs 3   cross path, same content   the noise floor plus the effect
#   4 vs 5   same path, same content    the noise floor again, on the other path
#
# 1 vs 2 and 3 vs 4 straddle a content change and are expected to be an order of
# magnitude larger; they are the control that says the cadence is real.
#
# EXIT CRITERION: 2 vs 3 agrees with 0 vs 1 and 4 vs 5. This carries a finished
# image rather than rasterising geometry, so anything the path itself contributes
# would show up as 2 vs 3 standing clear of both. Compare with matched
# percentiles, never a differing-pixels mask.
#
# Usage — in SOFTWARE mode, on a menu or a still scene:
#   rm -f /tmp/blit_*.ppm
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/blit_path_ab.gdb
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

set $blit_tick = 0
set $blit_shot = 0

# SDL_GL_SwapWindow, per research/13: capturing from an arbitrary mid-frame pause
# returned three different images from four dumps of an unchanged scene. At the
# breakpoint the frame's blit has already run and sits in GL_BACK, which is what
# nocturne_dump_frontbuffer reads.
break SDL_GL_SwapWindow
commands
silent
set $blit_tick = $blit_tick + 1
# Eight frames of settle first: the probe is sourced into a running game and the
# first frames after a resume are not representative.
if $blit_tick > 8 && $blit_shot < 6
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/blit_%d.ppm\")", $blit_shot
  printf "[blit path %d captured @tick %d]\n", $blit_shot, $blit_tick
  set $blit_shot = $blit_shot + 1
end
# Pick the path for the frame ABOUT to be drawn, so the capture above always
# reads a frame drawn wholly by one path. Shots 0-2 shader, shots 3-5 fixed.
if $blit_tick > 7 && $blit_shot < 6
  set nocturne_gl_blit_shader = $blit_shot < 3
end
# Leave the build on the shader path however the run ends.
if $blit_shot == 6
  set nocturne_gl_blit_shader = 1
end
cont
end

printf "blit path A/B armed — hold still for ~15 frames\n"
printf "  /tmp/blit_0-2.ppm shader   /tmp/blit_3-5.ppm immediate mode\n"
