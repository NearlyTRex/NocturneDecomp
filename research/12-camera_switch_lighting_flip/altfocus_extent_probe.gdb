# Bug 2b — is the light's PROJECTION empty for one frame?
#
# Ruled out so far, by measurement:
#   - the baked lightmap itself: contents constant (centre-grid checksum
#     sum=1027 nz=64/64) on every frame, both directions, position 2 included,
#     with lm / masterz / lmvis pointers all stable. So the bake is fine.
#   - the backdrop art: CAS1.RAW has no lit window at all.
#   - a cumulative/double bake: steady value bit-identical after every regain.
#
# That leaves how the lightmap is APPLIED. CDemonCamera::precomputeLight seeds
# the per-scanline projection extents to an EMPTY span (left_extent[i]=999,
# right_extent[i]=0) and then fills them; a frame rendered while they are still
# empty would project no light at all -- a one-frame dim, on exactly the frame
# after the camera apply.
#
# Per frame this counts how many of the 240 scanline extents are empty
# (left >= right), samples a few directly, and checksums the lightmap
# visibility bitmask, whose pointer is stable but whose contents were never
# checked.
#
#   empty-extent count spikes on position 2 -> the projection is the bug
#   visibility checksum changes on pos 2    -> the mask is being rebuilt late
#   both flat                                -> look further downstream still
#
# Sampled every 4th extent (60 of 240) to keep the gdb loop affordable.
#
# Probe hygiene: no $bl/$bh/$bx/$bp/$sp/$si/$di/$ps (x86 registers); no `\`
# continuations inside a nested `if`; never dereference a possibly-null pointer
# in a printf.

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
set $q_burst = 10
printf "[FOCUS #%d -> active=%d] arming at shot %d\n", $q_ev, $q_dir, $q_shot + 1
cont
end

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
printf "[APPLY at shot %d]\n", $q_shot
cont
end

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $q_burst > 0 && $q_shot < 90
  set $q_burst = $q_burst - 1
  set $q_shot = $q_shot + 1
  set $q_empty = 0
  set $q_span  = 0
  set $q_vsum  = 0
  if g_SpotLightCount > 0
    set $q_i = 0
    while $q_i < 240
      set $q_le = g_SpotLightList[0]->left_extent[$q_i]
      set $q_re = g_SpotLightList[0]->right_extent[$q_i]
      if $q_le >= $q_re
        set $q_empty = $q_empty + 1
      end
      if $q_le < $q_re
        set $q_span = $q_span + ($q_re - $q_le)
      end
      set $q_i = $q_i + 4
    end
    set $q_vb = g_SpotLightList[0]->lightmap_visibility_bits
    if $q_vb != 0
      set $q_j = 0
      while $q_j < 32
        set $q_vsum = $q_vsum + $q_vb[$q_j * 97]
        set $q_j = $q_j + 1
      end
    end
  end
  printf "[E %03d ev=%d dir=%d pos=%d] empty=%d/60 spansum=%d vis=%d ext0=[%d,%d] ext120=[%d,%d]\n", $q_shot, $q_ev, $q_dir, 10 - $q_burst, $q_empty, $q_span, $q_vsum, g_SpotLightList[0]->left_extent[0], g_SpotLightList[0]->right_extent[0], g_SpotLightList[0]->left_extent[120], g_SpotLightList[0]->right_extent[120]
end
cont
end

printf "extent probe armed (10 frames per focus transition, 90 max)\n"
printf "alt-tab away, pause, alt-tab back -- three or four times\n"
