// Name: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660
// Address: 005ae660
// Address Range: [[005ae660, 005ae820]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660(CDirectSoundDevice * this_ptr)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Create_temp_secondary_bu_00651b5a
//   GUID g_IID_IKsPropertySet
//   GUID g_IID_IDirectSound3DBuffer
//   IDirectSound* g_DirectSound
//   IKsPropertySet* g_DirectSoundPropertySet
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660(CDirectSoundDevice *this_ptr)

{
  uint error_code;
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  char acStack_1d0 [400];
  DSBUFFERDESC DStack_40;
  undefined1 local_2c [12];
  undefined4 *puStack_20;
  IDirectSoundBuffer *local_18;
  undefined4 local_14;
  
  if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
    (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
    g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
  }
  local_18 = (IDirectSoundBuffer *)0x0;
  local_14 = 0;
  crt_memory_c_memset_FUN_005fde40(local_2c,0,0x12);
  local_2c._0_4_ = (int *)0x10001;
  local_2c._4_4_ = 0x5622;
  puStack_20 = (undefined4 *)0x100002;
  local_2c._8_4_ = (int *)0xac44;
  crt_memory_c_memset_FUN_005fde40(&DStack_40,0,0x14);
  DStack_40.dwSize = 0x14;
  DStack_40.dwFlags = 0x12;
  DStack_40.lpwfxFormat = (LPWAVEFORMATEX)local_2c;
  DStack_40.dwBufferBytes = 0x400;
  error_code = (*g_DirectSound->vtable->CreateSoundBuffer)
                         (g_DirectSound,&DStack_40,&local_18,(LPUNKNOWN)0x0);
  if (error_code == 0) {
    (*local_18->vtable->QueryInterface)();
    if (puStack_20 == (undefined4 *)0x0) {
      if ((int *)local_2c._8_4_ != (int *)0x0) {
        (**(code **)(*(int *)local_2c._8_4_ + 8))();
      }
    }
    else {
      (**(code **)*puStack_20)();
      if (DStack_40.lpwfxFormat != (LPWAVEFORMATEX)0x0) {
        (**(code **)(*(int *)DStack_40.lpwfxFormat + 8))();
        DStack_40.lpwfxFormat = (LPWAVEFORMATEX)0x0;
      }
      if ((int *)local_2c._0_4_ != (int *)0x0) {
        (**(code **)(*(int *)local_2c._0_4_ + 8))();
        return;
      }
    }
  }
  else {
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_1d0,"DirectSux: Unable to %s.  (%s)","Create temp secondary buffer for property set creation",
               pcVar1);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1d0);
  }
  return;
}


