# Svetlana's blades — which texture is bound when the env polygons are emitted?
#
# Accelerated-only artefact. captureTexture -> ensureTextureLoaded binds the env
# map for the DLL when g_UseExternalRenderer != 0:
#
#   if (g_UseExternalRenderer != 0) {
#       if (first load) updateTextureFromPalette(texture, g_CurrentPalette);
#       else            selectTextureFromPalette(texture, g_CurrentPalette);
#   }
#
# g_EnvMapTexture reads {type = 13, count = 147, "BACKGND.RAW"}, and
# ensureTextureLoaded writes the resolved cache index into both
# (texture->base).count and g_CurrentTextureIndex. So during an env draw
# g_CurrentTextureIndex should be BACKGND.RAW's index and stay there for all
# 76-78 emitted polygons.
#
# If it is something else at the emit, the hardware is drawing the sphere-mapped
# polygons with whatever texture was last bound — accel-only by construction, and
# consistent with every other elimination in README.md.
#
# Change-gated so it prints only on transitions: per-triangle probes on this path
# throttle the game until it looks frozen.
#
# Probe hygiene: prefix convenience variables (avoid every x86 register name),
# and verify parameter names against the Signature comment before using them in a
# printf — an unknown name aborts the block before `cont` and stops the game.

delete

set $tx_last = -1
set $tx_env = -1

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
if g_CurrentTextureIndex != $tx_env
  printf "[ENV entry] g_CurrentTextureIndex=%d  envmap.count=%d name=%s\n", g_CurrentTextureIndex, g_EnvMapTexture.base.count, g_EnvMapTexture.texture_name
  set $tx_env = g_CurrentTextureIndex
end
cont
end

break core/set.cpp/CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:130
commands
silent
if g_CurrentTextureIndex != $tx_last
  printf "[EMIT     ] g_CurrentTextureIndex=%d  (envmap.count=%d)\n", g_CurrentTextureIndex, g_EnvMapTexture.base.count
  set $tx_last = g_CurrentTextureIndex
end
cont
end

printf "texture-bound probe armed\n"
