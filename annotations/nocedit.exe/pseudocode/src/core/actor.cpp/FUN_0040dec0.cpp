// Name: core_actor.cpp_FUN_0040dec0
// Address: 0040dec0
// Address Range: [[0040dec0, 0040e125]]
// Convention: __cdecl
// Signature: void core_actor.cpp_FUN_0040dec0(CDemonActor * this_ptr)
// Cross-references:
//   core_barrier.cpp_CBarrier_FUN_00414240 (00414240) at 004142c5 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441f60 (00441f60) at 00441ffe [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fbed [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_FUN_004f3c90 (004f3c90) at 004f3d09 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e060e [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_006597b0 = 256
//   SMRGLTextureBasic DAT_0066e158
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00800000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_0040dec0(CDemonActor *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int iVar1;
  uint corner_index;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  CDemonActor *in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  CDemonActor *in_stack_00000040;
  CBoundingBox3D CStack_34;
  CVector3f CStack_1c;
  
  (*((this_ptr->metadata).vtable)->getBoundingBox)(this_ptr,(CBoundingBox3D *)&stack0xffffffb4);
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000018);
  corner_index = 0;
  iVar1 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&CStack_34,&CStack_1c,corner_index);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar1),(CVector3i *)&stack0xfffffff4);
    this_ptr_00 = g_CDemonRendererPtr;
    *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar1) = in_stack_00000008
    ;
    *(undefined4 *)((int)&this_ptr_00->vertex_buffer_ptr->color + iVar1) = in_stack_0000000c;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->fog + iVar1) = in_stack_00000028 << 8;
    *(int *)((int)&this_ptr_00->vertex_buffer_ptr->w_recip + iVar1) = in_stack_00000024 << 8;
    *(undefined4 *)((int)&this_ptr_00->vertex_buffer_ptr->u + iVar1) = 0x800000;
    corner_index = corner_index + 1;
    *(undefined4 *)((int)&this_ptr_00->vertex_buffer_ptr->v + iVar1) = 0x800000;
    iVar1 = iVar1 + 0x30;
  } while ((int)corner_index < 8);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_00,&DAT_0066e158);
  CStack_34.min.x = 2.8026e-45;
  CStack_34.min.y = 8.40779e-45;
  CStack_34.min.z = 5.60519e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb0);
  CStack_34.min.x = 1.4013e-45;
  CStack_34.min.y = 4.2039e-45;
  CStack_34.min.z = 9.80909e-45;
  CStack_34.max.x = 7.00649e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb4);
  CStack_34.max.x = 4.2039e-45;
  CStack_34.min.y = 0.0;
  CStack_34.min.z = 1.4013e-45;
  CStack_34.max.y = 2.8026e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb8);
  CStack_34.min.z = 5.60519e-45;
  CStack_34.max.x = 7.00649e-45;
  CStack_34.max.y = 9.80909e-45;
  CStack_34.max.z = 8.40779e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffbc);
  CStack_34.max.z = 9.80909e-45;
  CStack_34.max.x = 2.8026e-45;
  CStack_34.max.y = 4.2039e-45;
  CStack_1c.x = 8.40779e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffc0);
  CStack_34.max.z = 1.4013e-45;
  CStack_1c.y = 5.60519e-45;
  CStack_34.max.y = 0.0;
  CStack_1c.x = 7.00649e-45;
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffc4);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000040);
  return;
}


