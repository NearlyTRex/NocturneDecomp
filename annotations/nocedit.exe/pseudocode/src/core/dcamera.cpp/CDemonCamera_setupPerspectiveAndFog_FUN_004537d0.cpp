// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
// Address: 004537d0
// Address Range: [[004537d0, 004538bd]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera * this_ptr, CVector3f * position, float max_distance)
// Cross-references:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 (004204f0) at 00420638 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c90b [UNCONDITIONAL_CALL]
// Globals:
//   float g_CameraFixedPointScale = 256
//   int g_FogColorIndexR = 0x40
//   int g_FogColorIndexG = 0x40
//   int g_FogColorIndexB = 0x40
//   int g_BitsPerPixel = 0x8
//   undefined4 g_LightmapTexturePalette[64]
//   int g_BackgroundSceneDepth
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   float g_PerspectiveReciprocal
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
          (CDemonCamera *this_ptr,CVector3f *position,float max_distance)

{
  uint uVar1;
  uint uVar2;
  
  if (position == (CVector3f *)0x0) {
    g_PerspectiveReciprocal = (float)position;
    return;
  }
  if (g_BackgroundSceneDepth != 0) {
    g_PerspectiveReciprocal = 0.0;
    return;
  }
  g_PerspectiveReciprocal = (float)(*(code *)((this_ptr->base).vtable)->calculatePerspective)();
  uVar1 = g_LightmapTexturePalette[g_FogColorIndexB] & 0xff;
  if (g_BitsPerPixel == 0x20) {
    uVar2 = (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << ((byte)g_RedBitPosition & 0x1f) |
            (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << ((byte)g_GreenBitPosition & 0x1f)
    ;
    uVar1 = uVar1 << ((byte)g_BlueBitPosition & 0x1f);
  }
  else {
    uVar2 = (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << 0x10 |
            (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << 8;
  }
  g_SolidColorMode = uVar2 | uVar1;
  return;
}


// Assembly code:
// 004537d0: PUSH EBP
//   Label: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
// 004537d1: SUB ESP,0xc
// 004537d4: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004537d8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004537dc: TEST EAX,EAX
// 004537de: JZ 0x004537f6
//   XREF to: 004537f6 (CONDITIONAL_JUMP)
// 004537e0: CMP dword ptr [0x0151abb0],0x0
//   XREF to: 0151abb0 (READ)
// 004537e7: JZ 0x00453800
//   XREF to: 00453800 (CONDITIONAL_JUMP)
// 004537e9: XOR EBP,EBP
// 004537eb: MOV dword ptr [0x02d051f4],EBP
//   XREF to: 02d051f4 (WRITE)
// 004537f1: ADD ESP,0xc
// 004537f4: POP EBP
// 004537f5: RET
// 004537f6: MOV [0x02d051f4],EAX
//   Label: LAB_004537f6
//   XREF to: 02d051f4 (WRITE)
// 004537fb: ADD ESP,0xc
// 004537fe: POP EBP
// 004537ff: RET
// 00453800: PUSH EDI
//   Label: LAB_00453800
// 00453801: PUSH ESI
// 00453802: PUSH EBX
// 00453803: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x10] (DATA)
// 00453807: FLD float ptr [EAX]
// 00453809: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045380f: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x10] (DATA)
// 00453811: FLD float ptr [EAX + 0x4]
// 00453814: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045381a: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 0045381d: FLD float ptr [EAX + 0x8]
// 00453820: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00453826: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 00453829: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0045382d: PUSH EBX
// 0045382e: LEA EDX,[ESP + 0x10]
//   XREF to: Stack[-0x10] (DATA)
// 00453832: PUSH EDX
// 00453833: MOV EAX,dword ptr [ECX + 0x3c]
// 00453836: PUSH ECX
// 00453837: CALL dword ptr [EAX + 0x8]
// 0045383a: MOV ECX,dword ptr [0x0066ed04]
//   XREF to: 0066ed04 (READ)
// 00453840: MOV ESI,EAX
// 00453842: MOV EAX,[0x0066ed0c]
//   XREF to: 0066ed0c (READ)
// 00453847: MOV EDI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0045384d: MOV EBX,dword ptr [ECX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 00453854: MOV EDX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 0045385b: MOV EAX,[0x0066ed08]
//   XREF to: 0066ed08 (READ)
// 00453860: ADD ESP,0xc
// 00453863: AND EBX,0xff
// 00453869: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 00453870: AND EDX,0xff
// 00453876: AND EAX,0xff
// 0045387b: CMP EDI,0x20
// 0045387e: JNZ 0x004538b2
//   XREF to: 004538b2 (CONDITIONAL_JUMP)
// 00453880: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00453886: SHL EBX,CL
// 00453888: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0045388e: SHL EAX,CL
// 00453890: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00453896: OR EBX,EAX
// 00453898: SHL EDX,CL
// 0045389a: MOV ECX,EBX
// 0045389c: OR ECX,EDX
//   Label: LAB_0045389c
// 0045389e: MOV dword ptr [0x02d051f4],ESI
//   XREF to: 02d051f4 (WRITE)
// 004538a4: MOV dword ptr [0x02d052a8],ECX
//   XREF to: 02d052a8 (WRITE)
// 004538aa: POP EBX
// 004538ab: POP ESI
// 004538ac: POP EDI
// 004538ad: ADD ESP,0xc
// 004538b0: POP EBP
// 004538b1: RET
// 004538b2: MOV ECX,EBX
//   Label: LAB_004538b2
// 004538b4: SHL EAX,0x8
// 004538b7: SHL ECX,0x10
// 004538ba: OR ECX,EAX
// 004538bc: JMP 0x0045389c
//   XREF to: 0045389c (UNCONDITIONAL_JUMP)
