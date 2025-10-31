// Name: sound_mp3.cpp_FUN_005310f0
// Address: 005310f0
// Address Range: [[005310f0, 00531474]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_005310f0()
// Cross-references:
//   sound_mp3.cpp_FUN_00531480 (00531480) at 005314ce [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0067ea40
// Function calls:
//   sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_005310f0(undefined4 param_1, undefined1 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

void sound_mp3_cpp_FUN_005310f0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  short sVar6;
  int in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  uint local_34 [5];
  undefined2 uStack_20;
  undefined2 local_1e;
  short sStack_1c;
  undefined4 local_1a;
  undefined4 local_16;
  
  iVar1 = in_stack_0000000c + in_stack_00000014 * 0xa0 + 0x18 + in_stack_00000010 * 0x48;
  iVar5 = *in_stack_00000018;
  sStack_1c = 0;
  uVar3 = *(uint *)(iVar1 + 0xc);
  if ((*(int *)(iVar1 + 0x14) == 2) && (*(int *)(iVar1 + 0x18) == 0)) {
    sStack_1c = 1;
  }
  if ((*(int *)(iVar1 + 0x14) == 2) && (*(int *)(iVar1 + 0x18) == 1)) {
    sStack_1c = 2;
  }
  iVar1 = *(int *)(iVar5 + 0x20);
  if (((iVar1 != 1) && (iVar1 != 3)) || (in_stack_00000014 != 1)) {
    iVar1 = in_stack_0000000c + in_stack_00000014 * 0xa0 + in_stack_00000010 * 0x48;
    if (uVar3 < 400) {
      local_34[0] = (uVar3 >> 4) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = (uVar3 & 0xf) >> 2;
      local_34[1] = (uVar3 >> 4) % 5;
      local_34[3] = uVar3 & 3;
      *(undefined4 *)(iVar1 + 0x54) = 0;
      local_1a = local_1a & 0xffff;
    }
    else if (uVar3 < 500) {
      local_34[4] = uVar3 - 400;
      local_34[0] = (local_34[4] >> 2) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = local_34[4] & 3;
      local_34[1] = (local_34[4] >> 2) % 5;
      local_34[3] = 0;
      local_1a = CONCAT22(1,(undefined2)local_1a);
      *(undefined4 *)(iVar1 + 0x54) = 0;
    }
    else if (uVar3 < 0x200) {
      local_34[0] = (uVar3 - 500) / 3;
      uStack_20 = 3;
      local_1e = 0;
      local_34[1] = (uVar3 - 500) % 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_1a = CONCAT22(2,(undefined2)local_1a);
      *(undefined4 *)(iVar1 + 0x54) = 1;
    }
  }
  iVar5 = *(int *)(iVar5 + 0x20);
  if (((iVar5 == 1) || (iVar5 == 3)) && (in_stack_00000014 == 1)) {
    uVar3 = uVar3 >> 1;
    iVar5 = in_stack_00000010 * 0x48 + in_stack_0000000c + 0xa0;
    if (uVar3 < 0xb4) {
      local_34[0] = uVar3 / 0x24;
      local_34[1] = (uint)(((ulonglong)uVar3 % 0x24) / 6);
      local_34[3] = 0;
      local_34[2] = (uint)(((ulonglong)uVar3 % 0x24) % 6);
      *(undefined4 *)(iVar5 + 0x54) = 0;
      local_1a = CONCAT22(3,(undefined2)local_1a);
    }
    else if (uVar3 < 0xf4) {
      uVar3 = uVar3 - 0xb4;
      local_34[0] = (uVar3 & 0x3f) >> 4;
      local_34[3] = 0;
      local_34[2] = uVar3 & 3;
      local_34[1] = (uVar3 & 0xf) >> 2;
      *(undefined4 *)(iVar5 + 0x54) = 0;
      local_1a = CONCAT22(4,(undefined2)local_1a);
    }
    else if (uVar3 < 0xff) {
      local_34[0] = (uVar3 - 0xf4) / 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_34[1] = (uVar3 - 0xf4) % 3;
      *(undefined4 *)(iVar5 + 0x54) = 0;
      local_1a = CONCAT22(5,(undefined2)local_1a);
    }
  }
  for (sVar4 = 0; sVar4 < 0x2d; sVar4 = sVar4 + 1) {
    *(undefined4 *)(in_stack_00000004 + 0x7358 + sVar4 * 4) = 0;
  }
  sVar4 = 0;
  local_16 = (uint)(ushort)local_16;
  while ((int)local_16 >> 0x10 < 4) {
    sVar6 = 0;
    while( true ) {
      if (*(uint *)(&DAT_0067ea40 +
                   ((int)local_16 >> 0x10) * 4 + sStack_1c * 0x10 + ((int)local_1a >> 0x10) * 0x30)
          <= (uint)(int)sVar6) break;
      if (local_34[(int)local_16 >> 0x10] == 0) {
        *(undefined4 *)(in_stack_00000004 + 0x7358 + sVar4 * 4) = 0;
      }
      else {
        uVar2 = sound_mp3_cpp_MemoryCheckOverflow_FUN_0052f170();
        *(undefined4 *)(in_stack_00000004 + 0x7358 + sVar4 * 4) = uVar2;
      }
      sVar6 = sVar6 + 1;
      sVar4 = sVar4 + 1;
    }
    local_16 = CONCAT22(local_16._2_2_ + 1,(ushort)local_16);
  }
  return;
}


