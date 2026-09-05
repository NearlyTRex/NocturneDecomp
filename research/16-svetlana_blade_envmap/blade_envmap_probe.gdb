# Svetlana's blades — black garbage on the env-mapped surface.
#
# The blades are sphere-mapped by CDemonSet::renderEnvMapTriangles. Its UVs are
# derived from the vertex normals, which is why the artefact tracks lighting:
#
#   u = ROUND(g_VertexNormalArray[v].x) + 0x8000
#   v = 0x8000 - ROUND(g_VertexNormalArray[v].y)
#
# unless skip_normal_normalization is set AND every component of that normal is
# under 1.0 in magnitude, in which case it falls back to the normalised
# eye-to-vertex direction instead.
#
# CSvetlana::renderOpaque sets g_CDemonSetPtr->skip_normal_normalization = 1 for
# her whole render, so any call here with that flag set is hers. Her second pass
# (blades only — part_indices[0] and [1], render_mode 2, alpha 48000) is the one
# to watch.
#
# What to look for, per face:
#   - normals with |component| that is neither ~unit nor ~fixed-point, i.e. the
#     `1.0 <=` test is picking the wrong branch for this model
#   - a large U or V SPAN across the three vertices of one triangle: the sphere
#     map then smears across the whole texture over a few pixels, which is what
#     reads as garbage
#   - U or V outside 0..0xFFFF after the seam fixup
#
# Already fixed and ruled out as the cause: the .keep declared the UV
# accumulators `uint`, making the first compare of each seam-fixup pair unsigned
# where the asm uses JLE/JGE (signed). Corrected to `int`; the artefact was
# unchanged, so that deviation was real but latent here.
#
# Probe hygiene: convenience-variable names must avoid every x86 register name
# ($bl, $cx, $ax, $si, ...) — prefix them.

delete

set $ev_n = 0

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
set $ev_n = $ev_n + 1
if $ev_n <= 12
  printf "[ENV #%d] count=%d alpha=%d render_mode=%d skipnorm=%d persprecip=%d curalpha=%d\n", $ev_n, count, alpha, g_CGamePtr->render_mode, this_ptr->skip_normal_normalization, g_PerspectiveReciprocal, g_CurrentAlphaValue
  set $ev_i = 0
  while $ev_i < 3
    set $ev_v = face_data->vertex_indices.vertex_index_0
    if $ev_i == 1
      set $ev_v = face_data->vertex_indices.vertex_index_1
    end
    if $ev_i == 2
      set $ev_v = face_data->vertex_indices.vertex_index_2
    end
    printf "    v%d idx=%-5d n=(%12.4f,%12.4f,%12.4f)  tv=(%d,%d,%d)\n", $ev_i, $ev_v, g_VertexNormalArray[$ev_v].x, g_VertexNormalArray[$ev_v].y, g_VertexNormalArray[$ev_v].z, g_TransformedVertexArray[$ev_v].x, g_TransformedVertexArray[$ev_v].y, g_TransformedVertexArray[$ev_v].z
    set $ev_i = $ev_i + 1
  end
end
cont
end

printf "blade env-map probe armed\n"
