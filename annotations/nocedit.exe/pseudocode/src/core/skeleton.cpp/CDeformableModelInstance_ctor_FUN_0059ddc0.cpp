// Name: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
// Address: 0059ddc0
// Address Range: [[0059ddc0, 0059de38]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModelInstance * __cdecl
core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance *this_ptr)

{
  CMotionController *pCVar1;
  void *pvVar2;
  
  pCVar1 = core_motion_cpp_CMotionController_ctor_FUN_0052d570(&this_ptr->motion_controller);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (&pCVar1[1].current_motion_index,100,&g_CVectorTypeInfo);
  *(CMotionController_vtable **)((int)pvVar2 + -8) = &g_CDeformableModelInstanceVTable;
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
