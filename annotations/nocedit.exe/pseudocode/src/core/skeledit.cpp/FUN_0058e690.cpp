// Name: core_skeledit.cpp_FUN_0058e690
// Address: 0058e690
// Address Range: [[0058e690, 0058ea9a]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e690()
// Globals:
//   undefined4 s_..\core\skeledit.cpp_0064af7a
//   TerminatedCString s_CDeformableModel_calcRoo_0064af8f
//   TerminatedCString s_core_skeledit_cpp_0064aff0
//   TerminatedCString s_core_skeledit_cpp_0064b005
//   TerminatedCString s_CDeformableModel_calcRoo_0064b01a
//   TerminatedCString s_core_skeledit_cpp_0064b051
//   undefined4 DAT_0064b06a
//   undefined4 DAT_00662e44
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e070
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeledit_cpp_FUN_0058e690(void)

{
  CDeformableModelInstance *this_ptr;
  char *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int in_stack_00000004;
  CBoundingBox3D local_5c;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x6c);
  local_14 = core_skeleton_cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810();
  if (*(float *)(local_14 + 0x2937c) < (float)_DAT_0064b06a) {
    g_CurrentFilename = "p?..\\core\\skeledit.cpp" + 2;
    g_CurrentLineNumber = 0x9f8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDeformableModel::calcRootOffsetScale - Reference bone origin list for skeleton %s is not valid.",local_14 + 0x28508);
  }
  this_ptr = (CDeformableModelInstance *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeledit.cpp",0x9fd);
  if (this_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr);
  }
  if (this_ptr == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x9fe;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::calcRootOffsetScale - out of memory!");
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0480();
  iVar4 = 0;
  if (0 < *(int *)(local_14 + 0x28558)) {
    puVar3 = (undefined4 *)(local_14 + 0x2937c);
    pcVar1 = this_ptr->padding_0x0 + 0x58;
    do {
      if (pcVar1 != (char *)puVar3) {
        *(undefined4 *)pcVar1 = *puVar3;
        *(undefined4 *)(pcVar1 + 4) = puVar3[1];
        *(undefined4 *)(pcVar1 + 8) = puVar3[2];
      }
      pcVar1 = pcVar1 + 0xc;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar4 < *(int *)(local_14 + 0x28558));
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e070();
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0();
  piVar2 = *(int **)(this_ptr->padding_0x0 + 0x2234);
  local_38.x = (float)*piVar2 * _DAT_00662e44;
  local_38.y = (float)piVar2[1] * _DAT_00662e44;
  local_38.z = (float)piVar2[2] * _DAT_00662e44;
  if (&local_5c != (CBoundingBox3D *)&local_38) {
    local_5c.min.x = local_38.x;
    local_5c.min.y = local_38.y;
    local_5c.min.z = local_38.z;
  }
  if (&local_5c.max != &local_38) {
    local_5c.max.x = local_38.x;
    local_5c.max.y = local_38.y;
    local_5c.max.z = local_38.z;
  }
  iVar4 = 1;
  if (1 < *(int *)(in_stack_00000004 + 0x2c)) {
    iVar6 = 0xc;
    do {
      piVar2 = (int *)(*(int *)(this_ptr->padding_0x0 + 0x2234) + iVar6);
      local_38.x = (float)*piVar2 * _DAT_00662e44;
      local_38.y = (float)piVar2[1] * _DAT_00662e44;
      local_38.z = (float)piVar2[2] * _DAT_00662e44;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_5c,&local_38);
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar4 < *(int *)(in_stack_00000004 + 0x2c));
  }
  pcVar1 = this_ptr->padding_0x0 + 0x508;
  local_2c = local_5c.max.x - local_5c.min.x;
  local_28 = local_5c.max.y - local_5c.min.y;
  local_24 = local_5c.max.z - local_5c.min.z;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  if (pcVar1 != (char *)&local_20) {
    this_ptr->padding_0x0[0x50c] = '\0';
    this_ptr->padding_0x0[0x50d] = '\0';
    this_ptr->padding_0x0[0x50e] = -0x80;
    this_ptr->padding_0x0[0x50f] = '?';
    this_ptr->padding_0x0[0x510] = '\0';
    this_ptr->padding_0x0[0x511] = '\0';
    this_ptr->padding_0x0[0x512] = -0x80;
    this_ptr->padding_0x0[0x513] = '?';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = -0x80;
    pcVar1[3] = '?';
  }
  iVar4 = 0;
  if (0 < *(int *)(local_14 + 0x28558)) {
    pcVar1 = this_ptr->padding_0x0 + 0x58;
    puVar3 = (undefined4 *)(in_stack_00000004 + 0x7c90);
    do {
      if (pcVar1 != (char *)puVar3) {
        *(undefined4 *)pcVar1 = *puVar3;
        *(undefined4 *)(pcVar1 + 4) = puVar3[1];
        *(undefined4 *)(pcVar1 + 8) = puVar3[2];
      }
      pcVar1 = pcVar1 + 0xc;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar4 < *(int *)(local_14 + 0x28558));
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e070();
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0();
  piVar2 = *(int **)(this_ptr->padding_0x0 + 0x2234);
  local_38.x = (float)*piVar2 * _DAT_00662e44;
  local_38.y = (float)piVar2[1] * _DAT_00662e44;
  local_38.z = (float)piVar2[2] * _DAT_00662e44;
  if (&local_5c != (CBoundingBox3D *)&local_38) {
    local_5c.min.x = local_38.x;
    local_5c.min.y = local_38.y;
    local_5c.min.z = local_38.z;
  }
  pCVar5 = &local_38;
  if (&local_5c.max != pCVar5) {
    local_5c.max.x = local_38.x;
    local_5c.max.y = local_38.y;
    local_5c.max.z = local_38.z;
  }
  iVar4 = 1;
  if (1 < *(int *)(in_stack_00000004 + 0x2c)) {
    iVar6 = 0xc;
    do {
      piVar2 = (int *)(*(int *)(this_ptr->padding_0x0 + 0x2234) + iVar6);
      local_38.x = (float)*piVar2 * _DAT_00662e44;
      local_38.y = (float)piVar2[1] * _DAT_00662e44;
      local_38.z = (float)piVar2[2] * _DAT_00662e44;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_5c,&local_38);
      iVar4 = iVar4 + 1;
      pCVar5 = *(CVector3f **)(in_stack_00000004 + 0x2c);
      iVar6 = iVar6 + 0xc;
    } while (iVar4 < (int)pCVar5);
  }
  local_44 = local_5c.max.x - local_5c.min.x;
  local_40 = local_5c.max.y - local_5c.min.y;
  local_3c = local_5c.max.z - local_5c.min.z;
  *(float *)(in_stack_00000004 + 0x7c84) = local_44 / local_2c;
  *(float *)(in_stack_00000004 + 0x7c88) = local_40 / local_28;
  *(float *)(in_stack_00000004 + 0x7c8c) = local_3c / local_24;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xa32;
  (*(code *)**(undefined4 **)(this_ptr->padding_0x0 + 0x50))
            (*(undefined4 **)(this_ptr->padding_0x0 + 0x50),pCVar5,0xa32,
             "..\\core\\skeledit.cpp",this_ptr,2);
  return;
}


