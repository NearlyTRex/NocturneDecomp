// Name: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
// Address: 0059cba0
// Address Range: [[0059cba0, 0059ce3e]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_GetPtrsAndDoSomething1_FUN_005a10e0 (005a10e0) at 005a1128 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064ec1b
//   TerminatedCString s_CDeformableModel_exactRa_0064ec30
//   WatcomTypeInfo g_CVectorTypeInfo
//   undefined4 DAT_00662ea0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CVector3f[5000] DAT_0367517c
//   undefined4 DAT_03675180
//   undefined4 DAT_03675184
//   undefined4 DAT_03675188
//   undefined4 DAT_0367518c
//   undefined4 DAT_03675190
//   undefined1 DAT_03683bdc
//   undefined4 DAT_0368c884
//   undefined4 DAT_0368c888
//   undefined4 DAT_0368c88c
//   undefined4 DAT_0368c890
//   undefined4 DAT_0368c894
//   undefined4 DAT_0368c898
// Function calls:
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_exactRayTrace(CDeformableModel* param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4
   param_6) */

float core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0059cba0(void)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  int *in_stack_00000014;
  byte *in_stack_00000018;
  undefined1 auStack_68 [36];
  float local_44;
  float local_40;
  float fStack_3c;
  float local_30;
  float local_2c;
  float local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if ((DAT_03683bdc & 1) == 0) {
    DAT_03683bdc = DAT_03683bdc | 1;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_0367517c,5000,&g_CVectorTypeInfo)
    ;
  }
  if (5000 < *(int *)(in_stack_00000008 * 4 + in_stack_00000004 + 0x2c)) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x6d2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::exactRayTrace - too many vertices!");
  }
  iVar6 = in_stack_00000008 * 4 + in_stack_00000004;
  pCVar2 = DAT_0367517c;
  iVar4 = 0;
  if (0 < *(int *)(iVar6 + 0x2c)) {
    do {
      pCVar2->x = (float)*in_stack_00000014 * _DAT_00662ea0;
      pCVar2->y = (float)in_stack_00000014[1] * _DAT_00662ea0;
      pCVar2->z = (float)in_stack_00000014[2] * _DAT_00662ea0;
      iVar4 = iVar4 + 1;
      pCVar2 = pCVar2 + 1;
      in_stack_00000014 = in_stack_00000014 + 3;
    } while (iVar4 < *(int *)(iVar6 + 0x2c));
  }
  local_14 = 1.01;
  local_18 = 0;
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x7140)) {
    local_1c = in_stack_00000004 + in_stack_00000008 * 4;
    local_20 = in_stack_00000008 * 4 + in_stack_00000004;
    local_24 = in_stack_00000018;
    do {
      iVar6 = *(int *)(local_20 + 0x7164) + local_18;
      if (((*local_24 & 1) != 0) && (local_18 < iVar6)) {
        iVar5 = local_18 * 0x12;
        iVar3 = local_18;
        local_18 = iVar6;
        do {
          iVar6 = *(int *)(local_1c + 0x7c);
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                    ((CDemonTriangle *)auStack_68,DAT_0367517c + *(ushort *)(iVar6 + iVar5),
                     DAT_0367517c + *(ushort *)(iVar6 + 2 + iVar5),
                     DAT_0367517c + *(ushort *)(iVar6 + 4 + iVar5));
          fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            ((CDemonTriangle *)(auStack_68 + 4),in_stack_0000000c,in_stack_00000010)
          ;
          if (((fVar1 < local_14) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
            local_30 = -local_44;
            local_2c = -local_40;
            local_28 = -fStack_3c;
            if (&stack0x00000000 != g_DeformableModelPool[0].field1_0x4 + 0x14) {
              DAT_0368c888 = local_30;
              DAT_0368c88c = local_2c;
              DAT_0368c890 = local_28;
            }
            DAT_0368c894 = in_stack_00000008;
            DAT_0368c884 = iVar4;
            DAT_0368c898 = iVar3;
            local_14 = fVar1;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x12;
          iVar6 = local_18;
        } while (iVar3 < local_18);
      }
      local_18 = iVar6;
      iVar4 = iVar4 + 1;
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x60;
    } while (iVar4 < *(int *)(in_stack_00000004 + 0x7140));
  }
  return local_14;
}


// Assembly code:
// 0059cba0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
// 0059cba1: PUSH ESI
// 0059cba2: PUSH EDI
// 0059cba3: PUSH EBP
// 0059cba4: MOV EBP,ESP
// 0059cba6: SUB ESP,0x68
// 0059cba9: AND ESP,0xfffffff8
// 0059cbac: MOV AH,byte ptr [0x03683bdc]
//   XREF to: 03683bdc (READ)
// 0059cbb2: TEST AH,0x1
// 0059cbb5: JZ 0x0059ce18
//   XREF to: 0059ce18 (CONDITIONAL_JUMP)
// 0059cbbb: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0059cbbb
//   XREF to: Stack[0x8] (READ)
// 0059cbbe: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059cbc1: SHL EAX,0x2
// 0059cbc4: ADD EAX,EDX
// 0059cbc6: CMP dword ptr [EAX + 0x2c],0x1388
// 0059cbcd: JLE 0x0059cbf2
//   XREF to: 0059cbf2 (CONDITIONAL_JUMP)
// 0059cbcf: MOV EBX,0x64ec1b
//   XREF to: 0064ec1b (PARAM)
// 0059cbd4: MOV ESI,0x6d2
// 0059cbd9: PUSH 0x64ec30
//   XREF to: 0064ec30 (DATA)
// 0059cbde: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0059cbe4: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0059cbea: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059cbef: ADD ESP,0x4
// 0059cbf2: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_0059cbf2
//   XREF to: Stack[0x8] (READ)
// 0059cbf5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059cbf8: SHL EDI,0x2
// 0059cbfb: ADD EDI,EAX
// 0059cbfd: MOV ECX,0x367517c
//   XREF to: 0367517c (DATA)
// 0059cc02: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0059cc05: MOV EBX,dword ptr [EDI + 0x2c]
// 0059cc08: XOR ESI,ESI
// 0059cc0a: TEST EBX,EBX
// 0059cc0c: JLE 0x0059cc50
//   XREF to: 0059cc50 (CONDITIONAL_JUMP)
// 0059cc0e: MOV EAX,EDX
//   Label: LAB_0059cc0e
// 0059cc10: MOV EBX,ECX
// 0059cc12: FILD dword ptr [EAX]
// 0059cc14: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059cc1a: FSTP float ptr [EBX]
//   XREF to: 0367517c (WRITE)
//   XREF to: 03675188 (WRITE)
// 0059cc1c: FILD dword ptr [EAX + 0x4]
// 0059cc1f: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059cc25: FSTP float ptr [EBX + 0x4]
//   XREF to: 03675180 (WRITE)
//   XREF to: 0367518c (WRITE)
// 0059cc28: FILD dword ptr [EAX + 0x8]
// 0059cc2b: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059cc31: FSTP float ptr [EBX + 0x8]
//   XREF to: 03675184 (WRITE)
//   XREF to: 03675190 (WRITE)
// 0059cc34: INC ESI
// 0059cc35: ADD ECX,0xc
// 0059cc38: MOV EAX,dword ptr [EDI + 0x2c]
// 0059cc3b: ADD EDX,0xc
// 0059cc3e: CMP ESI,EAX
// 0059cc40: JL 0x0059cc0e
//   XREF to: 0059cc0e (CONDITIONAL_JUMP)
// 0059cc42: LEA EAX,[EAX]
// 0059cc48: LEA EDX,[EDX]
// 0059cc4e: MOV EAX,EAX
// 0059cc50: MOV dword ptr [ESP + 0x60],0x3f8147ae
//   Label: LAB_0059cc50
//   XREF to: Stack[-0x18] (WRITE)
// 0059cc58: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059cc5b: XOR EAX,EAX
// 0059cc5d: MOV ECX,dword ptr [EDX + 0x7140]
// 0059cc63: XOR EDI,EDI
// 0059cc65: TEST ECX,ECX
// 0059cc67: JLE 0x0059ce0d
//   XREF to: 0059ce0d (CONDITIONAL_JUMP)
// 0059cc6d: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059cc70: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059cc73: SHL EDX,0x2
// 0059cc76: ADD ECX,EDX
// 0059cc78: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059cc7b: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0059cc7f: ADD EDX,EBX
// 0059cc81: MOV ECX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0059cc84: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059cc88: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0059cc8c: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_0059cc8c
//   XREF to: Stack[-0x24] (READ)
// 0059cc90: MOV EDX,dword ptr [EDX + 0x7164]
// 0059cc96: ADD EDX,EAX
// 0059cc98: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059cc9c: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 0059cca0: TEST byte ptr [EDX],0x1
// 0059cca3: JZ 0x0059cde1
//   XREF to: 0059cde1 (CONDITIONAL_JUMP)
// 0059cca9: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x1c] (READ)
// 0059ccad: MOV EBX,EAX
// 0059ccaf: CMP EAX,ESI
// 0059ccb1: JGE 0x0059cde1
//   XREF to: 0059cde1 (CONDITIONAL_JUMP)
// 0059ccb7: IMUL ESI,EAX,0x12
// 0059ccba: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_0059ccba
//   XREF to: Stack[-0x20] (READ)
// 0059ccbe: MOV EDX,dword ptr [EDX + 0x7c]
// 0059ccc1: XOR ECX,ECX
// 0059ccc3: MOV CX,word ptr [EDX + ESI*0x1 + 0x4]
// 0059ccc8: LEA EAX,[ECX*0x4 + 0x0]
// 0059cccf: SUB EAX,ECX
// 0059ccd1: SHL EAX,0x2
// 0059ccd4: XOR ECX,ECX
// 0059ccd6: ADD EAX,0x367517c
//   XREF to: 0367517c (DATA)
// 0059ccdb: MOV CX,word ptr [EDX + ESI*0x1 + 0x2]
// 0059cce0: PUSH EAX
// 0059cce1: LEA EAX,[ECX*0x4 + 0x0]
// 0059cce8: SUB EAX,ECX
// 0059ccea: SHL EAX,0x2
// 0059cced: ADD EAX,0x367517c
//   XREF to: 0367517c (DATA)
// 0059ccf2: MOV DX,word ptr [EDX + ESI*0x1]
// 0059ccf6: PUSH EAX
// 0059ccf7: AND EDX,0xffff
// 0059ccfd: LEA EAX,[EDX*0x4 + 0x0]
// 0059cd04: SUB EAX,EDX
// 0059cd06: SHL EAX,0x2
// 0059cd09: ADD EAX,0x367517c
//   XREF to: 0367517c (DATA)
// 0059cd0e: PUSH EAX
// 0059cd0f: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x6c] (DATA)
// 0059cd13: PUSH EAX
// 0059cd14: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 0059cd19: ADD ESP,0x10
// 0059cd1c: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059cd1f: PUSH EDX
// 0059cd20: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059cd23: PUSH ECX
// 0059cd24: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x6c] (DATA)
// 0059cd28: PUSH EAX
// 0059cd29: CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   XREF to: 0049a800 (UNCONDITIONAL_CALL)
// 0059cd2e: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059cd32: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (READ)
// 0059cd36: ADD ESP,0xc
// 0059cd39: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (WRITE)
// 0059cd3d: FCOMP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 0059cd41: FNSTSW AX
// 0059cd43: SAHF
// 0059cd44: JNC 0x0059cdd1
//   XREF to: 0059cdd1 (CONDITIONAL_JUMP)
// 0059cd4a: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (READ)
// 0059cd4e: FLDZ
// 0059cd50: FXCH
// 0059cd52: FSTP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0059cd55: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0059cd58: FNSTSW AX
// 0059cd5a: SAHF
// 0059cd5b: JA 0x0059cdd1
//   XREF to: 0059cdd1 (CONDITIONAL_JUMP)
// 0059cd5d: FLD1
// 0059cd5f: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0059cd62: FNSTSW AX
// 0059cd64: SAHF
// 0059cd65: JC 0x0059cdd1
//   XREF to: 0059cdd1 (CONDITIONAL_JUMP)
// 0059cd67: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x48] (READ)
// 0059cd6b: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x44] (READ)
// 0059cd6f: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x40] (READ)
// 0059cd73: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (READ)
// 0059cd77: FXCH ST2
// 0059cd79: FCHS
// 0059cd7b: FXCH
// 0059cd7d: FCHS
// 0059cd7f: FXCH ST2
// 0059cd81: FCHS
// 0059cd83: FXCH
// 0059cd85: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x34] (WRITE)
// 0059cd89: FXCH
// 0059cd8b: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (WRITE)
// 0059cd8f: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0059cd93: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x34] (DATA)
// 0059cd97: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0059cd9b: CMP EAX,0x368c888
//   XREF to: 0368c888 (DATA)
// 0059cda0: JZ 0x0059cdbd
//   XREF to: 0059cdbd (CONDITIONAL_JUMP)
// 0059cda2: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x34] (DATA)
// 0059cda6: MOV [0x0368c888],EAX
//   XREF to: 0368c888 (WRITE)
// 0059cdab: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 0059cdaf: MOV [0x0368c88c],EAX
//   XREF to: 0368c88c (WRITE)
// 0059cdb4: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x2c] (READ)
// 0059cdb8: MOV [0x0368c890],EAX
//   XREF to: 0368c890 (WRITE)
// 0059cdbd: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0059cdbd
//   XREF to: Stack[0x8] (READ)
// 0059cdc0: MOV dword ptr [0x0368c898],EBX
//   XREF to: 0368c898 (WRITE)
// 0059cdc6: MOV dword ptr [0x0368c884],EDI
//   XREF to: 0368c884 (WRITE)
// 0059cdcc: MOV [0x0368c894],EAX
//   XREF to: 0368c894 (WRITE)
// 0059cdd1: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_0059cdd1
//   XREF to: Stack[-0x1c] (READ)
// 0059cdd5: INC EBX
// 0059cdd6: ADD ESI,0x12
// 0059cdd9: CMP EBX,EAX
// 0059cddb: JL 0x0059ccba
//   XREF to: 0059ccba (CONDITIONAL_JUMP)
// 0059cde1: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_0059cde1
//   XREF to: Stack[-0x1c] (READ)
// 0059cde5: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 0059cde9: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 0059cded: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059cdf0: INC EDI
// 0059cdf1: ADD EBX,0x4
// 0059cdf4: ADD ESI,0x60
// 0059cdf7: MOV ECX,dword ptr [EDX + 0x7140]
// 0059cdfd: MOV dword ptr [ESP + 0x50],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0059ce01: MOV dword ptr [ESP + 0x54],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0059ce05: CMP EDI,ECX
// 0059ce07: JL 0x0059cc8c
//   XREF to: 0059cc8c (CONDITIONAL_JUMP)
// 0059ce0d: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_0059ce0d
//   XREF to: Stack[-0x18] (READ)
// 0059ce11: MOV ESP,EBP
// 0059ce13: POP EBP
// 0059ce14: POP EDI
// 0059ce15: POP ESI
// 0059ce16: POP EBX
// 0059ce17: RET
// 0059ce18: PUSH 0x6598c0
//   Label: LAB_0059ce18
//   XREF to: 006598c0 (DATA)
// 0059ce1d: MOV DL,AH
// 0059ce1f: PUSH 0x1388
// 0059ce24: OR DL,0x1
// 0059ce27: PUSH 0x367517c
//   XREF to: 0367517c (DATA)
// 0059ce2c: MOV byte ptr [0x03683bdc],DL
//   XREF to: 03683bdc (WRITE)
// 0059ce32: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0059ce37: ADD ESP,0xc
// 0059ce3a: JMP 0x0059cbbb
//   XREF to: 0059cbbb (UNCONDITIONAL_JUMP)
