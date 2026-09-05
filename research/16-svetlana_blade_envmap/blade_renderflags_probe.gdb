# Svetlana's blades — what render state does the accelerated draw actually use?
#
# The artefact is now known to be ACCELERATED-ONLY: with the UV fixes in place the
# blade renders plain grey in software, and the garbage returns on switching to
# the external renderer at the SAME resolution. So it is not the primitive data
# (measured healthy), not the UVs, not the texture, not the lighting.
#
# The one structural difference never measured:
#
#   void renderFaceListOrEnvMap(this, faces, count, flags) {
#       ... if (env path) renderEnvMapTriangles(this, faces, count, 0xffff);   // flags DROPPED
#       ... else          renderFaceList(renderer, faces, count, flags);       // flags forwarded
#   }
#
# On the accelerated path those bits matter: clipPolygonToViewFrustum passes
# g_RenderStateFlags.dword straight into drawPolygon2, which is the DLL entry
# point. If the env draw runs with whatever g_RenderStateFlags happens to hold —
# rather than the flags its caller computed for this geometry — the DLL selects
# the wrong texture, blend or shading, and the software rasteriser may simply not
# consult the same bits. That would be accelerated-only by construction.
#
# Deliberately light: both breakpoints fire only a couple of times per frame, and
# nothing loops. Per-triangle probes on this path throttle the game until it
# looks frozen (see README.md).
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them. And VERIFY EVERY PARAMETER NAME against
# the function's Signature comment before putting it in a printf: an unknown name
# aborts the commands block before `cont`, which stops the game dead at the
# breakpoint and looks exactly like a hang. renderFaceList takes
# (this_ptr, face_array, face_count, render_flags) — not count/flags.

delete

set $rf_env = -1
set $rf_lst = -1

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
if g_RenderStateFlags.dword != $rf_env
  printf "[ENV  path] g_RenderStateFlags=0x%08x  count=%d alpha=%d mode=%d ext=%d\n", g_RenderStateFlags.dword, count, alpha, g_CGamePtr->render_mode, g_UseExternalRenderer
  set $rf_env = g_RenderStateFlags.dword
end
cont
end

break engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170
commands
silent
if g_RenderStateFlags.dword != $rf_lst
  printf "[LIST path] g_RenderStateFlags=0x%08x  face_count=%d render_flags=0x%08x ext=%d\n", g_RenderStateFlags.dword, face_count, render_flags, g_UseExternalRenderer
  set $rf_lst = g_RenderStateFlags.dword
end
cont
end

printf "render-flags probe armed\n"
