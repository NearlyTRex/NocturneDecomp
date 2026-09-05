# Shader lightmap — capture every debug view of ONE scene, frame-synced.
#
# The defect: hardware geometry comes out ~2x darker than the software path at
# the same screen position. Measured on the chapel exterior, same relative
# bands, sky as the control:
#
#   band            software        shader-accel
#   top   0-20%     mean 21.19      mean 21.31     <- CPU composite, matches
#   mid  20-60%     mean 16.87 max 57   mean 14.53 max 27   <- the defect
#   low  60-100%    mean  8.08      mean  7.28
#
# The blend math is validated (0.36 mean abs error against a captured reference
# row) and the mapping checks out arithmetically at centre and both edges. So
# stop reasoning and ask the shader directly what it is reading.
#
# nocturne_gl_lightmap_debug repaints hardware geometry with an intermediate
# instead of the shaded colour, so each capture is a readout at exactly the
# pixels the geometry covers, with the untouched CPU background around it for
# reference:
#
#   0  normal shaded output          the thing that is too dark
#   1  grid coordinate (r=u, g=v)    a flipped or mis-scaled mapping is obvious
#   2  fog        0=none  1=solid    compare against lightmap_plane.pgm
#   3  gain       128=unity          compare against lightmap_corona.pgm
#
# Four captures of one frozen scene, so they differ only by the view. Pair them
# with the grid dumps (NOCTURNE_GL_LIGHTMAP_DUMP=1) and the arithmetic is closed:
# the dump says what the grid holds, view 1 says which texel a fragment reached,
# views 2 and 3 say what it got out.
#
# Usage:
#   rm -f /tmp/lmview_*.ppm
#   NOCTURNE_GL_LIGHTMAP_DUMP=1 ./run.sh        # accel + the OpenGL renderer
#   ... reach the scene, then hold still ...
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/lightmap_view_capture.gdb
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no `\` continuations inside an `if` nested in `commands`.

delete

set $lm_tick = 0
set $lm_view = 0

# SYNC ON SDL_GL_SwapWindow, NOT on a render function. research/13 records the
# instrument breaking exactly that way: nocturne_dump_frontbuffer called from a
# pause at an arbitrary point in the frame returned three distinct images from
# four consecutive dumps with nothing changed between them, and the alternation
# was big enough to be mistaken for a real renderer difference. Synced to the
# swap, repeat captures agree to mean|d| 0.1-0.4. The swap is also the one point
# that exists in BOTH software and accelerated modes, so an A/B can use it.
break SDL_GL_SwapWindow
commands
silent
set $lm_tick = $lm_tick + 1
if $lm_tick % 12 == 0 && $lm_view < 5
  set nocturne_gl_lightmap_debug = $lm_view
end
if $lm_tick % 12 == 6 && $lm_view < 5
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/lmview_%d.ppm\")", $lm_view
  printf "[view %d captured @tick %d]\n", $lm_view, $lm_tick
  set $lm_view = $lm_view + 1
end
if $lm_view == 5
  set nocturne_gl_lightmap_debug = 0
end
cont
end

printf "lightmap view capture armed — hold the camera still for ~60 frames\n"
printf "  /tmp/lmview_0.ppm shaded  _1 grid uv  _2 fog  _3 gain  _4 lightmap OFF\n"
printf "  _0 vs _4 is the A/B that isolates what the lightmap itself costs\n"
