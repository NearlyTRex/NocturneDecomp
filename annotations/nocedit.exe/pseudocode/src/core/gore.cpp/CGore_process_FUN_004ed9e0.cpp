// Name: core_gore.cpp_CGore_process_FUN_004ed9e0
// Address: 004ed9e0
// Address Range: [[004ed9e0, 004eda95]]
// Convention: unknown
// Signature: undefined core_gore.cpp_CGore_process_FUN_004ed9e0()
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e33b4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e525 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539934 [UNCONDITIONAL_CALL]
// Globals:
//   CBloodParticle[256] DAT_02d833d4
//   undefined4 DAT_02d833ec
//   undefined4 DAT_02d83408
//   undefined4 DAT_02d83414
//   undefined4 DAT_02d8342c
//   undefined4 DAT_02d83448
//   undefined4 DAT_02d873d4
//   undefined4 DAT_02d873d8
//   CBloodSplat[2000] DAT_02d873dc
//   undefined4 DAT_02d87420
//   undefined4 DAT_02da8720
//   CBloodPool[32] DAT_02da8724
//   undefined4 DAT_02da874c
// Function calls:
//   core_gore.cpp_FUN_004ecad0
//   core_gore.cpp_FUN_004ecc40
//   core_gore.cpp_FUN_004ed0a0

#include "nocturne.h"

undefined4 core_gore_cpp_CGore_process_FUN_004ed9e0(void)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  CBloodParticle *pCVar4;
  int iVar5;
  undefined8 uVar6;
  
  pCVar4 = DAT_02d833d4;
  do {
    fVar1 = *(float *)(pCVar4->field0_0x0 + 0x18);
    uVar3 = (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 < fVar1) {
      uVar3 = (**(code **)(*(int *)(pCVar4->field0_0x0 + 0x34) + 4))();
    }
    uVar6 = CONCAT44(DAT_02d873d8,uVar3);
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CBloodParticle *)&DAT_02d873d4);
  iVar5 = 0;
  if (0 < DAT_02d873d8) {
    do {
      uVar6 = core_gore_cpp_FUN_004ecad0();
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_02d873d8);
  }
  uVar2 = core_gore_cpp_FUN_004ecc40((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  iVar5 = 0;
  if (0 < DAT_02da8720) {
    do {
      uVar2 = core_gore_cpp_FUN_004ed0a0();
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_02da8720);
  }
  return uVar2;
}


// Assembly code:
// 004ed9e0: PUSH EBX
//   Label: core_gore.cpp_CGore_process_FUN_004ed9e0
// 004ed9e1: PUSH ESI
// 004ed9e2: PUSH EDI
// 004ed9e3: PUSH EBP
// 004ed9e4: MOV EBP,ESP
// 004ed9e6: AND ESP,0xfffffff8
// 004ed9e9: MOV EBX,0x2d833d4
//   XREF to: 02d833d4 (DATA)
// 004ed9ee: LEA ESI,[EBX + 0x4000]
//   XREF to: 02d873d4 (DATA)
// 004ed9f4: FLD float ptr [EBX + 0x18]
//   Label: LAB_004ed9f4
//   XREF to: 02d833ec (READ)
//   XREF to: 02d8342c (READ)
// 004ed9f7: FLDZ
// 004ed9f9: FCOMPP
// 004ed9fb: FNSTSW AX
// 004ed9fd: SAHF
// 004ed9fe: JC 0x004eda87
//   XREF to: 004eda87 (CONDITIONAL_JUMP)
// 004eda04: ADD EBX,0x40
//   Label: LAB_004eda04
// 004eda07: CMP EBX,ESI
// 004eda09: JNZ 0x004ed9f4
//   XREF to: 004ed9f4 (CONDITIONAL_JUMP)
// 004eda0b: MOV EDX,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004eda11: XOR EBX,ESI
// 004eda13: TEST EDX,EDX
// 004eda15: JLE 0x004eda40
//   XREF to: 004eda40 (CONDITIONAL_JUMP)
// 004eda17: MOV ESI,0x2d873dc
//   XREF to: 02d873dc (DATA)
// 004eda1c: PUSH ESI
//   Label: LAB_004eda1c
//   XREF to: 02d873dc (DATA)
//   XREF to: 02d87420 (DATA)
// 004eda1d: CALL core_gore.cpp_FUN_004ecad0
//   XREF to: 004ecad0 (UNCONDITIONAL_CALL)
// 004eda22: INC EBX
// 004eda23: MOV ECX,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004eda29: ADD ESP,0x4
// 004eda2c: ADD ESI,0x44
// 004eda2f: CMP EBX,ECX
// 004eda31: JL 0x004eda1c
//   XREF to: 004eda1c (CONDITIONAL_JUMP)
// 004eda33: LEA EAX,[EAX]
// 004eda39: LEA EDX,[EDX]
// 004eda3f: NOP
// 004eda40: PUSH 0x2da8724
//   Label: LAB_004eda40
//   XREF to: 02da8724 (DATA)
// 004eda45: CALL core_gore.cpp_FUN_004ecc40
//   XREF to: 004ecc40 (UNCONDITIONAL_CALL)
// 004eda4a: XOR ESI,ESI
// 004eda4c: MOV EBX,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004eda52: ADD ESP,0x4
// 004eda55: TEST EBX,EBX
// 004eda57: JLE 0x004eda80
//   XREF to: 004eda80 (CONDITIONAL_JUMP)
// 004eda59: MOV EBX,0x2da8724
//   XREF to: 02da8724 (PARAM)
// 004eda5e: PUSH EBX
//   Label: LAB_004eda5e
//   XREF to: 02da8724 (DATA)
//   XREF to: 02da874c (DATA)
// 004eda5f: CALL core_gore.cpp_FUN_004ed0a0
//   XREF to: 004ed0a0 (UNCONDITIONAL_CALL)
// 004eda64: INC ESI
// 004eda65: MOV EDI,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004eda6b: ADD ESP,0x4
// 004eda6e: ADD EBX,0x28
//   XREF to: 02da874c (PARAM)
// 004eda71: CMP ESI,EDI
// 004eda73: JL 0x004eda5e
//   XREF to: 004eda5e (CONDITIONAL_JUMP)
// 004eda75: LEA EAX,[EAX]
// 004eda7b: LEA EDX,[EDX]
// 004eda7e: MOV EBX,EBX
// 004eda80: MOV ESP,EBP
//   Label: LAB_004eda80
// 004eda82: POP EBP
// 004eda83: POP EDI
// 004eda84: POP ESI
// 004eda85: POP EBX
// 004eda86: RET
// 004eda87: PUSH EBX
//   Label: LAB_004eda87
//   XREF to: 02d83414 (DATA)
// 004eda88: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d83408 (READ)
//   XREF to: 02d83448 (READ)
// 004eda8b: CALL dword ptr [EAX + 0x4]
// 004eda8e: ADD ESP,0x4
// 004eda91: JMP 0x004eda04
//   XREF to: 004eda04 (UNCONDITIONAL_JUMP)
