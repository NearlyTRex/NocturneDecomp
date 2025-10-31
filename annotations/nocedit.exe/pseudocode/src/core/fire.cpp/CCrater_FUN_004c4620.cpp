// Name: core_fire.cpp_CCrater_FUN_004c4620
// Address: 004c4620
// Address Range: [[004c4620, 004c4874]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_FUN_004c4620(CCrater * this_ptr)
// Cross-references:
//   core_fire.cpp_CCrater_FUN_004c4200 (004c4200) at 004c422a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c74a0 (004c74a0) at 004c7564 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_FireEffectBlastTexture
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 DAT_00688044
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 DAT_00688074
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[2].light
//   undefined4 g_RenderVertexBuffer[2].color
//   undefined4 g_RenderVertexBuffer[2].fog
//   undefined4 DAT_006880a4
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 g_RenderVertexBuffer[3].light
//   undefined4 g_RenderVertexBuffer[3].color
//   undefined4 g_RenderVertexBuffer[3].fog
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_FUN_004c4620(CCrater *this_ptr)

{
  BADSPACEBASE *in_ESP;
  int iStack00000008;
  undefined1 local_50 [12];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [12];
  int local_1c;
  CVector3i local_18;
  
  if (*(int *)this_ptr->field0_0x0 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 0xc));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectBlastTexture);
  local_18.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x40) * FLOAT_0065dca8);
  local_18.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x44) * FLOAT_0065dca8);
  local_18.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x48) * FLOAT_0065dca8);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[0].projected_vertex,&local_18);
  local_28._8_4_ = (undefined4)ROUND(*(float *)(this_ptr->field0_0x0 + 0x4c) * FLOAT_0065dca8);
  local_1c = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x50) * FLOAT_0065dca8);
  local_18.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x54) * FLOAT_0065dca8);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[1].projected_vertex,(CVector3i *)(local_28 + 8));
  local_28._0_4_ = (undefined4)ROUND(*(float *)(this_ptr->field0_0x0 + 0x58) * FLOAT_0065dca8);
  local_28._4_4_ = (undefined4)ROUND(*(float *)(this_ptr->field0_0x0 + 0x5c) * FLOAT_0065dca8);
  local_28._8_4_ = (undefined4)ROUND(*(float *)(this_ptr->field0_0x0 + 0x60) * FLOAT_0065dca8);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[2].projected_vertex,(CVector3i *)local_28);
  iStack00000008 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x6c) * FLOAT_0065dca8);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[3].projected_vertex,(CVector3i *)&stack0x00000000);
  g_RenderVertexBuffer[0].light = 9.18341e-41;
  g_RenderVertexBuffer[0].color = 0xffff;
  g_RenderVertexBuffer[0].fog = 9.18341e-41;
  g_RenderVertexBuffer[1].light = 9.18341e-41;
  g_RenderVertexBuffer[1].color = 0xffff;
  g_RenderVertexBuffer[1].fog = 9.18341e-41;
  g_RenderVertexBuffer[2].light = 9.18341e-41;
  g_RenderVertexBuffer[2].color = 0xffff;
  g_RenderVertexBuffer[2].fog = 9.18341e-41;
  g_RenderVertexBuffer[3].light = 9.18341e-41;
  g_RenderVertexBuffer[3].color = 0xffff;
  g_RenderVertexBuffer[3].fog = 9.18341e-41;
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[3].v = 7.34684e-40;
  local_50._8_4_ = 0xffff;
  local_50._4_4_ = 0;
  iStack_44 = 0;
  local_50._0_4_ = 3;
  iStack_40 = 0;
  iStack_3c = 0;
  local_38 = 1;
  local_34 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_50);
  local_34 = 0;
  local_30 = 2;
  local_2c = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_50 + 8));
  return;
}


