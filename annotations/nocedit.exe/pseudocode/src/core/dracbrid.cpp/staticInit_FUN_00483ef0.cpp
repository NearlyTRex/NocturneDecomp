// Name: core_dracbrid.cpp_staticInit_FUN_00483ef0
// Address: 00483ef0
// Address Range: [[00483ef0, 00483f7c]]
// Convention: __cdecl
// Signature: void core_dracbrid.cpp_staticInit_FUN_00483ef0(void)
// Globals:
//   TerminatedCString s_CDraculaBride_00621846
//   WatcomTypeInfo g_SFreakyTypeInfo
//   WatcomStaticDestructorNode DAT_006703a0
//   int g_CDraculaBrideClassVersion = 0x9
//   undefined4 DAT_02c6d040
//   undefined4 DAT_02c6d044
//   undefined4 DAT_02c6d048
//   undefined4 DAT_02c6d04c
//   undefined4 DAT_02c6d050
//   undefined4 DAT_02c6d054
//   undefined4 DAT_02c6d058
//   undefined4 DAT_02c6d05c
//   undefined4 DAT_02c6d060
//   CDemonActorType g_CDraculaBrideClassInfo
//   SFreaky[6] SFreaky_ARRAY_02c6d0c0
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_staticInit_FUN_00483ef0(void)

{
  _DAT_02c6d040 = 0;
  _DAT_02c6d044 = 0x3f000000;
  _DAT_02c6d048 = 0;
  _DAT_02c6d04c = 0xbf19999a;
  _DAT_02c6d050 = 0;
  _DAT_02c6d054 = 0;
  _DAT_02c6d058 = 0x3f19999a;
  _DAT_02c6d05c = 0;
  _DAT_02c6d060 = 0;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDraculaBrideClassInfo,"CDraculaBride",core_dracbrid_cpp_FUN_00483f80,
             &g_CDraculaBrideClassVersion,9,&g_CEnemyClassInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (SFreaky_ARRAY_02c6d0c0,6,&g_SFreakyTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_006703a0);
  return;
}


// Assembly code:
// 00483ef0: PUSH ESI
//   Label: core_dracbrid.cpp_staticInit_FUN_00483ef0
// 00483ef1: MOV ECX,0x3f000000
// 00483ef6: PUSH 0x2cf2bb8
//   XREF to: 02cf2bb8 (DATA)
// 00483efb: MOV ESI,0xbf19999a
// 00483f00: XOR EDX,EDX
// 00483f02: PUSH 0x9
// 00483f04: MOV EAX,0x3f19999a
// 00483f09: MOV dword ptr [0x02c6d040],EDX
//   XREF to: 02c6d040 (WRITE)
// 00483f0f: PUSH 0x6703b0
//   XREF to: 006703b0 (DATA)
// 00483f14: MOV dword ptr [0x02c6d044],ECX
//   XREF to: 02c6d044 (WRITE)
// 00483f1a: MOV dword ptr [0x02c6d048],EDX
//   XREF to: 02c6d048 (WRITE)
// 00483f20: PUSH 0x483f80
//   XREF to: 00483f80 (DATA)
// 00483f25: MOV dword ptr [0x02c6d04c],ESI
//   XREF to: 02c6d04c (WRITE)
// 00483f2b: MOV dword ptr [0x02c6d050],EDX
//   XREF to: 02c6d050 (WRITE)
// 00483f31: PUSH 0x621846
//   XREF to: 00621846 (DATA)
// 00483f36: MOV dword ptr [0x02c6d054],EDX
//   XREF to: 02c6d054 (WRITE)
// 00483f3c: MOV [0x02c6d058],EAX
//   XREF to: 02c6d058 (WRITE)
// 00483f41: PUSH 0x2c6d064
//   XREF to: 02c6d064 (DATA)
// 00483f46: MOV dword ptr [0x02c6d05c],EDX
//   XREF to: 02c6d05c (WRITE)
// 00483f4c: MOV dword ptr [0x02c6d060],EDX
//   XREF to: 02c6d060 (WRITE)
// 00483f52: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00483f57: ADD ESP,0x18
// 00483f5a: PUSH 0x65cf00
//   XREF to: 0065cf00 (DATA)
// 00483f5f: PUSH 0x6
// 00483f61: PUSH 0x2c6d0c0
//   XREF to: 02c6d0c0 (DATA)
// 00483f66: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00483f6b: ADD ESP,0xc
// 00483f6e: PUSH 0x6703a0
//   XREF to: 006703a0 (DATA)
// 00483f73: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00483f78: ADD ESP,0x4
// 00483f7b: POP ESI
// 00483f7c: RET
