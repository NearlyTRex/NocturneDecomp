// Name: core_prye.cpp_staticInit_FUN_00517c20
// Address: 00517c20
// Address Range: [[00517c20, 00517c8d]]
// Convention: unknown
// Signature: void core_prye_cpp_staticInit_FUN_00517c20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_staticInit_FUN_00517c20(void)

{
  _DAT_01ed36c0 = 0x3f083127;
  _DAT_01ed36c4 = 0xbdf9db23;
  _DAT_01ed36c8 = 0x3ded9168;
  _DAT_01ed36cc = 0xbf05e354;
  _DAT_01ed36d0 = 0x3d656042;
  _DAT_01ed36d4 = 0x3e010625;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CPryeClassInfo,(char *)0x5cca67,core_prye_cpp_factoryFuncPrye_FUN_00517f50,
             &g_CPryeClassVersion,1,&g_CHeroClassInfo);
  return;
}
