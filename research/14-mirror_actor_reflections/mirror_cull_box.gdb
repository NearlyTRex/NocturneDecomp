# What box does the mirror cull gate actually test, and should it survive?
#
# An actor appears in a mirror only if CBoundingBox3D::isVisible succeeds inside
# the reflected render, where renderSinglePrimitive routes the box's six faces
# through CMirror's five clip planes. Those planes are the pyramid from the
# mirror camera origin through the glass quad, so the test is geometric: a box
# wholly outside that pyramid must be rejected.
#
# This prints the box each actor is judged on during a mirror pass, beside the
# actor's name, so the decision can be checked against the quad by hand instead
# of assuming a figure's width. Pair it with mirror_actor_admission.gdb, which
# says which actors came out the other side.
#
# The gate runs on every actor for every mirror every frame, so this retires at
# a cap.
set confirm off
delete
set confirm on

set $mk_hits = 0
set $mk_cap = 40
set $mk_name = 0

break core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00
commands
silent
if g_CDemonSetPtr->active_mirror != 0
  set $mk_name = this_ptr->actor_name
end
cont
end

break core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0
set $mk_bp = $bpnum
commands
silent
if (g_CDemonSetPtr->active_mirror != 0) && ($mk_hits < $mk_cap)
  set $mk_hits = $mk_hits + 1
  printf "BOX %-24s min %8.3f %8.3f %8.3f  max %8.3f %8.3f %8.3f\n", $mk_name, this_ptr->min.x, this_ptr->min.y, this_ptr->min.z, this_ptr->max.x, this_ptr->max.y, this_ptr->max.z
  if $mk_hits >= $mk_cap
    disable $mk_bp
    printf "BOX cap reached, breakpoint retired\n"
  end
end
cont
end
