// Name: core_curtain.cpp_FUN_0044a920
// Address: 0044a920
// Address Range: [[0044a920, 0044b05e]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044a920()
// Globals:
//   TerminatedCString s_none_00619c1a
//   double DOUBLE_00619c22 = 0.850000000000000
//   double DOUBLE_00619c2a = 4
//   double DOUBLE_00619c32 = 0.03125
//   float FLOAT_00619c3a = 0.05000000
//   double DOUBLE_00619c42 = 0.100000000000000
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_008879bc
//   CVector3f[100] DAT_008879c0
//   undefined4 DAT_008879c4
//   undefined4 DAT_008879c8
//   SCollisionInfo[100] DAT_00887e70
//   undefined4 DAT_00887e88
//   undefined4 DAT_00887e8c
//   CEventList g_CEventListInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
// Function calls:
//   core_curtain.cpp_FUN_00449f10
//   core_curtain.cpp_FUN_00449fc0
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044a920(undefined4 param_1, undefined4
   param_2) */

void core_curtain_cpp_FUN_0044a920(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  SCollisionInfo *pSVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float fStack_e0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  if (((*(int *)(in_stack_00000004 + 0x65b30) != 0) || (*(int *)(in_stack_00000004 + 400) != 0)) &&
     (*(undefined4 *)(in_stack_00000004 + 0x65b30) = 0, *(int *)(in_stack_00000004 + 0x1f8) != 0)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)(in_stack_00000004 + 0x194));
    if (iVar3 != 0) {
      *(undefined4 *)(in_stack_00000004 + 400) = 1;
    }
    iVar3 = crt_string_c_strcmp_FUN_005fef20((char *)(in_stack_00000004 + 0x194),"none");
    if ((iVar3 == 0) || (*(int *)(in_stack_00000004 + 400) != 0)) {
      if (*(int *)(in_stack_00000004 + 0x65b2c) != 0) {
        uStack_14 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x38))();
        *(undefined4 *)(in_stack_00000004 + 0x65b28) = uStack_14;
      }
      *(float *)(in_stack_00000004 + 0x1c728) = 1.0 / in_stack_00000008;
      local_ac = 99999.0;
      local_a8 = 99999.0;
      local_a4 = 99999.0;
      local_7c = -99999.0;
      local_78 = -99999.0;
      local_74 = -99999.0;
      iVar3 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x204)) {
        iVar6 = in_stack_00000004 + 0x208;
        do {
          if (*(float *)(iVar6 + 0x20) < local_ac) {
            local_ac = *(float *)(iVar6 + 0x20);
          }
          if (*(float *)(iVar6 + 0x24) < local_a8) {
            local_a8 = *(float *)(iVar6 + 0x24);
          }
          if (*(float *)(iVar6 + 0x28) < local_a4) {
            local_a4 = *(float *)(iVar6 + 0x28);
          }
          if (local_7c < *(float *)(iVar6 + 0x20)) {
            local_7c = *(float *)(iVar6 + 0x20);
          }
          if (local_78 < *(float *)(iVar6 + 0x24)) {
            local_78 = *(float *)(iVar6 + 0x24);
          }
          if (local_74 < *(float *)(iVar6 + 0x28)) {
            local_74 = *(float *)(iVar6 + 0x28);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x74;
        } while (iVar3 < *(int *)(in_stack_00000004 + 0x204));
      }
      iStack_28 = 0;
      DAT_008879bc = 0;
      for (iStack_20 = 0; iVar3 = DAT_008879bc, iStack_20 < g_CDemonSetPtr->damage_listener_count;
          iStack_20 = iStack_20 + 1) {
        iVar6 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_28 + -4);
        pSVar7 = DAT_00887e70 + DAT_008879bc;
        if (DAT_008879c0 + DAT_008879bc != (CVector3f *)(iVar6 + 0x20)) {
          DAT_008879c0[DAT_008879bc].x = ((CVector3f *)(iVar6 + 0x20))->x;
          DAT_008879c0[iVar3].y = *(float *)(iVar6 + 0x24);
          DAT_008879c0[iVar3].z = *(float *)(iVar6 + 0x28);
        }
        pSVar7->ray_type = 0;
        iVar4 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x34))();
        if (((iVar4 == 2) && (*(float *)(iVar6 + 0x24) <= local_78)) &&
           ((local_a8 <= *(float *)(iVar6 + 0x24) + DAT_00887e70[iVar3].cylinder_top_y &&
            ((((local_ac <= *(float *)(iVar6 + 0x20) + DAT_00887e70[iVar3].cylinder_radius &&
               (*(float *)(iVar6 + 0x20) - DAT_00887e70[iVar3].cylinder_radius <= local_7c)) &&
              (local_a4 <= *(float *)(iVar6 + 0x28) + DAT_00887e70[iVar3].cylinder_radius)) &&
             (*(float *)(iVar6 + 0x28) - DAT_00887e70[iVar3].cylinder_radius <= local_74)))))) {
          DAT_008879bc = DAT_008879bc + 1;
        }
        iStack_28 = iStack_28 + 4;
      }
      *(undefined4 *)(in_stack_00000004 + 0x65b34) = 1;
      if ((iVar3 == 0) && (*(int *)(in_stack_00000004 + 400) == 0)) {
        *(undefined4 *)(in_stack_00000004 + 0x65b34) = 0;
        if (0 < *(int *)(in_stack_00000004 + 0x204)) {
          pfVar5 = (float *)(in_stack_00000004 + 0x208);
          iVar3 = 0;
          do {
            if (pfVar5[0x1a] == 0.0) {
              if ((float)DOUBLE_00619c42 <
                  SQRT(pfVar5[0xd] * pfVar5[0xd] +
                       pfVar5[0xb] * pfVar5[0xb] + pfVar5[0xc] * pfVar5[0xc])) {
                *(undefined4 *)(in_stack_00000004 + 0x65b34) = 1;
                goto LAB_0044ac09;
              }
              fStack_b8 = pfVar5[3] - *pfVar5;
              fStack_b4 = pfVar5[4] - pfVar5[1];
              fStack_b0 = pfVar5[5] - pfVar5[2];
              if ((float)DOUBLE_00619c42 <
                  SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4)) {
                *(undefined4 *)(in_stack_00000004 + 0x65b34) = 1;
                goto LAB_0044ac09;
              }
            }
            iVar3 = iVar3 + 1;
            pfVar5 = pfVar5 + 0x1d;
          } while (iVar3 < *(int *)(in_stack_00000004 + 0x204));
        }
        if (*(int *)(in_stack_00000004 + 0x65b34) == 0) {
          return;
        }
      }
