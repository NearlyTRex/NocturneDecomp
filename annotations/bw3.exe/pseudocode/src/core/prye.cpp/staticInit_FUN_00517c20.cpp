// Name: core_prye.cpp_staticInit_FUN_00517c20
// Address: 00517c20
// Address Range: [[00517c20, 00517c8d]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_staticInit_FUN_00517c20(void)

#include "nocturne.h"

void __cdecl core_prye_cpp_staticInit_FUN_00517c20(void)

{
  g_CVector3f_01ed36c0.x = 0.532;
  g_CVector3f_01ed36c0.y = -0.122;
  g_CVector3f_01ed36c0.z = 0.116;
  g_CVector3f_01ed36cc.x = -0.523;
  g_CVector3f_01ed36cc.y = 0.056;
  g_CVector3f_01ed36cc.z = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CPryeClassInfo,"CPrye",core_prye_cpp_factoryFuncPrye_FUN_00517f50,
             &g_CPryeClassVersion,1,&g_CHeroClassInfo);
  return;
}
