// Name: core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
// Address: 0059cec0
// Address Range: [[0059cec0, 0059d454]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndShatter_FUN_005a14b0 (005a14b0) at 005a14f4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064ec65
//   TerminatedCString s_CDeformableModel_shatter_0064ec7a
//   WatcomTypeInfo g_CVectorTypeInfo
//   undefined4 DAT_00662ea0
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CVector3f[3000] DAT_03683be0
//   undefined4 DAT_03683be4
//   undefined4 DAT_03683be8
//   undefined4 DAT_03683bec
//   undefined4 DAT_03683bf0
//   undefined4 DAT_03683bf4
//   undefined1 DAT_0368c880
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_fire.cpp_CFireEffect_FUN_004c7d00
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_shatter(CDeformableModel* param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4
   param_6, undefined4 param_7) */

void core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0(void)

{
  ushort *puVar1;
  ushort uVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  ushort *puVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  CVector3f *pCVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  CVector3f *in_stack_0000000c;
  float *in_stack_00000010;
  int in_stack_00000018;
  int *in_stack_0000001c;
  byte *in_stack_00000024;
  int *in_stack_00000028;
  undefined1 auStack_d8 [32];
  char local_b8;
  undefined1 local_b0 [4];
  CVector3f aCStack_ac [3];
  uint local_88 [5];
  CVector3f local_74;
  CVector3f CStack_68;
  float *local_58;
  float *local_54;
  int *local_4c;
  float *local_48;
  float *local_44;
  byte *local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  int local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  int local_18;
  int local_14;
  
  local_1c = (float *)0xffff;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff20,in_stack_0000000c);
  if ((DAT_0368c880 & 1) == 0) {
    DAT_0368c880 = DAT_0368c880 | 1;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_03683be0,3000,&g_CVectorTypeInfo)
    ;
  }
  if (3000 < (int)(&in_stack_0000000c[3].z)[in_stack_00000018]) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x748;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::shatter - too many vertices!");
  }
  pCVar8 = DAT_03683be0;
  local_54 = &in_stack_0000000c->x + in_stack_00000018;
  iVar7 = 0;
  piVar9 = in_stack_0000001c;
  if (0 < (int)local_54[0xb]) {
    do {
      pCVar8->x = (float)*piVar9 * _DAT_00662ea0;
      pCVar8->y = (float)piVar9[1] * _DAT_00662ea0;
      pCVar8->z = (float)piVar9[2] * _DAT_00662ea0;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)auStack_d8,&CStack_68,pCVar8);
      local_74.x = *in_stack_00000010 + pCVar3->x;
      local_74.y = in_stack_00000010[1] + pCVar3->y;
      local_74.z = in_stack_00000010[2] + pCVar3->z;
      if (pCVar8 != &local_74) {
        pCVar8->x = local_74.x;
        pCVar8->y = local_74.y;
        pCVar8->z = local_74.z;
      }
      pCVar8 = pCVar8 + 1;
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 3;
    } while (iVar7 < (int)local_54[0xb]);
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_b0,3,&g_CVectorTypeInfo);
  local_18 = 0;
  local_38 = 0;
  if (0 < (int)in_stack_00000010[0x1c50]) {
    local_2c = in_stack_00000010 + (int)in_stack_0000001c;
    local_54 = in_stack_00000010 + 0x30;
    local_48 = in_stack_00000010 + (int)in_stack_0000001c;
    local_40 = in_stack_00000024;
    local_4c = in_stack_00000028;
    local_28 = local_2c;
    do {
      local_34 = (int)local_48[0x1c59] + local_18;
      local_20 = local_54 + *local_4c * 0x5a0;
      if (((*local_40 & 1) != 0) && (local_18 < local_34)) {
        iVar10 = local_18 * 0x12;
        iVar7 = local_18 * 4;
        local_14 = local_34 * 4;
        do {
          puVar5 = (ushort *)((int)local_2c[0x1f] + iVar10);
          pCVar8 = aCStack_ac;
          iVar11 = 0;
          do {
            uVar2 = *puVar5;
            if (pCVar8 != DAT_03683be0 + uVar2) {
              pCVar8->x = DAT_03683be0[uVar2].x;
              pCVar8->y = DAT_03683be0[uVar2].y;
              pCVar8->z = DAT_03683be0[uVar2].z;
            }
            pCVar8 = pCVar8 + 1;
            *(uint *)((int)local_88 + iVar11) = (uint)puVar5[3];
            iVar6 = iVar11 + 4;
            puVar1 = puVar5 + 6;
            puVar5 = puVar5 + 1;
            *(uint *)((int)local_88 + iVar11 + 0xc) = (uint)*puVar1;
            iVar11 = iVar6;
          } while (iVar6 != 0xc);
          core_fire_cpp_CFireEffect_FUN_004c7d00(g_CFireEffectPtr);
          iVar7 = iVar7 + 4;
          iVar10 = iVar10 + 0x12;
        } while (iVar7 < local_14);
      }
      local_40 = local_40 + 4;
      local_48 = local_48 + 0x18;
      local_38 = local_38 + 1;
      local_4c = local_4c + 1;
      local_18 = local_34;
    } while (local_38 < (int)in_stack_00000010[0x1c50]);
  }
  local_30 = 0;
  if (0 < (int)in_stack_00000010[0x1c50]) {
    pfVar4 = in_stack_00000010 + (int)in_stack_0000001c;
    local_58 = in_stack_00000010 + 0x30;
    local_44 = in_stack_00000010 + (int)in_stack_0000001c;
    local_3c = in_stack_00000024;
    local_24 = pfVar4;
    do {
      iVar7 = (int)local_44[0x1c5e] + local_18;
      if (((*local_3c & 1) != 0) &&
         (local_1c = local_58 + in_stack_00000028[local_30] * 0x5a0, local_18 < iVar7)) {
        iVar11 = local_18 * 0x12;
        iVar10 = local_18;
        local_18 = iVar7;
        do {
          puVar5 = (ushort *)((int)pfVar4[0x1f] + iVar11);
          if ((in_stack_00000024[*(int *)((int)pfVar4[0x29] + (iVar10 - (int)pfVar4[0x15]) * 4) * 4]
              & 1) == 0) {
            pCVar8 = aCStack_ac;
            iVar7 = 0;
            do {
              uVar2 = *puVar5;
              if (pCVar8 != DAT_03683be0 + uVar2) {
                pCVar8->x = DAT_03683be0[uVar2].x;
                pCVar8->y = DAT_03683be0[uVar2].y;
                pCVar8->z = DAT_03683be0[uVar2].z;
              }
              *(uint *)((int)local_88 + iVar7) = (uint)puVar5[3] << 8;
              pCVar8 = pCVar8 + 1;
              puVar1 = puVar5 + 6;
              iVar6 = iVar7 + 4;
              puVar5 = puVar5 + 1;
              *(uint *)((int)local_88 + iVar7 + 0xc) = (uint)*puVar1 << 8;
              iVar7 = iVar6;
            } while (iVar6 != 0xc);
            core_fire_cpp_CFireEffect_FUN_004c7d00(g_CFireEffectPtr);
          }
          iVar11 = iVar11 + 0x12;
          iVar10 = iVar10 + 1;
          iVar7 = local_18;
        } while (iVar10 < local_18);
      }
      local_18 = iVar7;
      local_44 = local_44 + 0x18;
      local_3c = local_3c + 4;
      local_30 = local_30 + 1;
    } while (local_30 < (int)in_stack_00000010[0x1c50]);
  }
  return;
}


