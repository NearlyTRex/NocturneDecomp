// Name: core_skeledit.cpp_FUN_0058e240
// Address: 0058e240
// Address Range: [[0058e240, 0058e3d2]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e240()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b8b3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058e240(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte bVar13;
  int *in_stack_0000000c;
  undefined2 auStackY_2014 [1018];
  undefined4 auStackY_1820 [1528];
  undefined1 local_40 [4];
  undefined4 uStackY_3c;
  undefined4 local_38;
  undefined2 local_34 [2];
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iStackY_10;
  int *piStackY_c;
  
  bVar13 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x50);
  local_2c = 0;
  if (0 < *in_stack_0000000c) {
    local_30 = in_stack_0000000c;
    local_28 = 0;
    do {
      local_1c = 0;
      local_18 = 0;
      if (0 < in_stack_0000000c[0x1c50]) {
        piStackY_c = local_30;
        local_20 = local_28 + (int)in_stack_0000000c;
        do {
          local_24 = local_18 + *(int *)(local_20 + 0x7164);
          local_14 = local_24 + -2;
          if (local_18 <= local_14) {
            do {
              if (local_18 <= local_14) {
                iVar7 = local_18 * 4;
                iVar4 = local_18 * 0x12;
                iStackY_10 = local_14 << 2;
                iVar8 = iVar4;
                do {
                  iVar8 = iVar8 + 0x12;
                  piVar1 = (int *)(piStackY_c[0x24] + iVar7);
                  if (piVar1[1] < *piVar1) {
                    piVar6 = (int *)(piStackY_c[0x24] + iVar7 + 4);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar6;
                    *piVar6 = iVar3;
                    puVar10 = (undefined4 *)(piStackY_c[0x1f] + iVar8);
                    puVar5 = (undefined4 *)(piStackY_c[0x1f] + iVar4);
                    uVar2 = *puVar5;
                    *(undefined2 *)(local_40 + (uint)bVar13 * -8) =
                         *(undefined2 *)(puVar5 + (uint)bVar13 * -2 + 1);
                    stack0xffffffc2 = *(undefined4 *)((int)puVar5 + 6);
                    *(undefined2 *)((int)&uStackY_3c + (uint)bVar13 * -8 + 2) =
                         *(undefined2 *)((int)puVar5 + (uint)bVar13 * -8 + 10);
                    local_38 = puVar5[3];
                    local_34[(uint)bVar13 * -4] = *(undefined2 *)(puVar5 + (uint)bVar13 * -2 + 4);
                    puVar11 = puVar5 + (uint)bVar13 * -2 + 1;
                    puVar9 = puVar10 + (uint)bVar13 * -2 + 1;
                    *puVar5 = *puVar10;
                    puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
                    puVar5 = puVar9 + (uint)bVar13 * -2 + 1;
                    *puVar11 = *puVar9;
                    *puVar12 = *puVar5;
                    puVar12[(uint)bVar13 * -2 + 1] = puVar5[(uint)bVar13 * -2 + 1];
                    *(undefined2 *)(puVar12 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
                         *(undefined2 *)(puVar5 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
                    puVar5 = puVar10 + (uint)bVar13 * -2 + 1;
                    *puVar10 = uVar2;
                    puVar9 = puVar5 + (uint)bVar13 * -2 + 1;
                    puVar10 = &uStackY_3c + (uint)bVar13 * -2 + (uint)bVar13 * -2;
                    *puVar5 = *(undefined4 *)(local_40 + (uint)bVar13 * -8);
                    *puVar9 = *puVar10;
                    puVar9[(uint)bVar13 * -2 + 1] = puVar10[(uint)bVar13 * -2 + 1];
                    *(undefined2 *)(puVar9 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
                         *(undefined2 *)(puVar10 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
                  }
                  iVar7 = iVar7 + 4;
                  iVar4 = iVar4 + 0x12;
                } while (iVar7 <= iStackY_10);
              }
              local_14 = local_14 + -1;
            } while (local_18 <= local_14);
          }
          local_18 = local_24;
          local_1c = local_1c + 1;
          local_20 = local_20 + 0x60;
        } while (local_1c < in_stack_0000000c[0x1c50]);
      }
      local_2c = local_2c + 1;
      local_28 = local_28 + 4;
      local_30 = local_30 + 1;
    } while (local_2c < *in_stack_0000000c);
  }
  return;
}


// Assembly code:
// 0058e240: PUSH 0x50
//   Label: core_skeledit.cpp_FUN_0058e240
// 0058e245: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058e24a: PUSH EBX
// 0058e24b: PUSH ESI
// 0058e24c: PUSH EDI
// 0058e24d: PUSH EBP
// 0058e24e: SUB ESP,0x3c
// 0058e251: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0058e255: XOR EDX,EDX
// 0058e257: MOV ECX,dword ptr [EAX]
// 0058e259: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0058e25d: TEST ECX,ECX
// 0058e25f: JLE 0x0058e3cb
//   XREF to: 0058e3cb (CONDITIONAL_JUMP)
// 0058e265: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0058e269: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0058e26d: XOR EDX,EDX
//   Label: LAB_0058e26d
// 0058e26f: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0058e273: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0058e277: MOV EBX,dword ptr [EAX + 0x7140]
// 0058e27d: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0058e281: TEST EBX,EBX
// 0058e283: JLE 0x0058e39e
//   XREF to: 0058e39e (CONDITIONAL_JUMP)
// 0058e289: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 0058e28d: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0058e291: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058e295: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 0058e299: ADD EAX,EDX
// 0058e29b: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0058e29f: MOV EDX,dword ptr [ESP + 0x24]
//   Label: LAB_0058e29f
//   XREF to: Stack[-0x28] (READ)
// 0058e2a3: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 0058e2a7: MOV ECX,dword ptr [EDX + 0x7164]
// 0058e2ad: ADD EAX,ECX
// 0058e2af: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058e2b3: SUB EAX,0x2
// 0058e2b6: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 0058e2ba: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058e2be: CMP EAX,EBX
// 0058e2c0: JL 0x0058e370
//   XREF to: 0058e370 (CONDITIONAL_JUMP)
// 0058e2c6: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0058e2c6
//   XREF to: Stack[-0x20] (READ)
// 0058e2ca: CMP EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 0058e2ce: JG 0x0058e35b
//   XREF to: 0058e35b (CONDITIONAL_JUMP)
// 0058e2d4: LEA EDX,[EAX*0x4 + 0x0]
// 0058e2db: IMUL EAX,EAX,0x12
// 0058e2de: MOV EBX,EAX
// 0058e2e0: LEA EBP,[EAX + 0x12]
// 0058e2e3: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 0058e2e7: SHL EAX,0x2
// 0058e2ea: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058e2ee: MOV ECX,dword ptr [ESP + 0x38]
//   Label: LAB_0058e2ee
//   XREF to: Stack[-0x14] (READ)
// 0058e2f2: MOV ECX,dword ptr [ECX + 0x90]
// 0058e2f8: LEA EAX,[ECX + EDX*0x1]
// 0058e2fb: MOV ESI,dword ptr [EAX]
// 0058e2fd: CMP ESI,dword ptr [EAX + 0x4]
// 0058e300: JLE 0x0058e34a
//   XREF to: 0058e34a (CONDITIONAL_JUMP)
// 0058e302: LEA ESI,[EDX + 0x4]
// 0058e305: ADD ECX,ESI
// 0058e307: MOV EDI,dword ptr [ECX]
// 0058e309: MOV ESI,dword ptr [EAX]
// 0058e30b: MOV dword ptr [EAX],EDI
// 0058e30d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0058e311: MOV dword ptr [ECX],ESI
// 0058e313: MOV EAX,dword ptr [EAX + 0x7c]
// 0058e316: LEA ECX,[EAX + EBP*0x1]
// 0058e319: ADD EAX,EBX
// 0058e31b: MOV EDI,ESP
// 0058e31d: MOV ESI,EAX
// 0058e31f: MOVSD ES:EDI,ESI
// 0058e320: MOVSW ES:EDI,ESI
// 0058e322: LEA EDI,[ESP + 0x6]
//   XREF to: Stack[-0x46] (DATA)
// 0058e326: LEA ESI,[EAX + 0x6]
// 0058e329: MOVSD ES:EDI,ESI
// 0058e32a: MOVSW ES:EDI,ESI
// 0058e32c: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 0058e330: LEA ESI,[EAX + 0xc]
// 0058e333: MOVSD ES:EDI,ESI
// 0058e334: MOVSW ES:EDI,ESI
// 0058e336: MOV EDI,EAX
// 0058e338: MOV ESI,ECX
// 0058e33a: MOVSD ES:EDI,ESI
// 0058e33b: MOVSD ES:EDI,ESI
// 0058e33c: MOVSD ES:EDI,ESI
// 0058e33d: MOVSD ES:EDI,ESI
// 0058e33e: MOVSW ES:EDI,ESI
// 0058e340: MOV ESI,ESP
// 0058e342: MOV EDI,ECX
// 0058e344: MOVSD ES:EDI,ESI
// 0058e345: MOVSD ES:EDI,ESI
// 0058e346: MOVSD ES:EDI,ESI
// 0058e347: MOVSD ES:EDI,ESI
// 0058e348: MOVSW ES:EDI,ESI
// 0058e34a: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0058e34a
//   XREF to: Stack[-0x18] (READ)
// 0058e34e: ADD EDX,0x4
// 0058e351: ADD EBX,0x12
// 0058e354: ADD EBP,0x12
// 0058e357: CMP EDX,EAX
// 0058e359: JLE 0x0058e2ee
//   XREF to: 0058e2ee (CONDITIONAL_JUMP)
// 0058e35b: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_0058e35b
//   XREF to: Stack[-0x1c] (READ)
// 0058e35f: DEC ESI
// 0058e360: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 0058e364: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0058e368: CMP ESI,EDI
// 0058e36a: JGE 0x0058e2c6
//   XREF to: 0058e2c6 (CONDITIONAL_JUMP)
// 0058e370: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0058e370
//   XREF to: Stack[-0x2c] (READ)
// 0058e374: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 0058e378: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 0058e37c: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0058e380: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058e384: ADD ESI,0x60
// 0058e387: INC EDI
// 0058e388: MOV EBP,dword ptr [EDX + 0x7140]
// 0058e38e: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0058e392: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0058e396: CMP EDI,EBP
// 0058e398: JL 0x0058e29f
//   XREF to: 0058e29f (CONDITIONAL_JUMP)
// 0058e39e: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_0058e39e
//   XREF to: Stack[-0x30] (READ)
// 0058e3a2: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 0058e3a6: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 0058e3aa: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0058e3ae: ADD EBX,0x4
// 0058e3b1: ADD ESI,0x4
// 0058e3b4: INC EDI
// 0058e3b5: MOV EBP,dword ptr [EDX]
// 0058e3b7: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0058e3bb: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0058e3bf: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 0058e3c3: CMP EDI,EBP
// 0058e3c5: JL 0x0058e26d
//   XREF to: 0058e26d (CONDITIONAL_JUMP)
// 0058e3cb: ADD ESP,0x3c
//   Label: LAB_0058e3cb
// 0058e3ce: POP EBP
// 0058e3cf: POP EDI
// 0058e3d0: POP ESI
// 0058e3d1: POP EBX
// 0058e3d2: RET
