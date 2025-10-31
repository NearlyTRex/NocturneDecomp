// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
// Address: 00547320
// Address Range: [[00547320, 00547bfe]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_findPathToDestination_FUN_00547320(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
// Cross-references:
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 (00547d00) at 00547d3e [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005472f4 = 0054738c
//   TerminatedCString s_core_path_cpp_0063e9a0
//   TerminatedCString s_Out_of_bounds1_0063e9b1
//   TerminatedCString s_core_path_cpp_0063e9c1
//   TerminatedCString s_Out_of_bounds2_0063e9d2
//   TerminatedCString s_core_path_cpp_0063e9e2
//   TerminatedCString s_Out_of_bounds3_0063e9f3
//   TerminatedCString s_core_path_cpp_0063ea03
//   TerminatedCString s_Out_of_bounds4_0063ea14
//   int[9] g_PathfindingDeltaX
//   int[9] g_PathfindingDeltaZ
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_PathfindingCurrentX
//   int g_PathfindingCurrentZ
//   int g_PathfindingDestX
//   int g_PathfindingDestZ
//   undefined4 g_PathfindingVisited[50][50]
//   CDemonRaytrace g_CDemonRaytraceInstance
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.x
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.y
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.z
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
//   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   core_path.cpp_CPathMap_getDirection_FUN_005465b0
//   core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40
//   core_path.cpp_CPathMap_queuePop_FUN_005487a0
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_findPathToDestination_FUN_00547320
          (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,
          int direction_hint)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  double dVar10;
  CVector3f *in_stack_00000014;
  float *in_stack_00000028;
  CVector3f *in_stack_0000002c;
  CVector3f *in_stack_00000030;
  undefined4 *in_stack_00000034;
  CVector3f *in_stack_00000038;
  float afStackY_103c [967];
  CVector3i *in_stack_fffffee8;
  CVector3f *in_stack_ffffff08;
  CVector3f *in_stack_ffffff0c;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f local_d8;
  CVector3f CStack_cc;
  CVector3f aCStack_c0 [2];
  uint uStack_a8;
  uint local_a0;
  undefined4 local_9c;
  CVector3f local_98;
  CVector3f CStack_84;
  int local_78;
  CVector3f CStack_6c;
  CVector3f local_60;
  float fStack_54;
  float afStack_50 [4];
  float local_40;
  CVector3f local_3c [3];
  float local_14;
  
  bVar8 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,dest_position,in_stack_fffffee8);
  pfVar7 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x1c);
  this_ptr->field2_0x18 = (int)fStack_54;
  *pfVar7 = afStack_50[(uint)bVar8 * -2];
  pfVar7[(uint)bVar8 * -2 + 1] = afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  local_9c = 0;
  local_98.x = 0.0;
  local_98.y = 0.0;
  switch(direction_hint % 9) {
  case 1:
    local_9c = 4;
    break;
  case 2:
    local_9c = 0xfffffffc;
    break;
  case 3:
    local_98.y = 5.60519e-45;
    break;
  case 4:
    local_98.y = -NAN;
    break;
  case 5:
    local_98.y = 5.60519e-45;
    local_9c = 4;
    break;
  case 6:
    local_98.y = 5.60519e-45;
    local_9c = 0xfffffffc;
    break;
  case 7:
    local_98.y = -NAN;
    local_9c = 0xfffffffc;
    break;
  case 8:
    local_98.y = -NAN;
    local_9c = 4;
  }
  uStack_a8 = (this_ptr->voxel_coords).x - this_ptr->field2_0x18;
  if (0x31 < (int)((uStack_a8 ^ (int)uStack_a8 >> 0x1f) - ((int)uStack_a8 >> 0x1f))) {
    afStack_50[2] = (this_ptr->current_position).x - out_euler_angles->x;
    afStack_50[3] = (this_ptr->current_position).y - out_euler_angles->y;
    local_40 = (this_ptr->current_position).z - out_euler_angles->z;
LAB_005473e0:
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (in_stack_ffffff08,in_stack_ffffff0c);
    if (pCVar1 != in_stack_00000038) {
      in_stack_00000038->x = pCVar1->x;
      in_stack_00000038->y = pCVar1->y;
      in_stack_00000038->z = pCVar1->z;
    }
    return 2;
  }
  local_a0 = (this_ptr->voxel_coords).z - this_ptr->field4_0x20;
  if (0x31 < (int)((local_a0 ^ (int)local_a0 >> 0x1f) - ((int)local_a0 >> 0x1f))) {
    local_60.x = (this_ptr->current_position).x - out_euler_angles->x;
    local_60.y = (this_ptr->current_position).y - out_euler_angles->y;
    local_60.z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_84,&local_60)
    ;
    if (pCVar1 == in_stack_00000014) {
      return 2;
    }
    in_stack_00000014->x = pCVar1->x;
    in_stack_00000014->y = pCVar1->y;
    in_stack_00000014->z = pCVar1->z;
    return 2;
  }
  iVar2 = (this_ptr->grid_origin).z;
  g_PathfindingCurrentX = this_ptr->field2_0x18 - (this_ptr->grid_origin).x;
  g_PathfindingDestZ = 0x32;
  g_PathfindingDestX = 0x32;
  g_PathfindingCurrentZ = this_ptr->field4_0x20 - iVar2;
  if ((((g_PathfindingCurrentX < 0) || (99 < g_PathfindingCurrentX)) || (g_PathfindingCurrentZ < 0))
     || (99 < g_PathfindingCurrentZ)) {
    local_d8.x = (this_ptr->current_position).x - out_euler_angles->x;
    local_d8.y = (this_ptr->current_position).y - out_euler_angles->y;
    local_d8.z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_c0,&local_d8)
    ;
    if (pCVar1 == in_stack_00000014) {
      return 2;
    }
    in_stack_00000014->x = pCVar1->x;
    in_stack_00000014->y = pCVar1->y;
    in_stack_00000014->z = pCVar1->z;
    return 2;
  }
  if ((g_PathfindingCurrentX == 0x32) && (g_PathfindingCurrentZ == 0x32)) {
    local_3c[0].x = (this_ptr->current_position).x - out_euler_angles->x;
    local_3c[0].y = (this_ptr->current_position).y - out_euler_angles->y;
    local_3c[0].z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_6c,local_3c);
    if (pCVar1 != in_stack_00000014) {
      in_stack_00000014->x = pCVar1->x;
      in_stack_00000014->y = pCVar1->y;
      in_stack_00000014->z = pCVar1->z;
    }
    return 1;
  }
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar2,out_euler_angles));
  fVar9 = (float10)*SUB84(dVar10,0);
  crt_math_c_round_FUN_005fe6b0(dVar10);
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44(unaff_ESI - (int)ROUND(fVar9) >> 0x1f,in_stack_00000014));
  crt_math_c_round_FUN_005fe6b0(dVar10);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingCurrentZ,g_PathfindingCurrentX,this_ptr->field3_0x1c);
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingDestZ,g_PathfindingDestX,(this_ptr->voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40
                    (this_ptr,g_PathfindingCurrentX,g_PathfindingCurrentZ,iVar2,g_PathfindingDestX,
                     g_PathfindingDestZ,iVar3);
  if (iVar2 != 0) {
    local_14 = g_CDemonRaytraceInstance.adjusted_size.x;
    if ((CPathMap *)&local_60.y != this_ptr) {
      local_60.y = (this_ptr->current_position).x;
      local_60.z = (this_ptr->current_position).y;
      fStack_54 = (this_ptr->current_position).z;
    }
    local_60.y = (float)(int)CStack_84.y * g_CDemonRaytraceInstance.adjusted_size.x + local_60.y;
    fStack_54 = (float)local_78 * g_CDemonRaytraceInstance.adjusted_size.z + fStack_54;
    local_98.x = (this_ptr->current_position).x - *in_stack_00000028;
    local_98.y = (this_ptr->current_position).y - in_stack_00000028[1];
    local_98.z = (this_ptr->current_position).z - in_stack_00000028[2];
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)&stack0xfffffff8,&local_98);
    if (pCVar1 != in_stack_00000030) {
      in_stack_00000030->x = pCVar1->x;
      in_stack_00000030->y = pCVar1->y;
      in_stack_00000030->z = pCVar1->z;
    }
    return 1;
  }
  iVar2 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
                    (this_ptr,g_PathfindingDestX,g_PathfindingDestZ,g_PathfindingCurrentX,
                     g_PathfindingCurrentZ,(int)in_stack_ffffff08);
  if (iVar2 == 0) {
    uVar5 = core_path_cpp_CPathMap_queuePop_FUN_005487a0(this_ptr,this_ptr->field3_0x1c);
    if (uVar5 != 0) {
      uVar5 = this_ptr->height_cache[g_PathfindingDestZ][g_PathfindingDestX] -
              (this_ptr->voxel_coords).y;
      uVar6 = (int)uVar5 >> 0x1f;
      if (3 < (int)((uVar5 ^ uVar6) - uVar6)) {
        CStack_6c.x = (this_ptr->current_position).x - in_stack_00000030->x;
        CStack_6c.y = (this_ptr->current_position).y - in_stack_00000030->y;
        CStack_6c.z = (this_ptr->current_position).z - in_stack_00000030->z;
        pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (aCStack_c0,&CStack_6c);
        if (pCVar1 == in_stack_00000038) {
          return 2;
        }
        in_stack_00000038->x = pCVar1->x;
        in_stack_00000038->y = pCVar1->y;
        in_stack_00000038->z = pCVar1->z;
        return 2;
      }
      direction_hint = -1;
      iVar2 = g_PathfindingDestX;
      iVar3 = g_PathfindingDestZ;
      uVar5 = 0xffffffff;
      uVar6 = direction_hint;
      do {
        direction_hint = uVar6;
        uVar6 = uVar5;
        uVar5 = (uint)(byte)g_PathfindingVisited[iVar3][iVar2];
        if (uVar5 == 0) {
          CStack_f0.x = (this_ptr->current_position).x - in_stack_00000030->x;
          CStack_f0.y = (this_ptr->current_position).y - in_stack_00000030->y;
          CStack_f0.z = (this_ptr->current_position).z - in_stack_00000030->z;
          pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_e4,&CStack_f0);
          if (pCVar1 == in_stack_00000038) {
            return 2;
          }
          in_stack_00000038->x = pCVar1->x;
          in_stack_00000038->y = pCVar1->y;
          in_stack_00000038->z = pCVar1->z;
          return 2;
        }
        iVar2 = iVar2 - g_PathfindingDeltaX[uVar5];
        iVar3 = iVar3 - g_PathfindingDeltaZ[uVar5];
        if (iVar2 < 0) {
          g_CurrentFilename = "..\\core\\path.cpp";
          g_CurrentLineNumber = 0x547;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of bounds1!");
        }
        if (iVar3 < 0) {
          g_CurrentFilename = "..\\core\\path.cpp";
          g_CurrentLineNumber = 0x548;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of bounds2!");
        }
        if (99 < iVar2) {
          g_CurrentFilename = "..\\core\\path.cpp";
          g_CurrentLineNumber = 0x549;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of bounds3!");
        }
        if (99 < iVar3) {
          g_CurrentFilename = "..\\core\\path.cpp";
          g_CurrentLineNumber = 0x54a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of bounds4!");
        }
      } while ((iVar2 != g_PathfindingCurrentX) || (iVar3 != g_PathfindingCurrentZ));
      *in_stack_00000034 = 0;
      in_stack_00000034[2] = 0;
      fVar4 = core_path_cpp_CPathMap_getDirection_FUN_005465b0
                        (this_ptr,uVar5,uVar6,direction_hint,in_stack_00000030);
      in_stack_00000038->y = fVar4;
      return 1;
    }
    local_d8.x = (this_ptr->current_position).x - in_stack_00000030->x;
    local_d8.y = (this_ptr->current_position).y - in_stack_00000030->y;
    local_d8.z = (this_ptr->current_position).z - in_stack_00000030->z;
    in_stack_ffffff0c = &local_d8;
    in_stack_ffffff08 = &CStack_cc;
    goto LAB_005473e0;
  }
  if (iVar2 == 1) {
    if (g_PathfindingDestX <= g_PathfindingCurrentX) {
      if (g_PathfindingDestX < g_PathfindingCurrentX) {
        iVar2 = 4;
      }
      else if (g_PathfindingCurrentZ < g_PathfindingDestZ) {
        iVar2 = 1;
      }
      else {
        iVar2 = 2;
      }
      goto LAB_00547885;
    }
  }
  else {
    if (g_PathfindingCurrentZ < g_PathfindingDestZ) {
      iVar2 = 1;
      goto LAB_00547885;
    }
    if (g_PathfindingDestZ < g_PathfindingCurrentZ) {
      iVar2 = 2;
      goto LAB_00547885;
    }
    if (g_PathfindingDestX <= g_PathfindingCurrentX) {
      iVar2 = 4;
      goto LAB_00547885;
    }
  }
  iVar2 = 3;
