// Name: sound_sndmain.cpp_ReallocSomething_FUN_005a6170
// Address: 005a6170
// Address Range: [[005a6170, 005a62bf]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_ReallocSomething_FUN_005a6170()
// Cross-references:
//   sound_sndmain.cpp_FUN_005a5200 (005a5200) at 005a53de [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4ea2 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a94ec [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_allocateHwSample_-_failed_0064fabf
//   undefined4 s_..\sound\sndmain.cpp_0064fcbf
//   undefined4 DAT_03f62828
//   SfxSample[64] DAT_03f6282c
//   undefined4 DAT_03f62980
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62afc
//   undefined4 DAT_03f62b00
//   undefined4 DAT_03f62b04
//   CSound* g_CSoundInstance
// Function calls:
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   sound_sndmain.cpp_FUN_005a4450
//   sound_sndmain.cpp_FUN_005a8550
//   sound_sndmain.cpp_FUN_005ab5a0
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_SfxSample_freeSampleData_FUN_005a6400
//   sound_sndmain.cpp_SfxSample_releaseBufferId_FUN_005a63b0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_ReallocSomething(undefined4 param_1) */

undefined1 * sound_sndmain_cpp_ReallocSomething_FUN_005a6170(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  SfxSample *in_stack_00000004;
  char *filename;
  
  sound_sndmain_cpp_SfxSample_releaseBufferId_FUN_005a63b0(in_stack_00000004);
  sound_sndmain_cpp_SfxSample_freeSampleData_FUN_005a6400(in_stack_00000004);
  iVar1 = sound_sndmain_cpp_FUN_005ab5a0();
  if (iVar1 == 0) {
    sound_sndmain_cpp_FUN_005a8550();
    sound_sndmain_cpp_FUN_005a4450();
    iVar3 = 0x6fb;
    filename = "A..\\sound\\sndmain.cpp" + 1;
    iVar1 = sound_sndmain_cpp_FUN_005a8550();
    puVar2 = (undefined1 *)
             shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (in_stack_00000004->sample_data,iVar1 * *(int *)in_stack_00000004->field_160,
                        filename,iVar3);
    if (puVar2 != (undefined1 *)0x0) {
      in_stack_00000004->sample_data = puVar2;
      return &DAT_00000001;
    }
  }
  else {
    if (g_CSoundInstance != (CSound *)0x0) {
      do {
        puVar2 = (undefined1 *)(*(code *)g_CSoundInstance->vtable->field_44)();
        if (puVar2 != (undefined1 *)0x0) goto LAB_005a6225;
        iVar3 = 0;
        iVar1 = DAT_03f62828;
        do {
          iVar1 = iVar1 + 1;
          if (0x3f < iVar1) {
            iVar1 = 0;
          }
          if (((DAT_03f6282c[iVar1].ref_count == 0) &&
              (DAT_03f6282c[iVar1].buffer_id != (void *)0x0)) &&
             (DAT_03f6282c[iVar1].field_150 == 0)) {
            sound_sndmain_cpp_SfxSample_freeMemory_FUN_005a62c0(DAT_03f6282c + iVar1);
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x40);
      } while (iVar3 < 0x40);
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
    }
    puVar2 = (undefined1 *)0x0;
LAB_005a6225:
    in_stack_00000004->buffer_id = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      return &DAT_00000001;
    }
  }
  return puVar2;
}


