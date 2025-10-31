// Name: shape_meshlod.cpp_FUN_0051b3e0
// Address: 0051b3e0
// Address Range: [[0051b3e0, 0051b568]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051b3e0()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051b330 (0051b330) at 0051b3c7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_LodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b9d1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051b3e0(undefined4 param_1) */

void shape_meshlod_cpp_FUN_0051b3e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *in_stack_00000004;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = 0;
  if (0 < *in_stack_00000004) {
    iVar2 = 0;
    do {
      *(undefined4 *)(in_stack_00000004[1] + 0x3f4 + iVar2) = 0;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x4c4;
    } while (iVar4 < *in_stack_00000004);
  }
  iVar4 = 0;
  local_18 = 0;
  if (0 < in_stack_00000004[2]) {
    do {
      if (*(int *)(iVar4 + 0x40 + in_stack_00000004[3]) == 0) {
        iVar2 = 0;
        do {
          piVar1 = (int *)(in_stack_00000004[3] + iVar4 + 0x10 + iVar2);
          iVar2 = iVar2 + 4;
          *(undefined4 *)(*piVar1 * 0x4c4 + 0x3f4 + in_stack_00000004[1]) = 1;
        } while (iVar2 != 0xc);
      }
      iVar4 = iVar4 + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < in_stack_00000004[2]);
  }
  iVar2 = 0;
  iVar4 = 0;
  if (0 < *in_stack_00000004) {
    iVar5 = 0;
    do {
      iVar3 = in_stack_00000004[1] + iVar5;
      if (*(int *)(iVar3 + 0x3f4) == 0) {
        *(undefined4 *)(iVar3 + 0x3f4) = 0xffffffff;
      }
      else {
        *(int *)(iVar3 + 0x3f4) = iVar4;
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 0x4c4;
    } while (iVar2 < *in_stack_00000004);
  }
  local_14 = 0;
  if (0 < in_stack_00000004[2]) {
    iVar4 = 0;
    do {
      if (*(int *)(in_stack_00000004[3] + 0x40 + iVar4) == 0) {
        iVar2 = 0;
        do {
          iVar5 = iVar2 + 4;
          *(undefined4 *)(iVar2 + 0x10 + in_stack_00000004[3] + iVar4) =
               *(undefined4 *)
                (*(int *)(iVar2 + 0x10 + in_stack_00000004[3] + iVar4) * 0x4c4 + 0x3f4 +
                in_stack_00000004[1]);
          iVar2 = iVar5;
        } while (iVar5 != 0xc);
      }
      iVar4 = iVar4 + 0x8c;
      local_14 = local_14 + 1;
    } while (local_14 < in_stack_00000004[2]);
  }
  iVar2 = 0;
  iVar4 = 0;
  if (0 < *in_stack_00000004) {
    local_20 = 0;
    local_1c = 0;
    do {
      puVar6 = (undefined4 *)(local_1c + in_stack_00000004[1]);
      if (-1 < (int)puVar6[0xfd]) {
        if (iVar4 < iVar2) {
          puVar7 = (undefined4 *)(local_20 + in_stack_00000004[1]);
          for (iVar5 = 0x131; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        local_20 = local_20 + 0x4c4;
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 1;
      local_1c = local_1c + 0x4c4;
    } while (iVar2 < *in_stack_00000004);
  }
  *in_stack_00000004 = iVar4;
  return;
}


// Assembly code:
// 0051b3e0: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051b3e0
// 0051b3e1: PUSH ESI
// 0051b3e2: PUSH EDI
// 0051b3e3: PUSH EBP
// 0051b3e4: SUB ESP,0x10
// 0051b3e7: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0051b3eb: MOV EBX,dword ptr [EDX]
// 0051b3ed: XOR ECX,ECX
// 0051b3ef: TEST EBX,EBX
// 0051b3f1: JLE 0x0051b410
//   XREF to: 0051b410 (CONDITIONAL_JUMP)
// 0051b3f3: XOR EAX,EAX
// 0051b3f5: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_0051b3f5
// 0051b3f8: MOV dword ptr [EBX + EAX*0x1 + 0x3f4],0x0
// 0051b403: INC ECX
// 0051b404: MOV ESI,dword ptr [EDX]
// 0051b406: ADD EAX,0x4c4
// 0051b40b: CMP ECX,ESI
// 0051b40d: JL 0x0051b3f5
//   XREF to: 0051b3f5 (CONDITIONAL_JUMP)
// 0051b40f: NOP
// 0051b410: XOR EDI,EDI
//   Label: LAB_0051b410
// 0051b412: MOV EBP,dword ptr [EDX + 0x8]
// 0051b415: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0051b419: TEST EBP,EBP
// 0051b41b: JLE 0x0051b464
//   XREF to: 0051b464 (CONDITIONAL_JUMP)
// 0051b41d: MOV EAX,dword ptr [EDX + 0xc]
//   Label: LAB_0051b41d
// 0051b420: CMP dword ptr [EDI + EAX*0x1 + 0x40],0x0
// 0051b425: JNZ 0x0051b44e
//   XREF to: 0051b44e (CONDITIONAL_JUMP)
// 0051b427: MOV ESI,EDI
// 0051b429: XOR EAX,EAX
// 0051b42b: MOV ECX,dword ptr [EDX + 0xc]
//   Label: LAB_0051b42b
// 0051b42e: ADD ECX,ESI
// 0051b430: IMUL ECX,dword ptr [ECX + EAX*0x1 + 0x10],0x4c4
// 0051b438: MOV EBX,dword ptr [EDX + 0x4]
// 0051b43b: ADD EAX,0x4
// 0051b43e: MOV dword ptr [ECX + EBX*0x1 + 0x3f4],0x1
// 0051b449: CMP EAX,0xc
// 0051b44c: JNZ 0x0051b42b
//   XREF to: 0051b42b (CONDITIONAL_JUMP)
// 0051b44e: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0051b44e
//   XREF to: Stack[-0x18] (READ)
// 0051b452: ADD EDI,0x8c
// 0051b458: INC EAX
// 0051b459: MOV ECX,dword ptr [EDX + 0x8]
// 0051b45c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051b460: CMP EAX,ECX
// 0051b462: JL 0x0051b41d
//   XREF to: 0051b41d (CONDITIONAL_JUMP)
// 0051b464: MOV EBX,dword ptr [EDX]
//   Label: LAB_0051b464
// 0051b466: XOR EDI,EDI
// 0051b468: XOR ESI,ESI
// 0051b46a: TEST EBX,EBX
// 0051b46c: JLE 0x0051b496
//   XREF to: 0051b496 (CONDITIONAL_JUMP)
// 0051b46e: XOR ECX,ECX
// 0051b470: MOV EAX,dword ptr [EDX + 0x4]
//   Label: LAB_0051b470
// 0051b473: ADD EAX,ECX
// 0051b475: CMP dword ptr [EAX + 0x3f4],0x0
// 0051b47c: JZ 0x0051b53e
//   XREF to: 0051b53e (CONDITIONAL_JUMP)
// 0051b482: MOV dword ptr [EAX + 0x3f4],ESI
// 0051b488: INC ESI
// 0051b489: INC EDI
//   Label: LAB_0051b489
// 0051b48a: MOV EBP,dword ptr [EDX]
// 0051b48c: ADD ECX,0x4c4
// 0051b492: CMP EDI,EBP
// 0051b494: JL 0x0051b470
//   XREF to: 0051b470 (CONDITIONAL_JUMP)
// 0051b496: XOR EAX,EAX
//   Label: LAB_0051b496
// 0051b498: MOV ECX,dword ptr [EDX + 0x8]
// 0051b49b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051b49f: TEST ECX,ECX
// 0051b4a1: JLE 0x0051b4ec
//   XREF to: 0051b4ec (CONDITIONAL_JUMP)
// 0051b4a3: XOR EBP,EBP
// 0051b4a5: MOV EAX,dword ptr [EDX + 0xc]
//   Label: LAB_0051b4a5
// 0051b4a8: CMP dword ptr [EAX + EBP*0x1 + 0x40],0x0
// 0051b4ad: JNZ 0x0051b4d6
//   XREF to: 0051b4d6 (CONDITIONAL_JUMP)
// 0051b4af: MOV EDI,EBP
// 0051b4b1: XOR ECX,ECX
// 0051b4b3: MOV EAX,dword ptr [EDX + 0xc]
//   Label: LAB_0051b4b3
// 0051b4b6: ADD EAX,EDI
// 0051b4b8: IMUL ESI,dword ptr [ECX + EAX*0x1 + 0x10],0x4c4
// 0051b4c0: MOV EBX,dword ptr [EDX + 0x4]
// 0051b4c3: ADD ECX,0x4
// 0051b4c6: MOV EBX,dword ptr [ESI + EBX*0x1 + 0x3f4]
// 0051b4cd: MOV dword ptr [ECX + EAX*0x1 + 0xc],EBX
// 0051b4d1: CMP ECX,0xc
// 0051b4d4: JNZ 0x0051b4b3
//   XREF to: 0051b4b3 (CONDITIONAL_JUMP)
// 0051b4d6: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0051b4d6
//   XREF to: Stack[-0x14] (READ)
// 0051b4da: ADD EBP,0x8c
// 0051b4e0: INC EAX
// 0051b4e1: MOV ECX,dword ptr [EDX + 0x8]
// 0051b4e4: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051b4e8: CMP EAX,ECX
// 0051b4ea: JL 0x0051b4a5
//   XREF to: 0051b4a5 (CONDITIONAL_JUMP)
// 0051b4ec: MOV ESI,dword ptr [EDX]
//   Label: LAB_0051b4ec
// 0051b4ee: XOR EBP,EBP
// 0051b4f0: XOR EBX,EBX
// 0051b4f2: TEST ESI,ESI
// 0051b4f4: JLE 0x0051b534
//   XREF to: 0051b534 (CONDITIONAL_JUMP)
// 0051b4f6: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x20] (DATA)
// 0051b4f9: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051b4fd: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_0051b4fd
//   XREF to: Stack[-0x1c] (READ)
// 0051b501: MOV EAX,dword ptr [EDX + 0x4]
// 0051b504: ADD ESI,EAX
// 0051b506: CMP dword ptr [ESI + 0x3f4],0x0
// 0051b50d: JL 0x0051b520
//   XREF to: 0051b520 (CONDITIONAL_JUMP)
// 0051b50f: CMP EBX,EBP
// 0051b511: JL 0x0051b54d
//   XREF to: 0051b54d (CONDITIONAL_JUMP)
// 0051b513: MOV ESI,dword ptr [ESP]
//   Label: LAB_0051b513
//   XREF to: Stack[-0x20] (DATA)
// 0051b516: ADD ESI,0x4c4
// 0051b51c: INC EBX
// 0051b51d: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x20] (DATA)
// 0051b520: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0051b520
//   XREF to: Stack[-0x1c] (READ)
// 0051b524: INC EBP
// 0051b525: ADD EAX,0x4c4
// 0051b52a: MOV ECX,dword ptr [EDX]
// 0051b52c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051b530: CMP EBP,ECX
// 0051b532: JL 0x0051b4fd
//   XREF to: 0051b4fd (CONDITIONAL_JUMP)
// 0051b534: MOV dword ptr [EDX],EBX
//   Label: LAB_0051b534
// 0051b536: ADD ESP,0x10
// 0051b539: POP EBP
// 0051b53a: POP EDI
// 0051b53b: POP ESI
// 0051b53c: POP EBX
// 0051b53d: RET
// 0051b53e: MOV dword ptr [EAX + 0x3f4],0xffffffff
//   Label: LAB_0051b53e
// 0051b548: JMP 0x0051b489
//   XREF to: 0051b489 (UNCONDITIONAL_JUMP)
// 0051b54d: MOV EDI,dword ptr [ESP]
//   Label: LAB_0051b54d
//   XREF to: Stack[-0x20] (DATA)
// 0051b550: MOV ECX,0x4c4
// 0051b555: ADD EDI,EAX
// 0051b557: PUSH EDI
// 0051b558: MOV EAX,ECX
// 0051b55a: SHR ECX,0x2
// 0051b55d: MOVSD.REP ES:EDI,ESI
// 0051b55f: MOV CL,AL
// 0051b561: AND CL,0x3
// 0051b564: MOVSB.REP ES:EDI,ESI
// 0051b566: POP EDI
// 0051b567: JMP 0x0051b513
//   XREF to: 0051b513 (UNCONDITIONAL_JUMP)
