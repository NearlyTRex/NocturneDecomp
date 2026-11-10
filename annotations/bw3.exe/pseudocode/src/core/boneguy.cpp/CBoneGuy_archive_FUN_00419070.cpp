// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_00419070
// Address: 00419070
// Address Range: [[00419070, 004192b2]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419070(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_00419070(CBoneGuy *this_ptr)

{
  byte *puVar1;
  byte *puVar2;
  CDeformableModelInstance *model_ptr;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  byte *puVar6;
  byte *puVar7;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).field_0xcdcc,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0xd07c,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd0e0,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd0e4,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xd694,"param");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd0e8,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040bba0(model_ptr,"partStatus");
    iVar3 = 0;
    if (0 < *(int *)&this_ptr->field_0xd0e8) {
      puVar7 = &this_ptr->field_0xd0f0;
      puVar2 = &this_ptr->field_0xd134;
      puVar5 = &this_ptr->field_0xd128;
      puVar6 = &this_ptr->field_0xd108;
      puVar1 = &this_ptr->field_0xd118;
      puVar4 = &this_ptr->field_0xd0fc;
      do {
        core_actor_cpp_archiveVector_FUN_0040b400
                  (puVar7 + iVar3 * 0x48,"boxListPos",puVar7,puVar1,puVar2);
        core_actor_cpp_archiveVector_FUN_0040b400(puVar4,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b5e0(puVar6,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b5e0(puVar1,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b400(puVar5,"sourcePos");
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0x48;
        puVar6 = puVar6 + 0x48;
        core_actor_cpp_archiveActor_FUN_0040b930(puVar2,"boxListPart");
        puVar5 = puVar5 + 0x48;
        puVar2 = puVar2 + 0x48;
        puVar1 = puVar1 + 0x48;
      } while (iVar3 < *(int *)&this_ptr->field_0xd0e8);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).field_0xce58,"victimHeight")
    ;
    return;
  }
  return;
}
