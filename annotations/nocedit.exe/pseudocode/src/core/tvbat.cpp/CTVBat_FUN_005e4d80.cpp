// Name: core_tvbat.cpp_CTVBat_FUN_005e4d80
// Address: 005e4d80
// Address Range: [[005e4d80, 005e504a]]
// Convention: __cdecl
// Signature: int core_tvbat.cpp_CTVBat_FUN_005e4d80(CTVBat * this_ptr)
// Globals:
//   double DOUBLE_006569e2 = 0.00555555555555555
//   double DOUBLE_006569ea = 3.14159265350000
//   float FLOAT_006569f2 = 0.005555556
//   undefined4 DAT_00664cb0
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tvbat_cpp_CTVBat_FUN_005e4d80(CTVBat *this_ptr)

{
  float fVar1;
  CTVBat *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float10 fVar4;
  int in_stack_00000008;
  int in_stack_0000000c;
  float fStack00000014;
  int in_stack_00000018;
  float fStack0000001c;
  int in_stack_00000024;
  float fStack_6c;
  float fStack_24;
  CVector3i CStack_1c;
  
  this_ptr_00 = this_ptr;
  if (this_ptr->state == 3) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_01 = (*((this_ptr_00->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&stack0xffffff8c);
  this_ptr = (CTVBat *)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (this_ptr != (CTVBat *)0x0) {
    fStack_6c = 8.660472e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(this_ptr_00->field1_0xbeb4 + 0xc),
               *(float *)(this_ptr_00->field1_0xbeb4 + 8),-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr_00);
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar2 == 0) && (this_ptr_00 == *(CTVBat **)(g_CDemonMissionPtr->field2_0xc + 0x1c))) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,
                 &(*(CTVBat **)(g_CDemonMissionPtr->field2_0xc + 0x1c))->home_pos);
      iVar2 = 0;
      engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,1);
      do {
        fVar3 = (float10)iVar2 * (float10)DOUBLE_006569e2 * (float10)DOUBLE_006569ea;
        fStack00000014 = (float)fVar3;
        fVar4 = (float10)fsin(fVar3);
        fcos(fVar3);
        fVar1 = this_ptr_00->max_height;
        CStack_1c.y = (int)ROUND((float)(fVar4 * (float10)this_ptr_00->max_distance) * _DAT_00664cb0
                                );
        CStack_1c.z = (int)ROUND(-fVar1 * _DAT_00664cb0);
        fStack0000001c = (float)iVar2;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&CStack_1c.y);
        this_ptr = (CTVBat *)(int)ROUND(-fVar1 * _DAT_00664cb0);
        in_stack_00000008 = (int)ROUND(this_ptr_00->max_height * _DAT_00664cb0);
        in_stack_0000000c = (int)ROUND(fStack_24 * _DAT_00664cb0);
        iVar2 = iVar2 + 0xc;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&this_ptr);
        fVar3 = (float10)iVar2 * (float10)FLOAT_006569f2 * (float10)DOUBLE_006569ea;
        fStack0000001c = (float)fVar3;
        fVar4 = (float10)fsin(fVar3);
        fVar3 = (float10)fcos(fVar3);
        fStack_24 = -this_ptr_00->max_height;
        CStack_1c.x = (int)ROUND((float)(fVar4 * (float10)this_ptr_00->max_distance) * _DAT_00664cb0
                                );
        CStack_1c.y = (int)ROUND(fStack_24 * _DAT_00664cb0);
        CStack_1c.z = (int)ROUND((float)(fVar3 * (float10)this_ptr_00->max_distance) * _DAT_00664cb0
                                );
        in_stack_00000024 = iVar2;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_1c);
        this_ptr = (CTVBat *)(int)ROUND(this_ptr_00->max_height * _DAT_00664cb0);
        in_stack_00000008 = (int)ROUND((float)CStack_1c.x * _DAT_00664cb0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&stack0x00000000);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,2);
      } while (iVar2 < 0x169);
    }
  }
  return in_stack_00000018;
}


