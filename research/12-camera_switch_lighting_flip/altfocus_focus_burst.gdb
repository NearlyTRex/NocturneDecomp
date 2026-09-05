# Bug 2b — burst-capture consecutive frames from the FOCUS TRANSITION itself.
#
# altfocus_transient_burst.gdb arms on setCameraView, which only runs on focus
# REGAIN. The refined symptom is a one-frame flash tied to alt-tab focus in
# general, and the reporter's reading is that the chapel window is being
# rendered too bright -- the flash exposing a brightness that should not be
# there at all. So trigger on WM_ACTIVATEAPP, which fires in BOTH directions,
# and tag every frame with the direction it followed.
#
# Periodic sampling is useless here: a capture every N frames structurally
# cannot resolve a one-frame event. That is the lesson that cracked Bug 2a and
# it applies unchanged.
#
# Frames are captured at renderScene, the same anchor the 2a burst used, and
# nocturne_dump_frontbuffer returns the PRESENTED image -- so the file written
# at position N holds the frame RENDERED at N-1. Keep that offset in mind when
# reading the series.
#
# Usage:
#   rm -f /tmp/altfocus/*.ppm
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_focus_burst.gdb
#   ... alt-tab away, wait a beat, alt-tab back; repeat three or four times ...
#   scripts/Bash/dbg.sh log-full | grep -E '^\[(FOCUS|APPLY|F)'
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/
# $ps (x86 registers), and no `\` continuations inside an `if` nested in
# `commands`.

delete

set $q_burst  = 0
set $q_shot   = 0
set $q_ev     = 0
set $q_dir    = -1

# ---- WM_ACTIVATEAPP arms a dense burst, in either direction ----------------
# Line 141 is `if (iVar4 != wParam)` -- g_WindowActive already holds the NEW
# state, so it reports the direction we are heading into.

break mainWindowProc_FUN_005f3150.keep.cpp:141
commands
silent
set $q_ev = $q_ev + 1
set $q_dir = g_WindowActive
set $q_burst = 16
printf "[FOCUS #%d -> active=%d] arming burst at shot %d\n", $q_ev, $q_dir, $q_shot + 1
cont
end

# ---- note the camera apply so it can be located within the series ----------

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
printf "[APPLY at shot %d] quality=%d spots=%d dyn=%d\n", $q_shot, this_ptr->lighting_quality_mode, g_SpotLightCount, g_DynamicLightCount
cont
end

# ---- consecutive frames, each paired with the state it was rendered under ---

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $q_burst > 0 && $q_shot < 120
  set $q_burst = $q_burst - 1
  set $q_shot = $q_shot + 1
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/altfocus/f%03d.ppm\")", $q_shot
  printf "[F %03d ev=%d dir=%d pos=%d] quality=%d spots=%d dyn=%d ambient=%d coronas=%d omni=%d active=%d\n", $q_shot, $q_ev, $q_dir, 16 - $q_burst, g_CDemonSetPtr->lighting_quality_mode, g_SpotLightCount, g_DynamicLightCount, g_AmbientLightLevel, g_CoronaGlobeCount, g_OmniLightCount, g_WindowActive
end
cont
end

printf "focus-transition burst probe armed (16 consecutive frames per transition, 120 max)\n"
printf "alt-tab away, pause, alt-tab back -- three or four times\n"
