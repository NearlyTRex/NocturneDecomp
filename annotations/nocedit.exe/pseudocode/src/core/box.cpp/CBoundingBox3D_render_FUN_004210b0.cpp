// Name: core_box.cpp_CBoundingBox3D_render_FUN_004210b0
// Address: 004210b0
// Address Range: [[004210b0, 0042154b]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D * this_ptr, int param1, int param2, int param3)
// Cross-references:
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b22a [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 00480852 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d720 (0054d720) at 0054d7fa [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e894c [UNCONDITIONAL_CALL]
// Globals:
//   float g_BoundingBoxWorldToIntegerScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   void* g_CurrentTextureData
//   void* g_CurrentTextureOpacityData
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00

#include "nocturne.h"

void __cdecl
core_box_cpp_CBoundingBox3D_render_FUN_004210b0
          (CBoundingBox3D *this_ptr,int param1,int param2,int param3)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *pCVar3;
  void *pvVar4;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  int *piVar5;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  CVector3f local_1c;
  float local_10;
  undefined4 local_c;
  int local_8;
  
  corner_index = 0;
  piVar5 = (int *)&stack0xffffff50;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr,&local_1c,corner_index);
    corner_index = corner_index + 1;
    *piVar5 = (int)ROUND(local_1c.y * g_BoundingBoxWorldToIntegerScale);
    piVar5[1] = (int)ROUND(local_1c.z * g_BoundingBoxWorldToIntegerScale);
    piVar5[2] = (int)ROUND(local_10 * g_BoundingBoxWorldToIntegerScale);
    piVar5 = piVar5 + 3;
  } while ((int)corner_index < 8);
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0(g_CDemonSetPtr,8,(int *)&stack0xffffff54);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  local_1c.y = (float)(int)ROUND((this_ptr->min).x * g_BoundingBoxWorldToIntegerScale);
  local_1c.z = (float)(int)ROUND((this_ptr->min).y * g_BoundingBoxWorldToIntegerScale);
  local_10 = (float)(int)ROUND((this_ptr->min).z * g_BoundingBoxWorldToIntegerScale);
  fVar1 = (this_ptr->max).y * g_BoundingBoxWorldToIntegerScale;
  fVar2 = (this_ptr->max).z * g_BoundingBoxWorldToIntegerScale;
  pvVar4 = (void *)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  pCVar3 = g_CDemonRendererPtr;
  if (pvVar4 == (void *)0x0) {
    g_CurrentTextureData = pvVar4;
    g_CurrentTextureOpacityData = pvVar4;
    g_CDemonRendererPtr->vertex_buffer_ptr->light = 4.59163e-41;
    pCVar3->vertex_buffer_ptr->color = 0;
    pCVar3->vertex_buffer_ptr->fog = 0.0;
    pCVar3->vertex_buffer_ptr[1].light = 0.0;
    pCVar3->vertex_buffer_ptr[1].color = 0x7fff;
    pCVar3->vertex_buffer_ptr[1].fog = 0.0;
    pCVar3->vertex_buffer_ptr[2].light = 0.0;
    pCVar3->vertex_buffer_ptr[2].color = 0;
    pCVar3->vertex_buffer_ptr[2].fog = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[3].light = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[3].color = 0x7fff;
    pCVar3->vertex_buffer_ptr[3].fog = 0.0;
    pCVar3->vertex_buffer_ptr[4].light = 0.0;
    pCVar3->vertex_buffer_ptr[4].color = 0x7fff;
    pCVar3->vertex_buffer_ptr[4].fog = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[5].light = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[5].color = 0;
    pCVar3->vertex_buffer_ptr[5].fog = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[6].light = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[6].color = 0x7fff;
    pCVar3->vertex_buffer_ptr[6].fog = 4.59163e-41;
    pCVar3->vertex_buffer_ptr[7].light = 0.0;
    pCVar3->vertex_buffer_ptr[7].color = 0;
    pCVar3->vertex_buffer_ptr[7].fog = 0.0;
  }
  local_34._0_4_ = -1;
  local_34._4_4_ = 0;
  local_2c._0_4_ = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c.x = 8.40779e-45;
  local_2c._4_4_ = -(int)local_1c.z;
  local_1c.y = 2.8026e-45;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_3c,0x2c4);
  local_34._4_4_ = 1;
  local_2c._0_4_ = 0;
  local_1c.x = 4.2039e-45;
  local_20 = 1;
  local_2c._4_4_ = 0;
  local_1c.y = 9.80909e-45;
  local_1c.z = 7.00649e-45;
  local_24 = (int)ROUND(fVar2);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_3c + 4),0x2c4);
  local_2c._0_4_ = 0;
  local_2c._4_4_ = -1;
  local_24 = 0;
  local_1c.x = 0.0;
  local_1c.y = 1.4013e-45;
  local_20 = -local_8;
  local_1c.z = 7.00649e-45;
  local_10 = 5.60519e-45;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_34,0x2c4);
  local_2c._4_4_ = 0;
  local_24 = 1;
  local_20 = 0;
  local_1c.y = 2.8026e-45;
  local_1c.z = 8.40779e-45;
  local_10 = 9.80909e-45;
  local_c = 3;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_34 + 4),0x2c4);
  local_24 = 0;
  local_20 = 0;
  local_1c.x = -NAN;
  local_1c.z = 0.0;
  local_8 = 1;
  local_10 = 2.8026e-45;
  local_c = 3;
  local_1c.y = (float)-(int)ROUND(fVar1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_2c,0x2c4);
  local_20 = 0;
  local_1c.x = 0.0;
  local_10 = 5.60519e-45;
  local_c = 5;
  local_1c.y = 1.4013e-45;
  local_8 = 7;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_2c + 4),0x2c4);
  return;
}


