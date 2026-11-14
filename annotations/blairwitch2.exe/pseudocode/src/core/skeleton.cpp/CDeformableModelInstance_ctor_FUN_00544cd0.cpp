// Name: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
// Address: 00544cd0
// Address Range: [[00544cd0, 00544d48]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance *this_ptr)

{
  CMotionController *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_motion_cpp_CMotionController_ctor_FUN_00503020(&this_ptr->base);
  pvVar2 = __arrinit
                     (&pCVar1[1].current_motion_index,100,&g_CVectorTypeInfo);
  *(byte ***)((int)pvVar2 + -8) = &g_CDeformableModelInstanceVTable;
  *(byte *)((int)pvVar2 + 0x2208) = 0;
  *(uint *)((int)pvVar2 + 0x2258) = 0;
  *(uint *)((int)pvVar2 + 0x21dc) = 0;
  *(uint *)((int)pvVar2 + 0x21d8) = 0xffffffff;
  *(uint *)((int)pvVar2 + 0x21f8) = 0;
  *(uint *)((int)pvVar2 + 0x2204) = 0;
  *(uint *)((int)pvVar2 + 0x2200) = *(uint *)((int)pvVar2 + 0x2204);
  *(uint *)((int)pvVar2 + 0x21fc) = *(uint *)((int)pvVar2 + 0x2200);
  *(uint *)((int)pvVar2 + -4) = 0x3f800000;
  return (CDeformableModelInstance *)((int)pvVar2 + -0x58);
}
