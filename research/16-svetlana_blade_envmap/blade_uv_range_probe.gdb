# Svetlana's blades — what sphere-map UVs actually reach the rasteriser?
#
# Confirmed by bisection: suppressing renderEnvMapTriangles removes the black
# artefacts entirely, so the sphere-mapped overlay is the source. The env map is
# g_EnvMapTexture = BACKGND.RAW, the room's own backdrop art (captureTexture is
# ensureTextureLoaded plus capture-list bookkeeping, NOT a framebuffer grab), so
# a UV outside 0..0xFFFF samples an unintended part of the scene painting.
#
# The primitive is emitted through one of TWO calls, chosen by `alpha`:
#
#   if (g_CGamePtr->render_mode == 2) alpha = g_CurrentAlphaValue << 8;
#   ...
#   if (alpha < 0xfde9) renderDestReadBlendPoly(...)   <- blade shine pass
#   else                renderAlphaBlendedPoly(...)    <- the other pass
#
# Both must be instrumented: which one runs depends on render_mode, and that
# differs between the software and accelerated paths. Breaking on only one of
# them silently reports zero samples.
#
# Measured progression on the reproducing scene:
#   as shipped        u [-34038..95760]  v [-24285..103392]  97.0 % out of range
#   direction halved  u [  -319..65356]  v [  4153.. 68123]   1.2 % out of range
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete

set $uv_n = 0
set $uv_umin = 999999999
set $uv_umax = -999999999
set $uv_vmin = 999999999
set $uv_vmax = -999999999
set $uv_out = 0
set $uv_tot = 0

define uvsample
  set $uv_n = $uv_n + 1
  set $uv_i = 0
  while $uv_i < 3
    set $uv_u = (int)(SStack_118.vertices[$uv_i].texture_u) >> 8
    set $uv_v = (int)(SStack_118.vertices[$uv_i].texture_v) >> 8
    set $uv_tot = $uv_tot + 1
    if $uv_u < $uv_umin
      set $uv_umin = $uv_u
    end
    if $uv_u > $uv_umax
      set $uv_umax = $uv_u
    end
    if $uv_v < $uv_vmin
      set $uv_vmin = $uv_v
    end
    if $uv_v > $uv_vmax
      set $uv_vmax = $uv_v
    end
    if $uv_u < 0 || $uv_u > 65535 || $uv_v < 0 || $uv_v > 65535
      set $uv_out = $uv_out + 1
    end
    set $uv_i = $uv_i + 1
  end
  if $uv_n % 300 == 0
    printf "[UV %d tris via %s] u=[%d..%d] v=[%d..%d] out %d/%d (%.2f%%) mode=%d\n", $uv_n, $arg0, $uv_umin, $uv_umax, $uv_vmin, $uv_vmax, $uv_out, $uv_tot, 100.0 * $uv_out / $uv_tot, g_CGamePtr->render_mode
  end
end

break core/set.cpp/CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:126
commands
silent
uvsample "destread"
cont
end

break core/set.cpp/CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:130
commands
silent
uvsample "alphablend"
cont
end

printf "blade UV range probe armed (both emit paths)\n"
