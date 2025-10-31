// Name: sound_sndmain.cpp_FUN_005a4400
// Address: 005a4400
// Address Range: [[005a4400, 005a4444]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a4400()
// Globals:
//   undefined4 DAT_03f62828
//   SfxSample[64] DAT_03f6282c
//   undefined4 DAT_03f6297c
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62afc
//   undefined4 DAT_03f62b00

#include "nocturne.h"

SfxSample * sound_sndmain_cpp_FUN_005a4400(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    DAT_03f62828 = DAT_03f62828 + 1;
    if (0x3f < DAT_03f62828) {
      DAT_03f62828 = 0;
    }
    if ((DAT_03f6282c[DAT_03f62828].field_150 == 0) && (DAT_03f6282c[DAT_03f62828].ref_count == 0))
    break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (SfxSample *)0x0;
    }
  }
  return DAT_03f6282c + DAT_03f62828;
}


// Assembly code:
// 005a4400: MOV EDX,dword ptr [0x03f62828]
//   Label: sound_sndmain.cpp_FUN_005a4400
//   XREF to: 03f62828 (READ)
// 005a4406: XOR EAX,EAX
// 005a4408: INC EDX
//   Label: LAB_005a4408
// 005a4409: CMP EDX,0x40
// 005a440c: JL 0x005a4410
//   XREF to: 005a4410 (CONDITIONAL_JUMP)
// 005a440e: XOR EDX,EDX
// 005a4410: IMUL ECX,EDX,0x180
//   Label: LAB_005a4410
// 005a4416: CMP dword ptr [ECX + 0x3f6297c],0x0
//   XREF to: 03f6297c (READ)
//   XREF to: 03f62afc (READ)
// 005a441d: JZ 0x005a442e
//   XREF to: 005a442e (CONDITIONAL_JUMP)
// 005a441f: INC EAX
//   Label: LAB_005a441f
// 005a4420: CMP EAX,0x40
// 005a4423: JL 0x005a4408
//   XREF to: 005a4408 (CONDITIONAL_JUMP)
// 005a4425: XOR EAX,EAX
// 005a4427: MOV dword ptr [0x03f62828],EDX
//   XREF to: 03f62828 (WRITE)
// 005a442d: RET
// 005a442e: CMP dword ptr [ECX + 0x3f62980],0x0
//   Label: LAB_005a442e
//   XREF to: 03f62b00 (READ)
// 005a4435: JNZ 0x005a441f
//   XREF to: 005a441f (CONDITIONAL_JUMP)
// 005a4437: MOV EAX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a443c: ADD EAX,ECX
//   XREF to: 03f629ac (DATA)
// 005a443e: MOV dword ptr [0x03f62828],EDX
//   XREF to: 03f62828 (WRITE)
// 005a4444: RET
