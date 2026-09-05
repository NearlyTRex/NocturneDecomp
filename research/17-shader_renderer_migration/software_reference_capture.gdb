# Software reference for the lightmap A/B — the half of the question the
# accelerated captures cannot answer.
#
# lightmap_view_capture.gdb gives, on one frame and one rasterizer:
#   lmview_4  hardware geometry WITHOUT the per-pixel grid   mean 12.24
#   lmview_0  the same geometry WITH it                      mean  5.04
#
# Both are self-consistent — the grid predicts view 0 from view 4 to within 2 on
# 71% of pixels. What they cannot say is which one is CORRECT, because that is a
# question about the software rasterizer, which draws none of those pixels.
#
# So capture the same scene in software and see which it lands on:
#   software ~ lmview_0  -> the DLL's colours needed the grid; phase 1 is right
#   software ~ lmview_4  -> the DLL's colours were already final-brightness, the
#                           grid is the SOFTWARE path's lighting mechanism, and
#                           phase 1 applies it a second time
#
# research/13 already measured the second answer once (character crops: software
# 16.083 vs accel-without-grid 16.471, ratio 1.024) but in a scene whose grid may
# have been near unity, which would make that comparison vacuous. This scene's
# corona grid averages 16 against 64-is-unity, so the grid bites hard and the
# test has teeth.
#
# Compare with whole-region means and matched percentiles, NEVER a differing-
# pixels mask and never a paired-pixel fit — the two rasterizers do not sample
# identically, and research/13 retracted a whole chapter of conclusions built on
# exactly that.
#
# Usage — with the game already at the SAME spot, switched to software:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/software_reference_capture.gdb
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

set $sw_tick = 0
set $sw_shot = 0

# SDL_GL_SwapWindow is the one per-frame point that exists in BOTH modes — it is
# reached through nocturne_gl_present_framebuffer in software and
# nocturne_gl_swap_only under acceleration. Capturing anywhere else reads the
# framebuffer mid-frame and returns a different image every time; research/13
# has four consecutive dumps of an unchanged scene coming back as three distinct
# images that way.
break SDL_GL_SwapWindow
commands
silent
set $sw_tick = $sw_tick + 1
if $sw_tick % 12 == 0 && $sw_shot < 3
  set $sw_shot = $sw_shot + 1
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/swcap_%d.ppm\")", $sw_shot
  printf "[software reference %d captured @tick %d]\n", $sw_shot, $sw_tick
end
cont
end

printf "software reference capture armed — 3 frames, hold the camera still\n"
printf "  /tmp/swcap_1..3.ppm; three of them so animation drift is visible\n"
