# Bug 2b — is the spot lightmap APPLIED on the flash frame?
#
# The chain, established by measurement this session:
#   - accel-only (software same scene/routine: no flash)
#   - every piece of light state bit-identical on the bad frame (lightmap
#     contents, all buffer pointers, scanline extents)
#   - the accelerated background is composed ONCE PER APPLY and never per frame
#     (geo_out=0 on every frame), so it cannot be what recovers after one frame
#
# The per-frame carrier is instead this pair inside renderScene:
#   line  56  addLightmapToCorona(camera, spot)   -- applies the lightmap
#   line 191  restoreDirtyRegions(spot)           -- undoes it at end of frame
#
# both under:
#   if ((g_RenderingShadows != 0) || (g_CGamePtr->shadow_flag != 0)) {
#       g_RenderingShadows = 0;            // one-shot flag, cleared on entry
#       processCorona(camera);
#       ...
#   }
#
# So: on the flash frame, is the apply simply skipped? Count the calls per frame
# and record the gate inputs. This is the direct test -- if the count is 0 on
# position 2 of a regain, the mechanism is found and the gate says why.
#
# Requires ACCELERATION (the flash does not occur in software).
#
# Probe hygiene: no $bl/$bh/$bx/$bp/$sp/$si/$di/$ps (x86 registers); no `\`
# continuations inside a nested `if`.

delete

set $q_add    = 0
set $q_proc   = 0
set $q_restore = 0
set $q_burst  = 0
set $q_shot   = 0
set $q_ev     = 0
set $q_dir    = -1

break mainWindowProc_FUN_005f3150.keep.cpp:141
commands
silent
set $q_ev = $q_ev + 1
set $q_dir = g_WindowActive
set $q_burst = 10
printf "[FOCUS #%d -> active=%d] arming at shot %d\n", $q_ev, $q_dir, $q_shot + 1
cont
end

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
printf "[APPLY at shot %d] shadows=%d rendshadow=%d spots=%d\n", $q_shot, g_CGamePtr->shadow_flag, g_RenderingShadows, g_SpotLightCount
cont
end

break core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
commands
silent
set $q_add = $q_add + 1
cont
end

break core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130
commands
silent
set $q_proc = $q_proc + 1
cont
end

break core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
commands
silent
set $q_restore = $q_restore + 1
cont
end

# renderScene is the frame boundary: the counters report the frame just ENDED,
# so read the gate inputs here too and then clear.
break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $q_burst > 0 && $q_shot < 90
  set $q_burst = $q_burst - 1
  set $q_shot = $q_shot + 1
  printf "[A %03d ev=%d dir=%d pos=%d] prev-frame add=%d proc=%d restore=%d | now shadows=%d rendshadow=%d spots=%d coronas=%d\n", $q_shot, $q_ev, $q_dir, 10 - $q_burst, $q_add, $q_proc, $q_restore, g_CGamePtr->shadow_flag, g_RenderingShadows, g_SpotLightCount, g_CoronaGlobeCount
end
set $q_add = 0
set $q_proc = 0
set $q_restore = 0
cont
end

printf "lightmap-apply probe armed -- REQUIRES ACCELERATION\n"
