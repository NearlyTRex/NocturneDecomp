// Name: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
// Address: 00452180
// Address Range: [[00452180, 00452707]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera * this_ptr, CVector3f * position, CVector3f * min_corner, CVector3f * max_corner)
// Cross-references:
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00505f4c [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056d4a0 (0056d4a0) at 0056d664 [UNCONDITIONAL_CALL]
// Globals:
//   double g_CameraFixedPointScale = 256
//   float g_CameraFixedPointScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_RelativeX
//   int g_RelativeY
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0050d620
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
          (CDemonCamera *this_ptr,CVector3f *position,CVector3f *min_corner,CVector3f *max_corner)

{
  uint *puVar1;
  int iVar2;
  undefined4 extraout_EDX;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  float *in_stack_00000014;
  CVector3i *in_stack_fffffed8;
  CVector3i *in_stack_fffffedc;
  CVector3i local_ec;
  undefined1 local_d8 [8];
  float local_d0;
  float local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3i local_b8 [3];
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_88 [8];
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  CVector3i local_50;
  float local_40;
  float local_38;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0050d620();
  fVar4 = (float10)g_CameraFixedPointScale;
  fVar5 = ((float10)(float)(this_ptr->base).position.x - (float10)position->x) * fVar4;
  fVar6 = ((float10)(float)(this_ptr->base).position.y - (float10)position->y) * fVar4;
  fVar4 = ((float10)(float)(this_ptr->base).position.z - (float10)position->z) * fVar4;
  g_TransformMatrix.m[0][0] = (this_ptr->source_matrix).m[0][0];
  g_TransformMatrix.m[0][1] = (this_ptr->source_matrix).m[0][1];
  g_TransformMatrix.m[0][2] = (this_ptr->source_matrix).m[0][2];
  g_TransformMatrix.m[1][0] = (this_ptr->source_matrix).m[1][0];
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(extraout_EDX,(this_ptr->source_matrix).m[1][1]));
  g_TransformMatrix.m[1][1] = SUB84(dVar7,0);
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                                      (this_ptr->source_matrix).m[1][2]));
  g_TransformMatrix.m[1][2] = SUB84(dVar7,0);
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                                      (this_ptr->source_matrix).m[2][0]));
  g_TransformMatrix.m[2][0] = SUB84(dVar7,0);
  g_TransformMatrix.m[2][1] = (this_ptr->source_matrix).m[2][1];
  g_RelativeX = (int)ROUND(fVar5);
  g_TransformMatrix.m[2][2] = (this_ptr->source_matrix).m[2][2];
  g_RelativeY = (int)ROUND(fVar6);
  g_RelativeZ = (int)ROUND(fVar4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,in_stack_fffffed8,in_stack_fffffedc);
  local_58 = *in_stack_00000014;
  local_54 = max_corner->y;
  local_40 = in_stack_00000014[2];
  local_d8._4_4_ = (undefined4)ROUND(local_58 * g_CameraFixedPointScale);
  local_d0 = (float)(int)ROUND(local_54 * g_CameraFixedPointScale);
  local_cc = (float)(int)ROUND(local_40 * g_CameraFixedPointScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e18].projected_vertex,
             (CVector3i *)(local_d8 + 4));
  local_c4 = max_corner->x;
  local_c0 = max_corner->y;
  local_bc = in_stack_00000014[2];
  local_b8[0].x = (int)ROUND(local_c4 * g_CameraFixedPointScale);
  local_b8[0].y = (int)ROUND(local_c0 * g_CameraFixedPointScale);
  local_b8[0].z = (int)ROUND(local_bc * g_CameraFixedPointScale);
  local_58 = local_c4;
  local_50.y = (int)local_c0;
  local_50.z = (int)local_bc;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e19].projected_vertex,local_b8);
  local_6c = max_corner->x;
  local_68 = max_corner->y;
  local_64 = max_corner->z;
  local_d8._0_4_ = (undefined4)ROUND(local_6c * g_CameraFixedPointScale);
  local_d8._4_4_ = (undefined4)ROUND(local_68 * g_CameraFixedPointScale);
  local_d0 = (float)(int)ROUND(local_64 * g_CameraFixedPointScale);
  local_40 = local_6c;
  local_30 = local_68;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1a].projected_vertex,(CVector3i *)local_d8)
  ;
  local_38 = max_corner->y;
  local_ec.x = (int)ROUND(*in_stack_00000014 * g_CameraFixedPointScale);
  local_ec.y = (int)ROUND(local_38 * g_CameraFixedPointScale);
  local_ec.z = (int)ROUND(max_corner->z * g_CameraFixedPointScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1b].projected_vertex,&local_ec);
  local_7c = *in_stack_00000014;
  local_78 = in_stack_00000014[1];
  local_74 = in_stack_00000014[2];
  local_2c = local_74;
  local_18 = local_7c;
  local_14 = local_78;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1c].projected_vertex,
             (CVector3i *)&stack0xfffffef4);
  local_6c = max_corner->x;
  local_68 = in_stack_00000014[1];
  local_64 = in_stack_00000014[2];
  local_88._4_4_ = (undefined4)ROUND(local_6c * g_CameraFixedPointScale);
  local_80 = (int)ROUND(local_68 * g_CameraFixedPointScale);
  local_7c = (float)(int)ROUND(local_64 * g_CameraFixedPointScale);
  local_20 = local_6c;
  local_1c = local_68;
  local_18 = local_64;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1d].projected_vertex,
             (CVector3i *)(local_88 + 4));
  local_d8._4_4_ = max_corner->x;
  local_d0 = in_stack_00000014[1];
  local_cc = max_corner->z;
  local_50.x = (int)ROUND((float)local_d8._4_4_ * g_CameraFixedPointScale);
  local_50.y = (int)ROUND(local_d0 * g_CameraFixedPointScale);
  local_50.z = (int)ROUND(local_cc * g_CameraFixedPointScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[0x4e1e].projected_vertex,&local_50);
  local_94 = *in_stack_00000014;
  local_90 = in_stack_00000014[1];
  local_8c = max_corner->z;
  local_88._0_4_ = (undefined4)ROUND(local_94 * g_CameraFixedPointScale);
  local_88._4_4_ = (undefined4)ROUND(local_90 * g_CameraFixedPointScale);
  local_80 = (int)ROUND(local_8c * g_CameraFixedPointScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,(CVector3i *)local_88);
  uVar3 = 0xffffffff;
  iVar2 = 0xea480;
  do {
    puVar1 = (uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x +
                     iVar2);
    iVar2 = iVar2 + 0x30;
    uVar3 = uVar3 & *puVar1;
  } while (iVar2 != 960000);
  iVar2 = 1;
  if (((uVar3 & 0x80000000) != 0) && ((char)uVar3 != '\0')) {
    iVar2 = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar2;
}


