// Name: core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0
// Address: 0041d0d0
// Address Range: [[0041d0d0, 0041d312]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d0d0(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d0d0(CBoneGuy *this_ptr)

{
  byte *puVar1;
  byte *puVar2;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  byte *puVar6;
  byte *puVar7;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"@speed" + 1);
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1e0,"guardDistance");
  }
  core_actor_cpp_FUN_0040b870((CMotionController *)&this_ptr->field_0x158,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0xc27c,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc2e0,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc888,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc88c,"param");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xc2e4,"boxCount");
    core_actor_cpp_FUN_0040b960
              ((CDeformableModelInstance *)&this_ptr->field_0x158,"partStatus");
    iVar3 = 0;
    if (0 < *(int *)&this_ptr->field_0xc2e4) {
      puVar7 = &this_ptr->field_0xc2e8;
      puVar2 = &this_ptr->field_0xc32c;
      puVar5 = &this_ptr->field_0xc320;
      puVar6 = &this_ptr->field_0xc300;
      puVar1 = &this_ptr->field_0xc310;
      puVar4 = &this_ptr->field_0xc2f4;
      do {
        core_actor_cpp_archiveVector_FUN_0040b1c0
                  (puVar7 + iVar3 * 0x48,"boxListPos",puVar7,puVar1,puVar2);
        core_actor_cpp_archiveVector_FUN_0040b1c0(puVar4,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b3a0(puVar6,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b3a0(puVar1,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b1c0(puVar5,"sourcePos");
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0x48;
        puVar6 = puVar6 + 0x48;
        core_actor_cpp_archiveActor_FUN_0040b6f0(puVar2,"boxListPart");
        puVar5 = puVar5 + 0x48;
        puVar2 = puVar2 + 0x48;
        puVar1 = puVar1 + 0x48;
      } while (iVar3 < *(int *)&this_ptr->field_0xc2e4);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc25c,"victimHeight");
    return;
  }
  return;
}