// Assembly code:
// 005ae660: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660
// 005ae661: PUSH ESI
// 005ae662: PUSH EDI
// 005ae663: PUSH EBP
// 005ae664: SUB ESP,0x1c0
// 005ae66a: MOV EDX,dword ptr [0x03f6a9c0]
//   XREF to: 03f6a9c0 (READ)
// 005ae670: TEST EDX,EDX
// 005ae672: JZ 0x005ae684
//   XREF to: 005ae684 (CONDITIONAL_JUMP)
// 005ae674: MOV EAX,EDX
// 005ae676: PUSH EAX
// 005ae677: MOV EDX,dword ptr [EDX]
// 005ae679: CALL dword ptr [EDX + 0x8]
// 005ae67c: XOR ECX,ECX
// 005ae67e: MOV dword ptr [0x03f6a9c0],ECX
//   XREF to: 03f6a9c0 (WRITE)
// 005ae684: PUSH 0x12
//   Label: LAB_005ae684
// 005ae686: LEA EAX,[ESP + 0x1a8]
//   XREF to: Stack[-0x2c] (DATA)
// 005ae68d: XOR EBX,EBX
// 005ae68f: MOV EDI,0x5622
// 005ae694: PUSH EBX
// 005ae695: MOV ESI,0x2
// 005ae69a: MOV EBP,0xac44
// 005ae69f: PUSH EAX
// 005ae6a0: MOV dword ptr [ESP + 0x1c4],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005ae6a7: MOV dword ptr [ESP + 0x1c8],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005ae6ae: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ae6b3: MOV EDX,0x1
// 005ae6b8: ADD ESP,0xc
// 005ae6bb: MOV ECX,0x10
// 005ae6c0: LEA EAX,[ESP + 0x190]
// 005ae6c7: PUSH 0x14
// 005ae6c9: MOV word ptr [ESP + 0x1a8],DX
// 005ae6d1: MOV word ptr [ESP + 0x1aa],DX
// 005ae6d9: PUSH EBX
// 005ae6da: MOV dword ptr [ESP + 0x1b0],EDI
// 005ae6e1: MOV word ptr [ESP + 0x1ba],CX
// 005ae6e9: PUSH EAX
// 005ae6ea: MOV word ptr [ESP + 0x1bc],SI
// 005ae6f2: MOV dword ptr [ESP + 0x1b8],EBP
// 005ae6f9: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ae6fe: MOV EAX,0x14
// 005ae703: MOV EDX,0x12
// 005ae708: ADD ESP,0xc
// 005ae70b: MOV ECX,0x400
// 005ae710: MOV dword ptr [ESP + 0x190],EAX
// 005ae717: MOV dword ptr [ESP + 0x194],EDX
// 005ae71e: PUSH EBX
// 005ae71f: LEA EAX,[ESP + 0x1a8]
// 005ae726: LEA EDX,[ESP + 0x1bc]
// 005ae72d: MOV dword ptr [ESP + 0x1a4],EAX
// 005ae734: PUSH EDX
// 005ae735: LEA EDX,[ESP + 0x198]
// 005ae73c: MOV EAX,[0x03f6a9b0]
//   XREF to: 03f6a9b0 (READ)
// 005ae741: MOV dword ptr [ESP + 0x1a0],ECX
// 005ae748: PUSH EDX
// 005ae749: MOV ECX,dword ptr [EAX]
// 005ae74b: PUSH EAX
// 005ae74c: CALL dword ptr [ECX + 0xc]
// 005ae74f: TEST EAX,EAX
// 005ae751: JNZ 0x005ae794
//   XREF to: 005ae794 (CONDITIONAL_JUMP)
// 005ae753: LEA EDX,[ESP + 0x1bc]
// 005ae75a: PUSH EDX
// 005ae75b: MOV EAX,dword ptr [ESP + 0x1bc]
// 005ae762: PUSH 0x686d68
//   XREF to: 00686d68 (DATA)
// 005ae767: MOV EBX,dword ptr [ESP + 0x1c0]
// 005ae76e: MOV EAX,dword ptr [EAX]
// 005ae770: PUSH EBX
// 005ae771: CALL dword ptr [EAX]
// 005ae773: MOV ESI,dword ptr [ESP + 0x1bc]
// 005ae77a: TEST ESI,ESI
// 005ae77c: JNZ 0x005ae7d2
//   XREF to: 005ae7d2 (CONDITIONAL_JUMP)
// 005ae77e: MOV EBP,dword ptr [ESP + 0x1b8]
// 005ae785: TEST EBP,EBP
// 005ae787: JNZ 0x005ae7c2
//   XREF to: 005ae7c2 (CONDITIONAL_JUMP)
// 005ae789: ADD ESP,0x1c0
//   Label: LAB_005ae789
// 005ae78f: POP EBP
// 005ae790: POP EDI
// 005ae791: POP ESI
// 005ae792: POP EBX
// 005ae793: RET
// 005ae794: PUSH EAX
//   Label: LAB_005ae794
// 005ae795: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae79a: ADD ESP,0x4
// 005ae79d: PUSH EAX
// 005ae79e: PUSH 0x651b5a
//   XREF to: 00651b5a (DATA)
// 005ae7a3: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae7a8: LEA EAX,[ESP + 0xc]
// 005ae7ac: PUSH EAX
// 005ae7ad: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae7b2: ADD ESP,0x10
// 005ae7b5: MOV EAX,ESP
// 005ae7b7: PUSH EAX
// 005ae7b8: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005ae7bd: ADD ESP,0x4
// 005ae7c0: JMP 0x005ae789
//   XREF to: 005ae789 (UNCONDITIONAL_JUMP)
// 005ae7c2: PUSH EBP
//   Label: LAB_005ae7c2
// 005ae7c3: MOV EAX,dword ptr [EBP]
// 005ae7c6: CALL dword ptr [EAX + 0x8]
// 005ae7c9: MOV dword ptr [ESP + 0x1b8],ESI
// 005ae7d0: JMP 0x005ae789
//   XREF to: 005ae789 (UNCONDITIONAL_JUMP)
// 005ae7d2: PUSH 0x3f6a9c0
//   Label: LAB_005ae7d2
//   XREF to: 03f6a9c0 (DATA)
// 005ae7d7: PUSH 0x681dd0
//   XREF to: 00681dd0 (DATA)
// 005ae7dc: MOV EAX,dword ptr [ESI]
// 005ae7de: PUSH ESI
// 005ae7df: CALL dword ptr [EAX]
// 005ae7e1: MOV EBP,dword ptr [ESP + 0x1b8]
// 005ae7e8: TEST EBP,EBP
// 005ae7ea: JZ 0x005ae7fc
//   XREF to: 005ae7fc (CONDITIONAL_JUMP)
// 005ae7ec: PUSH EBP
// 005ae7ed: MOV EAX,dword ptr [EBP]
// 005ae7f0: CALL dword ptr [EAX + 0x8]
// 005ae7f3: XOR ECX,ECX
// 005ae7f5: MOV dword ptr [ESP + 0x1b8],ECX
// 005ae7fc: MOV EBX,dword ptr [ESP + 0x1bc]
//   Label: LAB_005ae7fc
// 005ae803: TEST EBX,EBX
// 005ae805: JZ 0x005ae789
//   XREF to: 005ae789 (CONDITIONAL_JUMP)
// 005ae807: PUSH EBX
// 005ae808: MOV EAX,dword ptr [EBX]
// 005ae80a: XOR EDI,EDI
// 005ae80c: CALL dword ptr [EAX + 0x8]
// 005ae80f: MOV dword ptr [ESP + 0x1bc],EDI
// 005ae816: ADD ESP,0x1c0
// 005ae81c: POP EBP
// 005ae81d: POP EDI
// 005ae81e: POP ESI
// 005ae81f: POP EBX
// 005ae820: RET
