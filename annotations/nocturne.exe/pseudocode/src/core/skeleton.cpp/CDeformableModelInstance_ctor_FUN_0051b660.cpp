// Name: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
// Address: 0051b660
// Address Range: [[0051b660, 0051b6d8]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance *this_ptr)

{
  CMotionController *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_motion_cpp_CMotionController_ctor_FUN_004e1120(&this_ptr->motion_controller);
  pvVar2 = __arrinit
                     (&pCVar1[1].current_motion_index,100,&g_CVectorTypeInfo_005993b0);
  *(byte ***)((int)pvVar2 + -8) =
       &PTR_core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0_005a1ed4;
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