// Assembly code:
// 005e4d80: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_FUN_005e4d80
// 005e4d81: PUSH ESI
// 005e4d82: PUSH EDI
// 005e4d83: PUSH EBP
// 005e4d84: MOV EBP,ESP
// 005e4d86: SUB ESP,0x68
// 005e4d89: AND ESP,0xfffffff8
// 005e4d8c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e4d8f: CMP dword ptr [ESI + 0xc078],0x3
// 005e4d96: JNZ 0x005e4da1
//   XREF to: 005e4da1 (CONDITIONAL_JUMP)
// 005e4d98: XOR EAX,EAX
// 005e4d9a: MOV ESP,EBP
// 005e4d9c: POP EBP
// 005e4d9d: POP EDI
// 005e4d9e: POP ESI
// 005e4d9f: POP EBX
// 005e4da0: RET
// 005e4da1: PUSH ESI
//   Label: LAB_005e4da1
// 005e4da2: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005e4da7: ADD ESP,0x4
// 005e4daa: MOV EDX,ESP
// 005e4dac: PUSH EDX
// 005e4dad: MOV EAX,dword ptr [ESI + 0x154]
// 005e4db3: PUSH ESI
// 005e4db4: CALL dword ptr [EAX + 0x14]
// 005e4db7: ADD ESP,0x8
// 005e4dba: PUSH EAX
// 005e4dbb: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005e4dc0: ADD ESP,0x4
// 005e4dc3: MOV dword ptr [ESP + 0x60],EAX
// 005e4dc7: TEST EAX,EAX
// 005e4dc9: JZ 0x005e4de2
//   XREF to: 005e4de2 (CONDITIONAL_JUMP)
// 005e4dcb: PUSH -0x1
// 005e4dcd: LEA EAX,[ESI + 0xbec0]
// 005e4dd3: PUSH dword ptr [ESI + 0xbebc]
// 005e4dd9: PUSH EAX
// 005e4dda: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005e4ddf: ADD ESP,0xc
// 005e4de2: PUSH ESI
//   Label: LAB_005e4de2
// 005e4de3: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005e4de8: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005e4ded: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 02f33744 (READ)
// 005e4df0: ADD ESP,0x4
// 005e4df3: TEST ECX,ECX
// 005e4df5: JZ 0x005e5040
//   XREF to: 005e5040 (CONDITIONAL_JUMP)
// 005e4dfb: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e4e01: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005e4e02: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005e4e07: ADD ESP,0x4
// 005e4e0a: TEST EAX,EAX
// 005e4e0c: JNZ 0x005e5040
//   XREF to: 005e5040 (CONDITIONAL_JUMP)
// 005e4e12: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 005e4e17: MOV EDI,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 005e4e1a: CMP ESI,EDI
// 005e4e1c: JNZ 0x005e5040
//   XREF to: 005e5040 (CONDITIONAL_JUMP)
// 005e4e22: LEA EAX,[EDI + 0xc044]
// 005e4e28: PUSH EAX
// 005e4e29: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e4e2e: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005e4e2f: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005e4e34: ADD ESP,0x8
// 005e4e37: PUSH 0x1
// 005e4e39: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e4e3f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e4e40: XOR EDI,EDI
// 005e4e42: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 005e4e47: ADD ESP,0x8
// 005e4e4a: MOV dword ptr [ESP + 0x64],EDI
//   Label: LAB_005e4e4a
// 005e4e4e: FILD dword ptr [ESP + 0x64]
// 005e4e52: FMUL double ptr [0x006569e2]
//   XREF to: 006569e2 (READ)
// 005e4e58: FMUL double ptr [0x006569ea]
//   XREF to: 006569ea (READ)
// 005e4e5e: FLD float ptr [ESI + 0xc050]
// 005e4e64: FXCH
// 005e4e66: FST float ptr [ESP + 0x5c]
// 005e4e6a: FLD ST0
// 005e4e6c: FSIN
// 005e4e6e: FXCH
// 005e4e70: FCOS
// 005e4e72: FXCH
// 005e4e74: FMULP ST2
// 005e4e76: FXCH
// 005e4e78: FSTP float ptr [ESP + 0x18]
// 005e4e7c: FLD float ptr [ESI + 0xc054]
// 005e4e82: FCHS
// 005e4e84: FSTP float ptr [ESP + 0x1c]
// 005e4e88: FMUL float ptr [ESI + 0xc050]
// 005e4e8e: LEA EBX,[ESP + 0x30]
// 005e4e92: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e4e98: LEA EAX,[ESP + 0x18]
// 005e4e9c: FSTP float ptr [ESP + 0x20]
// 005e4ea0: FLD float ptr [EAX]
// 005e4ea2: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4ea8: FISTP dword ptr [EBX]
// 005e4eaa: FLD float ptr [EAX + 0x4]
// 005e4ead: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4eb3: FISTP dword ptr [EBX + 0x4]
// 005e4eb6: FLD float ptr [EAX + 0x8]
// 005e4eb9: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4ebf: FISTP dword ptr [EBX + 0x8]
// 005e4ec2: LEA EAX,[ESP + 0x30]
// 005e4ec6: PUSH EAX
// 005e4ec7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e4ec9: PUSH EAX
// 005e4eca: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005e4ecf: ADD ESP,0x8
// 005e4ed2: MOV EAX,dword ptr [ESI + 0xc054]
// 005e4ed8: LEA EBX,[ESP + 0x48]
// 005e4edc: MOV dword ptr [ESP + 0x1c],EAX
// 005e4ee0: LEA EAX,[ESP + 0x18]
// 005e4ee4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e4eea: FLD float ptr [EAX]
// 005e4eec: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4ef2: FISTP dword ptr [EBX]
// 005e4ef4: FLD float ptr [EAX + 0x4]
// 005e4ef7: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4efd: FISTP dword ptr [EBX + 0x4]
// 005e4f00: FLD float ptr [EAX + 0x8]
// 005e4f03: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4f09: FISTP dword ptr [EBX + 0x8]
// 005e4f0c: LEA EAX,[ESP + 0x48]
// 005e4f10: PUSH EAX
// 005e4f11: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e4f13: ADD EAX,0x60
// 005e4f16: PUSH EAX
// 005e4f17: ADD EDI,0xc
// 005e4f1a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005e4f1f: ADD ESP,0x8
// 005e4f22: MOV dword ptr [ESP + 0x64],EDI
// 005e4f26: FILD dword ptr [ESP + 0x64]
// 005e4f2a: FMUL float ptr [0x006569f2]
//   XREF to: 006569f2 (READ)
// 005e4f30: FMUL double ptr [0x006569ea]
//   XREF to: 006569ea (READ)
// 005e4f36: FLD float ptr [ESI + 0xc050]
// 005e4f3c: FXCH
// 005e4f3e: FST float ptr [ESP + 0x5c]
// 005e4f42: FLD ST0
// 005e4f44: FSIN
// 005e4f46: FXCH
// 005e4f48: FCOS
// 005e4f4a: FXCH
// 005e4f4c: FMULP ST2
// 005e4f4e: FXCH
// 005e4f50: FSTP float ptr [ESP + 0x18]
// 005e4f54: FLD float ptr [ESI + 0xc054]
// 005e4f5a: FCHS
// 005e4f5c: FSTP float ptr [ESP + 0x1c]
// 005e4f60: FMUL float ptr [ESI + 0xc050]
// 005e4f66: FSTP float ptr [ESP + 0x20]
// 005e4f6a: LEA EBX,[ESP + 0x24]
// 005e4f6e: LEA EAX,[ESP + 0x18]
// 005e4f72: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e4f78: FLD float ptr [EAX]
// 005e4f7a: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4f80: FISTP dword ptr [EBX]
// 005e4f82: FLD float ptr [EAX + 0x4]
// 005e4f85: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4f8b: FISTP dword ptr [EBX + 0x4]
// 005e4f8e: FLD float ptr [EAX + 0x8]
// 005e4f91: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4f97: FISTP dword ptr [EBX + 0x8]
// 005e4f9a: LEA EAX,[ESP + 0x24]
// 005e4f9e: PUSH EAX
// 005e4f9f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e4fa1: ADD EAX,0x30
// 005e4fa4: PUSH EAX
// 005e4fa5: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005e4faa: ADD ESP,0x8
// 005e4fad: MOV EAX,dword ptr [ESI + 0xc054]
// 005e4fb3: LEA EBX,[ESP + 0x3c]
// 005e4fb7: MOV dword ptr [ESP + 0x1c],EAX
// 005e4fbb: LEA EAX,[ESP + 0x18]
// 005e4fbf: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e4fc5: FLD float ptr [EAX]
// 005e4fc7: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4fcd: FISTP dword ptr [EBX]
// 005e4fcf: FLD float ptr [EAX + 0x4]
// 005e4fd2: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4fd8: FISTP dword ptr [EBX + 0x4]
// 005e4fdb: FLD float ptr [EAX + 0x8]
// 005e4fde: FMUL float ptr [0x00664cb0]
//   XREF to: 00664cb0 (READ)
// 005e4fe4: FISTP dword ptr [EBX + 0x8]
// 005e4fe7: LEA EAX,[ESP + 0x3c]
// 005e4feb: PUSH EAX
// 005e4fec: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e4fee: ADD EAX,0x90
// 005e4ff3: PUSH EAX
// 005e4ff4: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005e4ff9: ADD ESP,0x8
// 005e4ffc: PUSH 0x1
// 005e4ffe: PUSH 0x0
// 005e5000: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e5006: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005e5007: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 005e500c: ADD ESP,0xc
// 005e500f: PUSH 0x3
// 005e5011: PUSH 0x2
// 005e5013: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e5019: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005e501a: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 005e501f: ADD ESP,0xc
// 005e5022: PUSH 0x2
// 005e5024: PUSH 0x0
// 005e5026: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e502b: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005e502c: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 005e5031: ADD ESP,0xc
// 005e5034: CMP EDI,0x168
// 005e503a: JLE 0x005e4e4a
//   XREF to: 005e4e4a (CONDITIONAL_JUMP)
// 005e5040: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_005e5040
// 005e5044: MOV ESP,EBP
// 005e5046: POP EBP
// 005e5047: POP EDI
// 005e5048: POP ESI
// 005e5049: POP EBX
// 005e504a: RET
