# D3D7 per-vertex fog — is applying it right, on one frame.
#
# THE TERM. buildTLVertex (tridx7, 0x100044b0) computes
#
#     iVar3 = 0xff;
#     if (render_flags & 8) iVar3 = 0xff - (src->a >> 8);   // bit 3 = SOLIDALPHA
#     out->specular = iVar3 << 0x18;                        // ALPHA byte only
#
# and D3D7 with FOGENABLE=TRUE + FOGTABLEMODE=NONE reads that byte as the fog
# factor: C = f*C + (1-f)*FOGCOLOR, f = specA/255. GL's secondary colour is 3
# components, so the byte never reached the driver and the term was dropped
# whole. Fixed function cannot carry it at all; the shader can.
#
# IT IS NOT A SMALL TERM. Measured over 4.75M vertices on the combo carrying 97%
# of all polygons:
#
#     0x2cd TEX|GOURAUD|SOLIDALPHA|ZTEST|ZWRITE|VTXRGB
#       specA min 15  mean 125.8  max 255   != 255 on 4485570/4752527 (94.4%)
#
# WHY MEASURE RATHER THAN JUST SHIP IT. Two facts that cannot both be simply
# true: the engine sets this on 94% of vertices at mean 126/255, yet the
# accelerated image ALREADY matches software to 1.0076 whole-frame with the term
# dropped. Applying it must therefore move the image somewhere — and "toward
# software" and "away from software" are opposite verdicts. research/17 phase 1
# was built on exactly this kind of unmeasured inference and had to be reverted.
#
# So: same frame, same geometry, one uniform apart.
#   /tmp/vfog_0.ppm   term dropped   — today's behaviour, matches software
#   /tmp/vfog_1.ppm   term applied
#
# Then capture software at the same spot (software_reference_capture.gdb) and see
# which one it lands on. Compare whole-region means and matched percentiles,
# never a differing-pixels mask — see research/13.
#
# Usage:
#   rm -f /tmp/vfog_*.ppm
#   ... reach a scene with accel + the OpenGL renderer, hold still ...
#   scripts/Bash/dbg.sh clear
#   scripts/Bash/dbg.sh probe research/17-shader_renderer_migration/vertex_fog_ab.gdb
#
# Probe hygiene: never name a convenience variable $bl/$bh/$bx/$bp/$sp/$si/$di/$ps
# (x86 registers), and no continuations inside an `if` nested in `commands`.

delete

set $vf_tick = 0
set $vf_shot = 0

# SDL_GL_SwapWindow, not a render function: research/13 has four consecutive
# dumps of an unchanged scene coming back as three distinct images when captured
# from an arbitrary mid-frame pause. It is also the one point present in BOTH
# software and accelerated modes, so the software reference is comparable.
break SDL_GL_SwapWindow
commands
silent
set $vf_tick = $vf_tick + 1
if $vf_tick % 12 == 0 && $vf_shot < 2
  set nocturne_gl_vertex_fog = $vf_shot
end
if $vf_tick % 12 == 6 && $vf_shot < 2
  eval "call (int)nocturne_dump_frontbuffer(\"/tmp/vfog_%d.ppm\")", $vf_shot
  printf "[vertex fog %d captured @tick %d]\n", $vf_shot, $vf_tick
  set $vf_shot = $vf_shot + 1
end
if $vf_shot == 2
  set nocturne_gl_vertex_fog = 0
end
cont
end

printf "vertex fog A/B armed — hold still for ~24 frames\n"
printf "  /tmp/vfog_0.ppm term dropped   /tmp/vfog_1.ppm term applied\n"
