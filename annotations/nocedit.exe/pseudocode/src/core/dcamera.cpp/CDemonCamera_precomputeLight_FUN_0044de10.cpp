// Name: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
// Address: 0044de10
// Address Range: [[0044de10, 0044e356]]
// Convention: __cdecl
// Signature: void * core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
// Cross-references:
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a893 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b6b1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_movscrn_raw_0061a0aa
//   TerminatedCString s_core_dcamera_cpp_0061a0b6
//   TerminatedCString s_CDemonCamera_precomputeL_0061a0ca
//   CVector3i[15360] g_PrecomputedWorldPositions
//   CVector3f[76800] g_PrecomputedSurfaceNormals
//   int g_LightBufferPoolIndex
//   char[25][307200] g_LightBufferPool
//   undefined4 g_LightBufferPool[24][0]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0
//   core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

void * __cdecl
core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
          (CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)

{
  int iVar1;
  char (*pacVar2) [307200];
  int *piVar3;
  CDemonLight *pCVar4;
  ushort *puVar5;
  uint uVar6;
  int *piVar7;
  CVector3i *unaff_EBX;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  uint uVar8;
  int iVar9;
  byte bVar10;
  CVector3i *apCStackY_1850 [1522];
  CVector3i *input_ptr;
  int local_70;
  CVector3i *pCStack_6c;
  int iStack_68;
  undefined4 local_60;
  undefined4 local_5c [2];
  CVector3i local_54;
  CVector3f *local_48;
  CVector3i *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  CVector3i *local_24;
  CVector3i *local_20;
  CVector3i *local_1c;
  int *local_18;
  undefined4 *puStack_14;
  CVector3i *pCVar11;
  
  bVar10 = 0;
  local_40 = 0x80;
  local_3c = 0;
  iVar1 = crt_string_c_strcmp_FUN_005fef20(light_source->filter_name,"movscrn.raw");
  if (iVar1 == 0) {
    local_38 = 1;
    local_3c = 0x100;
  }
  if (rect == (CRect *)0x0) {
    g_LightBufferPool[0x18]._0_4_ = rect;
    g_LightBufferPoolIndex = (int)rect;
  }
  uVar8 = g_LightBufferPoolIndex + 1;
  pacVar2 = g_LightBufferPool + g_LightBufferPoolIndex;
  if (0x18 < uVar8) {
    pacVar2 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = uVar8;
  light_source->corona_visibility_buffers = (int *)pacVar2;
  uVar6 = g_LightBufferPoolIndex + 1;
  pacVar2 = g_LightBufferPool + uVar8;
  if (0x18 < uVar6) {
    pacVar2 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = uVar6;
  light_source->corona_depth_buffer = (int *)pacVar2;
  g_LightBufferPoolIndex = g_LightBufferPoolIndex + 1;
  pacVar2 = g_LightBufferPool + uVar6;
  if (0x18 < (uint)g_LightBufferPoolIndex) {
    pacVar2 = (char (*) [307200])0x0;
  }
  light_source->corona_lightmap_indices = (int *)pacVar2;
  if (((light_source->corona_visibility_buffers == (int *)0x0) ||
      (light_source->corona_depth_buffer == (int *)0x0)) ||
     (light_source->corona_lightmap_indices == (int *)0x0)) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x6ba;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonCamera::precomputeLight - Too many lights visible from camera %s",this_ptr->camera_name);
  }
  core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(light_source);
  if ((rect == (CRect *)0x0) || (this_ptr->framebuffer_height != 0x1e0)) {
    local_70 = this_ptr->display_width + -1;
    pCStack_6c = (CVector3i *)0x0;
    iStack_68 = this_ptr->display_height + -1;
    input_ptr = (CVector3i *)0x0;
  }
  else {
    piVar7 = (int *)((int)rect + (uint)bVar10 * -8 + 4);
    input_ptr = (CVector3i *)rect->left;
    piVar3 = piVar7 + (uint)bVar10 * -2 + 1;
    (&local_70)[(uint)bVar10 * -2] = *piVar7;
    (&pCStack_6c)[(uint)bVar10 * -2 + (uint)bVar10 * -2] = (CVector3i *)*piVar3;
    (&pCStack_6c + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1] =
         (CVector3i *)piVar3[(uint)bVar10 * -2 + 1];
    iVar1 = 0;
    pCVar4 = light_source;
    if (0 < (int)pCStack_6c) {
      do {
        pCVar4->left_extent[0] = 999;
        iVar1 = iVar1 + 1;
        pCVar4->right_extent[0] = 0;
        pCVar4 = (CDemonLight *)&(pCVar4->base).base.position;
      } while (iVar1 < (int)pCStack_6c);
    }
    iVar1 = iStack_68 + 1;
    if (iVar1 < this_ptr->display_height) {
      iVar9 = (int)((light_source->base).base.rotation_matrix.m + -1) + iStack_68 * 4;
      do {
        *(undefined4 *)(iVar9 + 0x14c8) = 999;
        *(undefined4 *)(iVar9 + 0x1888) = 0;
        iVar1 = iVar1 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar1 < this_ptr->display_height);
    }
  }
  local_20 = pCStack_6c;
  local_3c = (int)pCStack_6c;
  if ((int)pCStack_6c <= iStack_68) {
    local_54.z = (int)input_ptr * 0xc;
    local_40 = (int)input_ptr * 4;
    local_38 = (int)pCStack_6c * 0x500;
    local_44 = g_PrecomputedWorldPositions + (int)pCStack_6c * 0x140;
    local_48 = g_PrecomputedSurfaceNormals + (int)pCStack_6c * 0x140;
    local_3c = (int)(light_source->base).base.rotation_matrix.m + (int)pCStack_6c * 4 + -0x10;
    do {
      local_24 = (CVector3i *)((int)&local_44->x + local_54.z);
      local_28 = 999;
      local_1c = (CVector3i *)((int)&local_48->x + local_54.z);
      puStack_14 = (undefined4 *)
                   ((int)light_source->corona_visibility_buffers + local_40 + local_38);
      piVar7 = (int *)((int)light_source->corona_depth_buffer + local_40 + local_38);
      local_2c = 0;
      local_18 = (int *)((int)light_source->corona_lightmap_indices + local_40 + local_38);
      pCVar11 = input_ptr;
      if ((int)input_ptr <= local_70) {
        do {
          if (((((int)pCVar11 < 1) || ((int)local_20 < 1)) ||
              ((iVar1 = (int)pCVar11 * this_ptr->scale_factor,
               iVar9 = this_ptr->framebuffer_width + -2, iVar1 - iVar9 != 0 && iVar9 <= iVar1 ||
               (iVar9 = (int)local_20 * this_ptr->scale_factor,
               iVar1 = this_ptr->framebuffer_height + -2, iVar9 - iVar1 != 0 && iVar1 <= iVar9))))
             || ((local_30 == 0 &&
                 ((float)local_1c->z * (float)(light_source->base).base.rotation_matrix.m[2].z +
                  (float)local_1c->x * (float)(light_source->base).base.rotation_matrix.m[0].z +
                  (float)local_1c->y * (float)(light_source->base).base.rotation_matrix.m[1].z < 0.0
                 )))) {
LAB_0044e06f:
            *puStack_14 = 0;
            *piVar7 = 0;
            piVar3 = local_18;
LAB_0044e087:
            *piVar3 = 0;
          }
          else {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&light_source->base,local_24,input_ptr);
            local_5c[1] = local_60;
            *(undefined4 *)((int)&local_54 + (uint)bVar10 * -8) = local_5c[(uint)bVar10 * -2];
            *(undefined4 *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 4) =
                 local_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if (local_54.z < 1) goto LAB_0044e06f;
            *piVar7 = local_54.z - local_30;
            input_ptr = local_1c;
            puVar5 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
                               (light_source,&local_54,(uchar)unaff_ESI,(uchar)local_1c);
            *unaff_ESI = puVar5;
            if (puVar5 == (ushort *)0x0) {
              pCVar11->x = 0;
              *unaff_ESI = 0;
              piVar3 = piVar7;
              goto LAB_0044e087;
            }
            *piVar7 = ((local_54.z >> ((byte)light_source->shadow_y_shift & 0x1f) &
                       light_source->teture_coord_mask) <<
                      ((byte)light_source->texture_row_shift & 0x1f)) +
                      (local_54.y >> ((byte)light_source->shadow_x_shift & 0x1f) &
                      light_source->teture_coord_mask);
            if ((int)local_24 < (int)unaff_EBX) {
              local_24 = unaff_EBX;
            }
            if ((int)unaff_EBX < (int)local_20) {
              local_20 = unaff_EBX;
            }
          }
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          puStack_14 = puStack_14 + 1;
          piVar7 = piVar7 + 1;
          local_18 = local_18 + 1;
          pCVar11 = (CVector3i *)((int)&pCVar11->x + 1);
        } while ((int)pCVar11 <= local_70);
      }
      local_38 = local_38 + 0x500;
      local_48 = local_48 + 0x140;
      local_44 = local_44 + 0x140;
      *(undefined4 *)(local_3c + 0x14c8) = local_28;
      *(undefined4 *)(local_3c + 0x1888) = local_2c;
      local_3c = local_3c + 4;
      local_20 = (CVector3i *)((int)&local_20->x + 1);
    } while ((int)local_20 <= iStack_68);
  }
  return (CVector3i *)local_3c;
}


