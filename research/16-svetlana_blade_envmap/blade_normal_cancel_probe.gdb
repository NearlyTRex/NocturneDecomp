# Do the blade's dead vertices sit on faces with opposing normals?
#
# The one inferred link in the chain. Established by measurement: lightVerticies
# accumulates face normals into their vertices unconditionally, so a slot that
# reads exactly 0.0 either is referenced by no face or had its normals cancel.
# Vertices 496/510/511/529 are persistently zero and 499/502/512/514/517/519/
# 524/525 come and go -- intermittency rules out "never referenced", leaving
# cancellation. That is what a flat double-sided blade produces when its front
# and back faces share (are welded to) the same edge vertices.
#
# Confirm it: find every face in the covering call that touches one of the
# persistent dead vertices and print its surface normal. If they come in +/-
# pairs summing to ~0, the inference holds, and the era-correct fix is to give
# those vertices one adjacent face's normal -- which is in the same space as
# branch A -- rather than the eye-to-vertex direction, which is not.
#
# WHERE TO BREAK. Not at function entry, for two reasons:
#   1. lightVerticies computes the face normals in a loop INSIDE itself, before
#      the memset. At entry surface_normal still holds whatever the previous
#      user of that face buffer left, which reads as (0, 0, -nan).
#   2. g_VertexNormalArray at entry holds the PREVIOUS call's accumulation.
# Line 248 is the first statement after the accumulate loop, so by then the
# normals are computed, the memset has run, and the array holds this call's
# result.
#
# HOW TO IDENTIFY THE RIGHT CALL. Vertex indices are per-model and the scratch
# array is shared, so "some face touches index 496" is true of the cloth too
# (vertex_count=590, quads) and is not a usable gate. Gate on the outcome
# instead: the covering call is the one that leaves the four target vertices at
# exactly zero. Self-validating, and it cannot fire on the cloth or the gargoyle.
#
# ONE-SHOT: scanning tri_count faces in a gdb loop stalls the render loop for
# seconds, so it disarms itself once it has a match.

delete

set $q_seen_env = 0
set $q_done     = 0

break core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
commands
silent
set $q_seen_env = 1
cont
end

break CDemonSet_lightVerticies_FUN_0056eac0.keep.cpp:248
commands
silent
if $q_seen_env == 1 && $q_done == 0 && vertex_count > 490
  set $q_dead = 0
  if g_VertexNormalArray[496].x == 0 && g_VertexNormalArray[496].y == 0 && g_VertexNormalArray[496].z == 0
    if g_VertexNormalArray[510].x == 0 && g_VertexNormalArray[511].x == 0 && g_VertexNormalArray[529].x == 0
      set $q_dead = 1
    end
  end
  if $q_dead == 1
    set $q_done = 1
    set $q_stride = 60
    if vertices_per_face == 4
      set $q_stride = 72
    end
    printf "\n=== covering call: vertex_count=%d tri_count=%d vertices_per_face=%d stride=%d\n", vertex_count, tri_count, vertices_per_face, $q_stride
    set $q_i = 0
    set $q_hits = 0
    set $q_sx = 0.0
    set $q_sy = 0.0
    set $q_sz = 0.0
    while $q_i < tri_count
      set $q_p = (SMRGLPrimitiveTriangle *)((char *)face_data + $q_i * $q_stride)
      set $q_v0 = $q_p->vertices[0].vertex_index
      set $q_v1 = $q_p->vertices[1].vertex_index
      set $q_v2 = $q_p->vertices[2].vertex_index
      set $q_v3 = -1
      if $q_p->base.base.count == 4
        set $q_v3 = ((SMRGLPrimitiveQuad *)$q_p)->vertices[3].vertex_index
      end
      set $q_t = 0
      if $q_v0 == 496 || $q_v1 == 496 || $q_v2 == 496 || $q_v3 == 496
        set $q_t = 496
      end
      if $q_v0 == 510 || $q_v1 == 510 || $q_v2 == 510 || $q_v3 == 510
        set $q_t = 510
      end
      if $q_v0 == 511 || $q_v1 == 511 || $q_v2 == 511 || $q_v3 == 511
        set $q_t = 511
      end
      if $q_v0 == 529 || $q_v1 == 529 || $q_v2 == 529 || $q_v3 == 529
        set $q_t = 529
      end
      if $q_t != 0
        set $q_hits = $q_hits + 1
        printf "v%d  face %4d cnt=%d verts=(%d,%d,%d,%d)  n=(%g, %g, %g)\n", $q_t, $q_i, $q_p->base.base.count, $q_v0, $q_v1, $q_v2, $q_v3, $q_p->base.surface_normal.A.f, $q_p->base.surface_normal.B.f, $q_p->base.surface_normal.C.f
        if $q_t == 496
          set $q_sx = $q_sx + $q_p->base.surface_normal.A.f
          set $q_sy = $q_sy + $q_p->base.surface_normal.B.f
          set $q_sz = $q_sz + $q_p->base.surface_normal.C.f
        end
      end
      set $q_i = $q_i + 1
    end
    printf "=== %d faces touch the persistent dead vertices\n", $q_hits
    printf "=== vertex 496 face-normal sum = (%g, %g, %g)   <- ~0 confirms cancellation\n", $q_sx, $q_sy, $q_sz
    printf "=== array now: v496=(%g,%g,%g)  live contrast v509=(%g,%g,%g)\n\n", g_VertexNormalArray[496].x, g_VertexNormalArray[496].y, g_VertexNormalArray[496].z, g_VertexNormalArray[509].x, g_VertexNormalArray[509].y, g_VertexNormalArray[509].z
    disable
    printf "=== probe disarmed\n"
  end
end
cont
end

printf "normal-cancellation probe armed (one-shot, gated on the dead vertices being zero)\n"
