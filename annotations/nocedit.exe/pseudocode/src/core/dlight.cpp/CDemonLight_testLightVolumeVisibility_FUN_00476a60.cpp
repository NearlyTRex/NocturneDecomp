// Name: core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60
// Address: 00476a60
// Address Range: [[00476a60, 00476c13]]
// Convention: __cdecl
// Signature: int core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60(CDemonLight * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570df0
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00

#include "nocturne.h"

int __cdecl
core_dlight_cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60(CDemonLight *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  BADSPACEBASE *in_ESP;
  int iVar1;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffcc);
  if (extraout_EAX == 0) {
    iVar1 = 1;
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffd0);
    if (extraout_EAX_00 != 0) goto LAB_00476acf;
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffd4);
    if (extraout_EAX_01 != 0) {
      iVar1 = 1;
      goto LAB_00476acf;
    }
    core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffd8);
    if (extraout_EAX_02 == 0) {
      core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffdc);
      if (extraout_EAX_03 != 0) {
        iVar1 = 1;
        goto LAB_00476acf;
      }
      core_set_cpp_CDemonSet_FUN_00570df0(g_CDemonSetPtr,(SMRGLHeaderPrimitive *)&stack0xffffffe0);
      iVar1 = 0;
      if (extraout_EAX_04 == 0) goto LAB_00476acf;
    }
  }
  iVar1 = 1;
LAB_00476acf:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return iVar1;
}


// Assembly code:
// 00476a60: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60
// 00476a61: PUSH ESI
// 00476a62: PUSH EDI
// 00476a63: PUSH EBP
// 00476a64: SUB ESP,0x28
// 00476a67: MOV EDX,0x4
// 00476a6c: PUSH 0x1
// 00476a6e: MOV ESI,0x2
// 00476a73: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00476a79: XOR ECX,ECX
// 00476a7b: XOR EBX,EBX
// 00476a7d: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 00476a81: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00476a85: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00476a89: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00476a8a: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00476a8e: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00476a92: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00476a97: MOV EDX,0x4
// 00476a9c: MOV ECX,0x6
// 00476aa1: ADD ESP,0x8
// 00476aa4: MOV EAX,ESP
// 00476aa6: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00476aac: PUSH EAX
// 00476aad: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00476ab1: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00476ab5: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00476ab6: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00476aba: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00476abe: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00476ac3: ADD ESP,0x8
// 00476ac6: TEST EAX,EAX
// 00476ac8: JZ 0x00476ae9
//   XREF to: 00476ae9 (CONDITIONAL_JUMP)
// 00476aca: MOV EBX,0x1
//   Label: LAB_00476aca
// 00476acf: PUSH 0x0
//   Label: LAB_00476acf
// 00476ad1: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00476ad6: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00476ad7: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00476adc: ADD ESP,0x8
// 00476adf: MOV EAX,EBX
// 00476ae1: ADD ESP,0x28
// 00476ae4: POP EBP
// 00476ae5: POP EDI
// 00476ae6: POP ESI
// 00476ae7: POP EBX
// 00476ae8: RET
// 00476ae9: MOV EBP,0x1
//   Label: LAB_00476ae9
// 00476aee: MOV EAX,0x3
// 00476af3: MOV EDX,0x7
// 00476af8: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00476afc: MOV EAX,ESP
// 00476afe: MOV ECX,0x5
// 00476b03: PUSH EAX
// 00476b04: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00476b0a: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 00476b0e: PUSH ESI
//   XREF to: 03114278 (DATA)
// 00476b0f: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00476b13: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00476b17: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00476b1c: ADD ESP,0x8
// 00476b1f: TEST EAX,EAX
// 00476b21: JZ 0x00476b27
//   XREF to: 00476b27 (CONDITIONAL_JUMP)
// 00476b23: MOV EBX,EBP
// 00476b25: JMP 0x00476acf
//   XREF to: 00476acf (UNCONDITIONAL_JUMP)
// 00476b27: MOV dword ptr [ESP + 0x20],0x5
//   Label: LAB_00476b27
//   XREF to: Stack[-0x18] (WRITE)
// 00476b2f: MOV EAX,ESP
// 00476b31: MOV EDX,0x4
// 00476b36: PUSH EAX
// 00476b37: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00476b3d: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00476b41: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00476b42: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 00476b46: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00476b4a: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00476b4f: ADD ESP,0x8
// 00476b52: TEST EAX,EAX
// 00476b54: JZ 0x00476b5d
//   XREF to: 00476b5d (CONDITIONAL_JUMP)
// 00476b56: MOV EBX,EBP
// 00476b58: JMP 0x00476acf
//   XREF to: 00476acf (UNCONDITIONAL_JUMP)
// 00476b5d: MOV ESI,0x2
//   Label: LAB_00476b5d
// 00476b62: MOV EAX,0x3
// 00476b67: MOV EDI,0x6
// 00476b6c: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00476b70: MOV EAX,ESP
// 00476b72: MOV EBP,0x7
// 00476b77: PUSH EAX
// 00476b78: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00476b7e: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00476b82: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00476b83: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00476b87: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00476b8b: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00476b90: ADD ESP,0x8
// 00476b93: TEST EAX,EAX
// 00476b95: JNZ 0x00476aca
//   XREF to: 00476aca (CONDITIONAL_JUMP)
// 00476b9b: MOV EDI,0x3
// 00476ba0: MOV EBP,0x1
// 00476ba5: MOV EAX,ESP
// 00476ba7: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00476bab: PUSH EAX
// 00476bac: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00476bb1: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00476bb5: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00476bb6: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00476bba: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00476bbe: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00476bc3: ADD ESP,0x8
// 00476bc6: TEST EAX,EAX
// 00476bc8: JZ 0x00476bd1
//   XREF to: 00476bd1 (CONDITIONAL_JUMP)
// 00476bca: MOV EBX,EBP
// 00476bcc: JMP 0x00476acf
//   XREF to: 00476acf (UNCONDITIONAL_JUMP)
// 00476bd1: MOV EDX,0x4
//   Label: LAB_00476bd1
// 00476bd6: MOV ECX,0x5
// 00476bdb: MOV ESI,0x7
// 00476be0: MOV EDI,0x6
// 00476be5: MOV EAX,ESP
// 00476be7: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00476bed: PUSH EAX
// 00476bee: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00476bf2: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00476bf6: PUSH EBP
//   XREF to: 03114278 (DATA)
// 00476bf7: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00476bfb: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00476bff: CALL core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: 00570df0 (UNCONDITIONAL_CALL)
// 00476c04: ADD ESP,0x8
// 00476c07: TEST EAX,EAX
// 00476c09: JZ 0x00476acf
//   XREF to: 00476acf (CONDITIONAL_JUMP)
// 00476c0f: JMP 0x00476aca
//   XREF to: 00476aca (UNCONDITIONAL_JUMP)
