// Name: sound_sndmain.cpp_FUN_005aa2f0
// Address: 005aa2f0
// Address Range: [[005aa2f0, 005aa33c]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa2f0()
// Cross-references:
//   sound_sndmain.cpp_FUN_005aa360 (005aa360) at 005aa3b4 [UNCONDITIONAL_CALL]
// Globals:
//   CSfxSlot[64] g_SfxSlots
//   undefined4 DAT_03f5db1c
//   undefined4 g_SfxSlots[1].status
//   undefined4 DAT_03f5dc44
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005aa2f0(void)

{
  int iVar1;
  int iVar2;
  char *in_stack_00000004;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar2 = 0;
  do {
    if (*(char **)(g_SfxSlots[0].field4_0x7c + iVar2 + -4) != (char *)0x0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                        (*(char **)(g_SfxSlots[0].field4_0x7c + iVar2 + -4),in_stack_00000004);
      if (iVar1 == 0) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60
                  ((CSfxSlot *)(g_SfxSlots[0].options.field5_0x14 + iVar2 + -0x14));
      }
    }
    iVar2 = iVar2 + 0x128;
  } while (iVar2 != 0x4a00);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}


// Assembly code:
// 005aa2f0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005aa2f0
// 005aa2f1: PUSH ESI
// 005aa2f2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005aa2f6: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005aa2fb: XOR EBX,EBX
// 005aa2fd: MOV EAX,dword ptr [EBX + 0x3f5db1c]
//   Label: LAB_005aa2fd
//   XREF to: 03f5db1c (READ)
//   XREF to: 03f5dc44 (READ)
// 005aa303: TEST EAX,EAX
// 005aa305: JNZ 0x005aa31d
//   XREF to: 005aa31d (CONDITIONAL_JUMP)
// 005aa307: ADD EBX,0x128
//   Label: LAB_005aa307
// 005aa30d: CMP EBX,0x4a00
// 005aa313: JNZ 0x005aa2fd
//   XREF to: 005aa2fd (CONDITIONAL_JUMP)
// 005aa315: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005aa31a: POP ESI
// 005aa31b: POP EBX
// 005aa31c: RET
// 005aa31d: PUSH ESI
//   Label: LAB_005aa31d
// 005aa31e: PUSH EAX
// 005aa31f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005aa324: ADD ESP,0x8
// 005aa327: TEST EAX,EAX
// 005aa329: JNZ 0x005aa307
//   XREF to: 005aa307 (CONDITIONAL_JUMP)
// 005aa32b: MOV EAX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005aa330: ADD EAX,EBX
// 005aa332: PUSH EAX
//   XREF to: 03f5dbcc (DATA)
// 005aa333: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005aa338: ADD ESP,0x4
// 005aa33b: JMP 0x005aa307
//   XREF to: 005aa307 (UNCONDITIONAL_JUMP)
