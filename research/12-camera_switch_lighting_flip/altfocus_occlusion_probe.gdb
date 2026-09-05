# Bug 2b — is the lightmap's occlusion test failing under acceleration?
#
# POLARITY CORRECTED by a retail reference capture (nocturne.exe under Wine,
# HW accel, 640x480, same scene):
#
#   window region     mean    max
#   retail            19.50    29
#   ours, steady      20.53    56     <- ~2x too bright
#   ours, "flash"     19.48    39     <- matches retail's mean
#   whole frame       14.32 / 181 retail vs ~14.1 / 183 ours  (exposure controls out)
#
# So the flash frame is the CORRECT one and every other frame is over-lit. The
# bug is that the window is too bright, not that one frame is dim.
#
# Mechanism to test. addLightmapToCorona accumulates a texel only if it passes
# an occlusion test against a CPU-side depth buffer:
#
#   if ((*vis != 0) && (*vis <= (uint)**depth)) *out += lightmap[*idx];
#
# With acceleration on, the software MMX rasteriser never runs (research/13 C10),
# so nothing populates that CPU depth buffer on an ordinary frame -- the test
# stops rejecting texels and too much lightmap accumulates. The one exception is
# the apply frame: setCameraView runs renderSceneGeometry SOFTWARE-side, wrapped
# in saveZBufferScanlines / restoreZBufferScanlines, which is the only time
# acceleration populates it. That frame the occlusion works and the window is
# correct.
#
#   pass-count high every frame, lower on the apply frame -> CONFIRMED
#   pass-count flat                                       -> occlusion is not it
#
# Grid layout, from addLightmapToCorona: both grids are 320 wide;
# visibility is int[row*320+col], depth is ushort*[row*320+col] (deref twice).
# Sampled 8x8 inside rows with real extents (ext120=[32,318], ext180=[1,319]).
#
# Probe hygiene: no $bl/$bh/$bx/$bp/$sp/$si/$di/$ps (x86 registers); no `\`
# continuations inside a nested `if`; never dereference a possibly-null pointer
# in a printf -- a failed printf aborts the block before `cont` and freezes the
# game.

delete

set $q_burst = 0
set $q_shot  = 0
set $q_ev    = 0
set $q_dir   = -1

break mainWindowProc_FUN_005f3150.keep.cpp:141
commands
silent
set $q_ev = $q_ev + 1
set $q_dir = g_WindowActive
set $q_burst = 8
printf "[FOCUS #%d -> active=%d] arming at shot %d\n", $q_ev, $q_dir, $q_shot + 1
cont
end

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
printf "[APPLY at shot %d]\n", $q_shot
cont
end

# Sample just BEFORE the apply loop runs, at renderScene entry.
break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $q_burst > 0 && $q_shot < 200
  set $q_burst = $q_burst - 1
  set $q_shot = $q_shot + 1
  set $q_pass = 0
  set $q_vnz  = 0
  set $q_dnz  = 0
  set $q_n    = 0
  set $q_dsum = 0
  if g_SpotLightCount > 0
    set $q_L = g_SpotLightList[0]
    set $q_r = 0
    while $q_r < 8
      set $q_c = 0
      while $q_c < 8
        set $q_row = 120 + $q_r * 10
        set $q_col = 50 + $q_c * 30
        set $q_off = $q_row * 320 + $q_col
        set $q_v = ((int *)$q_L->corona_visibility_buffers)[$q_off]
        set $q_dp = $q_L->corona_depth_buffer[$q_off]
        set $q_n = $q_n + 1
        if $q_v != 0
          set $q_vnz = $q_vnz + 1
        end
        if $q_dp != 0
          set $q_d = *$q_dp
          set $q_dsum = $q_dsum + $q_d
          if $q_d != 0
            set $q_dnz = $q_dnz + 1
          end
          if $q_v != 0 && $q_v <= $q_d
            set $q_pass = $q_pass + 1
          end
        end
        set $q_c = $q_c + 1
      end
      set $q_r = $q_r + 1
    end
  end
  printf "[O %03d ev=%d dir=%d pos=%d] pass=%d/%d vis_nz=%d depth_nz=%d depth_sum=%d\n", $q_shot, $q_ev, $q_dir, 8 - $q_burst, $q_pass, $q_n, $q_vnz, $q_dnz, $q_dsum
end
cont
end

printf "occlusion probe armed -- REQUIRES ACCELERATION\n"
