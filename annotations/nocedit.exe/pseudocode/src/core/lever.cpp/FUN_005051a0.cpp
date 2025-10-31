// Name: core_lever.cpp_FUN_005051a0
// Address: 005051a0
// Address Range: [[005051a0, 0050520e]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_005051a0()
// Cross-references:
//   core_lever.cpp_FUN_00505240 (00505240) at 00505288 [DATA]
// Globals:
//   TerminatedCString s_Off_00631178
//   undefined4 DAT_00631179
//   undefined4 DAT_0063117a
//   undefined4 DAT_0063117b
//   TerminatedCString s_On_0063117c
//   undefined4 DAT_0063117d
//   double DOUBLE_00631180 = 0.5
//   undefined4 g_CLeverClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_lever.cpp_FUN_00504b20

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_005051a0(undefined4 param_1, undefined1 param_2,
   undefined4 param_3) */

void core_lever_cpp_FUN_005051a0(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLeverClassInfo.name_hash);
  if ((float)DOUBLE_00631180 <= (float)pCVar2[2].location.area_id) {
    core_lever_cpp_FUN_00504b20();
    pcVar3 = "On";
  }
  else {
    core_lever_cpp_FUN_00504b20();
    pcVar3 = "Off";
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 005051a0: PUSH ESI
//   Label: core_lever.cpp_FUN_005051a0
// 005051a1: PUSH EDI
// 005051a2: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005051a6: MOV EDX,dword ptr [0x02dd3090]
//   XREF to: 02dd3090 (READ)
// 005051ac: PUSH EDX
// 005051ad: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005051b1: PUSH ECX
// 005051b2: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005051b7: FLD float ptr [EAX + 0x2dc]
// 005051bd: MOV ESI,EAX
// 005051bf: ADD ESP,0x8
// 005051c2: FCOMP double ptr [0x00631180]
//   XREF to: 00631180 (READ)
// 005051c8: FNSTSW AX
// 005051ca: SAHF
// 005051cb: JNC 0x005051fa
//   XREF to: 005051fa (CONDITIONAL_JUMP)
// 005051cd: PUSH 0x0
// 005051cf: PUSH ESI
// 005051d0: CALL core_lever.cpp_FUN_00504b20
//   XREF to: 00504b20 (UNCONDITIONAL_CALL)
// 005051d5: ADD ESP,0x8
// 005051d8: MOV ESI,0x631178
//   XREF to: 00631178 (DATA)
// 005051dd: PUSH EDI
//   Label: LAB_005051dd
// 005051de: MOV AL,byte ptr [ESI]
//   Label: LAB_005051de
//   XREF to: 00631178 (READ)
//   XREF to: 0063117a (READ)
//   XREF to: 0063117c (READ)
// 005051e0: MOV byte ptr [EDI],AL
// 005051e2: CMP AL,0x0
// 005051e4: JZ 0x005051f6
//   XREF to: 005051f6 (CONDITIONAL_JUMP)
// 005051e6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00631179 (READ)
//   XREF to: 0063117b (READ)
//   XREF to: 0063117d (READ)
// 005051e9: ADD ESI,0x2
// 005051ec: MOV byte ptr [EDI + 0x1],AL
// 005051ef: ADD EDI,0x2
// 005051f2: CMP AL,0x0
// 005051f4: JNZ 0x005051de
//   XREF to: 005051de (CONDITIONAL_JUMP)
// 005051f6: POP EDI
//   Label: LAB_005051f6
// 005051f7: POP EDI
// 005051f8: POP ESI
// 005051f9: RET
// 005051fa: PUSH 0x3f800000
//   Label: LAB_005051fa
// 005051ff: PUSH ESI
// 00505200: CALL core_lever.cpp_FUN_00504b20
//   XREF to: 00504b20 (UNCONDITIONAL_CALL)
// 00505205: ADD ESP,0x8
// 00505208: MOV ESI,0x63117c
//   XREF to: 0063117c (DATA)
// 0050520d: JMP 0x005051dd
//   XREF to: 005051dd (UNCONDITIONAL_JUMP)
