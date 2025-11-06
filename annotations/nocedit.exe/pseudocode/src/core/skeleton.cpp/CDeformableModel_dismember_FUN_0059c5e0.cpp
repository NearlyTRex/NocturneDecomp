// Name: core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
// Address: 0059c5e0
// Address Range: [[0059c5e0, 0059cb9a]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel * this_ptr, int lod_index, CBodyPart * body_part_ptr, int part_index, int num_parts_to_dismember, int texture_set_index, CVector3i * skinned_vertices)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040 (005a1040) at 005a10c8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064eb04
//   TerminatedCString s_CDeformableModel_dismemb_0064eb19
//   TerminatedCString s_core_skeleton_cpp_0064eb53
//   TerminatedCString s_CDeformableModel_dismemb_0064eb68
//   TerminatedCString s_core_skeleton_cpp_0064eb99
//   TerminatedCString s_CDeformableModel_dismemb_0064ebae
//   TerminatedCString s_core_skeleton_cpp_0064ebda
//   TerminatedCString s_CDeformableModel_dismemb_0064ebef
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int[4000] g_VertexRemapTable
//   undefined4 DAT_03671300
// Function calls:
//   core_bodypart.cpp_CBodyPart_FUN_0041af90
//   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0
          (CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,
          int num_parts_to_dismember,int texture_set_index,CVector3i *skinned_vertices)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined4 *in_stack_00000020;
  int in_stack_ffffffb8;
  int local_44;
  int local_40;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iVar11;
  
  bVar10 = 0;
  if (body_part_ptr != (CBodyPart *)0x0) {
    if (this_ptr->lod_info[lod_index].shadow_only_flag != 0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x63d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - can't dismember shadow LOD.");
    }
    iVar3 = (int)body_part_ptr * 4;
    local_2c = *(int *)(lod_index + iVar3 + 0x54);
    local_28 = 0;
    iVar4 = 0;
    iVar2 = lod_index + iVar3;
    if (0 < num_parts_to_dismember) {
      do {
        iVar4 = iVar4 + 1;
        local_28 = local_28 + *(int *)(iVar2 + 0x7164);
        local_2c = local_2c + *(int *)(iVar2 + 0x7178);
        iVar2 = iVar2 + 0x60;
      } while (iVar4 < num_parts_to_dismember);
    }
    iVar2 = num_parts_to_dismember * 0x60 + lod_index;
    local_2c = local_2c + *(int *)(iVar3 + 0x7178 + iVar2);
    if (4000 < *(int *)(iVar3 + lod_index + 0x2c)) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x652;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CDeformableModel::dismember - too many vertices!",local_28 + *(int *)(iVar3 + 0x7164 + iVar2));
    }
    iVar2 = (int)body_part_ptr * 4 + lod_index;
    crt_memory_c_memset_FUN_005fde40(g_VertexRemapTable,0,*(int *)(iVar2 + 0x2c) << 2);
    if (local_24 < local_2c) {
      iVar3 = local_24 * 0x12;
      do {
        iVar4 = *(int *)(iVar2 + 0x7c);
        g_VertexRemapTable[*(ushort *)(iVar4 + iVar3)] = 1;
        g_VertexRemapTable[*(ushort *)(iVar4 + 2 + iVar3)] = 1;
        puVar6 = (ushort *)(iVar4 + 4 + iVar3);
        iVar3 = iVar3 + 0x12;
        g_VertexRemapTable[*puVar6] = 1;
      } while (SBORROW4(iVar3,local_2c * 0x12) != iVar3 + local_2c * -0x12 < 0);
    }
    if (local_28 < in_stack_ffffffb8) {
      local_28 = local_28 * 0x12;
      do {
        iVar2 = *(int *)((body_part_ptr->base_actor).create_event + part_index * 4 + 4);
        g_VertexRemapTable[*(ushort *)(iVar2 + local_28)] = 1;
        g_VertexRemapTable[*(ushort *)(iVar2 + 2 + local_28)] = 1;
        puVar6 = (ushort *)(iVar2 + 4 + local_28);
        local_28 = local_28 + 0x12;
        g_VertexRemapTable[*puVar6] = 1;
      } while (SBORROW4(local_28,in_stack_ffffffb8 * 0x12) !=
               local_28 + in_stack_ffffffb8 * -0x12 < 0);
    }
    iVar2 = *(int *)(body_part_ptr->field1_0x158 + 0x1c);
    for (iVar3 = 0;
        iVar3 < *(int *)((int)(body_part_ptr->base_actor).orient_matrix.m + part_index * 4 + -0x10);
        iVar3 = iVar3 + 1) {
    }
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(body_part_ptr);
    iVar5 = part_index + num_parts_to_dismember * 4;
    iVar11 = 0;
    iVar4 = 0;
    iVar3 = iVar2 * 0xc;
    if (0 < *(int *)(iVar5 + 0x2c)) {
      do {
        if (*(int *)((int)g_VertexRemapTable + iVar4) == 0) {
          *(undefined4 *)((int)g_VertexRemapTable + iVar4) = 0xffffffff;
        }
        else {
          *(int *)((int)g_VertexRemapTable + iVar4) = iVar2;
          puVar8 = (undefined4 *)(*(int *)(body_part_ptr->field1_0x158 + 0x20) + iVar3);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0xc;
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          *puVar8 = *in_stack_00000020;
          *puVar9 = in_stack_00000020[(uint)bVar10 * -2 + 1];
          puVar9[(uint)bVar10 * -2 + 1] =
               (in_stack_00000020 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + 4;
        in_stack_00000020 = in_stack_00000020 + 3;
      } while (iVar11 < *(int *)(iVar5 + 0x2c));
    }
    if (iVar2 != *(int *)(body_part_ptr->field1_0x158 + 0x1c)) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x688;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 1!");
    }
    if (local_1c < local_44) {
      iVar3 = local_1c * 0x12;
      iVar4 = unaff_EBX * 0x3c;
      local_18 = unaff_EBX << 2;
      iVar2 = local_1c * 4;
      do {
        iVar5 = *(int *)(body_part_ptr->field1_0x158 + 0x2c) + iVar4;
        puVar6 = (ushort *)(*(int *)(num_parts_to_dismember + texture_set_index * 4 + 0x7c) + iVar3)
        ;
        *(undefined4 *)(iVar5 + 4) = 3;
        puVar7 = puVar6 + 3;
        do {
          *(int *)(iVar5 + 0x18) = g_VertexRemapTable[*puVar6];
          *(uint *)(iVar5 + 0x1c) = (uint)puVar6[3] << 8;
          puVar1 = puVar6 + 6;
          puVar6 = puVar6 + 1;
          *(uint *)(iVar5 + 0x20) = (uint)*puVar1 << 8;
          iVar5 = iVar5 + 0xc;
        } while (puVar6 != puVar7);
        iVar4 = iVar4 + 0x3c;
        iVar5 = core_bodypart_cpp_CBodyPart_FUN_0041af90(body_part_ptr);
        iVar3 = iVar3 + 0x12;
        iVar2 = iVar2 + 4;
        *(int *)(*(int *)(body_part_ptr->field1_0x158 + 0x30) + local_18) = iVar5;
        local_18 = local_18 + 4;
        unaff_EBX = unaff_EBX + 1;
      } while (iVar2 < local_44 * 4);
    }
    if (local_20 < local_40) {
      local_14 = local_20 * 0x12;
      iVar2 = unaff_EBX * 0x3c;
      iVar4 = unaff_EBX << 2;
      iVar3 = local_20 << 2;
      do {
        iVar5 = *(int *)(body_part_ptr->field1_0x158 + 0x2c) + iVar2;
        puVar6 = (ushort *)
                 (*(int *)(num_parts_to_dismember + texture_set_index * 4 + 0x7c) + local_14);
        *(undefined4 *)(iVar5 + 4) = 3;
        puVar7 = puVar6 + 3;
        do {
          *(int *)(iVar5 + 0x18) = g_VertexRemapTable[*puVar6];
          *(uint *)(iVar5 + 0x1c) = (uint)puVar6[3] << 8;
          puVar1 = puVar6 + 6;
          puVar6 = puVar6 + 1;
          *(uint *)(iVar5 + 0x20) = (uint)*puVar1 << 8;
          iVar5 = iVar5 + 0xc;
        } while (puVar6 != puVar7);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 4;
        iVar5 = core_bodypart_cpp_CBodyPart_FUN_0041af90(body_part_ptr);
        *(int *)(*(int *)(body_part_ptr->field1_0x158 + 0x30) + -4 + iVar4) = iVar5;
        iVar2 = iVar2 + 0x3c;
        unaff_EBX = unaff_EBX + 1;
        local_14 = local_14 + 0x12;
      } while (iVar3 < local_40 << 2);
    }
    if (unaff_EBX != *(int *)(body_part_ptr->field1_0x158 + 0x28)) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x6bf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::dismember - Hell froze 2!");
      return;
    }
  }
  return;
}


