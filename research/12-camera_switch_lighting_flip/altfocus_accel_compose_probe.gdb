# Bug 2b — how often is the accelerated background composed, and when?
#
# The flash is ACCEL-ONLY (verified: software, same scene and routine, no
# flash), and every piece of light state is bit-identical on the bad frame. So
# the suspect is ordering: setCameraView composes the GPU-side background in its
# accel-only block BEFORE the spot-light loop bakes the light into the backdrop.
#
#     if (g_UseExternalRenderer != 0) {        // composes the accel background
#         renderSceneGeometry(this_ptr, 9999.9, 0);
#         renderBackgroundActors(this_ptr, 1);
#     }
#     endScene(...);
#     if (disable_spotlight_shadows == 0) {
#         for (each spot) { restoreDirtyRegions(light); precomputeLight(...); }
#     }
#
# That story only holds if the background is composed ONCE PER APPLY. If it is
# re-composed every frame, a stale GPU copy could not survive into a presented
# frame and the mechanism is something else entirely. Measure before changing
# anything -- two plausible mechanisms have already died this session.
#
# Counts, per frame (reset at each renderScene):
#   geo_in  / bg_in   - renderSceneGeometry / renderBackgroundActors calls made
#                       INSIDE setCameraView
#   geo_out / bg_out  - the same calls made outside it, i.e. per-frame work
#
#   geo_out == 0 on ordinary frames -> background composed only at the apply;
#                                      the ordering story stands
#   geo_out  > 0 every frame        -> it is re-composed per frame; a stale copy
#                                      cannot persist, look elsewhere
#
# MUST be run under acceleration (g_UseDirect3D=1, g_UseExternalRenderer=1);
# the accel-only block never executes in software.
#
# Probe hygiene: no $bl/$bh/$bx/$bp/$sp/$si/$di/$ps (x86 registers); no `\`
# continuations inside a nested `if`.

delete

set $q_inapply = 0
set $q_geo_in  = 0
set $q_geo_out = 0
set $q_bg_in   = 0
set $q_bg_out  = 0
set $q_burst   = 0
set $q_shot    = 0
set $q_ev      = 0
set $q_dir     = -1

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
set $q_inapply = 1
printf "[APPLY at shot %d] ext=%d\n", $q_shot, g_UseExternalRenderer
cont
end

break core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
commands
silent
if $q_inapply == 1
  set $q_geo_in = $q_geo_in + 1
end
if $q_inapply == 0
  set $q_geo_out = $q_geo_out + 1
end
cont
end

break core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0
commands
silent
if $q_inapply == 1
  set $q_bg_in = $q_bg_in + 1
end
if $q_inapply == 0
  set $q_bg_out = $q_bg_out + 1
end
cont
end

# renderScene marks the frame boundary: report what happened since the last one,
# and clear the in-apply flag, since the apply always completes before the frame.
break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $q_burst > 0 && $q_shot < 90
  set $q_burst = $q_burst - 1
  set $q_shot = $q_shot + 1
  printf "[C %03d ev=%d dir=%d pos=%d] geo_in=%d geo_out=%d bg_in=%d bg_out=%d ext=%d\n", $q_shot, $q_ev, $q_dir, 10 - $q_burst, $q_geo_in, $q_geo_out, $q_bg_in, $q_bg_out, g_UseExternalRenderer
end
set $q_inapply = 0
set $q_geo_in  = 0
set $q_geo_out = 0
set $q_bg_in   = 0
set $q_bg_out  = 0
cont
end

printf "accel-compose probe armed -- REQUIRES ACCELERATION (d3d=1)\n"
printf "alt-tab away, pause, alt-tab back -- three or four times\n"
