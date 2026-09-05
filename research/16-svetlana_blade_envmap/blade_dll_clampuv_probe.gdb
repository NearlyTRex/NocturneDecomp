# Simulate the texture addressing mode the DLL actually asked for.
#
# initDefaultRenderStates sets D3DRENDERSTATE_TEXTUREADDRESS (3) = 3
# (D3DTADDRESS_CLAMP), once, at device init. The GL shim drops that call
# because no texture is bound yet, setRenderStateCached never re-sends it, and
# surface_sync_texture hardcodes GL_REPEAT on every texture it creates -- so
# every texture wraps when the DLL wanted clamping.
#
# Only the env-map draw ever leaves 0..1: renderEnvMapTriangles clamps its
# sphere-map coordinates to 0..0xFFFF and THEN runs the seam fixup, which
# deliberately pushes a triangle's coordinates out of range to keep it
# continuous across the wrap. Under REPEAT those vertices sample the far side
# of BACKGND.RAW instead of smearing its edge texel.
#
# Clamping here is exactly what GL_CLAMP_TO_EDGE would do, so if the black
# artefacts go away the diagnosis is confirmed without touching the shim.
#
# Result to look for on screen:
#   black artefacts gone -> confirmed; fix is CLAMP in the shim
#   black artefacts stay -> addressing is innocent, look elsewhere

delete

set $q_hit    = 0
set $q_oor    = 0
set $q_show   = 0
set $q_umin   = 999
set $q_umax   = -999
set $q_vmin   = 999
set $q_vmax   = -999

# line 117 is the closing brace -- out->u (114) and out->v (115) are written by
# then, so this is the last word before the vertex reaches the device.
break buildTLVertex_FUN_100044b0.keep.cpp:117
commands
silent
if g_CurrentTextureIndex == 147
  set $q_hit = $q_hit + 1
  if out->u < $q_umin
    set $q_umin = out->u
  end
  if out->u > $q_umax
    set $q_umax = out->u
  end
  if out->v < $q_vmin
    set $q_vmin = out->v
  end
  if out->v > $q_vmax
    set $q_vmax = out->v
  end
  if out->u < 0 || out->u > 1 || out->v < 0 || out->v > 1
    set $q_oor = $q_oor + 1
    if $q_show < 10
      set $q_show = $q_show + 1
      printf "[OOR #%d] u=%g v=%g  (src uv=%d,%d)\n", $q_show, out->u, out->v, src->u, src->v
    end
  end
  if out->u < 0
    set out->u = 0
  end
  if out->u > 1
    set out->u = 1
  end
  if out->v < 0
    set out->v = 0
  end
  if out->v > 1
    set out->v = 1
  end
end
cont
end

printf "clamp-UV probe armed; run `dbg.sh cmd` on $q_hit/$q_oor for the tally\n"
