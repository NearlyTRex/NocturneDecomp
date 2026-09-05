# Feasibility check for the general fix: move the lightmap composite to AFTER
# the hardware draws, reusing the existing MMX blend rather than re-deriving it
# on the GPU (which is not realistic -- the blend needs a 64K-entry lookup,
# 16-bit signed multiplies and a bias, and our shim is fixed-function GL).
#
# Plan: CGame::processFrame already locks the frame a SECOND time at line 130
# (for the 2D HUD) and unlocks at line 363. Under acceleration that lock does a
# GL->CPU readback, which should by then contain BOTH the CPU composite and the
# hardware draws. If so, applying the grid in place there costs no extra
# transfer, and matches software's ordering (composite last, HUD not lightmapped
# in either path).
#
# Two things must hold, and both are measured here rather than assumed:
#   1. the readback at line 130 contains the hardware draws
#      -> the window region should read the OVER-BRIGHT value (max ~56),
#         not the composite's correct 22
#   2. the buffer geometry is known
#      -> rows/pitch of the locked surface, and whether g_ScreenBufferArray
#         addresses the full screen or only the 640x480 camera area
#
# Getting (2) wrong would corrupt the frame, so it is measured before any code
# is written.

delete

set $q_done = 0

break CGame_processFrame_FUN_004da100.keep.cpp:131
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
      set $q_px = ((unsigned int *)g_ScreenBufferArray[72 + $q_r * 4])[297 + $q_c * 4]
      set $q_l = (($q_px & 0xff) + (($q_px >> 8) & 0xff) + (($q_px >> 16) & 0xff)) / 3
      set $q_sum = $q_sum + $q_l
      set $q_n = $q_n + 1
      if $q_l > $q_max
        set $q_max = $q_l
      end
      set $q_c = $q_c + 1
    end
    set $q_r = $q_r + 1
  end
  printf "[POST-LOCK #%d] window mean=%d max=%d | screen=%dx%d window=%dx%d fb=%dx%d bpp=%d\n", $q_done, $q_sum / $q_n, $q_max, g_ScreenWidth, g_ScreenHeight, g_WindowWidth, g_WindowHeight, g_CDemonCameraInstance.framebuffer_width, g_CDemonCameraInstance.framebuffer_height, g_BitsPerPixel
  printf "               row0=%p row1=%p rowdelta=%d  row479=%p row480=%p\n", g_ScreenBufferArray[0], g_ScreenBufferArray[1], (char *)g_ScreenBufferArray[1] - (char *)g_ScreenBufferArray[0], g_ScreenBufferArray[479], g_ScreenBufferArray[480]
end
cont
end

printf "post-pass feasibility probe armed\n"
