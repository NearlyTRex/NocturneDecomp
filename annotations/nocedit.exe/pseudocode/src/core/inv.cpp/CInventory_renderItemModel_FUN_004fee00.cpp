// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
// Address: 004fee00
// Address Range: [[004fee00, 004ff183] [004ff1ba, 004ff201]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_renderItemModel_FUN_004fee00(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, int viewport_size, int rotation_y, int alpha)
// Cross-references:
//   core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370 (00500370) at 005005e1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CGun_0063083e
//   TerminatedCString s_CKeyActor_00630843
//   TerminatedCString s_CKeyActor_0063084d
//   TerminatedCString s_axe1_kfm_00630857
//   TerminatedCString s_ax_kfm_00630860
//   float g_InventoryHalfScale = 0.5
//   double g_InventoryDoubleScale = 2
//   float g_InventoryNegativeHalfScale = -0.5
//   float g_InventoryPiOver2 = 1.570796
//   float g_InventoryNegativePiOver2 = -1.570796
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   int g_GlobalDeltaTimeInt
//   float g_PerspectiveReciprocal
//   int INT_02dcd794
//   undefined4 g_CMeleeClassInfo.name_hash
//   undefined4 DAT_0326f0e8
//   undefined4 DAT_0326f0ec
//   undefined4 DAT_0326f0f0
//   undefined4 DAT_0326f0f4
//   undefined4 DAT_0326f0f8
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_inv.cpp_getItemModel_FUN_004fcda0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   engine_matrix.c_interpolatedCos_FUN_0050c600
//   engine_matrix.c_interpolatedSin_FUN_0050c5c0

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
          (CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,
          int rotation_y,int alpha)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  CDemonSet *pCVar4;
  int iVar5;
  int iVar6;
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar7;
  CDemonActor *pCVar8;
  BADSPACEBASE *in_ESP;
  CVector3i local_2c;
  float local_18;
  float local_14;
  
  pCVar4 = g_CDemonSetPtr;
  if (item != (CDemonActor *)0x0) {
    g_CDemonSetPtr->rendering_mode = 1;
    (pCVar4->light_direction).x = -0x482b;
    (pCVar4->light_direction).y = -0x482b;
    (pCVar4->light_direction).z = 0x482b;
    pCVar4->ambient_base_quick = 32000;
    INT_02dcd794 = INT_02dcd794 +
                   ((int)((g_GlobalDeltaTimeInt + (g_GlobalDeltaTimeInt >> 0x1f) * -4) -
                         (uint)((g_GlobalDeltaTimeInt >> 0x1f) << 1 < 0)) >> 2);
    iVar5 = engine_matrix_c_interpolatedSin_FUN_0050c5c0((ushort)INT_02dcd794);
    iVar6 = engine_matrix_c_interpolatedCos_FUN_0050c600((ushort)INT_02dcd794);
    (g_CDemonSetPtr->light_direction).x =
         (uint)((longlong)iVar5 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar5 * 0x482b) >> 0x20) << 0x10;
    (g_CDemonSetPtr->light_direction).z =
         (uint)((longlong)iVar6 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar6 * 0x482b) >> 0x20) << 0x10;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
              (g_CDemonRendererPtr,viewport_x,viewport_y,viewport_size,viewport_size);
    this_ptr_00 = core_inv_cpp_getItemModel_FUN_004fcda0(item);
    pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
    pCVar1 = pCVar7->frame_bounds;
    local_14 = (pCVar1[1].x - pCVar1->x) * g_InventoryHalfScale;
    fVar2 = (pCVar1[1].y - pCVar1->y) * g_InventoryHalfScale;
    fVar3 = (pCVar1[1].z - pCVar1->z) * g_InventoryHalfScale;
    if (((local_14 <= fVar2) || (local_14 <= fVar3)) && (local_14 = fVar3, fVar3 < fVar2)) {
      local_14 = fVar2;
    }
    iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CGun");
    if ((iVar5 != 0) ||
       (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CKeyActor"), iVar5 != 0)) {
      local_14 = local_14 * (float)g_InventoryDoubleScale;
    }
    local_18 = -local_14 * (float)g_InventoryDoubleScale;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffbc);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,36.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    g_PerspectiveReciprocal = 0.0;
    local_2c.x = 0;
    local_2c.z = 0;
    local_2c.y = rotation_y;
    iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CKeyActor");
    if (iVar5 != 0) {
      local_2c.x = (int)((float)local_2c.x + g_InventoryPiOver2);
    }
    pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790(item,g_CMeleeClassInfo.name_hash);
    if (pCVar8 != (CDemonActor *)0x0) {
      iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pCVar8[1].create_event,"axe1.kfm");
      if (iVar5 == 0) {
        local_2c.x = (int)((float)local_2c.x + g_InventoryNegativePiOver2);
        local_2c.z = (int)((float)local_2c.z + g_InventoryNegativePiOver2);
      }
      iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pCVar8[1].create_event,"ax.kfm");
      if (iVar5 == 0) {
        local_2c.x = (int)((float)local_2c.x + g_InventoryNegativePiOver2);
        local_2c.z = (int)((float)local_2c.z + g_InventoryNegativePiOver2);
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,&local_2c,(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,(CVector3i *)&stack0xffffffb0);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (this_ptr_00,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(this_ptr_00,0.0,-1);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
    g_CDemonSetPtr->rendering_mode = 0;
    return;
  }
  return;
}


