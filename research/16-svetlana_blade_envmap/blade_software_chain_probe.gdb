# Does the software env pass execute, or is it only being discarded by the
# GL composite?
#
# Forcing g_UseExternalRenderer=0 for renderEnvMapTriangles makes the blades
# show only the pass-1 model texture -- the env overlay disappears. Two
# explanations, and they need different fixes:
#
#   (a) the software rasteriser DOES write the pixels, but in accelerated mode
#       those CPU-framebuffer writes are thrown away by the CPU/GL composite
#       split -- a confound of this mixed-mode test, not a bug
#   (b) the software rasteriser never rasterises anything -- a real defect in
#       the software env path, which is what the README saw in a full software
#       run and mislabelled "software is clean"
#
# Counting the chain separates them. If the scanline function runs and clears
# its degenerate-span guard, pixels were produced and (a) holds. If the counts
# die partway down the chain, (b) holds and the count says exactly where.
#
# Chain: renderEnvMapTriangles -> renderDestReadBlendPoly -> clipAndFillPoly
#        -> g_ScanlineRenderFunc == renderMMXPerspectiveScanline32

delete

set $q_saved   = -1
set $q_env     = 0
set $q_poly    = 0
set $q_clip    = 0
set $q_scan    = 0
set $q_span    = 0
set $q_inenv   = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_saved = g_UseExternalRenderer
set g_UseExternalRenderer = 0
set $q_inenv = 1
set $q_env = $q_env + 1
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

break engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0048b970
commands
silent
if $q_inenv == 1
  set $q_poly = $q_poly + 1
end
cont
end

break engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
commands
silent
if $q_inenv == 1
  set $q_clip = $q_clip + 1
end
cont
end

# entry of the software scanline renderer
break renderMMXPerspectiveScanline32_FUN_005b4031.keep.cpp:56
commands
silent
if $q_inenv == 1
  set $q_scan = $q_scan + 1
end
cont
end

# past the `if (pixel_count <= 0) return;` guard -- a real span of pixels
break renderMMXPerspectiveScanline32_FUN_005b4031.keep.cpp:62
commands
silent
if $q_inenv == 1
  set $q_span = $q_span + 1
end
cont
end

printf "software-chain probe armed: env/poly/clip/scan/span\n"
