# Measure the env pass in REAL software mode (g_UseExternalRenderer == 0,
# g_UseDirect3D == 0), not the mixed-mode forcing done from an accelerated
# process -- that only flipped one flag while bit depth, screen buffers and
# palette conversion were all still accel-configured, so its numbers say
# nothing about this path.
#
# Stage 1: is the env pass reached at all, which emit path does it take, and
# what state does the software rasteriser see? Function-level counters only --
# per-scanline or per-pixel breakpoints freeze the game here.

delete

set $q_env    = 0
set $q_dest   = 0
set $q_alpha  = 0
set $q_inenv  = 0
set $q_shown  = 0

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:24
commands
silent
set $q_env = $q_env + 1
set $q_inenv = 1
if $q_shown < 3
  set $q_shown = $q_shown + 1
  printf "[SW ENV #%d] count=%d alpha=%d render_mode=%d skipnorm=%d\n", $q_shown, count, alpha, g_CGamePtr->render_mode, this_ptr->skip_normal_normalization
  printf "            texidx=%d texdim=%d texbits=%d opacity=%p blend=%d curalpha=%d bpp=%d\n", g_CurrentTextureIndex, g_CurrentTextureDimension, g_TextureBits, g_CurrentTextureOpacityData, g_BlendMode, g_CurrentAlphaValue, g_BitsPerPixel
end
cont
end

break CDemonSet_renderEnvMapTriangles_FUN_005702b0.keep.cpp:154
commands
silent
set $q_inenv = 0
cont
end

break engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0048b970
commands
silent
if $q_inenv == 1
  set $q_dest = $q_dest + 1
end
cont
end

break engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0
commands
silent
if $q_inenv == 1
  set $q_alpha = $q_alpha + 1
end
cont
end

printf "software-mode env probe armed: $q_env / $q_dest / $q_alpha\n"