// Assembly code:
// 005310f0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_005310f0
// 005310f1: PUSH ESI
// 005310f2: PUSH EDI
// 005310f3: PUSH EBP
// 005310f4: SUB ESP,0x24
// 005310f7: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005310fb: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x14] (READ)
// 005310ff: LEA EAX,[EDX*0x4 + 0x0]
// 00531106: ADD EAX,EDX
// 00531108: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 0053110c: SHL EAX,0x5
// 0053110f: ADD EDX,0x8
// 00531112: LEA ECX,[EDX + EAX*0x1]
// 00531115: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 00531119: LEA EAX,[EDX*0x8 + 0x0]
// 00531120: ADD EDX,EAX
// 00531122: SHL EDX,0x3
// 00531125: LEA EAX,[ECX + 0x10]
// 00531128: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x18] (READ)
// 0053112c: ADD EAX,EDX
// 0053112e: XOR EDX,EDX
// 00531130: MOV ESI,dword ptr [ESI]
// 00531132: MOV word ptr [ESP + 0x18],DX
//   XREF to: Stack[-0x1c] (WRITE)
// 00531137: MOV EDX,dword ptr [EAX + 0x14]
// 0053113a: MOV ECX,dword ptr [EAX + 0xc]
// 0053113d: CMP EDX,0x2
// 00531140: JNZ 0x0053114f
//   XREF to: 0053114f (CONDITIONAL_JUMP)
// 00531142: CMP dword ptr [EAX + 0x18],0x0
// 00531146: JNZ 0x0053114f
//   XREF to: 0053114f (CONDITIONAL_JUMP)
// 00531148: MOV word ptr [ESP + 0x18],0x1
//   XREF to: Stack[-0x1c] (WRITE)
// 0053114f: CMP dword ptr [EAX + 0x14],0x2
//   Label: LAB_0053114f
// 00531153: JNZ 0x00531162
//   XREF to: 00531162 (CONDITIONAL_JUMP)
// 00531155: CMP dword ptr [EAX + 0x18],0x1
// 00531159: JNZ 0x00531162
//   XREF to: 00531162 (CONDITIONAL_JUMP)
// 0053115b: MOV word ptr [ESP + 0x18],0x2
//   XREF to: Stack[-0x1c] (WRITE)
// 00531162: MOV EBX,dword ptr [ESI + 0x20]
//   Label: LAB_00531162
// 00531165: CMP EBX,0x1
// 00531168: JNZ 0x005311a4
//   XREF to: 005311a4 (CONDITIONAL_JUMP)
// 0053116a: CMP dword ptr [ESP + 0x48],0x1
//   Label: LAB_0053116a
//   XREF to: Stack[0x14] (READ)
// 0053116f: JNZ 0x005311a9
//   XREF to: 005311a9 (CONDITIONAL_JUMP)
// 00531171: MOV EBP,dword ptr [ESI + 0x20]
//   Label: LAB_00531171
// 00531174: CMP EBP,0x1
// 00531177: JNZ 0x005312f1
//   XREF to: 005312f1 (CONDITIONAL_JUMP)
// 0053117d: CMP dword ptr [ESP + 0x48],0x1
//   Label: LAB_0053117d
//   XREF to: Stack[0x14] (READ)
// 00531182: JZ 0x005312ff
//   XREF to: 005312ff (CONDITIONAL_JUMP)
// 00531188: XOR EBX,EBX
//   Label: LAB_00531188
// 0053118a: MOVSX EAX,BX
//   Label: LAB_0053118a
// 0053118d: CMP EAX,0x2d
// 00531190: JGE 0x005313fc
//   XREF to: 005313fc (CONDITIONAL_JUMP)
// 00531196: INC EBX
// 00531197: MOV dword ptr [EDI + EAX*0x4 + 0x7358],0x0
// 005311a2: JMP 0x0053118a
//   XREF to: 0053118a (UNCONDITIONAL_JUMP)
// 005311a4: CMP EBX,0x3
//   Label: LAB_005311a4
// 005311a7: JZ 0x0053116a
//   XREF to: 0053116a (CONDITIONAL_JUMP)
// 005311a9: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_005311a9
//   XREF to: Stack[0x10] (READ)
// 005311ad: LEA EBX,[EDX*0x8 + 0x0]
// 005311b4: ADD EBX,EDX
// 005311b6: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x14] (READ)
// 005311ba: LEA EAX,[EDX*0x4 + 0x0]
// 005311c1: ADD EAX,EDX
// 005311c3: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 005311c7: SHL EAX,0x5
// 005311ca: SHL EBX,0x3
// 005311cd: ADD EBP,EAX
// 005311cf: ADD EBP,EBX
// 005311d1: CMP ECX,0x190
// 005311d7: JNC 0x0053122f
//   XREF to: 0053122f (CONDITIONAL_JUMP)
// 005311d9: MOV EBX,ECX
// 005311db: MOV EDX,0x5
// 005311e0: SHR EBX,0x4
// 005311e3: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005311e7: MOV EAX,EBX
// 005311e9: XOR EDX,EDX
// 005311eb: DIV dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 005311ef: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 005311f2: MOV EAX,0x5
// 005311f7: XOR EDX,EDX
// 005311f9: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005311fd: MOV EAX,EBX
// 005311ff: DIV dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00531203: MOV EAX,ECX
// 00531205: AND EAX,0xf
// 00531208: SHR EAX,0x2
// 0053120b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0053120f: MOV EAX,ECX
// 00531211: AND EAX,0x3
// 00531214: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00531218: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0053121c: XOR EAX,EAX
// 0053121e: MOV dword ptr [EBP + 0x54],0x0
// 00531225: MOV word ptr [ESP + 0x1c],AX
//   XREF to: Stack[-0x18] (WRITE)
// 0053122a: JMP 0x00531171
//   XREF to: 00531171 (UNCONDITIONAL_JUMP)
// 0053122f: CMP ECX,0x1f4
//   Label: LAB_0053122f
// 00531235: JNC 0x00531294
//   XREF to: 00531294 (CONDITIONAL_JUMP)
// 00531237: LEA EAX,[ECX + 0xfffffe70]
// 0053123d: XOR EDX,EDX
// 0053123f: MOV EBX,EAX
// 00531241: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00531245: MOV EAX,0x5
// 0053124a: SHR EBX,0x2
// 0053124d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00531251: MOV EAX,EBX
// 00531253: DIV dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00531257: MOV EDX,0x5
// 0053125c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 0053125f: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00531263: MOV EAX,EBX
// 00531265: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00531269: XOR EDX,EDX
// 0053126b: DIV EBX
// 0053126d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 00531271: AND EAX,0x3
// 00531274: MOV EBX,0x1
// 00531279: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0053127d: XOR EAX,EAX
// 0053127f: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00531283: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00531287: MOV word ptr [ESP + 0x1c],BX
//   XREF to: Stack[-0x18] (WRITE)
// 0053128c: MOV dword ptr [EBP + 0x54],EAX
// 0053128f: JMP 0x00531171
//   XREF to: 00531171 (UNCONDITIONAL_JUMP)
// 00531294: CMP ECX,0x200
//   Label: LAB_00531294
// 0053129a: JNC 0x00531171
//   XREF to: 00531171 (CONDITIONAL_JUMP)
// 005312a0: MOV EDX,0x3
// 005312a5: LEA EBX,[ECX + 0xfffffe0c]
// 005312ab: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005312af: MOV EAX,EBX
// 005312b1: XOR EDX,EDX
// 005312b3: DIV dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 005312b7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 005312ba: MOV EAX,0x3
// 005312bf: XOR EDX,EDX
// 005312c1: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005312c5: MOV EAX,EBX
// 005312c7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 005312cb: DIV EBX
// 005312cd: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005312d1: XOR EAX,EAX
// 005312d3: MOV EDX,0x2
// 005312d8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005312dc: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005312e0: MOV word ptr [ESP + 0x1c],DX
//   XREF to: Stack[-0x18] (WRITE)
// 005312e5: MOV dword ptr [EBP + 0x54],0x1
// 005312ec: JMP 0x00531171
//   XREF to: 00531171 (UNCONDITIONAL_JUMP)
// 005312f1: CMP EBP,0x3
//   Label: LAB_005312f1
// 005312f4: JZ 0x0053117d
//   XREF to: 0053117d (CONDITIONAL_JUMP)
// 005312fa: JMP 0x00531188
//   XREF to: 00531188 (UNCONDITIONAL_JUMP)
// 005312ff: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_005312ff
//   XREF to: Stack[0x10] (READ)
// 00531303: LEA EBX,[EDX*0x8 + 0x0]
// 0053130a: ADD EBX,EDX
// 0053130c: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x14] (READ)
// 00531310: LEA EAX,[EDX*0x4 + 0x0]
// 00531317: ADD EAX,EDX
// 00531319: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 0053131d: SHL EAX,0x5
// 00531320: SHL EBX,0x3
// 00531323: ADD EAX,ESI
// 00531325: SHR ECX,0x1
// 00531327: ADD EBX,EAX
// 00531329: CMP ECX,0xb4
// 0053132f: JNC 0x00531375
//   XREF to: 00531375 (CONDITIONAL_JUMP)
// 00531331: MOV ESI,0x24
// 00531336: MOV EAX,ECX
// 00531338: XOR EDX,EDX
// 0053133a: DIV ESI
// 0053133c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 0053133f: XOR EDX,EDX
// 00531341: MOV EAX,ECX
// 00531343: DIV ESI
// 00531345: MOV ECX,EDX
// 00531347: MOV ESI,0x6
// 0053134c: MOV EAX,ECX
// 0053134e: XOR EDX,EDX
// 00531350: DIV ESI
// 00531352: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00531356: XOR EDX,EDX
// 00531358: MOV EAX,ECX
// 0053135a: DIV ESI
// 0053135c: XOR ECX,ECX
// 0053135e: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00531362: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00531366: MOV dword ptr [EBX + 0x54],ECX
// 00531369: MOV word ptr [ESP + 0x1c],0x3
//   XREF to: Stack[-0x18] (WRITE)
// 00531370: JMP 0x00531188
//   XREF to: 00531188 (UNCONDITIONAL_JUMP)
// 00531375: CMP ECX,0xf4
//   Label: LAB_00531375
// 0053137b: JNC 0x005313b6
//   XREF to: 005313b6 (CONDITIONAL_JUMP)
// 0053137d: SUB ECX,0xb4
// 00531383: MOV EAX,ECX
// 00531385: AND EAX,0x3f
// 00531388: SHR EAX,0x4
// 0053138b: XOR EDX,EDX
// 0053138d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 00531390: MOV EAX,ECX
// 00531392: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00531396: AND EAX,0xf
// 00531399: AND ECX,0x3
// 0053139c: SHR EAX,0x2
// 0053139f: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005313a3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005313a7: MOV dword ptr [EBX + 0x54],EDX
// 005313aa: MOV word ptr [ESP + 0x1c],0x4
//   XREF to: Stack[-0x18] (WRITE)
// 005313b1: JMP 0x00531188
//   XREF to: 00531188 (UNCONDITIONAL_JUMP)
// 005313b6: CMP ECX,0xff
//   Label: LAB_005313b6
// 005313bc: JNC 0x00531188
//   XREF to: 00531188 (CONDITIONAL_JUMP)
// 005313c2: MOV ESI,0x3
// 005313c7: SUB ECX,0xf4
// 005313cd: XOR EDX,EDX
// 005313cf: MOV EAX,ECX
// 005313d1: DIV ESI
// 005313d3: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 005313d6: XOR EDX,EDX
// 005313d8: MOV EAX,ECX
// 005313da: DIV ESI
// 005313dc: XOR EBP,EBP
// 005313de: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 005313e2: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 005313e6: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005313ea: MOV EDX,0x5
// 005313ef: MOV dword ptr [EBX + 0x54],EBP
// 005313f2: MOV word ptr [ESP + 0x1c],DX
//   XREF to: Stack[-0x18] (WRITE)
// 005313f7: JMP 0x00531188
//   XREF to: 00531188 (UNCONDITIONAL_JUMP)
// 005313fc: XOR EBX,EBX
//   Label: LAB_005313fc
// 005313fe: MOV word ptr [ESP + 0x20],BX
//   XREF to: Stack[-0x14] (WRITE)
// 00531403: MOV EAX,dword ptr [ESP + 0x1e]
//   Label: LAB_00531403
//   XREF to: Stack[-0x16] (READ)
// 00531407: SAR EAX,0x10
// 0053140a: CMP EAX,0x4
// 0053140d: JGE 0x0052fa9c
//   XREF to: 0052fa9c (CONDITIONAL_JUMP)
// 00531413: XOR EBP,EBP
// 00531415: XOR ESI,ESI
// 00531417: MOV EAX,dword ptr [ESP + 0x1a]
//   Label: LAB_00531417
//   XREF to: Stack[-0x1a] (READ)
// 0053141b: SAR EAX,0x10
// 0053141e: IMUL EAX,EAX,0x30
// 00531421: MOV EDX,dword ptr [ESP + 0x16]
//   XREF to: Stack[-0x1e] (READ)
// 00531425: SAR EDX,0x10
// 00531428: SHL EDX,0x4
// 0053142b: ADD EDX,EAX
// 0053142d: MOV EAX,dword ptr [ESP + 0x1e]
//   XREF to: Stack[-0x16] (READ)
// 00531431: SAR EAX,0x10
// 00531434: SHL EAX,0x2
// 00531437: MOVSX ECX,SI
// 0053143a: CMP ECX,dword ptr [EDX + EAX*0x1 + 0x67ea40]
//   XREF to: 0067ea40 (DATA)
// 00531441: JC 0x0053144a
//   XREF to: 0053144a (CONDITIONAL_JUMP)
// 00531443: INC word ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00531448: JMP 0x00531403
//   XREF to: 00531403 (UNCONDITIONAL_JUMP)
// 0053144a: MOV EDX,dword ptr [ESP + EAX*0x1]
//   Label: LAB_0053144a
// 0053144d: CMP EBP,EDX
// 0053144f: JNZ 0x0053145d
//   XREF to: 0053145d (CONDITIONAL_JUMP)
// 00531451: MOVSX EAX,BX
// 00531454: MOV dword ptr [EDI + EAX*0x4 + 0x7358],EDX
// 0053145b: JMP 0x00531471
//   XREF to: 00531471 (UNCONDITIONAL_JUMP)
// 0053145d: PUSH EDX
//   Label: LAB_0053145d
// 0053145e: PUSH EDI
// 0053145f: CALL sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 00531464: MOVSX EDX,BX
// 00531467: ADD ESP,0x8
// 0053146a: MOV dword ptr [EDI + EDX*0x4 + 0x7358],EAX
// 00531471: INC ESI
//   Label: LAB_00531471
// 00531472: INC EBX
// 00531473: JMP 0x00531417
//   XREF to: 00531417 (UNCONDITIONAL_JUMP)
