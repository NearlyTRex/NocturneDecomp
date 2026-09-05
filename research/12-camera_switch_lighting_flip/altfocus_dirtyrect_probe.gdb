# Bistable lighting on alt-tab — spot-light shadow-map dirty-rect accounting.
#
# Why here. The symptom is surface-selective (a chapel window, a body on the
# ground) and changes while the window is UNFOCUSED, before any camera re-apply —
# so the per-regain rebuild cannot be the cause of that half, and five
# state-at-apply hypotheses are already eliminated (see README.md).
#
# CDemonLight::restoreDirtyRegions restores the light's shadow map from its
# master copy and has a discrete path switch:
#
#   if (base.skip_clear_buffer_flag != 0) {
#       if (0x100 < base.rect_array_count) { blitZBuffer(whole map); count = 0; return; }
#       ... otherwise blit per accumulated rect ...
#   }
#
# with `CRect rect_array[256]` (CDemonCamera 0x1d4, count at 0x1d0). How many
# rects accumulate between restores depends on how many paints happen per frame,
# i.e. on frame cadence — which is precisely what changes when a window loses
# focus or when two instances compete for the machine. If the per-rect list is
# ever incomplete, the restore leaves lit or shadowed residue on exactly the
# surfaces that light touches.
#
# CDemonSet::renderScene restores every spot light once per frame; setCameraView
# restores dynamic and spot lights, frees the master Z buffers and resets the
# restore allocator on every apply.
#
# What to look for: rect_array_count crossing 0x100, or skip_clear_buffer_flag
# changing, around a focus transition — and whether that tracks the dim.
# If both are steady across the whole sequence, this dies like the other five.
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_dirtyrect_probe.gdb
#   ... with the tower window in view, alt-tab out and back, noting dim regains ...
#   scripts/Bash/dbg.sh log-full | grep -E '^\[(RECT|PATH|APPLY)'
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no `\` continuations inside an `if` nested in `commands`.

delete

set $lastcount = -1
set $lastflag = -1
set $frames = 0
set $apply = 0

# ---- per-frame shadow-map restore, logged only on a change -----------------

break core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
commands
silent
set $frames = $frames + 1
if this_ptr->base.rect_array_count != $lastcount || this_ptr->base.skip_clear_buffer_flag != $lastflag
  printf "[RECT @%d] count=%d skip_clear=%d wholemap=%d master_zbuf=%p\n", $frames, this_ptr->base.rect_array_count, this_ptr->base.skip_clear_buffer_flag, this_ptr->base.rect_array_count > 256, this_ptr->master_zbuffer
  set $lastcount = this_ptr->base.rect_array_count
  set $lastflag = this_ptr->base.skip_clear_buffer_flag
end
cont
end

# ---- camera applies, for correlation ---------------------------------------

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
set $apply = $apply + 1
printf "[APPLY #%d @%d] spots=%d dyn=%d\n", $apply, $frames, g_SpotLightCount, g_DynamicLightCount
cont
end

printf "dirty-rect probe armed\n"
