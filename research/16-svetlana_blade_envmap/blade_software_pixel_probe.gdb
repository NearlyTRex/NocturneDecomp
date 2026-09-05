# What colour does the SOFTWARE rasteriser actually compute for the env pass?
#
# The mixed-mode test (env pass forced to g_UseExternalRenderer=0 inside an
# accelerated session) rasterises 11k real spans but shows nothing on screen,
# because CPU-framebuffer writes are discarded by the CPU/GL composite. That
# makes the screen useless as an oracle -- but the pixel the software path
# computes is readable directly at its write site, and that is the number the
# comparison actually needs.
#
# Line 410 is Loop A's framebuffer store (textured, no opacity map, always
# alpha-blends) -- the loop the env draw takes.
#
# If out_pix comes out near-black, software and accel agree and the README's
# "software is clean / plain grey" row is simply wrong. If it comes out mid-grey,
# the divergence is real and lives in this loop's inputs.

delete

set $q_saved = -1
set $q_inenv = 0
set $q_n     = 0
set $q_sum   = 0
set $q_max   = 0
set $q_min   = 255
set $q_dark  = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_saved = g_UseExternalRenderer
set g_UseExternalRenderer = 0
set $q_inenv = 1
cont
end

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:154
commands
silent
if $q_saved != -1
  set g_UseExternalRenderer = $q_saved
end
set $q_inenv = 0
cont
end

# Loop A's store. Sample the green channel as a luma proxy (r/g/b are near
# equal here -- the vertex colour is grey and the env map is desaturated).
break renderMMXPerspectiveScanline32_FUN_005b4031.keep.cpp:410
commands
silent
if $q_inenv == 1
  set $q_n = $q_n + 1
  set $q_g = (out_pix >> 8) & 0xff
  set $q_sum = $q_sum + $q_g
  if $q_g > $q_max
    set $q_max = $q_g
  end
  if $q_g < $q_min
    set $q_min = $q_g
  end
  if $q_g < 32
    set $q_dark = $q_dark + 1
  end
  if $q_n < 6
    printf "[SWPIX #%d] out=0x%08x  tex_pix=0x%08x  alpha_idx=%d\n", $q_n, out_pix, pix, alpha_idx
  end
end
cont
end

printf "software pixel probe armed (Loop A store)\n"
