# Bistable lighting on alt-tab — state capture across a focus regain.
#
# Repro: the castle mission at the start. Lighting around the window high in a
# tower changes as focus is gained and lost, and some castle wall lighting
# flickers with it.
#
# On focus regain CGame::runGameSession re-applies the current camera:
#
#   if (g_ApplicationActive != 0) { g_ApplicationActive = 0; setCameraView(...); }
#
# (one call — the two in the source are the two arms of a
# #if NOCTURNE_AUTHENTIC_WINDOWS / #else, only one of which is compiled).
#
# setCameraView is the sequence in which pushViewport resets g_ProjectionScale to
# 0x10000 without re-baking g_TransformMatrix, CDemonCamera::precomputeNormals —
# the lighting precompute — runs inside that window, and popViewport restores the
# scale, again without re-baking. Two discrete projection scales feeding the
# lighting precompute is a candidate mechanism for two discrete lighting states.
#
# Competing candidate, cheaper to check and logged here too: the CDemonSet
# lighting-path gates. CDemonSet::lightVerticies branches on
#   lighting_quality_mode == 0 -> mirror_lighting_cached == 0
#                              -> disable_directional_lighting == 0
# and setCameraView sets lighting_quality_mode = 1 and
# directional_light_ratio_enabled = 1 on every apply. Any of those latching
# differently across a focus regain would give exactly two lighting outcomes.
#
# One line per focus regain. Alt-tab several times, note which regains looked
# bright and which looked dark, then correlate against the log: any column that
# tracks the visible state is the mechanism, and if every column is constant the
# projection/gate hypotheses are both dead.
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_lighting_probe.gdb
#   ... reach the castle tower view, then alt-tab out and back several times ...
#   scripts/Bash/dbg.sh log-full | grep -E '^\[(APPLY|NORM)'
#
# Probe hygiene, both learned the hard way:
#   - Never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps. Those are
#     x86 REGISTERS; `set $bl = X` in a breakpoint corrupts the running program.
#   - No `\` line continuations inside an `if` nested in a `commands` block; the
#     nesting breaks and the body runs unconditionally. Keep each printf on one line.

delete

set $apply = 0

# ---- every camera apply, focus-regain or otherwise --------------------------

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
set $apply = $apply + 1
printf "[APPLY #%d] idx=%d ext=%d pscale=%d col0=(%d,%d,%d) col1=(%d,%d,%d) quality=%d mirror_cached=%d nodir=%d ratio=%d\n", $apply, index, g_UseExternalRenderer, g_ProjectionScale, g_TransformMatrix.m[0].x, g_TransformMatrix.m[1].x, g_TransformMatrix.m[2].x, g_TransformMatrix.m[0].y, g_TransformMatrix.m[1].y, g_TransformMatrix.m[2].y, this_ptr->lighting_quality_mode, this_ptr->mirror_lighting_cached, this_ptr->disable_directional_lighting, this_ptr->directional_light_ratio_enabled
cont
end

# ---- the lighting precompute, inside the viewport push ----------------------
# This is the state the room's lighting is actually computed from.

break core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360
commands
silent
printf "[NORM  #%d] ext=%d pscale=%d col0=(%d,%d,%d) col1=(%d,%d,%d) quality=%d mirror_cached=%d nodir=%d ratio=%d\n", $apply, g_UseExternalRenderer, g_ProjectionScale, g_TransformMatrix.m[0].x, g_TransformMatrix.m[1].x, g_TransformMatrix.m[2].x, g_TransformMatrix.m[0].y, g_TransformMatrix.m[1].y, g_TransformMatrix.m[2].y, g_CDemonSetPtr->lighting_quality_mode, g_CDemonSetPtr->mirror_lighting_cached, g_CDemonSetPtr->disable_directional_lighting, g_CDemonSetPtr->directional_light_ratio_enabled
cont
end

printf "alt-tab lighting probe armed\n"
