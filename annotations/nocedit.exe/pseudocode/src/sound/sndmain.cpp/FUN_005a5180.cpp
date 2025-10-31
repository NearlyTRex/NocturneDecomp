// Name: sound_sndmain.cpp_FUN_005a5180
// Address: 005a5180
// Address Range: [[005a5180, 005a51fb]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a5180()
// Globals:
//   TerminatedCString s_sound_0064fa53
//   TerminatedCString s_mp3_0064fa59
//   TerminatedCString s_mp3_0064fa5d
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005a5180(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char acStack_f4 [244];
  
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880("sound",in_stack_00000004);
  if (iVar1 < 0x200001) {
    engine_dosio_c_splitPath_FUN_00481f20
              (in_stack_00000008,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xffffff04);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff08,"mp3");
    if (iVar1 != 0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(acStack_f4,".mp3");
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}


// Assembly code:
// 005a5180: SUB ESP,0x100
//   Label: sound_sndmain.cpp_FUN_005a5180
// 005a5186: MOV EDX,dword ptr [ESP + 0x104]
//   XREF to: Stack[0x4] (READ)
// 005a518d: PUSH EDX
// 005a518e: PUSH 0x64fa53
//   XREF to: 0064fa53 (DATA)
// 005a5193: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005a5198: ADD ESP,0x8
// 005a519b: CMP EAX,0x200000
// 005a51a0: JLE 0x005a51ae
//   XREF to: 005a51ae (CONDITIONAL_JUMP)
// 005a51a2: MOV EAX,0x1
//   Label: LAB_005a51a2
// 005a51a7: ADD ESP,0x100
// 005a51ad: RET
// 005a51ae: MOV EAX,ESP
//   Label: LAB_005a51ae
// 005a51b0: PUSH EAX
// 005a51b1: PUSH 0x0
// 005a51b3: PUSH 0x0
// 005a51b5: PUSH 0x0
// 005a51b7: MOV ECX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 005a51be: PUSH ECX
// 005a51bf: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005a51c4: ADD ESP,0x14
// 005a51c7: PUSH 0x64fa59
//   XREF to: 0064fa59 (DATA)
// 005a51cc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x100] (DATA)
// 005a51d0: PUSH EAX
// 005a51d1: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a51d6: ADD ESP,0x8
// 005a51d9: TEST EAX,EAX
// 005a51db: JZ 0x005a51a2
//   XREF to: 005a51a2 (CONDITIONAL_JUMP)
// 005a51dd: PUSH 0x64fa5d
//   XREF to: 0064fa5d (DATA)
// 005a51e2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x100] (DATA)
// 005a51e6: PUSH EAX
// 005a51e7: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a51ec: ADD ESP,0x8
// 005a51ef: TEST EAX,EAX
// 005a51f1: JZ 0x005a51a2
//   XREF to: 005a51a2 (CONDITIONAL_JUMP)
// 005a51f3: XOR EAX,EAX
// 005a51f5: ADD ESP,0x100
// 005a51fb: RET