LAB_0044ac09:
      iVar6 = 0;
      iVar3 = in_stack_00000004;
      if (0 < *(int *)(in_stack_00000004 + 0x204)) {
        do {
          *(undefined4 *)(iVar3 + 0x274) = 0;
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 0x74;
        } while (iVar6 < *(int *)(in_stack_00000004 + 0x204));
      }
      iStack_1c = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x204)) {
        iVar3 = in_stack_00000004 + 0x208;
        do {
          if (*(int *)(iVar3 + 0x68) == 0) {
            fVar2 = (float)DOUBLE_00619c22;
            *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) * fVar2;
            fVar1 = *(float *)(in_stack_00000004 + 0x65b18);
            *(float *)(iVar3 + 0x34) = fVar2 * *(float *)(iVar3 + 0x34);
            *(float *)(iVar3 + 0x30) = fVar1 * *(float *)(iVar3 + 0x30);
            fStack_e0 = *(float *)(in_stack_00000004 + 0x65b14);
            if (*(int *)(iVar3 + 0x70) != 0) {
              fStack_e0 = fStack_e0 * (float)DOUBLE_00619c2a;
            }
            fStack_44 = 1.0 / in_stack_00000008;
            fStack_18 = fStack_e0 * (float)DOUBLE_00619c32;
            fStack_64 = -*(float *)(iVar3 + 0x2c);
            fStack_60 = -*(float *)(iVar3 + 0x30);
            fStack_4c = fStack_64 * fStack_44;
            fStack_50 = 1.0 / fStack_18;
            fStack_48 = fStack_60 * fStack_44;
            fStack_5c = -*(float *)(iVar3 + 0x34);
            fStack_44 = fStack_5c * fStack_44;
            fStack_94 = fStack_4c * fStack_18;
            fStack_90 = fStack_48 * fStack_18;
            fStack_8c = fStack_44 * fStack_18;
            fStack_70 = fStack_94 * FLOAT_00619c3a + 0.0;
            fStack_58 = fStack_70 * fStack_50;
            fStack_6c = (0.0 - fStack_e0) + fStack_90 * FLOAT_00619c3a;
            fStack_68 = fStack_8c * FLOAT_00619c3a + 0.0;
            fStack_54 = fStack_6c * fStack_50;
            fStack_50 = fStack_68 * fStack_50;
            if (&fStack_c4 != &fStack_58) {
              fStack_c4 = fStack_58;
              fStack_c0 = fStack_54;
              fStack_bc = fStack_50;
            }
            pfVar5 = (float *)(iVar3 + 0x2c);
            *pfVar5 = *pfVar5 + fStack_c4 * in_stack_00000008;
            *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) + fStack_c0 * in_stack_00000008;
            fStack_a0 = *pfVar5 * in_stack_00000008;
            *(float *)(iVar3 + 0x34) = *(float *)(iVar3 + 0x34) + fStack_bc * in_stack_00000008;
            fStack_9c = *(float *)(iVar3 + 0x30) * in_stack_00000008;
            fStack_98 = in_stack_00000008 * *(float *)(iVar3 + 0x34);
            *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fStack_a0;
            *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fStack_9c;
            *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fStack_98;
            core_curtain_cpp_FUN_00449fc0();
          }
          iVar3 = iVar3 + 0x74;
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < *(int *)(in_stack_00000004 + 0x204));
      }
      iStack_30 = in_stack_00000004 + 0x208;
      iStack_24 = 0;
      do {
        iVar6 = 0;
        iVar3 = iStack_30;
        if (0 < *(int *)(in_stack_00000004 + 0x204)) {
          do {
            if (*(int *)(iVar3 + 0x68) == 0) {
              core_curtain_cpp_FUN_00449fc0();
            }
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + 0x74;
          } while (iVar6 < *(int *)(in_stack_00000004 + 0x204));
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 3);
      iVar3 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x204)) {
        pfVar5 = (float *)(in_stack_00000004 + 0x65b20);
        iVar6 = in_stack_00000004 + 0x208;
        do {
          iStack_2c = iVar6;
          if (*(int *)(iStack_2c + 0x6c) != 0) {
            *(float *)(iStack_2c + 0x2c) = *pfVar5 * *(float *)(iStack_2c + 0x2c);
            *(float *)(iStack_2c + 0x30) = *pfVar5 * *(float *)(iStack_2c + 0x30);
            *(float *)(iStack_2c + 0x34) = *pfVar5 * *(float *)(iStack_2c + 0x34);
          }
          if ((undefined4 *)(iStack_2c + 0x38) != (undefined4 *)(iStack_2c + 0x20)) {
            *(undefined4 *)(iStack_2c + 0x38) = *(undefined4 *)(iStack_2c + 0x20);
            *(undefined4 *)(iStack_2c + 0x3c) = *(undefined4 *)(iStack_2c + 0x24);
            *(undefined4 *)(iStack_2c + 0x40) = *(undefined4 *)(iStack_2c + 0x28);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iStack_2c + 0x74;
        } while (iVar3 < *(int *)(in_stack_00000004 + 0x204));
      }
      if (*(int *)(in_stack_00000004 + 0x65b2c) != 0) {
        iVar6 = 0;
        iVar3 = 0;
        if (0 < *(int *)(in_stack_00000004 + 0x204)) {
          iVar4 = in_stack_00000004 + 0x208;
          do {
            if (*(float *)(iVar4 + 0x24) <= *(float *)(in_stack_00000004 + 0x65b28)) {
              iVar3 = iVar3 + 1;
            }
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 0x74;
          } while (iVar6 < *(int *)(in_stack_00000004 + 0x204));
        }
        if (iVar3 == *(int *)(in_stack_00000004 + 0x204)) {
          *(undefined4 *)(in_stack_00000004 + 0x1f8) = 0;
        }
      }
      core_curtain_cpp_FUN_00449f10();
    }
  }
  return;
}