// Assembly code:
// 0044de10: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
// 0044de11: PUSH ESI
// 0044de12: PUSH EDI
// 0044de13: PUSH EBP
// 0044de14: MOV EBP,ESP
// 0044de16: SUB ESP,0x6c
// 0044de19: AND ESP,0xfffffff8
// 0044de1c: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044de1f: MOV EDX,0x80
// 0044de24: PUSH 0x61a0aa
//   XREF to: 0061a0aa (DATA)
// 0044de29: LEA EAX,[EBX + 0x1c74]
// 0044de2f: XOR ECX,ECX
// 0044de31: PUSH EAX
// 0044de32: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0044de36: MOV dword ptr [ESP + 0x4c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0044de3a: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0044de3f: ADD ESP,0x8
// 0044de42: TEST EAX,EAX
// 0044de44: JZ 0x0044e141
//   XREF to: 0044e141 (CONDITIONAL_JUMP)
// 0044de4a: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0044de4a
//   XREF to: Stack[0xc] (READ)
// 0044de4d: TEST EAX,EAX
// 0044de4f: JNZ 0x0044de5b
//   XREF to: 0044de5b (CONDITIONAL_JUMP)
// 0044de51: MOV [0x01322208],EAX
//   XREF to: 01322208 (WRITE)
// 0044de56: MOV [0x00c1a204],EAX
//   XREF to: 00c1a204 (WRITE)
// 0044de5b: MOV ESI,dword ptr [0x00c1a204]
//   Label: LAB_0044de5b
//   XREF to: 00c1a204 (READ)
// 0044de61: LEA EAX,[ESI*0x4 + 0x0]
// 0044de68: ADD EAX,ESI
// 0044de6a: SHL EAX,0xc
// 0044de6d: MOV ESI,EAX
// 0044de6f: SHL EAX,0x4
// 0044de72: SUB EAX,ESI
// 0044de74: MOV ESI,dword ptr [0x00c1a204]
//   XREF to: 00c1a204 (READ)
// 0044de7a: INC ESI
// 0044de7b: ADD EAX,0xc1a208
//   XREF to: 00c1a208 (DATA)
// 0044de80: MOV dword ptr [0x00c1a204],ESI
//   XREF to: 00c1a204 (WRITE)
// 0044de86: CMP ESI,0x18
// 0044de89: JBE 0x0044de8d
//   XREF to: 0044de8d (CONDITIONAL_JUMP)
// 0044de8b: XOR EAX,EAX
// 0044de8d: MOV ESI,dword ptr [0x00c1a204]
//   Label: LAB_0044de8d
//   XREF to: 00c1a204 (READ)
// 0044de93: MOV dword ptr [EBX + 0x1c48],EAX
// 0044de99: LEA EAX,[ESI*0x4 + 0x0]
// 0044dea0: ADD EAX,ESI
// 0044dea2: SHL EAX,0xc
// 0044dea5: MOV EDX,dword ptr [0x00c1a204]
//   XREF to: 00c1a204 (READ)
// 0044deab: MOV ESI,EAX
// 0044dead: SHL EAX,0x4
// 0044deb0: INC EDX
// 0044deb1: SUB EAX,ESI
// 0044deb3: MOV dword ptr [0x00c1a204],EDX
//   XREF to: 00c1a204 (WRITE)
// 0044deb9: ADD EAX,0xc1a208
//   XREF to: 00c1a208 (DATA)
// 0044debe: CMP EDX,0x18
// 0044dec1: JBE 0x0044dec5
//   XREF to: 0044dec5 (CONDITIONAL_JUMP)
// 0044dec3: XOR EAX,EAX
// 0044dec5: MOV ESI,dword ptr [0x00c1a204]
//   Label: LAB_0044dec5
//   XREF to: 00c1a204 (READ)
// 0044decb: MOV dword ptr [EBX + 0x1c4c],EAX
// 0044ded1: LEA EAX,[ESI*0x4 + 0x0]
// 0044ded8: ADD EAX,ESI
// 0044deda: SHL EAX,0xc
// 0044dedd: MOV ESI,EAX
// 0044dedf: SHL EAX,0x4
// 0044dee2: SUB EAX,ESI
// 0044dee4: MOV ESI,dword ptr [0x00c1a204]
//   XREF to: 00c1a204 (READ)
// 0044deea: INC ESI
// 0044deeb: ADD EAX,0xc1a208
//   XREF to: 00c1a208 (DATA)
// 0044def0: MOV dword ptr [0x00c1a204],ESI
//   XREF to: 00c1a204 (WRITE)
// 0044def6: CMP ESI,0x18
// 0044def9: JBE 0x0044defd
//   XREF to: 0044defd (CONDITIONAL_JUMP)
// 0044defb: XOR EAX,EAX
// 0044defd: MOV dword ptr [EBX + 0x1c50],EAX
//   Label: LAB_0044defd
// 0044df03: CMP dword ptr [EBX + 0x1c48],0x0
// 0044df0a: JNZ 0x0044e158
//   XREF to: 0044e158 (CONDITIONAL_JUMP)
// 0044df10: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0044df10
//   XREF to: Stack[0x4] (READ)
// 0044df13: ADD EAX,0x40
// 0044df16: PUSH EAX
// 0044df17: MOV ESI,0x61a0b6
//   XREF to: 0061a0b6 (DATA)
// 0044df1c: MOV EDI,0x6ba
// 0044df21: PUSH 0x61a0ca
//   XREF to: 0061a0ca (DATA)
// 0044df26: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0044df2c: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0044df32: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044df37: ADD ESP,0x8
// 0044df3a: PUSH EBX
//   Label: LAB_0044df3a
// 0044df3b: CALL core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0
//   XREF to: 00475fc0 (UNCONDITIONAL_CALL)
// 0044df40: ADD ESP,0x4
// 0044df43: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 0044df47: JNZ 0x0044e177
//   XREF to: 0044e177 (CONDITIONAL_JUMP)
// 0044df4d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0044df4d
//   XREF to: Stack[0x4] (READ)
// 0044df50: MOV EAX,dword ptr [EAX + 0x150]
// 0044df56: DEC EAX
// 0044df57: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0044df5b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044df5e: XOR ESI,ESI
// 0044df60: MOV EAX,dword ptr [EAX + 0x154]
// 0044df66: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x78] (WRITE)
// 0044df6a: DEC EAX
// 0044df6b: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x80] (DATA)
// 0044df6e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0044df72: LEA EAX,[EAX]
// 0044df78: LEA EDX,[EDX]
// 0044df7e: MOV EAX,EAX
// 0044df80: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0044df80
//   XREF to: Stack[-0x78] (READ)
// 0044df84: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x74] (READ)
// 0044df88: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0044df8c: CMP EAX,EDX
// 0044df8e: JG 0x0044e133
//   XREF to: 0044e133 (CONDITIONAL_JUMP)
// 0044df94: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 0044df97: LEA EAX,[ESI*0x4 + 0x0]
// 0044df9e: SUB EAX,ESI
// 0044dfa0: SHL EAX,0x2
// 0044dfa3: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0044dfa7: LEA EAX,[ESI*0x4 + 0x0]
// 0044dfae: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 0044dfb2: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0044dfb6: LEA EAX,[ESI*0x4 + 0x0]
// 0044dfbd: ADD EAX,ESI
// 0044dfbf: SHL EAX,0x8
// 0044dfc2: SHL ESI,0x8
// 0044dfc5: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0044dfc9: MOV EAX,ESI
// 0044dfcb: SHL EAX,0x4
// 0044dfce: SUB EAX,ESI
// 0044dfd0: MOV ESI,EAX
// 0044dfd2: ADD EAX,0x902f74
//   XREF to: 00902f74 (DATA)
// 0044dfd7: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0044dfdb: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 0044dfdf: SHL EAX,0x2
// 0044dfe2: ADD ESI,0xac6d74
//   XREF to: 00ac6d74 (DATA)
// 0044dfe8: ADD EAX,EBX
// 0044dfea: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 0044dfee: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0044dff2: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0044dff2
//   XREF to: Stack[-0x50] (READ)
// 0044dff6: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x58] (READ)
// 0044dffa: ADD EAX,EDX
// 0044dffc: MOV ESI,0x3e7
// 0044e001: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0044e005: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x54] (READ)
// 0044e009: MOV dword ptr [ESP + 0x4c],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0044e00d: ADD EAX,EDX
// 0044e00f: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x44] (READ)
// 0044e013: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0044e017: MOV EAX,dword ptr [EBX + 0x1c48]
// 0044e01d: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x4c] (READ)
// 0044e021: ADD EAX,ESI
// 0044e023: ADD EDX,EAX
// 0044e025: MOV dword ptr [ESP + 0x60],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0044e029: MOV EAX,dword ptr [EBX + 0x1c4c]
// 0044e02f: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x4c] (READ)
// 0044e033: ADD EAX,ESI
// 0044e035: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x7c] (READ)
// 0044e039: ADD EDX,EAX
// 0044e03b: XOR EDI,EDI
// 0044e03d: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044e041: MOV EAX,dword ptr [EBX + 0x1c50]
// 0044e047: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x4c] (READ)
// 0044e04b: ADD EAX,ESI
// 0044e04d: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 0044e051: ADD EDX,EAX
// 0044e053: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 0044e056: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0044e05a: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044e05e: CMP EAX,ECX
// 0044e060: JG 0x0044e0d5
//   XREF to: 0044e0d5 (CONDITIONAL_JUMP)
// 0044e062: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_0044e062
//   XREF to: Stack[-0x18] (READ)
// 0044e066: CMP EAX,0x1
// 0044e069: JGE 0x0044e207
//   XREF to: 0044e207 (CONDITIONAL_JUMP)
// 0044e06f: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_0044e06f
//   XREF to: Stack[-0x20] (READ)
// 0044e073: MOV dword ptr [EAX],0x0
// 0044e079: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 0044e07d: MOV dword ptr [EAX],0x0
// 0044e083: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ)
// 0044e087: MOV dword ptr [EAX],0x0
//   Label: LAB_0044e087
// 0044e08d: MOV ESI,dword ptr [ESP + 0x58]
//   Label: LAB_0044e08d
//   XREF to: Stack[-0x28] (READ)
// 0044e091: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x30] (READ)
// 0044e095: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x20] (READ)
// 0044e099: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 0044e09d: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ)
// 0044e0a1: ADD ESI,0xc
// 0044e0a4: ADD EDI,0xc
// 0044e0a7: ADD EAX,0x4
// 0044e0aa: ADD EDX,0x4
// 0044e0ad: ADD ECX,0x4
// 0044e0b0: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0044e0b4: MOV dword ptr [ESP + 0x50],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0044e0b8: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044e0bc: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044e0c0: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 0044e0c4: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0044e0c8: INC ESI
// 0044e0c9: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x7c] (READ)
// 0044e0cd: MOV dword ptr [ESP + 0x68],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0044e0d1: CMP ESI,EDI
// 0044e0d3: JLE 0x0044e062
//   XREF to: 0044e062 (CONDITIONAL_JUMP)
// 0044e0d5: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_0044e0d5
//   XREF to: Stack[-0x34] (READ)
// 0044e0d9: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x48] (READ)
// 0044e0dd: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x44] (READ)
// 0044e0e1: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x54] (READ)
// 0044e0e5: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x50] (READ)
// 0044e0e9: ADD ECX,0x500
// 0044e0ef: ADD ESI,0xf00
// 0044e0f5: ADD EDI,0xf00
// 0044e0fb: MOV dword ptr [EDX + 0x14c8],EAX
// 0044e101: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x38] (READ)
// 0044e105: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0044e109: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 0044e10d: MOV dword ptr [EDX + 0x1888],EAX
// 0044e113: LEA EAX,[EDX + 0x4]
// 0044e116: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 0044e11a: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x2c] (READ)
// 0044e11e: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x74] (READ)
// 0044e122: INC EDX
// 0044e123: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0044e127: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0044e12b: CMP EDX,ECX
// 0044e12d: JLE 0x0044dff2
//   XREF to: 0044dff2 (CONDITIONAL_JUMP)
// 0044e133: MOV ESP,EBP
//   Label: LAB_0044e133
// 0044e135: POP EBP
// 0044e136: POP EDI
// 0044e137: POP ESI
// 0044e138: POP EBX
// 0044e139: LEA EAX,[EAX]
// 0044e13f: NOP
// 0044e140: RET
// 0044e141: MOV EDI,0x1
//   Label: LAB_0044e141
// 0044e146: MOV ESI,0x100
// 0044e14b: MOV dword ptr [ESP + 0x44],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 0044e14f: MOV dword ptr [ESP + 0x40],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 0044e153: JMP 0x0044de4a
//   XREF to: 0044de4a (UNCONDITIONAL_JUMP)
// 0044e158: CMP dword ptr [EBX + 0x1c4c],0x0
//   Label: LAB_0044e158
// 0044e15f: JZ 0x0044df10
//   XREF to: 0044df10 (CONDITIONAL_JUMP)
// 0044e165: CMP dword ptr [EBX + 0x1c50],0x0
// 0044e16c: JZ 0x0044df10
//   XREF to: 0044df10 (CONDITIONAL_JUMP)
// 0044e172: JMP 0x0044df3a
//   XREF to: 0044df3a (UNCONDITIONAL_JUMP)
// 0044e177: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0044e177
//   XREF to: Stack[0x4] (READ)
// 0044e17a: CMP dword ptr [EAX + 0x148],0x1e0
// 0044e184: JNZ 0x0044df4d
//   XREF to: 0044df4d (CONDITIONAL_JUMP)
// 0044e18a: MOV EDI,ESP
// 0044e18c: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0044e18f: MOVSD ES:EDI,ESI
// 0044e190: MOVSD ES:EDI,ESI
// 0044e191: MOVSD ES:EDI,ESI
// 0044e192: MOVSD ES:EDI,ESI
// 0044e193: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 0044e197: XOR ESI,ESI
// 0044e199: TEST ECX,ECX
// 0044e19b: JLE 0x0044e1c0
//   XREF to: 0044e1c0 (CONDITIONAL_JUMP)
// 0044e19d: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 0044e1a1: MOV EAX,EBX
// 0044e1a3: ADD EAX,0x4
//   Label: LAB_0044e1a3
// 0044e1a6: MOV dword ptr [EAX + 0x14c4],0x3e7
// 0044e1b0: INC ESI
// 0044e1b1: MOV dword ptr [EAX + 0x1884],0x0
// 0044e1bb: CMP ESI,EDX
// 0044e1bd: JL 0x0044e1a3
//   XREF to: 0044e1a3 (CONDITIONAL_JUMP)
// 0044e1bf: NOP
// 0044e1c0: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_0044e1c0
//   XREF to: Stack[-0x74] (READ)
// 0044e1c4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e1c7: INC ESI
// 0044e1c8: CMP ESI,dword ptr [EAX + 0x154]
// 0044e1ce: JGE 0x0044df80
//   XREF to: 0044df80 (CONDITIONAL_JUMP)
// 0044e1d4: LEA EAX,[ESI*0x4 + 0x0]
// 0044e1db: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e1de: ADD EAX,EBX
// 0044e1e0: MOV dword ptr [EAX + 0x14c8],0x3e7
//   Label: LAB_0044e1e0
// 0044e1ea: MOV dword ptr [EAX + 0x1888],0x0
// 0044e1f4: INC ESI
// 0044e1f5: MOV EDI,dword ptr [EDX + 0x154]
// 0044e1fb: ADD EAX,0x4
// 0044e1fe: CMP ESI,EDI
// 0044e200: JL 0x0044e1e0
//   XREF to: 0044e1e0 (CONDITIONAL_JUMP)
// 0044e202: JMP 0x0044df80
//   XREF to: 0044df80 (UNCONDITIONAL_JUMP)
// 0044e207: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_0044e207
//   XREF to: Stack[-0x2c] (READ)
// 0044e20b: CMP EDX,0x1
// 0044e20e: JL 0x0044e06f
//   XREF to: 0044e06f (CONDITIONAL_JUMP)
// 0044e214: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e217: IMUL EAX,dword ptr [ESI + 0x14c]
// 0044e21e: MOV ESI,dword ptr [ESI + 0x144]
// 0044e224: SUB ESI,0x2
// 0044e227: CMP EAX,ESI
// 0044e229: JG 0x0044e06f
//   XREF to: 0044e06f (CONDITIONAL_JUMP)
// 0044e22f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044e232: MOV ESI,EDX
// 0044e234: IMUL ESI,dword ptr [EAX + 0x14c]
// 0044e23b: MOV EAX,dword ptr [EAX + 0x148]
// 0044e241: SUB EAX,0x2
// 0044e244: CMP ESI,EAX
// 0044e246: JG 0x0044e06f
//   XREF to: 0044e06f (CONDITIONAL_JUMP)
// 0044e24c: CMP dword ptr [ESP + 0x44],0x0
//   XREF to: Stack[-0x3c] (READ)
// 0044e251: JZ 0x0044e313
//   XREF to: 0044e313 (CONDITIONAL_JUMP)
// 0044e257: MOV EDX,dword ptr [ESP + 0x50]
//   Label: LAB_0044e257
//   XREF to: Stack[-0x30] (READ)
// 0044e25b: PUSH EDX
// 0044e25c: PUSH EBX
// 0044e25d: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 0044e261: LEA EDI,[ESP + 0x24]
//   XREF to: Stack[-0x64] (DATA)
// 0044e265: CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)
// 0044e26a: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 0044e26e: ADD ESP,0x8
// 0044e271: MOVSD ES:EDI,ESI
// 0044e272: MOVSD ES:EDI,ESI
// 0044e273: MOVSD ES:EDI,ESI
// 0044e274: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x5c] (READ)
// 0044e278: TEST ECX,ECX
// 0044e27a: JLE 0x0044e06f
//   XREF to: 0044e06f (CONDITIONAL_JUMP)
// 0044e280: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x40] (READ)
// 0044e284: MOV EAX,ECX
// 0044e286: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x2c] (READ)
// 0044e28a: SUB EAX,ESI
// 0044e28c: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x20] (READ)
// 0044e290: PUSH EDI
// 0044e291: MOV dword ptr [ESI],EAX
// 0044e293: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x18] (READ)
// 0044e297: PUSH EAX
// 0044e298: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x64] (DATA)
// 0044e29c: PUSH EAX
// 0044e29d: PUSH EBX
// 0044e29e: CALL core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
//   XREF to: 00473270 (UNCONDITIONAL_CALL)
// 0044e2a3: ADD ESP,0x10
// 0044e2a6: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 0044e2aa: MOV dword ptr [ESI],EAX
// 0044e2ac: TEST EAX,EAX
// 0044e2ae: JZ 0x0044e33e
//   XREF to: 0044e33e (CONDITIONAL_JUMP)
// 0044e2b4: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x64] (READ)
// 0044e2b8: MOV CL,byte ptr [EBX + 0x1cc8]
// 0044e2be: SAR ESI,CL
// 0044e2c0: MOV ECX,dword ptr [EBX + 0x1c68]
// 0044e2c6: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x60] (READ)
// 0044e2ca: AND ESI,ECX
// 0044e2cc: MOV CL,byte ptr [EBX + 0x1ccc]
// 0044e2d2: MOV EDI,dword ptr [EBX + 0x1c68]
// 0044e2d8: SAR EAX,CL
// 0044e2da: MOV CL,byte ptr [EBX + 0x1c60]
// 0044e2e0: AND EAX,EDI
// 0044e2e2: SHL EAX,CL
// 0044e2e4: ADD EAX,ESI
// 0044e2e6: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ)
// 0044e2ea: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x38] (READ)
// 0044e2ee: MOV dword ptr [ESI],EAX
// 0044e2f0: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 0044e2f4: CMP EAX,EDX
// 0044e2f6: JLE 0x0044e2fc
//   XREF to: 0044e2fc (CONDITIONAL_JUMP)
// 0044e2f8: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0044e2fc: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_0044e2fc
//   XREF to: Stack[-0x18] (READ)
// 0044e300: CMP EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x34] (READ)
// 0044e304: JGE 0x0044e08d
//   XREF to: 0044e08d (CONDITIONAL_JUMP)
// 0044e30a: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0044e30e: JMP 0x0044e08d
//   XREF to: 0044e08d (UNCONDITIONAL_JUMP)
// 0044e313: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_0044e313
//   XREF to: Stack[-0x28] (READ)
// 0044e317: FLD float ptr [EAX + 0x4]
// 0044e31a: FMUL float ptr [EBX + 0x24]
// 0044e31d: FLD float ptr [EAX]
// 0044e31f: FMUL float ptr [EBX + 0x18]
// 0044e322: FADDP
// 0044e324: FLD float ptr [EAX + 0x8]
// 0044e327: FMUL float ptr [EBX + 0x30]
// 0044e32a: FADDP
// 0044e32c: FLDZ
// 0044e32e: FCOMPP
// 0044e330: FNSTSW AX
// 0044e332: SAHF
// 0044e333: JBE 0x0044e257
//   XREF to: 0044e257 (CONDITIONAL_JUMP)
// 0044e339: JMP 0x0044e06f
//   XREF to: 0044e06f (UNCONDITIONAL_JUMP)
// 0044e33e: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_0044e33e
//   XREF to: Stack[-0x20] (READ)
// 0044e342: MOV dword ptr [EAX],0x0
// 0044e348: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ)
// 0044e34c: MOV dword ptr [ESI],0x0
// 0044e352: JMP 0x0044e087
//   XREF to: 0044e087 (UNCONDITIONAL_JUMP)
