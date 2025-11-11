// Name: sound_sndwav.cpp_FUN_005b12e0
// Address: 005b12e0
// Address Range: [[005b12e0, 005b146f]]
// Convention: unknown
// Signature: undefined sound_sndwav.cpp_FUN_005b12e0()
// Globals:
//   TerminatedCString s_WavInDevice_poll_queueWa_006524ac
//   undefined4 DAT_03f6ae20
//   undefined4 DAT_03f6aec0
//   undefined4 DAT_03f6af10
//   undefined4 DAT_03f6af14
//   undefined4 DAT_03f6af18
//   undefined4 DAT_03f6af20
//   undefined4 DAT_03f6af24
//   undefined4 DAT_03f6af28
//   undefined4 DAT_03f6af2c
//   undefined4 DAT_03f6af30
//   undefined4 DAT_03f6af34
//   undefined4 DAT_03f6af38
//   undefined4 DAT_03f6af3c
// Function calls:
//   sound_sndmain.cpp_FUN_005aa7f0
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   sound_sndwav.cpp_waveOutWrite_FUN_005b0cc0

#include "nocturne.h"

int sound_sndwav_cpp_FUN_005b12e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_0000000c;
  
  iVar3 = 0;
  while( true ) {
    if ((&DAT_03f6aec0)[DAT_03f6af38] == 0) {
      return -1;
    }
    iVar1 = ((DAT_03f6af20 - DAT_03f6af3c) * DAT_03f6af30) / DAT_03f6af18;
    if (in_stack_0000000c < iVar1) {
      iVar1 = in_stack_0000000c;
    }
    if (0 < iVar1) {
      sound_sndmain_cpp_FUN_005aa7f0();
      in_stack_0000000c = in_stack_0000000c - iVar1;
      DAT_03f6af3c = DAT_03f6af3c + (DAT_03f6af18 * iVar1) / DAT_03f6af30;
      iVar3 = iVar3 + iVar1;
    }
    if (in_stack_0000000c < 1) {
      return iVar3;
    }
    iVar1 = DAT_03f6af38 + 1;
    if (DAT_03f6af24 <= iVar1) {
      iVar1 = 0;
    }
    if ((&DAT_03f6ae20)[iVar1] == 0) {
      return -1;
    }
    if ((*(byte *)((&DAT_03f6ae20)[iVar1] + 0x10) & 1) == 0) {
      return iVar3;
    }
    iVar2 = sound_sndwav_cpp_waveOutWrite_FUN_005b0cc0();
    if (iVar2 == 0) break;
    DAT_03f6af3c = 0;
    DAT_03f6af38 = iVar1;
  }
  sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
  return -1;
}


