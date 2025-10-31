// Name: core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
// Address: 004705a0
// Address Range: [[004705a0, 004706ba]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter * this_ptr, float init_value, int flags)
// Cross-references:
//   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 (00470060) at 00470155 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005081a8 [UNCONDITIONAL_CALL]
// Globals:
//   double g_FilterIntensityScale1 = 256
//   double g_FilterIntensityScale2 = 0.25
// Function calls:
//   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dfilter_cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter *this_ptr,float init_value,int flags)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  float10 fVar9;
  float fStack_24;
  byte bStack_14;
  
  if (flags == 0) {
    core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(this_ptr);
  }
  iVar8 = 0;
  if (0 < this_ptr->count) {
    do {
      iVar7 = 0;
      if (0 < this_ptr->size) {
        do {
          iVar4 = this_ptr->size / 2;
          fVar2 = (float)(iVar4 - iVar7);
          iVar5 = this_ptr->count / 2 - iVar8;
          fVar3 = (float)iVar5;
          fStack_24 = SQRT(fVar3 * fVar3 + fVar2 * fVar2) / (float)iVar4;
          uVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),
                           (ushort)(1.0 < fStack_24) << 8 | (ushort)NAN(fStack_24) << 10 |
                           (ushort)(fStack_24 == 1.0) << 0xe);
          if (1.0 < fStack_24) {
            fStack_24 = 1.0;
          }
          fVar2 = (1.0 - fStack_24) * init_value;
          if (flags == 0) {
            fVar9 = (float10)fVar2 * (float10)g_FilterIntensityScale1 *
                    (float10)g_FilterIntensityScale2;
          }
          else {
            bVar1 = *(byte *)((int)this_ptr->data_buffer + this_ptr->size * iVar8 + iVar7);
            uVar6 = (uint)bVar1;
            fVar9 = (float10)bVar1 * (float10)fVar2;
          }
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44(flags,uVar6));
          bStack_14 = (byte)(int)ROUND(fVar9);
          if (0x3f < bStack_14) {
            bStack_14 = 0x3f;
          }
          *(byte *)(this_ptr->size * iVar8 + extraout_ECX + (int)this_ptr->data_buffer) = bStack_14;
          iVar7 = extraout_ECX + 1;
        } while (iVar7 < this_ptr->size);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_ptr->count);
  }
  return;
}


