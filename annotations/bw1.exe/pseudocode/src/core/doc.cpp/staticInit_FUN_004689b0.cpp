// Name: core_doc.cpp_staticInit_FUN_004689b0
// Address: 004689b0
// Address Range: [[004689b0, 00468a1d]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_staticInit_FUN_004689b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_staticInit_FUN_004689b0(void)

{
  _DAT_01b687f8 = 0x3f012dba;
  _DAT_01b687fc = 0xbd86832f;
  _DAT_01b68800 = 0x3dad1c2d;
  _DAT_01b68804 = 0xbf05e354;
  _DAT_01b68808 = 0x3d656042;
  _DAT_01b6880c = 0x3e010625;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDocClassInfo,(char *)0x5d987c,core_doc_cpp_factoryFuncDoc_FUN_00468c50,
             &g_CDocClassVersion,9,&g_CHeroClassInfo);
  return;
}
