// Name: core_teleport.cpp_CTeleport_process_FUN_00568e40
// Address: 00568e40
// Address Range: [[00568e40, 00568f1b]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_process_FUN_00568e40(CTeleport *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_teleport_cpp_CTeleport_process_FUN_00568e40(CTeleport *this_ptr,float delta_time)

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
  CVector3f CStack_18;
  
  bVar4 = 0;
  if (this_ptr->destination != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
              (&this_ptr->base,(CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20),
               &CStack_18);
    fStack_24 = CStack_18.x;
    *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8) =
         *(uint *)((int)&CStack_18 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&CStack_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffffac);
    puVar2 = (uint *)&stack0xffffffcc;
    puVar3 = (uint *)&stack0xffffffac;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((((fStack_4c <= fStack_1c) && (fStack_48 <= CStack_18.x)) && (fStack_44 <= CStack_18.y)) &&
       (((fStack_1c <= fStack_40 && (CStack_18.x <= fStack_3c)) && (CStack_18.y <= fStack_38)))) {
      core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004f6ed0
                (0x01D81080,&this_ptr->destination->location);
      return;
    }
  }
  return;
}
