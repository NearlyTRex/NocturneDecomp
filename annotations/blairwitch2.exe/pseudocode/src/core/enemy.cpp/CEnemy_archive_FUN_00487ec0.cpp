// Name: core_enemy.cpp_CEnemy_archive_FUN_00487ec0
// Address: 00487ec0
// Address Range: [[00487ec0, 00488011]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_archive_FUN_00487ec0(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_archive_FUN_00487ec0(CEnemy *this_ptr)

{
  if (g_CEnemyClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
    if (1 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x10a60,"speed");
    }
    if (2 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x25a8,"hitPoints");
      core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x10a64,"poolMe");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_00422c30((CCharacter *)this_ptr);
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x10a60,"speed");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x10a64,"poolMe");
    if (4 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&this_ptr->field_0x10a68,"randomizeMe");
    }
    if (5 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x10af0,"scriptVictim");
    }
    if (6 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b730
                (&this_ptr->field_0x10a84,"patrolNamePattern");
    }
    if (7 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x10a70,"guardDistance");
    }
    if (8 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x10aec,"victimHeight");
    }
    if (9 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x10a78,"victim");
      return;
    }
  }
  return;
}
