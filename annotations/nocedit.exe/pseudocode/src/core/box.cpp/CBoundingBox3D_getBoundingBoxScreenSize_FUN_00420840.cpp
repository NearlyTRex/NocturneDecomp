// Name: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
// Address: 00420840
// Address Range: [[00420840, 00420937]]
// Convention: __cdecl
// Signature: float core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D * this_ptr)
// Cross-references:
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 0059777f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40 (0059ce40) at 0059ce72 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d763 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051dcce [UNCONDITIONAL_CALL]
// Globals:
//   float g_BoundingBoxCenterScaleFactor = 0.5
//   double g_BoundingBoxFixedPointScaleFactor = 0.00390625
//   float g_BoundingBoxWorldToIntegerScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_ProjectionScale = 0x10000
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ViewportCenterYFixed
// Function calls:
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

float __cdecl
core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CVector3i local_34;
  float local_28;
  float local_24;
  float local_20;
  
  local_28 = ((this_ptr->min).x + (this_ptr->max).x) * g_BoundingBoxCenterScaleFactor;
  local_24 = ((this_ptr->min).y + (this_ptr->max).y) * g_BoundingBoxCenterScaleFactor;
  local_20 = ((this_ptr->min).z + (this_ptr->max).z) * g_BoundingBoxCenterScaleFactor;
  local_34.x = (int)ROUND(local_28 * g_BoundingBoxWorldToIntegerScale);
  local_34.y = (int)ROUND(local_24 * g_BoundingBoxWorldToIntegerScale);
  local_34.z = (int)ROUND(local_20 * g_BoundingBoxWorldToIntegerScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,&local_34);
  iVar1 = g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex.transformed_z;
  if (0 < iVar1) {
    return ABS(((float)g_ViewportCenterYFixed *
               (((this_ptr->max).y - (this_ptr->min).y) /
               ((float)iVar1 * (float)g_BoundingBoxFixedPointScaleFactor))) /
               (float)g_ProjectionScale);
  }
  return 99999.0;
}


// Assembly code:
// 00420840: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
// 00420841: PUSH ESI
// 00420842: PUSH EBP
// 00420843: MOV EBP,ESP
// 00420845: SUB ESP,0x30
// 00420848: AND ESP,0xfffffff8
// 0042084b: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0042084e: LEA EAX,[ESI + 0xc]
// 00420851: FLD float ptr [ESI]
// 00420853: FADD float ptr [EAX]
// 00420855: FST float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00420858: FLD float ptr [ESI + 0x4]
// 0042085b: FADD float ptr [EAX + 0x4]
// 0042085e: FXCH
// 00420860: FLD float ptr [0x006165eb]
//   XREF to: 006165eb (READ)
// 00420866: FXCH
// 00420868: FMUL ST1
// 0042086a: FXCH ST2
// 0042086c: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 00420870: FLD float ptr [ESI + 0x8]
// 00420873: FADD float ptr [EAX + 0x8]
// 00420876: FXCH
// 00420878: FMUL ST2
// 0042087a: FXCH
// 0042087c: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 00420880: FMULP ST2
// 00420882: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x34] (DATA)
// 00420886: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042088c: FXCH ST2
// 0042088e: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 00420892: FXCH
// 00420894: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 00420898: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0042089c: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (WRITE)
// 004208a0: FLD float ptr [EAX]
//   XREF to: Stack[-0x28] (DATA)
// 004208a2: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004208a8: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 004208aa: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 004208ad: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004208b3: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 004208b6: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004208b9: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004208bf: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 004208c2: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x34] (DATA)
// 004208c6: PUSH EAX
// 004208c7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004208c9: ADD EAX,0xea5d0
// 004208ce: PUSH EAX
// 004208cf: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004208d4: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004208d9: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004208db: MOV EAX,dword ptr [EAX + 0xea5d8]
// 004208e1: ADD ESP,0x8
// 004208e4: TEST EAX,EAX
// 004208e6: JLE 0x00420926
//   XREF to: 00420926 (CONDITIONAL_JUMP)
// 004208e8: FLD float ptr [ESI + 0x10]
// 004208eb: FSUB float ptr [ESI + 0x4]
// 004208ee: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004208f2: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004208f6: FMUL double ptr [0x006165ef]
//   XREF to: 006165ef (READ)
// 004208fc: FDIVP
// 004208fe: FILD dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 00420904: FMULP
// 00420906: FILD dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0042090c: FDIVP
// 0042090e: FABS
// 00420910: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (WRITE)
// 00420914: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00420918: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042091c: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00420920: MOV ESP,EBP
// 00420922: POP EBP
// 00420923: POP ESI
// 00420924: POP EBX
// 00420925: RET
// 00420926: MOV dword ptr [ESP + 0x28],0x47c34f80
//   Label: LAB_00420926
//   XREF to: Stack[-0x18] (WRITE)
// 0042092e: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00420932: MOV ESP,EBP
// 00420934: POP EBP
// 00420935: POP ESI
// 00420936: POP EBX
// 00420937: RET
