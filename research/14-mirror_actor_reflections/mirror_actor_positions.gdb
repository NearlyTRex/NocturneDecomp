# Where do the actors stand relative to the mirror plane?
#
# A one-shot dump, not a breakpoint probe: sourcing it prints immediately while
# the game is stopped, so it can be read beside a mirror admission list.
#
# The mirror is a planar quad. An actor on the far side of that plane is behind
# the wall the glass hangs on and can never legitimately appear in it, whatever
# the depth buffer holds -- and the depth buffer cannot be relied on here,
# because the reflected room leaves much of the punched window open.
#
# The plane's facing is taken from corner1..corner3 the same way
# computePlaneFromTriangle derives it, and each actor is printed with its signed
# distance along the plane normal. Same sign as the camera means the actor is on
# the room side, where a reflection is legitimate. Opposite sign means it is
# behind the glass.
printf "mirror corner1 %f %f %f\n", g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner1.x, g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner1.y, g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner1.z
printf "mirror corner3 %f %f %f\n", g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner3.x, g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner3.y, g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.corner3.z
printf "mirror camera_origin %f %f %f\n", g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.camera_origin.x, g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.camera_origin.y, g_CDemonSetPtr->mirror_glass_actors[0]->mirror.reflection.camera_origin.z

set $mp_i = 0
while $mp_i < g_CDemonSetPtr->actor_count
  printf "actor %-3d %-24s pos %9.3f %9.3f %9.3f\n", $mp_i, g_CDemonSetPtr->actors[$mp_i]->actor_name, g_CDemonSetPtr->actors[$mp_i]->location.position.x, g_CDemonSetPtr->actors[$mp_i]->location.position.y, g_CDemonSetPtr->actors[$mp_i]->location.position.z
  set $mp_i = $mp_i + 1
end
