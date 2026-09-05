# What the tridx7 DLL actually produces for the env-map draw, vs. a normal draw.
#
# Everything game-side has been verified identical to a draw that renders
# correctly, so this samples one step further down: buildTLVertex, where the
# game's SRenderVertex becomes the D3D SScreenVertex that reaches the device.
#
# Gate is the game-side g_CurrentTextureIndex: 147 == BACKGND.RAW == the env
# map. Anything else is a normal draw and is sampled for comparison.
#
# Sampled (not per-vertex) and burst-limited -- a breakpoint on every emitted
# vertex throttles the render loop until the game looks frozen.

delete

set $q_env_n   = 0
set $q_norm_n  = 0
set $q_tick    = 0

break dll_dx7_cpp_buildTLVertex_FUN_100044b0
commands
silent
set $q_tick = $q_tick + 1
if g_CurrentTextureIndex == 147
  if $q_env_n < 12
    set $q_env_n = $q_env_n + 1
    printf "[ENV  #%d] flags=0x%x dx7slot=%d | src rgba=%d,%d,%d,%d uv=%d,%d\n", $q_env_n, render_flags, g_DX7CurrentTextureIndex, src->r, src->g, src->b, src->a, src->u, src->v
    printf "           out diffuse=0x%08x specular=0x%08x uv=%g,%g xy=%g,%g z=%g rhw=%g\n", out->diffuse, out->specular, out->u, out->v, out->x, out->y, out->z, out->rhw
    printf "           LightAlpha=%d LightOvf=%d curAlpha=%d blend=%d quality=%d lighting=%d\n", g_LightingAlpha, g_LightingOverflow, *g_ExternalRendererBridge.current_alpha, *g_ExternalRendererBridge.blend_mode, *g_ExternalRendererBridge.rendering_quality, *g_ExternalRendererBridge.current_lighting
  end
end
if g_CurrentTextureIndex != 147
  if $q_norm_n < 6
    if $q_tick % 997 == 0
      set $q_norm_n = $q_norm_n + 1
      printf "[NORM #%d] flags=0x%x dx7slot=%d gametex=%d | src rgba=%d,%d,%d,%d uv=%d,%d\n", $q_norm_n, render_flags, g_DX7CurrentTextureIndex, g_CurrentTextureIndex, src->r, src->g, src->b, src->a, src->u, src->v
      printf "           out diffuse=0x%08x specular=0x%08x uv=%g,%g xy=%g,%g z=%g rhw=%g\n", out->diffuse, out->specular, out->u, out->v, out->x, out->y, out->z, out->rhw
      printf "           LightAlpha=%d LightOvf=%d curAlpha=%d blend=%d quality=%d lighting=%d\n", g_LightingAlpha, g_LightingOverflow, *g_ExternalRendererBridge.current_alpha, *g_ExternalRendererBridge.blend_mode, *g_ExternalRendererBridge.rendering_quality, *g_ExternalRendererBridge.current_lighting
    end
  end
end
cont
end

printf "DLL TL-vertex probe armed (env gate: g_CurrentTextureIndex==147)\n"
