// Name: core_set.cpp_CDemonSet_FUN_0056e3e0
// Address: 0056e3e0
// Address Range: [[0056e3e0, 0056e5c1]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056e3e0(CDemonSet * this_ptr)
// Cross-references:
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea54e [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb3b1 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00645e8b = 255
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 DAT_02d7a7b8
//   undefined4 DAT_03277d80
//   undefined4 DAT_03277d84
//   undefined4 DAT_03277d88
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056e3e0(CDemonSet *this_ptr)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar7 = DAT_02d7a7b8;
  iVar9 = 0;
  local_3c = 0.0;
  local_40 = 0.0;
  local_38 = 0.0;
  if (0 < DAT_03277d80) {
    do {
      iVar1 = *(int *)((int)&DAT_03277d84 + iVar9);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar8 = *(float *)(iVar1 + 0x104) - (*in_stack_00000008 + *in_stack_0000000c);
        fVar5 = *(float *)(iVar1 + 0x108) - (in_stack_00000008[1] + in_stack_0000000c[1]);
        fVar6 = *(float *)(iVar1 + 0x10c) - (in_stack_00000008[2] + in_stack_0000000c[2]);
        fVar8 = (float)(((int)(fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5) >> 1) + DAT_02d7a7b8);
        if (fVar8 <= *(float *)(iVar1 + 0x11d4)) {
          fVar8 = 1.0 - fVar8 / *(float *)(iVar1 + 0x11d4);
          local_3c = *(float *)(iVar1 + 0x11c4) * fVar8 + local_3c;
          local_40 = *(float *)(iVar1 + 0x11c8) * fVar8 + local_40;
          local_38 = *(float *)(iVar1 + 0x11cc) * fVar8 + local_38;
        }
      }
      iVar9 = iVar9 + 4;
    } while (SBORROW4(iVar9,DAT_03277d80 * 4) != iVar9 + DAT_03277d80 * -4 < 0);
  }
  if (DAT_03277d80 == 0) {
    local_40 = 128.0;
    local_38 = 128.0;
    local_3c = 128.0;
  }
  if ((float)DOUBLE_00645e8b < local_3c) {
    local_3c = 255.0;
  }
  if ((float)DOUBLE_00645e8b < local_40) {
    local_40 = 255.0;
  }
  fVar8 = (float)DOUBLE_00645e8b;
  bVar2 = NAN(local_38);
  bVar3 = local_38 < fVar8;
  bVar4 = local_38 == fVar8;
  if (!bVar3 && bVar4 == 0) {
    local_38 = 255.0;
  }
  fVar10 = (float10)local_3c;
  fVar11 = (float10)local_40;
  fVar12 = (float10)local_38;
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44(in_stack_00000010,
                                       CONCAT22((short)((uint)(in_stack_00000010 * 0x30) >> 0x10),
                                                (ushort)bVar3 << 8 |
                                                (ushort)(bVar2 || NAN(fVar8)) << 10 |
                                                (ushort)bVar4 << 0xe)));
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),(int)ROUND(fVar10)));
  g_RenderVertexBuffer[in_stack_00000010].light = (float)(SUB84(dVar13,0) << 8);
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),(int)ROUND(fVar11)));
  g_RenderVertexBuffer[in_stack_00000010].color = SUB84(dVar13,0) << 8;
  g_RenderVertexBuffer[in_stack_00000010].fog = (float)((int)ROUND(fVar12) << 8);
  DAT_02d7a7b8 = iVar7;
  return;
}


