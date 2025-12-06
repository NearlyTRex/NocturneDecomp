// Name: core_drip.cpp_staticInit_FUN_0048df80
// Address: 0048df80
// Address Range: [[0048df80, 0048dfb0]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * core_drip.cpp_staticInit_FUN_0048df80(void)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_drip_cpp_staticInit_FUN_0048df80(void)

{
  CKeyFramedModelInstance *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDripClassInfo,"CDrip",core_drip_cpp_FUN_0048dfc0,&g_CDripClassVersion,6,
             &g_CDemonActorClassInfo);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)&DAT_02c9b170);
  return pCVar1;
}
