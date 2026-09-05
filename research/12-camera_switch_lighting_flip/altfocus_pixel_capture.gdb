# Bistable lighting on alt-tab — capture the PIXELS, not more state.
#
# Six state hypotheses have now been eliminated by measurement (see README.md),
# every one of them coming back constant while the image visibly changes. So the
# next question is not "which variable moves" but the more basic one:
#
#   does the game's framebuffer actually differ between the two appearances?
#
# If two captures are identical, the difference is downstream of the game —
# compositor, driver, or present path — and there is nothing left to find in the
# engine. If they differ, the diff localises WHICH pixels change, and that points
# at the surfaces and therefore at the subsystem.
#
# This captures continuously rather than per focus regain, because the reported
# symptom includes the image changing WHILE UNFOCUSED, before any camera
# re-apply. A time series spanning focused -> unfocused -> focused shows when the
# change happens as well as what it is.
#
# nocturne_dump_frontbuffer is the right instrument: it reads the actually
# presented image via SDL_RenderReadPixels, unlike nocturne_dump_screenshot which
# samples mid-render g_BackBuffer and is unreproducible.
#
# Usage:
#   rm -f /tmp/fb_*.ppm
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_pixel_capture.gdb
#   ... with the tower window in view, alt-tab out, wait, alt-tab back, repeat ...
#   ls /tmp/fb_*.ppm     then diff neighbouring frames to find the transition
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no `\` continuations inside an `if` nested in `commands`.

delete

set $tick = 0
set $shot = 0

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
set $tick = $tick + 1
if $tick % 30 == 0 && $shot < 120
  set $shot = $shot + 1
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/fb_%02d.ppm\")", $shot
  printf "[SHOT %02d @tick %d] spots=%d dyn=%d ambient=%d\n", $shot, $tick, g_SpotLightCount, g_DynamicLightCount, g_AmbientLightLevel
end
cont
end

printf "pixel capture armed (every 30 frames, 120 max)\n"
