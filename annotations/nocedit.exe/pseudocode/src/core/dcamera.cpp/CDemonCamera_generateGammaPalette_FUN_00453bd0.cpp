// Name: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
// Address: 00453bd0
// Address Range: [[00453bd0, 00453c89]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(CDemonCamera * this_ptr, int gamma_value)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0 (0044c0f0) at 0044c101 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setGamma_FUN_00570d60 (00570d60) at 00570d73 [UNCONDITIONAL_CALL]
// Globals:
//   double g_CameraGammaMultiplier = 0.0000152587890625
//   double g_CameraNormalizer = 0.00392156862745098
//   double g_CameraOutputScale = 255
//   int g_FogColorIndexR = 0x40
//   int g_FogColorIndexG = 0x40
//   int g_FogColorIndexB = 0x40
//   uint[256] g_LightmapTexturePalette
//   undefined4 g_LightmapTexturePalette[64]
// Function calls:
//   crt_math.c_pow_FUN_005ffd76
//   crt_math.c_round_FUN_005fe6b0
//   wincore_windll.cpp_setFogColor_FUN_005b7b80

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
          (CDemonCamera *this_ptr,int gamma_value)

{
  uint uVar1;
  undefined4 extraout_EAX;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_EDX;
  float10 y;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  iVar2 = 0;
  y = (float10)((float)gamma_value * (float)g_CameraGammaMultiplier);
  fVar3 = (float10)g_CameraNormalizer;
  do {
    fVar5 = fVar3;
    fVar6 = y;
    fVar4 = crt_math_c_pow_FUN_005ffd76((float10)iVar2 * fVar3,y);
    fVar4 = fVar4 * fVar6;
    fVar3 = y;
    y = fVar5;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
    uVar1 = (uint)ROUND(fVar4);
    iVar2 = (int)((ulonglong)dVar7 >> 0x20) + 1;
    *(uint *)((int)g_LightmapTexturePalette + extraout_ECX) =
         uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
  } while (iVar2 < 0x100);
  wincore_windll_cpp_setFogColor_FUN_005b7b80
            (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexG] & 0xff,
             g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  return;
}


// Assembly code:
// 00453bd0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
// 00453bd1: PUSH EBP
// 00453bd2: MOV EBP,ESP
// 00453bd4: SUB ESP,0xc
// 00453bd7: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00453bda: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00453bdd: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0xc] (READ)
// 00453be0: FMUL double ptr [0x0061a45a]
//   XREF to: 0061a45a (READ)
// 00453be6: XOR EDX,EDX
// 00453be8: XOR ECX,ECX
// 00453bea: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 00453bed: FLD double ptr [0x0061a46a]
//   XREF to: 0061a46a (READ)
// 00453bf3: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x10] (READ)
// 00453bf6: FLD double ptr [0x0061a462]
//   XREF to: 0061a462 (READ)
// 00453bfc: MOV dword ptr [EBP + -0x4],EDX
//   Label: LAB_00453bfc
//   XREF to: Stack[-0xc] (WRITE)
// 00453bff: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0xc] (READ)
// 00453c02: FMUL ST1
// 00453c04: FLD ST2
// 00453c06: FXCH
// 00453c08: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 00453c0d: FMUL ST3
// 00453c0f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00453c14: FISTP dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 00453c17: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x14] (READ)
// 00453c1a: MOV EBX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x14] (READ)
// 00453c1d: SHL EAX,0x8
// 00453c20: OR EAX,EBX
// 00453c22: SHL EBX,0x10
// 00453c25: OR EBX,EAX
// 00453c27: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x14] (READ)
// 00453c2a: SHL EAX,0x18
// 00453c2d: ADD ECX,0x4
// 00453c30: OR EAX,EBX
// 00453c32: INC EDX
// 00453c33: MOV dword ptr [ECX + 0xc19df8],EAX
//   XREF to: 00c19dfc (WRITE)
// 00453c39: CMP EDX,0x100
// 00453c3f: JL 0x00453bfc
//   XREF to: 00453bfc (CONDITIONAL_JUMP)
// 00453c41: MOV EAX,[0x0066ed0c]
//   XREF to: 0066ed0c (READ)
// 00453c46: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 00453c4d: AND EAX,0xff
// 00453c52: PUSH EAX
// 00453c53: MOV EAX,[0x0066ed08]
//   XREF to: 0066ed08 (READ)
// 00453c58: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 00453c5f: AND EAX,0xff
// 00453c64: PUSH EAX
// 00453c65: MOV EAX,[0x0066ed04]
//   XREF to: 0066ed04 (READ)
// 00453c6a: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19efc (READ)
// 00453c71: FSTP ST0
// 00453c73: AND EAX,0xff
// 00453c78: FSTP ST0
// 00453c7a: PUSH EAX
// 00453c7b: FSTP ST0
// 00453c7d: CALL wincore_windll.cpp_setFogColor_FUN_005b7b80
//   XREF to: 005b7b80 (UNCONDITIONAL_CALL)
// 00453c82: ADD ESP,0xc
// 00453c85: MOV ESP,EBP
// 00453c87: POP EBP
// 00453c88: POP EBX
// 00453c89: RET
