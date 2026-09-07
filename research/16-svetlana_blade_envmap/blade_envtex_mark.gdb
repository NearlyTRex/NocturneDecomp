# Mark the environment map wherever it lands, on a held frame.
#
# The env pass reaches the renderer as one draw bound to BACKGND.RAW with
# coordinates spanning the whole image, which is what environment mapping looks
# like — so neither the texture nor the range is the fault. What the frame shows
# instead is speckle: short streaks of a wildly different coordinate radiating
# from a point, on geometry whose coordinates are otherwise flat. A coordinate is
# carried across a triangle divided by eye depth and recovered per pixel, so a
# vertex whose depth approaches zero does exactly that to the recovered value,
# while the coordinates themselves and the image stay sound. The eye-z column in
# the draw list is there to say whether that is what is happening.
#
# Three views of one held frame:
#
#   /tmp/env_0.ppm      the frame as it renders
#   /tmp/env_flat.ppm   every pixel drawn from the env map, in magenta
#   /tmp/env_uv.ppm     the same pixels, showing their coordinates
#   /tmp/env_draws.txt  the draw list, with the eye-z span per draw
#
# The env map's GL number changes from run to run, so it is looked up by name
# rather than pasted in. That lookup only reads the cache and touches no GL.
#
# Usage — Svetlana on screen with a blade in view, standing still, pause menu up:
#   scripts/Bash/dbg.sh probe research/16-svetlana_blade_envmap/blade_envtex_mark.gdb
#
# Render and capture are one swap apart: a render from here lands in the GL
# target, and the screen holds the CPU mirror until the game's next frame reads
# it back and uploads it. Dumping straight after a render returns the previous
# picture — identical captures, and an instrument that looks broken when it is
# working.
#
# Everything runs from the swap point: an interrupt lands inside the GL driver,
# and calling back into it from there kills the process.
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

set $em_step = 0

break SDL_GL_SwapWindow
commands
silent
set $em_step = $em_step + 1
if $em_step == 1
set var nocturne_trigl_paint_texture = 0
set var nocturne_trigl_debug = 0
call (void)nocturne_trigl_stats_reset()
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
call (int)nocturne_trigl_dump_draws("/tmp/env_draws.txt")
end
if $em_step == 2
call (int)nocturne_dump_frontbuffer("/tmp/env_0.ppm")
set $em_tex = (unsigned)nocturne_trigl_gl_texture_cached("BACKGND.RAW", 256)
printf "[env] BACKGND.RAW is GL texture %u\n", $em_tex
set var nocturne_trigl_paint_texture = $em_tex
set var nocturne_trigl_paint_view = 6
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
end
if $em_step == 3
call (int)nocturne_dump_frontbuffer("/tmp/env_flat.ppm")
set var nocturne_trigl_paint_view = 7
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
end
if $em_step == 4
call (int)nocturne_dump_frontbuffer("/tmp/env_uv.ppm")
set var nocturne_trigl_paint_texture = 0
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
printf "[env] marked views captured, marking cleared\n"
end
cont
end
