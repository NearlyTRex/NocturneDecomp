// Name: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
// Address: 00475210
// Address Range: [[00475210, 00475878] [00475894, 004758c3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight * this_ptr)
// Globals:
//   double DOUBLE_0061f20b = 0.0625
//   float FLOAT_0061f213 = 0.0625
//   double DOUBLE_0061f21b = 3.14159265350000
//   double DOUBLE_0061f223 = 2
//   double DOUBLE_0061f22b = 0.00390625
//   float FLOAT_0061f233 = 0.25
//   double DOUBLE_0061f23b = 1024
//   double DOUBLE_0061f243 = 18
//   float FLOAT_0065c900 = 256
//   SMRGLTextureBasic[20] g_LightTextures
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  float fVar4;
  ushort *puVar5;
  ushort *extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  unkbyte10 Var11;
  float10 fVar12;
  double dVar13;
  float unaff_retaddr;
  float in_stack_00000008;
  float in_stack_0000000c;
  float local_d0;
  SMRGLHeaderPrimitive local_ac;
  undefined1 local_94 [8];
  undefined1 auStack_8c [12];
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_58 [12];
  int local_4c;
  int local_48;
  int local_3c;
  int local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float fStack_14;
  
  if (this_ptr->field17_0x1cbc == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&(this_ptr->base).base.position);
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,(CVector3f *)(local_94 + 4));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)auStack_8c,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,g_LightTextures)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  fVar7 = (float10)1 * ((float10)DOUBLE_0061f243 / (float10)(this_ptr->base).base.projection_scale)
          * (float10)DOUBLE_0061f20b;
  local_d0 = (float)fVar7;
  Var11 = fpatan(fVar7,(float10)1);
  fVar7 = (float10)fcos(Var11);
  local_38 = 0;
  local_34 = (float)fVar7;
  do {
    fVar7 = (float10)local_38 * (float10)FLOAT_0061f213 * (float10)DOUBLE_0061f21b *
            (float10)DOUBLE_0061f223;
    fVar8 = (float10)fsin(fVar7);
    fVar12 = (float10)(local_38 + 1) * (float10)FLOAT_0061f213 * (float10)DOUBLE_0061f21b *
             (float10)DOUBLE_0061f223;
    fVar9 = (float10)fsin(fVar12);
    fVar7 = (float10)fcos(fVar7);
    fVar12 = (float10)fcos(fVar12);
    iVar3 = this_ptr->shadow_map_height / 2;
    fVar10 = (float10)local_d0;
    local_24 = (float)(fVar7 * fVar10);
    fVar7 = (float10)iVar3 - (float10)iVar3 * (float10)local_24;
    iVar6 = this_ptr->shadow_map_width;
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44(this_ptr->shadow_map_height >> 0x1f,iVar3));
    local_48 = (int)ROUND(fVar7);
    local_24 = (float)(fVar8 * fVar10);
    fVar9 = fVar9 * fVar10;
    fVar7 = (float10)iVar3 * (float10)local_24 + (float10)iVar3;
    fVar12 = fVar12 * fVar10;
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),local_48 * iVar6));
    local_3c = (int)ROUND(fVar7);
    puVar5 = this_ptr->shadow_depth_buffer + SUB84(dVar13,0) + local_3c;
    local_28 = (float)fVar9;
    local_24 = (float)fVar12;
    iVar6 = 0;
    do {
      local_34 = (this_ptr->base).max_distance;
      fVar4 = (float)iVar6 * local_2c * local_34 * FLOAT_0061f233;
      fVar1 = (float)(iVar6 + 1);
      fVar2 = (float)(int)fVar1 * local_2c * local_34 * FLOAT_0061f233;
      fVar8 = ((float10)local_34 - (float10)fVar2) * ((float10)1 / (float10)local_34) *
              (float10)DOUBLE_0061f23b;
      fVar7 = (float10)fVar4;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(puVar5,fVar1));
      crt_math_c_round_FUN_005fe6b0(dVar13);
      local_74 = fVar4;
      if (fVar7 < (float10)fVar4) {
        local_74 = fVar1;
      }
      local_7c = local_74 * local_18;
      local_78 = local_74 * fStack_14;
      local_94._0_4_ = (undefined4)ROUND(local_7c * FLOAT_0065c900);
      local_94._4_4_ = (undefined4)ROUND(local_78 * FLOAT_0065c900);
      auStack_8c._0_4_ = (undefined4)ROUND(local_74 * FLOAT_0065c900);
      local_d0 = 6.550934e-39;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_94);
      if (in_stack_00000008 < fVar4) {
        fVar4 = in_stack_00000008;
      }
      local_78 = fVar4 * local_1c;
      local_74 = fVar4 * local_18;
      auStack_8c._8_4_ = (undefined4)ROUND(local_78 * FLOAT_0065c900);
      local_80 = (int)ROUND(local_74 * FLOAT_0065c900);
      local_7c = (float)(int)ROUND(fVar4 * FLOAT_0065c900);
      fStack_70 = fVar4;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                 (CVector3i *)(auStack_8c + 8));
      fVar4 = unaff_retaddr;
      if (in_stack_00000008 < unaff_retaddr) {
        fVar4 = in_stack_00000008;
      }
      local_74 = fVar4 * local_18;
      fStack_70 = fVar4 * fStack_14;
      local_58._8_4_ = (undefined4)ROUND(local_74 * FLOAT_0065c900);
      local_4c = (int)ROUND(fStack_70 * FLOAT_0065c900);
      local_48 = (int)ROUND(fVar4 * FLOAT_0065c900);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                 (CVector3i *)(local_58 + 8));
      fVar4 = in_stack_00000008;
      if (in_stack_0000000c < in_stack_00000008) {
        fVar4 = in_stack_0000000c;
      }
      fStack_70 = fVar4 * (float)(int)ROUND(fVar8);
      fStack_6c = fVar4 * fVar2;
      local_58._0_4_ = (undefined4)ROUND(fStack_70 * FLOAT_0065c900);
      local_58._4_4_ = (undefined4)ROUND(fStack_6c * FLOAT_0065c900);
      local_58._8_4_ = (undefined4)ROUND(fVar4 * FLOAT_0065c900);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_58);
      this_ptr_00 = g_CDemonRendererPtr;
      g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = unaff_retaddr;
      this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr->color = 0xffff;
      this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[1].w_recip = unaff_retaddr;
      this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
      this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[2].w_recip = fVar1;
      this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
      this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[3].w_recip = fVar1;
      this_ptr_00->vertex_buffer_ptr[3].fog = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
      this_ptr_00->vertex_buffer_ptr[3].light = 9.18341e-41;
      this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
      iVar6 = iVar6 + 1;
      this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
      local_ac.surface_normal.D = 0;
      local_ac.surface_normal.C = 0;
      local_ac.base.count = 4;
      local_ac.surface_normal.B = 0;
      local_94._4_4_ = 1;
      local_ac.surface_normal.A = 0;
      local_94._0_4_ = 0;
      auStack_8c._4_4_ = 3;
      auStack_8c._0_4_ = 2;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr_00,&local_ac);
      puVar5 = extraout_EDX;
    } while (iVar6 < 4);
    fStack_14 = (float)((int)fStack_14 + 1);
  } while ((int)fStack_14 < 0x10);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 00475210: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