// Assembly code:
// 0058e690: PUSH 0x6c
//   Label: core_skeledit.cpp_FUN_0058e690
// 0058e695: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058e69a: PUSH EBX
// 0058e69b: PUSH ESI
// 0058e69c: PUSH EDI
// 0058e69d: PUSH EBP
// 0058e69e: SUB ESP,0x4c
// 0058e6a1: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0058e6a5: PUSH EDX
// 0058e6a6: CALL core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0058e6ab: FLD float ptr [EAX + 0x2937c]
// 0058e6b1: ADD ESP,0x4
// 0058e6b4: MOV EDX,EAX
// 0058e6b6: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058e6ba: FCOMP double ptr [0x0064b06a]
//   XREF to: 0064b06a (READ)
// 0058e6c0: FNSTSW AX
// 0058e6c2: SAHF
// 0058e6c3: JC 0x0058ea6c
//   XREF to: 0058ea6c (CONDITIONAL_JUMP)
// 0058e6c9: PUSH 0x9fd
//   Label: LAB_0058e6c9
// 0058e6ce: PUSH 0x64aff0
//   XREF to: 0064aff0 (DATA)
// 0058e6d3: PUSH 0x22b4
// 0058e6d8: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0058e6dd: ADD ESP,0xc
// 0058e6e0: TEST EAX,EAX
// 0058e6e2: JZ 0x0058e6ed
//   XREF to: 0058e6ed (CONDITIONAL_JUMP)
// 0058e6e4: PUSH EAX
// 0058e6e5: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 0058e6ea: ADD ESP,0x4
// 0058e6ed: MOV EBP,EAX
//   Label: LAB_0058e6ed
// 0058e6ef: TEST EAX,EAX
// 0058e6f1: JNZ 0x0058e716
//   XREF to: 0058e716 (CONDITIONAL_JUMP)
// 0058e6f3: MOV ESI,0x64b005
//   XREF to: 0064b005 (DATA)
// 0058e6f8: MOV EDI,0x9fe
// 0058e6fd: PUSH 0x64b01a
//   XREF to: 0064b01a (DATA)
// 0058e702: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0058e708: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0058e70e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058e713: ADD ESP,0x4
// 0058e716: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_0058e716
//   XREF to: Stack[0x4] (READ)
// 0058e71a: PUSH EAX
// 0058e71b: PUSH EBP
// 0058e71c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480
//   XREF to: 005a0480 (UNCONDITIONAL_CALL)
// 0058e721: ADD ESP,0x8
// 0058e724: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 0058e728: MOV ECX,dword ptr [EAX + 0x28558]
// 0058e72e: XOR EDX,EDX
// 0058e730: TEST ECX,ECX
// 0058e732: JLE 0x0058e766
//   XREF to: 0058e766 (CONDITIONAL_JUMP)
// 0058e734: LEA EBX,[EAX + 0x2937c]
// 0058e73a: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 0058e73e: LEA EAX,[EBP + 0x58]
// 0058e741: CMP EAX,EBX
//   Label: LAB_0058e741
// 0058e743: JZ 0x0058e755
//   XREF to: 0058e755 (CONDITIONAL_JUMP)
// 0058e745: MOV ECX,dword ptr [EBX]
// 0058e747: MOV dword ptr [EAX],ECX
// 0058e749: MOV ECX,dword ptr [EBX + 0x4]
// 0058e74c: MOV dword ptr [EAX + 0x4],ECX
// 0058e74f: MOV ECX,dword ptr [EBX + 0x8]
// 0058e752: MOV dword ptr [EAX + 0x8],ECX
// 0058e755: ADD EAX,0xc
//   Label: LAB_0058e755
// 0058e758: INC EDX
// 0058e759: MOV EDI,dword ptr [ESI + 0x28558]
// 0058e75f: ADD EBX,0xc
// 0058e762: CMP EDX,EDI
// 0058e764: JL 0x0058e741
//   XREF to: 0058e741 (CONDITIONAL_JUMP)
// 0058e766: PUSH 0x0
//   Label: LAB_0058e766
// 0058e768: PUSH 0x0
// 0058e76a: PUSH EBP
// 0058e76b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e070
//   XREF to: 0059e070 (UNCONDITIONAL_CALL)
// 0058e770: ADD ESP,0xc
// 0058e773: PUSH 0x0
// 0058e775: PUSH EBP
// 0058e776: LEA EBX,[ESP + 0x2c]
//   XREF to: Stack[-0x38] (DATA)
// 0058e77a: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 0058e77f: ADD ESP,0x8
// 0058e782: MOV EAX,dword ptr [EBP + 0x2234]
// 0058e788: MOV EDX,ESP
// 0058e78a: FILD dword ptr [EAX]
// 0058e78c: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e792: FSTP float ptr [EBX]
//   XREF to: Stack[-0x38] (DATA)
// 0058e794: FILD dword ptr [EAX + 0x4]
// 0058e797: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e79d: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 0058e7a0: FILD dword ptr [EAX + 0x8]
// 0058e7a3: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e7a9: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0058e7ac: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e7b0: CMP EDX,EAX
// 0058e7b2: JZ 0x0058e7cb
//   XREF to: 0058e7cb (CONDITIONAL_JUMP)
// 0058e7b4: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e7b8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x5c] (DATA)
// 0058e7bb: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (READ)
// 0058e7bf: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0058e7c3: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 0058e7c7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0058e7cb: LEA EDX,[ESP + 0xc]
//   Label: LAB_0058e7cb
//   XREF to: Stack[-0x50] (DATA)
// 0058e7cf: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e7d3: CMP EDX,EAX
// 0058e7d5: JZ 0x0058e7ef
//   XREF to: 0058e7ef (CONDITIONAL_JUMP)
// 0058e7d7: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e7db: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0058e7df: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (READ)
// 0058e7e3: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0058e7e7: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 0058e7eb: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0058e7ef: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_0058e7ef
//   XREF to: Stack[0x4] (READ)
// 0058e7f3: MOV EDI,0x1
// 0058e7f8: CMP EDI,dword ptr [EAX + 0x2c]
// 0058e7fb: JGE 0x0058e860
//   XREF to: 0058e860 (CONDITIONAL_JUMP)
// 0058e7fd: MOV ESI,0xc
// 0058e802: MOV EAX,dword ptr [EBP + 0x2234]
//   Label: LAB_0058e802
// 0058e808: LEA EBX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e80c: ADD EAX,ESI
// 0058e80e: FILD dword ptr [EAX]
// 0058e810: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e816: FSTP float ptr [EBX]
//   XREF to: Stack[-0x38] (DATA)
// 0058e818: FILD dword ptr [EAX + 0x4]
// 0058e81b: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e821: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 0058e824: FILD dword ptr [EAX + 0x8]
// 0058e827: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e82d: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0058e830: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e834: PUSH EAX
// 0058e835: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 0058e839: PUSH EAX
// 0058e83a: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 0058e83f: ADD ESP,0x8
// 0058e842: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0058e846: INC EDI
// 0058e847: MOV ECX,dword ptr [EAX + 0x2c]
// 0058e84a: ADD ESI,0xc
// 0058e84d: CMP EDI,ECX
// 0058e84f: JL 0x0058e802
//   XREF to: 0058e802 (CONDITIONAL_JUMP)
// 0058e851: LEA EAX,[EAX]
// 0058e857: LEA EDX,[EDX]
//   XREF to: Stack[-0x50] (DATA)
// 0058e85d: LEA EAX,[EAX]
// 0058e860: FLD float ptr [ESP + 0xc]
//   Label: LAB_0058e860
//   XREF to: Stack[-0x50] (READ)
// 0058e864: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 0058e868: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x48] (READ)
// 0058e86c: MOV EBX,0x3f800000
// 0058e871: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x20] (DATA)
// 0058e875: LEA EDX,[EBP + 0x508]
// 0058e87b: FXCH ST2
// 0058e87d: FSUB float ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 0058e880: FXCH
// 0058e882: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x58] (READ)
// 0058e886: FXCH ST2
// 0058e888: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x54] (READ)
// 0058e88c: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0058e890: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058e894: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0058e898: FXCH ST2
// 0058e89a: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (WRITE)
// 0058e89e: FXCH
// 0058e8a0: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (WRITE)
// 0058e8a4: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (WRITE)
// 0058e8a8: CMP EDX,EAX
// 0058e8aa: JZ 0x0058e8b4
//   XREF to: 0058e8b4 (CONDITIONAL_JUMP)
// 0058e8ac: MOV dword ptr [EDX + 0x4],EBX
// 0058e8af: MOV dword ptr [EDX + 0x8],EBX
// 0058e8b2: MOV dword ptr [EDX],EBX
// 0058e8b4: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_0058e8b4
//   XREF to: Stack[-0x14] (READ)
// 0058e8b8: MOV EDX,dword ptr [EAX + 0x28558]
// 0058e8be: XOR ESI,ESI
// 0058e8c0: TEST EDX,EDX
// 0058e8c2: JLE 0x0058e8f9
//   XREF to: 0058e8f9 (CONDITIONAL_JUMP)
// 0058e8c4: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0058e8c8: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 0058e8cc: LEA EBX,[EBP + 0x58]
// 0058e8cf: ADD EAX,0x7c90
// 0058e8d4: CMP EBX,EAX
//   Label: LAB_0058e8d4
// 0058e8d6: JZ 0x0058e8e8
//   XREF to: 0058e8e8 (CONDITIONAL_JUMP)
// 0058e8d8: MOV ECX,dword ptr [EAX]
// 0058e8da: MOV dword ptr [EBX],ECX
// 0058e8dc: MOV ECX,dword ptr [EAX + 0x4]
// 0058e8df: MOV dword ptr [EBX + 0x4],ECX
// 0058e8e2: MOV ECX,dword ptr [EAX + 0x8]
// 0058e8e5: MOV dword ptr [EBX + 0x8],ECX
// 0058e8e8: ADD EBX,0xc
//   Label: LAB_0058e8e8
// 0058e8eb: INC ESI
// 0058e8ec: MOV ECX,dword ptr [EDX + 0x28558]
// 0058e8f2: ADD EAX,0xc
// 0058e8f5: CMP ESI,ECX
// 0058e8f7: JL 0x0058e8d4
//   XREF to: 0058e8d4 (CONDITIONAL_JUMP)
// 0058e8f9: PUSH 0x0
//   Label: LAB_0058e8f9
// 0058e8fb: PUSH 0x0
// 0058e8fd: PUSH EBP
// 0058e8fe: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e070
//   XREF to: 0059e070 (UNCONDITIONAL_CALL)
// 0058e903: ADD ESP,0xc
// 0058e906: PUSH 0x0
// 0058e908: PUSH EBP
// 0058e909: LEA EBX,[ESP + 0x2c]
//   XREF to: Stack[-0x38] (DATA)
// 0058e90d: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 0058e912: ADD ESP,0x8
// 0058e915: MOV EAX,dword ptr [EBP + 0x2234]
// 0058e91b: MOV EDX,ESP
// 0058e91d: FILD dword ptr [EAX]
// 0058e91f: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e925: FSTP float ptr [EBX]
//   XREF to: Stack[-0x38] (DATA)
// 0058e927: FILD dword ptr [EAX + 0x4]
// 0058e92a: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e930: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 0058e933: FILD dword ptr [EAX + 0x8]
// 0058e936: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e93c: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0058e93f: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e943: CMP EDX,EAX
// 0058e945: JZ 0x0058e95e
//   XREF to: 0058e95e (CONDITIONAL_JUMP)
// 0058e947: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e94b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x5c] (DATA)
// 0058e94e: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (READ)
// 0058e952: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0058e956: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 0058e95a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0058e95e: LEA EAX,[ESP + 0xc]
//   Label: LAB_0058e95e
//   XREF to: Stack[-0x50] (DATA)
// 0058e962: LEA EDX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e966: CMP EAX,EDX
// 0058e968: JZ 0x0058e982
//   XREF to: 0058e982 (CONDITIONAL_JUMP)
// 0058e96a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (READ)
// 0058e96e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0058e972: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (READ)
// 0058e976: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0058e97a: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 0058e97e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0058e982: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_0058e982
//   XREF to: Stack[0x4] (READ)
// 0058e986: MOV EDI,0x1
// 0058e98b: CMP EDI,dword ptr [EAX + 0x2c]
// 0058e98e: JGE 0x0058e9f0
//   XREF to: 0058e9f0 (CONDITIONAL_JUMP)
// 0058e990: MOV ESI,0xc
// 0058e995: MOV EAX,dword ptr [EBP + 0x2234]
//   Label: LAB_0058e995
// 0058e99b: LEA EBX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e99f: ADD EAX,ESI
// 0058e9a1: FILD dword ptr [EAX]
// 0058e9a3: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e9a9: FSTP float ptr [EBX]
//   XREF to: Stack[-0x38] (DATA)
// 0058e9ab: FILD dword ptr [EAX + 0x4]
// 0058e9ae: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e9b4: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 0058e9b7: FILD dword ptr [EAX + 0x8]
// 0058e9ba: FMUL float ptr [0x00662e44]
//   XREF to: 00662e44 (READ)
// 0058e9c0: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0058e9c3: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 0058e9c7: PUSH EAX
// 0058e9c8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 0058e9cc: PUSH EAX
// 0058e9cd: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 0058e9d2: ADD ESP,0x8
// 0058e9d5: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0058e9d9: INC EDI
// 0058e9da: MOV EDX,dword ptr [EAX + 0x2c]
// 0058e9dd: ADD ESI,0xc
// 0058e9e0: CMP EDI,EDX
// 0058e9e2: JL 0x0058e995
//   XREF to: 0058e995 (CONDITIONAL_JUMP)
// 0058e9e4: LEA EAX,[EAX]
// 0058e9ea: LEA EDX,[EDX]
// 0058e9f0: FLD float ptr [ESP + 0xc]
//   Label: LAB_0058e9f0
//   XREF to: Stack[-0x50] (READ)
// 0058e9f4: FSUB float ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 0058e9f7: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (WRITE)
// 0058e9fb: FDIV float ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (READ)
// 0058e9ff: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 0058ea03: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x48] (READ)
// 0058ea07: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0058ea0b: FXCH
// 0058ea0d: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x58] (READ)
// 0058ea11: FXCH
// 0058ea13: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x54] (READ)
// 0058ea17: FXCH
// 0058ea19: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (WRITE)
// 0058ea1d: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (WRITE)
// 0058ea21: FSTP float ptr [EAX + 0x7c84]
// 0058ea27: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (READ)
// 0058ea2b: FDIV float ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 0058ea2f: FSTP float ptr [EAX + 0x7c88]
// 0058ea35: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (READ)
// 0058ea39: FDIV float ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 0058ea3d: PUSH 0x2
// 0058ea3f: MOV ECX,0x64b051
//   XREF to: 0064b051 (DATA)
// 0058ea44: MOV EBX,0xa32
// 0058ea49: PUSH EBP
// 0058ea4a: FSTP float ptr [EAX + 0x7c8c]
// 0058ea50: MOV EAX,dword ptr [EBP + 0x50]
// 0058ea53: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0058ea59: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0058ea5f: CALL dword ptr [EAX]
// 0058ea61: ADD ESP,0x8
// 0058ea64: ADD ESP,0x4c
// 0058ea67: POP EBP
// 0058ea68: POP EDI
// 0058ea69: POP ESI
// 0058ea6a: POP EBX
// 0058ea6b: RET
// 0058ea6c: ADD EDX,0x28508
//   Label: LAB_0058ea6c
// 0058ea72: PUSH EDX
// 0058ea73: MOV ECX,0x64af7a
//   XREF to: 0064af7a (DATA)
// 0058ea78: MOV EBX,0x9f8
// 0058ea7d: PUSH 0x64af8f
//   XREF to: 0064af8f (DATA)
// 0058ea82: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0058ea88: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0058ea8e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058ea93: ADD ESP,0x8
// 0058ea96: JMP 0x0058e6c9
//   XREF to: 0058e6c9 (UNCONDITIONAL_JUMP)
