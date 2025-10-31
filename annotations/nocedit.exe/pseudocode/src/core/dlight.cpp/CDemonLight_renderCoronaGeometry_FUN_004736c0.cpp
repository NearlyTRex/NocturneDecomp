// Name: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
// Address: 004736c0
// Address Range: [[004736c0, 004739cc] [004739f3, 00473a1d]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0 (00450ac0) at 00450b44 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0061f123 = 18
//   double DOUBLE_0061f12b = 6.28318530700000
//   double DOUBLE_0061f133 = 0.0625
//   double DOUBLE_0061f13b = 0.0555555555555556
//   double DOUBLE_0061f143 = 256
//   float FLOAT_0065c900 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_026a72d8
//   undefined4 DAT_026a72dc
//   undefined4 DAT_026a72e0
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight *this_ptr)

{
  CDemonRenderer *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 extraout_EDX_00;
  bool bVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  float unaff_EDI;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  CVector3i CStack_6c;
  int local_60;
  int local_5c;
  undefined1 local_58 [8];
  int iStack_50;
  undefined1 auStack_48 [8];
  float local_40 [3];
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  float local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&(this_ptr->base).base.position);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,(CVector3f *)auStack_48);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(auStack_48 + 4),(CVector3i *)0x0);
  fVar10 = ((float)DOUBLE_0061f123 / (this_ptr->base).base.projection_scale) *
           (this_ptr->base).max_distance;
  iVar7 = 0;
  local_2c = (this_ptr->base).max_distance;
  iVar6 = 0;
  do {
    fVar8 = (float10)iVar7 * (float10)DOUBLE_0061f12b * (float10)DOUBLE_0061f133;
    fVar9 = (float10)fcos(fVar8);
    fVar8 = (float10)fsin(fVar8);
    local_34 = (float)(fVar9 * (float10)fVar10);
    local_30 = (float)(fVar8 * (float10)fVar10);
    local_58._0_4_ = (undefined4)ROUND(local_34 * FLOAT_0065c900);
    local_58._4_4_ = (undefined4)ROUND(local_30 * FLOAT_0065c900);
    iStack_50 = (int)ROUND(local_2c * FLOAT_0065c900);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar6),(CVector3i *)local_58);
    pCVar1 = g_CDemonRendererPtr;
    iVar7 = iVar7 + 1;
    *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0;
    iVar6 = iVar6 + 0x30;
  } while (iVar7 < 0x10);
  CStack_6c.x = (int)ROUND(DAT_026a72d8 * FLOAT_0065c900);
  CStack_6c.y = (int)ROUND(DAT_026a72dc * FLOAT_0065c900);
  CStack_6c.z = (int)ROUND(DAT_026a72e0 * FLOAT_0065c900);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[0x10].projected_vertex,&CStack_6c);
  pCVar1 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr[0x10].light = 9.18341e-41;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(pCVar1,1);
  pfVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr,local_40);
  local_18 = *pfVar2 - (float)(this_ptr->base).base.position.x;
  local_14 = pfVar2[1] - (float)(this_ptr->base).base.position.y;
  bVar5 = false;
  fVar10 = pfVar2[2] - (float)(this_ptr->base).base.position.z;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                      (CVector3f *)(local_58 + 4),(CVector3f *)&local_18);
  if ((CVector3f *)&local_14 != pCVar3) {
    local_14 = pCVar3->x;
    fVar10 = pCVar3->y;
    unaff_EDI = pCVar3->z;
  }
  local_14 = (this_ptr->base).base.projection_scale * (float)DOUBLE_0061f13b * local_14;
  fVar10 = (float)DOUBLE_0061f13b * (this_ptr->base).base.projection_scale * fVar10;
  if ((((local_14 < unaff_EDI) && (-unaff_EDI < local_14)) && (fVar10 < unaff_EDI)) &&
     ((-unaff_EDI < fVar10 && (unaff_EDI < (this_ptr->base).max_distance)))) {
    bVar5 = true;
  }
  if (bVar5) {
    core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0();
    uVar4 = extraout_EDX_00;
  }
  else {
    iVar6 = 0;
    do {
      if (iVar6 == 0xf) {
        CStack_6c.y = 0;
      }
      else {
        CStack_6c.y = iVar6 + 1;
      }
      iVar7 = iVar6 + 1;
      CStack_6c.z = iVar6;
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff80,
                 core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
      uVar4 = extraout_EDX;
      iVar6 = iVar7;
    } while (iVar7 < 0x10);
  }
  fVar8 = (float10)(this_ptr->base).max_distance * (float10)DOUBLE_0061f143;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar4,this_ptr));
  CStack_6c.y = (int)ROUND(fVar8);
  iVar6 = 0;
  do {
    iVar7 = iVar6 + 1;
    CStack_6c.z = 0;
    local_60 = iVar6;
    local_5c = iVar7;
    engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff84,
               core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320);
    iVar6 = iVar7;
  } while (iVar7 < 0xe);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(this_ptr);
  return;
}


