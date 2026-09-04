# Mirror cull probe, filtered to the HERO's bounding box.
#
# The burst version sampled ~4 frames and never caught a survival, so this one
# runs continuously and logs only the local hero's box test during a mirror
# pass: match corners[0] against the live hero position (both in 1/256 fixed
# point) within a +/-2500 window (~9.8 world units). Every other actor's box
# is silent, so the log stays readable while the game keeps running.
#
# One line per face (which plane rejected it, or SURVIVED), one verdict line
# per test carrying the hero's facing — turn slowly through the window where
# the reflection appears and the transition shows up as RESULT 0 -> RESULT 1.

delete

set $in_tv   = 0
set $dumped  = 0
set $face    = 0
set $clips   = 0
set $tv_all  = 0
set $tv_hero = 0
set $hits    = 0

break core_dcamera_cpp_CDemonCamera_testVisibility_FUN_004544f0
commands
silent
set $in_tv = 0
set $tv_all = $tv_all + 1
if g_CDemonSetPtr != 0 && g_CDemonSetPtr->active_mirror != 0
  set $dx = corners[0].x - (int)(g_HeroActors[0]->base.base.location.position.x * 256)
  set $dy = corners[0].y - (int)(g_HeroActors[0]->base.base.location.position.y * 256)
  set $dz = corners[0].z - (int)(g_HeroActors[0]->base.base.location.position.z * 256)
  if $dx > -1000 && $dx < 1000 && $dy > -1000 && $dy < 1000 && $dz > -1000 && $dz < 1000
    set $in_tv   = 1
    set $face    = 0
    set $tv_hero = $tv_hero + 1
    printf "\n[HERO #%d] enter cam=(%d,%d,%d) scale=%d c0=(%d,%d,%d)\n", \
        $tv_hero, g_CameraOriginX, g_CameraOriginY, g_CameraOriginZ, \
        g_ProjectionScale, corners[0].x, corners[0].y, corners[0].z
    if $dumped == 0
      set $dumped = 1
      printf "  MTX r0=(%d,%d,%d) r1=(%d,%d,%d) r2=(%d,%d,%d)\n", \
          g_TransformMatrix.m[0].x, g_TransformMatrix.m[0].y, g_TransformMatrix.m[0].z, \
          g_TransformMatrix.m[1].x, g_TransformMatrix.m[1].y, g_TransformMatrix.m[1].z, \
          g_TransformMatrix.m[2].x, g_TransformMatrix.m[2].y, g_TransformMatrix.m[2].z
      printf "  MIR c1=(%.4f,%.4f,%.4f) c2=(%.4f,%.4f,%.4f)\n", \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner1.x, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner1.y, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner1.z, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner2.x, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner2.y, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner2.z
      printf "  MIR c3=(%.4f,%.4f,%.4f) c4=(%.4f,%.4f,%.4f)\n", \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner3.x, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner3.y, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner3.z, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner4.x, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner4.y, \
          g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner4.z
    end
  end
end
cont
end

break core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
commands
silent
if $in_tv == 1
  set $face  = $face + 1
  set $clips = 0
end
cont
end

# Plane coefficients printed for face 1 only — once per test, so we can see
# whether the plane set itself moves as the character turns.
break core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
commands
silent
if $in_tv == 1
  set $clips = $clips + 1
  if $face == 1
    printf "   plane %d: A=%9.5f B=%9.5f C=%9.5f D=%9.4f  in=%d\n", $clips, \
        clip_plane->A.f, clip_plane->B.f, clip_plane->C.f, clip_plane->D.f, \
        input_count
    if $clips == 1
      printf "     v0=(%8.2f,%8.2f,%8.2f) v1=(%8.2f,%8.2f,%8.2f)\n", \
          input_vertices[0].x, input_vertices[0].y, input_vertices[0].z, \
          input_vertices[1].x, input_vertices[1].y, input_vertices[1].z
      printf "     v2=(%8.2f,%8.2f,%8.2f) v3=(%8.2f,%8.2f,%8.2f)\n", \
          input_vertices[2].x, input_vertices[2].y, input_vertices[2].z, \
          input_vertices[3].x, input_vertices[3].y, input_vertices[3].z
      printf "     dot0=%10.4f dot1=%10.4f dot2=%10.4f dot3=%10.4f\n", \
          clip_plane->A.f*input_vertices[0].x + clip_plane->B.f*input_vertices[0].y + clip_plane->C.f*input_vertices[0].z + clip_plane->D.f, \
          clip_plane->A.f*input_vertices[1].x + clip_plane->B.f*input_vertices[1].y + clip_plane->C.f*input_vertices[1].z + clip_plane->D.f, \
          clip_plane->A.f*input_vertices[2].x + clip_plane->B.f*input_vertices[2].y + clip_plane->C.f*input_vertices[2].z + clip_plane->D.f, \
          clip_plane->A.f*input_vertices[3].x + clip_plane->B.f*input_vertices[3].y + clip_plane->C.f*input_vertices[3].z + clip_plane->D.f
    end
  end
end
cont
end

break CMirror_reflectAndClipPrimitive_FUN_00522310.keep.cpp:69
commands
silent
if $in_tv == 1
  set $hits = $hits + 1
  printf "  face %d SURVIVED all 5 planes, out=%d\n", $face, \
      g_MirrorOutputVertexCount
end
cont
end

break CMirror_reflectAndClipPrimitive_FUN_00522310.keep.cpp:71
commands
silent
if $in_tv == 1
  printf "  face %d rejected by plane %d (in=%d out=%d)\n", $face, $clips, \
      g_MirrorInputVertexCount, g_MirrorOutputVertexCount
end
cont
end

break CDemonCamera_testVisibility_FUN_004544f0.keep.cpp:98
commands
silent
if $in_tv == 1
  printf "[HERO #%d] RESULT %d  faces=%d  facing=%7.4f  pos=(%.1f,%.1f,%.1f)\n\n", \
      $tv_hero, iVar3, $face, g_HeroActors[0]->base.base.orient.vec.y, \
      g_HeroActors[0]->base.base.location.position.x, \
      g_HeroActors[0]->base.base.location.position.y, \
      g_HeroActors[0]->base.base.location.position.z
end
set $in_tv = 0
cont
end

printf "[mirror_hero] armed — hero-filtered, continuous\n"
