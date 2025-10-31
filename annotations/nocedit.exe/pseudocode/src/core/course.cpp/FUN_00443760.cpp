// Name: core_course.cpp_FUN_00443760
// Address: 00443760
// Address Range: [[00443760, 00443bb7]]
// Convention: unknown
// Signature: undefined core_course.cpp_FUN_00443760()
// Cross-references:
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443eb8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_x_0061944f
//   TerminatedCString s_y_00619451
//   float FLOAT_0065c060 = 256
//   void* PTR_s_x_0066ec54 = 0061944f
//   void* PTR_s_y_0066ec58 = 00619451
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   uchar[32768] g_ColorCubeLookup
//   int g_ActiveRenderColor
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_plotPixelWithDepth_FUN_00401290
//   engine_3d.c_drawLineStrip2D_FUN_00404570
//   engine_3d.c_processPolygonColor_FUN_00403e30
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_prim.c_replaceWWithDepth_FUN_00552110
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void core_course_cpp_FUN_00443760
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               CVector3f *param_5)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int unaff_EDI;
  float10 fVar8;
  double dVar9;
  CVector3i local_5c;
  undefined1 local_4c [8];
  float local_44;
  CVector3f *local_40;
  undefined4 local_3c;
  CVector3f local_38;
  CVector3i local_2c;
  int local_18;
  int local_14;
  
  pCVar3 = (CVector3f *)(local_4c + 4);
  if (pCVar3 != param_5) {
    local_4c._4_4_ = param_5->x;
    local_44 = param_5->y;
    pCVar3 = (CVector3f *)param_5->z;
    local_40 = pCVar3;
  }
  fVar8 = (float10)param_5->x;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(param_2,pCVar3));
  local_18 = (int)ROUND(fVar8);
  iVar4 = local_18 >> 0x1f;
  fVar8 = (float10)param_5->y;
  crt_math_c_round_FUN_005fe6b0
            ((double)CONCAT44(iVar4 * 0x10,
                              (int)((local_18 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4));
  local_14 = (int)ROUND(fVar8);
  iVar4 = local_14 >> 0x1f;
  fVar8 = (float10)param_5->z;
  dVar9 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(iVar4 * 0x10,
                                      (int)((local_14 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >>
                                      4));
  iVar4 = (int)ROUND(fVar8) >> 0x1f;
  param_5->x = (float)unaff_EDI;
  param_5->y = (float)(SUB84(dVar9,0) << 4);
  this_ptr = g_CDemonRendererPtr;
  param_5->z = (float)(((int)(((int)ROUND(fVar8) + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4) <<
                      4);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(this_ptr,param_5);
  local_18 = -0x80;
  do {
    iVar4 = local_18;
    local_14 = -0x80;
    do {
      iVar2 = local_14;
      iVar7 = -0x80;
      do {
        local_2c.x = (int)ROUND(((float)iVar4 + param_5->x) * FLOAT_0065c060);
        local_2c.y = (int)ROUND(((float)iVar2 + param_5->y) * FLOAT_0065c060);
        local_2c.z = (int)ROUND(((float)iVar7 + param_5->z) * FLOAT_0065c060);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_2c);
        pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
        if ((int)((pSVar1->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (pSVar1->projected_vertex).transformed_z;
          iVar5 = iVar6 >> 0x1f;
          iVar6 = 0xff - ((int)((iVar6 + iVar5 * -0x80) - (uint)(iVar5 << 6 < 0)) >> 7);
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xff < iVar6) {
            iVar6 = 0xff;
          }
          g_ActiveRenderColor =
               (int)g_ColorCubeLookup
                    [((int)((iVar6 + (iVar6 >> 0x1f) * -8) - (uint)((iVar6 >> 0x1f) << 2 < 0)) >> 3)
                     * 0x421];
          engine_prim_c_replaceWWithDepth_FUN_00552110(pSVar1,1);
          engine_2d_c_plotPixelWithDepth_FUN_00401290
                    ((pSVar1->projected_vertex).screen_x >> 0x10,
                     (pSVar1->projected_vertex).screen_y >> 0x10,
                     (pSVar1->projected_vertex).transformed_z);
        }
        iVar7 = iVar7 + 0x10;
      } while (iVar7 != 0x90);
      local_14 = local_14 + 0x10;
    } while (local_14 != 0x90);
    local_18 = local_18 + 0x10;
  } while (local_18 != 0x90);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&local_38);
  local_40 = (CVector3f *)0x0;
  local_3c = 0;
  local_38.x = 0.0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&stack0xffffff90
            );
  local_3c = 0x40400000;
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_4c._4_4_ = (undefined4)ROUND(FLOAT_0065c060 * 3.0);
  local_44 = (float)(int)ROUND(FLOAT_0065c060 * 0.0);
  local_40 = (CVector3f *)(int)ROUND(FLOAT_0065c060 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_4c + 4)
            );
  local_38.x = 0.0;
  local_38.z = 0.0;
  local_38.y = 3.0;
  local_5c.x = (int)ROUND(FLOAT_0065c060 * 0.0);
  local_5c.y = (int)ROUND(FLOAT_0065c060 * 3.0);
  local_5c.z = (int)ROUND(FLOAT_0065c060 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_5c);
  local_38.y = 0.0;
  local_38.z = 0.0;
  local_2c.x = 0x40400000;
  local_4c._0_4_ = (undefined4)ROUND(FLOAT_0065c060 * 0.0);
  local_4c._4_4_ = (undefined4)ROUND(FLOAT_0065c060 * 0.0);
  local_44 = (float)(int)ROUND(FLOAT_0065c060 * 3.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_4c);
  engine_3d_c_processPolygonColor_FUN_00403e30((SMRGLHeaderPrimitive *)&stack0xfffffff4);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff88);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff8c);
  engine_3d_c_drawLineStrip2D_FUN_00404570((SLineStrip *)&stack0xffffff90);
  iVar4 = 4;
  pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
  do {
    if ((int)(pSVar1[1].projected_vertex.screen_x & -0x80000000) == 0) {
      engine_2d_c_drawText_FUN_00401fd0
                (*(char **)(iVar4 + 0x66ec50),pSVar1[1].projected_vertex.screen_x >> 0x10,
                 pSVar1[1].projected_vertex.screen_y >> 0x10);
    }
    iVar4 = iVar4 + 4;
    pSVar1 = pSVar1 + 1;
  } while (iVar4 != 0x10);
  return;
}


