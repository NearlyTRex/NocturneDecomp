// Name: core_drip.cpp_FUN_0048e830
// Address: 0048e830
// Address Range: [[0048e830, 0048e8cb]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048e830()
// Cross-references:
//   core_drip.cpp_FUN_0048e930 (0048e930) at 0048e949 [DATA]
// Globals:
//   TerminatedCString s_Water_006222bb
//   undefined4 s_ater_006222bc
//   undefined4 s_ter_006222bd
//   undefined4 s_er_006222be
//   TerminatedCString s_Lava_006222c1
//   undefined4 DAT_006222c2
//   undefined4 DAT_006222c3
//   undefined4 DAT_006222c4
//   TerminatedCString s_Stalagwhatever_006222c6
//   undefined4 s_talagwhatever_006222c7
//   undefined4 s_alagwhatever_006222c8
//   undefined4 s_lagwhatever_006222c9
//   undefined4 g_CDripClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048e859) */
/* Signature: undefined1 actors_other_drip.cpp_FUN_0048e830(undefined4 param_1, undefined1 param_2,
   undefined4 param_3) */

void core_drip_cpp_FUN_0048e830(void)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CDripClassInfo.name_hash)
  ;
  fVar2 = pCVar3[2].location.position.y;
  if (fVar2 == 0.0) {
    pcVar4 = "Water";
    do {
      cVar1 = *pcVar4;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  }
  if ((uint)fVar2 < 2) {
    pcVar4 = "Lava";
    do {
      cVar1 = *pcVar4;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  }
  if (fVar2 == 2.8026e-45) {
    pcVar4 = "Stalagwhatever";
    do {
      cVar1 = *pcVar4;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  }
  return;
}


// Assembly code:
// 0048e830: PUSH ESI
//   Label: core_drip.cpp_FUN_0048e830
// 0048e831: PUSH EDI
// 0048e832: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0048e836: MOV EDX,dword ptr [0x02c9b16c]
//   XREF to: 02c9b16c (READ)
// 0048e83c: PUSH EDX
// 0048e83d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048e841: PUSH ECX
// 0048e842: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0048e847: MOV ESI,dword ptr [EAX + 0x2d4]
// 0048e84d: ADD ESP,0x8
// 0048e850: CMP ESI,0x1
// 0048e853: JNC 0x0048e8c2
//   XREF to: 0048e8c2 (CONDITIONAL_JUMP)
// 0048e855: TEST ESI,ESI
// 0048e857: JZ 0x0048e85c
//   XREF to: 0048e85c (CONDITIONAL_JUMP)
// 0048e859: POP EDI
// 0048e85a: POP ESI
// 0048e85b: RET
// 0048e85c: MOV ESI,0x6222bb
//   Label: LAB_0048e85c
//   XREF to: 006222bb (DATA)
// 0048e861: PUSH EDI
// 0048e862: MOV AL,byte ptr [ESI]
//   Label: LAB_0048e862
//   XREF to: 006222bb (READ)
//   XREF to: 006222bd (READ)
// 0048e864: MOV byte ptr [EDI],AL
// 0048e866: CMP AL,0x0
// 0048e868: JZ 0x0048e87a
//   XREF to: 0048e87a (CONDITIONAL_JUMP)
// 0048e86a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006222bc (READ)
//   XREF to: 006222be (READ)
// 0048e86d: ADD ESI,0x2
// 0048e870: MOV byte ptr [EDI + 0x1],AL
// 0048e873: ADD EDI,0x2
// 0048e876: CMP AL,0x0
// 0048e878: JNZ 0x0048e862
//   XREF to: 0048e862 (CONDITIONAL_JUMP)
// 0048e87a: POP EDI
//   Label: LAB_0048e87a
// 0048e87b: POP EDI
// 0048e87c: POP ESI
// 0048e87d: RET
// 0048e87e: MOV ESI,0x6222c1
//   Label: LAB_0048e87e
//   XREF to: 006222c1 (DATA)
// 0048e883: PUSH EDI
// 0048e884: MOV AL,byte ptr [ESI]
//   Label: LAB_0048e884
//   XREF to: 006222c1 (READ)
//   XREF to: 006222c3 (READ)
// 0048e886: MOV byte ptr [EDI],AL
// 0048e888: CMP AL,0x0
// 0048e88a: JZ 0x0048e89c
//   XREF to: 0048e89c (CONDITIONAL_JUMP)
// 0048e88c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006222c2 (READ)
//   XREF to: 006222c4 (READ)
// 0048e88f: ADD ESI,0x2
// 0048e892: MOV byte ptr [EDI + 0x1],AL
// 0048e895: ADD EDI,0x2
// 0048e898: CMP AL,0x0
// 0048e89a: JNZ 0x0048e884
//   XREF to: 0048e884 (CONDITIONAL_JUMP)
// 0048e89c: POP EDI
//   Label: LAB_0048e89c
// 0048e89d: POP EDI
// 0048e89e: POP ESI
// 0048e89f: RET
// 0048e8a0: MOV ESI,0x6222c6
//   Label: LAB_0048e8a0
//   XREF to: 006222c6 (DATA)
// 0048e8a5: PUSH EDI
// 0048e8a6: MOV AL,byte ptr [ESI]
//   Label: LAB_0048e8a6
//   XREF to: 006222c6 (READ)
//   XREF to: 006222c8 (READ)
// 0048e8a8: MOV byte ptr [EDI],AL
// 0048e8aa: CMP AL,0x0
// 0048e8ac: JZ 0x0048e8be
//   XREF to: 0048e8be (CONDITIONAL_JUMP)
// 0048e8ae: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006222c7 (READ)
//   XREF to: 006222c9 (READ)
// 0048e8b1: ADD ESI,0x2
// 0048e8b4: MOV byte ptr [EDI + 0x1],AL
// 0048e8b7: ADD EDI,0x2
// 0048e8ba: CMP AL,0x0
// 0048e8bc: JNZ 0x0048e8a6
//   XREF to: 0048e8a6 (CONDITIONAL_JUMP)
// 0048e8be: POP EDI
//   Label: LAB_0048e8be
// 0048e8bf: POP EDI
// 0048e8c0: POP ESI
// 0048e8c1: RET
// 0048e8c2: JBE 0x0048e87e
//   Label: LAB_0048e8c2
//   XREF to: 0048e87e (CONDITIONAL_JUMP)
// 0048e8c4: CMP ESI,0x2
// 0048e8c7: JZ 0x0048e8a0
//   XREF to: 0048e8a0 (CONDITIONAL_JUMP)
// 0048e8c9: POP EDI
// 0048e8ca: POP ESI
// 0048e8cb: RET
