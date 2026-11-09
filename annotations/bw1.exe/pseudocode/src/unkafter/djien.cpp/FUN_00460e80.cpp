// Name: unkafter_djien.cpp_FUN_00460e80
// Address: 00460e80
// Address Range: [[00460e80, 00460f83]]
// Convention: unknown
// Signature: void unkafter_djien_cpp_FUN_00460e80(CEnemy *param_1)

#include "nocturne.h"

void unkafter_djien_cpp_FUN_00460e80(CEnemy *param_1)

{
  byte *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  model_ptr = &param_1->field_0x158;
  core_actor_cpp_FUN_0040b7f0((CDeformableModelInstance *)model_ptr,"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)model_ptr,"motion state");
  if (g_CDjienClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x68,"numSacksBlown")
  ;
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&param_1[1].field_0x6c,"numSacksToBlow");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x70,"Sack0Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x74,"Sack1Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x78,"Sack2Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x7c,"Sack3Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x80,"Sack4Damage");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x84,"Sack5Damage");
  core_actor_cpp_FUN_0040b960((CDeformableModelInstance *)model_ptr,"partStatus");
  return;
}
