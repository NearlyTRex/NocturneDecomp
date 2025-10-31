// Name: shape_meshlod.cpp_FUN_0051c6f0
// Address: 0051c6f0
// Address Range: [[0051c6f0, 0051cded]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051c6f0()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051b770 (0051b770) at 0051b7e8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051c6f0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int *in_stack_00000004;
  uint *in_stack_00000008;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  local_34 = 0;
  if (0 < in_stack_00000004[2]) {
    local_38 = 0;
    do {
      local_28 = local_38 + in_stack_00000004[3];
      iVar4 = 0;
      if (0 < in_stack_00000004[6]) {
        local_1c = in_stack_00000004;
        do {
          if (local_1c[9] != 0) {
            iVar2 = 4;
            local_4c = *(undefined4 *)(iVar4 * 4 + local_28);
            pbVar1 = (byte *)&local_4c;
            do {
              while( true ) {
                uVar3 = *in_stack_00000008 ^ (uint)*pbVar1 << 0x18;
                *in_stack_00000008 = uVar3;
                if ((*in_stack_00000008 & 0x80000000) == 0) {
                  uVar3 = uVar3 * 2;
                }
                else {
                  uVar3 = uVar3 * 2 ^ 0x4c11db7;
                }
                *in_stack_00000008 = uVar3;
                if ((*in_stack_00000008 & 0x80000000) == 0) {
                  uVar3 = *in_stack_00000008 * 2;
                }
                else {
                  uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
                }
                *in_stack_00000008 = uVar3;
                if ((*in_stack_00000008 & 0x80000000) == 0) {
                  uVar3 = *in_stack_00000008 * 2;
                }
                else {
                  uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
                }
                *in_stack_00000008 = uVar3;
                if ((*in_stack_00000008 & 0x80000000) == 0) {
                  uVar3 = *in_stack_00000008 * 2;
                }
                else {
                  uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
                }
                *in_stack_00000008 = uVar3;
                if ((*in_stack_00000008 & 0x80000000) == 0) {
                  uVar3 = *in_stack_00000008 * 2;
                }
                else {
                  uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
                }
                *in_stack_00000008 = uVar3;
                if ((*in_stack_00000008 & 0x80000000) == 0) {
                  uVar3 = *in_stack_00000008 * 2;
                }
                else {
                  uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
                }
                *in_stack_00000008 = uVar3;
                if ((*in_stack_00000008 & 0x80000000) == 0) {
                  uVar3 = *in_stack_00000008 * 2;
                }
                else {
                  uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
                }
                *in_stack_00000008 = uVar3;
                if ((*in_stack_00000008 & 0x80000000) != 0) break;
                pbVar1 = pbVar1 + 1;
                iVar2 = iVar2 + -1;
                *in_stack_00000008 = *in_stack_00000008 * 2;
                if (iVar2 < 1) goto LAB_0051c748;
              }
              pbVar1 = pbVar1 + 1;
              iVar2 = iVar2 + -1;
              *in_stack_00000008 = *in_stack_00000008 * 2 ^ 0x4c11db7;
            } while (0 < iVar2);
          }
LAB_0051c748:
          iVar4 = iVar4 + 1;
          local_1c = local_1c + 1;
        } while (iVar4 < in_stack_00000004[6]);
      }
      local_20 = local_28;
      local_18 = local_28;
      local_2c = local_28 + 0xc;
      do {
        iVar4 = 4;
        pbVar1 = (byte *)&local_48;
        local_48 = *(undefined4 *)(local_18 + 0x10);
        do {
          *in_stack_00000008 = *in_stack_00000008 ^ (uint)*pbVar1 << 0x18;
          uVar3 = *in_stack_00000008;
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = uVar3 * 2 ^ 0x4c11db7;
          }
          *in_stack_00000008 = uVar3;
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = uVar3 * 2 ^ 0x4c11db7;
          }
          *in_stack_00000008 = uVar3;
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = uVar3 * 2 ^ 0x4c11db7;
          }
          *in_stack_00000008 = uVar3;
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = uVar3 * 2 ^ 0x4c11db7;
          }
          *in_stack_00000008 = uVar3;
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = uVar3 * 2 ^ 0x4c11db7;
          }
          *in_stack_00000008 = uVar3;
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = uVar3 * 2 ^ 0x4c11db7;
          }
          *in_stack_00000008 = uVar3;
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = uVar3 * 2 ^ 0x4c11db7;
          }
          *in_stack_00000008 = uVar3;
          if ((uVar3 & 0x80000000) == 0) {
            uVar3 = uVar3 * 2;
          }
          else {
            uVar3 = uVar3 * 2 ^ 0x4c11db7;
          }
          pbVar1 = pbVar1 + 1;
          iVar4 = iVar4 + -1;
          *in_stack_00000008 = uVar3;
        } while (0 < iVar4);
        iVar4 = 0;
        if (0 < in_stack_00000004[7]) {
          local_14 = local_20;
          do {
            iVar2 = 4;
            pbVar1 = (byte *)&local_44;
            local_44 = *(undefined4 *)(local_14 + 0x1c);
            do {
              uVar3 = *in_stack_00000008 ^ (uint)*pbVar1 << 0x18;
              *in_stack_00000008 = uVar3;
              if ((*in_stack_00000008 & 0x80000000) == 0) {
                uVar3 = uVar3 * 2;
              }
              else {
                uVar3 = uVar3 * 2 ^ 0x4c11db7;
              }
              *in_stack_00000008 = uVar3;
              if ((*in_stack_00000008 & 0x80000000) == 0) {
                uVar3 = *in_stack_00000008 * 2;
              }
              else {
                uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
              }
              *in_stack_00000008 = uVar3;
              if ((*in_stack_00000008 & 0x80000000) == 0) {
                uVar3 = *in_stack_00000008 * 2;
              }
              else {
                uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
              }
              *in_stack_00000008 = uVar3;
              if ((*in_stack_00000008 & 0x80000000) == 0) {
                uVar3 = *in_stack_00000008 * 2;
              }
              else {
                uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
              }
              *in_stack_00000008 = uVar3;
              if ((*in_stack_00000008 & 0x80000000) == 0) {
                uVar3 = *in_stack_00000008 * 2;
              }
              else {
                uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
              }
              *in_stack_00000008 = uVar3;
              if ((*in_stack_00000008 & 0x80000000) == 0) {
                uVar3 = *in_stack_00000008 * 2;
              }
              else {
                uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
              }
              *in_stack_00000008 = uVar3;
              if ((*in_stack_00000008 & 0x80000000) == 0) {
                uVar3 = *in_stack_00000008 * 2;
              }
              else {
                uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
              }
              *in_stack_00000008 = uVar3;
              if ((*in_stack_00000008 & 0x80000000) == 0) {
                uVar3 = *in_stack_00000008 * 2;
              }
              else {
                uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
              }
              pbVar1 = pbVar1 + 1;
              iVar2 = iVar2 + -1;
              *in_stack_00000008 = uVar3;
            } while (0 < iVar2);
            iVar4 = iVar4 + 1;
            local_14 = local_14 + 4;
          } while (iVar4 < in_stack_00000004[7]);
        }
        local_18 = local_18 + 4;
        local_20 = local_20 + 8;
      } while (local_18 != local_28 + 0xc);
      local_34 = local_34 + 1;
      local_38 = local_38 + 0x8c;
    } while (local_34 < in_stack_00000004[2]);
  }
  local_30 = 0;
  if (0 < *in_stack_00000004) {
    local_3c = 0;
    do {
      iVar4 = in_stack_00000004[1];
      iVar2 = 0xc;
      pbVar1 = (byte *)(iVar4 + local_3c);
      do {
        uVar3 = *in_stack_00000008 ^ (uint)*pbVar1 << 0x18;
        *in_stack_00000008 = uVar3;
        if ((*in_stack_00000008 & 0x80000000) == 0) {
          uVar3 = uVar3 * 2;
        }
        else {
          uVar3 = uVar3 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000008 = uVar3;
        if ((*in_stack_00000008 & 0x80000000) == 0) {
          uVar3 = *in_stack_00000008 * 2;
        }
        else {
          uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000008 = uVar3;
        if ((*in_stack_00000008 & 0x80000000) == 0) {
          uVar3 = *in_stack_00000008 * 2;
        }
        else {
          uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000008 = uVar3;
        if ((*in_stack_00000008 & 0x80000000) == 0) {
          uVar3 = *in_stack_00000008 * 2;
        }
        else {
          uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000008 = uVar3;
        if ((*in_stack_00000008 & 0x80000000) == 0) {
          uVar3 = *in_stack_00000008 * 2;
        }
        else {
          uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000008 = uVar3;
        if ((*in_stack_00000008 & 0x80000000) == 0) {
          uVar3 = *in_stack_00000008 * 2;
        }
        else {
          uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000008 = uVar3;
        if ((*in_stack_00000008 & 0x80000000) == 0) {
          uVar3 = *in_stack_00000008 * 2;
        }
        else {
          uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
        }
        *in_stack_00000008 = uVar3;
        if ((*in_stack_00000008 & 0x80000000) == 0) {
          uVar3 = *in_stack_00000008 * 2;
        }
        else {
          uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
        }
        pbVar1 = pbVar1 + 1;
        iVar2 = iVar2 + -1;
        *in_stack_00000008 = uVar3;
      } while (0 < iVar2);
      iVar2 = 0;
      if (0 < in_stack_00000004[8]) {
        local_24 = (byte *)(iVar4 + local_3c);
        do {
          iVar4 = 4;
          pbVar1 = (byte *)&local_40;
          local_40 = *(undefined4 *)(local_24 + 0xc);
          do {
            uVar3 = *in_stack_00000008 ^ (uint)*pbVar1 << 0x18;
            *in_stack_00000008 = uVar3;
            if ((*in_stack_00000008 & 0x80000000) == 0) {
              uVar3 = uVar3 * 2;
            }
            else {
              uVar3 = uVar3 * 2 ^ 0x4c11db7;
            }
            *in_stack_00000008 = uVar3;
            if ((*in_stack_00000008 & 0x80000000) == 0) {
              uVar3 = *in_stack_00000008 * 2;
            }
            else {
              uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
            }
            *in_stack_00000008 = uVar3;
            if ((*in_stack_00000008 & 0x80000000) == 0) {
              uVar3 = *in_stack_00000008 * 2;
            }
            else {
              uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
            }
            *in_stack_00000008 = uVar3;
            if ((*in_stack_00000008 & 0x80000000) == 0) {
              uVar3 = *in_stack_00000008 * 2;
            }
            else {
              uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
            }
            *in_stack_00000008 = uVar3;
            if ((*in_stack_00000008 & 0x80000000) == 0) {
              uVar3 = *in_stack_00000008 * 2;
            }
            else {
              uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
            }
            *in_stack_00000008 = uVar3;
            if ((*in_stack_00000008 & 0x80000000) == 0) {
              uVar3 = *in_stack_00000008 * 2;
            }
            else {
              uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
            }
            *in_stack_00000008 = uVar3;
            if ((*in_stack_00000008 & 0x80000000) == 0) {
              uVar3 = *in_stack_00000008 * 2;
            }
            else {
              uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
            }
            *in_stack_00000008 = uVar3;
            if ((*in_stack_00000008 & 0x80000000) == 0) {
              uVar3 = *in_stack_00000008 * 2;
            }
            else {
              uVar3 = *in_stack_00000008 * 2 ^ 0x4c11db7;
            }
            pbVar1 = pbVar1 + 1;
            iVar4 = iVar4 + -1;
            *in_stack_00000008 = uVar3;
          } while (0 < iVar4);
          iVar2 = iVar2 + 1;
          local_24 = local_24 + 4;
        } while (iVar2 < in_stack_00000004[8]);
      }
      local_30 = local_30 + 1;
      local_3c = local_3c + 0x4c4;
    } while (local_30 < *in_stack_00000004);
  }
  return;
}


// Assembly code:
// 0051c6f0: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051c6f0
// 0051c6f1: PUSH ESI
// 0051c6f2: PUSH EDI
// 0051c6f3: PUSH EBP
// 0051c6f4: SUB ESP,0x3c
// 0051c6f7: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051c6fb: XOR EDX,EDX
// 0051c6fd: MOV ECX,dword ptr [EAX + 0x8]
// 0051c700: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0051c704: TEST ECX,ECX
// 0051c706: JLE 0x0051c980
//   XREF to: 0051c980 (CONDITIONAL_JUMP)
// 0051c70c: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0051c710: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_0051c710
//   XREF to: Stack[0x4] (READ)
// 0051c714: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 0051c718: MOV EAX,dword ptr [EAX + 0xc]
// 0051c71b: ADD EDX,EAX
// 0051c71d: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051c721: XOR EDI,EDI
// 0051c723: MOV EBX,dword ptr [EAX + 0x18]
// 0051c726: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0051c72a: TEST EBX,EBX
// 0051c72c: JLE 0x0051c75f
//   XREF to: 0051c75f (CONDITIONAL_JUMP)
// 0051c72e: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051c732: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0051c732
//   XREF to: Stack[-0x1c] (READ)
// 0051c736: MOV ECX,dword ptr [EDX + 0x24]
// 0051c739: LEA EAX,[EDI*0x4 + 0x0]
// 0051c740: TEST ECX,ECX
// 0051c742: JNZ 0x0051cbbd
//   XREF to: 0051cbbd (CONDITIONAL_JUMP)
// 0051c748: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_0051c748
//   XREF to: Stack[-0x1c] (READ)
// 0051c74c: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051c750: INC EDI
// 0051c751: ADD ESI,0x4
// 0051c754: MOV EBP,dword ptr [EAX + 0x18]
// 0051c757: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0051c75b: CMP EDI,EBP
// 0051c75d: JL 0x0051c732
//   XREF to: 0051c732 (CONDITIONAL_JUMP)
// 0051c75f: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0051c75f
//   XREF to: Stack[-0x28] (READ)
// 0051c763: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0051c767: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051c76b: ADD EAX,0xc
// 0051c76e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0051c772: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0051c772
//   XREF to: Stack[-0x18] (READ)
// 0051c776: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0051c77a: MOV ESI,0x4
// 0051c77f: MOV EAX,dword ptr [EAX + 0x10]
// 0051c782: LEA ECX,[ESP + 0x4]
//   XREF to: Stack[-0x48] (DATA)
// 0051c786: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0051c78a: MOV EDI,0x4c11db7
// 0051c78f: MOV EBP,0x80000000
// 0051c794: MOV EAX,EDX
// 0051c796: MOV BL,byte ptr [ECX]
//   Label: LAB_0051c796
//   XREF to: Stack[-0x48] (DATA)
// 0051c798: AND EBX,0xff
// 0051c79e: SHL EBX,0x18
// 0051c7a1: XOR dword ptr [EDX],EBX
// 0051c7a3: MOV EBX,dword ptr [EDX]
// 0051c7a5: TEST EBP,EBX
// 0051c7a7: JZ 0x0051ccdf
//   XREF to: 0051ccdf (CONDITIONAL_JUMP)
// 0051c7ad: ADD EBX,EBX
// 0051c7af: XOR EBX,EDI
// 0051c7b1: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c7b1
// 0051c7b3: TEST EBP,EBX
// 0051c7b5: JZ 0x0051cce6
//   XREF to: 0051cce6 (CONDITIONAL_JUMP)
// 0051c7bb: ADD EBX,EBX
// 0051c7bd: XOR EBX,EDI
// 0051c7bf: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c7bf
// 0051c7c1: TEST EBP,EBX
// 0051c7c3: JZ 0x0051cced
//   XREF to: 0051cced (CONDITIONAL_JUMP)
// 0051c7c9: ADD EBX,EBX
// 0051c7cb: XOR EBX,EDI
// 0051c7cd: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c7cd
// 0051c7cf: TEST EBP,EBX
// 0051c7d1: JZ 0x0051ccf4
//   XREF to: 0051ccf4 (CONDITIONAL_JUMP)
// 0051c7d7: ADD EBX,EBX
// 0051c7d9: XOR EBX,EDI
// 0051c7db: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c7db
// 0051c7dd: TEST EBP,EBX
// 0051c7df: JZ 0x0051ccfb
//   XREF to: 0051ccfb (CONDITIONAL_JUMP)
// 0051c7e5: ADD EBX,EBX
// 0051c7e7: XOR EBX,EDI
// 0051c7e9: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c7e9
// 0051c7eb: TEST EBP,EBX
// 0051c7ed: JZ 0x0051cd02
//   XREF to: 0051cd02 (CONDITIONAL_JUMP)
// 0051c7f3: ADD EBX,EBX
// 0051c7f5: XOR EBX,EDI
// 0051c7f7: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c7f7
// 0051c7f9: TEST EBP,EBX
// 0051c7fb: JZ 0x0051cd09
//   XREF to: 0051cd09 (CONDITIONAL_JUMP)
// 0051c801: ADD EBX,EBX
// 0051c803: XOR EBX,EDI
// 0051c805: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c805
// 0051c807: TEST EBP,EBX
// 0051c809: JZ 0x0051cd10
//   XREF to: 0051cd10 (CONDITIONAL_JUMP)
// 0051c80f: ADD EBX,EBX
// 0051c811: XOR EBX,EDI
// 0051c813: INC ECX
//   Label: LAB_0051c813
// 0051c814: DEC ESI
// 0051c815: MOV dword ptr [EAX],EBX
// 0051c817: TEST ESI,ESI
// 0051c819: JG 0x0051c796
//   XREF to: 0051c796 (CONDITIONAL_JUMP)
// 0051c81f: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051c823: MOV ESI,dword ptr [EAX + 0x1c]
// 0051c826: XOR EDI,EDI
// 0051c828: TEST ESI,ESI
// 0051c82a: JLE 0x0051c938
//   XREF to: 0051c938 (CONDITIONAL_JUMP)
// 0051c830: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 0051c834: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051c838: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_0051c838
//   XREF to: Stack[-0x14] (READ)
// 0051c83c: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0051c840: MOV ECX,0x4
// 0051c845: MOV EAX,dword ptr [EAX + 0x1c]
// 0051c848: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x44] (DATA)
// 0051c84c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0051c850: MOV EAX,EDX
// 0051c852: MOV BL,byte ptr [ESI]
//   Label: LAB_0051c852
//   XREF to: Stack[-0x44] (DATA)
// 0051c854: AND EBX,0xff
// 0051c85a: MOV EBP,dword ptr [EDX]
// 0051c85c: SHL EBX,0x18
// 0051c85f: XOR EBP,EBX
// 0051c861: MOV dword ptr [EDX],EBP
// 0051c863: TEST byte ptr [EDX + 0x3],0x80
// 0051c867: JZ 0x0051cd17
//   XREF to: 0051cd17 (CONDITIONAL_JUMP)
// 0051c86d: LEA EBX,[EBP + EBP*0x1]
// 0051c871: XOR EBX,0x4c11db7
// 0051c877: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c877
// 0051c879: TEST byte ptr [EAX + 0x3],0x80
// 0051c87d: JZ 0x0051cd20
//   XREF to: 0051cd20 (CONDITIONAL_JUMP)
// 0051c883: MOV EBX,dword ptr [EAX]
// 0051c885: ADD EBX,EBX
// 0051c887: XOR EBX,0x4c11db7
// 0051c88d: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c88d
// 0051c88f: TEST byte ptr [EAX + 0x3],0x80
// 0051c893: JZ 0x0051cd29
//   XREF to: 0051cd29 (CONDITIONAL_JUMP)
// 0051c899: MOV EBX,dword ptr [EAX]
// 0051c89b: ADD EBX,EBX
// 0051c89d: XOR EBX,0x4c11db7
// 0051c8a3: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c8a3
// 0051c8a5: TEST byte ptr [EAX + 0x3],0x80
// 0051c8a9: JZ 0x0051cd32
//   XREF to: 0051cd32 (CONDITIONAL_JUMP)
// 0051c8af: MOV EBX,dword ptr [EAX]
// 0051c8b1: ADD EBX,EBX
// 0051c8b3: XOR EBX,0x4c11db7
// 0051c8b9: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c8b9
// 0051c8bb: TEST byte ptr [EAX + 0x3],0x80
// 0051c8bf: JZ 0x0051cd3b
//   XREF to: 0051cd3b (CONDITIONAL_JUMP)
// 0051c8c5: MOV EBX,dword ptr [EAX]
// 0051c8c7: ADD EBX,EBX
// 0051c8c9: XOR EBX,0x4c11db7
// 0051c8cf: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c8cf
// 0051c8d1: TEST byte ptr [EAX + 0x3],0x80
// 0051c8d5: JZ 0x0051cd44
//   XREF to: 0051cd44 (CONDITIONAL_JUMP)
// 0051c8db: MOV EBX,dword ptr [EAX]
// 0051c8dd: ADD EBX,EBX
// 0051c8df: XOR EBX,0x4c11db7
// 0051c8e5: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c8e5
// 0051c8e7: TEST byte ptr [EAX + 0x3],0x80
// 0051c8eb: JZ 0x0051cd4d
//   XREF to: 0051cd4d (CONDITIONAL_JUMP)
// 0051c8f1: MOV EBX,dword ptr [EAX]
// 0051c8f3: ADD EBX,EBX
// 0051c8f5: XOR EBX,0x4c11db7
// 0051c8fb: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c8fb
// 0051c8fd: TEST byte ptr [EAX + 0x3],0x80
// 0051c901: JZ 0x0051cd56
//   XREF to: 0051cd56 (CONDITIONAL_JUMP)
// 0051c907: MOV EBX,dword ptr [EAX]
// 0051c909: ADD EBX,EBX
// 0051c90b: XOR EBX,0x4c11db7
// 0051c911: INC ESI
//   Label: LAB_0051c911
// 0051c912: DEC ECX
// 0051c913: MOV dword ptr [EAX],EBX
// 0051c915: TEST ECX,ECX
// 0051c917: JG 0x0051c852
//   XREF to: 0051c852 (CONDITIONAL_JUMP)
// 0051c91d: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0051c921: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051c925: INC EDI
// 0051c926: ADD EBP,0x4
// 0051c929: MOV EDX,dword ptr [EAX + 0x1c]
// 0051c92c: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0051c930: CMP EDI,EDX
// 0051c932: JL 0x0051c838
//   XREF to: 0051c838 (CONDITIONAL_JUMP)
// 0051c938: MOV EBX,dword ptr [ESP + 0x2c]
//   Label: LAB_0051c938
//   XREF to: Stack[-0x20] (READ)
// 0051c93c: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 0051c940: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 0051c944: ADD EBX,0x8
// 0051c947: ADD ECX,0x4
// 0051c94a: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0051c94e: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0051c952: CMP ECX,ESI
// 0051c954: JNZ 0x0051c772
//   XREF to: 0051c772 (CONDITIONAL_JUMP)
// 0051c95a: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 0051c95e: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 0051c962: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051c966: ADD EBX,0x8c
// 0051c96c: INC ESI
// 0051c96d: MOV EDI,dword ptr [EDX + 0x8]
// 0051c970: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 0051c974: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0051c978: CMP ESI,EDI
// 0051c97a: JL 0x0051c710
//   XREF to: 0051c710 (CONDITIONAL_JUMP)
// 0051c980: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_0051c980
//   XREF to: Stack[0x4] (READ)
// 0051c984: XOR EBP,EBP
// 0051c986: MOV EDX,dword ptr [EAX]
// 0051c988: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 0051c98c: TEST EDX,EDX
// 0051c98e: JLE 0x0051cbb5
//   XREF to: 0051cbb5 (CONDITIONAL_JUMP)
// 0051c994: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x3c] (WRITE)
// 0051c998: MOV EBP,dword ptr [ESP + 0x50]
//   Label: LAB_0051c998
//   XREF to: Stack[0x4] (READ)
// 0051c99c: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x3c] (READ)
// 0051c9a0: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0051c9a4: MOV EBP,dword ptr [EBP + 0x4]
// 0051c9a7: MOV EAX,EDX
// 0051c9a9: ADD EBP,ESI
// 0051c9ab: MOV ESI,0xc
// 0051c9b0: MOV ECX,EBP
// 0051c9b2: MOV BL,byte ptr [ECX]
//   Label: LAB_0051c9b2
// 0051c9b4: AND EBX,0xff
// 0051c9ba: MOV EDI,dword ptr [EDX]
// 0051c9bc: SHL EBX,0x18
// 0051c9bf: XOR EDI,EBX
// 0051c9c1: MOV dword ptr [EDX],EDI
// 0051c9c3: TEST byte ptr [EDX + 0x3],0x80
// 0051c9c7: JZ 0x0051cd5f
//   XREF to: 0051cd5f (CONDITIONAL_JUMP)
// 0051c9cd: LEA EBX,[EDI + EDI*0x1]
// 0051c9d0: XOR EBX,0x4c11db7
// 0051c9d6: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c9d6
// 0051c9d8: TEST byte ptr [EAX + 0x3],0x80
// 0051c9dc: JZ 0x0051cd67
//   XREF to: 0051cd67 (CONDITIONAL_JUMP)
// 0051c9e2: MOV EBX,dword ptr [EAX]
// 0051c9e4: ADD EBX,EBX
// 0051c9e6: XOR EBX,0x4c11db7
// 0051c9ec: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c9ec
// 0051c9ee: TEST byte ptr [EAX + 0x3],0x80
// 0051c9f2: JZ 0x0051cd70
//   XREF to: 0051cd70 (CONDITIONAL_JUMP)
// 0051c9f8: MOV EBX,dword ptr [EAX]
// 0051c9fa: ADD EBX,EBX
// 0051c9fc: XOR EBX,0x4c11db7
// 0051ca02: MOV dword ptr [EAX],EBX
//   Label: LAB_0051ca02
// 0051ca04: TEST byte ptr [EAX + 0x3],0x80
// 0051ca08: JZ 0x0051cd79
//   XREF to: 0051cd79 (CONDITIONAL_JUMP)
// 0051ca0e: MOV EBX,dword ptr [EAX]
// 0051ca10: ADD EBX,EBX
// 0051ca12: XOR EBX,0x4c11db7
// 0051ca18: MOV dword ptr [EAX],EBX
//   Label: LAB_0051ca18
// 0051ca1a: TEST byte ptr [EAX + 0x3],0x80
// 0051ca1e: JZ 0x0051cd82
//   XREF to: 0051cd82 (CONDITIONAL_JUMP)
// 0051ca24: MOV EBX,dword ptr [EAX]
// 0051ca26: ADD EBX,EBX
// 0051ca28: XOR EBX,0x4c11db7
// 0051ca2e: MOV dword ptr [EAX],EBX
//   Label: LAB_0051ca2e
// 0051ca30: TEST byte ptr [EAX + 0x3],0x80
// 0051ca34: JZ 0x0051cd8b
//   XREF to: 0051cd8b (CONDITIONAL_JUMP)
// 0051ca3a: MOV EBX,dword ptr [EAX]
// 0051ca3c: ADD EBX,EBX
// 0051ca3e: XOR EBX,0x4c11db7
// 0051ca44: MOV dword ptr [EAX],EBX
//   Label: LAB_0051ca44
// 0051ca46: TEST byte ptr [EAX + 0x3],0x80
// 0051ca4a: JZ 0x0051cd94
//   XREF to: 0051cd94 (CONDITIONAL_JUMP)
// 0051ca50: MOV EBX,dword ptr [EAX]
// 0051ca52: ADD EBX,EBX
// 0051ca54: XOR EBX,0x4c11db7
// 0051ca5a: MOV dword ptr [EAX],EBX
//   Label: LAB_0051ca5a
// 0051ca5c: TEST byte ptr [EAX + 0x3],0x80
// 0051ca60: JZ 0x0051cd9d
//   XREF to: 0051cd9d (CONDITIONAL_JUMP)
// 0051ca66: MOV EBX,dword ptr [EAX]
// 0051ca68: ADD EBX,EBX
// 0051ca6a: XOR EBX,0x4c11db7
// 0051ca70: INC ECX
//   Label: LAB_0051ca70
// 0051ca71: DEC ESI
// 0051ca72: MOV dword ptr [EAX],EBX
// 0051ca74: TEST ESI,ESI
// 0051ca76: JG 0x0051c9b2
//   XREF to: 0051c9b2 (CONDITIONAL_JUMP)
// 0051ca7c: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051ca80: MOV EDX,dword ptr [EAX + 0x20]
// 0051ca83: XOR EDI,EDI
// 0051ca85: TEST EDX,EDX
// 0051ca87: JLE 0x0051cb91
//   XREF to: 0051cb91 (CONDITIONAL_JUMP)
// 0051ca8d: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0051ca91: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0051ca95: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0051ca95
//   XREF to: Stack[-0x24] (READ)
// 0051ca99: MOV ESI,0x4
// 0051ca9e: MOV EAX,dword ptr [EAX + 0xc]
// 0051caa1: LEA ECX,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 0051caa5: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0051caa9: MOV EAX,EDX
// 0051caab: MOV BL,byte ptr [ECX]
//   Label: LAB_0051caab
//   XREF to: Stack[-0x40] (DATA)
// 0051caad: AND EBX,0xff
// 0051cab3: MOV EBP,dword ptr [EDX]
// 0051cab5: SHL EBX,0x18
// 0051cab8: XOR EBP,EBX
// 0051caba: MOV dword ptr [EDX],EBP
// 0051cabc: TEST byte ptr [EDX + 0x3],0x80
// 0051cac0: JZ 0x0051cda6
//   XREF to: 0051cda6 (CONDITIONAL_JUMP)
// 0051cac6: LEA EBX,[EBP + EBP*0x1]
// 0051caca: XOR EBX,0x4c11db7
// 0051cad0: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cad0
// 0051cad2: TEST byte ptr [EAX + 0x3],0x80
// 0051cad6: JZ 0x0051cdaf
//   XREF to: 0051cdaf (CONDITIONAL_JUMP)
// 0051cadc: MOV EBX,dword ptr [EAX]
// 0051cade: ADD EBX,EBX
// 0051cae0: XOR EBX,0x4c11db7
// 0051cae6: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cae6
// 0051cae8: TEST byte ptr [EAX + 0x3],0x80
// 0051caec: JZ 0x0051cdb8
//   XREF to: 0051cdb8 (CONDITIONAL_JUMP)
// 0051caf2: MOV EBX,dword ptr [EAX]
// 0051caf4: ADD EBX,EBX
// 0051caf6: XOR EBX,0x4c11db7
// 0051cafc: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cafc
// 0051cafe: TEST byte ptr [EAX + 0x3],0x80
// 0051cb02: JZ 0x0051cdc1
//   XREF to: 0051cdc1 (CONDITIONAL_JUMP)
// 0051cb08: MOV EBX,dword ptr [EAX]
// 0051cb0a: ADD EBX,EBX
// 0051cb0c: XOR EBX,0x4c11db7
// 0051cb12: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cb12
// 0051cb14: TEST byte ptr [EAX + 0x3],0x80
// 0051cb18: JZ 0x0051cdca
//   XREF to: 0051cdca (CONDITIONAL_JUMP)
// 0051cb1e: MOV EBX,dword ptr [EAX]
// 0051cb20: ADD EBX,EBX
// 0051cb22: XOR EBX,0x4c11db7
// 0051cb28: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cb28
// 0051cb2a: TEST byte ptr [EAX + 0x3],0x80
// 0051cb2e: JZ 0x0051cdd3
//   XREF to: 0051cdd3 (CONDITIONAL_JUMP)
// 0051cb34: MOV EBX,dword ptr [EAX]
// 0051cb36: ADD EBX,EBX
// 0051cb38: XOR EBX,0x4c11db7
// 0051cb3e: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cb3e
// 0051cb40: TEST byte ptr [EAX + 0x3],0x80
// 0051cb44: JZ 0x0051cddc
//   XREF to: 0051cddc (CONDITIONAL_JUMP)
// 0051cb4a: MOV EBX,dword ptr [EAX]
// 0051cb4c: ADD EBX,EBX
// 0051cb4e: XOR EBX,0x4c11db7
// 0051cb54: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cb54
// 0051cb56: TEST byte ptr [EAX + 0x3],0x80
// 0051cb5a: JZ 0x0051cde5
//   XREF to: 0051cde5 (CONDITIONAL_JUMP)
// 0051cb60: MOV EBX,dword ptr [EAX]
// 0051cb62: ADD EBX,EBX
// 0051cb64: XOR EBX,0x4c11db7
// 0051cb6a: INC ECX
//   Label: LAB_0051cb6a
// 0051cb6b: DEC ESI
// 0051cb6c: MOV dword ptr [EAX],EBX
// 0051cb6e: TEST ESI,ESI
// 0051cb70: JG 0x0051caab
//   XREF to: 0051caab (CONDITIONAL_JUMP)
// 0051cb76: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 0051cb7a: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051cb7e: INC EDI
// 0051cb7f: ADD ECX,0x4
// 0051cb82: MOV EBX,dword ptr [EAX + 0x20]
// 0051cb85: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0051cb89: CMP EDI,EBX
// 0051cb8b: JL 0x0051ca95
//   XREF to: 0051ca95 (CONDITIONAL_JUMP)
// 0051cb91: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0051cb91
//   XREF to: Stack[-0x3c] (READ)
// 0051cb95: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 0051cb99: ADD EAX,0x4c4
// 0051cb9e: INC EDX
// 0051cb9f: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0051cba3: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0051cba7: MOV EAX,EDX
// 0051cba9: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0051cbad: CMP EAX,dword ptr [EDX]
// 0051cbaf: JL 0x0051c998
//   XREF to: 0051c998 (CONDITIONAL_JUMP)
// 0051cbb5: ADD ESP,0x3c
//   Label: LAB_0051cbb5
// 0051cbb8: POP EBP
// 0051cbb9: POP EDI
// 0051cbba: POP ESI
// 0051cbbb: POP EBX
// 0051cbbc: RET
// 0051cbbd: ADD EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0051cbbd
//   XREF to: Stack[-0x28] (READ)
// 0051cbc1: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0051cbc5: MOV ECX,0x4
// 0051cbca: MOV EAX,dword ptr [EAX]
// 0051cbcc: MOV ESI,ESP
// 0051cbce: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4c] (DATA)
// 0051cbd1: MOV EAX,EDX
// 0051cbd3: MOV BL,byte ptr [ESI]
//   Label: LAB_0051cbd3
//   XREF to: Stack[-0x4c] (DATA)
// 0051cbd5: AND EBX,0xff
// 0051cbdb: MOV EBP,dword ptr [EDX]
// 0051cbdd: SHL EBX,0x18
// 0051cbe0: XOR EBP,EBX
// 0051cbe2: MOV dword ptr [EDX],EBP
// 0051cbe4: TEST byte ptr [EDX + 0x3],0x80
// 0051cbe8: JZ 0x0051cc97
//   XREF to: 0051cc97 (CONDITIONAL_JUMP)
// 0051cbee: LEA EBX,[EBP + EBP*0x1]
// 0051cbf2: XOR EBX,0x4c11db7
// 0051cbf8: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cbf8
// 0051cbfa: TEST byte ptr [EAX + 0x3],0x80
// 0051cbfe: JZ 0x0051cca0
//   XREF to: 0051cca0 (CONDITIONAL_JUMP)
// 0051cc04: MOV EBX,dword ptr [EAX]
// 0051cc06: ADD EBX,EBX
// 0051cc08: XOR EBX,0x4c11db7
// 0051cc0e: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cc0e
// 0051cc10: TEST byte ptr [EAX + 0x3],0x80
// 0051cc14: JZ 0x0051cca9
//   XREF to: 0051cca9 (CONDITIONAL_JUMP)
// 0051cc1a: MOV EBX,dword ptr [EAX]
// 0051cc1c: ADD EBX,EBX
// 0051cc1e: XOR EBX,0x4c11db7
// 0051cc24: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cc24
// 0051cc26: TEST byte ptr [EAX + 0x3],0x80
// 0051cc2a: JZ 0x0051ccb2
//   XREF to: 0051ccb2 (CONDITIONAL_JUMP)
// 0051cc30: MOV EBX,dword ptr [EAX]
// 0051cc32: ADD EBX,EBX
// 0051cc34: XOR EBX,0x4c11db7
// 0051cc3a: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cc3a
// 0051cc3c: TEST byte ptr [EAX + 0x3],0x80
// 0051cc40: JZ 0x0051ccb8
//   XREF to: 0051ccb8 (CONDITIONAL_JUMP)
// 0051cc46: MOV EBX,dword ptr [EAX]
// 0051cc48: ADD EBX,EBX
// 0051cc4a: XOR EBX,0x4c11db7
// 0051cc50: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cc50
// 0051cc52: TEST byte ptr [EAX + 0x3],0x80
// 0051cc56: JZ 0x0051ccbe
//   XREF to: 0051ccbe (CONDITIONAL_JUMP)
// 0051cc58: MOV EBX,dword ptr [EAX]
// 0051cc5a: ADD EBX,EBX
// 0051cc5c: XOR EBX,0x4c11db7
// 0051cc62: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cc62
// 0051cc64: TEST byte ptr [EAX + 0x3],0x80
// 0051cc68: JZ 0x0051ccc4
//   XREF to: 0051ccc4 (CONDITIONAL_JUMP)
// 0051cc6a: MOV EBX,dword ptr [EAX]
// 0051cc6c: ADD EBX,EBX
// 0051cc6e: XOR EBX,0x4c11db7
// 0051cc74: MOV dword ptr [EAX],EBX
//   Label: LAB_0051cc74
// 0051cc76: TEST byte ptr [EAX + 0x3],0x80
// 0051cc7a: JZ 0x0051ccca
//   XREF to: 0051ccca (CONDITIONAL_JUMP)
// 0051cc7c: MOV EBX,dword ptr [EAX]
// 0051cc7e: ADD EBX,EBX
// 0051cc80: XOR EBX,0x4c11db7
// 0051cc86: INC ESI
// 0051cc87: DEC ECX
// 0051cc88: MOV dword ptr [EAX],EBX
// 0051cc8a: TEST ECX,ECX
// 0051cc8c: JLE 0x0051c748
//   XREF to: 0051c748 (CONDITIONAL_JUMP)
// 0051cc92: JMP 0x0051cbd3
//   XREF to: 0051cbd3 (UNCONDITIONAL_JUMP)
// 0051cc97: LEA EBX,[EBP + EBP*0x1]
//   Label: LAB_0051cc97
// 0051cc9b: JMP 0x0051cbf8
//   XREF to: 0051cbf8 (UNCONDITIONAL_JUMP)
// 0051cca0: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cca0
// 0051cca2: ADD EBX,EBX
// 0051cca4: JMP 0x0051cc0e
//   XREF to: 0051cc0e (UNCONDITIONAL_JUMP)
// 0051cca9: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cca9
// 0051ccab: ADD EBX,EBX
// 0051ccad: JMP 0x0051cc24
//   XREF to: 0051cc24 (UNCONDITIONAL_JUMP)
// 0051ccb2: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051ccb2
// 0051ccb4: ADD EBX,EBX
// 0051ccb6: JMP 0x0051cc3a
//   XREF to: 0051cc3a (UNCONDITIONAL_JUMP)
// 0051ccb8: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051ccb8
// 0051ccba: ADD EBX,EBX
// 0051ccbc: JMP 0x0051cc50
//   XREF to: 0051cc50 (UNCONDITIONAL_JUMP)
// 0051ccbe: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051ccbe
// 0051ccc0: ADD EBX,EBX
// 0051ccc2: JMP 0x0051cc62
//   XREF to: 0051cc62 (UNCONDITIONAL_JUMP)
// 0051ccc4: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051ccc4
// 0051ccc6: ADD EBX,EBX
// 0051ccc8: JMP 0x0051cc74
//   XREF to: 0051cc74 (UNCONDITIONAL_JUMP)
// 0051ccca: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051ccca
// 0051cccc: ADD EBX,EBX
// 0051ccce: INC ESI
// 0051cccf: DEC ECX
// 0051ccd0: MOV dword ptr [EAX],EBX
// 0051ccd2: TEST ECX,ECX
// 0051ccd4: JLE 0x0051c748
//   XREF to: 0051c748 (CONDITIONAL_JUMP)
// 0051ccda: JMP 0x0051cbd3
//   XREF to: 0051cbd3 (UNCONDITIONAL_JUMP)
// 0051ccdf: ADD EBX,EBX
//   Label: LAB_0051ccdf
// 0051cce1: JMP 0x0051c7b1
//   XREF to: 0051c7b1 (UNCONDITIONAL_JUMP)
// 0051cce6: ADD EBX,EBX
//   Label: LAB_0051cce6
// 0051cce8: JMP 0x0051c7bf
//   XREF to: 0051c7bf (UNCONDITIONAL_JUMP)
// 0051cced: ADD EBX,EBX
//   Label: LAB_0051cced
// 0051ccef: JMP 0x0051c7cd
//   XREF to: 0051c7cd (UNCONDITIONAL_JUMP)
// 0051ccf4: ADD EBX,EBX
//   Label: LAB_0051ccf4
// 0051ccf6: JMP 0x0051c7db
//   XREF to: 0051c7db (UNCONDITIONAL_JUMP)
// 0051ccfb: ADD EBX,EBX
//   Label: LAB_0051ccfb
// 0051ccfd: JMP 0x0051c7e9
//   XREF to: 0051c7e9 (UNCONDITIONAL_JUMP)
// 0051cd02: ADD EBX,EBX
//   Label: LAB_0051cd02
// 0051cd04: JMP 0x0051c7f7
//   XREF to: 0051c7f7 (UNCONDITIONAL_JUMP)
// 0051cd09: ADD EBX,EBX
//   Label: LAB_0051cd09
// 0051cd0b: JMP 0x0051c805
//   XREF to: 0051c805 (UNCONDITIONAL_JUMP)
// 0051cd10: ADD EBX,EBX
//   Label: LAB_0051cd10
// 0051cd12: JMP 0x0051c813
//   XREF to: 0051c813 (UNCONDITIONAL_JUMP)
// 0051cd17: LEA EBX,[EBP + EBP*0x1]
//   Label: LAB_0051cd17
// 0051cd1b: JMP 0x0051c877
//   XREF to: 0051c877 (UNCONDITIONAL_JUMP)
// 0051cd20: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd20
// 0051cd22: ADD EBX,EBX
// 0051cd24: JMP 0x0051c88d
//   XREF to: 0051c88d (UNCONDITIONAL_JUMP)
// 0051cd29: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd29
// 0051cd2b: ADD EBX,EBX
// 0051cd2d: JMP 0x0051c8a3
//   XREF to: 0051c8a3 (UNCONDITIONAL_JUMP)
// 0051cd32: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd32
// 0051cd34: ADD EBX,EBX
// 0051cd36: JMP 0x0051c8b9
//   XREF to: 0051c8b9 (UNCONDITIONAL_JUMP)
// 0051cd3b: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd3b
// 0051cd3d: ADD EBX,EBX
// 0051cd3f: JMP 0x0051c8cf
//   XREF to: 0051c8cf (UNCONDITIONAL_JUMP)
// 0051cd44: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd44
// 0051cd46: ADD EBX,EBX
// 0051cd48: JMP 0x0051c8e5
//   XREF to: 0051c8e5 (UNCONDITIONAL_JUMP)
// 0051cd4d: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd4d
// 0051cd4f: ADD EBX,EBX
// 0051cd51: JMP 0x0051c8fb
//   XREF to: 0051c8fb (UNCONDITIONAL_JUMP)
// 0051cd56: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd56
// 0051cd58: ADD EBX,EBX
// 0051cd5a: JMP 0x0051c911
//   XREF to: 0051c911 (UNCONDITIONAL_JUMP)
// 0051cd5f: LEA EBX,[EDI + EDI*0x1]
//   Label: LAB_0051cd5f
// 0051cd62: JMP 0x0051c9d6
//   XREF to: 0051c9d6 (UNCONDITIONAL_JUMP)
// 0051cd67: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd67
// 0051cd69: ADD EBX,EBX
// 0051cd6b: JMP 0x0051c9ec
//   XREF to: 0051c9ec (UNCONDITIONAL_JUMP)
// 0051cd70: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd70
// 0051cd72: ADD EBX,EBX
// 0051cd74: JMP 0x0051ca02
//   XREF to: 0051ca02 (UNCONDITIONAL_JUMP)
// 0051cd79: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd79
// 0051cd7b: ADD EBX,EBX
// 0051cd7d: JMP 0x0051ca18
//   XREF to: 0051ca18 (UNCONDITIONAL_JUMP)
// 0051cd82: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd82
// 0051cd84: ADD EBX,EBX
// 0051cd86: JMP 0x0051ca2e
//   XREF to: 0051ca2e (UNCONDITIONAL_JUMP)
// 0051cd8b: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd8b
// 0051cd8d: ADD EBX,EBX
// 0051cd8f: JMP 0x0051ca44
//   XREF to: 0051ca44 (UNCONDITIONAL_JUMP)
// 0051cd94: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd94
// 0051cd96: ADD EBX,EBX
// 0051cd98: JMP 0x0051ca5a
//   XREF to: 0051ca5a (UNCONDITIONAL_JUMP)
// 0051cd9d: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cd9d
// 0051cd9f: ADD EBX,EBX
// 0051cda1: JMP 0x0051ca70
//   XREF to: 0051ca70 (UNCONDITIONAL_JUMP)
// 0051cda6: LEA EBX,[EBP + EBP*0x1]
//   Label: LAB_0051cda6
// 0051cdaa: JMP 0x0051cad0
//   XREF to: 0051cad0 (UNCONDITIONAL_JUMP)
// 0051cdaf: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cdaf
// 0051cdb1: ADD EBX,EBX
// 0051cdb3: JMP 0x0051cae6
//   XREF to: 0051cae6 (UNCONDITIONAL_JUMP)
// 0051cdb8: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cdb8
// 0051cdba: ADD EBX,EBX
// 0051cdbc: JMP 0x0051cafc
//   XREF to: 0051cafc (UNCONDITIONAL_JUMP)
// 0051cdc1: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cdc1
// 0051cdc3: ADD EBX,EBX
// 0051cdc5: JMP 0x0051cb12
//   XREF to: 0051cb12 (UNCONDITIONAL_JUMP)
// 0051cdca: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cdca
// 0051cdcc: ADD EBX,EBX
// 0051cdce: JMP 0x0051cb28
//   XREF to: 0051cb28 (UNCONDITIONAL_JUMP)
// 0051cdd3: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cdd3
// 0051cdd5: ADD EBX,EBX
// 0051cdd7: JMP 0x0051cb3e
//   XREF to: 0051cb3e (UNCONDITIONAL_JUMP)
// 0051cddc: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cddc
// 0051cdde: ADD EBX,EBX
// 0051cde0: JMP 0x0051cb54
//   XREF to: 0051cb54 (UNCONDITIONAL_JUMP)
// 0051cde5: MOV EBX,dword ptr [EAX]
//   Label: LAB_0051cde5
// 0051cde7: ADD EBX,EBX
// 0051cde9: JMP 0x0051cb6a
//   XREF to: 0051cb6a (UNCONDITIONAL_JUMP)