// Assembly code:
// 004736c0: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
// 004736c1: PUSH ESI
// 004736c2: PUSH EDI
// 004736c3: PUSH EBP
// 004736c4: MOV EBP,ESP
// 004736c6: SUB ESP,0x98
// 004736cc: AND ESP,0xfffffff8
// 004736cf: MOV EAX,dword ptr [EBP + 0x14]
// 004736d2: ADD EAX,0x4
// 004736d5: PUSH EAX
// 004736d6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004736dc: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004736dd: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004736e2: ADD ESP,0x8
// 004736e5: LEA EAX,[ESP + 0x5c]
// 004736e9: PUSH EAX
// 004736ea: MOV EAX,dword ptr [EBP + 0x14]
// 004736ed: ADD EAX,0x10
// 004736f0: PUSH EAX
// 004736f1: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 004736f6: ADD ESP,0x8
// 004736f9: PUSH 0x0
// 004736fb: LEA EAX,[ESP + 0x60]
// 004736ff: PUSH EAX
// 00473700: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473706: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00473707: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0047370c: ADD ESP,0xc
// 0047370f: MOV EAX,dword ptr [EBP + 0x14]
// 00473712: FLD float ptr [EAX + 0x38]
// 00473715: FDIVR double ptr [0x0061f123]
//   XREF to: 0061f123 (READ)
// 0047371b: FMUL float ptr [EAX + 0x140]
// 00473721: XOR ESI,ESI
// 00473723: XOR EDI,EDI
// 00473725: MOV EAX,dword ptr [EAX + 0x140]
// 0047372b: FSTP float ptr [ESP]
// 0047372e: MOV dword ptr [ESP + 0x70],EAX
// 00473732: MOV dword ptr [ESP + 0x94],ESI
//   Label: LAB_00473732
// 00473739: FILD dword ptr [ESP + 0x94]
// 00473740: FMUL double ptr [0x0061f12b]
//   XREF to: 0061f12b (READ)
// 00473746: FMUL double ptr [0x0061f133]
//   XREF to: 0061f133 (READ)
// 0047374c: FLD ST0
// 0047374e: FCOS
// 00473750: FXCH
// 00473752: FSIN
// 00473754: FLD float ptr [ESP]
// 00473757: FXCH ST2
// 00473759: FMUL ST2
// 0047375b: FXCH
// 0047375d: FMULP ST2
// 0047375f: LEA EBX,[ESP + 0x44]
// 00473763: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473769: LEA EAX,[ESP + 0x68]
// 0047376d: FSTP float ptr [ESP + 0x68]
// 00473771: FSTP float ptr [ESP + 0x6c]
// 00473775: FLD float ptr [EAX]
// 00473777: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047377d: FISTP dword ptr [EBX]
// 0047377f: FLD float ptr [EAX + 0x4]
// 00473782: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473788: FISTP dword ptr [EBX + 0x4]
// 0047378b: FLD float ptr [EAX + 0x8]
// 0047378e: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00473794: FISTP dword ptr [EBX + 0x8]
// 00473797: LEA EAX,[ESP + 0x44]
// 0047379b: PUSH EAX
// 0047379c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047379e: ADD EAX,EDI
// 004737a0: PUSH EAX
// 004737a1: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004737a6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004737ac: ADD EDI,0x30
// 004737af: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004737b1: INC ESI
// 004737b2: ADD ESP,0x8
// 004737b5: MOV dword ptr [EDI + EAX*0x1 + -0x10],0x0
// 004737bd: CMP ESI,0x10
// 004737c0: JL 0x00473732
//   XREF to: 00473732 (CONDITIONAL_JUMP)
// 004737c6: LEA EBX,[ESP + 0x2c]
// 004737ca: MOV EAX,0x26a72d8
//   XREF to: 026a72d8 (DATA)
// 004737cf: FLD float ptr [EAX]
//   XREF to: 026a72d8 (READ)
// 004737d1: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004737d7: FISTP dword ptr [EBX]
// 004737d9: FLD float ptr [EAX + 0x4]
//   XREF to: 026a72dc (READ)
// 004737dc: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004737e2: FISTP dword ptr [EBX + 0x4]
// 004737e5: FLD float ptr [EAX + 0x8]
//   XREF to: 026a72e0 (READ)
// 004737e8: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004737ee: FISTP dword ptr [EBX + 0x8]
// 004737f1: LEA EAX,[ESP + 0x2c]
// 004737f5: PUSH EAX
// 004737f6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004737f8: ADD EAX,0x300
// 004737fd: PUSH EAX
// 004737fe: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00473803: ADD ESP,0x8
// 00473806: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0047380b: PUSH 0x1
// 0047380d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0047380f: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00473810: MOV dword ptr [EDX + 0x320],0xffff
// 0047381a: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0047381f: ADD ESP,0x8
// 00473822: LEA EAX,[ESP + 0x50]
// 00473826: PUSH EAX
// 00473827: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047382d: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0047382e: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 00473833: ADD ESP,0x8
// 00473836: MOV EDX,dword ptr [EBP + 0x14]
// 00473839: FLD float ptr [EAX]
// 0047383b: FSUB float ptr [EDX + 0x4]
// 0047383e: FSTP float ptr [ESP + 0x74]
// 00473842: FLD float ptr [EAX + 0x4]
// 00473845: FSUB float ptr [EDX + 0x8]
// 00473848: FSTP float ptr [ESP + 0x78]
// 0047384c: FLD float ptr [EAX + 0x8]
// 0047384f: LEA EAX,[ESP + 0x74]
// 00473853: PUSH EAX
// 00473854: LEA EAX,[ESP + 0x3c]
// 00473858: XOR EBX,EBX
// 0047385a: PUSH EAX
// 0047385b: LEA EAX,[EDX + 0x10]
// 0047385e: FSUB float ptr [EDX + 0xc]
// 00473861: PUSH EAX
// 00473862: FSTP float ptr [ESP + 0x88]
// 00473869: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0047386e: MOV EDX,EAX
// 00473870: LEA EAX,[ESP + 0x80]
// 00473877: ADD ESP,0xc
// 0047387a: CMP EAX,EDX
// 0047387c: JNZ 0x004739f3
//   XREF to: 004739f3 (CONDITIONAL_JUMP)
// 00473882: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00473882
// 00473885: FLD double ptr [0x0061f13b]
//   XREF to: 0061f13b (READ)
// 0047388b: FLD float ptr [EAX + 0x38]
// 0047388e: FMUL ST1
// 00473890: FMUL float ptr [ESP + 0x74]
// 00473894: FSTP float ptr [ESP + 0x74]
// 00473898: FMUL float ptr [EAX + 0x38]
// 0047389b: FLD float ptr [ESP + 0x78]
// 0047389f: FXCH
// 004738a1: FMUL ST1
// 004738a3: FLD float ptr [ESP + 0x74]
// 004738a7: FXCH
// 004738a9: FSTP ST2
// 004738ab: FXCH
// 004738ad: FSTP float ptr [ESP + 0x78]
// 004738b1: FCOMP float ptr [ESP + 0x7c]
// 004738b5: FNSTSW AX
// 004738b7: SAHF
// 004738b8: JNC 0x0047390b
//   XREF to: 0047390b (CONDITIONAL_JUMP)
// 004738ba: FLD float ptr [ESP + 0x74]
// 004738be: FLD float ptr [ESP + 0x7c]
// 004738c2: FCHS
// 004738c4: FSTP float ptr [ESP + 0x90]
// 004738cb: FCOMP float ptr [ESP + 0x90]
// 004738d2: FNSTSW AX
// 004738d4: SAHF
// 004738d5: JBE 0x0047390b
//   XREF to: 0047390b (CONDITIONAL_JUMP)
// 004738d7: FLD float ptr [ESP + 0x78]
// 004738db: FCOMP float ptr [ESP + 0x7c]
// 004738df: FNSTSW AX
// 004738e1: SAHF
// 004738e2: JNC 0x0047390b
//   XREF to: 0047390b (CONDITIONAL_JUMP)
// 004738e4: FLD float ptr [ESP + 0x78]
// 004738e8: FCOMP float ptr [ESP + 0x90]
// 004738ef: FNSTSW AX
// 004738f1: SAHF
// 004738f2: JBE 0x0047390b
//   XREF to: 0047390b (CONDITIONAL_JUMP)
// 004738f4: MOV EAX,dword ptr [EBP + 0x14]
// 004738f7: FLD float ptr [ESP + 0x7c]
// 004738fb: FCOMP float ptr [EAX + 0x140]
// 00473901: FNSTSW AX
// 00473903: SAHF
// 00473904: JNC 0x0047390b
//   XREF to: 0047390b (CONDITIONAL_JUMP)
// 00473906: MOV EBX,0x1
// 0047390b: XOR EAX,EAX
//   Label: LAB_0047390b
// 0047390d: MOV EDI,0x3
// 00473912: MOV dword ptr [ESP + 0x18],EAX
// 00473916: MOV dword ptr [ESP + 0x14],EAX
// 0047391a: MOV dword ptr [ESP + 0x10],EAX
// 0047391e: MOV dword ptr [ESP + 0xc],EAX
// 00473922: MOV dword ptr [ESP + 0x8],EDI
// 00473926: TEST EBX,EBX
// 00473928: JNZ 0x00473a14
//   XREF to: 00473a14 (CONDITIONAL_JUMP)
// 0047392e: MOV dword ptr [ESP + 0x24],0x10
// 00473936: MOV dword ptr [ESP + 0x20],EBX
//   Label: LAB_00473936
// 0047393a: CMP EBX,0xf
// 0047393d: JNZ 0x00473a0c
//   XREF to: 00473a0c (CONDITIONAL_JUMP)
// 00473943: XOR EAX,EAX
// 00473945: MOV dword ptr [ESP + 0x1c],EAX
//   Label: LAB_00473945
// 00473949: PUSH 0x450320
//   XREF to: 00450320 (DATA)
// 0047394e: LEA EAX,[ESP + 0x8]
// 00473952: PUSH EAX
// 00473953: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00473959: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0047395a: INC EBX
// 0047395b: CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)
// 00473960: ADD ESP,0xc
// 00473963: CMP EBX,0x10
// 00473966: JL 0x00473936
//   XREF to: 00473936 (CONDITIONAL_JUMP)
// 00473968: MOV ESI,0xffff
//   Label: LAB_00473968
// 0047396d: XOR ECX,ECX
// 0047396f: MOV EAX,dword ptr [EBP + 0x14]
// 00473972: MOV dword ptr [ESP + 0xc],ECX
// 00473976: MOV dword ptr [ESP + 0x10],ECX
// 0047397a: MOV dword ptr [ESP + 0x14],ESI
// 0047397e: FLD float ptr [EAX + 0x140]
// 00473984: FMUL double ptr [0x0061f143]
//   XREF to: 0061f143 (READ)
// 0047398a: XOR EBX,EBX
// 0047398c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00473991: FISTP dword ptr [ESP + 0x18]
// 00473995: PUSH 0x450320
//   Label: LAB_00473995
//   XREF to: 00450320 (DATA)
// 0047399a: LEA EAX,[ESP + 0x8]
// 0047399e: MOV dword ptr [ESP + 0x24],EBX
// 004739a2: XOR EDI,EDI
// 004739a4: PUSH EAX
// 004739a5: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004739aa: INC EBX
// 004739ab: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004739ac: MOV dword ptr [ESP + 0x28],EDI
// 004739b0: MOV dword ptr [ESP + 0x30],EBX
// 004739b4: CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)
// 004739b9: ADD ESP,0xc
// 004739bc: CMP EBX,0xe
// 004739bf: JL 0x00473995
//   XREF to: 00473995 (CONDITIONAL_JUMP)
// 004739c1: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004739c7: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004739c8: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004739f3: MOV EAX,dword ptr [EDX]
//   Label: LAB_004739f3
// 004739f5: MOV dword ptr [ESP + 0x74],EAX
// 004739f9: MOV EAX,dword ptr [EDX + 0x4]
// 004739fc: MOV dword ptr [ESP + 0x78],EAX
// 00473a00: MOV EAX,dword ptr [EDX + 0x8]
// 00473a03: MOV dword ptr [ESP + 0x7c],EAX
// 00473a07: JMP 0x00473882
//   XREF to: 00473882 (UNCONDITIONAL_JUMP)
// 00473a0c: LEA EAX,[EBX + 0x1]
//   Label: LAB_00473a0c
// 00473a0f: JMP 0x00473945
//   XREF to: 00473945 (UNCONDITIONAL_JUMP)
// 00473a14: CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
//   Label: LAB_00473a14
//   XREF to: 004502e0 (UNCONDITIONAL_CALL)
// 00473a19: JMP 0x00473968
//   XREF to: 00473968 (UNCONDITIONAL_JUMP)