// Assembly code:
// 0040dec0: PUSH EBX
//   Label: core_actor.cpp_FUN_0040dec0
// 0040dec1: PUSH ESI
// 0040dec2: PUSH EDI
// 0040dec3: PUSH EBP
// 0040dec4: SUB ESP,0x64
// 0040dec7: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x4c] (DATA)
// 0040decb: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 0040decf: PUSH EAX
// 0040ded0: MOV ECX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0040ded4: MOV EDX,dword ptr [EDX + 0x154]
// 0040deda: PUSH ECX
// 0040dedb: CALL dword ptr [EDX + 0x14]
// 0040dede: ADD ESP,0x8
// 0040dee1: MOV EBX,dword ptr [ESP + 0x78]
// 0040dee5: PUSH EBX
// 0040dee6: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0040deeb: ADD ESP,0x4
// 0040deee: MOV EAX,dword ptr [ESP + 0x7c]
// 0040def2: SHL EAX,0x8
// 0040def5: MOV dword ptr [ESP + 0x5c],EAX
// 0040def9: MOV EAX,dword ptr [ESP + 0x80]
// 0040df00: XOR EDI,EDI
// 0040df02: SHL EAX,0x8
// 0040df05: XOR ESI,ESI
// 0040df07: MOV dword ptr [ESP + 0x60],EAX
// 0040df0b: MOV EAX,dword ptr [ESP + 0x88]
// 0040df12: MOV EBP,dword ptr [ESP + 0x84]
// 0040df19: SHL EAX,0x8
// 0040df1c: SHL EBP,0x8
// 0040df1f: MOV dword ptr [ESP + 0x58],EAX
// 0040df23: PUSH EDI
//   Label: LAB_0040df23
// 0040df24: LEA EAX,[ESP + 0x44]
// 0040df28: PUSH EAX
// 0040df29: LEA EAX,[ESP + 0x30]
// 0040df2d: PUSH EAX
// 0040df2e: LEA EBX,[ESP + 0x58]
// 0040df32: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 0040df37: ADD ESP,0xc
// 0040df3a: LEA EAX,[ESP + 0x40]
// 0040df3e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0040df44: FLD float ptr [EAX]
// 0040df46: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040df4c: FISTP dword ptr [EBX]
// 0040df4e: FLD float ptr [EAX + 0x4]
// 0040df51: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040df57: FISTP dword ptr [EBX + 0x4]
// 0040df5a: FLD float ptr [EAX + 0x8]
// 0040df5d: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 0040df63: FISTP dword ptr [EBX + 0x8]
// 0040df66: LEA EAX,[ESP + 0x4c]
// 0040df6a: PUSH EAX
// 0040df6b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0040df6d: ADD EAX,ESI
// 0040df6f: PUSH EAX
// 0040df70: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0040df75: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0040df7a: ADD ESP,0x8
// 0040df7d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040df7f: MOV EBX,dword ptr [ESP + 0x5c]
// 0040df83: MOV dword ptr [EDX + ESI*0x1 + 0x20],EBX
// 0040df87: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040df89: MOV EDX,dword ptr [ESP + 0x60]
// 0040df8d: MOV dword ptr [ESI + EBX*0x1 + 0x24],EDX
// 0040df91: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040df93: MOV dword ptr [EDX + ESI*0x1 + 0x28],EBP
// 0040df97: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040df99: MOV EBX,dword ptr [ESP + 0x58]
// 0040df9d: MOV dword ptr [EDX + ESI*0x1 + 0x2c],EBX
// 0040dfa1: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040dfa3: MOV dword ptr [ESI + EBX*0x1 + 0x18],0x800000
//   XREF to: 00800000 (DATA)
// 0040dfab: ADD ESI,0x30
// 0040dfae: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0040dfb0: INC EDI
// 0040dfb1: MOV dword ptr [EDX + ESI*0x1 + -0x14],0x800000
//   XREF to: 00800000 (DATA)
// 0040dfb9: CMP EDI,0x8
// 0040dfbc: JL 0x0040df23
//   XREF to: 0040df23 (CONDITIONAL_JUMP)
// 0040dfc2: PUSH 0x66e158
//   XREF to: 0066e158 (DATA)
// 0040dfc7: MOV ESI,0x4
// 0040dfcc: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0040dfcd: MOV EBX,0x2
// 0040dfd2: XOR EDI,EDI
// 0040dfd4: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0040dfd9: LEA EAX,[ESP + 0x8]
// 0040dfdd: ADD ESP,0x8
// 0040dfe0: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0040dfe6: MOV dword ptr [ESP + 0x4],ESI
// 0040dfea: MOV dword ptr [ESP + 0x14],EDI
// 0040dfee: MOV dword ptr [ESP + 0x10],EDI
// 0040dff2: MOV dword ptr [ESP + 0xc],EDI
// 0040dff6: MOV dword ptr [ESP + 0x8],EDI
// 0040dffa: MOV dword ptr [ESP + 0x18],EDI
// 0040dffe: MOV dword ptr [ESP + 0x1c],EBX
// 0040e002: PUSH EAX
// 0040e003: MOV ESI,0x6
// 0040e008: MOV EDI,0x4
// 0040e00d: MOV EBX,0x5
// 0040e012: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0040e013: MOV EBP,0x1
// 0040e018: MOV dword ptr [ESP + 0x28],ESI
// 0040e01c: MOV dword ptr [ESP + 0x2c],EDI
// 0040e020: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 0040e025: MOV EAX,0x1
// 0040e02a: MOV EDX,0x3
// 0040e02f: MOV ECX,0x7
// 0040e034: ADD ESP,0x8
// 0040e037: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0040e03d: MOV dword ptr [ESP + 0x18],EAX
// 0040e041: MOV EAX,ESP
// 0040e043: XOR EDI,EDI
// 0040e045: PUSH EAX
// 0040e046: MOV dword ptr [ESP + 0x20],EDX
// 0040e04a: MOV dword ptr [ESP + 0x24],ECX
// 0040e04e: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0040e04f: MOV dword ptr [ESP + 0x2c],EBX
// 0040e053: MOV EBX,0x4
// 0040e058: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 0040e05d: MOV EAX,0x3
// 0040e062: MOV EDX,0x2
// 0040e067: MOV ESI,0x5
// 0040e06c: ADD ESP,0x8
// 0040e06f: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0040e075: MOV dword ptr [ESP + 0x20],EAX
// 0040e079: MOV EAX,ESP
// 0040e07b: MOV dword ptr [ESP + 0x18],EDI
// 0040e07f: PUSH EAX
// 0040e080: MOV dword ptr [ESP + 0x20],EBP
// 0040e084: MOV dword ptr [ESP + 0x28],EDX
// 0040e088: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0040e089: MOV EDI,0x7
// 0040e08e: MOV EBP,0x6
// 0040e093: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 0040e098: ADD ESP,0x8
// 0040e09b: MOV EAX,ESP
// 0040e09d: MOV dword ptr [ESP + 0x18],EBX
// 0040e0a1: PUSH EAX
// 0040e0a2: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0040e0a7: MOV dword ptr [ESP + 0x20],ESI
// 0040e0ab: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0040e0ac: MOV dword ptr [ESP + 0x28],EDI
// 0040e0b0: MOV dword ptr [ESP + 0x2c],EBP
// 0040e0b4: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 0040e0b9: MOV EDX,0x2
// 0040e0be: MOV ECX,0x3
// 0040e0c3: ADD ESP,0x8
// 0040e0c6: MOV EAX,ESP
// 0040e0c8: MOV dword ptr [ESP + 0x20],EDI
// 0040e0cc: PUSH EAX
// 0040e0cd: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0040e0d3: MOV dword ptr [ESP + 0x1c],EDX
// 0040e0d7: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0040e0d8: MOV dword ptr [ESP + 0x24],ECX
// 0040e0dc: MOV dword ptr [ESP + 0x2c],EBP
// 0040e0e0: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 0040e0e5: MOV EAX,0x1
// 0040e0ea: ADD ESP,0x8
// 0040e0ed: MOV dword ptr [ESP + 0x1c],EAX
// 0040e0f1: MOV EAX,ESP
// 0040e0f3: MOV dword ptr [ESP + 0x24],EBX
// 0040e0f7: PUSH EAX
// 0040e0f8: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0040e0fe: XOR EBP,EBP
// 0040e100: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0040e101: MOV dword ptr [ESP + 0x20],EBP
// 0040e105: MOV dword ptr [ESP + 0x28],ESI
// 0040e109: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 0040e10e: ADD ESP,0x8
// 0040e111: MOV ESI,dword ptr [ESP + 0x78]
// 0040e115: PUSH ESI
// 0040e116: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0040e11b: ADD ESP,0x4
// 0040e11e: ADD ESP,0x64
// 0040e121: POP EBP
// 0040e122: POP EDI
// 0040e123: POP ESI
// 0040e124: POP EBX
// 0040e125: RET
