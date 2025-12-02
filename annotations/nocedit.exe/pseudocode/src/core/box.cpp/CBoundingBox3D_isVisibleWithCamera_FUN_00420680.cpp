// Name: core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
// Address: 00420680
// Address Range: [[00420680, 0042083e]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D * this_ptr)
// Cross-references:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 (004204f0) at 004204fa [UNCONDITIONAL_CALL]
// Globals:
//   float g_BoundingBoxWorldToIntegerScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ
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
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D *this_ptr)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint uVar4;
  uint corner_index;
  int iVar5;
  int iVar6;
  int local_94 [24];
  CVector3f local_34;
  CVector3i local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar4 = 0xff;
  corner_index = 0;
  iVar6 = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(this_ptr,&local_34,corner_index);
    local_28.x = (int)ROUND(local_34.x * g_BoundingBoxWorldToIntegerScale);
    local_28.y = (int)ROUND(local_34.y * g_BoundingBoxWorldToIntegerScale);
    local_28.z = (int)ROUND(local_34.z * g_BoundingBoxWorldToIntegerScale);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar6),&local_28);
    if ((*(byte *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x +
                  iVar6 + 3) & 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 & *(uint *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                      screen_x + iVar6);
    }
    corner_index = corner_index + 1;
    iVar6 = iVar6 + 0x30;
  } while ((int)corner_index < 8);
  if (uVar4 == 0) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
      iVar2 = *(int *)((int)&(pSVar1->projected_vertex).transformed_x + iVar5);
      local_18 = *(int *)((int)&(pSVar1->projected_vertex).transformed_y + iVar5);
      local_14 = *(int *)((int)&(pSVar1->projected_vertex).transformed_z + iVar5);
      local_1c = iVar2;
      *(uint *)((int)local_94 + iVar6) =
           ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)local_14) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)local_14) >> 0x20) << 0x10
           ) + ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar2) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar2) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)local_18) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)local_18) >>
                            0x20) << 0x10) + g_CameraOriginX;
      iVar3 = local_1c;
      *(uint *)((int)local_94 + iVar6 + 4) =
           ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)local_14) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)local_14) >> 0x20) << 0x10
           ) + ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar2) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)iVar2) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)local_18) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)local_18) >>
                            0x20) << 0x10) + g_CameraOriginY;
      iVar5 = iVar5 + 0x30;
      *(uint *)((int)local_94 + iVar6 + 8) =
           ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)local_14) >> 0x10 |
           (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)local_14) >> 0x20) << 0x10
           ) + ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)iVar3) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)local_18) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)local_18) >>
                            0x20) << 0x10) + g_CameraOriginZ;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 != 0x180);
    iVar6 = (*(code *)((g_CurrentSceneCamera->base).vtable)->isVisible)();
    return iVar6;
  }
  return 0;
}


