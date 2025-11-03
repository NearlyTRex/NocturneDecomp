// Name: core_werewolf.cpp_FUN_005f2010
// Address: 005f2010
// Address Range: [[005f2010, 005f2061]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f2010()
// Cross-references:
//   core_werewolf.cpp_CWerewolf_FUN_005f20d0 (005f20d0) at 005f2110 [DATA]
// Globals:
//   undefined4 s_Train_00657e8c
//   TerminatedCString s_Forest_00657e92
//   TerminatedCString s_Train_Alpha_00657e99
//   undefined4 g_CWerewolfClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void core_werewolf_cpp_FUN_005f2010
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               CDemonActor *param_5,undefined4 param_6,char *param_7)

{
  CDemonActor *pCVar1;
  char *format;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(param_5,g_CWerewolfClassInfo.name_hash);
  if (pCVar1[0x8d].field25_0x144 == 0) {
    format = "@Train" + 1;
  }
  else {
    if (pCVar1[0x8d].field25_0x144 != 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0(param_7,"Train Alpha",unaff_EBX);
      return;
    }
    format = "Forest";
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(param_7,format,unaff_EBX);
  return;
}


// Assembly code:
// 005f2010: PUSH EBX
//   Label: core_werewolf.cpp_FUN_005f2010
// 005f2011: PUSH ESI
// 005f2012: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005f2016: MOV EDX,dword ptr [0x03f96b94]
//   XREF to: 03f96b94 (READ)
// 005f201c: PUSH EDX
// 005f201d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f2021: PUSH ECX
// 005f2022: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005f2027: MOV ESI,dword ptr [EAX + 0xbebc]
// 005f202d: ADD ESP,0x8
// 005f2030: TEST ESI,ESI
// 005f2032: JZ 0x005f204a
//   XREF to: 005f204a (CONDITIONAL_JUMP)
// 005f2034: CMP ESI,0x1
// 005f2037: JNZ 0x005f2051
//   XREF to: 005f2051 (CONDITIONAL_JUMP)
// 005f2039: PUSH 0x657e92
//   XREF to: 00657e92 (DATA)
// 005f203e: PUSH EBX
//   Label: LAB_005f203e
// 005f203f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005f2044: ADD ESP,0x8
// 005f2047: POP ESI
// 005f2048: POP EBX
// 005f2049: RET
// 005f204a: PUSH 0x657e8c
//   Label: LAB_005f204a
//   XREF to: 00657e8c (DATA)
// 005f204f: JMP 0x005f203e
//   XREF to: 005f203e (UNCONDITIONAL_JUMP)
// 005f2051: PUSH 0x657e99
//   Label: LAB_005f2051
//   XREF to: 00657e99 (DATA)
// 005f2056: PUSH EBX
// 005f2057: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005f205c: ADD ESP,0x8
// 005f205f: POP ESI
// 005f2060: POP EBX
// 005f2061: RET