// Assembly code:
// 004c4620: PUSH ESI
//   Label: core_fire.cpp_CCrater_FUN_004c4620
// 004c4621: PUSH EBP
// 004c4622: SUB ESP,0x64
// 004c4625: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 004c4629: CMP dword ptr [ESI],0x0
// 004c462c: JNZ 0x004c4634
//   XREF to: 004c4634 (CONDITIONAL_JUMP)
// 004c462e: ADD ESP,0x64
// 004c4631: POP EBP
// 004c4632: POP ESI
// 004c4633: RET
// 004c4634: PUSH EDI
//   Label: LAB_004c4634
// 004c4635: PUSH EBX
// 004c4636: LEA EAX,[ESI + 0xc]
// 004c4639: PUSH EAX
// 004c463a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c4640: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c4641: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c4646: ADD ESP,0x8
// 004c4649: PUSH 0x67addc
//   XREF to: 0067addc (DATA)
// 004c464e: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c4654: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c4655: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c465a: ADD ESP,0x8
// 004c465d: LEA EBX,[ESP + 0x54]
//   XREF to: Stack[-0x20] (DATA)
// 004c4661: LEA EAX,[ESI + 0x40]
// 004c4664: FLD float ptr [EAX]
// 004c4666: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c466c: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x20] (DATA)
// 004c466e: FLD float ptr [EAX + 0x4]
// 004c4671: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c4677: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 004c467a: FLD float ptr [EAX + 0x8]
// 004c467d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c4683: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 004c4686: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x20] (DATA)
// 004c468a: PUSH EAX
// 004c468b: PUSH 0x688014
//   XREF to: 00688014 (DATA)
// 004c4690: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c4695: ADD ESP,0x8
// 004c4698: LEA EBX,[ESP + 0x48]
//   XREF to: Stack[-0x2c] (DATA)
// 004c469c: LEA EAX,[ESI + 0x4c]
// 004c469f: FLD float ptr [EAX]
// 004c46a1: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c46a7: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x2c] (DATA)
// 004c46a9: FLD float ptr [EAX + 0x4]
// 004c46ac: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c46b2: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x28] (WRITE)
// 004c46b5: FLD float ptr [EAX + 0x8]
// 004c46b8: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c46be: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x24] (WRITE)
// 004c46c1: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x2c] (DATA)
// 004c46c5: PUSH EAX
// 004c46c6: PUSH 0x688044
//   XREF to: 00688044 (DATA)
// 004c46cb: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c46d0: ADD ESP,0x8
// 004c46d3: LEA EBX,[ESP + 0x3c]
//   XREF to: Stack[-0x38] (DATA)
// 004c46d7: LEA EAX,[ESI + 0x58]
// 004c46da: FLD float ptr [EAX]
// 004c46dc: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c46e2: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x38] (DATA)
// 004c46e4: FLD float ptr [EAX + 0x4]
// 004c46e7: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c46ed: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 004c46f0: FLD float ptr [EAX + 0x8]
// 004c46f3: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c46f9: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 004c46fc: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x38] (DATA)
// 004c4700: PUSH EAX
// 004c4701: PUSH 0x688074
//   XREF to: 00688074 (DATA)
// 004c4706: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c470b: ADD ESP,0x8
// 004c470e: LEA EAX,[ESI + 0x64]
// 004c4711: LEA EBX,[ESP + 0x60]
//   XREF to: Stack[-0x14] (DATA)
// 004c4715: FLD float ptr [EAX]
// 004c4717: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c471d: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x14] (DATA)
// 004c471f: FLD float ptr [EAX + 0x4]
// 004c4722: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c4728: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x10] (WRITE)
// 004c472b: FLD float ptr [EAX + 0x8]
// 004c472e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c4734: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 004c4737: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x14] (DATA)
// 004c473b: PUSH EAX
// 004c473c: PUSH 0x6880a4
//   XREF to: 006880a4 (DATA)
// 004c4741: MOV ESI,0xffff
// 004c4746: MOV EDI,0xffff
// 004c474b: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c4750: MOV ECX,0x80000
// 004c4755: MOV EBX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004c475a: ADD ESP,0x8
// 004c475d: MOV dword ptr [0x00688034],ESI
//   XREF to: 00688034 (WRITE)
// 004c4763: MOV dword ptr [0x00688038],ESI
//   XREF to: 00688038 (WRITE)
// 004c4769: MOV dword ptr [0x0068803c],ESI
//   XREF to: 0068803c (WRITE)
// 004c476f: MOV dword ptr [0x00688064],ESI
//   XREF to: 00688064 (WRITE)
// 004c4775: MOV dword ptr [0x00688068],ESI
//   XREF to: 00688068 (WRITE)
// 004c477b: MOV dword ptr [0x0068806c],ESI
//   XREF to: 0068806c (WRITE)
// 004c4781: MOV dword ptr [0x00688094],ESI
//   XREF to: 00688094 (WRITE)
// 004c4787: MOV dword ptr [0x00688098],ESI
//   XREF to: 00688098 (WRITE)
// 004c478d: MOV dword ptr [0x0068809c],ESI
//   XREF to: 0068809c (WRITE)
// 004c4793: MOV dword ptr [0x006880c4],ESI
//   XREF to: 006880c4 (WRITE)
// 004c4799: MOV dword ptr [0x006880c8],ESI
//   XREF to: 006880c8 (WRITE)
// 004c479f: MOV dword ptr [0x006880cc],ESI
//   XREF to: 006880cc (WRITE)
// 004c47a5: MOV dword ptr [0x0068802c],ECX
//   XREF to: 0068802c (WRITE)
// 004c47ab: MOV dword ptr [0x00688030],EBX
//   XREF to: 00688030 (WRITE)
// 004c47b1: MOV dword ptr [0x0068805c],EBX
//   XREF to: 0068805c (WRITE)
// 004c47b7: MOV dword ptr [0x00688060],EBX
//   XREF to: 00688060 (WRITE)
// 004c47bd: MOV dword ptr [0x0068808c],EBX
//   XREF to: 0068808c (WRITE)
// 004c47c3: MOV EAX,ECX
// 004c47c5: MOV dword ptr [0x00688090],ECX
//   XREF to: 00688090 (WRITE)
// 004c47cb: MOV EDX,ECX
// 004c47cd: MOV dword ptr [0x006880bc],ECX
//   XREF to: 006880bc (WRITE)
// 004c47d3: MOV dword ptr [0x006880c0],ECX
//   XREF to: 006880c0 (WRITE)
// 004c47d9: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 004c47dd: PUSH EDI
// 004c47de: XOR ESI,ESI
// 004c47e0: MOV EBX,0x3
// 004c47e5: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x64] (WRITE)
// 004c47e9: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x5c] (WRITE)
// 004c47ed: XOR EAX,ECX
// 004c47ef: XOR EDX,ECX
// 004c47f1: MOV ECX,0x1
// 004c47f6: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c47fc: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x68] (WRITE)
// 004c4800: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004c4804: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 004c4808: MOV EBX,0x2
// 004c480d: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c480e: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 004c4812: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 004c4816: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004c481b: ADD ESP,0x8
// 004c481e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 004c4822: PUSH EAX
// 004c4823: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c4829: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c482a: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004c482f: ADD ESP,0x8
// 004c4832: XOR EBP,EBP
// 004c4834: MOV EDX,0x3
// 004c4839: PUSH 0xffff
// 004c483e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c4844: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x54] (WRITE)
// 004c4848: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c4849: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 004c484d: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 004c4851: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004c4856: ADD ESP,0x8
// 004c4859: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 004c485d: PUSH EAX
// 004c485e: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c4864: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c4865: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004c486a: ADD ESP,0x8
// 004c486d: POP EBX
// 004c486e: POP EDI
// 004c486f: ADD ESP,0x64
// 004c4872: POP EBP
// 004c4873: POP ESI
// 004c4874: RET
