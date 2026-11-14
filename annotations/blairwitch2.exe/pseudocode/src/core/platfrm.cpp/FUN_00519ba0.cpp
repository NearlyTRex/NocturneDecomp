// Name: core_platfrm.cpp_FUN_00519ba0
// Address: 00519ba0
// Address Range: [[00519ba0, 00519cad]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_00519ba0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_FUN_00519ba0(CPlatform *this_ptr)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1034 [979];
  CVector3f *new_orientation;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  float local_7c [12];
  float local_4c;
  float afStack_48 [5];
  CVector3f local_34;
  CVector3f local_28;
  CDemonActor *local_1c;
  CDemonActor_vtable *local_18;
  SPlatformAttachment *local_14;
  
  bVar5 = 0;
  core_xform_cpp_FUN_00591c10(&local_dc,&(this_ptr->base).location,&(this_ptr->base).orient);
  local_14 = this_ptr->attach_actors;
  iVar2 = 0;
  do {
    if (this_ptr->attach_actors[0].actor != (CDemonActor *)0x0) {
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_14[iVar2].matrix,&local_dc,&local_ac);
      pCVar3 = &local_ac;
      pfVar4 = local_7c;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar4 = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
      }
      local_1c = this_ptr->attach_actors[0].actor;
      local_18 = (local_1c->vtable)._ub;
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(local_7c);
      local_34.x = afStack_48[2];
      *(float *)((int)&local_34 + (uint)bVar5 * -8 + 4) = afStack_48[(uint)bVar5 * -2 + 3];
      *(float *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      new_orientation = &local_34;
      core_xform_cpp_FUN_00592720(local_7c);
      local_28.x = local_4c;
      *(float *)((int)&local_28 + (uint)bVar5 * -8 + 4) = afStack_48[(uint)bVar5 * -2];
      *(float *)((int)&local_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (*local_18->setPositionAndOrientation)(local_1c,&local_28,new_orientation);
    }
    iVar2 = iVar2 + 1;
    this_ptr = (CPlatform *)((int)&(this_ptr->base).orient + 4);
  } while (iVar2 < 10);
  return;
}