// Assembly code:
// 0044a920: PUSH EBX
//   Label: core_curtain.cpp_FUN_0044a920
// 0044a921: PUSH ESI
// 0044a922: PUSH EDI
// 0044a923: PUSH EBP
// 0044a924: MOV EBP,ESP
// 0044a926: SUB ESP,0xd0
// 0044a92c: AND ESP,0xfffffff8
// 0044a92f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044a932: CMP dword ptr [EDI + 0x65b30],0x0
// 0044a939: JNZ 0x0044a948
//   XREF to: 0044a948 (CONDITIONAL_JUMP)
// 0044a93b: CMP dword ptr [EDI + 0x190],0x0
// 0044a942: JZ 0x0044ad91
//   XREF to: 0044ad91 (CONDITIONAL_JUMP)
// 0044a948: MOV EBX,dword ptr [EDI + 0x1f8]
//   Label: LAB_0044a948
// 0044a94e: MOV dword ptr [EDI + 0x65b30],0x0
// 0044a958: TEST EBX,EBX
// 0044a95a: JZ 0x0044ad91
//   XREF to: 0044ad91 (CONDITIONAL_JUMP)
// 0044a960: LEA EAX,[EDI + 0x194]
// 0044a966: PUSH EAX
// 0044a967: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0044a96d: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 0044a96e: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0044a973: ADD ESP,0x8
// 0044a976: TEST EAX,EAX
// 0044a978: JZ 0x0044a984
//   XREF to: 0044a984 (CONDITIONAL_JUMP)
// 0044a97a: MOV dword ptr [EDI + 0x190],0x1
// 0044a984: PUSH 0x619c1a
//   Label: LAB_0044a984
//   XREF to: 00619c1a (DATA)
// 0044a989: LEA EAX,[EDI + 0x194]
// 0044a98f: PUSH EAX
// 0044a990: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0044a995: ADD ESP,0x8
// 0044a998: TEST EAX,EAX
// 0044a99a: JZ 0x0044a9a9
//   XREF to: 0044a9a9 (CONDITIONAL_JUMP)
// 0044a99c: CMP dword ptr [EDI + 0x190],0x0
// 0044a9a3: JZ 0x0044ad91
//   XREF to: 0044ad91 (CONDITIONAL_JUMP)
// 0044a9a9: CMP dword ptr [EDI + 0x65b2c],0x0
//   Label: LAB_0044a9a9
// 0044a9b0: JZ 0x0044a9da
//   XREF to: 0044a9da (CONDITIONAL_JUMP)
// 0044a9b2: PUSH 0x0
// 0044a9b4: MOV EAX,dword ptr [EDI + 0x154]
// 0044a9ba: PUSH 0x3dcccccd
// 0044a9bf: PUSH EDI
// 0044a9c0: CALL dword ptr [EAX + 0x38]
// 0044a9c3: MOV dword ptr [ESP + 0xd8],EAX
// 0044a9ca: MOV EAX,dword ptr [ESP + 0xd8]
// 0044a9d1: MOV dword ptr [EDI + 0x65b28],EAX
// 0044a9d7: ADD ESP,0xc
// 0044a9da: FLD float ptr [EBP + 0x18]
//   Label: LAB_0044a9da
//   XREF to: Stack[0x8] (READ)
// 0044a9dd: FLD1
// 0044a9df: FDIVRP
// 0044a9e1: MOV ECX,0x47c34f80
// 0044a9e6: MOV EAX,0xc7c34f80
// 0044a9eb: FSTP float ptr [EDI + 0x1c728]
// 0044a9f1: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0xac] (WRITE)
// 0044a9f5: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0xa8] (WRITE)
// 0044a9f9: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0xa4] (WRITE)
// 0044a9fd: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0044aa01: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0044aa05: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0044aa09: MOV EDX,EAX
// 0044aa0b: MOV EBX,dword ptr [EDI + 0x204]
// 0044aa11: XOR EDX,EAX
// 0044aa13: TEST EBX,EBX
// 0044aa15: JLE 0x0044aaa7
//   XREF to: 0044aaa7 (CONDITIONAL_JUMP)
// 0044aa1b: LEA ESI,[EDI + 0x208]
// 0044aa21: FLD float ptr [ESI + 0x20]
//   Label: LAB_0044aa21
// 0044aa24: MOV EBX,ESI
// 0044aa26: FCOMP float ptr [ESP + 0x34]
// 0044aa2a: FNSTSW AX
// 0044aa2c: SAHF
// 0044aa2d: JNC 0x0044aa36
//   XREF to: 0044aa36 (CONDITIONAL_JUMP)
// 0044aa2f: MOV EAX,dword ptr [ESI + 0x20]
// 0044aa32: MOV dword ptr [ESP + 0x34],EAX
// 0044aa36: FLD float ptr [EBX + 0x24]
//   Label: LAB_0044aa36
// 0044aa39: FCOMP float ptr [ESP + 0x38]
// 0044aa3d: FNSTSW AX
// 0044aa3f: SAHF
// 0044aa40: JNC 0x0044aa49
//   XREF to: 0044aa49 (CONDITIONAL_JUMP)
// 0044aa42: MOV EAX,dword ptr [EBX + 0x24]
// 0044aa45: MOV dword ptr [ESP + 0x38],EAX
// 0044aa49: FLD float ptr [EBX + 0x28]
//   Label: LAB_0044aa49
// 0044aa4c: FCOMP float ptr [ESP + 0x3c]
// 0044aa50: FNSTSW AX
// 0044aa52: SAHF
// 0044aa53: JNC 0x0044aa5c
//   XREF to: 0044aa5c (CONDITIONAL_JUMP)
// 0044aa55: MOV EAX,dword ptr [EBX + 0x28]
// 0044aa58: MOV dword ptr [ESP + 0x3c],EAX
// 0044aa5c: FLD float ptr [EBX + 0x20]
//   Label: LAB_0044aa5c
// 0044aa5f: FCOMP float ptr [ESP + 0x64]
// 0044aa63: FNSTSW AX
// 0044aa65: SAHF
// 0044aa66: JBE 0x0044aa6f
//   XREF to: 0044aa6f (CONDITIONAL_JUMP)
// 0044aa68: MOV EAX,dword ptr [EBX + 0x20]
// 0044aa6b: MOV dword ptr [ESP + 0x64],EAX
// 0044aa6f: FLD float ptr [EBX + 0x24]
//   Label: LAB_0044aa6f
// 0044aa72: FCOMP float ptr [ESP + 0x68]
// 0044aa76: FNSTSW AX
// 0044aa78: SAHF
// 0044aa79: JBE 0x0044aa82
//   XREF to: 0044aa82 (CONDITIONAL_JUMP)
// 0044aa7b: MOV EAX,dword ptr [EBX + 0x24]
// 0044aa7e: MOV dword ptr [ESP + 0x68],EAX
// 0044aa82: FLD float ptr [EBX + 0x28]
//   Label: LAB_0044aa82
// 0044aa85: FCOMP float ptr [ESP + 0x6c]
// 0044aa89: FNSTSW AX
// 0044aa8b: SAHF
// 0044aa8c: JBE 0x0044aa95
//   XREF to: 0044aa95 (CONDITIONAL_JUMP)
// 0044aa8e: MOV EAX,dword ptr [EBX + 0x28]
// 0044aa91: MOV dword ptr [ESP + 0x6c],EAX
// 0044aa95: INC EDX
//   Label: LAB_0044aa95
// 0044aa96: MOV EAX,dword ptr [EDI + 0x204]
// 0044aa9c: ADD ESI,0x74
// 0044aa9f: CMP EDX,EAX
// 0044aaa1: JL 0x0044aa21
//   XREF to: 0044aa21 (CONDITIONAL_JUMP)
// 0044aaa7: XOR EDX,EDX
//   Label: LAB_0044aaa7
// 0044aaa9: MOV dword ptr [ESP + 0xc0],EDX
// 0044aab0: MOV dword ptr [ESP + 0xb8],EDX
// 0044aab7: MOV dword ptr [0x008879bc],EDX
//   XREF to: 008879bc (WRITE)
// 0044aabd: MOV EDX,dword ptr [0x006810c8]
//   Label: LAB_0044aabd
//   XREF to: 006810c8 (READ)
// 0044aac3: MOV EAX,dword ptr [ESP + 0xc0]
// 0044aaca: CMP EAX,dword ptr [EDX + 0x14f098]
//   XREF to: 03263310 (READ)
// 0044aad0: JGE 0x0044abb1
//   XREF to: 0044abb1 (CONDITIONAL_JUMP)
// 0044aad6: MOV EAX,[0x008879bc]
//   XREF to: 008879bc (READ)
// 0044aadb: IMUL ESI,EAX,0x28
// 0044aade: ADD EDX,dword ptr [ESP + 0xb8]
// 0044aae5: MOV EBX,dword ptr [EDX + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 0044aaeb: IMUL EDX,EAX,0xc
// 0044aaee: ADD EDX,0x8879c0
//   XREF to: 008879c0 (DATA)
// 0044aaf4: LEA EAX,[EBX + 0x20]
// 0044aaf7: ADD ESI,0x887e70
//   XREF to: 00887e70 (DATA)
// 0044aafd: CMP EDX,EAX
// 0044aaff: JZ 0x0044ab11
//   XREF to: 0044ab11 (CONDITIONAL_JUMP)
// 0044ab01: MOV ECX,dword ptr [EAX]
// 0044ab03: MOV dword ptr [EDX],ECX
//   XREF to: 008879c0 (WRITE)
// 0044ab05: MOV ECX,dword ptr [EAX + 0x4]
// 0044ab08: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 008879c4 (WRITE)
// 0044ab0b: MOV ECX,dword ptr [EAX + 0x8]
// 0044ab0e: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 008879c8 (WRITE)
// 0044ab11: PUSH ESI
//   Label: LAB_0044ab11
//   XREF to: 00887e70 (DATA)
// 0044ab12: MOV dword ptr [ESI],0x0
//   XREF to: 00887e70 (WRITE)
// 0044ab18: PUSH EBX
// 0044ab19: MOV EAX,dword ptr [EBX + 0x154]
// 0044ab1f: CALL dword ptr [EAX + 0x34]
// 0044ab22: ADD ESP,0x8
// 0044ab25: CMP EAX,0x2
// 0044ab28: JZ 0x0044ab4f
//   XREF to: 0044ab4f (CONDITIONAL_JUMP)
// 0044ab2a: MOV EAX,dword ptr [ESP + 0xc0]
//   Label: LAB_0044ab2a
// 0044ab31: MOV ESI,dword ptr [ESP + 0xb8]
// 0044ab38: INC EAX
// 0044ab39: ADD ESI,0x4
// 0044ab3c: MOV dword ptr [ESP + 0xc0],EAX
// 0044ab43: MOV dword ptr [ESP + 0xb8],ESI
// 0044ab4a: JMP 0x0044aabd
//   XREF to: 0044aabd (UNCONDITIONAL_JUMP)
// 0044ab4f: FLD float ptr [EBX + 0x24]
//   Label: LAB_0044ab4f
// 0044ab52: FCOMP float ptr [ESP + 0x68]
// 0044ab56: FNSTSW AX
// 0044ab58: SAHF
// 0044ab59: JA 0x0044ab2a
//   XREF to: 0044ab2a (CONDITIONAL_JUMP)
// 0044ab5b: FLD float ptr [EBX + 0x24]
// 0044ab5e: FADD float ptr [ESI + 0x18]
//   XREF to: 00887e88 (READ)
// 0044ab61: FCOMP float ptr [ESP + 0x38]
// 0044ab65: FNSTSW AX
// 0044ab67: SAHF
// 0044ab68: JC 0x0044ab2a
//   XREF to: 0044ab2a (CONDITIONAL_JUMP)
// 0044ab6a: FLD float ptr [EBX + 0x20]
// 0044ab6d: FADD float ptr [ESI + 0x1c]
//   XREF to: 00887e8c (READ)
// 0044ab70: FCOMP float ptr [ESP + 0x34]
// 0044ab74: FNSTSW AX
// 0044ab76: SAHF
// 0044ab77: JC 0x0044ab2a
//   XREF to: 0044ab2a (CONDITIONAL_JUMP)
// 0044ab79: FLD float ptr [EBX + 0x20]
// 0044ab7c: FSUB float ptr [ESI + 0x1c]
//   XREF to: 00887e8c (READ)
// 0044ab7f: FCOMP float ptr [ESP + 0x64]
// 0044ab83: FNSTSW AX
// 0044ab85: SAHF
// 0044ab86: JA 0x0044ab2a
//   XREF to: 0044ab2a (CONDITIONAL_JUMP)
// 0044ab88: FLD float ptr [EBX + 0x28]
// 0044ab8b: FADD float ptr [ESI + 0x1c]
//   XREF to: 00887e8c (READ)
// 0044ab8e: FCOMP float ptr [ESP + 0x3c]
// 0044ab92: FNSTSW AX
// 0044ab94: SAHF
// 0044ab95: JC 0x0044ab2a
//   XREF to: 0044ab2a (CONDITIONAL_JUMP)
// 0044ab97: FLD float ptr [EBX + 0x28]
// 0044ab9a: FSUB float ptr [ESI + 0x1c]
//   XREF to: 00887e8c (READ)
// 0044ab9d: FCOMP float ptr [ESP + 0x6c]
// 0044aba1: FNSTSW AX
// 0044aba3: SAHF
// 0044aba4: JA 0x0044ab2a
//   XREF to: 0044ab2a (CONDITIONAL_JUMP)
// 0044aba6: INC dword ptr [0x008879bc]
//   XREF to: 008879bc (READ_WRITE)
// 0044abac: JMP 0x0044ab2a
//   XREF to: 0044ab2a (UNCONDITIONAL_JUMP)
// 0044abb1: MOV EAX,[0x008879bc]
//   Label: LAB_0044abb1
//   XREF to: 008879bc (READ)
// 0044abb6: MOV dword ptr [EDI + 0x65b34],0x1
// 0044abc0: TEST EAX,EAX
// 0044abc2: JNZ 0x0044ac09
//   XREF to: 0044ac09 (CONDITIONAL_JUMP)
// 0044abc4: MOV EDX,dword ptr [EDI + 0x190]
// 0044abca: TEST EDX,EDX
// 0044abcc: JNZ 0x0044ac09
//   XREF to: 0044ac09 (CONDITIONAL_JUMP)
// 0044abce: MOV ECX,dword ptr [EDI + 0x204]
// 0044abd4: MOV dword ptr [EDI + 0x65b34],EAX
// 0044abda: TEST ECX,ECX
// 0044abdc: JLE 0x0044abfc
//   XREF to: 0044abfc (CONDITIONAL_JUMP)
// 0044abde: LEA EBX,[EDI + 0x208]
// 0044abe4: CMP dword ptr [EBX + 0x68],0x0
//   Label: LAB_0044abe4
// 0044abe8: JZ 0x0044ad98
//   XREF to: 0044ad98 (CONDITIONAL_JUMP)
// 0044abee: INC EDX
//   Label: LAB_0044abee
// 0044abef: MOV ECX,dword ptr [EDI + 0x204]
// 0044abf5: ADD EBX,0x74
// 0044abf8: CMP EDX,ECX
// 0044abfa: JL 0x0044abe4
//   XREF to: 0044abe4 (CONDITIONAL_JUMP)
// 0044abfc: CMP dword ptr [EDI + 0x65b34],0x0
//   Label: LAB_0044abfc
// 0044ac03: JZ 0x0044ad91
//   XREF to: 0044ad91 (CONDITIONAL_JUMP)
// 0044ac09: MOV EAX,dword ptr [EDI + 0x204]
//   Label: LAB_0044ac09
// 0044ac0f: XOR EDX,EDX
// 0044ac11: TEST EAX,EAX
// 0044ac13: JLE 0x0044ac30
//   XREF to: 0044ac30 (CONDITIONAL_JUMP)
// 0044ac15: MOV EAX,EDI
// 0044ac17: MOV dword ptr [EAX + 0x274],0x0
//   Label: LAB_0044ac17
// 0044ac21: INC EDX
// 0044ac22: MOV ECX,dword ptr [EDI + 0x204]
// 0044ac28: ADD EAX,0x74
// 0044ac2b: CMP EDX,ECX
// 0044ac2d: JL 0x0044ac17
//   XREF to: 0044ac17 (CONDITIONAL_JUMP)
// 0044ac2f: NOP
// 0044ac30: XOR EBX,EBX
//   Label: LAB_0044ac30
// 0044ac32: MOV ESI,dword ptr [EDI + 0x204]
// 0044ac38: MOV dword ptr [ESP + 0xc4],EBX
// 0044ac3f: TEST ESI,ESI
// 0044ac41: JLE 0x0044ac72
//   XREF to: 0044ac72 (CONDITIONAL_JUMP)
// 0044ac43: LEA EBX,[EDI + 0x208]
// 0044ac49: MOV EAX,dword ptr [EBX + 0x68]
//   Label: LAB_0044ac49
// 0044ac4c: MOV ESI,EBX
// 0044ac4e: TEST EAX,EAX
// 0044ac50: JZ 0x0044ae1c
//   XREF to: 0044ae1c (CONDITIONAL_JUMP)
// 0044ac56: MOV EAX,dword ptr [ESP + 0xc4]
//   Label: LAB_0044ac56
// 0044ac5d: ADD EBX,0x74
// 0044ac60: INC EAX
// 0044ac61: MOV EDX,dword ptr [EDI + 0x204]
// 0044ac67: MOV dword ptr [ESP + 0xc4],EAX
// 0044ac6e: CMP EAX,EDX
// 0044ac70: JL 0x0044ac49
//   XREF to: 0044ac49 (CONDITIONAL_JUMP)
// 0044ac72: LEA EAX,[EDI + 0x208]
//   Label: LAB_0044ac72
// 0044ac78: XOR ECX,ECX
// 0044ac7a: MOV dword ptr [ESP + 0xb0],EAX
// 0044ac81: MOV dword ptr [ESP + 0xbc],ECX
// 0044ac88: MOV ECX,dword ptr [EDI + 0x204]
//   Label: LAB_0044ac88
// 0044ac8e: XOR ESI,ESI
// 0044ac90: TEST ECX,ECX
// 0044ac92: JLE 0x0044acb3
//   XREF to: 0044acb3 (CONDITIONAL_JUMP)
// 0044ac94: MOV EBX,dword ptr [ESP + 0xb0]
// 0044ac9b: CMP dword ptr [EBX + 0x68],0x0
//   Label: LAB_0044ac9b
// 0044ac9f: JZ 0x0044b050
//   XREF to: 0044b050 (CONDITIONAL_JUMP)
// 0044aca5: INC ESI
//   Label: LAB_0044aca5
// 0044aca6: MOV EAX,dword ptr [EDI + 0x204]
// 0044acac: ADD EBX,0x74
// 0044acaf: CMP ESI,EAX
// 0044acb1: JL 0x0044ac9b
//   XREF to: 0044ac9b (CONDITIONAL_JUMP)
// 0044acb3: MOV EDX,dword ptr [ESP + 0xbc]
//   Label: LAB_0044acb3
// 0044acba: INC EDX
// 0044acbb: MOV dword ptr [ESP + 0xbc],EDX
// 0044acc2: CMP EDX,0x3
// 0044acc5: JL 0x0044ac88
//   XREF to: 0044ac88 (CONDITIONAL_JUMP)
// 0044acc7: MOV EBX,dword ptr [EDI + 0x204]
// 0044accd: XOR ECX,ECX
// 0044accf: TEST EBX,EBX
// 0044acd1: JLE 0x0044ad3c
//   XREF to: 0044ad3c (CONDITIONAL_JUMP)
// 0044acd3: LEA ESI,[EDI + 0x65b20]
// 0044acd9: LEA EBX,[EDI + 0x208]
// 0044acdf: MOV EAX,dword ptr [EBX + 0x6c]
//   Label: LAB_0044acdf
// 0044ace2: MOV dword ptr [ESP + 0xb4],EBX
// 0044ace9: TEST EAX,EAX
// 0044aceb: JZ 0x0044ad06
//   XREF to: 0044ad06 (CONDITIONAL_JUMP)
// 0044aced: LEA EAX,[EBX + 0x2c]
// 0044acf0: FLD float ptr [ESI]
// 0044acf2: FMUL float ptr [EAX]
// 0044acf4: FSTP float ptr [EAX]
// 0044acf6: FLD float ptr [ESI]
// 0044acf8: FMUL float ptr [EAX + 0x4]
// 0044acfb: FSTP float ptr [EAX + 0x4]
// 0044acfe: FLD float ptr [ESI]
// 0044ad00: FMUL float ptr [EAX + 0x8]
// 0044ad03: FSTP float ptr [EAX + 0x8]
// 0044ad06: MOV EDX,dword ptr [ESP + 0xb4]
//   Label: LAB_0044ad06
// 0044ad0d: MOV EAX,dword ptr [ESP + 0xb4]
// 0044ad14: ADD EDX,0x20
// 0044ad17: ADD EAX,0x38
// 0044ad1a: CMP EAX,EDX
// 0044ad1c: JZ 0x0044ad2e
//   XREF to: 0044ad2e (CONDITIONAL_JUMP)
// 0044ad1e: FLD float ptr [EDX]
// 0044ad20: FSTP float ptr [EAX]
// 0044ad22: FLD float ptr [EDX + 0x4]
// 0044ad25: FSTP float ptr [EAX + 0x4]
// 0044ad28: FLD float ptr [EDX + 0x8]
// 0044ad2b: FSTP float ptr [EAX + 0x8]
// 0044ad2e: INC ECX
//   Label: LAB_0044ad2e
// 0044ad2f: MOV EDX,dword ptr [EDI + 0x204]
// 0044ad35: ADD EBX,0x74
// 0044ad38: CMP ECX,EDX
// 0044ad3a: JL 0x0044acdf
//   XREF to: 0044acdf (CONDITIONAL_JUMP)
// 0044ad3c: CMP dword ptr [EDI + 0x65b2c],0x0
//   Label: LAB_0044ad3c
// 0044ad43: JZ 0x0044ad88
//   XREF to: 0044ad88 (CONDITIONAL_JUMP)
// 0044ad45: MOV ESI,dword ptr [EDI + 0x204]
// 0044ad4b: XOR EBX,EBX
// 0044ad4d: XOR ECX,ECX
// 0044ad4f: TEST ESI,ESI
// 0044ad51: JLE 0x0044ad76
//   XREF to: 0044ad76 (CONDITIONAL_JUMP)
// 0044ad53: LEA EDX,[EDI + 0x208]
// 0044ad59: FLD float ptr [EDX + 0x24]
//   Label: LAB_0044ad59
// 0044ad5c: FCOMP float ptr [EDI + 0x65b28]
// 0044ad62: FNSTSW AX
// 0044ad64: SAHF
// 0044ad65: JA 0x0044ad68
//   XREF to: 0044ad68 (CONDITIONAL_JUMP)
// 0044ad67: INC ECX
// 0044ad68: INC EBX
//   Label: LAB_0044ad68
// 0044ad69: MOV ESI,dword ptr [EDI + 0x204]
// 0044ad6f: ADD EDX,0x74
// 0044ad72: CMP EBX,ESI
// 0044ad74: JL 0x0044ad59
//   XREF to: 0044ad59 (CONDITIONAL_JUMP)
// 0044ad76: CMP ECX,dword ptr [EDI + 0x204]
//   Label: LAB_0044ad76
// 0044ad7c: JNZ 0x0044ad88
//   XREF to: 0044ad88 (CONDITIONAL_JUMP)
// 0044ad7e: MOV dword ptr [EDI + 0x1f8],0x0
// 0044ad88: PUSH EDI
//   Label: LAB_0044ad88
// 0044ad89: CALL core_curtain.cpp_FUN_00449f10
//   XREF to: 00449f10 (UNCONDITIONAL_CALL)
// 0044ad8e: ADD ESP,0x4
// 0044ad91: MOV ESP,EBP
//   Label: LAB_0044ad91
// 0044ad93: POP EBP
// 0044ad94: POP EDI
// 0044ad95: POP ESI
// 0044ad96: POP EBX
// 0044ad97: RET
// 0044ad98: LEA EAX,[EBX + 0x2c]
//   Label: LAB_0044ad98
// 0044ad9b: FLD float ptr [EAX + 0x4]
// 0044ad9e: FMUL ST0
// 0044ada0: FLD float ptr [EAX]
// 0044ada2: FMUL ST0
// 0044ada4: FADDP
// 0044ada6: FLD float ptr [EAX + 0x8]
// 0044ada9: FMUL ST0
// 0044adab: FADDP
// 0044adad: FSQRT
// 0044adaf: FCOMP double ptr [0x00619c42]
//   XREF to: 00619c42 (READ)
// 0044adb5: FNSTSW AX
// 0044adb7: SAHF
// 0044adb8: JBE 0x0044adc9
//   XREF to: 0044adc9 (CONDITIONAL_JUMP)
// 0044adba: MOV dword ptr [EDI + 0x65b34],0x1
// 0044adc4: JMP 0x0044ac09
//   XREF to: 0044ac09 (UNCONDITIONAL_JUMP)
// 0044adc9: LEA EAX,[EBX + 0xc]
//   Label: LAB_0044adc9
// 0044adcc: FLD float ptr [EAX]
// 0044adce: FSUB float ptr [EBX]
// 0044add0: FSTP float ptr [ESP + 0x28]
// 0044add4: FLD float ptr [EAX + 0x4]
// 0044add7: FSUB float ptr [EBX + 0x4]
// 0044adda: FST float ptr [ESP + 0x2c]
// 0044adde: FMUL float ptr [ESP + 0x2c]
// 0044ade2: FLD float ptr [ESP + 0x28]
// 0044ade6: FMUL ST0
// 0044ade8: FLD float ptr [EAX + 0x8]
// 0044adeb: FSUB float ptr [EBX + 0x8]
// 0044adee: FXCH
// 0044adf0: FADDP ST2,ST0
// 0044adf2: FST float ptr [ESP + 0x30]
// 0044adf6: FMUL float ptr [ESP + 0x30]
// 0044adfa: FADDP
// 0044adfc: FSQRT
// 0044adfe: FCOMP double ptr [0x00619c42]
//   XREF to: 00619c42 (READ)
// 0044ae04: FNSTSW AX
// 0044ae06: SAHF
// 0044ae07: JBE 0x0044abee
//   XREF to: 0044abee (CONDITIONAL_JUMP)
// 0044ae0d: MOV dword ptr [EDI + 0x65b34],0x1
// 0044ae17: JMP 0x0044ac09
//   XREF to: 0044ac09 (UNCONDITIONAL_JUMP)
// 0044ae1c: FLD float ptr [EBX + 0x2c]
//   Label: LAB_0044ae1c
// 0044ae1f: FLD ST0
// 0044ae21: FLD double ptr [0x00619c22]
//   XREF to: 00619c22 (READ)
// 0044ae27: FXCH
// 0044ae29: FMUL ST1
// 0044ae2b: FLD float ptr [EBX + 0x34]
// 0044ae2e: FMUL ST2
// 0044ae30: FXCH
// 0044ae32: FSTP ST3
// 0044ae34: FXCH ST2
// 0044ae36: FSTP float ptr [EBX + 0x2c]
// 0044ae39: FLD float ptr [EDI + 0x65b18]
// 0044ae3f: FMUL float ptr [EBX + 0x30]
// 0044ae42: FXCH
// 0044ae44: FSTP ST2
// 0044ae46: FXCH
// 0044ae48: FSTP float ptr [EBX + 0x34]
// 0044ae4b: FSTP float ptr [EBX + 0x30]
// 0044ae4e: MOV dword ptr [ESP + 0x78],EAX
// 0044ae52: MOV dword ptr [ESP + 0x74],EAX
// 0044ae56: MOV dword ptr [ESP + 0x70],EAX
// 0044ae5a: MOV EAX,dword ptr [EDI + 0x65b14]
// 0044ae60: MOV EDX,dword ptr [EBX + 0x70]
// 0044ae63: MOV dword ptr [ESP],EAX
// 0044ae66: TEST EDX,EDX
// 0044ae68: JZ 0x0044ae76
//   XREF to: 0044ae76 (CONDITIONAL_JUMP)
// 0044ae6a: FLD float ptr [ESP]
// 0044ae6d: FMUL double ptr [0x00619c2a]
//   XREF to: 00619c2a (READ)
// 0044ae73: FSTP float ptr [ESP]
// 0044ae76: FLD1
//   Label: LAB_0044ae76
// 0044ae78: FDIV float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044ae7b: FLD float ptr [ESP]
// 0044ae7e: FLD ST0
// 0044ae80: FMUL double ptr [0x00619c32]
//   XREF to: 00619c32 (READ)
// 0044ae86: FLD float ptr [ESP + 0x74]
// 0044ae8a: FLD1
// 0044ae8c: LEA EAX,[ESI + 0x2c]
// 0044ae8f: FXCH
// 0044ae91: FSUBRP ST3,ST0
// 0044ae93: FXCH
// 0044ae95: FSTP float ptr [ESP + 0xc8]
// 0044ae9c: FXCH
// 0044ae9e: FSTP float ptr [ESP + 0x74]
// 0044aea2: FLD float ptr [EAX]
// 0044aea4: FCHS
// 0044aea6: FST float ptr [ESP + 0x7c]
// 0044aeaa: FLD float ptr [EAX + 0x4]
// 0044aead: FCHS
// 0044aeaf: FXCH
// 0044aeb1: FMUL ST3
// 0044aeb3: FXCH ST2
// 0044aeb5: FDIV float ptr [ESP + 0xc8]
// 0044aebc: FXCH
// 0044aebe: FST float ptr [ESP + 0x80]
// 0044aec5: FMUL ST3
// 0044aec7: FLD float ptr [EAX + 0x8]
// 0044aeca: FCHS
// 0044aecc: FST float ptr [ESP + 0x84]
// 0044aed3: FMULP ST4
// 0044aed5: FXCH ST2
// 0044aed7: FST float ptr [ESP + 0x94]
// 0044aede: FMUL float ptr [ESP + 0xc8]
// 0044aee5: FXCH ST2
// 0044aee7: FST float ptr [ESP + 0x98]
// 0044aeee: FMUL float ptr [ESP + 0xc8]
// 0044aef5: FXCH ST3
// 0044aef7: FST float ptr [ESP + 0x9c]
// 0044aefe: FMUL float ptr [ESP + 0xc8]
// 0044af05: FXCH ST2
// 0044af07: FST float ptr [ESP + 0x4c]
// 0044af0b: FLD float ptr [0x00619c3a]
//   XREF to: 00619c3a (READ)
// 0044af11: FXCH
// 0044af13: FMUL ST1
// 0044af15: FXCH ST4
// 0044af17: FST float ptr [ESP + 0x50]
// 0044af1b: FMUL ST1
// 0044af1d: FLD float ptr [ESP + 0x70]
// 0044af21: FXCH ST4
// 0044af23: FST float ptr [ESP + 0x54]
// 0044af27: FXCH ST5
// 0044af29: FSTP float ptr [ESP + 0x10]
// 0044af2d: FXCH ST3
// 0044af2f: FADD float ptr [ESP + 0x10]
// 0044af33: FXCH ST4
// 0044af35: FMULP
// 0044af37: FXCH ST3
// 0044af39: FST float ptr [ESP + 0x70]
// 0044af3d: FMUL ST1
// 0044af3f: FLD float ptr [ESP + 0x78]
// 0044af43: FLD float ptr [ESP + 0x74]
// 0044af47: FXCH ST4
// 0044af49: FSTP float ptr [ESP + 0x14]
// 0044af4d: FXCH ST4
// 0044af4f: FSTP float ptr [ESP + 0x18]
// 0044af53: FXCH ST2
// 0044af55: FADD float ptr [ESP + 0x14]
// 0044af59: FXCH ST3
// 0044af5b: FADD float ptr [ESP + 0x18]
// 0044af5f: FXCH ST3
// 0044af61: FST float ptr [ESP + 0x74]
// 0044af65: FMUL ST1
// 0044af67: FXCH ST3
// 0044af69: FST float ptr [ESP + 0x78]
// 0044af6d: FMULP
// 0044af6f: LEA EDX,[ESP + 0x1c]
// 0044af73: LEA EAX,[ESP + 0x88]
// 0044af7a: FXCH
// 0044af7c: FSTP float ptr [ESP + 0x88]
// 0044af83: FXCH
// 0044af85: FSTP float ptr [ESP + 0x8c]
// 0044af8c: FSTP float ptr [ESP + 0x90]
// 0044af93: CMP EDX,EAX
// 0044af95: JZ 0x0044afb8
//   XREF to: 0044afb8 (CONDITIONAL_JUMP)
// 0044af97: MOV EAX,dword ptr [ESP + 0x88]
// 0044af9e: MOV dword ptr [ESP + 0x1c],EAX
// 0044afa2: MOV EAX,dword ptr [ESP + 0x8c]
// 0044afa9: MOV dword ptr [ESP + 0x20],EAX
// 0044afad: MOV EAX,dword ptr [ESP + 0x90]
// 0044afb4: MOV dword ptr [ESP + 0x24],EAX
// 0044afb8: FLD float ptr [EBP + 0x18]
//   Label: LAB_0044afb8
//   XREF to: Stack[0x8] (READ)
// 0044afbb: FLD float ptr [ESP + 0x1c]
// 0044afbf: FMUL ST1
// 0044afc1: FLD float ptr [ESP + 0x20]
// 0044afc5: FMUL ST2
// 0044afc7: FLD float ptr [ESP + 0x24]
// 0044afcb: FMUL ST3
// 0044afcd: LEA EAX,[ESI + 0x2c]
// 0044afd0: FXCH ST2
// 0044afd2: FSTP float ptr [ESP + 0x4]
// 0044afd6: FSTP float ptr [ESP + 0x8]
// 0044afda: FSTP float ptr [ESP + 0xc]
// 0044afde: FLD float ptr [EAX + 0x4]
// 0044afe1: FLD float ptr [EAX]
// 0044afe3: FADD float ptr [ESP + 0x4]
// 0044afe7: FLD float ptr [EAX + 0x8]
// 0044afea: FXCH
// 0044afec: FSTP float ptr [EAX]
// 0044afee: FXCH
// 0044aff0: FADD float ptr [ESP + 0x8]
// 0044aff4: FLD float ptr [EAX]
// 0044aff6: FXCH
// 0044aff8: FSTP float ptr [EAX + 0x4]
// 0044affb: FXCH
// 0044affd: FADD float ptr [ESP + 0xc]
// 0044b001: FXCH
// 0044b003: FMUL ST2
// 0044b005: FXCH
// 0044b007: FSTP float ptr [EAX + 0x8]
// 0044b00a: FSTP float ptr [ESP + 0x40]
// 0044b00e: FLD float ptr [EAX + 0x4]
// 0044b011: FMUL ST1
// 0044b013: FSTP float ptr [ESP + 0x44]
// 0044b017: FMUL float ptr [EAX + 0x8]
// 0044b01a: LEA EAX,[ESI + 0x20]
// 0044b01d: FSTP float ptr [ESP + 0x48]
// 0044b021: PUSH ESI
// 0044b022: FLD float ptr [EAX]
// 0044b024: FADD float ptr [ESP + 0x44]
// 0044b028: FLD float ptr [EAX + 0x4]
// 0044b02b: FXCH
// 0044b02d: FSTP float ptr [EAX]
// 0044b02f: FADD float ptr [ESP + 0x48]
// 0044b033: FLD float ptr [EAX + 0x8]
// 0044b036: FXCH
// 0044b038: FSTP float ptr [EAX + 0x4]
// 0044b03b: FADD float ptr [ESP + 0x4c]
// 0044b03f: PUSH EDI
// 0044b040: FSTP float ptr [EAX + 0x8]
// 0044b043: CALL core_curtain.cpp_FUN_00449fc0
//   XREF to: 00449fc0 (UNCONDITIONAL_CALL)
// 0044b048: ADD ESP,0x8
// 0044b04b: JMP 0x0044ac56
//   XREF to: 0044ac56 (UNCONDITIONAL_JUMP)
// 0044b050: PUSH EBX
//   Label: LAB_0044b050
// 0044b051: PUSH EDI
// 0044b052: CALL core_curtain.cpp_FUN_00449fc0
//   XREF to: 00449fc0 (UNCONDITIONAL_CALL)
// 0044b057: ADD ESP,0x8
// 0044b05a: JMP 0x0044aca5
//   XREF to: 0044aca5 (UNCONDITIONAL_JUMP)
