// Name: sound_mp3.cpp_FUN_005301b0
// Address: 005301b0
// Address Range: [[005301b0, 005302ea]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_005301b0()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 005350f5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_005301b0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void sound_mp3_cpp_FUN_005301b0(void)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int local_28;
  int local_18;
  
  iVar1 = *(int *)(in_stack_00000010 + 0x10);
  local_28 = 0;
  do {
    local_18 = 0;
    if (0 < iVar1) {
      puVar9 = (uint *)(local_28 + in_stack_00000004);
      pfVar4 = (float *)(local_28 + in_stack_00000008);
      piVar5 = (int *)(local_28 + in_stack_0000000c);
      pfVar6 = pfVar4;
      do {
        if (*piVar5 == 0) {
          *pfVar6 = 0.0;
        }
        else {
          bVar3 = (byte)*piVar5;
          if ((*(uint *)(local_28 + local_18 * 0x180 + in_stack_00000004) >> ((byte)*piVar5 & 0x1f)
              & 1) == 1) {
            *pfVar6 = 0.0;
          }
          else {
            *pfVar6 = -1.0;
          }
          iVar7 = 1 << (bVar3 & 0x1f);
          fVar2 = 1.0 / (float)iVar7;
          iVar8 = 1 << (bVar3 + 1 & 0x1f);
          *pfVar4 = ((float)iVar8 * ((float)(*puVar9 & iVar7 - 1U) * fVar2 + *pfVar4 + fVar2)) /
                    (float)(iVar8 + -1);
        }
        pfVar6 = pfVar6 + 0x60;
        piVar5 = piVar5 + 0x20;
        local_18 = local_18 + 1;
        puVar9 = puVar9 + 0x60;
        pfVar4 = pfVar4 + 0x60;
      } while (local_18 < iVar1);
    }
    local_28 = local_28 + 4;
  } while (local_28 != 0x80);
  return;
}


// Assembly code:
// 005301b0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_005301b0
// 005301b1: PUSH ESI
// 005301b2: PUSH EDI
// 005301b3: PUSH EBP
// 005301b4: MOV EBP,ESP
// 005301b6: SUB ESP,0x20
// 005301b9: AND ESP,0xfffffff8
// 005301bc: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005301bf: XOR EDX,EDX
// 005301c1: MOV EAX,dword ptr [EAX + 0x10]
// 005301c4: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005301c8: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005301cc: XOR ECX,ECX
//   Label: LAB_005301cc
// 005301ce: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005301d2: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005301d6: TEST EBX,EBX
// 005301d8: JLE 0x00530235
//   XREF to: 00530235 (CONDITIONAL_JUMP)
// 005301da: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005301de: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005301e1: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005301e4: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005301e8: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005301eb: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005301ef: ADD EDI,ESI
// 005301f1: ADD EAX,EDX
// 005301f3: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005301f7: MOV EBX,EAX
// 005301f9: ADD EDX,ECX
// 005301fb: IMUL ECX,dword ptr [ESP + 0x18],0x180
//   Label: LAB_005301fb
//   XREF to: Stack[-0x18] (READ)
// 00530203: MOV ESI,dword ptr [EDX]
// 00530205: TEST ESI,ESI
// 00530207: JNZ 0x0053024f
//   XREF to: 0053024f (CONDITIONAL_JUMP)
// 00530209: MOV dword ptr [EBX],ESI
// 0053020b: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_0053020b
//   XREF to: Stack[-0x18] (READ)
// 0053020f: ADD EBX,0x180
// 00530215: ADD EDX,0x80
// 0053021b: INC ESI
// 0053021c: ADD EDI,0x180
// 00530222: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00530226: MOV ECX,ESI
// 00530228: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0053022c: ADD EAX,0x180
// 00530231: CMP ECX,ESI
// 00530233: JL 0x005301fb
//   XREF to: 005301fb (CONDITIONAL_JUMP)
// 00530235: MOV EDI,dword ptr [ESP + 0x8]
//   Label: LAB_00530235
//   XREF to: Stack[-0x28] (READ)
// 00530239: ADD EDI,0x4
// 0053023c: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00530240: CMP EDI,0x80
// 00530246: JNZ 0x005301cc
//   XREF to: 005301cc (CONDITIONAL_JUMP)
// 00530248: MOV ESP,EBP
// 0053024a: POP EBP
// 0053024b: POP EDI
// 0053024c: POP ESI
// 0053024d: POP EBX
// 0053024e: RET
// 0053024f: INC ESI
//   Label: LAB_0053024f
// 00530250: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00530254: ADD ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00530257: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0053025b: ADD ESI,ECX
// 0053025d: MOV ECX,dword ptr [EDX]
// 0053025f: MOV ESI,dword ptr [ESI]
// 00530261: SHR ESI,CL
// 00530263: MOV ECX,ESI
// 00530265: AND ECX,0x1
// 00530268: CMP ECX,0x1
// 0053026b: JNZ 0x005302e3
//   XREF to: 005302e3 (CONDITIONAL_JUMP)
// 0053026d: MOV dword ptr [EBX],0x0
// 00530273: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_00530273
//   XREF to: Stack[-0x1c] (READ)
// 00530277: MOV ESI,0x1
// 0053027c: DEC ECX
// 0053027d: SHL ESI,CL
// 0053027f: MOV ECX,ESI
// 00530281: DEC ESI
// 00530282: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00530286: MOV ESI,dword ptr [EDI]
// 00530288: AND ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0053028c: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00530290: XOR ESI,ESI
// 00530292: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00530296: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0053029a: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x30] (DATA)
// 0053029d: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005302a1: FILD qword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005302a4: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005302a8: FLD1
// 005302aa: FDIVRP
// 005302ac: MOV CL,byte ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005302b0: MOV ESI,0x1
// 005302b5: FXCH
// 005302b7: FMUL ST1
// 005302b9: SHL ESI,CL
// 005302bb: FLD float ptr [EAX]
// 005302bd: FXCH
// 005302bf: FADD ST0,ST1
// 005302c1: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005302c5: FSTP ST1
// 005302c7: FADDP
// 005302c9: LEA ECX,[ESI + -0x1]
// 005302cc: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005302d0: FMULP
// 005302d2: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005302d6: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005302da: FDIVP
// 005302dc: FSTP float ptr [EAX]
// 005302de: JMP 0x0053020b
//   XREF to: 0053020b (UNCONDITIONAL_JUMP)
// 005302e3: MOV dword ptr [EBX],0xbf800000
//   Label: LAB_005302e3
// 005302e9: JMP 0x00530273
//   XREF to: 00530273 (UNCONDITIONAL_JUMP)
