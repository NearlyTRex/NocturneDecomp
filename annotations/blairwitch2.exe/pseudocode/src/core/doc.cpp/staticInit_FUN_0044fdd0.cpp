// Name: core_doc.cpp_staticInit_FUN_0044fdd0
// Address: 0044fdd0
// Address Range: [[0044fdd0, 0044fe3d]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_staticInit_FUN_0044fdd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_staticInit_FUN_0044fdd0(void)

{
  _DAT_01b4d23c = 0x3f083127;
  _DAT_01b4d240 = 0xbdf9db23;
  _DAT_01b4d244 = 0x3ded9168;
  _DAT_01b4d248 = 0xbf0ccccd;
  _DAT_01b4d24c = 0xbdcccccd;
  _DAT_01b4d250 = 0x3dcccccd;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDocClassInfo,(char *)0x5cfb5f,core_doc_cpp_factoryFuncDoc_FUN_004500a0,
             &g_CDocClassVersion,0xb,&g_CHeroClassInfo);
  return;
}
