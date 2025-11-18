// Name: sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120
// Address: 005b0120
// Address Range: [[005b0120, 005b033e]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120(LPGUID device_guid, LPCSTR description, LPCSTR module, LPVOID context)
// Cross-references:
//   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390 (005b0390) at 005b03b7 [DATA]
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_create_DirectSound_objec_00652271
//   TerminatedCString s_Querry_DirectSound_capab_0065228b
//   int g_DirectSoundDeviceCount = -0x1
//   undefined4 DAT_03f69b44
//   undefined4 DAT_03f69b48
//   undefined4 DAT_03f69b50
//   undefined4 DAT_03f69b54
//   undefined4 DAT_03f69b58
//   undefined4 DAT_03f69b59
//   undefined4 g_RecordingDevices[7].device_name[14]
//   undefined4 g_RecordingDevices[7].device_name[15]
//   int isRecordingStarted
//   int g_RecordingSamplesSigned
//   SDirectSoundDeviceInfo[8] g_DirectSoundDevices
// Function calls:
//   crt_dsound.c_DirectSoundCreate
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl
sound_snddx_cpp_directSoundEnumerationCallback_FUN_005b0120
          (LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

{
  char cVar1;
  SDirectSoundDeviceInfo *pSVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  byte bVar10;
  char acStack_390 [400];
  char acStack_200 [400];
  DSCAPS DStack_70;
  LPDIRECTSOUND local_10;
  
  bVar10 = 0;
  if (0xb < g_DirectSoundDeviceCount) {
    return 0;
  }
  local_10 = (LPDIRECTSOUND)0x0;
  uVar3 = crt_dsound_c_DirectSoundCreate(device_guid,&local_10,(LPUNKNOWN)0x0);
  if (uVar3 != 0) {
    pcVar9 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_200,"DirectSux: Unable to %s.  (%s)","create DirectSound object",
               pcVar9);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_200);
    return 1;
  }
  if (local_10 != (LPDIRECTSOUND)0x0) {
    crt_memory_c_memset_FUN_005fde40(&DStack_70,0,0x60);
    DStack_70.dwSize = 0x60;
    uVar3 = (*local_10->vtable->GetCaps)(local_10,&DStack_70);
    if (uVar3 != 0) {
      pcVar9 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_390,"DirectSux: Unable to %s.  (%s)","Querry DirectSound capabilities",
                 pcVar9);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_390);
    }
    if (local_10 != (LPDIRECTSOUND)0x0) {
      (*local_10->vtable->Release)();
    }
    if (uVar3 == 0) {
      iVar4 = g_DirectSoundDeviceCount * 0x11c;
      if (device_guid == (LPGUID)0x0) {
        g_DirectSoundDevices[g_DirectSoundDeviceCount].device_id_part = 1;
      }
      else {
        pSVar2 = g_DirectSoundDevices + g_DirectSoundDeviceCount;
        g_DirectSoundDevices[g_DirectSoundDeviceCount].device_id_part = 0;
        puVar7 = (undefined4 *)(iVar4 + 0x3f69c68 + (uint)bVar10 * -8);
        puVar5 = (undefined4 *)((int)device_guid + (uint)bVar10 * -8 + 4);
        *(ulong *)pSVar2->field_4 = device_guid->Data1;
        puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar7 = *puVar5;
        *puVar8 = *puVar6;
        puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
      }
      iVar4 = g_DirectSoundDeviceCount;
      g_DirectSoundDevices[g_DirectSoundDeviceCount].value2 =
           (uint)(((byte)DStack_70.dwFlags & 0x20) != 0);
      g_DirectSoundDevices[iVar4].value1 = (uint)(DStack_70.dwMaxHwMixingStaticBuffers != 0);
      pcVar9 = g_DirectSoundDevices[iVar4].device_description;
      do {
        cVar1 = *description;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = description[1];
        description = description + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      g_DirectSoundDeviceCount = g_DirectSoundDeviceCount + 1;
      return 1;
    }
  }
  return 1;
}