// Assembly code:
// 00452180: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
// 00452181: PUSH ESI
// 00452182: PUSH EDI
// 00452183: PUSH EBP
// 00452184: SUB ESP,0x120
// 0045218a: MOV EBX,dword ptr [ESP + 0x134]
// 00452191: MOV EBP,dword ptr [ESP + 0x138]
// 00452198: MOV EDI,dword ptr [ESP + 0x140]
// 0045219f: MOV ESI,dword ptr [ESP + 0x144]
// 004521a6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004521ac: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004521ad: CALL engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0050d620
//   XREF to: 0048c630 (UNCONDITIONAL_CALL)
// 004521b2: FLD float ptr [EBX + 0x4]
// 004521b5: FSUB float ptr [EBP]
// 004521b8: FLD double ptr [0x0061a332]
//   XREF to: 0061a332 (READ)
// 004521be: FXCH
// 004521c0: FMUL ST1
// 004521c2: FLD float ptr [EBX + 0xc]
// 004521c5: FLD float ptr [EBX + 0x8]
// 004521c8: FSUB float ptr [EBP + 0x4]
// 004521cb: FXCH
// 004521cd: FSUB float ptr [EBP + 0x8]
// 004521d0: FXCH
// 004521d2: FMUL ST3
// 004521d4: FXCH
// 004521d6: FMULP ST3
// 004521d8: MOV EAX,dword ptr [EBX + 0x178]
// 004521de: ADD ESP,0x4
// 004521e1: MOV [0x02d052e8],EAX
//   XREF to: 02d052e8 (WRITE)
// 004521e6: MOV EAX,dword ptr [EBX + 0x17c]
// 004521ec: PUSH 0x0
// 004521ee: MOV [0x02d052ec],EAX
//   XREF to: 02d052ec (WRITE)
// 004521f3: MOV EAX,dword ptr [EBX + 0x180]
// 004521f9: MOV ECX,dword ptr [ESP + 0x140]
// 00452200: MOV [0x02d052f0],EAX
//   XREF to: 02d052f0 (WRITE)
// 00452205: MOV EAX,dword ptr [EBX + 0x184]
// 0045220b: PUSH ECX
// 0045220c: MOV [0x02d052f4],EAX
//   XREF to: 02d052f4 (WRITE)
// 00452211: MOV EAX,dword ptr [EBX + 0x188]
// 00452217: FXCH
// 00452219: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045221e: MOV [0x02d052f8],EAX
//   XREF to: 02d052f8 (WRITE)
// 00452223: MOV EAX,dword ptr [EBX + 0x18c]
// 00452229: FXCH
// 0045222b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00452230: MOV [0x02d052fc],EAX
//   XREF to: 02d052fc (WRITE)
// 00452235: MOV EAX,dword ptr [EBX + 0x190]
// 0045223b: FXCH ST2
// 0045223d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00452242: MOV [0x02d05300],EAX
//   XREF to: 02d05300 (WRITE)
// 00452247: MOV EAX,dword ptr [EBX + 0x194]
// 0045224d: FXCH
// 0045224f: FISTP dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (WRITE)
// 00452255: MOV [0x02d05304],EAX
//   XREF to: 02d05304 (WRITE)
// 0045225a: MOV EAX,dword ptr [EBX + 0x198]
// 00452260: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00452266: FXCH
// 00452268: FISTP dword ptr [0x02d052bc]
//   XREF to: 02d052bc (WRITE)
// 0045226e: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0045226f: FISTP dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (WRITE)
// 00452275: MOV [0x02d05308],EAX
//   XREF to: 02d05308 (WRITE)
// 0045227a: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0045227f: ADD ESP,0xc
// 00452282: MOV EAX,dword ptr [ESI]
// 00452284: MOV dword ptr [ESP + 0xc4],EAX
// 0045228b: MOV EAX,dword ptr [EDI + 0x4]
// 0045228e: MOV dword ptr [ESP + 0xc8],EAX
// 00452295: MOV EAX,dword ptr [ESI + 0x8]
// 00452298: MOV dword ptr [ESP + 0xdc],EAX
// 0045229f: MOV EAX,dword ptr [ESP + 0xc4]
// 004522a6: MOV dword ptr [ESP + 0x18],EAX
// 004522aa: MOV EAX,dword ptr [ESP + 0xc8]
// 004522b1: MOV dword ptr [ESP + 0x1c],EAX
// 004522b5: MOV EAX,dword ptr [ESP + 0xdc]
// 004522bc: LEA EBX,[ESP + 0x48]
// 004522c0: MOV dword ptr [ESP + 0x20],EAX
// 004522c4: LEA EAX,[ESP + 0x18]
// 004522c8: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004522ce: FLD float ptr [EAX]
// 004522d0: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004522d6: FISTP dword ptr [EBX]
// 004522d8: FLD float ptr [EAX + 0x4]
// 004522db: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004522e1: FISTP dword ptr [EBX + 0x4]
// 004522e4: FLD float ptr [EAX + 0x8]
// 004522e7: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004522ed: FISTP dword ptr [EBX + 0x8]
// 004522f0: LEA EAX,[ESP + 0x48]
// 004522f4: PUSH EAX
// 004522f5: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004522f7: ADD EAX,0xea480
// 004522fc: PUSH EAX
// 004522fd: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00452302: ADD ESP,0x8
// 00452305: MOV EAX,dword ptr [EDI]
// 00452307: MOV dword ptr [ESP + 0xc0],EAX
// 0045230e: MOV EAX,dword ptr [EDI + 0x4]
// 00452311: MOV dword ptr [ESP + 0xcc],EAX
// 00452318: MOV EAX,dword ptr [ESI + 0x8]
// 0045231b: MOV dword ptr [ESP + 0xd0],EAX
// 00452322: MOV EAX,dword ptr [ESP + 0xc0]
// 00452329: MOV dword ptr [ESP + 0x54],EAX
// 0045232d: MOV EAX,dword ptr [ESP + 0xcc]
// 00452334: MOV dword ptr [ESP + 0x58],EAX
// 00452338: MOV EAX,dword ptr [ESP + 0xd0]
// 0045233f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00452345: MOV dword ptr [ESP + 0x5c],EAX
// 00452349: LEA EBX,[ESP + 0x60]
// 0045234d: LEA EAX,[ESP + 0x54]
// 00452351: FLD float ptr [EAX]
// 00452353: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452359: FISTP dword ptr [EBX]
// 0045235b: FLD float ptr [EAX + 0x4]
// 0045235e: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452364: FISTP dword ptr [EBX + 0x4]
// 00452367: FLD float ptr [EAX + 0x8]
// 0045236a: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452370: FISTP dword ptr [EBX + 0x8]
// 00452373: LEA EAX,[ESP + 0x60]
// 00452377: PUSH EAX
// 00452378: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0045237a: ADD EAX,0xea4b0
// 0045237f: PUSH EAX
// 00452380: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00452385: ADD ESP,0x8
// 00452388: MOV EAX,dword ptr [EDI]
// 0045238a: MOV dword ptr [ESP + 0xd4],EAX
// 00452391: MOV EAX,dword ptr [EDI + 0x4]
// 00452394: MOV dword ptr [ESP + 0xe4],EAX
// 0045239b: MOV EAX,dword ptr [EDI + 0x8]
// 0045239e: MOV dword ptr [ESP + 0x108],EAX
// 004523a5: MOV EAX,dword ptr [ESP + 0xd4]
// 004523ac: MOV dword ptr [ESP + 0xa8],EAX
// 004523b3: MOV EAX,dword ptr [ESP + 0xe4]
// 004523ba: MOV dword ptr [ESP + 0xac],EAX
// 004523c1: MOV EAX,dword ptr [ESP + 0x108]
// 004523c8: LEA EBX,[ESP + 0x3c]
// 004523cc: MOV dword ptr [ESP + 0xb0],EAX
// 004523d3: LEA EAX,[ESP + 0xa8]
// 004523da: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004523e0: FLD float ptr [EAX]
// 004523e2: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004523e8: FISTP dword ptr [EBX]
// 004523ea: FLD float ptr [EAX + 0x4]
// 004523ed: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004523f3: FISTP dword ptr [EBX + 0x4]
// 004523f6: FLD float ptr [EAX + 0x8]
// 004523f9: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004523ff: FISTP dword ptr [EBX + 0x8]
// 00452402: LEA EAX,[ESP + 0x3c]
// 00452406: PUSH EAX
// 00452407: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00452409: ADD EAX,0xea4e0
// 0045240e: PUSH EAX
// 0045240f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00452414: ADD ESP,0x8
// 00452417: MOV EAX,dword ptr [ESI]
// 00452419: MOV dword ptr [ESP + 0x118],EAX
// 00452420: MOV EAX,dword ptr [EDI + 0x4]
// 00452423: MOV dword ptr [ESP + 0xd8],EAX
// 0045242a: MOV EAX,dword ptr [EDI + 0x8]
// 0045242d: MOV dword ptr [ESP + 0x11c],EAX
// 00452434: MOV EAX,dword ptr [ESP + 0x118]
// 0045243b: MOV dword ptr [ESP + 0xc],EAX
// 0045243f: MOV EAX,dword ptr [ESP + 0xd8]
// 00452446: MOV dword ptr [ESP + 0x10],EAX
// 0045244a: MOV EAX,dword ptr [ESP + 0x11c]
// 00452451: LEA EBX,[ESP + 0x24]
// 00452455: MOV dword ptr [ESP + 0x14],EAX
// 00452459: LEA EAX,[ESP + 0xc]
// 0045245d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00452463: FLD float ptr [EAX]
// 00452465: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045246b: FISTP dword ptr [EBX]
// 0045246d: FLD float ptr [EAX + 0x4]
// 00452470: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452476: FISTP dword ptr [EBX + 0x4]
// 00452479: FLD float ptr [EAX + 0x8]
// 0045247c: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452482: FISTP dword ptr [EBX + 0x8]
// 00452485: LEA EAX,[ESP + 0x24]
// 00452489: PUSH EAX
// 0045248a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0045248c: ADD EAX,0xea510
// 00452491: PUSH EAX
// 00452492: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00452497: ADD ESP,0x8
// 0045249a: MOV EAX,dword ptr [ESI]
// 0045249c: MOV dword ptr [ESP + 0xf4],EAX
// 004524a3: MOV EAX,dword ptr [ESI + 0x4]
// 004524a6: MOV dword ptr [ESP + 0xf8],EAX
// 004524ad: MOV EAX,dword ptr [ESI + 0x8]
// 004524b0: MOV dword ptr [ESP + 0xe0],EAX
// 004524b7: MOV EAX,dword ptr [ESP + 0xf4]
// 004524be: MOV dword ptr [ESP + 0x90],EAX
// 004524c5: MOV EAX,dword ptr [ESP + 0xf8]
// 004524cc: MOV dword ptr [ESP + 0x94],EAX
// 004524d3: MOV EAX,dword ptr [ESP + 0xe0]
// 004524da: MOV EBX,ESP
// 004524dc: MOV dword ptr [ESP + 0x98],EAX
// 004524e3: LEA EAX,[ESP + 0x90]
// 004524ea: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004524f0: FLD float ptr [EAX]
// 004524f2: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004524f8: FISTP dword ptr [EBX]
// 004524fa: FLD float ptr [EAX + 0x4]
// 004524fd: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452503: FISTP dword ptr [EBX + 0x4]
// 00452506: FLD float ptr [EAX + 0x8]
// 00452509: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045250f: FISTP dword ptr [EBX + 0x8]
// 00452512: MOV EAX,ESP
// 00452514: PUSH EAX
// 00452515: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00452517: ADD EAX,0xea540
// 0045251c: PUSH EAX
// 0045251d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00452522: ADD ESP,0x8
// 00452525: MOV EAX,dword ptr [EDI]
// 00452527: MOV dword ptr [ESP + 0xe8],EAX
// 0045252e: MOV EAX,dword ptr [ESI + 0x4]
// 00452531: MOV dword ptr [ESP + 0xec],EAX
// 00452538: MOV EAX,dword ptr [ESI + 0x8]
// 0045253b: MOV dword ptr [ESP + 0xf0],EAX
// 00452542: MOV EAX,dword ptr [ESP + 0xe8]
// 00452549: MOV dword ptr [ESP + 0x9c],EAX
// 00452550: MOV EAX,dword ptr [ESP + 0xec]
// 00452557: MOV dword ptr [ESP + 0xa0],EAX
// 0045255e: MOV EAX,dword ptr [ESP + 0xf0]
// 00452565: LEA EBX,[ESP + 0x84]
// 0045256c: MOV dword ptr [ESP + 0xa4],EAX
// 00452573: LEA EAX,[ESP + 0x9c]
// 0045257a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00452580: FLD float ptr [EAX]
// 00452582: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452588: FISTP dword ptr [EBX]
// 0045258a: FLD float ptr [EAX + 0x4]
// 0045258d: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452593: FISTP dword ptr [EBX + 0x4]
// 00452596: FLD float ptr [EAX + 0x8]
// 00452599: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045259f: FISTP dword ptr [EBX + 0x8]
// 004525a2: LEA EAX,[ESP + 0x84]
// 004525a9: PUSH EAX
// 004525aa: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004525ac: ADD EAX,0xea570
// 004525b1: PUSH EAX
// 004525b2: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004525b7: ADD ESP,0x8
// 004525ba: MOV EAX,dword ptr [EDI]
// 004525bc: MOV dword ptr [ESP + 0x10c],EAX
// 004525c3: MOV EAX,dword ptr [ESI + 0x4]
// 004525c6: MOV dword ptr [ESP + 0x110],EAX
// 004525cd: MOV EAX,dword ptr [EDI + 0x8]
// 004525d0: MOV dword ptr [ESP + 0x114],EAX
// 004525d7: MOV EAX,dword ptr [ESP + 0x10c]
// 004525de: MOV dword ptr [ESP + 0x30],EAX
// 004525e2: MOV EAX,dword ptr [ESP + 0x110]
// 004525e9: MOV dword ptr [ESP + 0x34],EAX
// 004525ed: MOV EAX,dword ptr [ESP + 0x114]
// 004525f4: LEA EBX,[ESP + 0xb4]
// 004525fb: MOV dword ptr [ESP + 0x38],EAX
// 004525ff: LEA EAX,[ESP + 0x30]
// 00452603: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00452609: FLD float ptr [EAX]
// 0045260b: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452611: FISTP dword ptr [EBX]
// 00452613: FLD float ptr [EAX + 0x4]
// 00452616: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045261c: FISTP dword ptr [EBX + 0x4]
// 0045261f: FLD float ptr [EAX + 0x8]
// 00452622: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452628: FISTP dword ptr [EBX + 0x8]
// 0045262b: LEA EAX,[ESP + 0xb4]
// 00452632: PUSH EAX
// 00452633: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00452635: ADD EAX,0xea5a0
// 0045263a: PUSH EAX
// 0045263b: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00452640: ADD ESP,0x8
// 00452643: MOV EAX,dword ptr [ESI]
// 00452645: MOV dword ptr [ESP + 0xfc],EAX
// 0045264c: MOV EAX,dword ptr [ESI + 0x4]
// 0045264f: MOV dword ptr [ESP + 0x100],EAX
// 00452656: MOV EAX,dword ptr [EDI + 0x8]
// 00452659: MOV dword ptr [ESP + 0x104],EAX
// 00452660: MOV EAX,dword ptr [ESP + 0xfc]
// 00452667: MOV dword ptr [ESP + 0x6c],EAX
// 0045266b: MOV EAX,dword ptr [ESP + 0x100]
// 00452672: MOV dword ptr [ESP + 0x70],EAX
// 00452676: MOV EAX,dword ptr [ESP + 0x104]
// 0045267d: LEA EBX,[ESP + 0x78]
// 00452681: MOV dword ptr [ESP + 0x74],EAX
// 00452685: LEA EAX,[ESP + 0x6c]
// 00452689: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0045268f: FLD float ptr [EAX]
// 00452691: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452697: FISTP dword ptr [EBX]
// 00452699: FLD float ptr [EAX + 0x4]
// 0045269c: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004526a2: FISTP dword ptr [EBX + 0x4]
// 004526a5: FLD float ptr [EAX + 0x8]
// 004526a8: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 004526ae: FISTP dword ptr [EBX + 0x8]
// 004526b1: LEA EAX,[ESP + 0x78]
// 004526b5: PUSH EAX
// 004526b6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004526b8: ADD EAX,0xea5d0
// 004526bd: PUSH EAX
// 004526be: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004526c3: MOV EDX,0xffffffff
// 004526c8: MOV EAX,0xea480
// 004526cd: ADD ESP,0x8
// 004526d0: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_004526d0
//   XREF to: 006703ec (READ)
// 004526d6: MOV ECX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 004526d8: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10]
// 004526dc: ADD EAX,0x30
// 004526df: AND EDX,ESI
// 004526e1: CMP EAX,0xea600
// 004526e6: JNZ 0x004526d0
//   XREF to: 004526d0 (CONDITIONAL_JUMP)
// 004526e8: MOV EBX,0x1
// 004526ed: TEST EDX,0x80000000
// 004526f3: JZ 0x004526fc
//   XREF to: 004526fc (CONDITIONAL_JUMP)
// 004526f5: TEST DL,0xff
// 004526f8: JZ 0x004526fc
//   XREF to: 004526fc (CONDITIONAL_JUMP)
// 004526fa: XOR EBX,EBX
// 004526fc: MOV EDI,dword ptr [0x006703ec]
//   Label: LAB_004526fc
//   XREF to: 006703ec (READ)
// 00452702: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00452703: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
