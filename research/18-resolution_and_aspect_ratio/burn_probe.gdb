delete
set pagination off

# Why can this character never reach is_fully_burned?
#
# A bone counts as done if it is burnt through (needs ~6 simultaneous fires),
# a leaf (farthest_child_bone == -1), or on a hidden part. Everything else has
# to be covered by fire out of a 50-flame budget.
#
# Breaks the 71 bones down by category, so the shortfall is a number rather than
# an inference: "needs_fire" is how many bones must carry ~6 fires each for the
# burn to ever resolve.
set $done = 0

break core_charactr_cpp_CCharacter_processFire_FUN_0042a830
commands
silent
if $done == 0 && this_ptr->fire_count > 0
  set $done = 1
  set $sk = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(&this_ptr->model)
  set $md = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&this_ptr->model)
  set $burnt = 0
  set $leaf = 0
  set $hidden = 0
  set $need = 0
  set $b = 0
  while $b < $sk->bone_count
    set $isb = g_BoneBurnIntensity[$b] >= 65535
    set $isl = $md->farthest_child_bone[$b] == -1
    set $ish = this_ptr->model.part_data.visibility_flags[$md->bone_to_part_map[$b]] == 0
    if $isb
      set $burnt = $burnt + 1
    end
    if $isl
      set $leaf = $leaf + 1
    end
    if $ish
      set $hidden = $hidden + 1
    end
    if !$isb && !$isl && !$ish
      set $need = $need + 1
    end
    set $b = $b + 1
  end
  printf "[bones] %s total=%d  burnt=%d leaf=%d hidden=%d  needs_fire=%d  (fire_count=%d, cap 50)\n", \
    this_ptr->base.actor_name, $sk->bone_count, $burnt, $leaf, $hidden, $need, this_ptr->fire_count
end
cont
end
