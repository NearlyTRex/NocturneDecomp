// Name: core_doc.cpp_staticInit_FUN_0044fdd0
// Address: 0044fdd0
// Address Range: [[0044fdd0, 0044fe3d]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_staticInit_FUN_0044fdd0(void)

#include "nocturne.h"

void __cdecl core_doc_cpp_staticInit_FUN_0044fdd0(void)

{
  g_CVector3f_01b4d23c.x = 0.532;
  g_CVector3f_01b4d23c.y = -0.122;
  g_CVector3f_01b4d23c.z = 0.116;
  g_CVector3f_01b4d248.x = -0.55;
  g_CVector3f_01b4d248.y = -0.1;
  g_CVector3f_01b4d248.z = 0.1;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDocClassInfo,"CDoc",core_doc_cpp_factoryFuncDoc_FUN_004500a0,
             &g_CDocClassVersion,0xb,&g_CHeroClassInfo);
  return;
}
