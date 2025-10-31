// Name: cockpit_ckptutil.c_rotateCircularBitmap_FUN_00433030
// Address: 00433030
// Address Range: [[00433030, 00433156]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_rotateCircularBitmap_FUN_00433030(void * bitmap_data, int width, int height, int num_iterations)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_rotateCircularBitmap_FUN_00433030
          (void *bitmap_data,int width,int height,int num_iterations)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  BADSPACEBASE *in_ESP;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  int aiStack_28 [5];
  uint local_14;
  
  aiStack_28[2] = width * num_iterations;
  aiStack_28[4] = width / 2;
  if (num_iterations == 1) {
    uVar10 = 0;
    if (height != 0) {
      iVar7 = 0;
      do {
        puVar5 = (undefined1 *)((int)bitmap_data + iVar7) + aiStack_28[2];
        uVar2 = 0;
        puVar3 = (undefined1 *)((int)bitmap_data + iVar7);
        if (aiStack_28[4] != 0) {
          do {
            puVar5 = puVar5 + -1;
            uVar1 = *puVar3;
            *puVar3 = *puVar5;
            uVar2 = uVar2 + 1;
            *puVar5 = uVar1;
            puVar3 = puVar3 + 1;
          } while (uVar2 < (uint)aiStack_28[4]);
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + aiStack_28[2];
      } while (uVar10 < (uint)height);
    }
  }
  else {
    aiStack_28[3] = 0;
    if (height != 0) {
      do {
        puVar4 = (undefined4 *)(aiStack_28[3] * aiStack_28[2] + (int)bitmap_data);
        local_14 = 0;
        puVar6 = (undefined4 *)((int)puVar4 + (aiStack_28[2] - num_iterations));
        if (aiStack_28[4] != 0) {
          do {
            puVar8 = puVar4;
            piVar9 = aiStack_28;
            for (uVar10 = (uint)num_iterations >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *piVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              piVar9 = piVar9 + 1;
            }
            for (uVar10 = num_iterations & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)piVar9 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              piVar9 = (undefined4 *)((int)piVar9 + 1);
            }
            puVar8 = puVar6;
            puVar11 = puVar4;
            for (uVar10 = (uint)num_iterations >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar10 = num_iterations & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            piVar9 = aiStack_28;
            puVar8 = puVar6;
            for (uVar10 = (uint)num_iterations >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar8 = *piVar9;
              piVar9 = piVar9 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar10 = num_iterations & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)piVar9;
              piVar9 = (undefined4 *)((int)piVar9 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            puVar4 = (undefined4 *)((int)puVar4 + num_iterations);
            local_14 = local_14 + 1;
            puVar6 = (undefined4 *)((int)puVar6 - num_iterations);
          } while (local_14 < (uint)aiStack_28[4]);
        }
        aiStack_28[3] = aiStack_28[3] + 1;
      } while ((uint)aiStack_28[3] < (uint)height);
    }
  }
  return;
}


// Assembly code:
// 00433030: PUSH EBX
//   Label: cockpit_ckptutil.c_rotateCircularBitmap_FUN_00433030
// 00433031: PUSH ESI
// 00433032: PUSH EDI
// 00433033: PUSH EBP
// 00433034: SUB ESP,0x18
// 00433037: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0043303b: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 0043303f: MOV EAX,EDX
// 00433041: IMUL EAX,EBX
// 00433044: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00433048: MOV EAX,EDX
// 0043304a: SAR EDX,0x1f
// 0043304d: SUB EAX,EDX
// 0043304f: SAR EAX,0x1
// 00433051: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00433055: CMP EBX,0x1
// 00433058: JNZ 0x004330b4
//   XREF to: 004330b4 (CONDITIONAL_JUMP)
// 0043305a: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 0043305e: XOR EDI,EDI
// 00433060: TEST ESI,ESI
// 00433062: JBE 0x004330ac
//   XREF to: 004330ac (CONDITIONAL_JUMP)
// 00433064: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00433068: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043306c: IMUL ESI,EAX,0x0
// 0043306f: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_0043306f
//   XREF to: Stack[0x4] (READ)
// 00433073: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00433077: ADD EDX,ESI
// 00433079: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0043307d: ADD EBP,EDX
// 0043307f: XOR EAX,EAX
// 00433081: SUB EBP,EBX
// 00433083: TEST ECX,ECX
// 00433085: JBE 0x0043309d
//   XREF to: 0043309d (CONDITIONAL_JUMP)
// 00433087: MOV CL,byte ptr [EDX]
//   Label: LAB_00433087
// 00433089: INC EDX
// 0043308a: MOV CH,byte ptr [EBP]
// 0043308d: MOV byte ptr [EDX + -0x1],CH
// 00433090: INC EAX
// 00433091: MOV byte ptr [EBP],CL
// 00433094: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00433098: DEC EBP
// 00433099: CMP EAX,ECX
// 0043309b: JC 0x00433087
//   XREF to: 00433087 (CONDITIONAL_JUMP)
// 0043309d: MOV EBP,dword ptr [ESP + 0x4]
//   Label: LAB_0043309d
//   XREF to: Stack[-0x24] (READ)
// 004330a1: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004330a5: INC EDI
// 004330a6: ADD ESI,EBP
// 004330a8: CMP EDI,EAX
// 004330aa: JC 0x0043306f
//   XREF to: 0043306f (CONDITIONAL_JUMP)
// 004330ac: ADD ESP,0x18
//   Label: LAB_004330ac
// 004330af: POP EBP
// 004330b0: POP EDI
// 004330b1: POP ESI
// 004330b2: POP EBX
// 004330b3: RET
// 004330b4: XOR EDX,EDX
//   Label: LAB_004330b4
// 004330b6: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004330ba: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004330be: TEST ECX,ECX
// 004330c0: JBE 0x004330ac
//   XREF to: 004330ac (CONDITIONAL_JUMP)
// 004330c2: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_004330c2
//   XREF to: Stack[-0x1c] (READ)
// 004330c6: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004330ca: IMUL EDX,EAX
// 004330cd: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004330d1: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004330d5: ADD EDX,ECX
// 004330d7: XOR ESI,ESI
// 004330d9: LEA EBP,[EAX + EDX*0x1]
// 004330dc: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004330e0: SUB EBP,EBX
// 004330e2: TEST EDI,EDI
// 004330e4: JBE 0x0043313d
//   XREF to: 0043313d (CONDITIONAL_JUMP)
// 004330e6: MOV EDI,ESP
//   Label: LAB_004330e6
// 004330e8: MOV ECX,EBX
// 004330ea: MOV ESI,EDX
// 004330ec: PUSH EDI
// 004330ed: MOV EAX,ECX
// 004330ef: SHR ECX,0x2
// 004330f2: MOVSD.REP ES:EDI,ESI
// 004330f4: MOV CL,AL
// 004330f6: AND CL,0x3
// 004330f9: MOVSB.REP ES:EDI,ESI
// 004330fb: POP EDI
// 004330fc: MOV ECX,EBX
// 004330fe: MOV ESI,EBP
// 00433100: MOV EDI,EDX
// 00433102: PUSH EDI
// 00433103: MOV EAX,ECX
// 00433105: SHR ECX,0x2
// 00433108: MOVSD.REP ES:EDI,ESI
// 0043310a: MOV CL,AL
// 0043310c: AND CL,0x3
// 0043310f: MOVSB.REP ES:EDI,ESI
// 00433111: POP EDI
// 00433112: MOV ESI,ESP
// 00433114: MOV ECX,EBX
// 00433116: MOV EDI,EBP
// 00433118: PUSH EDI
// 00433119: MOV EAX,ECX
// 0043311b: SHR ECX,0x2
// 0043311e: MOVSD.REP ES:EDI,ESI
// 00433120: MOV CL,AL
// 00433122: AND CL,0x3
// 00433125: MOVSB.REP ES:EDI,ESI
// 00433127: POP EDI
// 00433128: ADD EDX,EBX
// 0043312a: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0043312e: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00433132: INC EAX
// 00433133: SUB EBP,EBX
// 00433135: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00433139: CMP EAX,ECX
// 0043313b: JC 0x004330e6
//   XREF to: 004330e6 (CONDITIONAL_JUMP)
// 0043313d: MOV EDI,dword ptr [ESP + 0xc]
//   Label: LAB_0043313d
//   XREF to: Stack[-0x1c] (READ)
// 00433141: INC EDI
// 00433142: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00433146: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0043314a: CMP EDI,EBP
// 0043314c: JNC 0x004330ac
//   XREF to: 004330ac (CONDITIONAL_JUMP)
// 00433152: JMP 0x004330c2
//   XREF to: 004330c2 (UNCONDITIONAL_JUMP)
