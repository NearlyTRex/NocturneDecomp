# What does hardware draw on top of the rose window?
#
# Measured, all in one accelerated run:
#   composite OUTPUT (g_ScreenBufferArray) window mean=21 max=22   <- correct
#   PRESENTED frame                        window mean=20.53 max=56 <- 2x on max
# and the shim's scene upload REPLACES (GL_BLEND off, GL_REPLACE, Color4f 1,1,1,1).
# So the excess is added by the hardware draws that follow beginScene().
#
# The window occupies rows 71..134, cols 296..375 in 640x480 frame coords.
# buildTLVertex converts screen_x/screen_y as x * 1/65536, so the DLL receives
# 16.16 fixed point in that same 640x480 space: multiply the pixel bounds by
# 65536 to compare directly against projected_vertex.screen_x/screen_y.
#
# Counts, per frame, at APIDLLdrawPolygon2:
#   total  - every hardware polygon
#   inwin  - polygons whose FIRST vertex lands inside the window box
# and prints the render flags of the first few that hit, since an additive
# blend there would explain a doubled peak with an unchanged mean.

delete

set $q_tot   = 0
set $q_in    = 0
set $q_shown = 0
set $q_fr    = 0

break dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0
commands
silent
set $q_tot = $q_tot + 1
set $q_x = (vertex_array[0]->projected_vertex).screen_x
set $q_y = (vertex_array[0]->projected_vertex).screen_y
if $q_x > 19398656 && $q_x < 24576000
  if $q_y > 4653056 && $q_y < 8781824
    set $q_in = $q_in + 1
    if $q_shown < 10
      set $q_shown = $q_shown + 1
      printf "  [HIT] px %d,%d flags=0x%x tex=%d | blend_mode=%d SRCBLEND=%d DESTBLEND=%d ABE=%d ATE=%d TMB=%d premul=%d\n", $q_x / 65536, $q_y / 65536, render_flags, g_CurrentTextureIndex, *g_ExternalRendererBridge.blend_mode, g_RenderStateValueCache[0x13], g_RenderStateValueCache[0x14], g_RenderStateValueCache[0x1b], g_RenderStateValueCache[0xf], g_RenderStateValueCache[0x15], g_PremultiplyColorAndAlpha
    end
  end
end
cont
end

break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
set $q_fr = $q_fr + 1
if $q_fr < 12
  printf "[FRAME %d] hw polys=%d  landing in window box=%d\n", $q_fr, $q_tot, $q_in
end
set $q_tot = 0
set $q_in  = 0
cont
end

printf "window hardware-draw probe armed (accel)\n"