// Assembly code:
// 004705a0: PUSH EBX
//   Label: core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
// 004705a1: PUSH ESI
// 004705a2: PUSH EDI
// 004705a3: PUSH EBP
// 004705a4: MOV EBP,ESP
// 004705a6: SUB ESP,0x14
// 004705a9: AND ESP,0xfffffff8
// 004705ac: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004705af: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 004705b3: JZ 0x00470687
//   XREF to: 00470687 (CONDITIONAL_JUMP)
// 004705b9: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_004705b9
// 004705bc: XOR EDI,EDI
// 004705be: TEST ECX,ECX
// 004705c0: JLE 0x00470680
//   XREF to: 00470680 (CONDITIONAL_JUMP)
// 004705c6: MOV EAX,dword ptr [EBX]
//   Label: LAB_004705c6
// 004705c8: XOR ECX,ECX
// 004705ca: TEST EAX,EAX
// 004705cc: JLE 0x00470676
//   XREF to: 00470676 (CONDITIONAL_JUMP)
// 004705d2: MOV EAX,dword ptr [EBX]
//   Label: LAB_004705d2
// 004705d4: MOV EDX,EAX
// 004705d6: SAR EDX,0x1f
// 004705d9: SUB EAX,EDX
// 004705db: SAR EAX,0x1
// 004705dd: MOV ESI,EAX
// 004705df: SUB EAX,ECX
// 004705e1: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004705e5: MOV EAX,dword ptr [EBX + 0x4]
// 004705e8: MOV EDX,EAX
// 004705ea: SAR EDX,0x1f
// 004705ed: SUB EAX,EDX
// 004705ef: SAR EAX,0x1
// 004705f1: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004705f5: FMUL ST0
// 004705f7: SUB EAX,EDI
// 004705f9: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004705fd: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00470601: FMUL ST0
// 00470603: FADDP
// 00470605: FSQRT
// 00470607: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0047060b: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0047060f: FXCH
// 00470611: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00470614: FDIVR float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00470617: FST float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047061a: FLD1
// 0047061c: FCOMPP
// 0047061e: FNSTSW AX
// 00470620: SAHF
// 00470621: JC 0x00470695
//   XREF to: 00470695 (CONDITIONAL_JUMP)
// 00470623: FLD float ptr [ESP]
//   Label: LAB_00470623
//   XREF to: Stack[-0x28] (DATA)
// 00470626: FLD1
// 00470628: FSUBRP
// 0047062a: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047062d: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00470630: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00470633: TEST EDX,EDX
// 00470635: JNZ 0x0047069e
//   XREF to: 0047069e (CONDITIONAL_JUMP)
// 00470637: FLD float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047063a: FMUL double ptr [0x0061e766]
//   XREF to: 0061e766 (READ)
// 00470640: FMUL double ptr [0x0061e76e]
//   XREF to: 0061e76e (READ)
// 00470646: CALL crt_math.c_round_FUN_005fe6b0
//   Label: LAB_00470646
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047064b: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0047064f: MOV AL,byte ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00470653: MOVZX ESI,AL
// 00470656: CMP ESI,0x3f
// 00470659: JLE 0x0047065d
//   XREF to: 0047065d (CONDITIONAL_JUMP)
// 0047065b: MOV AL,0x3f
// 0047065d: MOV ESI,dword ptr [EBX]
//   Label: LAB_0047065d
// 0047065f: IMUL ESI,EDI
// 00470662: MOV EDX,dword ptr [EBX + 0x48]
// 00470665: ADD ESI,ECX
// 00470667: ADD ESI,EDX
// 00470669: MOV byte ptr [ESI],AL
// 0047066b: INC ECX
// 0047066c: MOV ESI,dword ptr [EBX]
// 0047066e: CMP ECX,ESI
// 00470670: JL 0x004705d2
//   XREF to: 004705d2 (CONDITIONAL_JUMP)
// 00470676: INC EDI
//   Label: LAB_00470676
// 00470677: CMP EDI,dword ptr [EBX + 0x4]
// 0047067a: JL 0x004705c6
//   XREF to: 004705c6 (CONDITIONAL_JUMP)
// 00470680: MOV ESP,EBP
//   Label: LAB_00470680
// 00470682: POP EBP
// 00470683: POP EDI
// 00470684: POP ESI
// 00470685: POP EBX
// 00470686: RET
// 00470687: PUSH EBX
//   Label: LAB_00470687
// 00470688: CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
//   XREF to: 00470260 (UNCONDITIONAL_CALL)
// 0047068d: ADD ESP,0x4
// 00470690: JMP 0x004705b9
//   XREF to: 004705b9 (UNCONDITIONAL_JUMP)
// 00470695: MOV dword ptr [ESP],0x3f800000
//   Label: LAB_00470695
//   XREF to: Stack[-0x28] (DATA)
// 0047069c: JMP 0x00470623
//   XREF to: 00470623 (UNCONDITIONAL_JUMP)
// 0047069e: MOV EAX,dword ptr [EBX]
//   Label: LAB_0047069e
// 004706a0: IMUL EAX,EDI
// 004706a3: MOV ESI,dword ptr [EBX + 0x48]
// 004706a6: ADD EAX,ECX
// 004706a8: ADD ESI,EAX
// 004706aa: XOR EAX,EAX
// 004706ac: MOV AL,byte ptr [ESI]
// 004706ae: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004706b2: FILD word ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004706b6: FMUL float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004706b9: JMP 0x00470646
//   XREF to: 00470646 (UNCONDITIONAL_JUMP)
