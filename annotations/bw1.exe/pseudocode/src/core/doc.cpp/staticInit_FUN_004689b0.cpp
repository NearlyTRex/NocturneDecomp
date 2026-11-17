// Name: core_doc.cpp_staticInit_FUN_004689b0
// Address: 004689b0
// Address Range: [[004689b0, 00468a1d]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_staticInit_FUN_004689b0(void)

#include "nocturne.h"

void __cdecl core_doc_cpp_staticInit_FUN_004689b0(void)

{
  g_CVector3f_01b687f8.x = 0.504604;
  g_CVector3f_01b687f8.y = -0.0656799;
  g_CVector3f_01b687f8.z = 0.0845264;
  g_CVector3f_01b68804.x = -0.523;
  g_CVector3f_01b68804.y = 0.056;
  g_CVector3f_01b68804.z = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDocClassInfo,"CDoc",core_doc_cpp_factoryFuncDoc_FUN_00468c50,
             &g_CDocClassVersion,9,&g_CHeroClassInfo);
  return;
}
