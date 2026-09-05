# Svetlana's blades — is calculateSurfaceNormal's side effect the problem?
#
# Bisect results so far (all confirmed on screen):
#   return at function entry            -> garbage GONE
#   force every UV to one texel         -> garbage REMAINS
#   keep captureTexture, emit nothing   -> garbage GONE
# so the emitted polygons are the source and the sphere-map sampling is not.
#
# renderEnvMapTriangles does something strange with the plane equation when
# skip_normal_normalization is set — which CSvetlana::renderOpaque sets for her
# whole render, and which is NOT set for other actors:
#
#   if (skip_normal_normalization != 0)
#       calculateSurfaceNormal(g_TransformedVertexArray, &SStack_118);   // compute
#   ... sphere-map UVs ...
#   if (skip_normal_normalization != 0)
#       SStack_118.base.surface_normal.{A,B,C,D}.i = 0;                  // discard
#
# Verified faithful in the asm: CMP dword [EAX + 0x15ae84], 0 then four
# zero-stores to [ESP+0x8..0x14], which are surface_normal.{A,B,C,D} (the
# primitive begins at [ESP+0x4]; the u/v stores land at +0x1c/+0x20 with stride
# 0xc, fixing the layout).
#
# Since the result is thrown away, the call can only matter for a side effect on
# the primitive — vertex winding, for instance. And it runs on Svetlana's draws
# and not on other actors', which is exactly the shape of a character-specific
# artefact.
#
#   garbage GONE     -> the call's side effect is the source
#   garbage REMAINS  -> it is inert here; the defect is in the emit itself
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete
set confirm off

set $sn_n = 0

break engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
commands
silent
set $sn_n = $sn_n + 1
return
cont
end

printf "calculateSurfaceNormal suppressed\n"