// Assembly code:
// 005a6170: PUSH EBX
//   Label: sound_sndmain.cpp_ReallocSomething_FUN_005a6170
// 005a6171: PUSH ESI
// 005a6172: PUSH EDI
// 005a6173: PUSH EBP
// 005a6174: SUB ESP,0x4
// 005a6177: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005a617b: PUSH EDX
// 005a617c: CALL sound_sndmain.cpp_SfxSample_releaseBufferId_FUN_005a63b0
//   XREF to: 005a63b0 (UNCONDITIONAL_CALL)
// 005a6181: ADD ESP,0x4
// 005a6184: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005a6188: PUSH ECX
// 005a6189: CALL sound_sndmain.cpp_SfxSample_freeSampleData_FUN_005a6400
//   XREF to: 005a6400 (UNCONDITIONAL_CALL)
// 005a618e: ADD ESP,0x4
// 005a6191: CALL sound_sndmain.cpp_FUN_005ab5a0
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 005a6196: TEST EAX,EAX
// 005a6198: JZ 0x005a6262
//   XREF to: 005a6262 (CONDITIONAL_JUMP)
// 005a619e: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005a61a2: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005a61a6: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005a61aa: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005a61ae: MOV ECX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a61b4: MOV EAX,dword ptr [EAX + 0x108]
// 005a61ba: MOV ESI,dword ptr [ESI + 0x10c]
// 005a61c0: MOV EBP,dword ptr [EBP + 0x160]
// 005a61c6: MOV EDI,dword ptr [EDI + 0x104]
// 005a61cc: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 005a61cf: TEST ECX,ECX
// 005a61d1: JZ 0x005a6223
//   XREF to: 005a6223 (CONDITIONAL_JUMP)
// 005a61d3: PUSH EBP
//   Label: LAB_005a61d3
// 005a61d4: PUSH ESI
// 005a61d5: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005a61d9: PUSH EBX
// 005a61da: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a61df: PUSH EDI
// 005a61e0: MOV EDX,dword ptr [EAX]
// 005a61e2: PUSH EAX
// 005a61e3: CALL dword ptr [EDX + 0x2c]
// 005a61e6: ADD ESP,0x14
// 005a61e9: TEST EAX,EAX
// 005a61eb: JNZ 0x005a6225
//   XREF to: 005a6225 (CONDITIONAL_JUMP)
// 005a61ed: MOV EAX,[0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a61f2: XOR EBX,EBX
// 005a61f4: INC EAX
//   Label: LAB_005a61f4
// 005a61f5: CMP EAX,0x40
// 005a61f8: JL 0x005a61fc
//   XREF to: 005a61fc (CONDITIONAL_JUMP)
// 005a61fa: XOR EAX,EAX
// 005a61fc: IMUL EDX,EAX,0x180
//   Label: LAB_005a61fc
// 005a6202: CMP dword ptr [EDX + 0x3f62980],0x0
//   XREF to: 03f62980 (READ)
//   XREF to: 03f62b00 (READ)
// 005a6209: JZ 0x005a623f
//   XREF to: 005a623f (CONDITIONAL_JUMP)
// 005a620b: INC EBX
//   Label: LAB_005a620b
// 005a620c: CMP EBX,0x40
// 005a620f: JL 0x005a61f4
//   XREF to: 005a61f4 (CONDITIONAL_JUMP)
// 005a6211: CMP EBX,0x40
//   Label: LAB_005a6211
// 005a6214: JL 0x005a61d3
//   XREF to: 005a61d3 (CONDITIONAL_JUMP)
// 005a6216: PUSH 0x64fabf
//   XREF to: 0064fabf (DATA)
// 005a621b: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a6220: ADD ESP,0x4
// 005a6223: XOR EAX,EAX
//   Label: LAB_005a6223
// 005a6225: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005a6225
//   XREF to: Stack[0x4] (READ)
// 005a6229: MOV dword ptr [EDX + 0x158],EAX
// 005a622f: TEST EAX,EAX
// 005a6231: JNZ 0x005a62b3
//   XREF to: 005a62b3 (CONDITIONAL_JUMP)
// 005a6237: ADD ESP,0x4
//   Label: LAB_005a6237
// 005a623a: POP EBP
// 005a623b: POP EDI
// 005a623c: POP ESI
// 005a623d: POP EBX
// 005a623e: RET
// 005a623f: CMP dword ptr [EDX + 0x3f62984],0x0
//   Label: LAB_005a623f
//   XREF to: 03f62b04 (READ)
// 005a6246: JZ 0x005a620b
//   XREF to: 005a620b (CONDITIONAL_JUMP)
// 005a6248: CMP dword ptr [EDX + 0x3f6297c],0x0
//   XREF to: 03f62afc (READ)
// 005a624f: JNZ 0x005a620b
//   XREF to: 005a620b (CONDITIONAL_JUMP)
// 005a6251: ADD EDX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a6257: PUSH EDX
//   XREF to: 03f629ac (DATA)
// 005a6258: CALL sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a625d: ADD ESP,0x4
// 005a6260: JMP 0x005a6211
//   XREF to: 005a6211 (UNCONDITIONAL_JUMP)
// 005a6262: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_005a6262
//   XREF to: Stack[0x4] (READ)
// 005a6266: PUSH EBX
// 005a6267: CALL sound_sndmain.cpp_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a626c: IMUL EAX,dword ptr [EBX + 0x160]
// 005a6273: ADD ESP,0x4
// 005a6276: PUSH EAX
// 005a6277: CALL sound_sndmain.cpp_FUN_005a4450
//   XREF to: 005a4450 (UNCONDITIONAL_CALL)
// 005a627c: ADD ESP,0x4
// 005a627f: PUSH 0x6fb
// 005a6284: PUSH 0x64fcbf
//   XREF to: 0064fcbf (DATA)
// 005a6289: PUSH EBX
// 005a628a: CALL sound_sndmain.cpp_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a628f: IMUL EAX,dword ptr [EBX + 0x160]
// 005a6296: ADD ESP,0x4
// 005a6299: PUSH EAX
// 005a629a: MOV EDX,dword ptr [EBX + 0x120]
// 005a62a0: PUSH EDX
// 005a62a1: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 005a62a6: ADD ESP,0x10
// 005a62a9: TEST EAX,EAX
// 005a62ab: JZ 0x005a6237
//   XREF to: 005a6237 (CONDITIONAL_JUMP)
// 005a62ad: MOV dword ptr [EBX + 0x120],EAX
// 005a62b3: MOV EAX,0x1
//   Label: LAB_005a62b3
// 005a62b8: ADD ESP,0x4
// 005a62bb: POP EBP
// 005a62bc: POP EDI
// 005a62bd: POP ESI
// 005a62be: POP EBX
// 005a62bf: RET
