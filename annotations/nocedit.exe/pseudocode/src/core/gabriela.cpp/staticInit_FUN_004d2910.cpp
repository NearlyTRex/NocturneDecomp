// Name: core_gabriela.cpp_staticInit_FUN_004d2910
// Address: 004d2910
// Address Range: [[004d2910, 004d29e9]]
// Convention: __cdecl
// Signature: CDemonActorType * core_gabriela.cpp_staticInit_FUN_004d2910(void)
// Globals:
//   TerminatedCString s_CGabriella_0062ac6d
//   undefined4 DAT_0065e7d0
//   undefined4 DAT_0065e7d4
//   undefined4 DAT_0065e7d8
//   undefined4 DAT_0065e7dc
//   undefined4 DAT_0065e7e0
//   undefined4 DAT_0065e7e4
//   undefined4 g_CGabriellaClassVersion
//   undefined4 DAT_02d7b808
//   undefined4 DAT_02d7b80c
//   undefined4 DAT_02d7b810
//   undefined4 DAT_02d7b814
//   undefined4 DAT_02d7b818
//   undefined4 DAT_02d7b81c
//   undefined4 DAT_02d7b820
//   undefined4 DAT_02d7b824
//   undefined4 DAT_02d7b828
//   undefined4 DAT_02d7b82c
//   undefined4 DAT_02d7b830
//   undefined4 DAT_02d7b834
//   undefined4 DAT_02d7b838
//   undefined4 DAT_02d7b83c
//   undefined4 DAT_02d7b840
//   CDemonActorType g_CGabriellaClassInfo
//   CDemonActorType g_CHeroClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_gabriela_cpp_staticInit_FUN_004d2910(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_02d7b808 = _DAT_0065e7d0 * _DAT_0065e7d4;
  _DAT_02d7b80c = _DAT_0065e7d8 * _DAT_0065e7dc;
  _DAT_02d7b810 = _DAT_0065e7e0 * _DAT_0065e7e4;
  _DAT_02d7b814 = 0x3f028f5c;
  _DAT_02d7b818 = 0xbca3d70a;
  _DAT_02d7b81c = 0x3db851ec;
  _DAT_02d7b820 = 0x3e4ccccd;
  _DAT_02d7b824 = 0xbea147ae;
  _DAT_02d7b828 = 0;
  _DAT_02d7b82c = 0x3fc90fdb;
  _DAT_02d7b830 = 0;
  _DAT_02d7b840 = 0;
  _DAT_02d7b834 = 0x3eb33333;
  _DAT_02d7b838 = 0x40133333;
  _DAT_02d7b83c = 0x408ccccd;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGabriellaClassInfo,"CGabriella",core_gabriela_cpp_FUN_004d2ae0,
                      &g_CGabriellaClassVersion,3,&g_CHeroClassInfo);
  return pCVar1;
}


// Assembly code:
// 004d2910: PUSH EBX
//   Label: core_gabriela.cpp_staticInit_FUN_004d2910
// 004d2911: PUSH ESI
// 004d2912: PUSH EDI
// 004d2913: PUSH EBP
// 004d2914: FLD float ptr [0x0065e7d0]
//   XREF to: 0065e7d0 (READ)
// 004d291a: FMUL float ptr [0x0065e7d4]
//   XREF to: 0065e7d4 (READ)
// 004d2920: FLD float ptr [0x0065e7d8]
//   XREF to: 0065e7d8 (READ)
// 004d2926: FMUL float ptr [0x0065e7dc]
//   XREF to: 0065e7dc (READ)
// 004d292c: FLD float ptr [0x0065e7e0]
//   XREF to: 0065e7e0 (READ)
// 004d2932: FMUL float ptr [0x0065e7e4]
//   XREF to: 0065e7e4 (READ)
// 004d2938: MOV EDX,0x3f028f5c
// 004d293d: MOV ECX,0xbca3d70a
// 004d2942: MOV EBX,0x3db851ec
// 004d2947: MOV ESI,0x3e4ccccd
// 004d294c: MOV EDI,0xbea147ae
// 004d2951: PUSH 0x2db87d4
//   XREF to: 02db87d4 (DATA)
// 004d2956: MOV EAX,0x3fc90fdb
// 004d295b: XOR EBP,EBP
// 004d295d: PUSH 0x3
// 004d295f: MOV dword ptr [0x02d7b814],EDX
//   XREF to: 02d7b814 (WRITE)
// 004d2965: MOV dword ptr [0x02d7b818],ECX
//   XREF to: 02d7b818 (WRITE)
// 004d296b: MOV dword ptr [0x02d7b81c],EBX
//   XREF to: 02d7b81c (WRITE)
// 004d2971: MOV dword ptr [0x02d7b820],ESI
//   XREF to: 02d7b820 (WRITE)
// 004d2977: MOV dword ptr [0x02d7b824],EDI
//   XREF to: 02d7b824 (WRITE)
// 004d297d: MOV dword ptr [0x02d7b828],EBP
//   XREF to: 02d7b828 (WRITE)
// 004d2983: MOV [0x02d7b82c],EAX
//   XREF to: 02d7b82c (WRITE)
// 004d2988: MOV dword ptr [0x02d7b830],EBP
//   XREF to: 02d7b830 (WRITE)
// 004d298e: MOV dword ptr [0x02d7b840],EBP
//   XREF to: 02d7b840 (WRITE)
// 004d2994: FXCH ST2
// 004d2996: FSTP float ptr [0x02d7b808]
//   XREF to: 02d7b808 (WRITE)
// 004d299c: FSTP float ptr [0x02d7b80c]
//   XREF to: 02d7b80c (WRITE)
// 004d29a2: PUSH 0x67b5a4
//   XREF to: 0067b5a4 (DATA)
// 004d29a7: FSTP float ptr [0x02d7b810]
//   XREF to: 02d7b810 (WRITE)
// 004d29ad: PUSH 0x4d2ae0
//   XREF to: 004d2ae0 (DATA)
// 004d29b2: MOV ECX,0x3eb33333
// 004d29b7: MOV EBX,0x40133333
// 004d29bc: PUSH 0x62ac6d
//   XREF to: 0062ac6d (DATA)
// 004d29c1: MOV ESI,0x408ccccd
// 004d29c6: MOV dword ptr [0x02d7b834],ECX
//   XREF to: 02d7b834 (WRITE)
// 004d29cc: PUSH 0x2d7b898
//   XREF to: 02d7b898 (DATA)
// 004d29d1: MOV dword ptr [0x02d7b838],EBX
//   XREF to: 02d7b838 (WRITE)
// 004d29d7: MOV dword ptr [0x02d7b83c],ESI
//   XREF to: 02d7b83c (WRITE)
// 004d29dd: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004d29e2: ADD ESP,0x18
// 004d29e5: POP EBP
// 004d29e6: POP EDI
// 004d29e7: POP ESI
// 004d29e8: POP EBX
// 004d29e9: RET
