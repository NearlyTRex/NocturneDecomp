// Name: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
// Address: 0044d2a0
// Address Range: [[0044d2a0, 0044d30b]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, CVector3i * output_ptr, int screen_x, int screen_y)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 (00454060) at 00454408 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 (0044e360) at 0044e41b [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900 (00452900) at 00452921 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da2ea [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00535c60 (00535c60) at 00535c82 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e5e6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_005800d0 (005800d0) at 0058011a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fdc5 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1870 (005b1870) at 005b1c1b [UNCONDITIONAL_CALL]
// Globals:
//   uint*[1024] g_ZBufferScanlineArray

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
          (CDemonCamera *this_ptr,CVector3i *output_ptr,int screen_x,int screen_y)

{
  uint uVar1;
  int *unaff_ESI;
  
  uVar1 = g_ZBufferScanlineArray[screen_x][(int)output_ptr];
  if (uVar1 == 0) {
    *unaff_ESI = (int)output_ptr << 0x10;
    unaff_ESI[1] = screen_x << 0x10;
    unaff_ESI[2] = 0x7fffffff;
    return;
  }
  *unaff_ESI = (int)output_ptr << 0x10;
  unaff_ESI[1] = screen_x << 0x10;
  unaff_ESI[2] = (int)(0x7fffffff / (longlong)(int)uVar1);
  return;
}


// Assembly code:
// 0044d2a0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
// 0044d2a1: PUSH EDI
// 0044d2a2: SUB ESP,0xc
// 0044d2a5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0044d2a9: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0044d2ad: MOV ECX,ESI
// 0044d2af: MOV EBX,EAX
// 0044d2b1: SHL EBX,0x10
// 0044d2b4: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 0044d2b7: MOV EBX,EDX
// 0044d2b9: MOV EDX,dword ptr [EDX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 0044d2c0: SHL EBX,0x10
// 0044d2c3: MOV EAX,dword ptr [EDX + EAX*0x4]
// 0044d2c6: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 0044d2ca: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0044d2ce: TEST EAX,EAX
// 0044d2d0: JNZ 0x0044d2e9
//   XREF to: 0044d2e9 (CONDITIONAL_JUMP)
// 0044d2d2: MOV dword ptr [ESP + 0x8],0x7fffffff
//   XREF to: Stack[-0xc] (WRITE)
// 0044d2da: MOV ESI,ESP
// 0044d2dc: MOV EDI,ECX
// 0044d2de: MOVSD ES:EDI,ESI
// 0044d2df: MOVSD ES:EDI,ESI
// 0044d2e0: MOVSD ES:EDI,ESI
// 0044d2e1: MOV EAX,ECX
// 0044d2e3: ADD ESP,0xc
// 0044d2e6: POP EDI
// 0044d2e7: POP EBX
// 0044d2e8: RET
// 0044d2e9: MOV EAX,0x7fffffff
//   Label: LAB_0044d2e9
// 0044d2ee: MOV EDX,EAX
// 0044d2f0: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0044d2f4: SAR EDX,0x1f
// 0044d2f7: IDIV EBX
// 0044d2f9: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0044d2fd: MOV ESI,ESP
// 0044d2ff: MOV EDI,ECX
// 0044d301: MOVSD ES:EDI,ESI
// 0044d302: MOVSD ES:EDI,ESI
// 0044d303: MOVSD ES:EDI,ESI
// 0044d304: MOV EAX,ECX
// 0044d306: ADD ESP,0xc
// 0044d309: POP EDI
// 0044d30a: POP EBX
// 0044d30b: RET
