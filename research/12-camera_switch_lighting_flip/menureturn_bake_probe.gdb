# Bug 3 — per-frame lightmap accounting across a pause-menu round trip.
#
# Counters are cleared at each renderScene entry, so every line reports the
# frame that just ENDED, alongside the state the next frame is entering with.
# Arms on entry to the Options screen and prints the next 14 scene renders,
# which covers the redraw and the frames presented after it.
#
# What it shows on the castle-doorway repro: the redraw is the only line with
# prerender_skipped=0, the window ending at it carries setCameraView's
# restore=9 precomp=3, and every frame after is a balanced add=3 restore=3.
# The balance is why the carrier is not here — see the A/B probe.
#
# Probe hygiene: no $bl/$bh/$bx/$bp/$sp/$si/$di/$ps (x86 registers); no `\`
# continuations inside a nested `if`.

delete

set pagination off
set confirm off

set $p_add = 0
set $p_proc = 0
set $p_restore = 0
set $p_precomp = 0
set $p_burst = 0
set $p_shot = 0

break core_menu_cpp_showOptionsScreen_FUN_00512d30
commands
silent
set $p_burst = 14
set $p_shot = 0
printf "[MENU] options entered, frame=%d\n", g_CGamePtr->frame_counter
cont
end

break core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
commands
silent
set $p_add = $p_add + 1
cont
end

break core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130
commands
silent
set $p_proc = $p_proc + 1
cont
end

break core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
commands
silent
set $p_restore = $p_restore + 1
cont
end

break core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
commands
silent
set $p_precomp = $p_precomp + 1
cont
end

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $p_burst > 0
  set $p_burst = $p_burst - 1
  set $p_shot = $p_shot + 1
  printf "[B %02d] prev-frame add=%d proc=%d restore=%d precomp=%d | entering frame=%d prerender_skipped=%d shadows=%d rendshadow=%d spot=%d dyn=%d corona=%d\n", $p_shot, $p_add, $p_proc, $p_restore, $p_precomp, g_CGamePtr->frame_counter, skip_prerender, g_CGamePtr->shadow_flag, g_RenderingShadows, g_SpotLightCount, g_DynamicLightCount, g_CoronaGlobeCount
end
set $p_add = 0
set $p_proc = 0
set $p_restore = 0
set $p_precomp = 0
cont
end

printf "menu-return bake probe armed\n"
