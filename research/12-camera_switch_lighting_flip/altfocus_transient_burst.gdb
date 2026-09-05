# Alt-tab lighting — capture the TRANSIENT, frame by frame.
#
# Refined symptom: the wrong lighting is not a stable second state. It is a brief
# dim visible for a moment immediately after focus is regained, which then
# settles to correct almost instantly. In the castle repro it showed on the
# braziers lighting the front rather than the chapel window.
#
# That explains why everything measured so far came back constant: six state
# hypotheses were all sampled in the settled state, and a coarse pixel capture
# (every 30 frames, 98 frames, whole-frame mean spread 1.1%) structurally cannot
# resolve a one-to-three frame event.
#
# So: burst-capture CONSECUTIVE frames starting at the focus-regain camera apply.
# Within a single burst the series runs dim -> correct on its own, so it needs no
# external reference frame and no report of which regain was bad.
#
# Each captured frame is paired with the state that frame was rendered under.
# lighting_quality_mode is the one worth watching: setCameraView sets it to 1 on
# entry and 0 at the end, and CDemonSet::lightVerticies takes its full
# directional-lighting path only when it is 0. Any frame presented while it is 1
# is lit by a different path.
#
# Usage:
#   rm -f /tmp/tr_*.ppm
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_transient_burst.gdb
#   ... alt-tab away, wait, alt-tab back; repeat a few times ...
#   scripts/Bash/dbg.sh log-full | grep -E '^\[(BURST|FRAME)'
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no `\` continuations inside an `if` nested in `commands`.

delete

set $burst = 0
set $shot = 0
set $napply = 0

# ---- a camera apply arms a dense burst -------------------------------------

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
set $napply = $napply + 1
set $burst = 14
printf "[BURST #%d starts at shot %d] quality=%d spots=%d dyn=%d\n", $napply, $shot + 1, this_ptr->lighting_quality_mode, g_SpotLightCount, g_DynamicLightCount
cont
end

# ---- consecutive frames, each paired with the state it was rendered under ---

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $burst > 0 && $shot < 70
  set $burst = $burst - 1
  set $shot = $shot + 1
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/tr_%03d.ppm\")", $shot
  printf "[FRAME %03d burst=%d apply=%d] quality=%d spots=%d dyn=%d ambient=%d coronas=%d\n", $shot, 14 - $burst, $napply, g_CDemonSetPtr->lighting_quality_mode, g_SpotLightCount, g_DynamicLightCount, g_AmbientLightLevel, g_CoronaGlobeCount
end
cont
end

printf "transient burst probe armed (14 consecutive frames per apply, 70 max)\n"
