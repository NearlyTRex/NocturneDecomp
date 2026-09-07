# Does the environment pass lose its pixels to the depth comparison?
#
# The blade is drawn twice at the same depth — its own texture first, the
# environment map blended over it — and the draw list shows both passes testing
# and writing depth with LEQUAL. Marking the env map shows it covering the blade
# except for hatched patches, and marking the base texture shows those same
# patches coming through unblended. Two nearly coplanar surfaces with the winner
# alternating per pixel is what a depth fight looks like.
#
# So take the comparison away from the marked draws and count. Both captures mark
# the env map in magenta, so the question is one of coverage, not appearance:
#
#   /tmp/depth_off.ppm   the env pass as it is
#   /tmp/depth_on.ppm    the env pass passing depth unconditionally
#
# If the hatched holes fill in, the pass was losing a fight it should have won,
# and the fix is a depth rule for an overlay rather than anything about normals,
# coordinates or the image.
#
# Usage — Svetlana on screen with a blade in view, standing still, pause menu up:
#   scripts/Bash/dbg.sh probe research/16-svetlana_blade_envmap/blade_depth_test.gdb
#
# Render and capture are one swap apart: a render from here lands in the GL
# target, and the screen holds the CPU mirror until the game's next frame reads it
# back and uploads it.
#
# Everything runs from the swap point: an interrupt lands inside the GL driver,
# and calling back into it from there kills the process.
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

set $dt_step = 0

break SDL_GL_SwapWindow
commands
silent
set $dt_step = $dt_step + 1
if $dt_step == 1
set $dt_tex = (unsigned)nocturne_trigl_gl_texture_cached("BACKGND.RAW", 256)
printf "[depth] BACKGND.RAW is GL texture %u\n", $dt_tex
set var nocturne_trigl_paint_texture = $dt_tex
set var nocturne_trigl_paint_view = 6
set var nocturne_trigl_paint_depth = 0
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
end
if $dt_step == 2
call (int)nocturne_dump_frontbuffer("/tmp/depth_off.ppm")
set var nocturne_trigl_paint_depth = 1
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
end
if $dt_step == 3
call (int)nocturne_dump_frontbuffer("/tmp/depth_on.ppm")
set var nocturne_trigl_paint_depth = 0
set var nocturne_trigl_paint_texture = 0
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
printf "[depth] both captured, marking and override cleared\n"
end
cont
end
