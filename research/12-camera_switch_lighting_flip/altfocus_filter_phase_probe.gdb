# Bistable lighting on alt-tab — is it an animated light-filter phase, baked?
#
# Repro: castle mission, the window high in the chapel tower. Its lighting
# changes while the window is unfocused, and sometimes stays changed after focus
# is regained. Some castle walls flicker with it.
#
# Hypothesis. C3DSLight carries an animated projected filter (a gobo):
#   filter_count 0x11ec, filter_durations[32] 0x16f4,
#   current_filter_frame 0x1890, filter_frame_elapsed 0x1894
# CDemonSet::setCameraView bakes each visible spot light into the backdrop once
# per apply (allocMasterZBuffer / beginScene / ... / precomputeLight), so the
# filter frame current at that instant is frozen into the baked lighting until
# the next apply. Meanwhile this build runs NOCTURNE_AUTHENTIC_WINDOWS = 0, which
# replaces the shipped blocking pump (`while (!active) Sleep(0x14)`) with an
# unconditional break and disables the thread-priority drop and swapBuffers'
# present gate — so unlike the shipped game, ours keeps simulating and animating
# while unfocused. Land on a dim frame at the moment of the regain's apply and it
# stays dim.
#
# Already eliminated, do not re-measure:
#   - State at camera-apply time: g_ProjectionScale, g_TransformMatrix cols 0/1,
#     lighting_quality_mode, mirror_lighting_cached, disable_directional_lighting,
#     directional_light_ratio_enabled — byte-identical over 14 applies.
#   - Per-frame lighting globals: 14 nocturne_dump_lighting_state dumps differed
#     only in their timestamp. g_AmbientLightLevel, g_DynamicLightCount,
#     g_SpotLightCount, g_StaticColorVector and the vertex-colour gradient constant.
#   - CDemonCamera::precomputeLight's partial struct copy: already fixed in the
#     .keep (`local_64 = local_70;`), so not a source of intermittency.
#
# What to look for: filter_frame / elapsed varying between applies, and
# correlating with which regains came back dim. If they are constant, the filter
# hypothesis dies too and the flicker is somewhere else entirely.
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_filter_phase_probe.gdb
#   ... with the tower window in view, alt-tab out and back N times, COUNTING
#       which regains came back dim ...
#   scripts/Bash/dbg.sh log-full | grep -E '^\[(APPLY|LIGHT)'
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no `\` continuations inside an `if` nested in `commands`.

delete

set $apply = 0

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
set $apply = $apply + 1
printf "[APPLY #%d] idx=%d lights=%d spots=%d\n", $apply, index, this_ptr->light_count, g_SpotLightCount
set $i = 0
while $i < this_ptr->light_count
  if this_ptr->lights[$i].filter_count > 0
    printf "[LIGHT #%d] light[%d] type=%d nfilters=%d frame=%d elapsed=%g intensity=%g blend=%d move=%d\n", $apply, $i, this_ptr->lights[$i].light_type, this_ptr->lights[$i].filter_count, this_ptr->lights[$i].current_filter_frame, this_ptr->lights[$i].filter_frame_elapsed, this_ptr->lights[$i].intensity, this_ptr->lights[$i].blend_filter, this_ptr->lights[$i].move_filter
  end
  set $i = $i + 1
end
cont
end

printf "alt-tab filter-phase probe armed\n"