// Assembly code:
// 004fee00: PUSH EBX
//   Label: core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
// 004fee01: PUSH ESI
// 004fee02: PUSH EDI
// 004fee03: PUSH EBP
// 004fee04: MOV EBP,ESP
// 004fee06: SUB ESP,0x70
// 004fee09: MOV EBX,dword ptr [EBP + 0x18]
// 004fee0c: TEST EBX,EBX
// 004fee0e: JNZ 0x004fee17
//   XREF to: 004fee17 (CONDITIONAL_JUMP)
// 004fee10: MOV ESP,EBP
// 004fee12: POP EBP
// 004fee13: POP EDI
// 004fee14: POP ESI
// 004fee15: POP EBX
// 004fee16: RET
// 004fee17: MOV EAX,[0x006810c8]
//   Label: LAB_004fee17
//   XREF to: 006810c8 (READ)
// 004fee1c: MOV dword ptr [EAX + 0x15ae70],0x1
//   XREF to: 0326f0e8 (WRITE)
// 004fee26: MOV dword ptr [EAX + 0x15ae74],0xffffb7d5
//   XREF to: 0326f0ec (WRITE)
// 004fee30: MOV dword ptr [EAX + 0x15ae78],0xffffb7d5
//   XREF to: 0326f0f0 (WRITE)
// 004fee3a: MOV dword ptr [EAX + 0x15ae7c],0x482b
//   XREF to: 0326f0f4 (WRITE)
// 004fee44: MOV dword ptr [EAX + 0x15ae80],0x7d00
//   XREF to: 0326f0f8 (WRITE)
// 004fee4e: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004fee53: MOV EDX,EAX
// 004fee55: SAR EDX,0x1f
// 004fee58: SHL EDX,0x2
// 004fee5b: SBB EAX,EDX
// 004fee5d: SAR EAX,0x2
// 004fee60: MOV EDX,dword ptr [0x02dcd794]
//   XREF to: 02dcd794 (READ)
// 004fee66: ADD EDX,EAX
// 004fee68: PUSH EDX
// 004fee69: MOV dword ptr [0x02dcd794],EDX
//   XREF to: 02dcd794 (WRITE)
// 004fee6f: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 004fee74: ADD ESP,0x4
// 004fee77: MOV EDI,dword ptr [0x02dcd794]
//   XREF to: 02dcd794 (READ)
// 004fee7d: PUSH EDI
// 004fee7e: MOV ESI,EAX
// 004fee80: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 004fee85: MOV EDX,0x482b
// 004fee8a: ADD ESP,0x4
// 004fee8d: MOV ECX,EAX
// 004fee8f: MOV EAX,ESI
// 004fee91: IMUL EDX
// 004fee93: SHRD EAX,EDX,0x10
// 004fee97: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004fee9d: MOV dword ptr [EDX + 0x15ae74],EAX
//   XREF to: 0326f0ec (WRITE)
// 004feea3: MOV EDX,0x482b
// 004feea8: MOV EAX,ECX
// 004feeaa: IMUL EDX
// 004feeac: SHRD EAX,EDX,0x10
// 004feeb0: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004feeb6: MOV dword ptr [EDX + 0x15ae7c],EAX
//   XREF to: 0326f0f4 (WRITE)
// 004feebc: MOV EAX,dword ptr [EBP + 0x24]
// 004feebf: PUSH EAX
// 004feec0: PUSH EAX
// 004feec1: MOV ECX,dword ptr [EBP + 0x20]
// 004feec4: PUSH ECX
// 004feec5: MOV ESI,dword ptr [EBP + 0x1c]
// 004feec8: PUSH ESI
// 004feec9: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004feecf: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004feed0: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 004feed5: ADD ESP,0x14
// 004feed8: PUSH EBX
// 004feed9: CALL core_inv.cpp_getItemModel_FUN_004fcda0
//   XREF to: 004fcda0 (UNCONDITIONAL_CALL)
// 004feede: ADD ESP,0x4
// 004feee1: PUSH EAX
// 004feee2: MOV ESI,EAX
// 004feee4: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004feee9: MOV EDX,dword ptr [EAX + 0x5690]
// 004feeef: MOV EAX,dword ptr [EDX]
// 004feef1: MOV dword ptr [EBP + -0x70],EAX
// 004feef4: LEA EAX,[EDX + 0x4]
// 004feef7: MOV EAX,dword ptr [EAX]
// 004feef9: MOV dword ptr [EBP + -0x6c],EAX
// 004feefc: LEA EAX,[EDX + 0x8]
// 004feeff: MOV EAX,dword ptr [EAX]
// 004fef01: MOV dword ptr [EBP + -0x68],EAX
// 004fef04: MOV EAX,dword ptr [EDX + 0xc]
// 004fef07: ADD EDX,0xc
// 004fef0a: MOV dword ptr [EBP + -0x64],EAX
// 004fef0d: LEA EAX,[EDX + 0x4]
// 004fef10: MOV EAX,dword ptr [EAX]
// 004fef12: FLD float ptr [EBP + -0x64]
// 004fef15: MOV dword ptr [EBP + -0x60],EAX
// 004fef18: FSUB float ptr [EBP + -0x70]
// 004fef1b: FLD float ptr [EBP + -0x60]
// 004fef1e: LEA EAX,[EDX + 0x8]
// 004fef21: FSUB float ptr [EBP + -0x6c]
// 004fef24: MOV EAX,dword ptr [EAX]
// 004fef26: FXCH
// 004fef28: FST float ptr [EBP + -0x28]
// 004fef2b: FLD float ptr [0x0063086a]
//   XREF to: 0063086a (READ)
// 004fef31: FXCH
// 004fef33: FMUL ST1
// 004fef35: FXCH ST2
// 004fef37: FSTP float ptr [EBP + -0x24]
// 004fef3a: MOV dword ptr [EBP + -0x5c],EAX
// 004fef3d: FLD float ptr [EBP + -0x24]
// 004fef40: FLD float ptr [EBP + -0x5c]
// 004fef43: FSUB float ptr [EBP + -0x68]
// 004fef46: FXCH
// 004fef48: FMUL ST2
// 004fef4a: FXCH
// 004fef4c: FST float ptr [EBP + -0x20]
// 004fef4f: FMULP ST2
// 004fef51: ADD ESP,0x4
// 004fef54: FXCH ST2
// 004fef56: FSTP float ptr [EBP + -0x58]
// 004fef59: FXCH
// 004fef5b: FSTP float ptr [EBP + -0x54]
// 004fef5e: FLD float ptr [EBP + -0x58]
// 004fef61: FXCH
// 004fef63: FSTP float ptr [EBP + -0x50]
// 004fef66: FCOMP float ptr [EBP + -0x54]
// 004fef69: FNSTSW AX
// 004fef6b: SAHF
// 004fef6c: JBE 0x004ff1ba
//   XREF to: 004ff1ba (CONDITIONAL_JUMP)
// 004fef72: FLD float ptr [EBP + -0x58]
// 004fef75: FCOMP float ptr [EBP + -0x50]
// 004fef78: FNSTSW AX
// 004fef7a: SAHF
// 004fef7b: JBE 0x004ff1ba
//   XREF to: 004ff1ba (CONDITIONAL_JUMP)
// 004fef81: MOV EAX,dword ptr [EBP + -0x58]
// 004fef84: MOV dword ptr [EBP + -0x4],EAX
//   Label: LAB_004fef84
// 004fef87: PUSH 0x63083e
//   XREF to: 0063083e (DATA)
// 004fef8c: PUSH EBX
// 004fef8d: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fef92: ADD ESP,0x8
// 004fef95: TEST EAX,EAX
// 004fef97: JZ 0x004ff1d5
//   XREF to: 004ff1d5 (CONDITIONAL_JUMP)
// 004fef9d: FLD float ptr [EBP + -0x4]
//   Label: LAB_004fef9d
// 004fefa0: FLD ST0
// 004fefa2: FMUL double ptr [0x00630872]
//   XREF to: 00630872 (READ)
// 004fefa8: FSTP ST1
// 004fefaa: FSTP float ptr [EBP + -0x4]
// 004fefad: FLD float ptr [EBP + -0x4]
//   Label: LAB_004fefad
// 004fefb0: FCHS
// 004fefb2: XOR EAX,EAX
// 004fefb4: FMUL double ptr [0x00630872]
//   XREF to: 00630872 (READ)
// 004fefba: MOV dword ptr [EBP + -0x34],EAX
// 004fefbd: MOV dword ptr [EBP + -0x30],EAX
// 004fefc0: FSTP float ptr [EBP + -0x8]
// 004fefc3: MOV EAX,dword ptr [EBP + -0x8]
// 004fefc6: MOV dword ptr [EBP + -0x2c],EAX
// 004fefc9: LEA EAX,[EBP + -0x34]
// 004fefcc: PUSH EAX
// 004fefcd: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004fefd3: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004fefd4: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 004fefd9: ADD ESP,0x8
// 004fefdc: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004fefe2: PUSH 0x42100000
// 004fefe7: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004fefe8: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 004fefed: ADD ESP,0x8
// 004feff0: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004feff5: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004feffa: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004feffb: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 004ff000: ADD ESP,0x8
// 004ff003: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004ff008: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ff00e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ff00f: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004ff014: FLD float ptr [EBP + -0x70]
// 004ff017: FADD float ptr [EBP + -0x64]
// 004ff01a: FST float ptr [EBP + -0x4c]
// 004ff01d: FLD float ptr [0x0063087a]
//   XREF to: 0063087a (READ)
// 004ff023: FXCH
// 004ff025: FMUL ST1
// 004ff027: FLD float ptr [EBP + -0x68]
// 004ff02a: FLD float ptr [EBP + -0x6c]
// 004ff02d: FADD float ptr [EBP + -0x60]
// 004ff030: FXCH
// 004ff032: FADD float ptr [EBP + -0x5c]
// 004ff035: FXCH
// 004ff037: FST float ptr [EBP + -0x48]
// 004ff03a: FMUL ST3
// 004ff03c: FXCH
// 004ff03e: FST float ptr [EBP + -0x44]
// 004ff041: FMULP ST3
// 004ff043: ADD ESP,0x8
// 004ff046: MOV EAX,dword ptr [EBP + 0x28]
// 004ff049: XOR ECX,ECX
// 004ff04b: PUSH 0x63084d
//   XREF to: 0063084d (DATA)
// 004ff050: MOV dword ptr [0x02d051f4],ECX
//   XREF to: 02d051f4 (WRITE)
// 004ff056: MOV dword ptr [EBP + -0x1c],ECX
// 004ff059: MOV dword ptr [EBP + -0x14],ECX
// 004ff05c: MOV dword ptr [EBP + -0x18],EAX
// 004ff05f: PUSH EBX
// 004ff060: FXCH
// 004ff062: FSTP float ptr [EBP + -0x40]
// 004ff065: FSTP float ptr [EBP + -0x3c]
// 004ff068: FSTP float ptr [EBP + -0x38]
// 004ff06b: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ff070: ADD ESP,0x8
// 004ff073: TEST EAX,EAX
// 004ff075: JZ 0x004ff083
//   XREF to: 004ff083 (CONDITIONAL_JUMP)
// 004ff077: FLD float ptr [EBP + -0x1c]
// 004ff07a: FADD float ptr [0x0063087e]
//   XREF to: 0063087e (READ)
// 004ff080: FSTP float ptr [EBP + -0x1c]
// 004ff083: MOV EDX,dword ptr [0x02f0d928]
//   Label: LAB_004ff083
//   XREF to: 02f0d928 (READ)
// 004ff089: PUSH EDX
// 004ff08a: PUSH EBX
// 004ff08b: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ff090: ADD ESP,0x8
// 004ff093: MOV EBX,EAX
// 004ff095: TEST EAX,EAX
// 004ff097: JZ 0x004ff0fc
//   XREF to: 004ff0fc (CONDITIONAL_JUMP)
// 004ff099: PUSH 0x630857
//   XREF to: 00630857 (DATA)
// 004ff09e: ADD EAX,0x1d0
// 004ff0a3: PUSH EAX
// 004ff0a4: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004ff0a9: ADD ESP,0x8
// 004ff0ac: TEST EAX,EAX
// 004ff0ae: JNZ 0x004ff0ca
//   XREF to: 004ff0ca (CONDITIONAL_JUMP)
// 004ff0b0: FLD float ptr [EBP + -0x14]
// 004ff0b3: FLD float ptr [0x00630882]
//   XREF to: 00630882 (READ)
// 004ff0b9: FLD float ptr [EBP + -0x1c]
// 004ff0bc: FADD ST0,ST1
// 004ff0be: FXCH ST2
// 004ff0c0: FADDP
// 004ff0c2: FXCH
// 004ff0c4: FSTP float ptr [EBP + -0x1c]
// 004ff0c7: FSTP float ptr [EBP + -0x14]
// 004ff0ca: PUSH 0x630860
//   Label: LAB_004ff0ca
//   XREF to: 00630860 (DATA)
// 004ff0cf: LEA EAX,[EBX + 0x1d0]
// 004ff0d5: PUSH EAX
// 004ff0d6: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004ff0db: ADD ESP,0x8
// 004ff0de: TEST EAX,EAX
// 004ff0e0: JNZ 0x004ff0fc
//   XREF to: 004ff0fc (CONDITIONAL_JUMP)
// 004ff0e2: FLD float ptr [EBP + -0x14]
// 004ff0e5: FLD float ptr [0x00630882]
//   XREF to: 00630882 (READ)
// 004ff0eb: FLD float ptr [EBP + -0x1c]
// 004ff0ee: FADD ST0,ST1
// 004ff0f0: FXCH ST2
// 004ff0f2: FADDP
// 004ff0f4: FXCH
// 004ff0f6: FSTP float ptr [EBP + -0x1c]
// 004ff0f9: FSTP float ptr [EBP + -0x14]
// 004ff0fc: PUSH 0x0
//   Label: LAB_004ff0fc
// 004ff0fe: LEA EAX,[EBP + -0x1c]
// 004ff101: PUSH EAX
// 004ff102: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ff108: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ff109: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004ff10e: ADD ESP,0xc
// 004ff111: LEA EAX,[EBP + -0x40]
// 004ff114: PUSH EAX
// 004ff115: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004ff11a: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ff120: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004ff121: MOV EDI,dword ptr [EBP + 0x2c]
// 004ff124: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004ff129: ADD ESP,0xc
// 004ff12c: CMP EDI,0xfde8
// 004ff132: JGE 0x004ff1f0
//   XREF to: 004ff1f0 (CONDITIONAL_JUMP)
// 004ff138: PUSH EDI
// 004ff139: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ff13f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ff140: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004ff145: ADD ESP,0x8
// 004ff148: PUSH 0x1
// 004ff14a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ff150: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ff151: CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
// 004ff156: ADD ESP,0x8
// 004ff159: PUSH 0x2e7
// 004ff15e: PUSH 0x0
// 004ff160: PUSH ESI
// 004ff161: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004ff166: ADD ESP,0xc
// 004ff169: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ff16f: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004ff170: CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   XREF to: 0048da80 (UNCONDITIONAL_CALL)
// 004ff175: ADD ESP,0x4
// 004ff178: MOV ESI,dword ptr [0x006703ec]
//   Label: LAB_004ff178
//   XREF to: 006703ec (READ)
// 004ff17e: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004ff17f: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004ff1ba: FLD float ptr [EBP + -0x54]
//   Label: LAB_004ff1ba
// 004ff1bd: FCOMP float ptr [EBP + -0x50]
// 004ff1c0: FNSTSW AX
// 004ff1c2: SAHF
// 004ff1c3: JBE 0x004ff1cd
//   XREF to: 004ff1cd (CONDITIONAL_JUMP)
// 004ff1c5: MOV EAX,dword ptr [EBP + -0x54]
// 004ff1c8: JMP 0x004fef84
//   XREF to: 004fef84 (UNCONDITIONAL_JUMP)
// 004ff1cd: MOV EAX,dword ptr [EBP + -0x50]
//   Label: LAB_004ff1cd
// 004ff1d0: JMP 0x004fef84
//   XREF to: 004fef84 (UNCONDITIONAL_JUMP)
// 004ff1d5: PUSH 0x630843
//   Label: LAB_004ff1d5
//   XREF to: 00630843 (DATA)
// 004ff1da: PUSH EBX
// 004ff1db: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ff1e0: ADD ESP,0x8
// 004ff1e3: TEST EAX,EAX
// 004ff1e5: JNZ 0x004fef9d
//   XREF to: 004fef9d (CONDITIONAL_JUMP)
// 004ff1eb: JMP 0x004fefad
//   XREF to: 004fefad (UNCONDITIONAL_JUMP)
// 004ff1f0: PUSH -0x1
//   Label: LAB_004ff1f0
// 004ff1f2: PUSH 0x0
// 004ff1f4: PUSH ESI
// 004ff1f5: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004ff1fa: ADD ESP,0xc
// 004ff1fd: JMP 0x004ff178
//   XREF to: 004ff178 (UNCONDITIONAL_JUMP)
