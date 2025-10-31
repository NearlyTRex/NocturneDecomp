// Name: core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
// Address: 004760d0
// Address Range: [[004760d0, 004765b8]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_renderConeLightGeometry_FUN_004760d0(CVector3f * position, CVector3i * rotation, float param_3, float max_distance)
// Cross-references:
//   core_litecone.cpp_FUN_00506c20 (00506c20) at 00506c96 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e8ac7 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe70 (005fbe70) at 005fbf99 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0061f29b = 0.125
//   float FLOAT_0061f2a3 = 0.125
//   double DOUBLE_0061f2ab = 3.14159265350000
//   double DOUBLE_0061f2b3 = 2
//   double DOUBLE_0061f2bb = 1024
//   double DOUBLE_0061f2c3 = 18
//   float FLOAT_0065c900 = 256
//   SMRGLTextureBasic[20] g_LightTextures
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
          (CVector3f *position,CVector3i *rotation,float param_3,float max_distance)

{
  float fVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  float fVar3;
  float *pfVar4;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
  float10 fVar9;
  double dVar10;
  float unaff_retaddr;
  float fVar11;
  float in_stack_ffffff58;
  SMRGLHeaderPrimitive local_8c;
  float local_74;
  float local_70;
  float local_6c;
  CVector3i local_68;
  CVector3i local_58;
  CVector3i CStack_48;
  CVector3i local_38;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,rotation,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,g_LightTextures)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  local_1c = 1.0 / max_distance;
  iVar2 = 1;
  do {
    fVar5 = (float10)iVar2 * ((float10)DOUBLE_0061f2c3 / (float10)in_stack_ffffff58) *
            (float10)DOUBLE_0061f29b;
    fVar11 = (float)fVar5;
    Var8 = fpatan(fVar5,(float10)1);
    fVar5 = (float10)fcos(Var8);
    fVar3 = 0.0;
    fVar1 = (float)(fVar5 * (float10)max_distance);
    do {
      fVar5 = (float10)(int)fVar3 * (float10)FLOAT_0061f2a3 * (float10)DOUBLE_0061f2ab *
              (float10)DOUBLE_0061f2b3;
      fVar3 = (float)((int)fVar3 + 1);
      fVar6 = (float10)fsin(fVar5);
      fVar9 = (float10)(int)fVar3 * (float10)FLOAT_0061f2a3 * (float10)DOUBLE_0061f2ab *
              (float10)DOUBLE_0061f2b3;
      fsin(fVar9);
      fVar5 = (float10)fcos(fVar5);
      fVar9 = (float10)fcos(fVar9);
      fVar7 = (float10)fVar11;
      local_18 = (float)(fVar6 * fVar7);
      fStack_14 = (float)(fVar5 * fVar7);
      local_74 = fVar1 * 0.0;
      local_8c.surface_normal.C = (int)(local_74 * local_18);
      local_8c.surface_normal.D = (int)(local_74 * fStack_14);
      fVar5 = ((float10)max_distance - (float10)fVar1) * (float10)local_1c *
              (float10)DOUBLE_0061f2bb;
      fVar6 = ((float10)max_distance - (float10)local_74) * (float10)local_1c *
              (float10)DOUBLE_0061f2bb;
      local_2c = local_74;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44(g_CDemonRendererPtr,&local_8c.surface_normal.C));
      local_1c = (float)(int)ROUND(fVar5);
      dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
      pfVar4 = SUB84(dVar10,0);
      local_1c = (float)(int)ROUND(fVar6);
      local_70 = (float)(int)ROUND(*pfVar4 * FLOAT_0065c900);
      local_6c = (float)(int)ROUND(pfVar4[1] * FLOAT_0065c900);
      local_68.x = (int)ROUND(pfVar4[2] * FLOAT_0065c900);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)*(undefined4 *)((ulonglong)dVar10 >> 0x20),&local_68);
      local_70 = local_20 * fVar3;
      local_6c = local_20 * unaff_retaddr;
      local_68.x = (int)local_20;
      local_58.x = (int)ROUND(local_70 * FLOAT_0065c900);
      local_58.y = (int)ROUND(local_6c * FLOAT_0065c900);
      local_58.z = (int)ROUND(local_20 * FLOAT_0065c900);
      fVar11 = 6.555962e-39;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_58);
      local_6c = (float)rotation * unaff_retaddr;
      local_68.x = (int)((float)rotation * (float)position);
      local_68.y = (int)rotation;
      CStack_48.x = (int)ROUND(local_6c * FLOAT_0065c900);
      CStack_48.y = (int)ROUND((float)local_68.x * FLOAT_0065c900);
      CStack_48.z = (int)ROUND((float)rotation * FLOAT_0065c900);
      in_stack_ffffff58 = 6.556125e-39;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_48);
      local_68.x = (int)(param_3 * fVar3);
      local_68.y = (int)(param_3 * unaff_retaddr);
      local_68.z = (int)param_3;
      local_38.x = (int)ROUND((float)local_68.x * FLOAT_0065c900);
      local_38.y = (int)ROUND((float)local_68.y * FLOAT_0065c900);
      local_38.z = (int)ROUND(param_3 * FLOAT_0065c900);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_38);
      this_ptr = g_CDemonRendererPtr;
      g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = (float)(fVar9 * fVar7);
      this_ptr->vertex_buffer_ptr->fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->color = 0xffff;
      this_ptr->vertex_buffer_ptr->light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[1].w_recip = (float)(fVar9 * fVar7);
      this_ptr->vertex_buffer_ptr[1].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].color = 0xffff;
      this_ptr->vertex_buffer_ptr[1].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[2].w_recip = fVar1;
      this_ptr->vertex_buffer_ptr[2].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].color = 0xffff;
      this_ptr->vertex_buffer_ptr[2].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[3].w_recip = fVar1;
      this_ptr->vertex_buffer_ptr[3].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].color = 0xffff;
      this_ptr->vertex_buffer_ptr[3].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
      local_8c.base.count = 4;
      local_8c.surface_normal.D = 0;
      local_8c.surface_normal.C = 0;
      local_8c.surface_normal.B = 0;
      local_8c.surface_normal.A = 0;
      local_68.x = 3;
      local_74 = 0.0;
      local_70 = 1.4013e-45;
      local_6c = 2.8026e-45;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr,&local_8c);
    } while ((int)fVar3 < 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 004760d0: PUSH EBX
//   Label: core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
// 004760d1: PUSH ESI
// 004760d2: PUSH EDI
// 004760d3: PUSH EBP
// 004760d4: MOV EBP,ESP
// 004760d6: SUB ESP,0xac
// 004760dc: AND ESP,0xfffffff8
// 004760df: MOV EAX,dword ptr [EBP + 0x1c]
// 004760e2: MOV dword ptr [ESP + 0x4],EAX
// 004760e6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004760ec: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004760ed: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004760f2: ADD ESP,0x4
// 004760f5: TEST EAX,EAX
// 004760f7: JZ 0x00476100
//   XREF to: 00476100 (CONDITIONAL_JUMP)
// 004760f9: MOV ESP,EBP
// 004760fb: POP EBP
// 004760fc: POP EDI
// 004760fd: POP ESI
// 004760fe: POP EBX
// 004760ff: RET
// 00476100: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00476100
// 00476103: PUSH ECX
// 00476104: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047610a: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0047610b: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00476110: ADD ESP,0x8
// 00476113: PUSH 0x0
// 00476115: MOV ESI,dword ptr [EBP + 0x18]
// 00476118: PUSH ESI
// 00476119: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047611f: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00476120: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00476125: ADD ESP,0xc
// 00476128: PUSH 0x66fed8
//   XREF to: 0066fed8 (DATA)
// 0047612d: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00476132: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00476133: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00476138: ADD ESP,0x8
// 0047613b: PUSH 0x1
// 0047613d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00476143: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00476144: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00476149: ADD ESP,0x8
// 0047614c: FLD1
// 0047614e: FDIV float ptr [EBP + 0x20]
// 00476151: MOV EDI,0x1
// 00476156: FSTP float ptr [ESP + 0x90]
// 0047615d: FLD float ptr [ESP + 0x4]
//   Label: LAB_0047615d
// 00476161: FDIVR double ptr [0x0061f2c3]
//   XREF to: 0061f2c3 (READ)
// 00476167: MOV dword ptr [ESP + 0xa8],EDI
// 0047616e: FILD dword ptr [ESP + 0xa8]
// 00476175: FMULP
// 00476177: FMUL double ptr [0x0061f29b]
//   XREF to: 0061f29b (READ)
// 0047617d: FST float ptr [ESP]
// 00476180: FLD1
// 00476182: FPATAN
// 00476184: FCOS
// 00476186: FMUL float ptr [EBP + 0x20]
// 00476189: XOR EAX,EAX
// 0047618b: FSTP float ptr [ESP + 0xa4]
// 00476192: MOV dword ptr [ESP + 0xa8],EAX
//   Label: LAB_00476192
// 00476199: FLD float ptr [0x0061f2a3]
//   XREF to: 0061f2a3 (READ)
// 0047619f: FILD dword ptr [ESP + 0xa8]
// 004761a6: FMUL ST1
// 004761a8: FLD double ptr [0x0061f2ab]
//   XREF to: 0061f2ab (READ)
// 004761ae: FXCH
// 004761b0: FMUL ST1
// 004761b2: FLD double ptr [0x0061f2b3]
//   XREF to: 0061f2b3 (READ)
// 004761b8: FXCH
// 004761ba: FMUL ST1
// 004761bc: LEA ESI,[EAX + 0x1]
// 004761bf: FLD ST0
// 004761c1: FSIN
// 004761c3: MOV dword ptr [ESP + 0xa8],ESI
// 004761ca: FILD dword ptr [ESP + 0xa8]
// 004761d1: FMULP ST5
// 004761d3: FXCH ST4
// 004761d5: FMULP ST3
// 004761d7: FXCH ST2
// 004761d9: FMULP
// 004761db: FLD ST0
// 004761dd: FSIN
// 004761df: FXCH ST2
// 004761e1: FCOS
// 004761e3: FXCH
// 004761e5: FCOS
// 004761e7: FLD float ptr [ESP]
// 004761ea: FXCH ST4
// 004761ec: FMUL ST4
// 004761ee: FXCH ST2
// 004761f0: FMUL ST4
// 004761f2: FXCH ST3
// 004761f4: FMUL ST4
// 004761f6: FXCH
// 004761f8: FMULP ST4
// 004761fa: FXCH
// 004761fc: FSTP float ptr [ESP + 0x94]
// 00476203: FXCH
// 00476205: FSTP float ptr [ESP + 0x98]
// 0047620c: FSTP float ptr [ESP + 0x9c]
// 00476213: FSTP float ptr [ESP + 0xa0]
// 0047621a: FLDZ
// 0047621c: FLD float ptr [EBP + 0x20]
// 0047621f: FLD ST0
// 00476221: FSUB float ptr [ESP + 0xa4]
// 00476228: FXCH ST2
// 0047622a: FMUL float ptr [ESP + 0xa4]
// 00476231: FXCH ST2
// 00476233: FLD float ptr [ESP + 0x90]
// 0047623a: FXCH
// 0047623c: FMUL ST1
// 0047623e: FXCH ST3
// 00476240: FST float ptr [ESP + 0x80]
// 00476247: FMUL float ptr [ESP + 0x94]
// 0047624e: FLD float ptr [ESP + 0x80]
// 00476255: FXCH ST3
// 00476257: FSUB float ptr [ESP + 0x80]
// 0047625e: FXCH ST3
// 00476260: FMUL float ptr [ESP + 0x98]
// 00476267: FXCH ST3
// 00476269: FMULP ST2
// 0047626b: FXCH ST3
// 0047626d: FLD double ptr [0x0061f2bb]
//   XREF to: 0061f2bb (READ)
// 00476273: FXCH
// 00476275: FMUL ST1
// 00476277: FXCH ST2
// 00476279: FMULP
// 0047627b: LEA EBX,[ESP + 0x3c]
// 0047627f: MOV EAX,dword ptr [ESP + 0x80]
// 00476286: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047628c: MOV dword ptr [ESP + 0x38],EAX
// 00476290: FXCH ST3
// 00476292: FSTP float ptr [ESP + 0x30]
// 00476296: FXCH
// 00476298: FSTP float ptr [ESP + 0x34]
// 0047629c: LEA EAX,[ESP + 0x30]
// 004762a0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004762a5: FISTP dword ptr [ESP + 0x8c]
// 004762ac: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004762b1: FISTP dword ptr [ESP + 0x88]
// 004762b8: FLD float ptr [EAX]
// 004762ba: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004762c0: FISTP dword ptr [EBX]
// 004762c2: FLD float ptr [EAX + 0x4]
// 004762c5: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004762cb: FISTP dword ptr [EBX + 0x4]
// 004762ce: FLD float ptr [EAX + 0x8]
// 004762d1: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004762d7: FISTP dword ptr [EBX + 0x8]
// 004762da: LEA EAX,[ESP + 0x3c]
// 004762de: PUSH EAX
// 004762df: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004762e1: PUSH EAX
// 004762e2: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004762e7: ADD ESP,0x8
// 004762ea: FLD float ptr [ESP + 0x80]
// 004762f1: FMUL float ptr [ESP + 0x9c]
// 004762f8: FLD float ptr [ESP + 0x80]
// 004762ff: FMUL float ptr [ESP + 0xa0]
// 00476306: LEA EBX,[ESP + 0x48]
// 0047630a: MOV EAX,dword ptr [ESP + 0x80]
// 00476311: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00476317: MOV dword ptr [ESP + 0x38],EAX
// 0047631b: FXCH
// 0047631d: FSTP float ptr [ESP + 0x30]
// 00476321: LEA EAX,[ESP + 0x30]
// 00476325: FSTP float ptr [ESP + 0x34]
// 00476329: FLD float ptr [EAX]
// 0047632b: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00476331: FISTP dword ptr [EBX]
// 00476333: FLD float ptr [EAX + 0x4]
// 00476336: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 0047633c: FISTP dword ptr [EBX + 0x4]
// 0047633f: FLD float ptr [EAX + 0x8]
// 00476342: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00476348: FISTP dword ptr [EBX + 0x8]
// 0047634b: LEA EAX,[ESP + 0x48]
// 0047634f: PUSH EAX
// 00476350: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476352: ADD EAX,0x30
// 00476355: PUSH EAX
// 00476356: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0047635b: ADD ESP,0x8
// 0047635e: FLD float ptr [ESP + 0xa4]
// 00476365: FMUL float ptr [ESP + 0x9c]
// 0047636c: FLD float ptr [ESP + 0xa4]
// 00476373: FMUL float ptr [ESP + 0xa0]
// 0047637a: LEA EBX,[ESP + 0x54]
// 0047637e: MOV EAX,dword ptr [ESP + 0xa4]
// 00476385: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047638b: MOV dword ptr [ESP + 0x38],EAX
// 0047638f: FXCH
// 00476391: FSTP float ptr [ESP + 0x30]
// 00476395: LEA EAX,[ESP + 0x30]
// 00476399: FSTP float ptr [ESP + 0x34]
// 0047639d: FLD float ptr [EAX]
// 0047639f: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004763a5: FISTP dword ptr [EBX]
// 004763a7: FLD float ptr [EAX + 0x4]
// 004763aa: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004763b0: FISTP dword ptr [EBX + 0x4]
// 004763b3: FLD float ptr [EAX + 0x8]
// 004763b6: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 004763bc: FISTP dword ptr [EBX + 0x8]
// 004763bf: LEA EAX,[ESP + 0x54]
// 004763c3: PUSH EAX
// 004763c4: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004763c6: ADD EAX,0x60
// 004763c9: PUSH EAX
// 004763ca: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004763cf: ADD ESP,0x8
// 004763d2: FLD float ptr [ESP + 0xa4]
// 004763d9: FMUL float ptr [ESP + 0x94]
// 004763e0: FLD float ptr [ESP + 0xa4]
// 004763e7: FMUL float ptr [ESP + 0x98]
// 004763ee: LEA EBX,[ESP + 0x60]
// 004763f2: MOV EAX,dword ptr [ESP + 0xa4]
// 004763f9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004763ff: MOV dword ptr [ESP + 0x38],EAX
// 00476403: FXCH
// 00476405: FSTP float ptr [ESP + 0x30]
// 00476409: LEA EAX,[ESP + 0x30]
// 0047640d: FSTP float ptr [ESP + 0x34]
// 00476411: FLD float ptr [EAX]
// 00476413: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00476419: FISTP dword ptr [EBX]
// 0047641b: FLD float ptr [EAX + 0x4]
// 0047641e: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00476424: FISTP dword ptr [EBX + 0x4]
// 00476427: FLD float ptr [EAX + 0x8]
// 0047642a: FMUL float ptr [0x0065c900]
//   XREF to: 0065c900 (READ)
// 00476430: FISTP dword ptr [EBX + 0x8]
// 00476433: LEA EAX,[ESP + 0x60]
// 00476437: PUSH EAX
// 00476438: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047643a: ADD EAX,0x90
// 0047643f: PUSH EAX
// 00476440: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00476445: ADD ESP,0x8
// 00476448: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047644e: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476450: MOV EAX,dword ptr [ESP + 0x88]
// 00476457: MOV dword ptr [EBX + 0x2c],EAX
// 0047645a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047645c: MOV dword ptr [EAX + 0x28],0xffff
// 00476463: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476465: MOV dword ptr [EAX + 0x24],0xffff
// 0047646c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047646e: MOV dword ptr [EAX + 0x20],0xffff
// 00476475: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476477: MOV dword ptr [EAX + 0x18],0xf80000
//   XREF to: 00f80000 (DATA)
// 0047647e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476480: MOV dword ptr [EAX + 0x1c],0xf80000
//   XREF to: 00f80000 (DATA)
// 00476487: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476489: MOV EAX,dword ptr [ESP + 0x88]
// 00476490: MOV dword ptr [EBX + 0x5c],EAX
// 00476493: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476495: MOV dword ptr [EAX + 0x58],0xffff
// 0047649c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047649e: MOV dword ptr [EAX + 0x54],0xffff
// 004764a5: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764a7: MOV dword ptr [EAX + 0x50],0xffff
// 004764ae: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764b0: MOV dword ptr [EAX + 0x48],0x80000
// 004764b7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764b9: MOV dword ptr [EAX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 004764c0: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764c2: MOV EAX,dword ptr [ESP + 0x8c]
// 004764c9: MOV dword ptr [EBX + 0x8c],EAX
// 004764cf: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764d1: MOV dword ptr [EAX + 0x88],0xffff
// 004764db: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764dd: MOV dword ptr [EAX + 0x84],0xffff
// 004764e7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764e9: MOV dword ptr [EAX + 0x80],0xffff
// 004764f3: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764f5: MOV dword ptr [EAX + 0x78],0x80000
// 004764fc: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004764fe: MOV dword ptr [EAX + 0x7c],0x80000
// 00476505: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476507: MOV EAX,dword ptr [ESP + 0x8c]
// 0047650e: MOV dword ptr [EBX + 0xbc],EAX
// 00476514: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476516: MOV dword ptr [EAX + 0xb8],0xffff
// 00476520: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476522: MOV dword ptr [EAX + 0xb4],0xffff
// 0047652c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047652e: MOV dword ptr [EAX + 0xb0],0xffff
// 00476538: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0047653a: MOV dword ptr [EAX + 0xa8],0xf80000
//   XREF to: 00f80000 (DATA)
// 00476544: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00476546: MOV ECX,0x4
// 0047654b: XOR EBX,EBX
// 0047654d: MOV dword ptr [EAX + 0xac],0x80000
// 00476557: MOV EAX,0x3
// 0047655c: MOV dword ptr [ESP + 0xc],ECX
// 00476560: MOV dword ptr [ESP + 0x1c],EBX
// 00476564: MOV dword ptr [ESP + 0x18],EBX
// 00476568: MOV dword ptr [ESP + 0x14],EBX
// 0047656c: MOV dword ptr [ESP + 0x10],EBX
// 00476570: MOV dword ptr [ESP + 0x2c],EAX
// 00476574: LEA EAX,[ESP + 0x8]
// 00476578: MOV dword ptr [ESP + 0x20],EBX
// 0047657c: PUSH EAX
// 0047657d: MOV ECX,0x1
// 00476582: MOV EBX,0x2
// 00476587: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00476588: MOV dword ptr [ESP + 0x2c],ECX
// 0047658c: MOV dword ptr [ESP + 0x30],EBX
// 00476590: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 00476595: ADD ESP,0x8
// 00476598: MOV EAX,ESI
// 0047659a: CMP ESI,0x8
// 0047659d: JL 0x00476192
//   XREF to: 00476192 (CONDITIONAL_JUMP)
// 004765a3: INC EDI
// 004765a4: CMP EDI,0x8
// 004765a7: JL 0x0047615d
//   XREF to: 0047615d (CONDITIONAL_JUMP)
// 004765ad: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004765b3: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004765b4: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