// Assembly code:
// 00443760: PUSH EBX
//   Label: core_course.cpp_FUN_00443760
// 00443761: PUSH ESI
// 00443762: PUSH EDI
// 00443763: PUSH EBP
// 00443764: SUB ESP,0x90
// 0044376a: MOV EDI,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 00443771: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x48] (DATA)
// 00443775: CMP EAX,EDI
// 00443777: JZ 0x0044378d
//   XREF to: 0044378d (CONDITIONAL_JUMP)
// 00443779: MOV EAX,dword ptr [EDI]
// 0044377b: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0044377f: MOV EAX,dword ptr [EDI + 0x4]
// 00443782: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00443786: MOV EAX,dword ptr [EDI + 0x8]
// 00443789: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0044378d: FLD float ptr [EDI]
//   Label: LAB_0044378d
// 0044378f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00443794: FISTP dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (WRITE)
// 0044379b: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 004437a2: MOV EDX,EAX
// 004437a4: SAR EDX,0x1f
// 004437a7: SHL EDX,0x4
// 004437aa: SBB EAX,EDX
// 004437ac: SAR EAX,0x4
// 004437af: FLD float ptr [EDI + 0x4]
// 004437b2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004437b7: SHL EAX,0x4
// 004437ba: FISTP dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (WRITE)
// 004437c1: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004437c8: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 004437cf: MOV EDX,EAX
// 004437d1: SAR EDX,0x1f
// 004437d4: SHL EDX,0x4
// 004437d7: SBB EAX,EDX
// 004437d9: SAR EAX,0x4
// 004437dc: FLD float ptr [EDI + 0x8]
// 004437df: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004437e4: SHL EAX,0x4
// 004437e7: FISTP dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (WRITE)
// 004437ee: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004437f5: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 004437fc: MOV EDX,EAX
// 004437fe: SAR EDX,0x1f
// 00443801: SHL EDX,0x4
// 00443804: SBB EAX,EDX
// 00443806: SAR EAX,0x4
// 00443809: PUSH EDI
// 0044380a: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x18] (READ)
// 00443811: FSTP float ptr [EDI]
// 00443813: FILD dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x1c] (READ)
// 0044381a: FSTP float ptr [EDI + 0x4]
// 0044381d: SHL EAX,0x4
// 00443820: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00443826: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044382d: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044382e: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 00443835: FSTP float ptr [EDI + 0x8]
// 00443838: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0044383d: MOV ECX,0xffffff80
// 00443842: ADD ESP,0x8
// 00443845: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00443849: MOV EBX,0xffffff80
//   Label: LAB_00443849
// 0044384e: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 00443852: MOV dword ptr [ESP + 0x7c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00443856: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044385d: MOV ESI,0xffffff80
//   Label: LAB_0044385d
// 00443862: MOV EBP,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (READ)
// 00443866: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_00443866
//   XREF to: Stack[-0x20] (READ)
// 0044386d: LEA EBX,[ESP + 0x64]
//   XREF to: Stack[-0x3c] (DATA)
// 00443871: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00443877: MOV dword ptr [ESP + 0x88],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0044387e: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00443885: MOV dword ptr [ESP + 0x8c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0044388c: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 00443893: FADD float ptr [EDI]
// 00443895: FILD dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 0044389c: FXCH
// 0044389e: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (WRITE)
// 004438a2: FADD float ptr [EDI + 0x4]
// 004438a5: FILD dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 004438ac: FXCH
// 004438ae: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x8c] (WRITE)
// 004438b2: FADD float ptr [EDI + 0x8]
// 004438b5: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x90] (DATA)
// 004438b9: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x88] (WRITE)
// 004438bd: FLD float ptr [EAX]
//   XREF to: Stack[-0x90] (DATA)
// 004438bf: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 004438c5: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x3c] (DATA)
// 004438c7: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x8c] (READ)
// 004438ca: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 004438d0: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 004438d3: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 004438d6: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 004438dc: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 004438df: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x3c] (DATA)
// 004438e3: PUSH EAX
// 004438e4: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004438e6: PUSH EAX
// 004438e7: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004438ec: MOV EBX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 004438f2: MOV EBX,dword ptr [EBX]
//   XREF to: 02c6d578 (READ)
// 004438f4: MOV AH,byte ptr [EBX + 0x13]
// 004438f7: ADD ESP,0x8
// 004438fa: TEST AH,0x80
// 004438fd: JZ 0x00443b38
//   XREF to: 00443b38 (CONDITIONAL_JUMP)
// 00443903: ADD ESI,0x10
//   Label: LAB_00443903
// 00443906: CMP ESI,0x90
// 0044390c: JNZ 0x00443866
//   XREF to: 00443866 (CONDITIONAL_JUMP)
// 00443912: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (READ)
// 00443916: ADD EDX,0x10
// 00443919: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0044391d: CMP EDX,ESI
// 0044391f: JNZ 0x0044385d
//   XREF to: 0044385d (CONDITIONAL_JUMP)
// 00443925: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 00443929: ADD EBX,0x10
// 0044392c: MOV dword ptr [ESP + 0x78],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00443930: CMP EBX,ESI
// 00443932: JNZ 0x00443849
//   XREF to: 00443849 (CONDITIONAL_JUMP)
// 00443938: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x48] (DATA)
// 0044393c: PUSH EAX
// 0044393d: MOV EDI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00443943: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00443944: LEA EBX,[ESP + 0x24]
//   XREF to: Stack[-0x84] (DATA)
// 00443948: XOR EBP,EBP
// 0044394a: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0044394f: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x54] (DATA)
// 00443953: ADD ESP,0x8
// 00443956: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 0044395c: MOV dword ptr [ESP + 0x4c],EBP
//   XREF to: Stack[-0x54] (WRITE)
// 00443960: MOV dword ptr [ESP + 0x50],EBP
//   XREF to: Stack[-0x50] (WRITE)
// 00443964: MOV dword ptr [ESP + 0x54],EBP
//   XREF to: Stack[-0x4c] (WRITE)
// 00443968: FLD float ptr [EAX]
//   XREF to: Stack[-0x54] (DATA)
// 0044396a: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443970: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x84] (DATA)
// 00443972: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 00443975: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 0044397b: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x80] (WRITE)
// 0044397e: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x4c] (READ)
// 00443981: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443987: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x7c] (WRITE)
// 0044398a: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x84] (DATA)
// 0044398e: PUSH EAX
// 0044398f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00443991: PUSH EAX
// 00443992: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00443997: MOV ECX,0x40400000
// 0044399c: LEA EBX,[ESP + 0x48]
//   XREF to: Stack[-0x60] (DATA)
// 004439a0: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x54] (DATA)
// 004439a4: ADD ESP,0x8
// 004439a7: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 004439ad: MOV dword ptr [ESP + 0x4c],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 004439b1: MOV dword ptr [ESP + 0x50],EBP
//   XREF to: Stack[-0x50] (WRITE)
// 004439b5: MOV dword ptr [ESP + 0x54],EBP
//   XREF to: Stack[-0x4c] (WRITE)
// 004439b9: FLD float ptr [EAX]
//   XREF to: Stack[-0x54] (DATA)
// 004439bb: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 004439c1: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x60] (DATA)
// 004439c3: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 004439c6: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 004439cc: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 004439cf: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x4c] (READ)
// 004439d2: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 004439d8: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 004439db: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x60] (DATA)
// 004439df: PUSH EAX
// 004439e0: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004439e2: ADD EAX,0x30
// 004439e5: PUSH EAX
// 004439e6: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004439eb: LEA EBX,[ESP + 0x30]
//   XREF to: Stack[-0x78] (DATA)
// 004439ef: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 004439f5: ADD ESP,0x8
// 004439f8: XOR EAX,EAX
// 004439fa: MOV dword ptr [ESP + 0x4c],EBP
//   XREF to: Stack[-0x54] (WRITE)
// 004439fe: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00443a02: MOV EBP,0x40400000
// 00443a07: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x54] (DATA)
// 00443a0b: MOV dword ptr [ESP + 0x50],EBP
//   XREF to: Stack[-0x50] (WRITE)
// 00443a0f: FLD float ptr [EAX]
//   XREF to: Stack[-0x54] (DATA)
// 00443a11: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443a17: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x78] (DATA)
// 00443a19: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 00443a1c: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443a22: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x74] (WRITE)
// 00443a25: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x4c] (READ)
// 00443a28: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443a2e: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x70] (WRITE)
// 00443a31: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x78] (DATA)
// 00443a35: PUSH EAX
// 00443a36: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00443a38: ADD EAX,0x60
// 00443a3b: PUSH EAX
// 00443a3c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00443a41: LEA EBX,[ESP + 0x3c]
//   XREF to: Stack[-0x6c] (DATA)
// 00443a45: ADD ESP,0x8
// 00443a48: XOR EDX,EDX
// 00443a4a: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x54] (DATA)
// 00443a4e: MOV dword ptr [ESP + 0x4c],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 00443a52: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 00443a56: MOV dword ptr [ESP + 0x54],EBP
//   XREF to: Stack[-0x4c] (WRITE)
// 00443a5a: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00443a60: FLD float ptr [EAX]
//   XREF to: Stack[-0x54] (DATA)
// 00443a62: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443a68: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x6c] (DATA)
// 00443a6a: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 00443a6d: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443a73: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x68] (WRITE)
// 00443a76: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x4c] (READ)
// 00443a79: FMUL float ptr [0x0065c060]
//   XREF to: 0065c060 (READ)
// 00443a7f: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x64] (WRITE)
// 00443a82: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x6c] (DATA)
// 00443a86: PUSH EAX
// 00443a87: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00443a89: ADD EAX,ESI
// 00443a8b: PUSH EAX
// 00443a8c: XOR EDI,EDI
// 00443a8e: MOV EBP,0x1
// 00443a93: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00443a98: MOV EAX,0xfffffff9
// 00443a9d: ADD ESP,0x8
// 00443aa0: MOV ESI,0x2
// 00443aa5: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00443aa9: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x30] (DATA)
// 00443aad: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x9c] (WRITE)
// 00443ab1: PUSH EAX
// 00443ab2: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x98] (WRITE)
// 00443ab6: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x94] (WRITE)
// 00443aba: CALL engine_3d.c_processPolygonColor_FUN_00403e30
//   XREF to: 00403e30 (UNCONDITIONAL_CALL)
// 00443abf: ADD ESP,0x4
// 00443ac2: MOV EAX,ESP
// 00443ac4: PUSH EAX
// 00443ac5: CALL engine_3d.c_drawLineStrip2D_FUN_00404570
//   XREF to: 00404570 (UNCONDITIONAL_CALL)
// 00443aca: ADD ESP,0x4
// 00443acd: MOV EAX,ESP
// 00443acf: PUSH EAX
// 00443ad0: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x94] (WRITE)
// 00443ad4: CALL engine_3d.c_drawLineStrip2D_FUN_00404570
//   XREF to: 00404570 (UNCONDITIONAL_CALL)
// 00443ad9: ADD ESP,0x4
// 00443adc: MOV EAX,ESP
// 00443ade: MOV ECX,0x3
// 00443ae3: PUSH EAX
// 00443ae4: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x94] (WRITE)
// 00443ae8: CALL engine_3d.c_drawLineStrip2D_FUN_00404570
//   XREF to: 00404570 (UNCONDITIONAL_CALL)
// 00443aed: MOV EAX,[0x006703e8]
//   XREF to: 006703e8 (READ)
// 00443af2: MOV ESI,0x4
// 00443af7: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00443af9: ADD ESP,0x4
// 00443afc: ADD EBX,0x30
// 00443aff: TEST byte ptr [EBX + 0x13],0x80
//   Label: LAB_00443aff
// 00443b03: JNZ 0x00443b22
//   XREF to: 00443b22 (CONDITIONAL_JUMP)
// 00443b05: MOV EAX,dword ptr [EBX + 0x14]
// 00443b08: SAR EAX,0x10
// 00443b0b: PUSH EAX
// 00443b0c: MOV EAX,dword ptr [EBX + 0x10]
// 00443b0f: SAR EAX,0x10
// 00443b12: PUSH EAX
// 00443b13: MOV EDI,dword ptr [ESI + 0x66ec50]
//   XREF to: 0066ec54 (READ)
//   XREF to: 0066ec58 (READ)
// 00443b19: PUSH EDI
//   XREF to: 0061944f (DATA)
//   XREF to: 00619451 (DATA)
// 00443b1a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00443b1f: ADD ESP,0xc
// 00443b22: ADD ESI,0x4
//   Label: LAB_00443b22
// 00443b25: ADD EBX,0x30
// 00443b28: CMP ESI,0x10
// 00443b2b: JNZ 0x00443aff
//   XREF to: 00443aff (CONDITIONAL_JUMP)
// 00443b2d: ADD ESP,0x90
// 00443b33: POP EBP
// 00443b34: POP EDI
// 00443b35: POP ESI
// 00443b36: POP EBX
// 00443b37: RET
// 00443b38: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_00443b38
// 00443b3b: MOV EDX,EAX
// 00443b3d: SAR EDX,0x1f
// 00443b40: SHL EDX,0x7
// 00443b43: SBB EAX,EDX
// 00443b45: SAR EAX,0x7
// 00443b48: MOV EDX,0xff
// 00443b4d: SUB EDX,EAX
// 00443b4f: TEST EDX,EDX
// 00443b51: JL 0x00443bb4
//   XREF to: 00443bb4 (CONDITIONAL_JUMP)
// 00443b53: CMP EDX,0xff
// 00443b59: JLE 0x00443b60
//   XREF to: 00443b60 (CONDITIONAL_JUMP)
// 00443b5b: MOV EDX,0xff
// 00443b60: MOV EAX,EDX
//   Label: LAB_00443b60
// 00443b62: SAR EDX,0x1f
// 00443b65: SHL EDX,0x3
// 00443b68: SBB EAX,EDX
// 00443b6a: SAR EAX,0x3
// 00443b6d: MOV EDX,EAX
// 00443b6f: MOV ECX,EDX
// 00443b71: SHL EAX,0xa
// 00443b74: SHL ECX,0x5
// 00443b77: ADD EAX,ECX
// 00443b79: MOV AL,byte ptr [EDX + EAX*0x1 + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 00443b80: PUSH 0x1
// 00443b82: AND EAX,0xff
// 00443b87: PUSH EBX
// 00443b88: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00443b8d: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 00443b92: ADD ESP,0x8
// 00443b95: MOV EAX,dword ptr [EBX + 0x8]
// 00443b98: PUSH EAX
// 00443b99: MOV EAX,dword ptr [EBX + 0x14]
// 00443b9c: SAR EAX,0x10
// 00443b9f: PUSH EAX
// 00443ba0: MOV EAX,dword ptr [EBX + 0x10]
// 00443ba3: SAR EAX,0x10
// 00443ba6: PUSH EAX
// 00443ba7: CALL engine_2d.c_plotPixelWithDepth_FUN_00401290
//   XREF to: 00401290 (UNCONDITIONAL_CALL)
// 00443bac: ADD ESP,0xc
// 00443baf: JMP 0x00443903
//   XREF to: 00443903 (UNCONDITIONAL_JUMP)
// 00443bb4: XOR EDX,EDX
//   Label: LAB_00443bb4
// 00443bb6: JMP 0x00443b60
//   XREF to: 00443b60 (UNCONDITIONAL_JUMP)