// Assembly code:
// 004210b0: PUSH EBP
//   Label: core_box.cpp_CBoundingBox3D_render_FUN_004210b0
// 004210b1: SUB ESP,0xac
// 004210b7: MOV EBP,dword ptr [ESP + 0xb4]
//   XREF to: Stack[0x4] (READ)
// 004210be: PUSH EDI
// 004210bf: PUSH ESI
// 004210c0: PUSH EBX
// 004210c1: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0xb0] (DATA)
// 004210c5: XOR ESI,ESI
// 004210c7: PUSH ESI
//   Label: LAB_004210c7
// 004210c8: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x1c] (DATA)
// 004210cf: PUSH EAX
// 004210d0: PUSH EBP
// 004210d1: MOV EBX,EDI
// 004210d3: ADD EDI,0xc
// 004210d6: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 004210db: ADD ESP,0xc
// 004210de: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x1c] (DATA)
// 004210e5: INC ESI
// 004210e6: FLD float ptr [EAX]
//   XREF to: Stack[-0x1c] (DATA)
// 004210e8: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004210ee: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xb0] (DATA)
// 004210f0: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 004210f3: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004210f9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xac] (WRITE)
// 004210fc: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004210ff: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 00421105: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xa8] (WRITE)
// 00421108: CMP ESI,0x8
// 0042110b: JL 0x004210c7
//   XREF to: 004210c7 (CONDITIONAL_JUMP)
// 0042110d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xb0] (DATA)
// 00421111: PUSH EAX
// 00421112: PUSH 0x8
// 00421114: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0042111a: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0042111b: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 00421120: ADD ESP,0xc
// 00421123: PUSH 0x1
// 00421125: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042112b: MOV ECX,0x4
// 00421130: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00421131: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 00421135: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 0042113a: ADD ESP,0x8
// 0042113d: PUSH 0x0
// 0042113f: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00421145: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00421146: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0042114b: ADD ESP,0x8
// 0042114e: LEA EBX,[ESP + 0x94]
//   XREF to: Stack[-0x28] (DATA)
// 00421155: MOV EAX,EBP
// 00421157: FLD float ptr [EAX]
// 00421159: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 0042115f: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 00421161: FLD float ptr [EAX + 0x4]
// 00421164: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 0042116a: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 0042116d: FLD float ptr [EAX + 0x8]
// 00421170: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 00421176: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 00421179: LEA EBX,[ESP + 0xac]
//   XREF to: Stack[-0x10] (DATA)
// 00421180: LEA EAX,[EBP + 0xc]
// 00421183: FLD float ptr [EAX]
// 00421185: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 0042118b: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x10] (DATA)
// 0042118d: FLD float ptr [EAX + 0x4]
// 00421190: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 00421196: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 00421199: FLD float ptr [EAX + 0x8]
// 0042119c: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004211a2: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 004211a5: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004211ab: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004211ac: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004211b1: ADD ESP,0x4
// 004211b4: TEST EAX,EAX
// 004211b6: JNZ 0x004212ab
//   XREF to: 004212ab (CONDITIONAL_JUMP)
// 004211bc: MOV [0x02d03e84],EAX
//   XREF to: 02d03e84 (WRITE)
// 004211c1: MOV [0x02d03e80],EAX
//   XREF to: 02d03e80 (WRITE)
// 004211c6: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004211cb: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004211cd: MOV dword ptr [EBX + 0x20],0x7fff
// 004211d4: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004211d6: XOR EBP,EBP
// 004211d8: MOV dword ptr [EBX + 0x24],EBP
// 004211db: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004211dd: MOV dword ptr [EBX + 0x28],EBP
// 004211e0: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004211e2: MOV dword ptr [EBX + 0x50],EBP
// 004211e5: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004211e7: MOV dword ptr [EBX + 0x54],0x7fff
// 004211ee: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004211f0: MOV dword ptr [EBX + 0x58],EBP
// 004211f3: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004211f5: MOV dword ptr [EBX + 0x80],EBP
// 004211fb: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004211fd: MOV dword ptr [EBX + 0x84],EBP
// 00421203: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421205: MOV dword ptr [EBX + 0x88],0x7fff
// 0042120f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421211: MOV dword ptr [EBX + 0xb0],0x7fff
// 0042121b: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042121d: MOV dword ptr [EBX + 0xb4],0x7fff
// 00421227: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421229: MOV dword ptr [EBX + 0xb8],EBP
// 0042122f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421231: MOV dword ptr [EBX + 0xe0],EBP
// 00421237: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421239: MOV dword ptr [EBX + 0xe4],0x7fff
// 00421243: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421245: MOV dword ptr [EBX + 0xe8],0x7fff
// 0042124f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421251: MOV dword ptr [EBX + 0x110],0x7fff
// 0042125b: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042125d: MOV dword ptr [EBX + 0x114],EBP
// 00421263: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421265: MOV dword ptr [EBX + 0x118],0x7fff
// 0042126f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421271: MOV dword ptr [EBX + 0x140],0x7fff
// 0042127b: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042127d: MOV dword ptr [EBX + 0x144],0x7fff
// 00421287: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421289: MOV dword ptr [EBX + 0x148],0x7fff
// 00421293: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00421295: MOV dword ptr [EBX + 0x170],EBP
// 0042129b: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042129d: MOV dword ptr [EBX + 0x174],EBP
// 004212a3: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004212a5: MOV dword ptr [EAX + 0x178],EBP
// 004212ab: MOV EDX,0xffffffff
//   Label: LAB_004212ab
// 004212b0: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x28] (READ)
// 004212b7: MOV EBP,0x4
// 004212bc: PUSH 0x2c4
// 004212c1: MOV EBX,0x1
// 004212c6: MOV EDI,0xffffffff
// 004212cb: XOR ECX,ECX
// 004212cd: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 004212d1: MOV dword ptr [ESP + 0x7c],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 004212d5: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004212dc: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004212e3: MOV ESI,EAX
// 004212e5: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 004212ec: MOV dword ptr [ESP + 0x8c],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 004212f3: MOV EAX,0x6
// 004212f8: MOV EDX,0x2
// 004212fd: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00421303: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0042130a: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x50] (DATA)
// 0042130e: NEG ESI
// 00421310: PUSH EAX
// 00421311: XOR EBP,EBP
// 00421313: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 0042131a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0042131b: MOV dword ptr [ESP + 0x9c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00421322: XOR ESI,ESI
// 00421324: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 00421329: MOV EDX,0x7
// 0042132e: ADD ESP,0xc
// 00421331: MOV ECX,0x5
// 00421336: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x10] (READ)
// 0042133d: PUSH 0x2c4
// 00421342: MOV dword ptr [ESP + 0x78],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 00421346: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0042134d: MOV EAX,0x3
// 00421352: MOV dword ptr [ESP + 0x7c],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 00421356: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0042135d: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x50] (DATA)
// 00421361: MOV dword ptr [ESP + 0x88],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00421368: PUSH EAX
// 00421369: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042136f: MOV dword ptr [ESP + 0x84],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 00421376: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00421377: MOV dword ptr [ESP + 0x98],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0042137e: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00421385: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 0042138a: MOV ECX,0x1
// 0042138f: ADD ESP,0xc
// 00421392: MOV EBX,0x5
// 00421397: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x24] (READ)
// 0042139e: PUSH 0x2c4
// 004213a3: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 004213a7: MOV dword ptr [ESP + 0x7c],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 004213ab: MOV dword ptr [ESP + 0x80],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 004213b2: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 004213b9: MOV dword ptr [ESP + 0x8c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 004213c0: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004213c7: NEG EAX
// 004213c9: MOV dword ptr [ESP + 0x90],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004213d0: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004213d7: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x50] (DATA)
// 004213db: MOV ESI,0x4
// 004213e0: PUSH EAX
// 004213e1: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004213e7: MOV EBX,0x6
// 004213ec: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004213ed: MOV dword ptr [ESP + 0x9c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 004213f4: MOV ESI,0x7
// 004213f9: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 004213fe: MOV EAX,0x1
// 00421403: MOV ECX,0x2
// 00421408: ADD ESP,0xc
// 0042140b: MOV EDI,0x3
// 00421410: XOR EDX,EDX
// 00421412: PUSH 0x2c4
// 00421417: MOV dword ptr [ESP + 0x78],EBP
//   XREF to: Stack[-0x48] (WRITE)
// 0042141b: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0042141f: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 00421426: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0042142d: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0xc] (READ)
// 00421434: MOV dword ptr [ESP + 0x8c],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 0042143b: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00421442: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x50] (DATA)
// 00421446: MOV dword ptr [ESP + 0x90],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0042144d: PUSH EAX
// 0042144e: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00421454: MOV dword ptr [ESP + 0x98],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0042145b: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0042145c: MOV EDI,0x2
// 00421461: XOR ESI,ESI
// 00421463: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 00421468: MOV ECX,0xffffffff
// 0042146d: MOV EBP,0x3
// 00421472: ADD ESP,0xc
// 00421475: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042147b: XOR EAX,EAX
// 0042147d: PUSH 0x2c4
// 00421482: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00421486: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0042148a: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (READ)
// 00421491: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 00421498: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0042149f: MOV EBX,EAX
// 004214a1: MOV EAX,0x1
// 004214a6: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 004214ad: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004214b4: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x50] (DATA)
// 004214b8: MOV dword ptr [ESP + 0x8c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004214bf: PUSH EAX
// 004214c0: MOV dword ptr [ESP + 0x94],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 004214c7: NEG EBX
// 004214c9: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004214ca: MOV EDI,0x4
// 004214cf: MOV dword ptr [ESP + 0x8c],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 004214d6: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 004214db: ADD ESP,0xc
// 004214de: MOV EBP,0x5
// 004214e3: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x8] (READ)
// 004214ea: MOV dword ptr [ESP + 0x74],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 004214ee: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 004214f2: MOV dword ptr [ESP + 0x84],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 004214f9: MOV dword ptr [ESP + 0x88],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 00421500: MOV ESI,0x1
// 00421505: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0042150c: MOV dword ptr [ESP + 0x7c],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 00421510: POP EBX
// 00421511: POP ESI
// 00421512: POP EDI
// 00421513: MOV EAX,0x7
// 00421518: PUSH 0x2c4
// 0042151d: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00421524: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x50] (DATA)
// 00421528: PUSH EAX
// 00421529: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042152f: MOV EDX,0x6
// 00421534: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00421535: MOV dword ptr [ESP + 0x90],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0042153c: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 00421541: ADD ESP,0xc
// 00421544: ADD ESP,0xac
// 0042154a: POP EBP
// 0042154b: RET
