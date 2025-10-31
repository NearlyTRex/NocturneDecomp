// Name: shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
// Address: 004580a0
// Address Range: [[004580a0, 0045816b]]
// Convention: __cdecl
// Signature: STreeNode * shape_design.c_parseSpatialTreeFromFile_FUN_004580a0(FILE * file)
// Cross-references:
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 0045931e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_f_f_f_f_0061a89f
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_design.c_allocateSpatialTreeNode_FUN_00457ed0

#include "nocturne.h"

STreeNode * __cdecl shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(FILE *file)

{
  STreeNode *pSVar1;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  double dVar3;
  STreeNode *local_34;
  FILE *pFVar4;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_24 = crt_stdio_c_fscanf_FUN_005fe7c0
                       (file,"%d,%d,%f,%f,%f,%f\n",&stack0xffffffd4,&local_28,&local_20,&local_1c,
                        &local_18,&local_14);
  if ((local_24 == 0) || (local_24 == -1)) {
    local_34 = (STreeNode *)0x0;
  }
  else {
    pSVar1 = shape_design_c_allocateSpatialTreeNode_FUN_00457ed0();
    pSVar1->node_type = local_28;
    if (local_24 == 3) {
      fVar2 = (float10)local_20;
      local_34 = (STreeNode *)0x458110;
      dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pSVar1,pSVar1));
      *(int *)(SUB84(dVar3,0) + 0xc) = (int)ROUND(fVar2);
    }
    else {
      pSVar1->data1 = local_20;
      pSVar1->data2 = local_1c;
      pSVar1->data3 = local_18;
      pSVar1->data4 = local_14;
      pFVar4 = file;
      pSVar1 = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
      pFVar4->_ptr = (char *)pSVar1;
      local_34 = (STreeNode *)0x458153;
      pSVar1 = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
      local_34->right_child = pSVar1;
    }
  }
  return local_34;
}


// Assembly code:
// 004580a0: PUSH EBX
//   Label: shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
// 004580a1: PUSH ESI
// 004580a2: PUSH EDI
// 004580a3: PUSH EBP
// 004580a4: MOV EBP,ESP
// 004580a6: SUB ESP,0x24
// 004580ac: LEA EAX,[EBP + -0x4]
//   XREF to: Stack[-0x14] (DATA)
// 004580af: PUSH EAX
// 004580b0: LEA EAX,[EBP + -0x8]
//   XREF to: Stack[-0x18] (DATA)
// 004580b3: PUSH EAX
// 004580b4: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 004580b7: PUSH EAX
// 004580b8: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 004580bb: PUSH EAX
// 004580bc: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 004580bf: PUSH EAX
// 004580c0: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 004580c3: PUSH EAX
// 004580c4: MOV EAX,0x61a89f
//   XREF to: 0061a89f (DATA)
// 004580c9: PUSH EAX
//   XREF to: 0061a89f (DATA)
// 004580ca: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004580cd: PUSH EAX
// 004580ce: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004580d3: ADD ESP,0x20
// 004580d6: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004580d9: CMP dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (READ)
// 004580dd: JZ 0x004580e5
//   XREF to: 004580e5 (CONDITIONAL_JUMP)
// 004580df: CMP dword ptr [EBP + -0x14],-0x1
//   XREF to: Stack[-0x24] (READ)
// 004580e3: JNZ 0x004580ee
//   XREF to: 004580ee (CONDITIONAL_JUMP)
// 004580e5: MOV dword ptr [EBP + -0x24],0x0
//   Label: LAB_004580e5
//   XREF to: Stack[-0x34] (WRITE)
// 004580ec: JMP 0x00458162
//   XREF to: 00458162 (UNCONDITIONAL_JUMP)
// 004580ee: CALL shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
//   Label: LAB_004580ee
//   XREF to: 00457ed0 (UNCONDITIONAL_CALL)
// 004580f3: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004580f6: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004580f9: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004580fc: MOV dword ptr [EDX + 0x8],EAX
// 004580ff: CMP dword ptr [EBP + -0x14],0x3
//   XREF to: Stack[-0x24] (READ)
// 00458103: JNZ 0x00458115
//   XREF to: 00458115 (CONDITIONAL_JUMP)
// 00458105: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00458108: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045810b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00458110: FISTP dword ptr [EAX + 0xc]
// 00458113: JMP 0x0045815c
//   XREF to: 0045815c (UNCONDITIONAL_JUMP)
// 00458115: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00458115
//   XREF to: Stack[-0x20] (READ)
// 00458118: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045811b: MOV dword ptr [EDX + 0xc],EAX
// 0045811e: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00458121: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00458124: MOV dword ptr [EDX + 0x10],EAX
// 00458127: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045812a: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045812d: MOV dword ptr [EDX + 0x14],EAX
// 00458130: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00458133: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00458136: MOV dword ptr [EDX + 0x18],EAX
// 00458139: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045813c: PUSH EAX
// 0045813d: CALL shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
//   XREF to: 004580a0 (UNCONDITIONAL_CALL)
// 00458142: ADD ESP,0x4
// 00458145: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00458148: MOV dword ptr [EDX],EAX
// 0045814a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045814d: PUSH EAX
// 0045814e: CALL shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
//   XREF to: 004580a0 (UNCONDITIONAL_CALL)
// 00458153: ADD ESP,0x4
// 00458156: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00458159: MOV dword ptr [EDX + 0x4],EAX
// 0045815c: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_0045815c
//   XREF to: Stack[-0x30] (READ)
// 0045815f: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00458162: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00458162
//   XREF to: Stack[-0x34] (READ)
// 00458165: MOV ESP,EBP
// 00458167: POP EBP
// 00458168: POP EDI
// 00458169: POP ESI
// 0045816a: POP EBX
// 0045816b: RET