// Assembly code:
// 0059cec0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
// 0059cec1: PUSH ESI
// 0059cec2: PUSH EDI
// 0059cec3: PUSH EBP
// 0059cec4: SUB ESP,0xd0
// 0059ceca: MOV ECX,dword ptr [ESP + 0xec]
//   XREF to: Stack[0xc] (READ)
// 0059ced1: PUSH ECX
// 0059ced2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xe0] (DATA)
// 0059ced6: MOV EDX,0xffff
// 0059cedb: PUSH EAX
// 0059cedc: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059cee3: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0059cee8: MOV AH,byte ptr [0x0368c880]
//   XREF to: 0368c880 (READ)
// 0059ceee: ADD ESP,0x8
// 0059cef1: TEST AH,0x1
// 0059cef4: JZ 0x0059d2fd
//   XREF to: 0059d2fd (CONDITIONAL_JUMP)
// 0059cefa: MOV EAX,dword ptr [ESP + 0xf0]
//   Label: LAB_0059cefa
//   XREF to: Stack[0x10] (READ)
// 0059cf01: MOV EBX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059cf08: SHL EAX,0x2
// 0059cf0b: ADD EAX,EBX
// 0059cf0d: CMP dword ptr [EAX + 0x2c],0xbb8
// 0059cf14: JLE 0x0059cf39
//   XREF to: 0059cf39 (CONDITIONAL_JUMP)
// 0059cf16: MOV EDI,0x64ec65
//   XREF to: 0064ec65 (DATA)
// 0059cf1b: MOV EBP,0x748
// 0059cf20: PUSH 0x64ec7a
//   XREF to: 0064ec7a (DATA)
// 0059cf25: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0059cf2b: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0059cf31: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059cf36: ADD ESP,0x4
// 0059cf39: MOV EAX,dword ptr [ESP + 0xf0]
//   Label: LAB_0059cf39
//   XREF to: Stack[0x10] (READ)
// 0059cf40: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059cf47: SHL EAX,0x2
// 0059cf4a: MOV ESI,0x3683be0
//   XREF to: 03683be0 (DATA)
// 0059cf4f: ADD EDX,EAX
// 0059cf51: MOV EDI,dword ptr [ESP + 0xf4]
//   XREF to: Stack[0x14] (READ)
// 0059cf58: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 0059cf5f: MOV EDX,dword ptr [EDX + 0x2c]
// 0059cf62: XOR EBP,EBP
// 0059cf64: TEST EDX,EDX
// 0059cf66: JLE 0x0059cffd
//   XREF to: 0059cffd (CONDITIONAL_JUMP)
// 0059cf6c: MOV EAX,EDI
//   Label: LAB_0059cf6c
// 0059cf6e: MOV EBX,ESI
//   XREF to: 03683be0 (PARAM)
//   XREF to: 03683bec (PARAM)
// 0059cf70: FILD dword ptr [EAX]
// 0059cf72: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059cf78: FSTP float ptr [EBX]
//   XREF to: 03683be0 (WRITE)
//   XREF to: 03683bec (WRITE)
// 0059cf7a: FILD dword ptr [EAX + 0x4]
// 0059cf7d: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059cf83: FSTP float ptr [EBX + 0x4]
//   XREF to: 03683be4 (WRITE)
//   XREF to: 03683bf0 (WRITE)
// 0059cf86: FILD dword ptr [EAX + 0x8]
// 0059cf89: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059cf8f: FSTP float ptr [EBX + 0x8]
//   XREF to: 03683be8 (WRITE)
//   XREF to: 03683bf4 (WRITE)
// 0059cf92: PUSH ESI
//   XREF to: 03683be0 (DATA)
//   XREF to: 03683bec (DATA)
// 0059cf93: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x70] (DATA)
// 0059cf97: PUSH EAX
// 0059cf98: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xe0] (DATA)
// 0059cf9c: PUSH EAX
// 0059cf9d: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0059cfa2: ADD ESP,0xc
// 0059cfa5: MOV EDX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x8] (READ)
// 0059cfac: FLD float ptr [EDX]
// 0059cfae: FADD float ptr [EAX]
// 0059cfb0: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x7c] (WRITE)
// 0059cfb4: FLD float ptr [EDX + 0x4]
// 0059cfb7: FADD float ptr [EAX + 0x4]
// 0059cfba: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x78] (WRITE)
// 0059cfbe: FLD float ptr [EDX + 0x8]
// 0059cfc1: FADD float ptr [EAX + 0x8]
// 0059cfc4: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x7c] (DATA)
// 0059cfc8: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x74] (WRITE)
// 0059cfcc: CMP ESI,EAX
// 0059cfce: JZ 0x0059cfe4
//   XREF to: 0059cfe4 (CONDITIONAL_JUMP)
// 0059cfd0: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x7c] (DATA)
// 0059cfd4: MOV dword ptr [ESI],EAX
//   XREF to: 03683be0 (WRITE)
// 0059cfd6: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x78] (READ)
// 0059cfda: MOV dword ptr [ESI + 0x4],EAX
//   XREF to: 03683be4 (WRITE)
// 0059cfdd: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x74] (READ)
// 0059cfe1: MOV dword ptr [ESI + 0x8],EAX
//   XREF to: 03683be8 (WRITE)
// 0059cfe4: MOV EAX,dword ptr [ESP + 0x84]
//   Label: LAB_0059cfe4
//   XREF to: Stack[-0x5c] (READ)
// 0059cfeb: ADD ESI,0xc
// 0059cfee: INC EBP
// 0059cfef: MOV ECX,dword ptr [EAX + 0x2c]
// 0059cff2: ADD EDI,0xc
// 0059cff5: CMP EBP,ECX
// 0059cff7: JL 0x0059cf6c
//   XREF to: 0059cf6c (CONDITIONAL_JUMP)
// 0059cffd: PUSH 0x6598c0
//   Label: LAB_0059cffd
//   XREF to: 006598c0 (DATA)
// 0059d002: PUSH 0x3
// 0059d004: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0xb8] (DATA)
// 0059d008: PUSH EAX
// 0059d009: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0059d00e: ADD ESP,0xc
// 0059d011: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d018: XOR EAX,EAX
// 0059d01a: MOV ESI,dword ptr [EDX + 0x7140]
// 0059d020: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0059d027: TEST ESI,ESI
// 0059d029: JLE 0x0059d209
//   XREF to: 0059d209 (CONDITIONAL_JUMP)
// 0059d02f: MOV EDX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x10] (READ)
// 0059d036: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d03d: SHL EDX,0x2
// 0059d040: ADD ECX,EDX
// 0059d042: MOV dword ptr [ESP + 0xac],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0059d049: MOV dword ptr [ESP + 0xa8],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0059d050: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d057: ADD ECX,0xc0
// 0059d05d: MOV EBP,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d064: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 0059d06b: MOV ECX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x18] (READ)
// 0059d072: ADD EDX,EBP
// 0059d074: MOV dword ptr [ESP + 0x94],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 0059d07b: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[0x1c] (READ)
// 0059d082: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 0059d089: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 0059d090: MOV EDX,dword ptr [ESP + 0x8c]
//   Label: LAB_0059d090
//   XREF to: Stack[-0x54] (READ)
// 0059d097: MOV EDX,dword ptr [EDX + 0x7164]
// 0059d09d: ADD EDX,EAX
// 0059d09f: MOV dword ptr [ESP + 0xa0],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0059d0a6: MOV EDX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x58] (READ)
// 0059d0ad: IMUL EDX,dword ptr [EDX],0x1680
// 0059d0b3: MOV ECX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x60] (READ)
// 0059d0ba: ADD ECX,EDX
// 0059d0bc: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x4c] (READ)
// 0059d0c3: MOV BL,byte ptr [EDX]
// 0059d0c5: MOV dword ptr [ESP + 0xb4],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059d0cc: TEST BL,0x1
// 0059d0cf: JZ 0x0059d1a9
//   XREF to: 0059d1a9 (CONDITIONAL_JUMP)
// 0059d0d5: MOV EBX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x40] (READ)
// 0059d0dc: CMP EAX,EBX
// 0059d0de: JGE 0x0059d1a9
//   XREF to: 0059d1a9 (CONDITIONAL_JUMP)
// 0059d0e4: IMUL EDI,EAX,0x12
// 0059d0e7: LEA ESI,[EAX*0x4 + 0x0]
// 0059d0ee: LEA EAX,[EBX*0x4 + 0x0]
// 0059d0f5: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059d0fc: MOV EAX,dword ptr [ESP + 0xa8]
//   Label: LAB_0059d0fc
//   XREF to: Stack[-0x38] (READ)
// 0059d103: MOV EAX,dword ptr [EAX + 0x7c]
// 0059d106: LEA ECX,[EAX + EDI*0x1]
// 0059d109: XOR EDX,EDX
// 0059d10b: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xb8] (DATA)
// 0059d10f: XOR EBX,EBX
//   Label: LAB_0059d10f
// 0059d111: MOV BX,word ptr [ECX]
// 0059d114: IMUL EBX,EBX,0xc
// 0059d117: ADD EBX,0x3683be0
//   XREF to: 03683be0 (DATA)
// 0059d11d: CMP EAX,EBX
// 0059d11f: JZ 0x0059d131
//   XREF to: 0059d131 (CONDITIONAL_JUMP)
// 0059d121: MOV EBP,dword ptr [EBX]
//   XREF to: 03683be0 (DATA)
// 0059d123: MOV dword ptr [EAX],EBP
//   XREF to: Stack[-0xb8] (DATA)
// 0059d125: MOV EBP,dword ptr [EBX + 0x4]
//   XREF to: 03683be4 (DATA)
// 0059d128: MOV dword ptr [EAX + 0x4],EBP
//   XREF to: Stack[-0xb4] (WRITE)
// 0059d12b: MOV EBP,dword ptr [EBX + 0x8]
//   XREF to: 03683be8 (DATA)
// 0059d12e: MOV dword ptr [EAX + 0x8],EBP
//   XREF to: Stack[-0xb0] (WRITE)
// 0059d131: XOR EBX,EBX
//   Label: LAB_0059d131
// 0059d133: MOV BX,word ptr [ECX + 0x6]
// 0059d137: ADD EAX,0xc
// 0059d13a: MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX
// 0059d13e: XOR EBX,EBX
// 0059d140: ADD EDX,0x4
// 0059d143: MOV BX,word ptr [ECX + 0xc]
// 0059d147: ADD ECX,0x2
// 0059d14a: MOV dword ptr [ESP + EDX*0x1 + 0x54],EBX
// 0059d14e: CMP EDX,0xc
// 0059d151: JNZ 0x0059d10f
//   XREF to: 0059d10f (CONDITIONAL_JUMP)
// 0059d153: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x34] (READ)
// 0059d15a: MOV EAX,dword ptr [EAX + 0x90]
// 0059d160: IMUL EAX,dword ptr [ESI + EAX*0x1],0x48
// 0059d164: MOV EBP,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x1c] (READ)
// 0059d16b: MOV ECX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x2c] (READ)
// 0059d172: PUSH EBP
// 0059d173: ADD EAX,ECX
// 0059d175: PUSH EAX
// 0059d176: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x88] (DATA)
// 0059d17a: PUSH EAX
// 0059d17b: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x94] (DATA)
// 0059d17f: PUSH EAX
// 0059d180: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xb8] (DATA)
// 0059d184: PUSH EAX
// 0059d185: MOV EBX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0059d18b: PUSH EBX
//   XREF to: 02d12db0 (DATA)
// 0059d18c: CALL core_fire.cpp_CFireEffect_FUN_004c7d00
//   XREF to: 004c7d00 (UNCONDITIONAL_CALL)
// 0059d191: ADD ESP,0x18
// 0059d194: ADD ESI,0x4
// 0059d197: MOV EBP,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x20] (READ)
// 0059d19e: ADD EDI,0x12
// 0059d1a1: CMP ESI,EBP
// 0059d1a3: JL 0x0059d0fc
//   XREF to: 0059d0fc (CONDITIONAL_JUMP)
// 0059d1a9: MOV EAX,dword ptr [ESP + 0xa0]
//   Label: LAB_0059d1a9
//   XREF to: Stack[-0x40] (READ)
// 0059d1b0: MOV EDI,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x4c] (READ)
// 0059d1b7: MOV EBP,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x58] (READ)
// 0059d1be: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x54] (READ)
// 0059d1c5: MOV ECX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x44] (READ)
// 0059d1cc: ADD EDI,0x4
// 0059d1cf: ADD EDX,0x60
// 0059d1d2: INC ECX
// 0059d1d3: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 0059d1da: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 0059d1e1: MOV EDX,ECX
// 0059d1e3: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d1ea: ADD EBP,0x4
// 0059d1ed: MOV dword ptr [ESP + 0x94],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 0059d1f4: MOV EBX,dword ptr [ECX + 0x7140]
// 0059d1fa: MOV dword ptr [ESP + 0x88],EBP
//   XREF to: Stack[-0x58] (WRITE)
// 0059d201: CMP EDX,EBX
// 0059d203: JL 0x0059d090
//   XREF to: 0059d090 (CONDITIONAL_JUMP)
// 0059d209: MOV EDX,dword ptr [ESP + 0xe4]
//   Label: LAB_0059d209
//   XREF to: Stack[0x4] (READ)
// 0059d210: XOR ESI,ESI
// 0059d212: MOV EDI,dword ptr [EDX + 0x7140]
// 0059d218: MOV dword ptr [ESP + 0xa4],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 0059d21f: TEST EDI,EDI
// 0059d221: JLE 0x0059d2f2
//   XREF to: 0059d2f2 (CONDITIONAL_JUMP)
// 0059d227: MOV EDX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x10] (READ)
// 0059d22e: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d235: SHL EDX,0x2
// 0059d238: ADD ECX,EDX
// 0059d23a: MOV dword ptr [ESP + 0xb0],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0059d241: MOV dword ptr [ESP + 0xc8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0059d248: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d24f: MOV EDI,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d256: ADD ECX,0xc0
// 0059d25c: ADD EDX,EDI
// 0059d25e: MOV dword ptr [ESP + 0x7c],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 0059d262: MOV ECX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x18] (READ)
// 0059d269: MOV dword ptr [ESP + 0x90],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0059d270: MOV dword ptr [ESP + 0x98],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 0059d277: MOV EDX,dword ptr [ESP + 0x90]
//   Label: LAB_0059d277
//   XREF to: Stack[-0x50] (READ)
// 0059d27e: MOV EDX,dword ptr [EDX + 0x7178]
// 0059d284: ADD EDX,EAX
// 0059d286: MOV ECX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x48] (READ)
// 0059d28d: MOV dword ptr [ESP + 0xbc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059d294: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x3c] (READ)
// 0059d29b: MOV BH,byte ptr [ECX]
// 0059d29d: SHL EDX,0x2
// 0059d2a0: TEST BH,0x1
// 0059d2a3: JNZ 0x0059d324
//   XREF to: 0059d324 (CONDITIONAL_JUMP)
// 0059d2a9: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_0059d2a9
//   XREF to: Stack[-0x24] (READ)
// 0059d2b0: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x48] (READ)
// 0059d2b7: MOV ECX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x50] (READ)
// 0059d2be: MOV EBX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x3c] (READ)
// 0059d2c5: ADD ECX,0x60
// 0059d2c8: ADD EDX,0x4
// 0059d2cb: MOV dword ptr [ESP + 0x90],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 0059d2d2: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 0059d2d9: INC EBX
// 0059d2da: MOV dword ptr [ESP + 0x98],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0059d2e1: MOV ESI,dword ptr [ECX + 0x7140]
// 0059d2e7: MOV dword ptr [ESP + 0xa4],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0059d2ee: CMP EBX,ESI
// 0059d2f0: JL 0x0059d277
//   XREF to: 0059d277 (CONDITIONAL_JUMP)
// 0059d2f2: ADD ESP,0xd0
//   Label: LAB_0059d2f2
// 0059d2f8: POP EBP
// 0059d2f9: POP EDI
// 0059d2fa: POP ESI
// 0059d2fb: POP EBX
// 0059d2fc: RET
// 0059d2fd: PUSH 0x6598c0
//   Label: LAB_0059d2fd
//   XREF to: 006598c0 (DATA)
// 0059d302: MOV DL,AH
// 0059d304: PUSH 0xbb8
// 0059d309: OR DL,0x1
// 0059d30c: PUSH 0x3683be0
//   XREF to: 03683be0 (DATA)
// 0059d311: MOV byte ptr [0x0368c880],DL
//   XREF to: 0368c880 (WRITE)
// 0059d317: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0059d31c: ADD ESP,0xc
// 0059d31f: JMP 0x0059cefa
//   XREF to: 0059cefa (UNCONDITIONAL_JUMP)
// 0059d324: ADD EDX,dword ptr [ESP + 0xfc]
//   Label: LAB_0059d324
//   XREF to: Stack[0x1c] (READ)
// 0059d32b: IMUL EDX,dword ptr [EDX],0x1680
// 0059d331: MOV ECX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x64] (READ)
// 0059d335: MOV EBX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x24] (READ)
// 0059d33c: ADD ECX,EDX
// 0059d33e: MOV ESI,EAX
// 0059d340: MOV dword ptr [ESP + 0xb8],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0059d347: CMP EAX,EBX
// 0059d349: JGE 0x0059d2a9
//   XREF to: 0059d2a9 (CONDITIONAL_JUMP)
// 0059d34f: IMUL EDI,EAX,0x12
// 0059d352: SHL EAX,0x2
// 0059d355: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059d35c: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_0059d35c
//   XREF to: Stack[-0x18] (READ)
// 0059d363: MOV EAX,dword ptr [EAX + 0x7c]
// 0059d366: MOV EDX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x18] (READ)
// 0059d36d: LEA ECX,[EAX + EDI*0x1]
// 0059d370: MOV EBX,dword ptr [EDX + 0x54]
// 0059d373: MOV EAX,ESI
// 0059d375: MOV EDX,dword ptr [EDX + 0xa4]
// 0059d37b: SUB EAX,EBX
// 0059d37d: MOV EAX,dword ptr [EDX + EAX*0x4]
// 0059d380: MOV EBP,dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x18] (READ)
// 0059d387: SHL EAX,0x2
// 0059d38a: ADD EAX,EBP
// 0059d38c: TEST byte ptr [EAX],0x1
// 0059d38f: JNZ 0x0059d42c
//   XREF to: 0059d42c (CONDITIONAL_JUMP)
// 0059d395: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xb8] (DATA)
// 0059d399: XOR EDX,EDX
// 0059d39b: XOR EBX,EBX
//   Label: LAB_0059d39b
// 0059d39d: MOV BX,word ptr [ECX]
// 0059d3a0: IMUL EBX,EBX,0xc
// 0059d3a3: ADD EBX,0x3683be0
//   XREF to: 03683be0 (DATA)
// 0059d3a9: CMP EAX,EBX
// 0059d3ab: JZ 0x0059d3bd
//   XREF to: 0059d3bd (CONDITIONAL_JUMP)
// 0059d3ad: MOV EBP,dword ptr [EBX]
//   XREF to: 03683be0 (DATA)
// 0059d3af: MOV dword ptr [EAX],EBP
//   XREF to: Stack[-0xb8] (DATA)
// 0059d3b1: MOV EBP,dword ptr [EBX + 0x4]
//   XREF to: 03683be4 (DATA)
// 0059d3b4: MOV dword ptr [EAX + 0x4],EBP
//   XREF to: Stack[-0xb4] (WRITE)
// 0059d3b7: MOV EBP,dword ptr [EBX + 0x8]
//   XREF to: 03683be8 (DATA)
// 0059d3ba: MOV dword ptr [EAX + 0x8],EBP
//   XREF to: Stack[-0xb0] (WRITE)
// 0059d3bd: XOR EBX,EBX
//   Label: LAB_0059d3bd
// 0059d3bf: MOV BX,word ptr [ECX + 0x6]
// 0059d3c3: SHL EBX,0x8
// 0059d3c6: MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX
// 0059d3ca: XOR EBX,EBX
// 0059d3cc: ADD EAX,0xc
// 0059d3cf: MOV BX,word ptr [ECX + 0xc]
// 0059d3d3: ADD EDX,0x4
// 0059d3d6: SHL EBX,0x8
// 0059d3d9: ADD ECX,0x2
// 0059d3dc: MOV dword ptr [ESP + EDX*0x1 + 0x54],EBX
// 0059d3e0: CMP EDX,0xc
// 0059d3e3: JNZ 0x0059d39b
//   XREF to: 0059d39b (CONDITIONAL_JUMP)
// 0059d3e5: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x1c] (READ)
// 0059d3ec: PUSH EAX
// 0059d3ed: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x30] (READ)
// 0059d3f4: MOV EDX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x14] (READ)
// 0059d3fb: MOV EAX,dword ptr [EAX + 0x90]
// 0059d401: ADD EAX,EDX
// 0059d403: IMUL EAX,dword ptr [EAX],0x48
// 0059d406: ADD EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x28] (READ)
// 0059d40d: PUSH EAX
// 0059d40e: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x88] (DATA)
// 0059d412: PUSH EAX
// 0059d413: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x94] (DATA)
// 0059d417: PUSH EAX
// 0059d418: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xb8] (DATA)
// 0059d41c: PUSH EAX
// 0059d41d: MOV EBP,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 0059d423: PUSH EBP
//   XREF to: 02d12db0 (DATA)
// 0059d424: CALL core_fire.cpp_CFireEffect_FUN_004c7d00
//   XREF to: 004c7d00 (UNCONDITIONAL_CALL)
// 0059d429: ADD ESP,0x18
// 0059d42c: MOV EBP,dword ptr [ESP + 0xcc]
//   Label: LAB_0059d42c
//   XREF to: Stack[-0x14] (READ)
// 0059d433: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x24] (READ)
// 0059d43a: ADD EDI,0x12
// 0059d43d: ADD EBP,0x4
// 0059d440: INC ESI
// 0059d441: MOV dword ptr [ESP + 0xcc],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0059d448: CMP ESI,EAX
// 0059d44a: JGE 0x0059d2a9
//   XREF to: 0059d2a9 (CONDITIONAL_JUMP)
// 0059d450: JMP 0x0059d35c
//   XREF to: 0059d35c (UNCONDITIONAL_JUMP)
