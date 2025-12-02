// Name: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
// Address: 004ef490
// Address Range: [[004ef490, 004ef87d]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround * this_ptr)
// Cross-references:
//   core_ground.cpp_CGround_render_FUN_004efc90 (004efc90) at 004efcd7 [UNCONDITIONAL_CALL]
// Globals:
//   CMatrix3x3i g_InverseMatrix
//   undefined4 g_InverseMatrix[0][1]
//   undefined4 g_InverseMatrix[0][2]
//   undefined4 g_InverseMatrix[1][0]
//   undefined4 g_InverseMatrix[1][1]
//   undefined4 g_InverseMatrix[1][2]
//   undefined4 g_InverseMatrix[2][0]
//   undefined4 g_InverseMatrix[2][1]
//   undefined4 g_InverseMatrix[2][2]
// Function calls:
//   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int local_6c [6];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_30 = this_ptr->grid_height * this_ptr->vertical_scale;
  local_28 = local_30 * 0x100;
  local_6c[0] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)local_28) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x20) <<
                0x10);
  local_6c[1] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)local_28) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x20) <<
                0x10);
  local_6c[2] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)local_28) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x20) <<
                0x10);
  iVar3 = local_30 * -0x100;
  local_6c[3] = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x20) <<
                0x10);
  local_6c[4] = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x20) <<
                0x10);
  local_2c = local_30 * -0x100;
  local_6c[5] = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x20) <<
                0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_28) >> 0x10 |
                        (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_28) >>
                             0x20) << 0x10) +
                ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x10 |
                (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x20) <<
                0x10);
  local_54 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar3) >> 0x20) << 0x10)
             + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_2c) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_2c) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >>
                            0x20) << 0x10);
  local_50 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar3) >> 0x20) << 0x10)
             + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_2c) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_2c) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >>
                            0x20) << 0x10);
  local_30 = local_30 * 0x100;
  local_4c = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x20) << 0x10)
             + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_2c) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_2c) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >>
                            0x20) << 0x10);
  local_48 = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)local_30) >> 0x20) <<
             0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_2c) >> 0x10 |
                     (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_2c) >>
                          0x20) << 0x10) +
             ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_28) >> 0x20) <<
             0x10);
  local_44 = ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)local_30) >> 0x20) <<
             0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_2c) >> 0x10 |
                     (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_2c) >>
                          0x20) << 0x10) +
             ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_28) >> 0x20) <<
             0x10);
  local_40 = ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)local_30) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)local_30) >> 0x20) <<
             0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_2c) >> 0x10 |
                     (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_2c) >>
                          0x20) << 0x10) +
             ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x10 |
             (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_28) >> 0x20) <<
             0x10);
  local_38 = 0;
  local_34 = 0;
  local_14 = 999;
  local_3c = 0;
  local_18 = 999;
  iVar3 = -999;
  iVar4 = 0;
  local_20 = this_ptr->vertical_scale << 8;
  iVar5 = -999;
  do {
    iVar1 = *(int *)((int)local_6c + iVar4) / local_20;
    iVar2 = *(int *)((int)local_6c + iVar4 + 8) / local_20;
    if (iVar1 < local_14) {
      local_14 = iVar1;
    }
    if (iVar2 < local_18) {
      local_18 = iVar2;
    }
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 0xc;
  } while (iVar4 != 0x3c);
  local_18 = local_18 + -2;
  local_14 = local_14 + -2;
  this_ptr->visible_max_x = iVar3 + 2;
  this_ptr->visible_max_y = iVar5 + 2;
  this_ptr->visible_min_x = local_14;
  this_ptr->visible_min_y = local_18;
  local_1c = -this_ptr->grid_width;
  iVar3 = this_ptr->visible_min_x;
  if (iVar3 != local_1c && SBORROW4(iVar3,local_1c) == iVar3 + this_ptr->grid_width < 0) {
    local_1c = iVar3;
  }
  iVar3 = this_ptr->grid_width;
  if (this_ptr->visible_max_x < this_ptr->grid_width) {
    iVar3 = this_ptr->visible_max_x;
  }
  iVar5 = -this_ptr->grid_height;
  if (-this_ptr->grid_height < this_ptr->visible_min_y) {
    iVar5 = this_ptr->visible_min_y;
  }
  local_24 = this_ptr->grid_height;
  if (this_ptr->visible_max_y < this_ptr->grid_height) {
    local_24 = this_ptr->visible_max_y;
  }
  iVar4 = local_1c;
  if (iVar5 <= local_24) {
    do {
      for (; iVar4 <= iVar3; iVar4 = iVar4 + 1) {
        core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
                  (this_ptr,this_ptr->camera_x + iVar4,this_ptr->camera_y + iVar5);
      }
      iVar5 = iVar5 + 1;
      iVar4 = local_1c;
    } while (iVar5 <= local_24);
  }
  return;
}


