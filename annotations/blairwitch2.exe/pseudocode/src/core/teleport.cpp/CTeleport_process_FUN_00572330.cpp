// Name: core_teleport.cpp_CTeleport_process_FUN_00572330
// Address: 00572330
// Address Range: [[00572330, 0057240b]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_process_FUN_00572330(CTeleport *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_teleport_cpp_CTeleport_process_FUN_00572330(CTeleport *this_ptr,float delta_time)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_100c [1004];
  CBoundingBox3D *in_stack_ffffffac;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (this_ptr->destination != (CDemonActor *)0x0) {
    core_actor_cpp_FUN_00408de0(this_ptr,*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20);
    fStack_24 = fStack_18;
    *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffffac);
    puVar2 = (uint *)&stack0xffffffcc;
    puVar3 = (uint *)&stack0xffffffac;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((((fStack_4c <= fStack_1c) && (fStack_48 <= fStack_18)) && (fStack_44 <= fStack_14)) &&
       (((fStack_1c <= fStack_40 && (fStack_18 <= fStack_3c)) && (fStack_14 <= fStack_38)))) {
      core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004fc780
                (0x01D182F0,&this_ptr->destination->location);
      return;
    }
  }
  return;
}
