// Name: sound_sndmain.cpp_FUN_005aa360
// Address: 005aa360
// Address Range: [[005aa360, 005aa3bd]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa360()
// Globals:
//   SfxSample[64] DAT_03f6282c
//   undefined4 DAT_03f62980
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62b00
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   sound_sndmain.cpp_FUN_005aa2f0
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005aa360(void)

{
  int iVar1;
  int iVar2;
  char *in_stack_00000004;
  int in_stack_0000000c;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (in_stack_0000000c != 0) {
    sound_sndmain_cpp_FUN_005aa2f0();
  }
  iVar2 = 0;
  do {
    if (*(int *)(DAT_03f6282c[0].field_160 + iVar2 + -0xc) == 0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(DAT_03f6282c[0].name + iVar2,in_stack_00000004);
      if (iVar1 == 0) {
        sound_sndmain_cpp_SfxSample_freeMemory_FUN_005a62c0
                  ((SfxSample *)(DAT_03f6282c[0].name + iVar2));
      }
    }
    iVar2 = iVar2 + 0x180;
  } while (iVar2 != 0x6000);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}


// Assembly code:
// 005aa360: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005aa360
// 005aa361: PUSH ESI
// 005aa362: PUSH EDI
// 005aa363: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005aa367: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005aa36c: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0x8] (READ)
// 005aa371: JNZ 0x005aa3b3
//   XREF to: 005aa3b3 (CONDITIONAL_JUMP)
// 005aa373: XOR EBX,EBX
//   Label: LAB_005aa373
// 005aa375: CMP dword ptr [EBX + 0x3f62980],0x0
//   Label: LAB_005aa375
//   XREF to: 03f62980 (READ)
//   XREF to: 03f62b00 (READ)
// 005aa37c: JNZ 0x005aa39c
//   XREF to: 005aa39c (CONDITIONAL_JUMP)
// 005aa37e: MOV ESI,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005aa383: PUSH EDI
// 005aa384: ADD ESI,EBX
// 005aa386: PUSH ESI
//   XREF to: 03f6282c (DATA)
//   XREF to: 03f629ac (DATA)
// 005aa387: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005aa38c: ADD ESP,0x8
// 005aa38f: TEST EAX,EAX
// 005aa391: JNZ 0x005aa39c
//   XREF to: 005aa39c (CONDITIONAL_JUMP)
// 005aa393: PUSH ESI
//   XREF to: 03f6282c (DATA)
// 005aa394: CALL sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005aa399: ADD ESP,0x4
// 005aa39c: ADD EBX,0x180
//   Label: LAB_005aa39c
// 005aa3a2: CMP EBX,0x6000
// 005aa3a8: JNZ 0x005aa375
//   XREF to: 005aa375 (CONDITIONAL_JUMP)
// 005aa3aa: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005aa3af: POP EDI
// 005aa3b0: POP ESI
// 005aa3b1: POP EBX
// 005aa3b2: RET
// 005aa3b3: PUSH EDI
//   Label: LAB_005aa3b3
// 005aa3b4: CALL sound_sndmain.cpp_FUN_005aa2f0
//   XREF to: 005aa2f0 (UNCONDITIONAL_CALL)
// 005aa3b9: ADD ESP,0x4
// 005aa3bc: JMP 0x005aa373
//   XREF to: 005aa373 (UNCONDITIONAL_JUMP)
