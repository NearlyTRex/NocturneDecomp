# Bistable lighting on alt-tab — is the restore RUNNING, or running differently?
#
# Repro: castle mission, the window high in the chapel tower. It dims while the
# window is unfocused (expected) and SOMETIMES comes back dim (the defect).
#
# That phrasing points at a missed restore rather than a different restore. The
# restore is:
#
#   if (g_ApplicationActive != 0) { g_ApplicationActive = 0; setCameraView(...); }
#
# so this counts focus transitions against camera applies. If a regain ever fails
# to produce an apply, the dim state simply persists and there is nothing
# "bistable" about it at all.
#
# Already eliminated, do not re-measure:
#   - State at camera-apply time. Across 14 consecutive applies, g_ProjectionScale,
#     g_TransformMatrix columns 0 and 1, lighting_quality_mode,
#     mirror_lighting_cached, disable_directional_lighting and
#     directional_light_ratio_enabled were byte-identical.
#   - Per-frame lighting state. 14 nocturne_dump_lighting_state dumps differed
#     only in their timestamp line: g_AmbientLightLevel, g_DynamicLightCount,
#     g_SpotLightCount, g_StaticColorVector and the whole vertex-colour gradient
#     were constant. (Caveat: taken at renderScene entry, where g_VertexCount is
#     0, so the vertex-normal sample and histogram sections were empty.)
#   - CDemonCamera::precomputeLight's partial struct copy. The .keep already
#     carries the full `local_64 = local_70;`, so the uninitialised-.z bug that
#     the mirror research flagged is fixed and cannot be the source of intermittency.
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_restore_probe.gdb
#   ... with the tower window in view, alt-tab out and back N times, COUNTING
#       which regains came back dim ...
#   scripts/Bash/dbg.sh log-full | grep -E '^\[(FOCUS|APPLY)'
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no `\` continuations inside an `if` nested in `commands`.

delete

set $apply = 0
set $focus = 0

# ---- every write to the focus flag, with its old and new value -------------

watch -l g_ApplicationActive
commands
silent
set $focus = $focus + 1
printf "[FOCUS #%d] g_ApplicationActive %d -> %d   (applies so far: %d)\n", $focus, $_old, $_new, $apply
cont
end

# ---- every camera apply ----------------------------------------------------

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
set $apply = $apply + 1
printf "[APPLY #%d] idx=%d  spots=%d omni=%d  ambient=%d\n", $apply, index, g_SpotLightCount, g_OmniLightCount, g_AmbientLightLevel
cont
end

printf "alt-tab restore probe armed\n"
