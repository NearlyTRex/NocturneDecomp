# One capture of the held frame, through whichever renderer is selected.
#
# Comparing two renderers means comparing two moments, because the selector
# lives on the Options screen. This build holds the simulation while the pause
# menu is up (NOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME 0), so the second renderer
# can redraw the frame the first one drew and the animation drops out of the
# comparison entirely.
#
# The pause menu shows the CPU image, not a live render — the renderer is idle
# while paused, and lock_frame's readback is gated on a draw having happened. So
# capturing the held frame as-is says nothing about the renderer that is
# selected. This asks for a real frame first:
#
#   renderScene(set, 0)  ->  nocturne_dump_frontbuffer
#
# and prints what the renderer counted, so a capture that drew nothing is
# visible as such rather than being read as "the two renderers agree".
#
# THE RENDER AND THE DUMP HAPPEN AT SDL_GL_SwapWindow, NOT AT THE PROMPT. An
# interrupt lands wherever the thread happens to be, which under acceleration is
# most often inside the GL driver; calling back into GL from there re-enters a
# driver call that is already in progress and the process dies with a SIGSEGV
# inside libnvidia-glcore. Sourcing this file only sets a variable and arms a
# breakpoint. Every GL call it makes runs from the swap point, where the frame is
# finished and the driver is between calls — the same point the blit A/B redraws
# from.
#
# Usage — in a mission, standing still, pause menu up:
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/renderer_ab_capture.gdb
#
# Captures number themselves: /tmp/rab_1.ppm, /tmp/rab_2.ppm, ... Run it twice
# per renderer; two captures with no resume between them should be bit-identical,
# which is what makes the noise floor of this comparison zero rather than the
# ~0.6 of a running scene.
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

if $_isvoid($rab_n)
  set $rab_n = 0
end

# One capture per sourcing. The breakpoint disarms itself so the frames after it
# are the game's own.
set $rab_arm = 1

break SDL_GL_SwapWindow
commands
silent
if $rab_arm != 0
set $rab_arm = 0
set $rab_n = $rab_n + 1
call (void)nocturne_trigl_stats_reset()
call (void)core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(g_CDemonSetPtr, 0)
eval "call (int)nocturne_dump_frontbuffer(\"/tmp/rab_%d.ppm\")", $rab_n
eval "call (int)nocturne_trigl_dump_draws(\"/tmp/rab_%d.draws.txt\")", $rab_n
printf "[rab %d] renderer=%s\n", $rab_n, g_RendererDllPath
printf "[rab %d] trigl draws=%u polygons=%u blended=%u untextured=%u missing_tex=%u\n", $rab_n, nocturne_trigl_stats.draws, nocturne_trigl_stats.polygons, nocturne_trigl_stats.blended_draws, nocturne_trigl_stats.untextured_draws, nocturne_trigl_stats.missing_texture_draws
end
cont
end