// Assembly code:
// 00420680: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
// 00420681: PUSH ESI
// 00420682: PUSH EDI
// 00420683: PUSH EBP
// 00420684: SUB ESP,0x84
// 0042068a: MOV EBP,0xff
// 0042068f: XOR ESI,ESI
// 00420691: XOR EDI,EDI
// 00420693: PUSH ESI
//   Label: LAB_00420693
// 00420694: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x34] (DATA)
// 00420698: PUSH EAX
// 00420699: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0x4] (READ)
// 004206a0: PUSH EDX
// 004206a1: LEA EBX,[ESP + 0x78]
//   XREF to: Stack[-0x28] (DATA)
// 004206a5: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 004206aa: ADD ESP,0xc
// 004206ad: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x34] (DATA)
// 004206b1: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004206b7: FLD float ptr [EAX]
//   XREF to: Stack[-0x34] (DATA)
// 004206b9: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004206bf: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 004206c1: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 004206c4: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004206ca: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 004206cd: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 004206d0: FMUL float ptr [0x0065b160]
//   XREF to: 0065b160 (READ)
// 004206d6: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 004206d9: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x28] (DATA)
// 004206dd: PUSH EAX
// 004206de: MOV EAX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 004206e0: ADD EAX,EDI
// 004206e2: PUSH EAX
// 004206e3: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004206e8: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004206ed: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004206ef: ADD EAX,EDI
// 004206f1: MOV DL,byte ptr [EAX + 0x13]
// 004206f4: ADD ESP,0x8
// 004206f7: TEST DL,0x80
// 004206fa: JZ 0x0042082b
//   XREF to: 0042082b (CONDITIONAL_JUMP)
// 00420700: AND EBP,dword ptr [EAX + 0x10]
// 00420703: INC ESI
//   Label: LAB_00420703
// 00420704: ADD EDI,0x30
// 00420707: CMP ESI,0x8
// 0042070a: JL 0x00420693
//   XREF to: 00420693 (CONDITIONAL_JUMP)
// 0042070c: TEST EBP,EBP
// 0042070e: JNZ 0x00420832
//   XREF to: 00420832 (CONDITIONAL_JUMP)
// 00420714: XOR ESI,ESI
// 00420716: XOR ECX,ECX
// 00420718: MOV EAX,[0x006703ec]
//   Label: LAB_00420718
//   XREF to: 006703ec (READ)
// 0042071d: MOV EDI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042071f: MOV EAX,dword ptr [EDI + ESI*0x1]
// 00420722: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00420726: MOV EAX,dword ptr [EDI + ESI*0x1 + 0x4]
// 0042072a: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042072e: MOV EAX,dword ptr [EDI + ESI*0x1 + 0x8]
// 00420732: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x1c] (READ)
// 00420736: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042073d: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 00420742: IMUL EDX
// 00420744: SHRD EAX,EDX,0x10
// 00420748: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x18] (READ)
// 0042074c: MOV EDI,EAX
// 0042074e: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 00420753: IMUL EDX
// 00420755: SHRD EAX,EDX,0x10
// 00420759: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 00420760: ADD EDI,EAX
// 00420762: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 00420767: IMUL EDX
// 00420769: SHRD EAX,EDX,0x10
// 0042076d: MOV EBX,dword ptr [0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 00420773: ADD EAX,EDI
// 00420775: ADD EAX,EBX
// 00420777: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x1c] (READ)
// 0042077b: MOV dword ptr [ESP + ECX*0x1],EAX
//   XREF to: Stack[-0x94] (DATA)
// 0042077e: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 00420783: IMUL EDX
// 00420785: SHRD EAX,EDX,0x10
// 00420789: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x18] (READ)
// 0042078d: MOV EDI,EAX
// 0042078f: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 00420794: IMUL EDX
// 00420796: SHRD EAX,EDX,0x10
// 0042079a: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 004207a1: ADD EDI,EAX
// 004207a3: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 004207a8: IMUL EDX
// 004207aa: SHRD EAX,EDX,0x10
// 004207ae: ADD EAX,EDI
// 004207b0: ADD EAX,dword ptr [0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 004207b6: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x1c] (READ)
// 004207ba: MOV dword ptr [ESP + ECX*0x1 + 0x4],EAX
// 004207be: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 004207c3: IMUL EDX
// 004207c5: SHRD EAX,EDX,0x10
// 004207c9: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x18] (READ)
// 004207cd: MOV EBX,EAX
// 004207cf: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 004207d4: IMUL EDX
// 004207d6: SHRD EAX,EDX,0x10
// 004207da: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 004207e1: ADD EBX,EAX
// 004207e3: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 004207e8: IMUL EDX
// 004207ea: SHRD EAX,EDX,0x10
// 004207ee: MOV EBP,dword ptr [0x02d052cc]
//   XREF to: 02d052cc (READ)
// 004207f4: ADD EAX,EBX
// 004207f6: ADD ECX,0xc
// 004207f9: ADD EAX,EBP
// 004207fb: ADD ESI,0x30
// 004207fe: MOV dword ptr [ESP + ECX*0x1 + -0x4],EAX
// 00420802: CMP ESI,0x180
// 00420808: JNZ 0x00420718
//   XREF to: 00420718 (CONDITIONAL_JUMP)
// 0042080e: MOV EBX,ESP
// 00420810: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 00420815: PUSH EBX
// 00420816: MOV ECX,dword ptr [EAX + 0x3c]
// 00420819: PUSH EAX
// 0042081a: CALL dword ptr [ECX + 0xc]
// 0042081d: ADD ESP,0x8
// 00420820: ADD ESP,0x84
// 00420826: POP EBP
// 00420827: POP EDI
// 00420828: POP ESI
// 00420829: POP EBX
// 0042082a: RET
// 0042082b: XOR EBP,EBP
//   Label: LAB_0042082b
// 0042082d: JMP 0x00420703
//   XREF to: 00420703 (UNCONDITIONAL_JUMP)
// 00420832: XOR EAX,EAX
//   Label: LAB_00420832
// 00420834: ADD ESP,0x84
// 0042083a: POP EBP
// 0042083b: POP EDI
// 0042083c: POP ESI
// 0042083d: POP EBX
// 0042083e: RET