// Assembly code:
// 004ef490: PUSH EBX
//   Label: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
// 004ef491: PUSH ESI
// 004ef492: PUSH EDI
// 004ef493: PUSH EBP
// 004ef494: SUB ESP,0x5c
// 004ef497: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 004ef49b: MOV EAX,dword ptr [ESI + 0x14]
// 004ef49e: IMUL EAX,dword ptr [ESI + 0x1c]
// 004ef4a2: SHL EAX,0x8
// 004ef4a5: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004ef4a9: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004ef4ad: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004ef4b1: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef4b5: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 004ef4ba: IMUL EDX
// 004ef4bc: SHRD EAX,EDX,0x10
// 004ef4c0: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef4c4: MOV ECX,EAX
// 004ef4c6: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 004ef4cb: IMUL EDX
// 004ef4cd: SHRD EAX,EDX,0x10
// 004ef4d1: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef4d5: ADD ECX,EAX
// 004ef4d7: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 004ef4dc: IMUL EDX
// 004ef4de: SHRD EAX,EDX,0x10
// 004ef4e2: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef4e6: ADD ECX,EAX
// 004ef4e8: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 004ef4ed: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x6c] (DATA)
// 004ef4f0: IMUL EDX
// 004ef4f2: SHRD EAX,EDX,0x10
// 004ef4f6: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef4fa: MOV ECX,EAX
// 004ef4fc: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 004ef501: IMUL EDX
// 004ef503: SHRD EAX,EDX,0x10
// 004ef507: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef50b: ADD ECX,EAX
// 004ef50d: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 004ef512: IMUL EDX
// 004ef514: SHRD EAX,EDX,0x10
// 004ef518: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef51c: ADD ECX,EAX
// 004ef51e: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 004ef523: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 004ef527: IMUL EDX
// 004ef529: SHRD EAX,EDX,0x10
// 004ef52d: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef531: MOV ECX,EAX
// 004ef533: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 004ef538: IMUL EDX
// 004ef53a: SHRD EAX,EDX,0x10
// 004ef53e: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef542: ADD ECX,EAX
// 004ef544: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 004ef549: IMUL EDX
// 004ef54b: SHRD EAX,EDX,0x10
// 004ef54f: ADD ECX,EAX
// 004ef551: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 004ef555: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef559: NEG ECX
// 004ef55b: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 004ef560: MOV EDX,ECX
// 004ef562: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 004ef566: IMUL EDX
// 004ef568: SHRD EAX,EDX,0x10
// 004ef56c: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 004ef570: MOV ECX,EAX
// 004ef572: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 004ef577: IMUL EDX
// 004ef579: SHRD EAX,EDX,0x10
// 004ef57d: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef581: ADD ECX,EAX
// 004ef583: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 004ef588: IMUL EDX
// 004ef58a: SHRD EAX,EDX,0x10
// 004ef58e: ADD ECX,EAX
// 004ef590: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 004ef594: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef598: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 004ef59d: IMUL EDX
// 004ef59f: SHRD EAX,EDX,0x10
// 004ef5a3: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 004ef5a7: MOV ECX,EAX
// 004ef5a9: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 004ef5ae: IMUL EDX
// 004ef5b0: SHRD EAX,EDX,0x10
// 004ef5b4: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef5b8: ADD ECX,EAX
// 004ef5ba: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 004ef5bf: IMUL EDX
// 004ef5c1: SHRD EAX,EDX,0x10
// 004ef5c5: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef5c9: ADD ECX,EAX
// 004ef5cb: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 004ef5d0: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x5c] (WRITE)
// 004ef5d4: IMUL EDX
// 004ef5d6: SHRD EAX,EDX,0x10
// 004ef5da: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 004ef5de: MOV ECX,EAX
// 004ef5e0: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 004ef5e5: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 004ef5e9: IMUL EDX
// 004ef5eb: SHRD EAX,EDX,0x10
// 004ef5ef: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef5f3: ADD ECX,EAX
// 004ef5f5: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 004ef5fa: NEG EBX
// 004ef5fc: IMUL EDX
// 004ef5fe: SHRD EAX,EDX,0x10
// 004ef602: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef606: ADD ECX,EAX
// 004ef608: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 004ef60d: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 004ef611: IMUL EDX
// 004ef613: SHRD EAX,EDX,0x10
// 004ef617: MOV ECX,EAX
// 004ef619: MOV EDX,EBX
// 004ef61b: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 004ef620: IMUL EDX
// 004ef622: SHRD EAX,EDX,0x10
// 004ef626: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef62a: ADD ECX,EAX
// 004ef62c: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 004ef631: IMUL EDX
// 004ef633: SHRD EAX,EDX,0x10
// 004ef637: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef63b: ADD ECX,EAX
// 004ef63d: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 004ef642: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 004ef646: IMUL EDX
// 004ef648: SHRD EAX,EDX,0x10
// 004ef64c: MOV ECX,EAX
// 004ef64e: MOV EDX,EBX
// 004ef650: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 004ef655: IMUL EDX
// 004ef657: SHRD EAX,EDX,0x10
// 004ef65b: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef65f: ADD ECX,EAX
// 004ef661: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 004ef666: IMUL EDX
// 004ef668: SHRD EAX,EDX,0x10
// 004ef66c: ADD ECX,EAX
// 004ef66e: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 004ef672: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 004ef676: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef67a: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 004ef67f: IMUL EDX
// 004ef681: SHRD EAX,EDX,0x10
// 004ef685: MOV ECX,EAX
// 004ef687: MOV EDX,EBX
// 004ef689: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 004ef68e: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 004ef692: IMUL EDX
// 004ef694: SHRD EAX,EDX,0x10
// 004ef698: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef69c: ADD ECX,EAX
// 004ef69e: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 004ef6a3: NEG EDI
// 004ef6a5: IMUL EDX
// 004ef6a7: SHRD EAX,EDX,0x10
// 004ef6ab: MOV EDX,EDI
// 004ef6ad: ADD ECX,EAX
// 004ef6af: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 004ef6b4: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 004ef6b8: IMUL EDX
// 004ef6ba: SHRD EAX,EDX,0x10
// 004ef6be: MOV ECX,EAX
// 004ef6c0: MOV EDX,EBX
// 004ef6c2: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 004ef6c7: IMUL EDX
// 004ef6c9: SHRD EAX,EDX,0x10
// 004ef6cd: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef6d1: ADD ECX,EAX
// 004ef6d3: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 004ef6d8: IMUL EDX
// 004ef6da: SHRD EAX,EDX,0x10
// 004ef6de: MOV EDX,EDI
// 004ef6e0: ADD ECX,EAX
// 004ef6e2: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 004ef6e7: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 004ef6eb: IMUL EDX
// 004ef6ed: SHRD EAX,EDX,0x10
// 004ef6f1: MOV ECX,EAX
// 004ef6f3: MOV EDX,EBX
// 004ef6f5: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 004ef6fa: IMUL EDX
// 004ef6fc: SHRD EAX,EDX,0x10
// 004ef700: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef704: ADD ECX,EAX
// 004ef706: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 004ef70b: IMUL EDX
// 004ef70d: SHRD EAX,EDX,0x10
// 004ef711: MOV EDX,EDI
// 004ef713: ADD ECX,EAX
// 004ef715: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 004ef71a: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 004ef71e: IMUL EDX
// 004ef720: SHRD EAX,EDX,0x10
// 004ef724: MOV ECX,EAX
// 004ef726: MOV EDX,EBX
// 004ef728: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 004ef72d: IMUL EDX
// 004ef72f: SHRD EAX,EDX,0x10
// 004ef733: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004ef737: ADD ECX,EAX
// 004ef739: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 004ef73e: IMUL EDX
// 004ef740: SHRD EAX,EDX,0x10
// 004ef744: ADD ECX,EAX
// 004ef746: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 004ef74a: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004ef74e: MOV ECX,0x3e7
// 004ef753: XOR EBP,EBP
// 004ef755: MOV EBX,0x3e7
// 004ef75a: MOV dword ptr [ESP + 0x34],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 004ef75e: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 004ef762: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004ef766: MOV dword ptr [ESP + 0x30],EBP
//   XREF to: Stack[-0x3c] (WRITE)
// 004ef76a: MOV dword ptr [ESP + 0x54],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004ef76e: MOV ECX,0xfffffc19
// 004ef773: MOV EAX,dword ptr [ESI + 0x1c]
// 004ef776: XOR EBX,EBX
// 004ef778: SHL EAX,0x8
// 004ef77b: MOV EBP,ECX
// 004ef77d: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004ef781: MOV EAX,dword ptr [ESP + EBX*0x1]
//   Label: LAB_004ef781
//   XREF to: Stack[-0x6c] (DATA)
// 004ef784: MOV EDX,EAX
// 004ef786: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x20] (READ)
// 004ef78a: SAR EDX,0x1f
// 004ef78d: IDIV EDI
// 004ef78f: MOV EDI,EAX
// 004ef791: MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8]
// 004ef795: MOV EDX,EAX
// 004ef797: SAR EDX,0x1f
// 004ef79a: IDIV dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x20] (READ)
// 004ef79e: CMP EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 004ef7a2: JL 0x004ef875
//   XREF to: 004ef875 (CONDITIONAL_JUMP)
// 004ef7a8: CMP EAX,dword ptr [ESP + 0x54]
//   Label: LAB_004ef7a8
//   XREF to: Stack[-0x18] (READ)
// 004ef7ac: JGE 0x004ef7b2
//   XREF to: 004ef7b2 (CONDITIONAL_JUMP)
// 004ef7ae: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004ef7b2: CMP EDI,ECX
//   Label: LAB_004ef7b2
// 004ef7b4: JLE 0x004ef7b8
//   XREF to: 004ef7b8 (CONDITIONAL_JUMP)
// 004ef7b6: MOV ECX,EDI
// 004ef7b8: CMP EAX,EBP
//   Label: LAB_004ef7b8
// 004ef7ba: JLE 0x004ef7be
//   XREF to: 004ef7be (CONDITIONAL_JUMP)
// 004ef7bc: MOV EBP,EAX
// 004ef7be: ADD EBX,0xc
//   Label: LAB_004ef7be
// 004ef7c1: CMP EBX,0x3c
// 004ef7c4: JNZ 0x004ef781
//   XREF to: 004ef781 (CONDITIONAL_JUMP)
// 004ef7c6: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x18] (READ)
// 004ef7ca: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 004ef7ce: ADD ECX,0x2
// 004ef7d1: ADD EBP,0x2
// 004ef7d4: MOV EAX,dword ptr [ESI + 0x10]
// 004ef7d7: SUB EDI,0x2
// 004ef7da: SUB EBX,0x2
// 004ef7dd: MOV dword ptr [ESI + 0x40],ECX
// 004ef7e0: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004ef7e4: MOV dword ptr [ESI + 0x48],EBP
// 004ef7e7: MOV dword ptr [ESP + 0x54],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004ef7eb: MOV EBP,EAX
// 004ef7ed: MOV dword ptr [ESI + 0x3c],EBX
// 004ef7f0: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004ef7f4: MOV dword ptr [ESI + 0x44],EDI
// 004ef7f7: NEG EBP
// 004ef7f9: MOV EAX,dword ptr [ESI + 0x3c]
// 004ef7fc: MOV dword ptr [ESP + 0x50],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004ef800: CMP EAX,EBP
// 004ef802: JLE 0x004ef808
//   XREF to: 004ef808 (CONDITIONAL_JUMP)
// 004ef804: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004ef808: MOV ECX,dword ptr [ESI + 0x40]
//   Label: LAB_004ef808
// 004ef80b: MOV EBP,dword ptr [ESI + 0x10]
// 004ef80e: CMP EBP,ECX
// 004ef810: JLE 0x004ef814
//   XREF to: 004ef814 (CONDITIONAL_JUMP)
// 004ef812: MOV EBP,ECX
// 004ef814: MOV EAX,dword ptr [ESI + 0x14]
//   Label: LAB_004ef814
// 004ef817: MOV EBX,dword ptr [ESI + 0x44]
// 004ef81a: NEG EAX
// 004ef81c: CMP EAX,EBX
// 004ef81e: JGE 0x004ef822
//   XREF to: 004ef822 (CONDITIONAL_JUMP)
// 004ef820: MOV EAX,EBX
// 004ef822: MOV ECX,dword ptr [ESI + 0x14]
//   Label: LAB_004ef822
// 004ef825: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004ef829: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x24] (READ)
// 004ef82d: MOV ECX,dword ptr [ESI + 0x48]
// 004ef830: CMP ECX,EDI
// 004ef832: JGE 0x004ef838
//   XREF to: 004ef838 (CONDITIONAL_JUMP)
// 004ef834: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004ef838: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_004ef838
//   XREF to: Stack[-0x24] (READ)
// 004ef83c: MOV EDI,EAX
// 004ef83e: CMP EAX,EDX
// 004ef840: JG 0x004ef86d
//   XREF to: 004ef86d (CONDITIONAL_JUMP)
// 004ef842: MOV EBX,dword ptr [ESP + 0x50]
//   Label: LAB_004ef842
//   XREF to: Stack[-0x1c] (READ)
// 004ef846: CMP EBP,EBX
// 004ef848: JL 0x004ef864
//   XREF to: 004ef864 (CONDITIONAL_JUMP)
// 004ef84a: MOV EAX,dword ptr [ESI + 0x30]
//   Label: LAB_004ef84a
// 004ef84d: ADD EAX,EDI
// 004ef84f: PUSH EAX
// 004ef850: MOV EAX,dword ptr [ESI + 0x2c]
// 004ef853: ADD EAX,EBX
// 004ef855: PUSH EAX
// 004ef856: PUSH ESI
// 004ef857: INC EBX
// 004ef858: CALL core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
//   XREF to: 004ef3a0 (UNCONDITIONAL_CALL)
// 004ef85d: ADD ESP,0xc
// 004ef860: CMP EBX,EBP
// 004ef862: JLE 0x004ef84a
//   XREF to: 004ef84a (CONDITIONAL_JUMP)
// 004ef864: MOV ECX,dword ptr [ESP + 0x48]
//   Label: LAB_004ef864
//   XREF to: Stack[-0x24] (READ)
// 004ef868: INC EDI
// 004ef869: CMP EDI,ECX
// 004ef86b: JLE 0x004ef842
//   XREF to: 004ef842 (CONDITIONAL_JUMP)
// 004ef86d: ADD ESP,0x5c
//   Label: LAB_004ef86d
// 004ef870: POP EBP
// 004ef871: POP EDI
// 004ef872: POP ESI
// 004ef873: POP EBX
// 004ef874: RET
// 004ef875: MOV dword ptr [ESP + 0x58],EDI
//   Label: LAB_004ef875
//   XREF to: Stack[-0x14] (WRITE)
// 004ef879: JMP 0x004ef7a8
//   XREF to: 004ef7a8 (UNCONDITIONAL_JUMP)
