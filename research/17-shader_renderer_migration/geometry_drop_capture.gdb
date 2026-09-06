# What stops being submitted after the first Options entry of a run.
#
# The first round trip through the Options screen permanently removes geometry
# from the scene — measured at 4306 -> 3798 polygons in one room and 1170 -> 1134
# in another, stable across every later round trip and identical under either
# renderer, so it is engine state rather than anything the renderer decides. It
# is confined to one render-flag combo (TEX|GOURAUD|SOLIDALPHA|ZTEST|ZWRITE|
# VTXRGB) and to the calls that carry ordinary opaque geometry, which says
# specific actors rather than a detail cut.
#
# So name them. Each capture writes the frame's draw list — one line per draw
# with the texture the engine asked for — and the display list, which is every
# actor queued for render with its name and position. Diff a capture from before
# the round trip against one from after and what vanished is in the difference.
#
# Usage — in a mission, standing still, pause menu up:
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/geometry_drop_capture.gdb
#   ... Options in and straight out, changing nothing ...
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/geometry_drop_capture.gdb
#   diff /tmp/gd_1.draws.txt /tmp/gd_2.draws.txt
#   diff /tmp/gd_1.actors.txt /tmp/gd_2.actors.txt
#
# Everything runs from the swap point: an interrupt lands inside the GL driver,
# and calling back into it from there kills the process.
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

if $_isvoid($gd_n)
  set $gd_n = 0
end
set $gd_arm = 1

break SDL_GL_SwapWindow
commands
silent
if $gd_arm != 0
set $gd_arm = 0
set $gd_n = $gd_n + 1
call (void)nocturne_trigl_stats_reset()
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
eval "call (int)nocturne_trigl_dump_draws(\"/tmp/gd_%d.draws.txt\")", $gd_n
eval "call (int)nocturne_dump_display_list(\"/tmp/gd_%d.actors.txt\")", $gd_n
printf "[gd %d] draws=%u polygons=%u blended=%u untextured=%u\n", $gd_n, nocturne_trigl_stats.draws, nocturne_trigl_stats.polygons, nocturne_trigl_stats.blended_draws, nocturne_trigl_stats.untextured_draws
end
cont
end
