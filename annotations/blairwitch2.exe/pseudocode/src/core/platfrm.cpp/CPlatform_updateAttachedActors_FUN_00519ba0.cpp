// Name: core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_00519ba0
// Address: 00519ba0
// Address Range: [[00519ba0, 00519cad]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_00519ba0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_00519ba0(CPlatform *this_ptr)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  uint auStackY_1034 [979];
  CVector3f *new_orientation;
  CVector3f *in_stack_ffffff24;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CVector3f local_4c;
  uint local_40;
  uint auStack_3c [2];
  CVector3f local_34;
  CVector3f local_28;
  CDemonActor *local_1c;
  CDemonActor_vtable *local_18;
  SPlatformAttachment *local_14;
  
  bVar5 = 0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
            ((CMatrix3x4f *)&stack0xffffff24,&(this_ptr->base).location.position,
             &(this_ptr->base).orient.vec);
  local_14 = this_ptr->attach_actors;
  iVar2 = 0;
  do {
    if (this_ptr->attach_actors[0].actor != (CDemonActor *)0x0) {
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (&local_14[iVar2].matrix,(CMatrix3x4f *)&stack0xffffff24,&local_ac);
      pCVar3 = &local_ac;
      pCVar4 = &local_7c;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar4->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      local_1c = this_ptr->attach_actors[0].actor;
      local_18 = (local_1c->vtable)._ub;
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_7c,in_stack_ffffff24);
      local_34.x = (float)local_40;
      auStack_3c[(uint)bVar5 * -2 + 3] = auStack_3c[(uint)bVar5 * -2];
      auStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           auStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      new_orientation = (CVector3f *)(auStack_3c + 2);
      core_xform_cpp_getTranslation_FUN_00592720(&local_7c,&local_4c);
      local_28.x = local_4c.x;
      auStack_3c[(uint)bVar5 * -2 + 6] = *(uint *)((int)&local_4c + (uint)bVar5 * -8 + 4);
      auStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           *(uint *)((int)&local_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      (*local_18->setPositionAndOrientation)(local_1c,(CVector3f *)(auStack_3c + 5),new_orientation)
      ;
    }
    iVar2 = iVar2 + 1;
    this_ptr = (CPlatform *)((int)&(this_ptr->base).orient + 4);
  } while (iVar2 < 10);
  return;
}
