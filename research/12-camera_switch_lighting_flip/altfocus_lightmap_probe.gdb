# Bug 2b — watch the spot light's baked lightmap across a focus regain.
#
# Established: the flash is position 2 of every regain (never a loss), one
# surface only (the chapel rose window), and it is the DIM frame. The window's
# stained glass is not in the backdrop art -- CAS1.RAW renders it as a dark
# opening with a stone rim -- so the colour is projected at render time from the
# spot light's 256x256 `precomputed_lighting_textures` lightmap.
#
# setCameraView runs freeMasterZBuffer -> (rebuild) -> allocMasterZBuffer ->
# precomputeLight unconditionally, even when the camera has not changed. So:
# is that lightmap null, stale, or refilled a frame late on the flash frame?
#
# Per frame this records the light's buffer pointers plus a sparse checksum of
# the lightmap (64 samples at a 1024-byte stride -- a full 65536-byte sum in a
# gdb loop would stall the render loop).
#
#   checksum changes on position 2 only  -> the lightmap is rebuilt late/wrong
#   checksum constant, pointers constant -> the lightmap is fine and the dip is
#                                           downstream, in how it is applied
#   pointer changes / goes null          -> the free/alloc cycle is the culprit
#
# Usage:
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/12-camera_switch_lighting_flip/altfocus_lightmap_probe.gdb
#   ... alt-tab away, pause, alt-tab back; three or four times ...
#   scripts/Bash/dbg.sh log-full | grep -E '^\[(FOCUS|APPLY|L)'
#
# Probe hygiene: no $bl/$bh/$bx/$bp/$sp/$si/$di/$ps (x86 registers); no `\`
# continuations inside an `if` nested in `commands`; and never dereference a
# possibly-null pointer inside a printf -- a failed printf aborts the commands
# block before `cont` and freezes the game at the breakpoint.

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
set $q_burst = 12
printf "[FOCUS #%d -> active=%d] arming at shot %d\n", $q_ev, $q_dir, $q_shot + 1
cont
end

break core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
commands
silent
printf "[APPLY at shot %d] spots=%d\n", $q_shot, g_SpotLightCount
cont
end

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
if $q_burst > 0 && $q_shot < 100
  set $q_burst = $q_burst - 1
  set $q_shot = $q_shot + 1
  set $q_sum = 0
  set $q_nz  = 0
  set $q_lm  = (unsigned char *)0
  if g_SpotLightCount > 0
    set $q_lm = g_SpotLightList[0]->precomputed_lighting_textures
  end
  if $q_lm != 0
    # 8x8 grid over the CENTRE of the 256x256 map. A flat stride is wrong here:
    # any multiple of 256 samples one column, and column 0 is the unlit margin,
    # so the checksum reads a constant 0 no matter what the light does. Verified
    # directly: row 0 col 0 is 0x00 while rows 64/128/200 mid-map hold 0x09-0x1b.
    set $q_r = 0
    while $q_r < 8
      set $q_c = 0
      while $q_c < 8
        set $q_b = $q_lm[(48 + $q_r * 20) * 256 + (48 + $q_c * 20)]
        set $q_sum = $q_sum + $q_b
        if $q_b != 0
          set $q_nz = $q_nz + 1
        end
        set $q_c = $q_c + 1
      end
      set $q_r = $q_r + 1
    end
  end
  printf "[L %03d ev=%d dir=%d pos=%d] spots=%d lm=%p sum=%d nz=%d/64\n", $q_shot, $q_ev, $q_dir, 12 - $q_burst, g_SpotLightCount, $q_lm, $q_sum, $q_nz
  if g_SpotLightCount > 0
    printf "        masterz=%p lmvis=%p enabled=%d texw=%d dirty?=%d\n", g_SpotLightList[0]->master_zbuffer, g_SpotLightList[0]->lightmap_visibility_bits, g_SpotLightList[0]->light_enabled_flag, g_SpotLightList[0]->texture_width, g_SpotLightList[0]->shadow_bounds_mode
  end
end
cont
end

printf "lightmap probe armed (12 frames per focus transition, 100 max)\n"
printf "alt-tab away, pause, alt-tab back -- three or four times\n"
