# Which actors are admitted into a mirror, and which are turned away?
#
# renderOpaqueActors renders every actor once normally, then once more per
# mirror with the mirror camera installed. Nothing about that loop is selective
# -- every actor in the set is offered to every mirror. What decides whether an
# actor appears in the glass is the cull gate inside the reflected render:
#
#   CCharacter::renderOpaque -> CBoundingBox3D::isVisible -> isVisibleWithCamera
#     -> CDemonCamera::testVisibility -> CDemonSet::renderSinglePrimitive
#     -> (advanced_culling_enabled) -> CMirror::renderReflectedPrimitive
#     -> reflectAndClipPrimitive        clips the box against the 5 mirror planes
#
# So an actor outside the mirror's view pyramid is rejected outright and never
# drawn, whatever the depth buffer holds. That matters because the reflected
# room does NOT fill the glass -- the 3D room is a sparse collision mesh, the
# visible room is the pre-rendered backdrop -- so the punched depth window stays
# open across much of the mirror and cannot be relied on to hide anything.
#
# CDemonActor::setupRenderState runs at the top of every actor render and
# carries the name; renderFaceList runs only for geometry that survived the
# gate. Pairing them, filtered on CDemonSet::active_mirror, lists the actors
# each mirror actually admits.
#
# An admitted actor that is nowhere near the mirror means the gate is passing
# what it should reject.
set confirm off
delete
set confirm on

set $ma_offered = 0
set $ma_admitted = 0
set $ma_frames = 0
set $ma_cap = 300
set $ma_name = 0

break core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00
commands
silent
if g_CDemonSetPtr->active_mirror != 0
  set $ma_offered = $ma_offered + 1
  set $ma_name = this_ptr->actor_name
  set $ma_reported = 0
end
cont
end

break engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170
commands
silent
if (g_CDemonSetPtr->active_mirror != 0) && ($ma_reported == 0) && ($ma_offered < $ma_cap)
  set $ma_reported = 1
  set $ma_admitted = $ma_admitted + 1
  printf "ADMITTED into mirror: %s\n", $ma_name
end
cont
end

# Totals once per frame, so the ratio can be read without pausing.
break core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0056cd60
commands
silent
set $ma_frames = $ma_frames + 1
printf "== MIRROR ADMISSION frame %d: offered=%d admitted=%d\n", $ma_frames, $ma_offered, $ma_admitted
set $ma_offered = 0
set $ma_admitted = 0
cont
end