// Assembly code:
// 0059c5e0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
// 0059c5e1: PUSH ESI
// 0059c5e2: PUSH EDI
// 0059c5e3: PUSH EBP
// 0059c5e4: SUB ESP,0x44
// 0059c5e7: MOV EBP,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 0059c5eb: TEST EBP,EBP
// 0059c5ed: JZ 0x0059cb59
//   XREF to: 0059cb59 (CONDITIONAL_JUMP)
// 0059c5f3: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0059c5f7: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059c5fb: SHL EAX,0x3
// 0059c5fe: ADD EAX,EDX
// 0059c600: CMP dword ptr [EAX + 0x8],0x0
// 0059c604: JNZ 0x0059c7e6
//   XREF to: 0059c7e6 (CONDITIONAL_JUMP)
// 0059c60a: MOV ECX,dword ptr [ESP + 0x5c]
//   Label: LAB_0059c60a
//   XREF to: Stack[0x8] (READ)
// 0059c60e: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059c612: SHL ECX,0x2
// 0059c615: ADD EAX,ECX
// 0059c617: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x10] (READ)
// 0059c61b: XOR EDI,EDI
// 0059c61d: MOV EDX,dword ptr [EAX + 0x54]
// 0059c620: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0059c624: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0059c628: XOR EDX,EDX
// 0059c62a: TEST EBX,EBX
// 0059c62c: JLE 0x0059c660
//   XREF to: 0059c660 (CONDITIONAL_JUMP)
// 0059c62e: MOV ESI,dword ptr [ESP + 0x28]
//   Label: LAB_0059c62e
//   XREF to: Stack[-0x2c] (READ)
// 0059c632: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0059c636: MOV EBX,dword ptr [EAX + 0x7164]
// 0059c63c: ADD EAX,0x60
// 0059c63f: INC EDX
// 0059c640: ADD ESI,EBX
// 0059c642: MOV EBX,dword ptr [EAX + 0x7118]
// 0059c648: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0059c64c: ADD EDI,EBX
// 0059c64e: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x10] (READ)
// 0059c652: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0059c656: CMP EDX,EBX
// 0059c658: JL 0x0059c62e
//   XREF to: 0059c62e (CONDITIONAL_JUMP)
// 0059c65a: LEA EAX,[EAX]
// 0059c660: MOV EDX,dword ptr [ESP + 0x64]
//   Label: LAB_0059c660
//   XREF to: Stack[0x10] (READ)
// 0059c664: LEA EAX,[EDX*0x4 + 0x0]
// 0059c66b: SUB EAX,EDX
// 0059c66d: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059c671: SHL EAX,0x5
// 0059c674: ADD EAX,ESI
// 0059c676: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 0059c67a: ADD EDX,dword ptr [ECX + EAX*0x1 + 0x7164]
// 0059c681: MOV EBX,dword ptr [ECX + EAX*0x1 + 0x7178]
// 0059c688: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x54] (DATA)
// 0059c68b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0059c68f: ADD ECX,ESI
// 0059c691: ADD EDX,EBX
// 0059c693: MOV EDI,dword ptr [ECX + 0x2c]
// 0059c696: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0059c69a: CMP EDI,0xfa0
// 0059c6a0: JLE 0x0059c6c4
//   XREF to: 0059c6c4 (CONDITIONAL_JUMP)
// 0059c6a2: MOV EAX,0x64eb53
//   XREF to: 0064eb53 (PARAM)
// 0059c6a7: MOV EDX,0x652
// 0059c6ac: PUSH 0x64eb68
//   XREF to: 0064eb68 (DATA)
// 0059c6b1: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0059c6b6: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0059c6bc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059c6c1: ADD ESP,0x4
// 0059c6c4: MOV ESI,dword ptr [ESP + 0x5c]
//   Label: LAB_0059c6c4
//   XREF to: Stack[0x8] (READ)
// 0059c6c8: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059c6cc: SHL ESI,0x2
// 0059c6cf: ADD ESI,ECX
// 0059c6d1: MOV EAX,dword ptr [ESI + 0x2c]
// 0059c6d4: SHL EAX,0x2
// 0059c6d7: PUSH EAX
// 0059c6d8: PUSH 0x0
// 0059c6da: PUSH 0x36712fc
//   XREF to: 036712fc (DATA)
// 0059c6df: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0059c6e4: ADD ESP,0xc
// 0059c6e7: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 0059c6eb: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 0059c6ee: CMP EAX,EBX
// 0059c6f0: JGE 0x0059c740
//   XREF to: 0059c740 (CONDITIONAL_JUMP)
// 0059c6f2: MOV EDX,EAX
// 0059c6f4: SHL EAX,0x3
// 0059c6f7: ADD EAX,EDX
// 0059c6f9: MOV EDX,EBX
// 0059c6fb: SHL EBX,0x3
// 0059c6fe: MOV EDI,0x1
// 0059c703: ADD EBX,EDX
// 0059c705: ADD EAX,EAX
// 0059c707: ADD EBX,EBX
// 0059c709: MOV EDX,dword ptr [ESI + 0x7c]
//   Label: LAB_0059c709
// 0059c70c: XOR ECX,ECX
// 0059c70e: MOV CX,word ptr [EDX + EAX*0x1]
// 0059c712: MOV dword ptr [ECX*0x4 + 0x36712fc],EDI
//   XREF to: 036712fc (DATA)
// 0059c719: XOR ECX,ECX
// 0059c71b: MOV CX,word ptr [EDX + EAX*0x1 + 0x2]
// 0059c720: MOV dword ptr [ECX*0x4 + 0x36712fc],EDI
//   XREF to: 036712fc (DATA)
// 0059c727: MOV DX,word ptr [EDX + EAX*0x1 + 0x4]
// 0059c72c: AND EDX,0xffff
// 0059c732: ADD EAX,0x12
// 0059c735: MOV dword ptr [EDX*0x4 + 0x36712fc],EDI
//   XREF to: 036712fc (DATA)
// 0059c73c: CMP EAX,EBX
// 0059c73e: JL 0x0059c709
//   XREF to: 0059c709 (CONDITIONAL_JUMP)
// 0059c740: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0059c740
//   XREF to: Stack[-0x30] (READ)
// 0059c744: CMP EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 0059c748: JGE 0x0059c7b0
//   XREF to: 0059c7b0 (CONDITIONAL_JUMP)
// 0059c74a: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0059c74e: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059c752: MOV EDX,EAX
// 0059c754: SHL EAX,0x3
// 0059c757: SHL EDI,0x2
// 0059c75a: ADD EAX,EDX
// 0059c75c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 0059c760: ADD EDI,EBX
// 0059c762: LEA EBX,[EDX*0x8 + 0x0]
// 0059c769: MOV ESI,0x1
// 0059c76e: ADD EBX,EDX
// 0059c770: ADD EAX,EAX
// 0059c772: ADD EBX,EBX
// 0059c774: MOV EDX,dword ptr [EDI + 0x7c]
//   Label: LAB_0059c774
// 0059c777: XOR ECX,ECX
// 0059c779: MOV CX,word ptr [EDX + EAX*0x1]
// 0059c77d: MOV dword ptr [ECX*0x4 + 0x36712fc],ESI
//   XREF to: 036712fc (DATA)
// 0059c784: XOR ECX,ECX
// 0059c786: MOV CX,word ptr [EDX + EAX*0x1 + 0x2]
// 0059c78b: MOV dword ptr [ECX*0x4 + 0x36712fc],ESI
//   XREF to: 036712fc (DATA)
// 0059c792: MOV DX,word ptr [EDX + EAX*0x1 + 0x4]
// 0059c797: AND EDX,0xffff
// 0059c79d: ADD EAX,0x12
// 0059c7a0: MOV dword ptr [EDX*0x4 + 0x36712fc],ESI
//   XREF to: 036712fc (DATA)
// 0059c7a7: CMP EAX,EBX
// 0059c7a9: JL 0x0059c774
//   XREF to: 0059c774 (CONDITIONAL_JUMP)
// 0059c7ab: LEA EAX,[EAX]
// 0059c7ae: MOV ECX,ECX
// 0059c7b0: MOV EDI,dword ptr [ESP + 0x5c]
//   Label: LAB_0059c7b0
//   XREF to: Stack[0x8] (READ)
// 0059c7b4: MOV EAX,dword ptr [EBP + 0x180]
// 0059c7ba: MOV EBX,dword ptr [EBP + 0x174]
// 0059c7c0: XOR EDX,EDX
// 0059c7c2: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059c7c6: MOV ECX,EBX
// 0059c7c8: SHL EDI,0x2
// 0059c7cb: XOR EAX,EAX
// 0059c7cd: MOV ESI,dword ptr [ESP + 0x58]
//   Label: LAB_0059c7cd
//   XREF to: Stack[0x4] (READ)
// 0059c7d1: CMP EAX,dword ptr [EDI + ESI*0x1 + 0x2c]
// 0059c7d5: JGE 0x0059c811
//   XREF to: 0059c811 (CONDITIONAL_JUMP)
// 0059c7d7: CMP dword ptr [EDX + 0x36712fc],0x0
//   XREF to: 036712fc (READ)
//   XREF to: 03671300 (READ)
// 0059c7de: JNZ 0x0059c80e
//   XREF to: 0059c80e (CONDITIONAL_JUMP)
// 0059c7e0: INC EAX
//   Label: LAB_0059c7e0
// 0059c7e1: ADD EDX,0x4
// 0059c7e4: JMP 0x0059c7cd
//   XREF to: 0059c7cd (UNCONDITIONAL_JUMP)
// 0059c7e6: MOV EBX,0x64eb04
//   Label: LAB_0059c7e6
//   XREF to: 0064eb04 (PARAM)
// 0059c7eb: MOV ESI,0x63d
// 0059c7f0: PUSH 0x64eb19
//   XREF to: 0064eb19 (DATA)
// 0059c7f5: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0059c7fb: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0059c801: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059c806: ADD ESP,0x4
// 0059c809: JMP 0x0059c60a
//   XREF to: 0059c60a (UNCONDITIONAL_JUMP)
// 0059c80e: INC ECX
//   Label: LAB_0059c80e
// 0059c80f: JMP 0x0059c7e0
//   XREF to: 0059c7e0 (UNCONDITIONAL_JUMP)
// 0059c811: MOV EDX,dword ptr [ESP + 0x64]
//   Label: LAB_0059c811
//   XREF to: Stack[0x10] (READ)
// 0059c815: LEA EAX,[EDX*0x4 + 0x0]
// 0059c81c: SUB EAX,EDX
// 0059c81e: SHL EAX,0x5
// 0059c821: ADD EAX,ESI
// 0059c823: ADD EDI,EAX
// 0059c825: MOV EAX,dword ptr [EBP + 0x180]
// 0059c82b: MOV EDX,dword ptr [EDI + 0x7164]
// 0059c831: MOV ESI,dword ptr [EDI + 0x7178]
// 0059c837: ADD EAX,EDX
// 0059c839: ADD EAX,ESI
// 0059c83b: PUSH EAX
// 0059c83c: PUSH ECX
// 0059c83d: PUSH EBP
// 0059c83e: CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   XREF to: 004191d0 (UNCONDITIONAL_CALL)
// 0059c843: ADD ESP,0xc
// 0059c846: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0059c84a: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059c84e: SHL EAX,0x2
// 0059c851: XOR EDI,EDI
// 0059c853: ADD EDX,EAX
// 0059c855: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0059c859: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0059c85d: LEA EDX,[EBX*0x4 + 0x0]
// 0059c864: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0059c868: SUB EDX,EBX
// 0059c86a: XOR EAX,EAX
// 0059c86c: LEA ECX,[EDX*0x4 + 0x0]
// 0059c873: MOV EDI,dword ptr [ESI + 0x2c]
// 0059c876: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x14] (READ)
// 0059c87a: TEST EDI,EDI
// 0059c87c: JLE 0x0059c8bc
//   XREF to: 0059c8bc (CONDITIONAL_JUMP)
// 0059c87e: CMP dword ptr [EAX + 0x36712fc],0x0
//   Label: LAB_0059c87e
//   XREF to: 036712fc (READ)
//   XREF to: 03671300 (READ)
// 0059c885: JZ 0x0059cb61
//   XREF to: 0059cb61 (CONDITIONAL_JUMP)
// 0059c88b: MOV dword ptr [EAX + 0x36712fc],EBX
//   XREF to: 036712fc (WRITE)
//   XREF to: 03671300 (WRITE)
// 0059c891: MOV EDI,dword ptr [EBP + 0x178]
// 0059c897: MOV ESI,EDX
// 0059c899: ADD EDI,ECX
// 0059c89b: INC EBX
// 0059c89c: ADD ECX,0xc
// 0059c89f: MOVSD ES:EDI,ESI
// 0059c8a0: MOVSD ES:EDI,ESI
// 0059c8a1: MOVSD ES:EDI,ESI
// 0059c8a2: MOV EDI,dword ptr [ESP + 0x3c]
//   Label: LAB_0059c8a2
//   XREF to: Stack[-0x18] (READ)
// 0059c8a6: INC EDI
// 0059c8a7: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0059c8ab: MOV ESI,EDI
// 0059c8ad: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0059c8b1: ADD EAX,0x4
// 0059c8b4: ADD EDX,0xc
// 0059c8b7: CMP ESI,dword ptr [EDI + 0x2c]
// 0059c8ba: JL 0x0059c87e
//   XREF to: 0059c87e (CONDITIONAL_JUMP)
// 0059c8bc: CMP EBX,dword ptr [EBP + 0x174]
//   Label: LAB_0059c8bc
// 0059c8c2: JZ 0x0059c8e7
//   XREF to: 0059c8e7 (CONDITIONAL_JUMP)
// 0059c8c4: MOV EDX,0x64eb99
//   XREF to: 0064eb99 (PARAM)
// 0059c8c9: MOV ECX,0x688
// 0059c8ce: PUSH 0x64ebae
//   XREF to: 0064ebae (DATA)
// 0059c8d3: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0059c8d9: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0059c8df: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059c8e4: ADD ESP,0x4
// 0059c8e7: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0059c8e7
//   XREF to: Stack[-0x2c] (READ)
// 0059c8eb: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 0059c8ee: CMP EAX,EBX
// 0059c8f0: JGE 0x0059ca19
//   XREF to: 0059ca19 (CONDITIONAL_JUMP)
// 0059c8f6: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0059c8fa: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059c8fe: SHL EAX,0x2
// 0059c901: ADD EDX,EAX
// 0059c903: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0059c907: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x18] (READ)
// 0059c90b: LEA EAX,[EDX*0x4 + 0x0]
// 0059c912: SUB EAX,EDX
// 0059c914: SHL EAX,0x7
// 0059c917: MOV EDX,EAX
// 0059c919: SHL EAX,0x4
// 0059c91c: SUB EAX,EDX
// 0059c91e: MOV EDX,EAX
// 0059c920: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059c924: ADD EAX,0xc0
// 0059c929: ADD EAX,EDX
// 0059c92b: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 0059c92f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0059c933: LEA EAX,[EDX*0x8 + 0x0]
// 0059c93a: ADD EAX,EDX
// 0059c93c: ADD EAX,EAX
// 0059c93e: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059c942: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0059c946: SHL EAX,0x2
// 0059c949: MOV EDI,EAX
// 0059c94b: SHL EDI,0x4
// 0059c94e: SUB EDI,EAX
// 0059c950: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0059c954: SHL EAX,0x2
// 0059c957: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0059c95b: LEA EAX,[EBX*0x4 + 0x0]
// 0059c962: LEA ESI,[EDX*0x4 + 0x0]
// 0059c969: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0059c96d: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_0059c96d
//   XREF to: Stack[-0x34] (READ)
// 0059c971: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0059c975: MOV EDX,dword ptr [EBP + 0x184]
// 0059c97b: MOV EBX,dword ptr [EBX + 0x7c]
// 0059c97e: ADD EDX,EDI
// 0059c980: ADD EBX,EAX
// 0059c982: MOV dword ptr [EDX + 0x4],0x3
// 0059c989: MOV EAX,EBX
// 0059c98b: ADD EBX,0x6
// 0059c98e: XOR ECX,ECX
//   Label: LAB_0059c98e
// 0059c990: MOV CX,word ptr [EAX]
// 0059c993: MOV ECX,dword ptr [ECX*0x4 + 0x36712fc]
//   XREF to: 036712fc (DATA)
// 0059c99a: MOV dword ptr [EDX + 0x18],ECX
// 0059c99d: XOR ECX,ECX
// 0059c99f: MOV CX,word ptr [EAX + 0x6]
// 0059c9a3: SHL ECX,0x8
// 0059c9a6: MOV dword ptr [EDX + 0x1c],ECX
// 0059c9a9: XOR ECX,ECX
// 0059c9ab: MOV CX,word ptr [EAX + 0xc]
// 0059c9af: ADD EDX,0xc
// 0059c9b2: SHL ECX,0x8
// 0059c9b5: ADD EAX,0x2
// 0059c9b8: MOV dword ptr [EDX + 0x14],ECX
// 0059c9bb: CMP EAX,EBX
// 0059c9bd: JNZ 0x0059c98e
//   XREF to: 0059c98e (CONDITIONAL_JUMP)
// 0059c9bf: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 0059c9c3: MOV EAX,dword ptr [EAX + 0x90]
// 0059c9c9: IMUL EAX,dword ptr [ESI + EAX*0x1],0x48
// 0059c9cd: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4c] (READ)
// 0059c9d1: ADD EAX,0x8
// 0059c9d4: PUSH EAX
// 0059c9d5: PUSH EBP
// 0059c9d6: ADD EDI,0x3c
// 0059c9d9: CALL core_bodypart.cpp_CBodyPart_FUN_0041af90
//   XREF to: 0041af90 (UNCONDITIONAL_CALL)
// 0059c9de: ADD ESP,0x8
// 0059c9e1: MOV EDX,dword ptr [EBP + 0x188]
// 0059c9e7: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0059c9eb: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0059c9ef: ADD ECX,0x12
// 0059c9f2: ADD EDX,EBX
// 0059c9f4: ADD ESI,0x4
// 0059c9f7: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0059c9fb: MOV dword ptr [EDX],EAX
// 0059c9fd: LEA EAX,[EBX + 0x4]
// 0059ca00: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0059ca04: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (READ)
// 0059ca08: INC EDX
// 0059ca09: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0059ca0d: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0059ca11: CMP ESI,EBX
// 0059ca13: JL 0x0059c96d
//   XREF to: 0059c96d (CONDITIONAL_JUMP)
// 0059ca19: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0059ca19
//   XREF to: Stack[-0x30] (READ)
// 0059ca1d: CMP EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 0059ca21: JGE 0x0059cb4d
//   XREF to: 0059cb4d (CONDITIONAL_JUMP)
// 0059ca27: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0059ca2b: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059ca2f: SHL EAX,0x2
// 0059ca32: ADD EDX,EAX
// 0059ca34: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0059ca38: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x18] (READ)
// 0059ca3c: LEA EAX,[EDX*0x4 + 0x0]
// 0059ca43: SUB EAX,EDX
// 0059ca45: SHL EAX,0x7
// 0059ca48: MOV EDX,EAX
// 0059ca4a: SHL EAX,0x4
// 0059ca4d: SUB EAX,EDX
// 0059ca4f: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0059ca53: ADD EDX,0xc0
// 0059ca59: ADD EDX,EAX
// 0059ca5b: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0059ca5f: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0059ca63: LEA EAX,[EDX*0x8 + 0x0]
// 0059ca6a: ADD EAX,EDX
// 0059ca6c: ADD EAX,EAX
// 0059ca6e: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059ca72: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0059ca76: SHL EAX,0x2
// 0059ca79: MOV EDX,EAX
// 0059ca7b: SHL EAX,0x4
// 0059ca7e: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0059ca82: SUB EAX,EDX
// 0059ca84: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0059ca88: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059ca8c: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x50] (READ)
// 0059ca90: SHL EDI,0x2
// 0059ca93: SHL EAX,0x2
// 0059ca96: SHL ESI,0x2
// 0059ca99: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0059ca9d: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_0059ca9d
//   XREF to: Stack[-0x1c] (READ)
// 0059caa1: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0059caa5: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0059caa9: MOV EDX,dword ptr [EBP + 0x184]
// 0059caaf: MOV EBX,dword ptr [EBX + 0x7c]
// 0059cab2: ADD EDX,EAX
// 0059cab4: ADD EBX,ECX
// 0059cab6: MOV dword ptr [EDX + 0x4],0x3
// 0059cabd: MOV EAX,EBX
// 0059cabf: ADD EBX,0x6
// 0059cac2: XOR ECX,ECX
//   Label: LAB_0059cac2
// 0059cac4: MOV CX,word ptr [EAX]
// 0059cac7: MOV ECX,dword ptr [ECX*0x4 + 0x36712fc]
//   XREF to: 036712fc (DATA)
// 0059cace: MOV dword ptr [EDX + 0x18],ECX
// 0059cad1: XOR ECX,ECX
// 0059cad3: MOV CX,word ptr [EAX + 0x6]
// 0059cad7: SHL ECX,0x8
// 0059cada: MOV dword ptr [EDX + 0x1c],ECX
// 0059cadd: XOR ECX,ECX
// 0059cadf: MOV CX,word ptr [EAX + 0xc]
// 0059cae3: ADD EDX,0xc
// 0059cae6: SHL ECX,0x8
// 0059cae9: ADD EAX,0x2
// 0059caec: MOV dword ptr [EDX + 0x14],ECX
// 0059caef: CMP EAX,EBX
// 0059caf1: JNZ 0x0059cac2
//   XREF to: 0059cac2 (CONDITIONAL_JUMP)
// 0059caf3: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0059caf7: MOV EAX,dword ptr [EAX + 0x90]
// 0059cafd: IMUL EAX,dword ptr [ESI + EAX*0x1],0x48
// 0059cb01: ADD EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (READ)
// 0059cb05: ADD EAX,0x8
// 0059cb08: PUSH EAX
// 0059cb09: PUSH EBP
// 0059cb0a: ADD EDI,0x4
// 0059cb0d: ADD ESI,0x4
// 0059cb10: CALL core_bodypart.cpp_CBodyPart_FUN_0041af90
//   XREF to: 0041af90 (UNCONDITIONAL_CALL)
// 0059cb15: ADD ESP,0x8
// 0059cb18: MOV EDX,dword ptr [EBP + 0x188]
// 0059cb1e: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 0059cb22: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (READ)
// 0059cb26: MOV dword ptr [EDX + EDI*0x1 + -0x4],EAX
// 0059cb2a: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0059cb2e: ADD EBX,0x3c
// 0059cb31: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0059cb35: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059cb39: INC EAX
// 0059cb3a: ADD EDX,0x12
// 0059cb3d: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059cb41: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059cb45: CMP ESI,ECX
// 0059cb47: JL 0x0059ca9d
//   XREF to: 0059ca9d (CONDITIONAL_JUMP)
// 0059cb4d: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_0059cb4d
//   XREF to: Stack[-0x14] (READ)
// 0059cb51: CMP EAX,dword ptr [EBP + 0x180]
// 0059cb57: JNZ 0x0059cb70
//   XREF to: 0059cb70 (CONDITIONAL_JUMP)
// 0059cb59: ADD ESP,0x44
//   Label: LAB_0059cb59
// 0059cb5c: POP EBP
// 0059cb5d: POP EDI
// 0059cb5e: POP ESI
// 0059cb5f: POP EBX
// 0059cb60: RET
// 0059cb61: MOV dword ptr [EAX + 0x36712fc],0xffffffff
//   Label: LAB_0059cb61
//   XREF to: 03671300 (WRITE)
// 0059cb6b: JMP 0x0059c8a2
//   XREF to: 0059c8a2 (UNCONDITIONAL_JUMP)
// 0059cb70: MOV ESI,0x64ebda
//   Label: LAB_0059cb70
//   XREF to: 0064ebda (DATA)
// 0059cb75: MOV EDI,0x6bf
// 0059cb7a: PUSH 0x64ebef
//   XREF to: 0064ebef (DATA)
// 0059cb7f: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0059cb85: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0059cb8b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059cb90: ADD ESP,0x4
// 0059cb93: ADD ESP,0x44
// 0059cb96: POP EBP
// 0059cb97: POP EDI
// 0059cb98: POP ESI
// 0059cb99: POP EBX
// 0059cb9a: RET