// Assembly code:
// 005b12e0: PUSH EBX
//   Label: sound_sndwav.cpp_FUN_005b12e0
// 005b12e1: PUSH ESI
// 005b12e2: PUSH EDI
// 005b12e3: PUSH EBP
// 005b12e4: SUB ESP,0xc
// 005b12e7: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b12eb: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005b12ef: MOV EAX,[0x03f6af10]
//   XREF to: 03f6af10 (READ)
// 005b12f4: MOV EDX,EAX
// 005b12f6: SAR EDX,0x1f
// 005b12f9: SHL EDX,0x3
// 005b12fc: SBB EAX,EDX
// 005b12fe: SAR EAX,0x3
// 005b1301: MOV EDX,dword ptr [0x03f6af14]
//   XREF to: 03f6af14 (READ)
// 005b1307: IMUL EDX,EAX
// 005b130a: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005b130e: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 005b1311: MOV EDX,dword ptr [0x03f6af10]
//   XREF to: 03f6af10 (READ)
// 005b1317: XOR EBP,EBP
// 005b1319: CMP EDX,0x10
// 005b131c: SETZ AL
// 005b131f: AND EAX,0xff
// 005b1324: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005b1328: MOV EAX,[0x03f6af38]
//   Label: LAB_005b1328
//   XREF to: 03f6af38 (READ)
// 005b132d: CMP dword ptr [EAX*0x4 + 0x3f6aec0],0x0
//   XREF to: 03f6aec0 (READ)
// 005b1335: JZ 0x005b142f
//   XREF to: 005b142f (CONDITIONAL_JUMP)
// 005b133b: MOV EBX,dword ptr [0x03f6af3c]
//   XREF to: 03f6af3c (READ)
// 005b1341: MOV EDX,dword ptr [0x03f6af20]
//   XREF to: 03f6af20 (READ)
// 005b1347: MOV EAX,[0x03f6af30]
//   XREF to: 03f6af30 (READ)
// 005b134c: SUB EDX,EBX
// 005b134e: IMUL EDX,EAX
// 005b1351: MOV ECX,dword ptr [0x03f6af18]
//   XREF to: 03f6af18 (READ)
// 005b1357: MOV EAX,EDX
// 005b1359: SAR EDX,0x1f
// 005b135c: IDIV ECX
// 005b135e: MOV EBX,EAX
// 005b1360: CMP EAX,ESI
// 005b1362: JLE 0x005b1366
//   XREF to: 005b1366 (CONDITIONAL_JUMP)
// 005b1364: MOV EBX,ESI
// 005b1366: TEST EBX,EBX
//   Label: LAB_005b1366
// 005b1368: JLE 0x005b13f7
//   XREF to: 005b13f7 (CONDITIONAL_JUMP)
// 005b136e: PUSH EBX
// 005b136f: PUSH EDI
// 005b1370: MOV EAX,[0x03f6af34]
//   XREF to: 03f6af34 (READ)
// 005b1375: PUSH EAX
// 005b1376: MOV EDX,dword ptr [0x03f6af30]
//   XREF to: 03f6af30 (READ)
// 005b137c: PUSH EDX
// 005b137d: MOV ECX,dword ptr [0x03f6af2c]
//   XREF to: 03f6af2c (READ)
// 005b1383: PUSH ECX
// 005b1384: MOV EAX,[0x03f6af28]
//   XREF to: 03f6af28 (READ)
// 005b1389: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005b138d: PUSH EAX
// 005b138e: MOV EAX,[0x03f6af3c]
//   XREF to: 03f6af3c (READ)
// 005b1393: IMUL EAX,ECX
// 005b1396: MOV EDX,dword ptr [0x03f6af38]
//   XREF to: 03f6af38 (READ)
// 005b139c: MOV EDX,dword ptr [EDX*0x4 + 0x3f6aec0]
//   XREF to: 03f6aec0 (DATA)
// 005b13a3: ADD EAX,EDX
// 005b13a5: PUSH EAX
// 005b13a6: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 005b13aa: PUSH EAX
// 005b13ab: MOV EDX,dword ptr [0x03f6af18]
//   XREF to: 03f6af18 (READ)
// 005b13b1: PUSH EDX
// 005b13b2: MOV ECX,dword ptr [0x03f6af14]
//   XREF to: 03f6af14 (READ)
// 005b13b8: PUSH ECX
// 005b13b9: MOV EAX,[0x03f6af10]
//   XREF to: 03f6af10 (READ)
// 005b13be: PUSH EAX
// 005b13bf: CALL sound_sndmain.cpp_FUN_005aa7f0
//   XREF to: 005aa7f0 (UNCONDITIONAL_CALL)
// 005b13c4: MOV EDX,dword ptr [0x03f6af18]
//   XREF to: 03f6af18 (READ)
// 005b13ca: IMUL EDX,EBX
// 005b13cd: ADD ESP,0x2c
// 005b13d0: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005b13d3: IMUL EAX,EBX
// 005b13d6: MOV ECX,dword ptr [0x03f6af30]
//   XREF to: 03f6af30 (READ)
// 005b13dc: ADD EDI,EAX
// 005b13de: MOV EAX,EDX
// 005b13e0: SAR EDX,0x1f
// 005b13e3: IDIV ECX
// 005b13e5: MOV EDX,dword ptr [0x03f6af3c]
//   XREF to: 03f6af3c (READ)
// 005b13eb: SUB ESI,EBX
// 005b13ed: ADD EDX,EAX
// 005b13ef: ADD EBP,EBX
// 005b13f1: MOV dword ptr [0x03f6af3c],EDX
//   XREF to: 03f6af3c (WRITE)
// 005b13f7: TEST ESI,ESI
//   Label: LAB_005b13f7
// 005b13f9: JLE 0x005b1425
//   XREF to: 005b1425 (CONDITIONAL_JUMP)
// 005b13fb: MOV EBX,dword ptr [0x03f6af38]
//   XREF to: 03f6af38 (READ)
// 005b1401: MOV ECX,dword ptr [0x03f6af24]
//   XREF to: 03f6af24 (READ)
// 005b1407: INC EBX
// 005b1408: CMP EBX,ECX
// 005b140a: JL 0x005b140e
//   XREF to: 005b140e (CONDITIONAL_JUMP)
// 005b140c: XOR EBX,EBX
// 005b140e: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_005b140e
// 005b1415: MOV EDX,dword ptr [EAX + 0x3f6ae20]
//   XREF to: 03f6ae20 (READ)
// 005b141b: TEST EDX,EDX
// 005b141d: JZ 0x005b142f
//   XREF to: 005b142f (CONDITIONAL_JUMP)
// 005b141f: TEST byte ptr [EDX + 0x10],0x1
// 005b1423: JNZ 0x005b1436
//   XREF to: 005b1436 (CONDITIONAL_JUMP)
// 005b1425: MOV EAX,EBP
//   Label: LAB_005b1425
// 005b1427: ADD ESP,0xc
//   Label: LAB_005b1427
// 005b142a: POP EBP
// 005b142b: POP EDI
// 005b142c: POP ESI
// 005b142d: POP EBX
// 005b142e: RET
// 005b142f: MOV EAX,0xffffffff
//   Label: LAB_005b142f
// 005b1434: JMP 0x005b1427
//   XREF to: 005b1427 (UNCONDITIONAL_JUMP)
// 005b1436: PUSH EBX
//   Label: LAB_005b1436
// 005b1437: CALL sound_sndwav.cpp_waveOutWrite_FUN_005b0cc0
//   XREF to: 005b0cc0 (UNCONDITIONAL_CALL)
// 005b143c: ADD ESP,0x4
// 005b143f: TEST EAX,EAX
// 005b1441: JZ 0x005b1456
//   XREF to: 005b1456 (CONDITIONAL_JUMP)
// 005b1443: XOR ECX,ECX
// 005b1445: MOV dword ptr [0x03f6af38],EBX
//   XREF to: 03f6af38 (WRITE)
// 005b144b: MOV dword ptr [0x03f6af3c],ECX
//   XREF to: 03f6af3c (WRITE)
// 005b1451: JMP 0x005b1328
//   XREF to: 005b1328 (UNCONDITIONAL_JUMP)
// 005b1456: PUSH 0x6524ac
//   Label: LAB_005b1456
//   XREF to: 006524ac (DATA)
// 005b145b: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b1460: MOV EAX,0xffffffff
// 005b1465: ADD ESP,0x4
// 005b1468: ADD ESP,0xc
// 005b146b: POP EBP
// 005b146c: POP EDI
// 005b146d: POP ESI
// 005b146e: POP EBX
// 005b146f: RET
