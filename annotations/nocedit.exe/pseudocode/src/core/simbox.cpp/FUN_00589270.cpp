// Name: core_simbox.cpp_FUN_00589270
// Address: 00589270
// Address Range: [[00589270, 005892c8]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_FUN_00589270(CSimBox * this_ptr)
// Cross-references:
//   core_simbox.cpp_CSimBox_FUN_00589310 (00589310) at 00589357 [DATA]
// Globals:
//   TerminatedCString s_D_00649c60
//   undefined4 s_emo_00649c61
//   TerminatedCString s_Coffin_Lid_00649c65
//   undefined4 s_offin_Lid_00649c66
//   undefined4 s_ffin_Lid_00649c67
//   undefined4 s_fin_Lid_00649c68
//   TerminatedCString s_Unknown_00649c70
//   undefined4 s_nknown_00649c71
//   undefined4 g_CSimBoxClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

void __cdecl core_simbox_cpp_FUN_00589270(CSimBox *this_ptr)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base_actor,g_CSimBoxClassInfo.name_hash);
  fVar2 = pCVar3[2].location.position.y;
  if (fVar2 == 0.0) {
    pcVar4 = "Demo";
  }
  else if (fVar2 == 1.4013e-45) {
    pcVar4 = "Coffin Lid";
  }
  else {
    pcVar4 = "Unknown";
  }
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


// Assembly code:
// 00589270: PUSH ESI
//   Label: core_simbox.cpp_FUN_00589270
// 00589271: PUSH EDI
// 00589272: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00589276: MOV EDX,dword ptr [0x03659820]
//   XREF to: 03659820 (READ)
// 0058927c: PUSH EDX
// 0058927d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00589281: PUSH ECX
// 00589282: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00589287: MOV EAX,dword ptr [EAX + 0x2d4]
// 0058928d: ADD ESP,0x8
// 00589290: TEST EAX,EAX
// 00589292: JBE 0x005892bb
//   XREF to: 005892bb (CONDITIONAL_JUMP)
// 00589294: CMP EAX,0x1
// 00589297: JNZ 0x005892c2
//   XREF to: 005892c2 (CONDITIONAL_JUMP)
// 00589299: MOV ESI,0x649c65
//   XREF to: 00649c65 (DATA)
// 0058929e: PUSH EDI
//   Label: LAB_0058929e
// 0058929f: MOV AL,byte ptr [ESI]
//   Label: LAB_0058929f
//   XREF to: 00649c60 (READ)
//   XREF to: 00649c65 (READ)
//   XREF to: 00649c67 (READ)
//   XREF to: 00649c70 (READ)
// 005892a1: MOV byte ptr [EDI],AL
// 005892a3: CMP AL,0x0
// 005892a5: JZ 0x005892b7
//   XREF to: 005892b7 (CONDITIONAL_JUMP)
// 005892a7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00649c61 (READ)
//   XREF to: 00649c66 (READ)
//   XREF to: 00649c68 (READ)
//   XREF to: 00649c71 (READ)
// 005892aa: ADD ESI,0x2
// 005892ad: MOV byte ptr [EDI + 0x1],AL
// 005892b0: ADD EDI,0x2
// 005892b3: CMP AL,0x0
// 005892b5: JNZ 0x0058929f
//   XREF to: 0058929f (CONDITIONAL_JUMP)
// 005892b7: POP EDI
//   Label: LAB_005892b7
// 005892b8: POP EDI
// 005892b9: POP ESI
// 005892ba: RET
// 005892bb: MOV ESI,0x649c60
//   Label: LAB_005892bb
//   XREF to: 00649c60 (DATA)
// 005892c0: JMP 0x0058929e
//   XREF to: 0058929e (UNCONDITIONAL_JUMP)
// 005892c2: MOV ESI,0x649c70
//   Label: LAB_005892c2
//   XREF to: 00649c70 (DATA)
// 005892c7: JMP 0x0058929e
//   XREF to: 0058929e (UNCONDITIONAL_JUMP)
