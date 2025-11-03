// Name: shape_meshlod.cpp_FUN_0051e990
// Address: 0051e990
// Address Range: [[0051e990, 0051eac3]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051e990()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d5ef [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051dfb4 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00638525 = 127
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051e990(undefined4 param_1, undefined4 param_2) */

void shape_meshlod_cpp_FUN_0051e990(void)

{
  int green_component;
  int iVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  CDemonRenderer *blue_component;
  
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,0xff);
  uVar2 = 0;
  blue_component = g_CDemonRendererPtr;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  if (0 < *(int *)(in_stack_00000004 + 8)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(in_stack_00000004 + 0xc) + iVar3;
      if (*(int *)(iVar1 + 0x40) == 0) {
        if (in_stack_00000008 == 0) {
          fVar4 = (float10)FLOAT_00638525;
          fVar5 = (float10)*(float *)(iVar1 + 0x4c) * fVar4 + fVar4;
          fVar4 = (float10)*(float *)(iVar1 + 0x44) * fVar4 + fVar4;
          dVar6 = crt_math_c_round_FUN_005fe6b0
                            ((double)CONCAT44(iVar1,*(undefined4 *)(iVar1 + 0x18)));
          dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
          crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),(int)ROUND(fVar5)));
          engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                    (g_CDemonRendererPtr,(int)ROUND(fVar4),green_component,(int)blue_component);
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,-((uVar2 & 0x7f) + 0x80));
        }
        blue_component = g_CDemonRendererPtr;
        engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffa4);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x8c;
    } while ((int)uVar2 < *(int *)(in_stack_00000004 + 8));
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 0051e990: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051e990
// 0051e991: PUSH ESI
// 0051e992: PUSH EDI
// 0051e993: PUSH EBP
// 0051e994: SUB ESP,0x50
// 0051e997: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x4] (READ)
// 0051e99b: MOV EBP,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x8] (READ)
// 0051e99f: MOV EDX,0x3
// 0051e9a4: PUSH 0xff
// 0051e9a9: XOR ECX,ECX
// 0051e9ab: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 0051e9af: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 0051e9b3: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051e9b9: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 0051e9bd: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0051e9be: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 0051e9c2: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 0051e9c6: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0051e9cb: ADD ESP,0x8
// 0051e9ce: PUSH 0x1
// 0051e9d0: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051e9d6: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0051e9d7: XOR EBX,EBX
// 0051e9d9: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0051e9de: MOV ESI,dword ptr [EDI + 0x8]
// 0051e9e1: ADD ESP,0x8
// 0051e9e4: TEST ESI,ESI
// 0051e9e6: JLE 0x0051ea03
//   XREF to: 0051ea03 (CONDITIONAL_JUMP)
// 0051e9e8: XOR ESI,ESI
// 0051e9ea: MOV EDX,dword ptr [EDI + 0xc]
//   Label: LAB_0051e9ea
// 0051e9ed: ADD EDX,ESI
// 0051e9ef: CMP dword ptr [EDX + 0x40],0x0
// 0051e9f3: JZ 0x0051ea1c
//   XREF to: 0051ea1c (CONDITIONAL_JUMP)
// 0051e9f5: INC EBX
//   Label: LAB_0051e9f5
// 0051e9f6: MOV EAX,dword ptr [EDI + 0x8]
// 0051e9f9: ADD ESI,0x8c
// 0051e9ff: CMP EBX,EAX
// 0051ea01: JL 0x0051e9ea
//   XREF to: 0051e9ea (CONDITIONAL_JUMP)
// 0051ea03: PUSH 0x0
//   Label: LAB_0051ea03
// 0051ea05: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051ea0b: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0051ea0c: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0051ea11: ADD ESP,0x8
// 0051ea14: ADD ESP,0x50
// 0051ea17: POP EBP
// 0051ea18: POP EDI
// 0051ea19: POP ESI
// 0051ea1a: POP EBX
// 0051ea1b: RET
// 0051ea1c: MOV EAX,dword ptr [EDX + 0x10]
//   Label: LAB_0051ea1c
// 0051ea1f: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0051ea23: MOV EAX,dword ptr [EDX + 0x14]
// 0051ea26: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0051ea2a: MOV EAX,dword ptr [EDX + 0x18]
// 0051ea2d: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0051ea31: TEST EBP,EBP
// 0051ea33: JZ 0x0051ea64
//   XREF to: 0051ea64 (CONDITIONAL_JUMP)
// 0051ea35: MOV EAX,EBX
// 0051ea37: AND EAX,0x7f
// 0051ea3a: ADD EAX,0x80
// 0051ea3f: NEG EAX
// 0051ea41: PUSH EAX
// 0051ea42: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051ea48: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0051ea49: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0051ea4e: ADD ESP,0x8
// 0051ea51: MOV EAX,ESP
//   Label: LAB_0051ea51
// 0051ea53: PUSH EAX
// 0051ea54: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051ea59: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0051ea5a: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 0051ea5f: ADD ESP,0x8
// 0051ea62: JMP 0x0051e9f5
//   XREF to: 0051e9f5 (UNCONDITIONAL_JUMP)
// 0051ea64: FLD float ptr [0x00638525]
//   Label: LAB_0051ea64
//   XREF to: 00638525 (READ)
// 0051ea6a: FLD float ptr [EDX + 0x4c]
// 0051ea6d: FMUL ST1
// 0051ea6f: FLD float ptr [EDX + 0x48]
// 0051ea72: FMUL ST2
// 0051ea74: FLD float ptr [EDX + 0x44]
// 0051ea77: FMUL ST3
// 0051ea79: FXCH ST2
// 0051ea7b: FADD ST0,ST3
// 0051ea7d: FXCH
// 0051ea7f: FADD ST0,ST3
// 0051ea81: FXCH ST2
// 0051ea83: FADDP ST3,ST0
// 0051ea85: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0051ea8a: FXCH
// 0051ea8c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0051ea91: FXCH
// 0051ea93: FISTP dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (WRITE)
// 0051ea97: FISTP dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (WRITE)
// 0051ea9b: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 0051ea9f: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 0051eaa3: PUSH EAX
// 0051eaa4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0051eaa9: PUSH ECX
// 0051eaaa: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (WRITE)
// 0051eaae: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 0051eab2: PUSH EAX
// 0051eab3: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0051eab9: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0051eaba: CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   XREF to: 0048c970 (UNCONDITIONAL_CALL)
// 0051eabf: ADD ESP,0x10
// 0051eac2: JMP 0x0051ea51
//   XREF to: 0051ea51 (UNCONDITIONAL_JUMP)
