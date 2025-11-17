// Name: core_sound.cpp_CSound_FUN_005b3ba0
// Address: 005b3ba0
// Address Range: [[005b3ba0, 005b3c51]]
// Convention: __cdecl
// Signature: float core_sound.cpp_CSound_FUN_005b3ba0(CSound * this_ptr)
// Cross-references:
//   core_mobster.cpp_FUN_005279f0 (005279f0) at 00527a90 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055ff00 (0055ff00) at 0055ff90 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   sound_sndmain.cpp_FUN_005a8480
//   sound_sndmain.cpp_FUN_005a84d0
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0

#include "nocturne.h"

float __cdecl core_sound_cpp_CSound_FUN_005b3ba0(CSound *this_ptr)

{
  char cVar1;
  int iVar2;
  undefined1 **ppuVar3;
  BADSPACEBASE *in_ESP;
  double dVar4;
  char *in_stack_00000008;
  undefined1 *puStack_15c;
  undefined1 auStack_158 [340];
  
  sound_sndmain_cpp_FUN_005a8480();
  ppuVar3 = &puStack_15c;
  cVar1 = *in_stack_00000008;
  while ((((cVar1 != '\0' && (cVar1 = *in_stack_00000008, cVar1 != '@')) && (cVar1 != '*')) &&
         ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2U) == 0))) {
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    *(char *)ppuVar3 = cVar1;
    cVar1 = *in_stack_00000008;
    ppuVar3 = (undefined1 **)((int)ppuVar3 + 1);
  }
  *(char *)ppuVar3 = '\0';
  iVar2 = sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0((CSfxSample *)&puStack_15c);
  puStack_15c = auStack_158;
  if (iVar2 == 0) {
    return -1.0;
  }
  dVar4 = sound_sndmain_cpp_FUN_005a84d0();
  return (float)dVar4;
}


// Assembly code:
// 005b3ba0: PUSH EBX
//   Label: core_sound.cpp_CSound_FUN_005b3ba0
// 005b3ba1: SUB ESP,0x15c
// 005b3ba7: MOV EBX,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x8] (READ)
// 005b3bae: MOV EAX,ESP
// 005b3bb0: PUSH EAX
// 005b3bb1: CALL sound_sndmain.cpp_FUN_005a8480
//   XREF to: 005a8480 (UNCONDITIONAL_CALL)
// 005b3bb6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x160] (DATA)
// 005b3bba: MOV DL,byte ptr [EBX]
// 005b3bbc: ADD ESP,0x4
// 005b3bbf: TEST DL,DL
// 005b3bc1: JZ 0x005b3bcf
//   XREF to: 005b3bcf (CONDITIONAL_JUMP)
// 005b3bc3: MOV CL,byte ptr [EBX]
//   Label: LAB_005b3bc3
// 005b3bc5: CMP CL,0x40
// 005b3bc8: JZ 0x005b3bcf
//   XREF to: 005b3bcf (CONDITIONAL_JUMP)
// 005b3bca: CMP CL,0x2a
// 005b3bcd: JNZ 0x005b3bfb
//   XREF to: 005b3bfb (CONDITIONAL_JUMP)
// 005b3bcf: MOV byte ptr [EAX],0x0
//   Label: LAB_005b3bcf
//   XREF to: Stack[-0x160] (DATA)
// 005b3bd2: MOV EAX,ESP
// 005b3bd4: PUSH EAX
// 005b3bd5: CALL sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
//   XREF to: 005aa3f0 (UNCONDITIONAL_CALL)
// 005b3bda: ADD ESP,0x4
// 005b3bdd: TEST EAX,EAX
// 005b3bdf: JNZ 0x005b3c1c
//   XREF to: 005b3c1c (CONDITIONAL_JUMP)
// 005b3be1: MOV dword ptr [ESP + 0x158],0xbf800000
//   XREF to: Stack[-0x8] (WRITE)
// 005b3bec: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x8] (READ)
// 005b3bf3: ADD ESP,0x15c
// 005b3bf9: POP EBX
// 005b3bfa: RET
// 005b3bfb: MOV DL,CL
//   Label: LAB_005b3bfb
// 005b3bfd: INC DL
// 005b3bff: AND EDX,0xff
// 005b3c05: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005b3c0c: JNZ 0x005b3bcf
//   XREF to: 005b3bcf (CONDITIONAL_JUMP)
// 005b3c0e: MOV DL,byte ptr [EBX]
// 005b3c10: INC EBX
// 005b3c11: MOV byte ptr [EAX],DL
//   XREF to: Stack[-0x160] (DATA)
// 005b3c13: MOV DH,byte ptr [EBX]
// 005b3c15: INC EAX
// 005b3c16: TEST DH,DH
// 005b3c18: JNZ 0x005b3bc3
//   XREF to: 005b3bc3 (CONDITIONAL_JUMP)
// 005b3c1a: JMP 0x005b3bcf
//   XREF to: 005b3bcf (UNCONDITIONAL_JUMP)
// 005b3c1c: MOV EAX,ESP
//   Label: LAB_005b3c1c
// 005b3c1e: PUSH EAX
// 005b3c1f: CALL sound_sndmain.cpp_FUN_005a84d0
//   XREF to: 005a84d0 (UNCONDITIONAL_CALL)
// 005b3c24: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005b3c2b: MOV dword ptr [ESP + 0x158],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 005b3c32: FLD double ptr [ESP + 0x154]
//   XREF to: Stack[-0x10] (READ)
// 005b3c39: ADD ESP,0x4
// 005b3c3c: FSTP float ptr [ESP + 0x158]
//   XREF to: Stack[-0x8] (WRITE)
// 005b3c43: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x8] (READ)
// 005b3c4a: ADD ESP,0x15c
// 005b3c50: POP EBX
// 005b3c51: RET
