# Where does the extra light enter? Composite OUTPUT vs PRESENTED frame, accel only.
#
# Established: the composite's three inputs are identical between software and
# acceleration (source bit-identical, fog bit-identical, lightmap diffmax 2 and
# identical over the window). Same inputs, same shared code -> same output. And
# the shim's upload replaces rather than blends (GL_BLEND off, GL_REPLACE,
# Color4f(1,1,1,1)). So the excess enters somewhere after the composite.
#
# This pins it without needing software mode at all: sample the composite's own
# output (g_ScreenBufferArray) over the window region, in accel, and compare
# against the presented frame measured from the same run.
#
#   composite output ~= 28 (software/retail value) -> the excess is added AFTER
#       the composite: DLL draws or the GL present path. Fix belongs there.
#   composite output ~= 56                          -> the composite itself
#       writes brighter under accel despite identical inputs; look at its
#       destination stride / scale_factor / bpp handling.
#
# unlockFrame runs immediately after compositeLightmapToFramebuffer in
# lockAndRenderToBuffer, so breaking there samples the finished composite.
#
# Window region in 640x480 frame coords: rows 71..134, cols 296..375.

delete

set $q_done = 0

break engine_special_cpp_unlockFrame_FUN_005b7250
commands
silent
if $q_done < 3
  set $q_done = $q_done + 1
  set $q_sum = 0
  set $q_max = 0
  set $q_n   = 0
  set $q_r = 0
  while $q_r < 16
    set $q_c = 0
    while $q_c < 16
      set $q_row = 72 + $q_r * 4
      set $q_col = 297 + $q_c * 4
      set $q_px = ((unsigned int *)g_ScreenBufferArray[$q_row])[$q_col]
      set $q_b = $q_px & 0xff
      set $q_g = ($q_px >> 8) & 0xff
      set $q_rr = ($q_px >> 16) & 0xff
      set $q_l = ($q_b + $q_g + $q_rr) / 3
      set $q_sum = $q_sum + $q_l
      set $q_n = $q_n + 1
      if $q_l > $q_max
        set $q_max = $q_l
      end
      set $q_c = $q_c + 1
    end
    set $q_r = $q_r + 1
  end
  printf "[COMPOSITE OUT #%d] window mean=%d max=%d (n=%d) | d3d=%d ext=%d\n", $q_done, $q_sum / $q_n, $q_max, $q_n, g_UseDirect3D, g_UseExternalRenderer
end
cont
end

printf "composite-output probe armed (3 samples, accel)\n"