// Assembly code:
// 005b0120: PUSH ESI
//   Label: sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120
// 005b0121: PUSH EDI
// 005b0122: PUSH EBP
// 005b0123: SUB ESP,0x384
// 005b0129: MOV ESI,dword ptr [ESP + 0x394]
//   XREF to: Stack[0x4] (READ)
// 005b0130: CMP dword ptr [0x00681e00],0xc
//   XREF to: 00681e00 (READ)
// 005b0137: JL 0x005b0147
//   XREF to: 005b0147 (CONDITIONAL_JUMP)
// 005b0139: XOR EAX,EAX
// 005b013b: ADD ESP,0x384
// 005b0141: POP EBP
// 005b0142: POP EDI
// 005b0143: POP ESI
// 005b0144: RET 0x10
// 005b0147: XOR ECX,ECX
//   Label: LAB_005b0147
// 005b0149: PUSH ECX
// 005b014a: LEA EAX,[ESP + 0x384]
//   XREF to: Stack[-0x10] (DATA)
// 005b0151: PUSH EAX
// 005b0152: PUSH ESI
// 005b0153: MOV dword ptr [ESP + 0x38c],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005b015a: CALL crt_dsound.c_DirectSoundCreate
//   XREF to: 00610f40 (UNCONDITIONAL_CALL)
// 005b015f: TEST EAX,EAX
// 005b0161: JNZ 0x005b017e
//   XREF to: 005b017e (CONDITIONAL_JUMP)
// 005b0163: CMP dword ptr [ESP + 0x380],0x0
// 005b016b: JNZ 0x005b01c3
//   XREF to: 005b01c3 (CONDITIONAL_JUMP)
// 005b016d: MOV EAX,0x1
//   Label: LAB_005b016d
// 005b0172: ADD ESP,0x384
// 005b0178: POP EBP
// 005b0179: POP EDI
// 005b017a: POP ESI
// 005b017b: RET 0x10
// 005b017e: PUSH EAX
//   Label: LAB_005b017e
// 005b017f: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005b0184: ADD ESP,0x4
// 005b0187: PUSH EAX
// 005b0188: PUSH 0x652271
//   XREF to: 00652271 (DATA)
// 005b018d: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005b0192: LEA EAX,[ESP + 0x19c]
// 005b0199: PUSH EAX
// 005b019a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b019f: ADD ESP,0x10
// 005b01a2: LEA EAX,[ESP + 0x190]
// 005b01a9: PUSH EAX
// 005b01aa: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b01af: MOV EAX,0x1
// 005b01b4: ADD ESP,0x4
// 005b01b7: ADD ESP,0x384
// 005b01bd: POP EBP
// 005b01be: POP EDI
// 005b01bf: POP ESI
// 005b01c0: RET 0x10
// 005b01c3: PUSH 0x60
//   Label: LAB_005b01c3
// 005b01c5: PUSH EAX
// 005b01c6: LEA EAX,[ESP + 0x328]
// 005b01cd: PUSH EAX
// 005b01ce: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005b01d3: ADD ESP,0xc
// 005b01d6: MOV EDI,0x60
// 005b01db: MOV EAX,dword ptr [ESP + 0x380]
// 005b01e2: MOV dword ptr [ESP + 0x320],EDI
// 005b01e9: MOV EDX,dword ptr [EAX]
// 005b01eb: LEA EAX,[ESP + 0x320]
// 005b01f2: PUSH EAX
// 005b01f3: MOV EBP,dword ptr [ESP + 0x384]
// 005b01fa: PUSH EBP
// 005b01fb: CALL dword ptr [EDX + 0x10]
// 005b01fe: TEST EAX,EAX
// 005b0200: JNZ 0x005b02fd
//   XREF to: 005b02fd (CONDITIONAL_JUMP)
// 005b0206: MOV EAX,0x1
// 005b020b: MOV EDI,EAX
//   Label: LAB_005b020b
// 005b020d: MOV EAX,dword ptr [ESP + 0x380]
// 005b0214: TEST EAX,EAX
// 005b0216: JZ 0x005b022e
//   XREF to: 005b022e (CONDITIONAL_JUMP)
// 005b0218: MOV EDX,dword ptr [ESP + 0x380]
// 005b021f: MOV EAX,dword ptr [EAX]
// 005b0221: PUSH EDX
// 005b0222: CALL dword ptr [EAX + 0x8]
// 005b0225: XOR ECX,ECX
// 005b0227: MOV dword ptr [ESP + 0x380],ECX
// 005b022e: TEST EDI,EDI
//   Label: LAB_005b022e
// 005b0230: JZ 0x005b016d
//   XREF to: 005b016d (CONDITIONAL_JUMP)
// 005b0236: MOV EDX,dword ptr [0x00681e00]
//   XREF to: 00681e00 (READ)
// 005b023c: LEA EAX,[EDX*0x8 + 0x0]
// 005b0243: ADD EAX,EDX
// 005b0245: SHL EAX,0x3
// 005b0248: SUB EAX,EDX
// 005b024a: SHL EAX,0x2
// 005b024d: TEST ESI,ESI
// 005b024f: JZ 0x005b0330
//   XREF to: 005b0330 (CONDITIONAL_JUMP)
// 005b0255: PUSH EBX
// 005b0256: XOR EBX,EBX
// 005b0258: LEA EDI,[EAX + 0x3f69c64]
//   XREF to: 03f69b48 (DATA)
// 005b025e: MOV dword ptr [EAX + 0x3f69c60],EBX
//   XREF to: 03f69b44 (WRITE)
// 005b0264: MOVSD ES:EDI,ESI
//   XREF to: 03f69b48 (WRITE)
// 005b0265: MOVSD ES:EDI,ESI
//   XREF to: 03f69b4c (WRITE)
// 005b0266: MOVSD ES:EDI,ESI
//   XREF to: 03f69b50 (WRITE)
// 005b0267: MOVSD ES:EDI,ESI
//   XREF to: 03f69b54 (WRITE)
// 005b0268: POP EBX
// 005b0269: TEST byte ptr [ESP + 0x324],0x20
//   Label: LAB_005b0269
// 005b0271: SETNZ AL
// 005b0274: MOV EDX,dword ptr [0x00681e00]
//   XREF to: 00681e00 (READ)
// 005b027a: MOVZX ESI,AL
// 005b027d: LEA EAX,[EDX*0x8 + 0x0]
// 005b0284: ADD EAX,EDX
// 005b0286: SHL EAX,0x3
// 005b0289: SUB EAX,EDX
// 005b028b: MOV EDI,dword ptr [ESP + 0x338]
// 005b0292: MOV dword ptr [EAX*0x4 + 0x3f69d74],ESI
//   XREF to: 03f69c58 (WRITE)
// 005b0299: TEST EDI,EDI
// 005b029b: SETA AL
// 005b029e: MOV ESI,EAX
// 005b02a0: LEA EAX,[EDX*0x8 + 0x0]
// 005b02a7: ADD EAX,EDX
// 005b02a9: SHL EAX,0x3
// 005b02ac: SUB EAX,EDX
// 005b02ae: SHL EAX,0x2
// 005b02b1: AND ESI,0xff
// 005b02b7: MOV dword ptr [EAX + 0x3f69d78],ESI
//   XREF to: 03f69c5c (WRITE)
// 005b02bd: ADD EAX,0x3f69c60
//   XREF to: 03f69c60 (DATA)
// 005b02c2: MOV ESI,dword ptr [ESP + 0x398]
// 005b02c9: LEA EDI,[EAX + 0x14]
//   XREF to: 03f69b58 (DATA)
// 005b02cc: PUSH EDI
//   XREF to: 03f69b58 (DATA)
// 005b02cd: MOV AL,byte ptr [ESI]
//   Label: LAB_005b02cd
// 005b02cf: MOV byte ptr [EDI],AL
//   XREF to: 03f69b58 (WRITE)
//   XREF to: 03f69b5a (WRITE)
// 005b02d1: CMP AL,0x0
// 005b02d3: JZ 0x005b02e5
//   XREF to: 005b02e5 (CONDITIONAL_JUMP)
// 005b02d5: MOV AL,byte ptr [ESI + 0x1]
// 005b02d8: ADD ESI,0x2
// 005b02db: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03f69b59 (WRITE)
//   XREF to: 03f69b5b (WRITE)
// 005b02de: ADD EDI,0x2
// 005b02e1: CMP AL,0x0
// 005b02e3: JNZ 0x005b02cd
//   XREF to: 005b02cd (CONDITIONAL_JUMP)
// 005b02e5: POP EDI
//   Label: LAB_005b02e5
// 005b02e6: MOV EAX,0x1
// 005b02eb: ADD dword ptr [0x00681e00],EAX
//   XREF to: 00681e00 (READ_WRITE)
// 005b02f1: ADD ESP,0x384
// 005b02f7: POP EBP
// 005b02f8: POP EDI
// 005b02f9: POP ESI
// 005b02fa: RET 0x10
// 005b02fd: PUSH EAX
//   Label: LAB_005b02fd
// 005b02fe: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005b0303: ADD ESP,0x4
// 005b0306: PUSH EAX
// 005b0307: PUSH 0x65228b
//   XREF to: 0065228b (DATA)
// 005b030c: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005b0311: LEA EAX,[ESP + 0xc]
// 005b0315: PUSH EAX
// 005b0316: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b031b: ADD ESP,0x10
// 005b031e: MOV EAX,ESP
// 005b0320: PUSH EAX
// 005b0321: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0326: ADD ESP,0x4
// 005b0329: XOR EAX,EAX
// 005b032b: JMP 0x005b020b
//   XREF to: 005b020b (UNCONDITIONAL_JUMP)
// 005b0330: MOV dword ptr [EAX + 0x3f69c60],0x1
//   Label: LAB_005b0330
//   XREF to: 03f69b44 (WRITE)
// 005b033a: JMP 0x005b0269
//   XREF to: 005b0269 (UNCONDITIONAL_JUMP)