// Assembly code:
// 0056e3e0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056e3e0
// 0056e3e1: PUSH ESI
// 0056e3e2: PUSH EBP
// 0056e3e3: MOV EBP,ESP
// 0056e3e5: SUB ESP,0x34
// 0056e3e8: AND ESP,0xfffffff8
// 0056e3eb: MOV ESI,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 0056e3f1: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0056e3f4: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0056e3f7: XOR ECX,ECX
// 0056e3f9: FLD float ptr [EDX]
// 0056e3fb: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056e3ff: FADD float ptr [EAX]
// 0056e401: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x40] (DATA)
// 0056e404: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0056e408: FLD float ptr [EDX + 0x4]
// 0056e40b: FADD float ptr [EAX + 0x4]
// 0056e40e: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0056e412: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 0056e416: FLD float ptr [EDX + 0x8]
// 0056e419: FADD float ptr [EAX + 0x8]
// 0056e41c: MOV EAX,[0x03277d80]
//   XREF to: 03277d80 (READ)
// 0056e421: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (WRITE)
// 0056e425: TEST EAX,EAX
// 0056e427: JLE 0x0056e44d
//   XREF to: 0056e44d (CONDITIONAL_JUMP)
// 0056e429: LEA EBX,[EAX*0x4 + 0x0]
// 0056e430: MOV EDX,dword ptr [ECX + 0x3277d84]
//   Label: LAB_0056e430
//   XREF to: 03277d84 (READ)
//   XREF to: 03277d88 (READ)
// 0056e436: TEST dword ptr [EDX + 0x11d4],0x7fffffff
// 0056e440: JNZ 0x0056e50d
//   XREF to: 0056e50d (CONDITIONAL_JUMP)
// 0056e446: ADD ECX,0x4
//   Label: LAB_0056e446
// 0056e449: CMP ECX,EBX
// 0056e44b: JL 0x0056e430
//   XREF to: 0056e430 (CONDITIONAL_JUMP)
// 0056e44d: CMP dword ptr [0x03277d80],0x0
//   Label: LAB_0056e44d
//   XREF to: 03277d80 (READ)
// 0056e454: JNZ 0x0056e466
//   XREF to: 0056e466 (CONDITIONAL_JUMP)
// 0056e456: MOV ECX,0x43000000
// 0056e45b: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x40] (DATA)
// 0056e45e: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0056e462: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056e466: MOV EDX,dword ptr [EBP + 0x1c]
//   Label: LAB_0056e466
//   XREF to: Stack[0x10] (READ)
// 0056e469: LEA EAX,[EDX*0x4 + 0x0]
// 0056e470: SUB EAX,EDX
// 0056e472: MOV EBX,0x688014
//   XREF to: 00688014 (DATA)
// 0056e477: SHL EAX,0x4
// 0056e47a: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0056e47e: ADD EBX,EAX
// 0056e480: FCOMP double ptr [0x00645e8b]
//   XREF to: 00645e8b (READ)
// 0056e486: FNSTSW AX
// 0056e488: SAHF
// 0056e489: JBE 0x0056e493
//   XREF to: 0056e493 (CONDITIONAL_JUMP)
// 0056e48b: MOV dword ptr [ESP + 0x4],0x437f0000
//   XREF to: Stack[-0x3c] (WRITE)
// 0056e493: FLD float ptr [ESP]
//   Label: LAB_0056e493
//   XREF to: Stack[-0x40] (DATA)
// 0056e496: FCOMP double ptr [0x00645e8b]
//   XREF to: 00645e8b (READ)
// 0056e49c: FNSTSW AX
// 0056e49e: SAHF
// 0056e49f: JBE 0x0056e4a8
//   XREF to: 0056e4a8 (CONDITIONAL_JUMP)
// 0056e4a1: MOV dword ptr [ESP],0x437f0000
//   XREF to: Stack[-0x40] (DATA)
// 0056e4a8: FLD float ptr [ESP + 0x8]
//   Label: LAB_0056e4a8
//   XREF to: Stack[-0x38] (READ)
// 0056e4ac: FCOMP double ptr [0x00645e8b]
//   XREF to: 00645e8b (READ)
// 0056e4b2: FNSTSW AX
// 0056e4b4: SAHF
// 0056e4b5: JA 0x0056e5b5
//   XREF to: 0056e5b5 (CONDITIONAL_JUMP)
// 0056e4bb: FLD float ptr [ESP + 0x4]
//   Label: LAB_0056e4bb
//   XREF to: Stack[-0x3c] (READ)
// 0056e4bf: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0056e4c2: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0056e4c6: FXCH ST2
// 0056e4c8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0056e4cd: FISTP dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (WRITE)
// 0056e4d1: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0056e4d5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0056e4da: SHL EAX,0x8
// 0056e4dd: FISTP dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (WRITE)
// 0056e4e1: MOV dword ptr [EBX + 0x20],EAX
//   XREF to: 00688034 (DATA)
// 0056e4e4: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0056e4e8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0056e4ed: SHL EAX,0x8
// 0056e4f0: FISTP dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (WRITE)
// 0056e4f4: MOV dword ptr [EBX + 0x24],EAX
//   XREF to: 00688038 (DATA)
// 0056e4f7: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0056e4fb: SHL EAX,0x8
// 0056e4fe: MOV dword ptr [EBX + 0x28],EAX
//   XREF to: 0068803c (DATA)
// 0056e501: MOV dword ptr [0x02d7a7b8],ESI
//   XREF to: 02d7a7b8 (WRITE)
// 0056e507: MOV ESP,EBP
// 0056e509: POP EBP
// 0056e50a: POP ESI
// 0056e50b: POP EBX
// 0056e50c: RET
// 0056e50d: LEA EAX,[EDX + 0x104]
//   Label: LAB_0056e50d
// 0056e513: FLD float ptr [EAX]
// 0056e515: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0056e519: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (WRITE)
// 0056e51d: FLD float ptr [EAX + 0x4]
// 0056e520: FSUB float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0056e524: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 0056e528: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0056e52c: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0056e530: FMUL ST0
// 0056e532: FLD float ptr [EAX + 0x8]
// 0056e535: FSUB float ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0056e539: FXCH
// 0056e53b: FADDP ST2,ST0
// 0056e53d: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (WRITE)
// 0056e541: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0056e545: FADDP
// 0056e547: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (WRITE)
// 0056e54b: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (READ)
// 0056e54f: SAR EAX,0x1
// 0056e551: ADD EAX,ESI
// 0056e553: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056e557: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0056e55b: FCOMP float ptr [EDX + 0x11d4]
// 0056e561: FNSTSW AX
// 0056e563: SAHF
// 0056e564: JA 0x0056e446
//   XREF to: 0056e446 (CONDITIONAL_JUMP)
// 0056e56a: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0056e56e: FDIV float ptr [EDX + 0x11d4]
// 0056e574: FLD float ptr [EDX + 0x11c4]
// 0056e57a: FLD1
// 0056e57c: FSUBRP ST2,ST0
// 0056e57e: FMUL ST1
// 0056e580: FLD float ptr [EDX + 0x11c8]
// 0056e586: FMUL ST2
// 0056e588: FLD float ptr [EDX + 0x11cc]
// 0056e58e: FMULP ST3
// 0056e590: FXCH
// 0056e592: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0056e596: FXCH
// 0056e598: FADD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0056e59b: FXCH ST2
// 0056e59d: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0056e5a1: FXCH
// 0056e5a3: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0056e5a7: FXCH
// 0056e5a9: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0056e5ac: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 0056e5b0: JMP 0x0056e446
//   XREF to: 0056e446 (UNCONDITIONAL_JUMP)
// 0056e5b5: MOV dword ptr [ESP + 0x8],0x437f0000
//   Label: LAB_0056e5b5
//   XREF to: Stack[-0x38] (WRITE)
// 0056e5bd: JMP 0x0056e4bb
//   XREF to: 0056e4bb (UNCONDITIONAL_JUMP)
