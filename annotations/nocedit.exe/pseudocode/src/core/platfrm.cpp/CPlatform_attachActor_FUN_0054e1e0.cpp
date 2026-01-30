// Name: core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
// Address: 0054e1e0
// Address Range: [[0054e1e0, 0054e2d5]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(void)

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_CPlatform_attachActor(CPlatform* param_1,
   uint param_2) */

void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CMatrix3x4f local_40;
  
  bVar6 = 0;
  if (in_stack_00000008 != 0) {
    iVar2 = 0;
    iVar3 = *(int *)(in_stack_00000004 + 0x51c);
    iVar1 = in_stack_00000004;
    while (in_stack_00000008 != iVar3) {
      iVar2 = iVar2 + 1;
      if (9 < iVar2) {
        iVar3 = *(int *)(in_stack_00000004 + 0x51c);
        iVar2 = 0;
        iVar1 = in_stack_00000004;
        while( true ) {
          if (iVar3 == 0) {
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                      (&local_a0,(CVector3f *)(in_stack_00000008 + 0x20),
                       (CVector3f *)(in_stack_00000008 + 0x30));
            core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                      (&local_40,(CVector3f *)(in_stack_00000004 + 0x20),
                       (CVector3f *)(in_stack_00000004 + 0x30));
            *(int *)(iVar1 + 0x51c) = in_stack_00000008;
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_a0,&local_40,&local_70);
            pCVar4 = &local_70;
            pfVar5 = (float *)(iVar1 + 0x520);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar5 = pCVar4->m[0].w;
              pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
              pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
            }
            return;
          }
          iVar2 = iVar2 + 1;
          if (9 < iVar2) break;
          iVar3 = *(int *)(iVar1 + 0x550);
          iVar1 = iVar1 + 0x34;
        }
        g_CurrentFilename = "..\\core\\platfrm.cpp";
        g_CurrentLineNumber = 0x3d0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CPlatform::attachActor - too many!");
        return;
      }
      iVar3 = *(int *)(iVar1 + 0x550);
      iVar1 = iVar1 + 0x34;
    }
  }
  return;
}