LAB_00547885:
  in_stack_00000030->x = 0.0;
  in_stack_00000030->z = 0.0;
  fVar4 = core_path_cpp_CPathMap_getDirection_FUN_005465b0(this_ptr,iVar2,-1,-1,in_stack_0000002c);
  in_stack_00000034[1] = fVar4;
  return 1;
}


// Assembly code:
// 00547320: PUSH EBX
//   Label: core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
// 00547321: PUSH ESI
// 00547322: PUSH EDI
// 00547323: PUSH EBP
// 00547324: SUB ESP,0x108
// 0054732a: MOV EBP,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 00547331: MOV EBX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x10] (READ)
// 00547338: MOV EDX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 0054733f: PUSH EDX
// 00547340: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00547345: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x58] (DATA)
// 0054734c: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   XREF to: 00499880 (UNCONDITIONAL_CALL)
// 00547351: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x58] (DATA)
// 00547358: ADD ESP,0x8
// 0054735b: LEA EDI,[EBP + 0x18]
// 0054735e: MOV EAX,EBX
// 00547360: MOV EDX,EBX
// 00547362: MOVSD ES:EDI,ESI
// 00547363: MOVSD ES:EDI,ESI
// 00547364: MOVSD ES:EDI,ESI
// 00547365: SAR EDX,0x1f
// 00547368: MOV ESI,0x9
// 0054736d: IDIV ESI
// 0054736f: XOR ECX,ECX
// 00547371: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0xa0] (WRITE)
// 00547375: MOV dword ptr [ESP + 0x7c],ECX
//   XREF to: Stack[-0x9c] (WRITE)
// 00547379: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x98] (WRITE)
// 00547380: CMP EDX,0x8
// 00547383: JA 0x0054738c
//   XREF to: 0054738c (CONDITIONAL_JUMP)
// 00547385: JMP dword ptr [EDX*0x4 + 0x5472f4]
//   Label: switchD
//   XREF to: 0054738c (COMPUTED_JUMP)
//   XREF to: 00547413 (COMPUTED_JUMP)
//   XREF to: 00547420 (COMPUTED_JUMP)
//   XREF to: 0054742d (COMPUTED_JUMP)
//   XREF to: 0054743d (COMPUTED_JUMP)
//   XREF to: 0054744d (COMPUTED_JUMP)
//   XREF to: 00547462 (COMPUTED_JUMP)
//   XREF to: 0054747c (COMPUTED_JUMP)
//   XREF to: 00547491 (COMPUTED_JUMP)
//   XREF to: 005472f4 (DATA)
// 0054738c: MOV EAX,dword ptr [EBP + 0xc]
//   Label: caseD_0
// 0054738f: MOV EDX,dword ptr [EBP + 0x18]
// 00547392: SUB EAX,EDX
// 00547394: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 00547398: CDQ
// 00547399: XOR EAX,EDX
// 0054739b: SUB EAX,EDX
// 0054739d: CMP EAX,0x32
// 005473a0: JL 0x005474ab
//   XREF to: 005474ab (CONDITIONAL_JUMP)
// 005473a6: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 005473ad: FLD float ptr [EBP]
// 005473b0: FSUB float ptr [EAX]
// 005473b2: FSTP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x4c] (WRITE)
// 005473b9: FLD float ptr [EBP + 0x4]
// 005473bc: FSUB float ptr [EAX + 0x4]
// 005473bf: FSTP float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x48] (WRITE)
// 005473c6: FLD float ptr [EBP + 0x8]
// 005473c9: FSUB float ptr [EAX + 0x8]
// 005473cc: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x4c] (DATA)
// 005473d3: PUSH EAX
// 005473d4: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0xd0] (DATA)
// 005473d8: PUSH EAX
// 005473d9: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x44] (WRITE)
// 005473e0: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   Label: LAB_005473e0
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005473e5: ADD ESP,0x8
// 005473e8: MOV ECX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 005473ef: CMP EAX,ECX
// 005473f1: JZ 0x00547403
//   XREF to: 00547403 (CONDITIONAL_JUMP)
// 005473f3: MOV EDX,dword ptr [EAX]
// 005473f5: MOV dword ptr [ECX],EDX
// 005473f7: MOV EDX,dword ptr [EAX + 0x4]
// 005473fa: MOV dword ptr [ECX + 0x4],EDX
// 005473fd: MOV EDX,dword ptr [EAX + 0x8]
// 00547400: MOV dword ptr [ECX + 0x8],EDX
// 00547403: MOV EAX,0x2
//   Label: LAB_00547403
// 00547408: ADD ESP,0x108
// 0054740e: POP EBP
// 0054740f: POP EDI
// 00547410: POP ESI
// 00547411: POP EBX
// 00547412: RET
// 00547413: MOV dword ptr [ESP + 0x78],0x4
//   Label: caseD_1
//   XREF to: Stack[-0xa0] (WRITE)
// 0054741b: JMP 0x0054738c
//   XREF to: 0054738c (UNCONDITIONAL_JUMP)
// 00547420: MOV dword ptr [ESP + 0x78],0xfffffffc
//   Label: caseD_2
//   XREF to: Stack[-0xa0] (WRITE)
// 00547428: JMP 0x0054738c
//   XREF to: 0054738c (UNCONDITIONAL_JUMP)
// 0054742d: MOV dword ptr [ESP + 0x80],0x4
//   Label: caseD_3
//   XREF to: Stack[-0x98] (WRITE)
// 00547438: JMP 0x0054738c
//   XREF to: 0054738c (UNCONDITIONAL_JUMP)
// 0054743d: MOV dword ptr [ESP + 0x80],0xfffffffc
//   Label: caseD_4
//   XREF to: Stack[-0x98] (WRITE)
// 00547448: JMP 0x0054738c
//   XREF to: 0054738c (UNCONDITIONAL_JUMP)
// 0054744d: MOV EAX,0x4
//   Label: caseD_5
// 00547452: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00547459: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 0054745d: JMP 0x0054738c
//   XREF to: 0054738c (UNCONDITIONAL_JUMP)
// 00547462: MOV EDI,0x4
//   Label: caseD_6
// 00547467: MOV ESI,0xfffffffc
// 0054746c: MOV dword ptr [ESP + 0x80],EDI
//   XREF to: Stack[-0x98] (WRITE)
// 00547473: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0xa0] (WRITE)
// 00547477: JMP 0x0054738c
//   XREF to: 0054738c (UNCONDITIONAL_JUMP)
// 0054747c: MOV ECX,0xfffffffc
//   Label: caseD_7
// 00547481: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x98] (WRITE)
// 00547488: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0xa0] (WRITE)
// 0054748c: JMP 0x0054738c
//   XREF to: 0054738c (UNCONDITIONAL_JUMP)
// 00547491: MOV EDX,0xfffffffc
//   Label: caseD_8
// 00547496: MOV EAX,0x4
// 0054749b: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x98] (WRITE)
// 005474a2: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005474a6: JMP 0x0054738c
//   XREF to: 0054738c (UNCONDITIONAL_JUMP)
// 005474ab: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005474ab
// 005474ae: MOV ECX,dword ptr [EBP + 0x20]
// 005474b1: SUB EAX,ECX
// 005474b3: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005474b7: CDQ
// 005474b8: XOR EAX,EDX
// 005474ba: SUB EAX,EDX
// 005474bc: CMP EAX,0x32
// 005474bf: JL 0x00547535
//   XREF to: 00547535 (CONDITIONAL_JUMP)
// 005474c1: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 005474c8: FLD float ptr [EBP]
// 005474cb: FSUB float ptr [EAX]
// 005474cd: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x64] (WRITE)
// 005474d4: FLD float ptr [EBP + 0x4]
// 005474d7: FSUB float ptr [EAX + 0x4]
// 005474da: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x60] (WRITE)
// 005474e1: FLD float ptr [EBP + 0x8]
// 005474e4: FSUB float ptr [EAX + 0x8]
// 005474e7: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x64] (DATA)
// 005474ee: PUSH EAX
// 005474ef: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x88] (DATA)
// 005474f6: PUSH EAX
// 005474f7: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x5c] (WRITE)
// 005474fe: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00547503: ADD ESP,0x8
// 00547506: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 0054750d: CMP EAX,EDX
// 0054750f: JZ 0x00547403
//   XREF to: 00547403 (CONDITIONAL_JUMP)
// 00547515: MOV ECX,dword ptr [EAX]
// 00547517: MOV dword ptr [EDX],ECX
// 00547519: MOV ECX,dword ptr [EAX + 0x4]
// 0054751c: MOV dword ptr [EDX + 0x4],ECX
// 0054751f: MOV ECX,dword ptr [EAX + 0x8]
// 00547522: MOV dword ptr [EDX + 0x8],ECX
// 00547525: MOV EAX,0x2
// 0054752a: ADD ESP,0x108
// 00547530: POP EBP
// 00547531: POP EDI
// 00547532: POP ESI
// 00547533: POP EBX
// 00547534: RET
// 00547535: MOV EBX,0x32
//   Label: LAB_00547535
// 0054753a: MOV EAX,dword ptr [EBP + 0x18]
// 0054753d: MOV EDI,dword ptr [EBP + 0x24]
// 00547540: MOV EDX,dword ptr [EBP + 0x2c]
// 00547543: SUB EAX,EDI
// 00547545: MOV dword ptr [0x030c3de8],EBX
//   XREF to: 030c3de8 (WRITE)
// 0054754b: MOV [0x030c3ddc],EAX
//   XREF to: 030c3ddc (WRITE)
// 00547550: MOV EAX,dword ptr [EBP + 0x20]
// 00547553: MOV dword ptr [0x030c3de4],EBX
//   XREF to: 030c3de4 (WRITE)
// 00547559: SUB EAX,EDX
// 0054755b: MOV ECX,dword ptr [0x030c3ddc]
//   XREF to: 030c3ddc (READ)
// 00547561: MOV [0x030c3de0],EAX
//   XREF to: 030c3de0 (WRITE)
// 00547566: TEST ECX,ECX
// 00547568: JL 0x0054756f
//   XREF to: 0054756f (CONDITIONAL_JUMP)
// 0054756a: CMP ECX,0x64
// 0054756d: JL 0x005475d5
//   XREF to: 005475d5 (CONDITIONAL_JUMP)
// 0054756f: MOV EAX,dword ptr [ESP + 0x120]
//   Label: LAB_0054756f
//   XREF to: Stack[0x8] (READ)
// 00547576: FLD float ptr [EBP]
// 00547579: FSUB float ptr [EAX]
// 0054757b: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xdc] (WRITE)
// 0054757f: FLD float ptr [EBP + 0x4]
// 00547582: FSUB float ptr [EAX + 0x4]
// 00547585: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (WRITE)
// 00547589: FLD float ptr [EBP + 0x8]
// 0054758c: FSUB float ptr [EAX + 0x8]
// 0054758f: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0xdc] (DATA)
// 00547593: PUSH EAX
// 00547594: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0xc4] (DATA)
// 00547598: PUSH EAX
// 00547599: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xd4] (WRITE)
// 0054759d: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005475a2: ADD ESP,0x8
// 005475a5: MOV EBP,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 005475ac: CMP EAX,EBP
// 005475ae: JZ 0x00547403
//   XREF to: 00547403 (CONDITIONAL_JUMP)
// 005475b4: MOV EDX,dword ptr [EAX]
// 005475b6: MOV dword ptr [EBP],EDX
// 005475b9: MOV EDX,dword ptr [EAX + 0x4]
// 005475bc: MOV dword ptr [EBP + 0x4],EDX
// 005475bf: MOV EDX,dword ptr [EAX + 0x8]
// 005475c2: MOV dword ptr [EBP + 0x8],EDX
// 005475c5: MOV EAX,0x2
// 005475ca: ADD ESP,0x108
// 005475d0: POP EBP
// 005475d1: POP EDI
// 005475d2: POP ESI
// 005475d3: POP EBX
// 005475d4: RET
// 005475d5: TEST EAX,EAX
//   Label: LAB_005475d5
// 005475d7: JL 0x0054756f
//   XREF to: 0054756f (CONDITIONAL_JUMP)
// 005475d9: CMP EAX,0x64
// 005475dc: JGE 0x0054756f
//   XREF to: 0054756f (CONDITIONAL_JUMP)
// 005475de: CMP ECX,EBX
// 005475e0: JNZ 0x005475ea
//   XREF to: 005475ea (CONDITIONAL_JUMP)
// 005475e2: CMP EAX,EBX
// 005475e4: JZ 0x005477cc
//   XREF to: 005477cc (CONDITIONAL_JUMP)
// 005475ea: FLD float ptr [EBP]
//   Label: LAB_005475ea
// 005475ed: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 005475f4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005475f9: FISTP dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (WRITE)
// 00547600: FLD float ptr [EAX]
// 00547602: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00547607: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 0054760e: FISTP dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (WRITE)
// 00547615: SUB EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 0054761c: CDQ
// 0054761d: XOR EAX,EDX
// 0054761f: SUB EAX,EDX
// 00547621: FLD float ptr [EBP + 0x8]
// 00547624: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 0054762b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00547630: FISTP dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (WRITE)
// 00547637: FLD float ptr [EAX + 0x8]
// 0054763a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0054763f: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 00547646: FISTP dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (WRITE)
// 0054764d: SUB EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 00547654: CDQ
// 00547655: XOR EAX,EDX
// 00547657: SUB EAX,EDX
// 00547659: MOV ESI,dword ptr [EBP + 0x1c]
// 0054765c: PUSH ESI
// 0054765d: MOV EDI,dword ptr [0x030c3ddc]
//   XREF to: 030c3ddc (READ)
// 00547663: PUSH EDI
// 00547664: MOV EAX,[0x030c3de0]
//   XREF to: 030c3de0 (READ)
// 00547669: PUSH EAX
// 0054766a: PUSH EBP
// 0054766b: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00547670: ADD ESP,0x10
// 00547673: MOV EDX,dword ptr [EBP + 0x10]
// 00547676: PUSH EDX
// 00547677: MOV ECX,dword ptr [0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 0054767d: PUSH ECX
// 0054767e: MOV ESI,dword ptr [0x030c3de8]
//   XREF to: 030c3de8 (READ)
// 00547684: PUSH ESI
// 00547685: PUSH EBP
// 00547686: MOV EBX,EAX
// 00547688: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 0054768d: ADD ESP,0x10
// 00547690: PUSH EAX
// 00547691: MOV EDI,dword ptr [0x030c3de8]
//   XREF to: 030c3de8 (READ)
// 00547697: PUSH EDI
// 00547698: MOV EAX,[0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 0054769d: PUSH EAX
// 0054769e: PUSH EBX
// 0054769f: MOV EDX,dword ptr [0x030c3de0]
//   XREF to: 030c3de0 (READ)
// 005476a5: PUSH EDX
// 005476a6: MOV ECX,dword ptr [0x030c3ddc]
//   XREF to: 030c3ddc (READ)
// 005476ac: PUSH ECX
// 005476ad: PUSH EBP
// 005476ae: CALL core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40
//   XREF to: 00546c40 (UNCONDITIONAL_CALL)
// 005476b3: ADD ESP,0x1c
// 005476b6: TEST EAX,EAX
// 005476b8: JZ 0x0054783c
//   XREF to: 0054783c (CONDITIONAL_JUMP)
// 005476be: MOV EAX,[0x03277d48]
//   XREF to: 03277d48 (READ)
// 005476c3: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005476ca: MOV EAX,0x3277d48
//   XREF to: 03277d48 (DATA)
// 005476cf: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 03277d4c (READ)
// 005476d2: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005476d9: MOV EAX,0x3277d48
//   XREF to: 03277d48 (DATA)
// 005476de: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 03277d50 (READ)
// 005476e1: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005476e8: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x7c] (DATA)
// 005476ef: CMP EAX,EBP
// 005476f1: JZ 0x00547711
//   XREF to: 00547711 (CONDITIONAL_JUMP)
// 005476f3: MOV EAX,dword ptr [EBP]
// 005476f6: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005476fd: MOV EAX,dword ptr [EBP + 0x4]
// 00547700: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00547707: MOV EAX,dword ptr [EBP + 0x8]
// 0054770a: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00547711: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00547711
//   XREF to: Stack[-0xa0] (READ)
// 00547715: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054771c: FILD dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 00547723: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x98] (READ)
// 0054772a: FMUL float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x34] (READ)
// 00547731: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00547738: FILD dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 0054773f: FMUL float ptr [ESP + 0xec]
//   XREF to: Stack[-0x2c] (READ)
// 00547746: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 0054774d: FXCH
// 0054774f: FADD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x7c] (READ)
// 00547756: FXCH
// 00547758: FADD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x74] (READ)
// 0054775f: FXCH
// 00547761: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x7c] (WRITE)
// 00547768: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x74] (WRITE)
// 0054776f: FLD float ptr [EBP]
// 00547772: FSUB float ptr [EAX]
// 00547774: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (WRITE)
// 00547778: FLD float ptr [EBP + 0x4]
// 0054777b: FSUB float ptr [EAX + 0x4]
// 0054777e: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0xb4] (WRITE)
// 00547782: FLD float ptr [EBP + 0x8]
// 00547785: FSUB float ptr [EAX + 0x8]
// 00547788: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0xb8] (DATA)
// 0054778c: PUSH EAX
// 0054778d: LEA EAX,[ESP + 0xf4]
//   XREF to: Stack[-0x28] (DATA)
// 00547794: PUSH EAX
// 00547795: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0xb0] (WRITE)
// 00547799: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0054779e: ADD ESP,0x8
// 005477a1: MOV ESI,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 005477a8: CMP EAX,ESI
// 005477aa: JZ 0x005477bc
//   XREF to: 005477bc (CONDITIONAL_JUMP)
// 005477ac: MOV EDX,dword ptr [EAX]
// 005477ae: MOV dword ptr [ESI],EDX
// 005477b0: MOV EDX,dword ptr [EAX + 0x4]
// 005477b3: MOV dword ptr [ESI + 0x4],EDX
// 005477b6: MOV EDX,dword ptr [EAX + 0x8]
// 005477b9: MOV dword ptr [ESI + 0x8],EDX
// 005477bc: MOV EAX,0x1
//   Label: LAB_005477bc
// 005477c1: ADD ESP,0x108
// 005477c7: POP EBP
// 005477c8: POP EDI
// 005477c9: POP ESI
// 005477ca: POP EBX
// 005477cb: RET
// 005477cc: MOV EAX,dword ptr [ESP + 0x120]
//   Label: LAB_005477cc
//   XREF to: Stack[0x8] (READ)
// 005477d3: FLD float ptr [EBP]
// 005477d6: FSUB float ptr [EAX]
// 005477d8: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x40] (WRITE)
// 005477df: FLD float ptr [EBP + 0x4]
// 005477e2: FSUB float ptr [EAX + 0x4]
// 005477e5: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x3c] (WRITE)
// 005477ec: FLD float ptr [EBP + 0x8]
// 005477ef: FSUB float ptr [EAX + 0x8]
// 005477f2: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0x40] (DATA)
// 005477f9: PUSH EAX
// 005477fa: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x70] (DATA)
// 00547801: PUSH EAX
// 00547802: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x38] (WRITE)
// 00547809: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0054780e: ADD ESP,0x8
// 00547811: MOV EDI,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 00547818: CMP EAX,EDI
// 0054781a: JZ 0x0054782c
//   XREF to: 0054782c (CONDITIONAL_JUMP)
// 0054781c: MOV EDX,dword ptr [EAX]
// 0054781e: MOV dword ptr [EDI],EDX
// 00547820: MOV EDX,dword ptr [EAX + 0x4]
// 00547823: MOV dword ptr [EDI + 0x4],EDX
// 00547826: MOV EDX,dword ptr [EAX + 0x8]
// 00547829: MOV dword ptr [EDI + 0x8],EDX
// 0054782c: MOV EAX,0x1
//   Label: LAB_0054782c
// 00547831: ADD ESP,0x108
// 00547837: POP EBP
// 00547838: POP EDI
// 00547839: POP ESI
// 0054783a: POP EBX
// 0054783b: RET
// 0054783c: MOV EBX,dword ptr [0x030c3de0]
//   Label: LAB_0054783c
//   XREF to: 030c3de0 (READ)
// 00547842: PUSH EBX
// 00547843: MOV ESI,dword ptr [0x030c3ddc]
//   XREF to: 030c3ddc (READ)
// 00547849: PUSH ESI
// 0054784a: MOV EDI,dword ptr [0x030c3de8]
//   XREF to: 030c3de8 (READ)
// 00547850: PUSH EDI
// 00547851: MOV EAX,[0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 00547856: PUSH EAX
// 00547857: PUSH EBP
// 00547858: CALL core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
//   XREF to: 00546e90 (UNCONDITIONAL_CALL)
// 0054785d: ADD ESP,0x14
// 00547860: TEST EAX,EAX
// 00547862: JZ 0x0054793d
//   XREF to: 0054793d (CONDITIONAL_JUMP)
// 00547868: CMP EAX,0x1
// 0054786b: JNZ 0x005478fc
//   XREF to: 005478fc (CONDITIONAL_JUMP)
// 00547871: MOV EDI,dword ptr [0x030c3ddc]
//   XREF to: 030c3ddc (READ)
// 00547877: MOV EAX,[0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 0054787c: CMP EAX,EDI
// 0054787e: JLE 0x005478d7
//   XREF to: 005478d7 (CONDITIONAL_JUMP)
// 00547880: MOV EAX,0x3
//   Label: LAB_00547880
// 00547885: MOV EBX,dword ptr [ESP + 0x120]
//   Label: LAB_00547885
//   XREF to: Stack[0x8] (READ)
// 0054788c: PUSH EBX
// 0054788d: PUSH -0x1
// 0054788f: PUSH -0x1
// 00547891: MOV EDX,dword ptr [ESP + 0x130]
//   XREF to: Stack[0xc] (READ)
// 00547898: PUSH EAX
// 00547899: MOV dword ptr [EDX],0x0
// 0054789f: PUSH EBP
// 005478a0: MOV dword ptr [EDX + 0x8],0x0
// 005478a7: CALL core_path.cpp_CPathMap_getDirection_FUN_005465b0
//   XREF to: 005465b0 (UNCONDITIONAL_CALL)
// 005478ac: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005478b3: FLD float ptr [ESP + 0x118]
//   XREF to: Stack[-0x14] (READ)
// 005478ba: ADD ESP,0x14
// 005478bd: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 005478c4: FSTP float ptr [EAX + 0x4]
// 005478c7: MOV EAX,0x1
// 005478cc: ADD ESP,0x108
// 005478d2: POP EBP
// 005478d3: POP EDI
// 005478d4: POP ESI
// 005478d5: POP EBX
// 005478d6: RET
// 005478d7: JGE 0x005478e0
//   Label: LAB_005478d7
//   XREF to: 005478e0 (CONDITIONAL_JUMP)
// 005478d9: MOV EAX,0x4
// 005478de: JMP 0x00547885
//   XREF to: 00547885 (UNCONDITIONAL_JUMP)
// 005478e0: MOV ECX,dword ptr [0x030c3de0]
//   Label: LAB_005478e0
//   XREF to: 030c3de0 (READ)
// 005478e6: CMP ECX,dword ptr [0x030c3de8]
//   XREF to: 030c3de8 (READ)
// 005478ec: JGE 0x005478f5
//   XREF to: 005478f5 (CONDITIONAL_JUMP)
// 005478ee: MOV EAX,0x1
// 005478f3: JMP 0x00547885
//   XREF to: 00547885 (UNCONDITIONAL_JUMP)
// 005478f5: MOV EAX,0x2
//   Label: LAB_005478f5
// 005478fa: JMP 0x00547885
//   XREF to: 00547885 (UNCONDITIONAL_JUMP)
// 005478fc: MOV ECX,dword ptr [0x030c3de0]
//   Label: LAB_005478fc
//   XREF to: 030c3de0 (READ)
// 00547902: MOV EAX,[0x030c3de8]
//   XREF to: 030c3de8 (READ)
// 00547907: CMP EAX,ECX
// 00547909: JLE 0x00547915
//   XREF to: 00547915 (CONDITIONAL_JUMP)
// 0054790b: MOV EAX,0x1
// 00547910: JMP 0x00547885
//   XREF to: 00547885 (UNCONDITIONAL_JUMP)
// 00547915: JGE 0x00547921
//   Label: LAB_00547915
//   XREF to: 00547921 (CONDITIONAL_JUMP)
// 00547917: MOV EAX,0x2
// 0054791c: JMP 0x00547885
//   XREF to: 00547885 (UNCONDITIONAL_JUMP)
// 00547921: MOV ESI,dword ptr [0x030c3ddc]
//   Label: LAB_00547921
//   XREF to: 030c3ddc (READ)
// 00547927: CMP ESI,dword ptr [0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 0054792d: JL 0x00547880
//   XREF to: 00547880 (CONDITIONAL_JUMP)
// 00547933: MOV EAX,0x4
// 00547938: JMP 0x00547885
//   XREF to: 00547885 (UNCONDITIONAL_JUMP)
// 0054793d: MOV EDX,dword ptr [EBP + 0x1c]
//   Label: LAB_0054793d
// 00547940: PUSH EDX
// 00547941: PUSH EBP
// 00547942: CALL core_path.cpp_CPathMap_queuePop_FUN_005487a0
//   XREF to: 005487a0 (UNCONDITIONAL_CALL)
// 00547947: ADD ESP,0x8
// 0054794a: TEST EAX,EAX
// 0054794c: JNZ 0x00547981
//   XREF to: 00547981 (CONDITIONAL_JUMP)
// 0054794e: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 00547955: FLD float ptr [EBP]
// 00547958: FSUB float ptr [EAX]
// 0054795a: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x100] (WRITE)
// 0054795e: FLD float ptr [EBP + 0x4]
// 00547961: FSUB float ptr [EAX + 0x4]
// 00547964: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xfc] (WRITE)
// 00547968: FLD float ptr [EBP + 0x8]
// 0054796b: FSUB float ptr [EAX + 0x8]
// 0054796e: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x100] (DATA)
// 00547972: PUSH EAX
// 00547973: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xf4] (DATA)
// 00547977: PUSH EAX
// 00547978: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xf8] (WRITE)
// 0054797c: JMP 0x005473e0
//   XREF to: 005473e0 (UNCONDITIONAL_JUMP)
// 00547981: MOV EBX,dword ptr [0x030c3de8]
//   Label: LAB_00547981
//   XREF to: 030c3de8 (READ)
// 00547987: LEA EAX,[EBX*0x4 + 0x0]
// 0054798e: SUB EAX,EBX
// 00547990: SHL EAX,0x3
// 00547993: ADD EAX,EBX
// 00547995: SHL EAX,0x4
// 00547998: LEA EDX,[EAX + EBP*0x1]
// 0054799b: MOV EAX,[0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 005479a0: MOV EBX,dword ptr [EBP + 0x10]
// 005479a3: MOV EAX,dword ptr [EDX + EAX*0x4 + 0x30]
// 005479a7: SUB EAX,EBX
// 005479a9: CDQ
// 005479aa: XOR EAX,EDX
// 005479ac: SUB EAX,EDX
// 005479ae: CMP EAX,0x3
// 005479b1: JG 0x00547add
//   XREF to: 00547add (CONDITIONAL_JUMP)
// 005479b7: MOV EDI,0xffffffff
// 005479bc: MOV ESI,dword ptr [0x030c3de8]
//   XREF to: 030c3de8 (READ)
// 005479c2: MOV EBX,dword ptr [0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 005479c8: MOV dword ptr [ESP + 0x100],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005479cf: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_005479cf
//   XREF to: Stack[-0x18] (READ)
// 005479d6: MOV dword ptr [ESP + 0x100],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005479dd: IMUL EDI,ESI,0x64
// 005479e0: MOVZX EDI,byte ptr [EDI + EBX*0x1 + 0x30d2858]
//   XREF to: 030d3c12 (READ)
// 005479e8: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005479ef: TEST EDI,EDI
// 005479f1: JZ 0x00547b4e
//   XREF to: 00547b4e (CONDITIONAL_JUMP)
// 005479f7: MOV EAX,dword ptr [EDI*0x4 + 0x680c08]
//   XREF to: 00680c08 (DATA)
// 005479fe: MOV EDX,dword ptr [EDI*0x4 + 0x680c2c]
//   XREF to: 00680c2c (DATA)
// 00547a05: SUB EBX,EAX
// 00547a07: SUB ESI,EDX
// 00547a09: TEST EBX,EBX
// 00547a0b: JL 0x00547bb0
//   XREF to: 00547bb0 (CONDITIONAL_JUMP)
// 00547a11: TEST ESI,ESI
//   Label: LAB_00547a11
// 00547a13: JL 0x00547bd7
//   XREF to: 00547bd7 (CONDITIONAL_JUMP)
// 00547a19: CMP EBX,0x64
//   Label: LAB_00547a19
// 00547a1c: JL 0x00547a40
//   XREF to: 00547a40 (CONDITIONAL_JUMP)
// 00547a1e: MOV EAX,0x63e9e2
//   XREF to: 0063e9e2 (PARAM)
// 00547a23: MOV EDX,0x549
// 00547a28: PUSH 0x63e9f3
//   XREF to: 0063e9f3 (DATA)
// 00547a2d: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00547a32: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00547a38: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00547a3d: ADD ESP,0x4
// 00547a40: CMP ESI,0x64
//   Label: LAB_00547a40
// 00547a43: JL 0x00547a67
//   XREF to: 00547a67 (CONDITIONAL_JUMP)
// 00547a45: MOV ECX,0x63ea03
//   XREF to: 0063ea03 (PARAM)
// 00547a4a: MOV EAX,0x54a
// 00547a4f: PUSH 0x63ea14
//   XREF to: 0063ea14 (DATA)
// 00547a54: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00547a5a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00547a5f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00547a64: ADD ESP,0x4
// 00547a67: CMP EBX,dword ptr [0x030c3ddc]
//   Label: LAB_00547a67
//   XREF to: 030c3ddc (READ)
// 00547a6d: JNZ 0x005479cf
//   XREF to: 005479cf (CONDITIONAL_JUMP)
// 00547a73: CMP ESI,dword ptr [0x030c3de0]
//   XREF to: 030c3de0 (READ)
// 00547a79: JNZ 0x005479cf
//   XREF to: 005479cf (CONDITIONAL_JUMP)
// 00547a7f: MOV EBX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 00547a86: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 00547a8d: PUSH EBX
// 00547a8e: MOV ESI,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x1c] (READ)
// 00547a95: MOV dword ptr [EAX],0x0
// 00547a9b: PUSH ESI
// 00547a9c: MOV dword ptr [EAX + 0x8],0x0
// 00547aa3: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x18] (READ)
// 00547aaa: PUSH EAX
// 00547aab: PUSH EDI
// 00547aac: PUSH EBP
// 00547aad: CALL core_path.cpp_CPathMap_getDirection_FUN_005465b0
//   XREF to: 005465b0 (UNCONDITIONAL_CALL)
// 00547ab2: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00547ab9: FLD float ptr [ESP + 0x118]
//   XREF to: Stack[-0x14] (READ)
// 00547ac0: ADD ESP,0x14
// 00547ac3: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 00547aca: FSTP float ptr [EAX + 0x4]
// 00547acd: MOV EAX,0x1
// 00547ad2: ADD ESP,0x108
// 00547ad8: POP EBP
// 00547ad9: POP EDI
// 00547ada: POP ESI
// 00547adb: POP EBX
// 00547adc: RET
// 00547add: MOV EAX,dword ptr [ESP + 0x120]
//   Label: LAB_00547add
//   XREF to: Stack[0x8] (READ)
// 00547ae4: FLD float ptr [EBP]
// 00547ae7: FSUB float ptr [EAX]
// 00547ae9: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x94] (WRITE)
// 00547af0: FLD float ptr [EBP + 0x4]
// 00547af3: FSUB float ptr [EAX + 0x4]
// 00547af6: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x90] (WRITE)
// 00547afd: FLD float ptr [EBP + 0x8]
// 00547b00: FSUB float ptr [EAX + 0x8]
// 00547b03: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x94] (DATA)
// 00547b0a: PUSH EAX
// 00547b0b: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0xe8] (DATA)
// 00547b0f: PUSH EAX
// 00547b10: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x8c] (WRITE)
// 00547b17: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00547b1c: ADD ESP,0x8
// 00547b1f: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 00547b26: CMP EAX,EDX
// 00547b28: JZ 0x00547403
//   XREF to: 00547403 (CONDITIONAL_JUMP)
// 00547b2e: MOV ECX,dword ptr [EAX]
// 00547b30: MOV dword ptr [EDX],ECX
// 00547b32: MOV ECX,dword ptr [EAX + 0x4]
// 00547b35: MOV dword ptr [EDX + 0x4],ECX
// 00547b38: MOV ECX,dword ptr [EAX + 0x8]
// 00547b3b: MOV dword ptr [EDX + 0x8],ECX
// 00547b3e: MOV EAX,0x2
// 00547b43: ADD ESP,0x108
// 00547b49: POP EBP
// 00547b4a: POP EDI
// 00547b4b: POP ESI
// 00547b4c: POP EBX
// 00547b4d: RET
// 00547b4e: MOV EAX,dword ptr [ESP + 0x120]
//   Label: LAB_00547b4e
//   XREF to: Stack[0x8] (READ)
// 00547b55: FLD float ptr [EBP]
// 00547b58: FSUB float ptr [EAX]
// 00547b5a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x118] (DATA)
// 00547b5d: FLD float ptr [EBP + 0x4]
// 00547b60: FSUB float ptr [EAX + 0x4]
// 00547b63: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x114] (WRITE)
// 00547b67: FLD float ptr [EBP + 0x8]
// 00547b6a: FSUB float ptr [EAX + 0x8]
// 00547b6d: MOV EAX,ESP
// 00547b6f: PUSH EAX
// 00547b70: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x10c] (DATA)
// 00547b74: PUSH EAX
// 00547b75: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x110] (WRITE)
// 00547b79: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00547b7e: ADD ESP,0x8
// 00547b81: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0xc] (READ)
// 00547b88: CMP EAX,EDX
// 00547b8a: JZ 0x00547403
//   XREF to: 00547403 (CONDITIONAL_JUMP)
// 00547b90: MOV ECX,dword ptr [EAX]
// 00547b92: MOV dword ptr [EDX],ECX
// 00547b94: MOV ECX,dword ptr [EAX + 0x4]
// 00547b97: MOV dword ptr [EDX + 0x4],ECX
// 00547b9a: MOV ECX,dword ptr [EAX + 0x8]
// 00547b9d: MOV dword ptr [EDX + 0x8],ECX
// 00547ba0: MOV EAX,0x2
// 00547ba5: ADD ESP,0x108
// 00547bab: POP EBP
// 00547bac: POP EDI
// 00547bad: POP ESI
// 00547bae: POP EBX
// 00547baf: RET
// 00547bb0: MOV ECX,0x63e9a0
//   Label: LAB_00547bb0
//   XREF to: 0063e9a0 (PARAM)
// 00547bb5: MOV EAX,0x547
// 00547bba: PUSH 0x63e9b1
//   XREF to: 0063e9b1 (DATA)
// 00547bbf: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00547bc5: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00547bca: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00547bcf: ADD ESP,0x4
// 00547bd2: JMP 0x00547a11
//   XREF to: 00547a11 (UNCONDITIONAL_JUMP)
// 00547bd7: MOV EDX,0x63e9c1
//   Label: LAB_00547bd7
//   XREF to: 0063e9c1 (PARAM)
// 00547bdc: MOV ECX,0x548
// 00547be1: PUSH 0x63e9d2
//   XREF to: 0063e9d2 (DATA)
// 00547be6: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00547bec: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00547bf2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00547bf7: ADD ESP,0x4
// 00547bfa: JMP 0x00547a19
//   XREF to: 00547a19 (UNCONDITIONAL_JUMP)
