// Name: sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
// Address: 005aa0a0
// Address Range: [[005aa0a0, 005aa1bb]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0(double front_x, double front_y, double front_z, double up_x, double up_y, double up_z, double right_x, double right_y, double right_z)
// Cross-references:
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580fce [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_configure_FUN_005b3830 (005b3830) at 005b3917 [UNCONDITIONAL_CALL]
//   core_sound.cpp_updateListeners_FUN_005b1870 (005b1870) at 005b1acf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 (005aae00) at 005aae72 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 (005ad3b0) at 005ad44b [UNCONDITIONAL_CALL]
// Globals:
//   CVector3d g_Cached3DListenerOrientFront
//   undefined4 g_Cached3DListenerOrientFront.x+4
//   undefined4 g_Cached3DListenerOrientFront.y
//   undefined4 g_Cached3DListenerOrientFront.y+4
//   undefined4 g_Cached3DListenerOrientFront.z
//   undefined4 g_Cached3DListenerOrientFront.z+4
//   CVector3d g_Cached3DListenerOrientUp
//   undefined4 g_Cached3DListenerOrientUp.x+4
//   undefined4 g_Cached3DListenerOrientUp.y
//   undefined4 g_Cached3DListenerOrientUp.y+4
//   undefined4 g_Cached3DListenerOrientUp.z
//   undefined4 g_Cached3DListenerOrientUp.z+4
//   CVector3d g_Cached3DListenerOrientRight
//   undefined4 g_Cached3DListenerOrientRight.x+4
//   undefined4 g_Cached3DListenerOrientRight.y
//   undefined4 g_Cached3DListenerOrientRight.y+4
//   undefined4 g_Cached3DListenerOrientRight.z
//   undefined4 g_Cached3DListenerOrientRight.z+4
//   CSoundDevice* g_CSoundDevicePtr

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0
          (double front_x,double front_y,double front_z,double up_x,double up_y,double up_z,
          double right_x,double right_y,double right_z)

{
  g_Cached3DListenerOrientFront.x = front_x;
  g_Cached3DListenerOrientFront.y = front_y;
  g_Cached3DListenerOrientFront.z = front_z;
  g_Cached3DListenerOrientUp.x = up_x;
  g_Cached3DListenerOrientUp.y = up_y;
  g_Cached3DListenerOrientUp.z = up_z;
  g_Cached3DListenerOrientRight.x = right_x;
  g_Cached3DListenerOrientRight.y = right_y;
  g_Cached3DListenerOrientRight.z = right_z;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->set3DListenerOrient)
            (g_CSoundDevicePtr,front_x,front_y,front_z,up_x,up_y,up_z);
  return;
}


// Assembly code:
// 005aa0a0: PUSH EBP
//   Label: sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
// 005aa0a1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005aa0a5: MOV [0x03f68860],EAX
//   XREF to: 03f68860 (WRITE)
// 005aa0aa: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005aa0ae: MOV [0x03f68864],EAX
//   XREF to: 03f68864 (WRITE)
// 005aa0b3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005aa0b7: MOV [0x03f68868],EAX
//   XREF to: 03f68868 (WRITE)
// 005aa0bc: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005aa0c0: MOV [0x03f6886c],EAX
//   XREF to: 03f6886c (WRITE)
// 005aa0c5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005aa0c9: MOV [0x03f68870],EAX
//   XREF to: 03f68870 (WRITE)
// 005aa0ce: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 005aa0d2: MOV [0x03f68874],EAX
//   XREF to: 03f68874 (WRITE)
// 005aa0d7: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x1c] (READ)
// 005aa0db: MOV [0x03f68878],EAX
//   XREF to: 03f68878 (WRITE)
// 005aa0e0: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x20] (READ)
// 005aa0e4: MOV [0x03f6887c],EAX
//   XREF to: 03f6887c (WRITE)
// 005aa0e9: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x24] (READ)
// 005aa0ed: MOV [0x03f68880],EAX
//   XREF to: 03f68880 (WRITE)
// 005aa0f2: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x28] (READ)
// 005aa0f6: MOV [0x03f68884],EAX
//   XREF to: 03f68884 (WRITE)
// 005aa0fb: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x2c] (READ)
// 005aa0ff: MOV [0x03f68888],EAX
//   XREF to: 03f68888 (WRITE)
// 005aa104: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x30] (READ)
// 005aa108: MOV [0x03f6888c],EAX
//   XREF to: 03f6888c (WRITE)
// 005aa10d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x34] (READ)
// 005aa111: MOV [0x03f68890],EAX
//   XREF to: 03f68890 (WRITE)
// 005aa116: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x38] (READ)
// 005aa11a: MOV [0x03f68894],EAX
//   XREF to: 03f68894 (WRITE)
// 005aa11f: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x3c] (READ)
// 005aa123: MOV [0x03f68898],EAX
//   XREF to: 03f68898 (WRITE)
// 005aa128: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x40] (READ)
// 005aa12c: MOV [0x03f6889c],EAX
//   XREF to: 03f6889c (WRITE)
// 005aa131: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x44] (READ)
// 005aa135: MOV [0x03f688a0],EAX
//   XREF to: 03f688a0 (WRITE)
// 005aa13a: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x48] (READ)
// 005aa13e: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005aa144: MOV [0x03f688a4],EAX
//   XREF to: 03f688a4 (WRITE)
// 005aa149: TEST EDX,EDX
// 005aa14b: JNZ 0x005aa14f
//   XREF to: 005aa14f (CONDITIONAL_JUMP)
// 005aa14d: POP EBP
// 005aa14e: RET
// 005aa14f: PUSH EDI
//   Label: LAB_005aa14f
// 005aa150: PUSH ESI
// 005aa151: PUSH EBX
// 005aa152: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x48] (READ)
// 005aa156: PUSH ECX
// 005aa157: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x44] (READ)
// 005aa15b: PUSH EBX
// 005aa15c: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x40] (READ)
// 005aa160: PUSH ESI
// 005aa161: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x3c] (READ)
// 005aa165: PUSH EDI
// 005aa166: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x38] (READ)
// 005aa16a: PUSH EBP
// 005aa16b: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x34] (READ)
// 005aa16f: PUSH ECX
// 005aa170: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x30] (READ)
// 005aa174: PUSH EBX
// 005aa175: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x2c] (READ)
// 005aa179: PUSH ESI
// 005aa17a: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x28] (READ)
// 005aa17e: PUSH EDI
// 005aa17f: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x24] (READ)
// 005aa183: PUSH EBP
// 005aa184: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x20] (READ)
// 005aa188: PUSH ECX
// 005aa189: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x1c] (READ)
// 005aa18d: PUSH EBX
// 005aa18e: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x18] (READ)
// 005aa192: PUSH ESI
// 005aa193: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x14] (READ)
// 005aa197: PUSH EDI
// 005aa198: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 005aa19c: PUSH EBP
// 005aa19d: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0xc] (READ)
// 005aa1a1: PUSH ECX
// 005aa1a2: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 005aa1a6: PUSH EBX
// 005aa1a7: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 005aa1ab: PUSH ESI
// 005aa1ac: MOV EAX,EDX
// 005aa1ae: MOV EDX,dword ptr [EDX]
// 005aa1b0: PUSH EAX
// 005aa1b1: CALL dword ptr [EDX + 0x1c]
// 005aa1b4: ADD ESP,0x4c
// 005aa1b7: POP EBX
// 005aa1b8: POP ESI
// 005aa1b9: POP EDI
// 005aa1ba: POP EBP
// 005aa1bb: RET
