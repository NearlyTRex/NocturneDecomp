// Name: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370
// Address: 00567370
// Address Range: [[00567370, 005673e8]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance *this_ptr)

{
  CMotionController *pCVar1;
  int iVar2;
  
  pCVar1 = core_motion_cpp_CMotionController_ctor_FUN_005241d0(&this_ptr->base);
  iVar2 = __arrinit
                    (&pCVar1[1].current_motion_index,100,&g_CVectorTypeInfo);
  *(byte ***)(iVar2 + -8) = &g_CDeformableModelInstanceVTable;
  *(byte *)(iVar2 + 0x22f8) = 0;
  *(uint *)(iVar2 + 0x2348) = 0;
  *(uint *)(iVar2 + 0x22cc) = 0;
  *(uint *)(iVar2 + 0x22c8) = 0xffffffff;
  *(uint *)(iVar2 + 0x22e8) = 0;
  *(uint *)(iVar2 + 0x22f4) = 0;
  *(uint *)(iVar2 + 0x22f0) = *(uint *)(iVar2 + 0x22f4);
  *(uint *)(iVar2 + 0x22ec) = *(uint *)(iVar2 + 0x22f0);
  *(uint *)(iVar2 + -4) = 0x3f800000;
  return (CDeformableModelInstance *)(iVar2 + -0x58);
}
