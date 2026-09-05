# Svetlana's blades — force a textured render state for the env-map draw.
#
# Measured: renderEnvMapTriangles never writes g_RenderStateFlags. It sets alpha
# and blend mode only, so it draws with whatever the previous call left behind:
#
#   ENV  path: 0x000002e7  or  0x000000c0
#   LIST path: 0x00000000, 0x000000c0, 0x000002cd
#
# Against the verified bit map (research/02-.../RENDER_STATE_FLAGS_VERIFIED.md):
#
#   0x2e7 = TEX_ENABLE | FORCE_SOLID_LOOP | GOURAUD | READ_DEST | DEPTH_TEST
#           | DEPTH_WRITE | PER_VERTEX_RGB
#   0x2cd = TEX_ENABLE | GOURAUD | FOG | DEPTH_TEST | DEPTH_WRITE | PER_VERTEX_RGB
#   0x0c0 = DEPTH_TEST | DEPTH_WRITE          (no texture bit at all)
#
# 0x002 is FORCE_SOLID_LOOP — "the untextured / solid loop selector", nothing to
# do with alpha blending despite its old name. So the sphere-mapped overlay is
# being drawn SOLID rather than textured, and sometimes with no texture bit set.
# The software rasteriser's solid path yields plain grey, which is what software
# shows; tridx7's applyRenderState maps the same bits onto D3D states, which is
# where it goes wrong.
#
# This forces a textured, non-solid state for the env draw only:
#   clear 0x002 (FORCE_SOLID_LOOP), set 0x001 (TEX_ENABLE)
#
#   garbage GONE     -> the inherited render state is the cause
#   garbage REMAINS  -> the flags are read again deeper in and this set does not
#                       survive to drawPolygon2
#
# Light by design: fires twice per frame, no loops. Per-triangle probes on this
# path throttle the game until it looks frozen.
#
# Probe hygiene: prefix convenience variables (avoid every x86 register name),
# and verify parameter names against the Signature comment before using them in
# a printf — an unknown name aborts the block before `cont` and stops the game.

delete

set $ff_n = 0

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
set $ff_n = $ff_n + 1
set g_RenderStateFlags.dword = (g_RenderStateFlags.dword & ~0x002) | 0x001
cont
end

printf "env draw forced to textured, non-solid render state\n"
