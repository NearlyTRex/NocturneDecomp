// Name: core_enemy.cpp_CEnemy_archive_FUN_004a0520
// Address: 004a0520
// Address Range: [[004a0520, 004a0671]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004a0520(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004a0520(CEnemy *this_ptr)

{
  if (g_CEnemyClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
    if (1 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"speed");
    }
    if (2 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2538,"hitPoints");
      core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc1d4,"poolMe");
      return;
    }
  }
  else {
    core_charactr_cpp_FUN_0042c7f0(this_ptr);
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"speed");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc1d4,"poolMe");
    if (4 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)&this_ptr->field_0xc1d8,"randomizeMe");
    }
    if (5 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0xc260,"scriptVictim");
    }
    if (6 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b440
                (&this_ptr->field_0xc1f4,"patrolNamePattern");
    }
    if (7 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1e0,"guardDistance");
    }
    if (8 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc25c,"victimHeight");
    }
    if (9 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0xc1e8,"victim");
      return;
    }
  }
  return;
}