// 00475211: PUSH ESI
// 00475212: PUSH EDI
// 00475213: PUSH EBP
// 00475214: MOV EBP,ESP
// 00475216: SUB ESP,0xd4
// 0047521c: AND ESP,0xfffffff8
// 0047521f: MOV EDI,dword ptr [EBP + 0x14]
// 00475222: CMP dword ptr [EDI + 0x1cbc],0x0
// 00475229: JNZ 0x00475232
//   XREF to: 00475232 (CONDITIONAL_JUMP)
// 0047522b: MOV ESP,EBP
// 0047522d: POP EBP
// 0047522e: POP EDI
// 0047522f: POP ESI
// 00475230: POP EBX
// 00475231: RET
// 00475232: LEA EAX,[EDI + 0x4]
//   Label: LAB_00475232
// 00475235: PUSH EAX
// 00475236: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047523c: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0047523d: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00475242: ADD ESP,0x8
// 00475245: LEA EAX,[ESP + 0x54]
// 00475249: PUSH EAX
// 0047524a: LEA EAX,[EDI + 0x10]
// 0047524d: PUSH EAX
// 0047524e: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 00475253: ADD ESP,0x8
// 00475256: PUSH 0x0
// 00475258: LEA EAX,[ESP + 0x58]
// 0047525c: PUSH EAX
// 0047525d: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475263: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00475264: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00475269: ADD ESP,0xc
// 0047526c: PUSH 0x66fed8
//   XREF to: 0066fed8 (DATA)
// 00475271: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475277: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00475278: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0047527d: ADD ESP,0x8
// 00475280: PUSH 0x1
// 00475282: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00475287: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00475288: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0047528d: MOV EDX,0x1
// 00475292: ADD ESP,0x8
// 00475295: MOV dword ptr [ESP],EDX
// 00475298: FLD float ptr [EDI + 0x38]
//   Label: LAB_00475298
// 0047529b: FDIVR double ptr [0x0061f243]
//   XREF to: 0061f243 (READ)
// 004752a1: MOV EAX,dword ptr [ESP]
// 004752a4: MOV dword ptr [ESP + 0xcc],EAX
// 004752ab: FILD dword ptr [ESP + 0xcc]
// 004752b2: FMULP
// 004752b4: FMUL double ptr [0x0061f20b]
//   XREF to: 0061f20b (READ)
// 004752ba: FST float ptr [ESP + 0x4]
// 004752be: FLD1
// 004752c0: FPATAN
// 004752c2: FCOS
// 004752c4: XOR ECX,ECX
// 004752c6: MOV dword ptr [ESP + 0x9c],ECX
// 004752cd: FSTP float ptr [ESP + 0xa0]
// 004752d4: MOV EAX,dword ptr [ESP + 0x9c]
//   Label: LAB_004752d4
// 004752db: MOV dword ptr [ESP + 0xcc],EAX
// 004752e2: FLD float ptr [0x0061f213]
//   XREF to: 0061f213 (READ)
// 004752e8: FILD dword ptr [ESP + 0xcc]
// 004752ef: FMUL ST1
// 004752f1: FLD double ptr [0x0061f21b]
//   XREF to: 0061f21b (READ)
// 004752f7: FXCH
// 004752f9: FMUL ST1
// 004752fb: INC EAX
// 004752fc: FLD double ptr [0x0061f223]
//   XREF to: 0061f223 (READ)
// 00475302: FXCH
// 00475304: FMUL ST1
// 00475306: MOV dword ptr [ESP + 0xcc],EAX
// 0047530d: FLD ST0
// 0047530f: FSIN
// 00475311: FILD dword ptr [ESP + 0xcc]
// 00475318: FMULP ST5
// 0047531a: FXCH ST4
// 0047531c: FMULP ST3
// 0047531e: FXCH ST2
// 00475320: FMULP
// 00475322: FLD ST0
// 00475324: FSIN
// 00475326: FXCH ST2
// 00475328: FCOS
// 0047532a: FXCH
// 0047532c: FCOS
// 0047532e: MOV EAX,dword ptr [EDI + 0x1cc0]
// 00475334: MOV EDX,EAX
// 00475336: SAR EDX,0x1f
// 00475339: SUB EAX,EDX
// 0047533b: SAR EAX,0x1
// 0047533d: MOV dword ptr [ESP + 0xcc],EAX
// 00475344: MOV EAX,dword ptr [EDI + 0x1cc4]
// 0047534a: MOV EDX,EAX
// 0047534c: SAR EDX,0x1f
// 0047534f: SUB EAX,EDX
// 00475351: SAR EAX,0x1
// 00475353: FLD float ptr [ESP + 0x4]
// 00475357: FXCH ST2
// 00475359: FMUL ST2
// 0047535b: MOV dword ptr [ESP + 0xd0],EAX
// 00475362: FSTP float ptr [ESP + 0xb0]
// 00475369: FILD dword ptr [ESP + 0xd0]
// 00475370: FLD ST0
// 00475372: FMUL float ptr [ESP + 0xb0]
// 00475379: FSUBP
// 0047537b: MOV EBX,dword ptr [EDI + 0x1cc0]
// 00475381: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00475386: FISTP dword ptr [ESP + 0x88]
// 0047538d: MOV EAX,dword ptr [ESP + 0x88]
// 00475394: IMUL EAX,EBX
// 00475397: FXCH ST3
// 00475399: FMUL ST1
// 0047539b: FSTP float ptr [ESP + 0xac]
// 004753a2: FILD dword ptr [ESP + 0xcc]
// 004753a9: FLD ST0
// 004753ab: FMUL float ptr [ESP + 0xac]
// 004753b2: FXCH ST3
// 004753b4: FMUL ST2
// 004753b6: FXCH ST3
// 004753b8: FADDP
// 004753ba: FXCH ST3
// 004753bc: FMULP
// 004753be: FXCH ST2
// 004753c0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004753c5: FISTP dword ptr [ESP + 0x90]
// 004753cc: ADD EAX,dword ptr [ESP + 0x90]
// 004753d3: MOV EDX,dword ptr [EDI + 0x2f94]
// 004753d9: ADD EAX,EAX
// 004753db: ADD EDX,EAX
// 004753dd: XOR EAX,EAX
// 004753df: MOV AX,word ptr [EDX]
// 004753e2: MOV dword ptr [ESP + 0xd0],EAX
// 004753e9: FILD dword ptr [ESP + 0xd0]
// 004753f0: FMUL double ptr [0x0061f22b]
//   XREF to: 0061f22b (READ)
// 004753f6: FXCH
// 004753f8: FSTP float ptr [ESP + 0xa4]
// 004753ff: FXCH
// 00475401: FSTP float ptr [ESP + 0xa8]
// 00475408: FSTP float ptr [ESP + 0xc0]
// 0047540f: MOV EAX,dword ptr [ESP + 0xc0]
// 00475416: XOR ESI,ESI
// 00475418: MOV dword ptr [ESP + 0xbc],EAX
// 0047541f: MOV EAX,dword ptr [EDI + 0x140]
//   Label: LAB_0047541f
// 00475425: FLD float ptr [ESP + 0xa0]
// 0047542c: MOV dword ptr [ESP + 0x98],EAX
// 00475433: MOV dword ptr [ESP + 0xd0],ESI
// 0047543a: FMUL float ptr [ESP + 0x98]
// 00475441: FILD dword ptr [ESP + 0xd0]
// 00475448: FMUL ST1
// 0047544a: FLD float ptr [0x0061f233]
//   XREF to: 0061f233 (READ)
// 00475450: FXCH
// 00475452: FMUL ST1
// 00475454: FLD float ptr [ESP + 0x98]
// 0047545b: FXCH
// 0047545d: FSTP float ptr [ESP + 0xc8]
// 00475464: FSUB float ptr [ESP + 0xc8]
// 0047546b: FLD1
// 0047546d: FDIV float ptr [ESP + 0x98]
// 00475474: LEA EAX,[ESI + 0x1]
// 00475477: MOV dword ptr [ESP + 0xd0],EAX
// 0047547e: FILD dword ptr [ESP + 0xd0]
// 00475485: FMULP ST4
// 00475487: FXCH ST3
// 00475489: FMULP ST2
// 0047548b: FLD float ptr [ESP + 0x98]
// 00475492: FXCH ST2
// 00475494: FSTP float ptr [ESP + 0xc4]
// 0047549b: FXCH
// 0047549d: FSUB float ptr [ESP + 0xc4]
// 004754a4: FXCH
// 004754a6: FMUL ST2
// 004754a8: FXCH
// 004754aa: FMULP ST2
// 004754ac: FLD double ptr [0x0061f23b]
//   XREF to: 0061f23b (READ)
// 004754b2: FXCH
// 004754b4: FMUL ST1
// 004754b6: FXCH ST2
// 004754b8: FMULP
// 004754ba: FLD float ptr [ESP + 0xc8]
// 004754c1: FXCH ST2
// 004754c3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004754c8: FXCH
// 004754ca: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004754cf: FXCH
// 004754d1: FISTP dword ptr [ESP + 0xb4]
// 004754d8: FISTP dword ptr [ESP + 0xb8]
// 004754df: FCOMP float ptr [ESP + 0xc0]
// 004754e6: FNSTSW AX
// 004754e8: SAHF
// 004754e9: JNC 0x00475894
//   XREF to: 00475894 (CONDITIONAL_JUMP)
// 004754ef: MOV EAX,dword ptr [ESP + 0xc8]
// 004754f6: MOV dword ptr [ESP + 0x50],EAX
//   Label: LAB_004754f6
// 004754fa: FLD float ptr [ESP + 0x50]
// 004754fe: FMUL float ptr [ESP + 0xac]
// 00475505: FLD float ptr [ESP + 0x50]
// 00475509: FMUL float ptr [ESP + 0xb0]
// 00475510: LEA EBX,[ESP + 0x30]
// 00475514: LEA EAX,[ESP + 0x48]
// 00475518: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047551e: FXCH
// 00475520: FSTP float ptr [ESP + 0x48]
// 00475524: FSTP float ptr [ESP + 0x4c]
// 00475528: FLD float ptr [EAX]
// 0047552a: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475530: FISTP dword ptr [EBX]
// 00475532: FLD float ptr [EAX + 0x4]
// 00475535: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047553b: FISTP dword ptr [EBX + 0x4]
// 0047553e: FLD float ptr [EAX + 0x8]
// 00475541: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475547: FISTP dword ptr [EBX + 0x8]
// 0047554a: LEA EAX,[ESP + 0x30]
// 0047554e: PUSH EAX
// 0047554f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475551: PUSH EAX
// 00475552: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00475557: ADD ESP,0x8
// 0047555a: FLD float ptr [ESP + 0xc8]
// 00475561: FCOMP float ptr [ESP + 0xbc]
// 00475568: FNSTSW AX
// 0047556a: SAHF
// 0047556b: JNC 0x004758a0
//   XREF to: 004758a0 (CONDITIONAL_JUMP)
// 00475571: MOV EAX,dword ptr [ESP + 0xc8]
// 00475578: MOV dword ptr [ESP + 0x50],EAX
//   Label: LAB_00475578
// 0047557c: FLD float ptr [ESP + 0x50]
// 00475580: FMUL float ptr [ESP + 0xa4]
// 00475587: FLD float ptr [ESP + 0x50]
// 0047558b: FMUL float ptr [ESP + 0xa8]
// 00475592: LEA EBX,[ESP + 0x3c]
// 00475596: LEA EAX,[ESP + 0x48]
// 0047559a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004755a0: FXCH
// 004755a2: FSTP float ptr [ESP + 0x48]
// 004755a6: FSTP float ptr [ESP + 0x4c]
// 004755aa: FLD float ptr [EAX]
// 004755ac: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004755b2: FISTP dword ptr [EBX]
// 004755b4: FLD float ptr [EAX + 0x4]
// 004755b7: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004755bd: FISTP dword ptr [EBX + 0x4]
// 004755c0: FLD float ptr [EAX + 0x8]
// 004755c3: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004755c9: FISTP dword ptr [EBX + 0x8]
// 004755cc: LEA EAX,[ESP + 0x3c]
// 004755d0: PUSH EAX
// 004755d1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004755d3: ADD EAX,0x30
// 004755d6: PUSH EAX
// 004755d7: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004755dc: ADD ESP,0x8
// 004755df: FLD float ptr [ESP + 0xc4]
// 004755e6: FCOMP float ptr [ESP + 0xbc]
// 004755ed: FNSTSW AX
// 004755ef: SAHF
// 004755f0: JNC 0x004758ac
//   XREF to: 004758ac (CONDITIONAL_JUMP)
// 004755f6: MOV EAX,dword ptr [ESP + 0xc4]
// 004755fd: MOV dword ptr [ESP + 0x50],EAX
//   Label: LAB_004755fd
// 00475601: FLD float ptr [ESP + 0x50]
// 00475605: FMUL float ptr [ESP + 0xa4]
// 0047560c: FLD float ptr [ESP + 0x50]
// 00475610: FMUL float ptr [ESP + 0xa8]
// 00475617: LEA EBX,[ESP + 0x6c]
// 0047561b: LEA EAX,[ESP + 0x48]
// 0047561f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475625: FXCH
// 00475627: FSTP float ptr [ESP + 0x48]
// 0047562b: FSTP float ptr [ESP + 0x4c]
// 0047562f: FLD float ptr [EAX]
// 00475631: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475637: FISTP dword ptr [EBX]
// 00475639: FLD float ptr [EAX + 0x4]
// 0047563c: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00475642: FISTP dword ptr [EBX + 0x4]
// 00475645: FLD float ptr [EAX + 0x8]
// 00475648: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047564e: FISTP dword ptr [EBX + 0x8]
// 00475651: LEA EAX,[ESP + 0x6c]
// 00475655: PUSH EAX
// 00475656: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475658: ADD EAX,0x60
// 0047565b: PUSH EAX
// 0047565c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00475661: ADD ESP,0x8
// 00475664: FLD float ptr [ESP + 0xc4]
// 0047566b: FCOMP float ptr [ESP + 0xc0]
// 00475672: FNSTSW AX
// 00475674: SAHF
// 00475675: JNC 0x004758b8
//   XREF to: 004758b8 (CONDITIONAL_JUMP)
// 0047567b: MOV EAX,dword ptr [ESP + 0xc4]
// 00475682: MOV dword ptr [ESP + 0x50],EAX
//   Label: LAB_00475682
// 00475686: FLD float ptr [ESP + 0x50]
// 0047568a: FMUL float ptr [ESP + 0xac]
// 00475691: FLD float ptr [ESP + 0x50]
// 00475695: FMUL float ptr [ESP + 0xb0]
// 0047569c: LEA EBX,[ESP + 0x60]
// 004756a0: LEA EAX,[ESP + 0x48]
// 004756a4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004756aa: FXCH
// 004756ac: FSTP float ptr [ESP + 0x48]
// 004756b0: FSTP float ptr [ESP + 0x4c]
// 004756b4: FLD float ptr [EAX]
// 004756b6: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004756bc: FISTP dword ptr [EBX]
// 004756be: FLD float ptr [EAX + 0x4]
// 004756c1: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004756c7: FISTP dword ptr [EBX + 0x4]
// 004756ca: FLD float ptr [EAX + 0x8]
// 004756cd: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004756d3: FISTP dword ptr [EBX + 0x8]
// 004756d6: LEA EAX,[ESP + 0x60]
// 004756da: PUSH EAX
// 004756db: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004756dd: ADD EAX,0x90
// 004756e2: PUSH EAX
// 004756e3: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004756e8: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004756ee: ADD ESP,0x8
// 004756f1: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004756f3: MOV EAX,dword ptr [ESP + 0xb4]
// 004756fa: MOV dword ptr [EBX + 0x2c],EAX
// 004756fd: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004756ff: MOV dword ptr [EAX + 0x28],0xffff
// 00475706: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475708: MOV dword ptr [EAX + 0x24],0xffff
// 0047570f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475711: MOV dword ptr [EAX + 0x20],0xffff
// 00475718: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047571a: MOV dword ptr [EAX + 0x18],0xf80000
//   XREF to: 00f80000 (DATA)
// 00475721: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475723: MOV dword ptr [EAX + 0x1c],0xf80000
//   XREF to: 00f80000 (DATA)
// 0047572a: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047572c: MOV EAX,dword ptr [ESP + 0xb4]
// 00475733: MOV dword ptr [EBX + 0x5c],EAX
// 00475736: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475738: MOV dword ptr [EAX + 0x58],0xffff
// 0047573f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475741: MOV dword ptr [EAX + 0x54],0xffff
// 00475748: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047574a: MOV dword ptr [EAX + 0x50],0xffff
// 00475751: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475753: MOV dword ptr [EAX + 0x48],0x80000
// 0047575a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047575c: MOV dword ptr [EAX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00475763: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475765: MOV EAX,dword ptr [ESP + 0xb8]
// 0047576c: MOV dword ptr [EBX + 0x8c],EAX
// 00475772: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475774: MOV dword ptr [EAX + 0x88],0xffff
// 0047577e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475780: MOV dword ptr [EAX + 0x84],0xffff
// 0047578a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047578c: MOV dword ptr [EAX + 0x80],0xffff
// 00475796: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00475798: MOV dword ptr [EAX + 0x78],0x80000
// 0047579f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004757a1: MOV dword ptr [EAX + 0x7c],0x80000
// 004757a8: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004757aa: MOV EAX,dword ptr [ESP + 0xb8]
// 004757b1: MOV dword ptr [EBX + 0xbc],EAX
// 004757b7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004757b9: MOV dword ptr [EAX + 0xb8],0xffff
// 004757c3: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004757c5: MOV dword ptr [EAX + 0xb4],0xffff
// 004757cf: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004757d1: MOV dword ptr [EAX + 0xb0],0xffff
// 004757db: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004757dd: MOV dword ptr [EAX + 0xa8],0xf80000
//   XREF to: 00f80000 (DATA)
// 004757e7: INC ESI
// 004757e8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004757ea: XOR ECX,ECX
// 004757ec: MOV EBX,0x3
// 004757f1: MOV dword ptr [EAX + 0xac],0x80000
// 004757fb: MOV EAX,0x4
// 00475800: MOV dword ptr [ESP + 0x1c],ECX
// 00475804: MOV dword ptr [ESP + 0x18],ECX
// 00475808: MOV dword ptr [ESP + 0xc],EAX
// 0047580c: MOV EAX,0x1
// 00475811: MOV dword ptr [ESP + 0x14],ECX
// 00475815: MOV dword ptr [ESP + 0x24],EAX
// 00475819: LEA EAX,[ESP + 0x8]
// 0047581d: MOV dword ptr [ESP + 0x10],ECX
// 00475821: PUSH EAX
// 00475822: MOV dword ptr [ESP + 0x24],ECX
// 00475826: MOV ECX,0x2
// 0047582b: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0047582c: MOV dword ptr [ESP + 0x34],EBX
// 00475830: MOV dword ptr [ESP + 0x30],ECX
// 00475834: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 00475839: ADD ESP,0x8
// 0047583c: CMP ESI,0x4
// 0047583f: JL 0x0047541f
//   XREF to: 0047541f (CONDITIONAL_JUMP)
// 00475845: MOV ESI,dword ptr [ESP + 0x9c]
// 0047584c: INC ESI
// 0047584d: MOV dword ptr [ESP + 0x9c],ESI
// 00475854: CMP ESI,0x10
// 00475857: JL 0x004752d4
//   XREF to: 004752d4 (CONDITIONAL_JUMP)
// 0047585d: MOV EDX,dword ptr [ESP]
// 00475860: INC EDX
// 00475861: MOV dword ptr [ESP],EDX
// 00475864: CMP EDX,0x10
// 00475867: JL 0x00475298
//   XREF to: 00475298 (CONDITIONAL_JUMP)
// 0047586d: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00475873: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00475874: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00475894: MOV EAX,dword ptr [ESP + 0xc0]
//   Label: LAB_00475894
// 0047589b: JMP 0x004754f6
//   XREF to: 004754f6 (UNCONDITIONAL_JUMP)
// 004758a0: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_004758a0
// 004758a7: JMP 0x00475578
//   XREF to: 00475578 (UNCONDITIONAL_JUMP)
// 004758ac: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_004758ac
// 004758b3: JMP 0x004755fd
//   XREF to: 004755fd (UNCONDITIONAL_JUMP)
// 004758b8: MOV EAX,dword ptr [ESP + 0xc0]
//   Label: LAB_004758b8
// 004758bf: JMP 0x00475682
//   XREF to: 00475682 (UNCONDITIONAL_JUMP)
