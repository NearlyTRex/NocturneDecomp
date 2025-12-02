// Name: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
// Address: 0044e790
// Address Range: [[0044e790, 0044edea]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, int intensity)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0 (0044edf0) at 0044ee12 [UNCONDITIONAL_CALL]
// Globals:
//   double g_LightScaleFactor = 0.00390625
//   CVector3i g_CameraOutOfBoundsCoord
//   undefined4 DAT_0151bf9a
//   undefined4 g_CameraOutOfBoundsY
//   undefined4 DAT_0151bf9e
//   undefined4 g_CameraOutOfBoundsZ
//   CVector3i g_TempProjectedCoord
//   undefined4 g_TempProjectedCoord.y
//   undefined4 g_TempProjectedCoord.z

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
          (CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  CVector3i *pCVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_18;
  
  if (light_source->antialiasing_enabled == 0) {
    iVar8 = world_pos->x - (light_source->base).camera_origin.x;
    iVar9 = world_pos->y - (light_source->base).camera_origin.y;
    iVar6 = world_pos->z - (light_source->base).camera_origin.z;
    lVar2 = (longlong)(light_source->base).source_matrix.m[0].z * (longlong)iVar8;
    lVar3 = (longlong)(light_source->base).source_matrix.m[1].z * (longlong)iVar9;
    lVar4 = (longlong)(light_source->base).source_matrix.m[2].z * (longlong)iVar6;
    g_TempProjectedCoord.z =
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if (((g_TempProjectedCoord.z < 1) ||
        (lVar2 = (longlong)(light_source->base).source_matrix.m[0].x * (longlong)iVar8,
        lVar3 = (longlong)(light_source->base).source_matrix.m[1].x * (longlong)iVar9,
        lVar4 = (longlong)(light_source->base).source_matrix.m[2].x * (longlong)iVar6,
        g_TempProjectedCoord.x =
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10),
        g_TempProjectedCoord.z <= g_TempProjectedCoord.x)) ||
       ((g_TempProjectedCoord.x <= -g_TempProjectedCoord.z ||
        ((lVar2 = (longlong)(light_source->base).source_matrix.m[0].y * (longlong)iVar8,
         lVar3 = (longlong)(light_source->base).source_matrix.m[1].y * (longlong)iVar9,
         lVar4 = (longlong)(light_source->base).source_matrix.m[2].y * (longlong)iVar6,
         g_TempProjectedCoord.y =
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
              ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10),
         g_TempProjectedCoord.z <= g_TempProjectedCoord.y ||
         (g_TempProjectedCoord.y <= -g_TempProjectedCoord.z)))))) {
      pCVar7 = &g_CameraOutOfBoundsCoord;
    }
    else {
      g_TempProjectedCoord.x =
           (int)(((longlong)g_TempProjectedCoord.x *
                 (longlong)(light_source->base).saved_viewport_rect.left) /
                (longlong)g_TempProjectedCoord.z) + (light_source->base).saved_viewport_rect.right;
      g_TempProjectedCoord.y =
           (int)(((longlong)g_TempProjectedCoord.y *
                 (longlong)(light_source->base).saved_viewport_rect.top) /
                (longlong)g_TempProjectedCoord.z) + (light_source->base).saved_viewport_rect.bottom;
      pCVar7 = &g_TempProjectedCoord;
    }
    if (((0 < pCVar7->z) &&
        (light_source->shadow_depth_buffer
         [(pCVar7->x >> 0x10) + light_source->shadow_map_width * (pCVar7->y >> 0x10)] != 0)) &&
       (fVar5 = (float)pCVar7->z * (float)g_LightScaleFactor,
       fVar5 < (light_source->base).max_distance)) {
      return (int)ROUND((float)intensity *
                        (((light_source->base).max_distance - fVar5) /
                        (light_source->base).max_distance));
    }
    return 0;
  }
  iVar8 = world_pos->x - (light_source->base).camera_origin.x;
  iVar9 = world_pos->y - (light_source->base).camera_origin.y;
  iVar6 = world_pos->z - (light_source->base).camera_origin.z;
  lVar2 = (longlong)(light_source->base).source_matrix.m[0].z * (longlong)iVar8;
  lVar3 = (longlong)(light_source->base).source_matrix.m[1].z * (longlong)iVar9;
  lVar4 = (longlong)(light_source->base).source_matrix.m[2].z * (longlong)iVar6;
  g_TempProjectedCoord.z =
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
       ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  if ((((g_TempProjectedCoord.z < 1) ||
       (lVar2 = (longlong)(light_source->base).source_matrix.m[0].x * (longlong)iVar8,
       lVar3 = (longlong)(light_source->base).source_matrix.m[1].x * (longlong)iVar9,
       lVar4 = (longlong)(light_source->base).source_matrix.m[2].x * (longlong)iVar6,
       g_TempProjectedCoord.x =
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10),
       g_TempProjectedCoord.z <= g_TempProjectedCoord.x)) ||
      (g_TempProjectedCoord.x <= -g_TempProjectedCoord.z)) ||
     ((lVar2 = (longlong)(light_source->base).source_matrix.m[0].y * (longlong)iVar8,
      lVar3 = (longlong)(light_source->base).source_matrix.m[1].y * (longlong)iVar9,
      lVar4 = (longlong)(light_source->base).source_matrix.m[2].y * (longlong)iVar6,
      g_TempProjectedCoord.y =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10),
      g_TempProjectedCoord.z <= g_TempProjectedCoord.y ||
      (g_TempProjectedCoord.y <= -g_TempProjectedCoord.z)))) {
    pCVar7 = &g_CameraOutOfBoundsCoord;
  }
  else {
    g_TempProjectedCoord.x =
         (int)(((longlong)g_TempProjectedCoord.x *
               (longlong)(light_source->base).saved_viewport_rect.left) /
              (longlong)g_TempProjectedCoord.z) + (light_source->base).saved_viewport_rect.right;
    g_TempProjectedCoord.y =
         (int)(((longlong)g_TempProjectedCoord.y *
               (longlong)(light_source->base).saved_viewport_rect.top) /
              (longlong)g_TempProjectedCoord.z) + (light_source->base).saved_viewport_rect.bottom;
    pCVar7 = &g_TempProjectedCoord;
  }
  if (pCVar7->z < 1) {
    return 0;
  }
  local_18 = 1;
  uVar10 = 0;
  if (pCVar7->z <
      (int)(light_source->shadow_depth_buffer
            [(pCVar7->x >> 0x10) + light_source->shadow_map_width * (pCVar7->y >> 0x10)] + 0x90)) {
    lVar2 = (longlong)
            (int)((uint)light_source->precomputed_lighting_textures
                        [((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                          light_source->teture_coord_mask) <<
                         ((byte)light_source->texture_row_shift & 0x1f)) +
                         (light_source->teture_coord_mask &
                         pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
            (longlong)intensity;
    uVar10 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  }
  psVar1 = (short *)((int)&pCVar7->x + 2);
  *psVar1 = *psVar1 + 1;
  iVar6 = pCVar7->x >> 0x10;
  if (iVar6 < light_source->shadow_map_width) {
    if (pCVar7->z <
        (int)(light_source->shadow_depth_buffer
              [iVar6 + (pCVar7->y >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar2 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [(light_source->teture_coord_mask &
                           pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f)) +
                           ((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->teture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    local_18 = 2;
  }
  iVar8 = pCVar7->x + -0x20000;
  iVar6 = iVar8 >> 0x10;
  pCVar7->x = iVar8;
  if (0 < iVar6) {
    if (pCVar7->z <
        (int)(light_source->shadow_depth_buffer
              [iVar6 + (pCVar7->y >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar2 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->teture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f)) +
                           (light_source->teture_coord_mask &
                           pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  *(short *)((int)&pCVar7->y + 2) = *(short *)((int)&pCVar7->y + 2) + 1;
  *(short *)((int)&pCVar7->x + 2) = *(short *)((int)&pCVar7->x + 2) + 1;
  iVar6 = pCVar7->y >> 0x10;
  if (iVar6 < light_source->shadow_map_height) {
    if (pCVar7->z <
        (int)(light_source->shadow_depth_buffer
              [(pCVar7->x >> 0x10) + light_source->shadow_map_width * iVar6] + 0x90)) {
      lVar2 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->teture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f)) +
                           (light_source->teture_coord_mask &
                           pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  iVar6 = pCVar7->y + -0x20000;
  pCVar7->y = iVar6;
  if (0 < iVar6) {
    if (pCVar7->z <
        (int)(light_source->shadow_depth_buffer
              [(pCVar7->x >> 0x10) + (iVar6 >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar2 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [(light_source->teture_coord_mask &
                           pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f)) +
                           ((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->teture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  return (int)uVar10 / local_18;
}


// Assembly code:
// 0044e790: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
// 0044e791: PUSH ESI
// 0044e792: PUSH EDI
// 0044e793: PUSH EBP
// 0044e794: MOV EBP,ESP
// 0044e796: SUB ESP,0x28
// 0044e799: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044e79c: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0044e79f: CMP dword ptr [ESI + 0x1cd0],0x0
// 0044e7a6: JNZ 0x0044e98b
//   XREF to: 0044e98b (CONDITIONAL_JUMP)
// 0044e7ac: MOV EBX,dword ptr [EAX]
// 0044e7ae: MOV EDI,dword ptr [ESI + 0x16c]
// 0044e7b4: MOV EDX,dword ptr [ESI + 0x170]
// 0044e7ba: SUB EBX,EDI
// 0044e7bc: MOV ECX,dword ptr [ESI + 0x174]
// 0044e7c2: MOV dword ptr [EBP + -0x28],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 0044e7c5: MOV EBX,dword ptr [EAX + 0x4]
// 0044e7c8: MOV EAX,dword ptr [EAX + 0x8]
// 0044e7cb: SUB EBX,EDX
// 0044e7cd: SUB EAX,ECX
// 0044e7cf: MOV EDX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0044e7d2: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0044e7d5: MOV EAX,dword ptr [ESI + 0x180]
// 0044e7db: MOV dword ptr [EBP + -0x24],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 0044e7de: IMUL EDX
// 0044e7e0: SHRD EAX,EDX,0x10
// 0044e7e4: MOV EDX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0044e7e7: MOV EBX,EAX
// 0044e7e9: MOV EAX,dword ptr [ESI + 0x18c]
// 0044e7ef: IMUL EDX
// 0044e7f1: SHRD EAX,EDX,0x10
// 0044e7f5: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0044e7f8: ADD EBX,EAX
// 0044e7fa: MOV EAX,dword ptr [ESI + 0x198]
// 0044e800: IMUL EDX
// 0044e802: SHRD EAX,EDX,0x10
// 0044e806: ADD EBX,EAX
// 0044e808: MOV dword ptr [0x03f9c178],EBX
//   XREF to: 03f9c178 (WRITE)
// 0044e80e: TEST EBX,EBX
// 0044e810: JLE 0x0044e855
//   XREF to: 0044e855 (CONDITIONAL_JUMP)
// 0044e812: MOV EDX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0044e815: MOV EAX,dword ptr [ESI + 0x178]
// 0044e81b: IMUL EDX
// 0044e81d: SHRD EAX,EDX,0x10
// 0044e821: MOV EDX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0044e824: MOV EBX,EAX
// 0044e826: MOV EAX,dword ptr [ESI + 0x184]
// 0044e82c: IMUL EDX
// 0044e82e: SHRD EAX,EDX,0x10
// 0044e832: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0044e835: ADD EBX,EAX
// 0044e837: MOV EAX,dword ptr [ESI + 0x190]
// 0044e83d: IMUL EDX
// 0044e83f: SHRD EAX,EDX,0x10
// 0044e843: ADD EBX,EAX
// 0044e845: MOV EDI,dword ptr [0x03f9c178]
//   XREF to: 03f9c178 (READ)
// 0044e84b: MOV dword ptr [0x03f9c170],EBX
//   XREF to: 03f9c170 (WRITE)
// 0044e851: CMP EBX,EDI
// 0044e853: JL 0x0044e8af
//   XREF to: 0044e8af (CONDITIONAL_JUMP)
// 0044e855: MOV EAX,0x151bf98
//   Label: LAB_0044e855
//   XREF to: 0151bf98 (DATA)
// 0044e85a: CMP dword ptr [EAX + 0x8],0x0
//   Label: LAB_0044e85a
//   XREF to: 0151bfa0 (READ)
//   XREF to: 03f9c178 (READ)
// 0044e85e: JLE 0x0044e8a6
//   XREF to: 0044e8a6 (CONDITIONAL_JUMP)
// 0044e860: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 0151bf9c (READ)
//   XREF to: 03f9c174 (READ)
// 0044e863: MOV EBX,dword ptr [ESI + 0x1cc0]
// 0044e869: SAR EDX,0x10
// 0044e86c: IMUL EBX,EDX
// 0044e86f: MOV EDX,dword ptr [EAX]
//   XREF to: 0151bf98 (READ)
//   XREF to: 03f9c170 (READ)
// 0044e871: SAR EDX,0x10
// 0044e874: ADD EDX,EBX
// 0044e876: MOV EBX,dword ptr [ESI + 0x2f94]
// 0044e87c: MOV DX,word ptr [EBX + EDX*0x2]
// 0044e880: AND EDX,0xffff
// 0044e886: JZ 0x0044e8a6
//   XREF to: 0044e8a6 (CONDITIONAL_JUMP)
// 0044e888: FILD dword ptr [EAX + 0x8]
//   XREF to: 0151bfa0 (READ)
//   XREF to: 03f9c178 (READ)
// 0044e88b: FMUL double ptr [0x0061a122]
//   XREF to: 0061a122 (READ)
// 0044e891: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0044e894: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044e897: FCOMP float ptr [ESI + 0x140]
// 0044e89d: FNSTSW AX
// 0044e89f: SAHF
// 0044e8a0: JC 0x0044e954
//   XREF to: 0044e954 (CONDITIONAL_JUMP)
// 0044e8a6: XOR EAX,EAX
//   Label: LAB_0044e8a6
// 0044e8a8: MOV ESP,EBP
// 0044e8aa: POP EBP
// 0044e8ab: POP EDI
// 0044e8ac: POP ESI
// 0044e8ad: POP EBX
// 0044e8ae: RET
// 0044e8af: MOV EAX,EDI
//   Label: LAB_0044e8af
// 0044e8b1: NEG EAX
// 0044e8b3: CMP EAX,EBX
// 0044e8b5: JGE 0x0044e855
//   XREF to: 0044e855 (CONDITIONAL_JUMP)
// 0044e8b7: MOV EDX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0044e8ba: MOV EAX,dword ptr [ESI + 0x17c]
// 0044e8c0: IMUL EDX
// 0044e8c2: SHRD EAX,EDX,0x10
// 0044e8c6: MOV EDX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0044e8c9: MOV EBX,EAX
// 0044e8cb: MOV EAX,dword ptr [ESI + 0x188]
// 0044e8d1: IMUL EDX
// 0044e8d3: SHRD EAX,EDX,0x10
// 0044e8d7: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0044e8da: ADD EBX,EAX
// 0044e8dc: MOV EAX,dword ptr [ESI + 0x194]
// 0044e8e2: IMUL EDX
// 0044e8e4: SHRD EAX,EDX,0x10
// 0044e8e8: ADD EBX,EAX
// 0044e8ea: MOV ECX,dword ptr [0x03f9c178]
//   XREF to: 03f9c178 (READ)
// 0044e8f0: MOV dword ptr [0x03f9c174],EBX
//   XREF to: 03f9c174 (WRITE)
// 0044e8f6: CMP EBX,ECX
// 0044e8f8: JGE 0x0044e855
//   XREF to: 0044e855 (CONDITIONAL_JUMP)
// 0044e8fe: MOV EAX,ECX
// 0044e900: NEG EAX
// 0044e902: CMP EAX,EBX
// 0044e904: JGE 0x0044e855
//   XREF to: 0044e855 (CONDITIONAL_JUMP)
// 0044e90a: MOV EAX,[0x03f9c170]
//   XREF to: 03f9c170 (READ)
// 0044e90f: MOV EBX,ECX
// 0044e911: MOV EDX,dword ptr [ESI + 0x1c0]
// 0044e917: IMUL EDX
// 0044e919: IDIV EBX
// 0044e91b: MOV EDX,dword ptr [ESI + 0x1c8]
// 0044e921: ADD EAX,EDX
// 0044e923: MOV EBX,dword ptr [0x03f9c178]
//   XREF to: 03f9c178 (READ)
// 0044e929: MOV [0x03f9c170],EAX
//   XREF to: 03f9c170 (WRITE)
// 0044e92e: MOV EDX,dword ptr [ESI + 0x1c4]
// 0044e934: MOV EAX,[0x03f9c174]
//   XREF to: 03f9c174 (READ)
// 0044e939: IMUL EDX
// 0044e93b: IDIV EBX
// 0044e93d: MOV EDX,dword ptr [ESI + 0x1cc]
// 0044e943: ADD EAX,EDX
// 0044e945: MOV [0x03f9c174],EAX
//   XREF to: 03f9c174 (WRITE)
// 0044e94a: MOV EAX,0x3f9c170
//   XREF to: 03f9c170 (DATA)
// 0044e94f: JMP 0x0044e85a
//   XREF to: 0044e85a (UNCONDITIONAL_JUMP)
// 0044e954: FLD float ptr [ESI + 0x140]
//   Label: LAB_0044e954
// 0044e95a: FSUB float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044e95d: FDIV float ptr [ESI + 0x140]
// 0044e963: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0044e966: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044e969: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044e96c: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0044e96f: FMUL float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044e972: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0044e975: FLD float ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 0044e97b: FISTP dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (WRITE)
// 0044e981: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044e984: MOV ESP,EBP
// 0044e986: POP EBP
// 0044e987: POP EDI
// 0044e988: POP ESI
// 0044e989: POP EBX
// 0044e98a: RET
// 0044e98b: MOV EBX,dword ptr [EAX]
//   Label: LAB_0044e98b
// 0044e98d: MOV ECX,dword ptr [ESI + 0x16c]
// 0044e993: MOV EDI,dword ptr [ESI + 0x170]
// 0044e999: SUB EBX,ECX
// 0044e99b: MOV EDX,dword ptr [ESI + 0x174]
// 0044e9a1: MOV dword ptr [EBP + -0x1c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0044e9a4: MOV EBX,dword ptr [EAX + 0x4]
// 0044e9a7: MOV EAX,dword ptr [EAX + 0x8]
// 0044e9aa: SUB EBX,EDI
// 0044e9ac: SUB EAX,EDX
// 0044e9ae: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0044e9b1: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044e9b4: MOV EAX,dword ptr [ESI + 0x180]
// 0044e9ba: MOV dword ptr [EBP + -0x18],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0044e9bd: IMUL EDX
// 0044e9bf: SHRD EAX,EDX,0x10
// 0044e9c3: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0044e9c6: MOV EBX,EAX
// 0044e9c8: MOV EAX,dword ptr [ESI + 0x18c]
// 0044e9ce: IMUL EDX
// 0044e9d0: SHRD EAX,EDX,0x10
// 0044e9d4: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0044e9d7: ADD EBX,EAX
// 0044e9d9: MOV EAX,dword ptr [ESI + 0x198]
// 0044e9df: IMUL EDX
// 0044e9e1: SHRD EAX,EDX,0x10
// 0044e9e5: ADD EBX,EAX
// 0044e9e7: MOV dword ptr [0x03f9c178],EBX
//   XREF to: 03f9c178 (WRITE)
// 0044e9ed: TEST EBX,EBX
// 0044e9ef: JLE 0x0044ea3a
//   XREF to: 0044ea3a (CONDITIONAL_JUMP)
// 0044e9f1: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0044e9f4: MOV EAX,dword ptr [ESI + 0x178]
// 0044e9fa: IMUL EDX
// 0044e9fc: SHRD EAX,EDX,0x10
// 0044ea00: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0044ea03: MOV EBX,EAX
// 0044ea05: MOV EAX,dword ptr [ESI + 0x184]
// 0044ea0b: IMUL EDX
// 0044ea0d: SHRD EAX,EDX,0x10
// 0044ea11: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0044ea14: ADD EBX,EAX
// 0044ea16: MOV EAX,dword ptr [ESI + 0x190]
// 0044ea1c: IMUL EDX
// 0044ea1e: SHRD EAX,EDX,0x10
// 0044ea22: ADD EBX,EAX
// 0044ea24: MOV dword ptr [0x03f9c170],EBX
//   XREF to: 03f9c170 (WRITE)
// 0044ea2a: MOV EAX,EBX
// 0044ea2c: MOV EBX,dword ptr [0x03f9c178]
//   XREF to: 03f9c178 (READ)
// 0044ea32: CMP EAX,EBX
// 0044ea34: JL 0x0044ecec
//   XREF to: 0044ecec (CONDITIONAL_JUMP)
// 0044ea3a: MOV EAX,0x151bf98
//   Label: LAB_0044ea3a
//   XREF to: 0151bf98 (DATA)
// 0044ea3f: MOV EDI,dword ptr [EAX + 0x8]
//   Label: LAB_0044ea3f
//   XREF to: 0151bfa0 (READ)
//   XREF to: 03f9c178 (READ)
// 0044ea42: MOV EBX,EAX
// 0044ea44: TEST EDI,EDI
// 0044ea46: JLE 0x0044e8a6
//   XREF to: 0044e8a6 (CONDITIONAL_JUMP)
// 0044ea4c: MOV dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 0044ea53: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 0151bf9c (READ)
//   XREF to: 03f9c174 (READ)
// 0044ea56: MOV ECX,dword ptr [ESI + 0x1cc0]
// 0044ea5c: SAR EDX,0x10
// 0044ea5f: IMUL ECX,EDX
// 0044ea62: MOV EDX,dword ptr [EAX]
//   XREF to: 0151bf98 (READ)
//   XREF to: 03f9c170 (READ)
// 0044ea64: SAR EDX,0x10
// 0044ea67: ADD EDX,ECX
// 0044ea69: MOV ECX,dword ptr [ESI + 0x2f94]
// 0044ea6f: ADD EDX,EDX
// 0044ea71: ADD EDX,ECX
// 0044ea73: XOR EDI,EDI
// 0044ea75: MOV DX,word ptr [EDX]
// 0044ea78: AND EDX,0xffff
// 0044ea7e: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 0151bfa0 (READ)
// 0044ea81: ADD EDX,0x90
// 0044ea87: CMP EDX,ECX
// 0044ea89: JG 0x0044ed9b
//   XREF to: 0044ed9b (CONDITIONAL_JUMP)
// 0044ea8f: INC word ptr [EBX + 0x2]
//   Label: LAB_0044ea8f
//   XREF to: 0151bf9a (READ_WRITE)
// 0044ea93: MOV EAX,dword ptr [EBX]
//   XREF to: 0151bf98 (READ)
// 0044ea95: MOV EDX,dword ptr [ESI + 0x1cc0]
// 0044ea9b: SAR EAX,0x10
// 0044ea9e: CMP EAX,EDX
// 0044eaa0: JGE 0x0044eb1a
//   XREF to: 0044eb1a (CONDITIONAL_JUMP)
// 0044eaa2: MOV EDX,dword ptr [EBX + 0x4]
//   XREF to: 0151bf9c (READ)
// 0044eaa5: MOV ECX,dword ptr [ESI + 0x1cc0]
// 0044eaab: SAR EDX,0x10
// 0044eaae: IMUL EDX,ECX
// 0044eab1: ADD EAX,EDX
// 0044eab3: MOV EDX,dword ptr [ESI + 0x2f94]
// 0044eab9: MOV AX,word ptr [EDX + EAX*0x2]
// 0044eabd: AND EAX,0xffff
// 0044eac2: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 0151bfa0 (READ)
// 0044eac5: ADD EAX,0x90
// 0044eaca: CMP EAX,EDX
// 0044eacc: JLE 0x0044eb17
//   XREF to: 0044eb17 (CONDITIONAL_JUMP)
// 0044eace: MOV EAX,dword ptr [EBX]
//   XREF to: 0151bf98 (READ)
// 0044ead0: MOV CL,byte ptr [ESI + 0x1cc8]
// 0044ead6: MOV EDX,dword ptr [ESI + 0x1c68]
// 0044eadc: SAR EAX,CL
// 0044eade: MOV CL,byte ptr [ESI + 0x1ccc]
// 0044eae4: AND EDX,EAX
// 0044eae6: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 0151bf9c (READ)
// 0044eae9: SAR EAX,CL
// 0044eaeb: AND EAX,dword ptr [ESI + 0x1c68]
// 0044eaf1: MOV CL,byte ptr [ESI + 0x1c60]
// 0044eaf7: SHL EAX,CL
// 0044eaf9: ADD EDX,EAX
// 0044eafb: MOV EAX,dword ptr [ESI + 0x1c54]
// 0044eb01: MOV AL,byte ptr [EDX + EAX*0x1]
// 0044eb04: AND EAX,0xff
// 0044eb09: SHL EAX,0xa
// 0044eb0c: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044eb0f: IMUL EDX
// 0044eb11: SHRD EAX,EDX,0x10
// 0044eb15: ADD EDI,EAX
// 0044eb17: INC dword ptr [EBP + -0x8]
//   Label: LAB_0044eb17
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0044eb1a: MOV EDX,dword ptr [EBX]
//   Label: LAB_0044eb1a
//   XREF to: 0151bf98 (READ)
// 0044eb1c: SUB EDX,0x20000
// 0044eb22: MOV EAX,EDX
// 0044eb24: SAR EAX,0x10
// 0044eb27: MOV dword ptr [EBX],EDX
//   XREF to: 0151bf98 (WRITE)
// 0044eb29: TEST EAX,EAX
// 0044eb2b: JLE 0x0044ebac
//   XREF to: 0044ebac (CONDITIONAL_JUMP)
// 0044eb31: MOV EDX,dword ptr [EBX + 0x4]
//   XREF to: 0151bf9c (READ)
// 0044eb34: MOV ECX,dword ptr [ESI + 0x1cc0]
// 0044eb3a: SAR EDX,0x10
// 0044eb3d: IMUL EDX,ECX
// 0044eb40: ADD EAX,EDX
// 0044eb42: LEA EDX,[EAX + EAX*0x1]
// 0044eb45: MOV EAX,dword ptr [ESI + 0x2f94]
// 0044eb4b: MOV AX,word ptr [EDX + EAX*0x1]
// 0044eb4f: AND EAX,0xffff
// 0044eb54: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 0151bfa0 (READ)
// 0044eb57: ADD EAX,0x90
// 0044eb5c: CMP EAX,EDX
// 0044eb5e: JLE 0x0044eba9
//   XREF to: 0044eba9 (CONDITIONAL_JUMP)
// 0044eb60: MOV EAX,dword ptr [EBX]
//   XREF to: 0151bf98 (READ)
// 0044eb62: MOV CL,byte ptr [ESI + 0x1cc8]
// 0044eb68: MOV EDX,dword ptr [ESI + 0x1c68]
// 0044eb6e: SAR EAX,CL
// 0044eb70: MOV CL,byte ptr [ESI + 0x1ccc]
// 0044eb76: AND EDX,EAX
// 0044eb78: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 0151bf9c (READ)
// 0044eb7b: SAR EAX,CL
// 0044eb7d: AND EAX,dword ptr [ESI + 0x1c68]
// 0044eb83: MOV CL,byte ptr [ESI + 0x1c60]
// 0044eb89: SHL EAX,CL
// 0044eb8b: ADD EAX,EDX
// 0044eb8d: MOV EDX,dword ptr [ESI + 0x1c54]
// 0044eb93: MOV AL,byte ptr [EDX + EAX*0x1]
// 0044eb96: AND EAX,0xff
// 0044eb9b: SHL EAX,0xa
// 0044eb9e: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044eba1: IMUL EDX
// 0044eba3: SHRD EAX,EDX,0x10
// 0044eba7: ADD EDI,EAX
// 0044eba9: INC dword ptr [EBP + -0x8]
//   Label: LAB_0044eba9
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0044ebac: MOV AX,word ptr [EBX + 0x6]
//   Label: LAB_0044ebac
//   XREF to: 0151bf9e (READ)
// 0044ebb0: MOV CX,word ptr [EBX + 0x2]
//   XREF to: 0151bf9a (READ)
// 0044ebb4: INC EAX
// 0044ebb5: INC ECX
// 0044ebb6: MOV word ptr [EBX + 0x6],AX
//   XREF to: 0151bf9e (WRITE)
// 0044ebba: MOV word ptr [EBX + 0x2],CX
//   XREF to: 0151bf9a (WRITE)
// 0044ebbe: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 0151bf9c (READ)
// 0044ebc1: MOV EDX,dword ptr [ESI + 0x1cc4]
// 0044ebc7: SAR EAX,0x10
// 0044ebca: CMP EAX,EDX
// 0044ebcc: JGE 0x0044ec51
//   XREF to: 0044ec51 (CONDITIONAL_JUMP)
// 0044ebd2: MOV EDX,dword ptr [ESI + 0x1cc0]
// 0044ebd8: IMUL EDX,EAX
// 0044ebdb: MOV EAX,dword ptr [EBX]
//   XREF to: 0151bf98 (READ)
// 0044ebdd: SAR EAX,0x10
// 0044ebe0: ADD EAX,EDX
// 0044ebe2: MOV EDX,dword ptr [ESI + 0x2f94]
// 0044ebe8: MOV AX,word ptr [EDX + EAX*0x2]
// 0044ebec: AND EAX,0xffff
// 0044ebf1: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 0151bfa0 (READ)
// 0044ebf4: ADD EAX,0x90
// 0044ebf9: CMP EAX,ECX
// 0044ebfb: JLE 0x0044ec4e
//   XREF to: 0044ec4e (CONDITIONAL_JUMP)
// 0044ebfd: MOV EAX,dword ptr [EBX]
//   XREF to: 0151bf98 (READ)
// 0044ebff: MOV CL,byte ptr [ESI + 0x1cc8]
// 0044ec05: MOV EDX,dword ptr [ESI + 0x1c68]
// 0044ec0b: SAR EAX,CL
// 0044ec0d: AND EDX,EAX
// 0044ec0f: MOV CL,byte ptr [ESI + 0x1ccc]
// 0044ec15: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044ec18: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 0151bf9c (READ)
// 0044ec1b: MOV EDX,dword ptr [ESI + 0x1c68]
// 0044ec21: SAR EAX,CL
// 0044ec23: MOV CL,byte ptr [ESI + 0x1c60]
// 0044ec29: AND EAX,EDX
// 0044ec2b: SHL EAX,CL
// 0044ec2d: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0044ec30: MOV EDX,dword ptr [ESI + 0x1c54]
// 0044ec36: ADD EAX,ECX
// 0044ec38: MOV AL,byte ptr [EDX + EAX*0x1]
// 0044ec3b: AND EAX,0xff
// 0044ec40: SHL EAX,0xa
// 0044ec43: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044ec46: IMUL EDX
// 0044ec48: SHRD EAX,EDX,0x10
// 0044ec4c: ADD EDI,EAX
// 0044ec4e: INC dword ptr [EBP + -0x8]
//   Label: LAB_0044ec4e
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0044ec51: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_0044ec51
//   XREF to: 0151bf9c (READ)
// 0044ec54: SUB EDX,0x20000
// 0044ec5a: MOV dword ptr [EBX + 0x4],EDX
//   XREF to: 0151bf9c (WRITE)
// 0044ec5d: TEST EDX,EDX
// 0044ec5f: JLE 0x0044ecd9
//   XREF to: 0044ecd9 (CONDITIONAL_JUMP)
// 0044ec61: SAR EDX,0x10
// 0044ec64: IMUL EDX,dword ptr [ESI + 0x1cc0]
// 0044ec6b: MOV EAX,dword ptr [EBX]
//   XREF to: 0151bf98 (READ)
// 0044ec6d: SAR EAX,0x10
// 0044ec70: ADD EAX,EDX
// 0044ec72: MOV EDX,dword ptr [ESI + 0x2f94]
// 0044ec78: MOV AX,word ptr [EDX + EAX*0x2]
// 0044ec7c: AND EAX,0xffff
// 0044ec81: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 0151bfa0 (READ)
// 0044ec84: ADD EAX,0x90
// 0044ec89: CMP EAX,EDX
// 0044ec8b: JLE 0x0044ecd6
//   XREF to: 0044ecd6 (CONDITIONAL_JUMP)
// 0044ec8d: MOV EAX,dword ptr [EBX]
//   XREF to: 0151bf98 (READ)
// 0044ec8f: MOV CL,byte ptr [ESI + 0x1cc8]
// 0044ec95: MOV EDX,dword ptr [ESI + 0x1c68]
// 0044ec9b: SAR EAX,CL
// 0044ec9d: MOV CL,byte ptr [ESI + 0x1ccc]
// 0044eca3: AND EDX,EAX
// 0044eca5: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 0151bf9c (READ)
// 0044eca8: SAR EAX,CL
// 0044ecaa: AND EAX,dword ptr [ESI + 0x1c68]
// 0044ecb0: MOV CL,byte ptr [ESI + 0x1c60]
// 0044ecb6: SHL EAX,CL
// 0044ecb8: ADD EDX,EAX
// 0044ecba: MOV EAX,dword ptr [ESI + 0x1c54]
// 0044ecc0: MOV AL,byte ptr [EDX + EAX*0x1]
// 0044ecc3: AND EAX,0xff
// 0044ecc8: SHL EAX,0xa
// 0044eccb: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044ecce: IMUL EDX
// 0044ecd0: SHRD EAX,EDX,0x10
// 0044ecd4: ADD EDI,EAX
// 0044ecd6: INC dword ptr [EBP + -0x8]
//   Label: LAB_0044ecd6
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0044ecd9: MOV ESI,dword ptr [EBP + -0x8]
//   Label: LAB_0044ecd9
//   XREF to: Stack[-0x18] (READ)
// 0044ecdc: MOV EDX,EDI
// 0044ecde: MOV EAX,EDI
// 0044ece0: SAR EDX,0x1f
// 0044ece3: IDIV ESI
// 0044ece5: MOV ESP,EBP
// 0044ece7: POP EBP
// 0044ece8: POP EDI
// 0044ece9: POP ESI
// 0044ecea: POP EBX
// 0044eceb: RET
// 0044ecec: MOV EAX,EBX
//   Label: LAB_0044ecec
// 0044ecee: MOV EDI,dword ptr [0x03f9c170]
//   XREF to: 03f9c170 (READ)
// 0044ecf4: NEG EAX
// 0044ecf6: CMP EAX,EDI
// 0044ecf8: JGE 0x0044ea3a
//   XREF to: 0044ea3a (CONDITIONAL_JUMP)
// 0044ecfe: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0044ed01: MOV EAX,dword ptr [ESI + 0x17c]
// 0044ed07: IMUL EDX
// 0044ed09: SHRD EAX,EDX,0x10
// 0044ed0d: MOV EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0044ed10: MOV EBX,EAX
// 0044ed12: MOV EAX,dword ptr [ESI + 0x188]
// 0044ed18: IMUL EDX
// 0044ed1a: SHRD EAX,EDX,0x10
// 0044ed1e: MOV EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0044ed21: ADD EBX,EAX
// 0044ed23: MOV EAX,dword ptr [ESI + 0x194]
// 0044ed29: IMUL EDX
// 0044ed2b: SHRD EAX,EDX,0x10
// 0044ed2f: ADD EBX,EAX
// 0044ed31: MOV EDX,dword ptr [0x03f9c178]
//   XREF to: 03f9c178 (READ)
// 0044ed37: MOV dword ptr [0x03f9c174],EBX
//   XREF to: 03f9c174 (WRITE)
// 0044ed3d: CMP EBX,EDX
// 0044ed3f: JGE 0x0044ea3a
//   XREF to: 0044ea3a (CONDITIONAL_JUMP)
// 0044ed45: MOV EAX,EDX
// 0044ed47: NEG EAX
// 0044ed49: CMP EAX,EBX
// 0044ed4b: JGE 0x0044ea3a
//   XREF to: 0044ea3a (CONDITIONAL_JUMP)
// 0044ed51: MOV EAX,[0x03f9c170]
//   XREF to: 03f9c170 (READ)
// 0044ed56: MOV EBX,EDX
// 0044ed58: MOV EDX,dword ptr [ESI + 0x1c0]
// 0044ed5e: IMUL EDX
// 0044ed60: IDIV EBX
// 0044ed62: MOV EDX,dword ptr [ESI + 0x1c8]
// 0044ed68: ADD EAX,EDX
// 0044ed6a: MOV EBX,dword ptr [0x03f9c178]
//   XREF to: 03f9c178 (READ)
// 0044ed70: MOV [0x03f9c170],EAX
//   XREF to: 03f9c170 (WRITE)
// 0044ed75: MOV EDX,dword ptr [ESI + 0x1c4]
// 0044ed7b: MOV EAX,[0x03f9c174]
//   XREF to: 03f9c174 (READ)
// 0044ed80: IMUL EDX
// 0044ed82: IDIV EBX
// 0044ed84: MOV EDX,dword ptr [ESI + 0x1cc]
// 0044ed8a: ADD EAX,EDX
// 0044ed8c: MOV [0x03f9c174],EAX
//   XREF to: 03f9c174 (WRITE)
// 0044ed91: MOV EAX,0x3f9c170
//   XREF to: 03f9c170 (DATA)
// 0044ed96: JMP 0x0044ea3f
//   XREF to: 0044ea3f (UNCONDITIONAL_JUMP)
// 0044ed9b: MOV EDI,dword ptr [EAX]
//   Label: LAB_0044ed9b
//   XREF to: 0151bf98 (READ)
// 0044ed9d: MOV CL,byte ptr [ESI + 0x1cc8]
// 0044eda3: MOV EDX,dword ptr [ESI + 0x1c68]
// 0044eda9: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 0151bf9c (READ)
// 0044edac: SAR EDI,CL
// 0044edae: MOV CL,byte ptr [ESI + 0x1ccc]
// 0044edb4: AND EDX,EDI
// 0044edb6: MOV EDI,dword ptr [ESI + 0x1c68]
// 0044edbc: SAR EAX,CL
// 0044edbe: MOV CL,byte ptr [ESI + 0x1c60]
// 0044edc4: AND EAX,EDI
// 0044edc6: SHL EAX,CL
// 0044edc8: ADD EAX,EDX
// 0044edca: MOV EDX,dword ptr [ESI + 0x1c54]
// 0044edd0: MOV AL,byte ptr [EDX + EAX*0x1]
// 0044edd3: AND EAX,0xff
// 0044edd8: SHL EAX,0xa
// 0044eddb: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044edde: IMUL EDX
// 0044ede0: SHRD EAX,EDX,0x10
// 0044ede4: MOV EDI,EAX
// 0044ede6: JMP 0x0044ea8f
//   XREF to: 0044ea8f (UNCONDITIONAL_JUMP)
