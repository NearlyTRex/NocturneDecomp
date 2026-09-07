# Paint the blade's env-map UVs, on a held frame, through the renderer's own
# shader.
#
# The defect is that a triangle can take its env-map UV from two unrelated
# sources — the bone normal for vertices that have one, the eye-to-vertex
# direction for vertices that do not — so it interpolates across an arbitrary
# span of the env map. Counting that from a debugger took 31 probes. The renderer
# can simply draw it: u_debug 3 replaces the fragment colour with fract(v_uv), so
# a mixed triangle is a colour ramp beside its neighbours' coherent patches.
#
# Four views of the held frame:
#
#   /tmp/blade_0.ppm   the frame as it renders
#   /tmp/blade_3.ppm   UVs           — a ramp across a triangle IS the defect
#   /tmp/blade_5.ppm   texture colour — what the env map actually holds there
#   /tmp/blade_4.ppm   vertex colour  — lighting, with texturing taken out
#
# RENDER AND CAPTURE ARE ONE SWAP APART, and that is the whole difficulty. A
# render from here lands in the GL target; the screen holds the CPU mirror, and
# the two meet only when the game's next frame locks the frame (reading the
# target back) and unlocks it (uploading the result). Dumping straight after the
# render returns the previous presented image — four identical captures and a
# debug mode that looks broken when it is working. So each mode takes two
# breakpoint hits: set and render on one, capture on the next. The pause menu is
# composited over the picture by that same frame, so it appears in the shot.
#
# Usage — Svetlana on screen with a blade in view, standing still, pause menu up:
#   scripts/Bash/dbg.sh probe research/16-svetlana_blade_envmap/blade_uv_view.gdb
#   ... wait a couple of seconds; it walks itself through the four views ...
#
# Everything runs from the swap point: an interrupt lands inside the GL driver,
# and calling back into it from there kills the process.
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

set $uv_step = 0

break SDL_GL_SwapWindow
commands
silent
set $uv_step = $uv_step + 1
if $uv_step == 1
set var nocturne_trigl_debug = 0
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
end
if $uv_step == 2
call (int)nocturne_dump_frontbuffer("/tmp/blade_0.ppm")
set var nocturne_trigl_debug = 3
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
end
if $uv_step == 3
call (int)nocturne_dump_frontbuffer("/tmp/blade_3.ppm")
set var nocturne_trigl_debug = 5
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
end
if $uv_step == 4
call (int)nocturne_dump_frontbuffer("/tmp/blade_5.ppm")
set var nocturne_trigl_debug = 4
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
end
if $uv_step == 5
call (int)nocturne_dump_frontbuffer("/tmp/blade_4.ppm")
set var nocturne_trigl_debug = 0
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
printf "[blade uv] four views captured, debug mode restored\n"
end
cont
end
