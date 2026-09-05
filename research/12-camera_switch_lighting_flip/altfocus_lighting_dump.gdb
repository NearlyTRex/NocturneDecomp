# Bistable lighting on alt-tab — automatic lighting-state dump per focus regain.
#
# Repro: castle mission at the start, the window high in the chapel tower. The
# lighting changes while the window is unfocused — that is itself part of the
# defect, not expected dimming — and sometimes stays changed after focus returns.
#
# The observer problem this exists to solve: reporting which state is on screen
# requires alt-tabbing away, which itself changes the state. So the dump cannot be
# on-demand. This fires it automatically, five frames after each camera re-apply,
# by which point the regain has settled — and every dump is numbered, so the
# states can be diffed afterwards against a count of which regains looked wrong.
#
# A prior pass already cleared the obvious candidates: across 14 consecutive
# re-applies, g_ProjectionScale, g_TransformMatrix columns 0 and 1,
# lighting_quality_mode, mirror_lighting_cached, disable_directional_lighting and
# directional_light_ratio_enabled were all byte-identical. Whatever flips is
# downstream of the per-camera precompute, so this dumps the per-frame lighting
# state instead (nocturne_dump_lighting_state: vertex normals, transformed verts,
# magnitude histogram, ambient/spot/dynamic light state, per-frame vertex-colour
# gradient).
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_lighting_dump.gdb
#   ... with the tower window in view, alt-tab out and back several times,
#       COUNTING which regains came back dim ...
#   ls /tmp/light_*.txt      then diff a good one against a dim one
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no `\` continuations inside an `if` nested in `commands`.

delete

set $apply = 0
set $pending = 0

# ---- a camera re-apply arms a dump -----------------------------------------

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
set $apply = $apply + 1
set $pending = 5
printf "[APPLY #%d armed]\n", $apply
cont
end

# ---- five frames later, dump the settled lighting state --------------------

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $pending > 0
  set $pending = $pending - 1
  if $pending == 0 && $apply <= 14
    eval "call (int)nocturne_dump_lighting_state(\"/tmp/light_%02d.txt\")", $apply
    printf "[DUMP  #%d -> /tmp/light_%02d.txt]\n", $apply, $apply
  end
end
cont
end

printf "alt-tab lighting dump armed\n"
