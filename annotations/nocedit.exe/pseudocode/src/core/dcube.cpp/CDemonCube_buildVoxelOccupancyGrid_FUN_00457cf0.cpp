// Name: core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0
// Address: 00457cf0
// Address Range: [[00457cf0, 00457eaa]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(SVoxelGridParams * params)
// Cross-references:
//   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData (00456ed0) at 0045708e [UNCONDITIONAL_CALL]
// Globals:
//   float g_VoxelSubdivisionCount = 8
//   float g_VoxelSubdivisionReciprocal = 0.125
//   uchar[8] g_VoxelGridBitmasks
// Function calls:
//   core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(SVoxelGridParams *params)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar7 = 0;
  if (*(int *)params != 0) {
    local_64 = *(float *)(params + 0x14) - *(float *)(params + 8);
    local_60 = *(float *)(params + 0x18) - *(float *)(params + 0xc);
    local_5c = *(float *)(params + 0x1c) - *(float *)(params + 0x10);
    if (&local_40 != &local_64) {
      local_40 = local_64;
      local_3c = local_60;
      local_38 = local_5c;
    }
    local_34 = local_40 / g_VoxelSubdivisionCount;
    local_30 = local_3c * g_VoxelSubdivisionReciprocal;
    local_2c = local_38 * g_VoxelSubdivisionReciprocal;
    if (&local_28 != &local_34) {
      local_28 = local_34;
      local_24 = local_30;
      local_20 = local_2c;
    }
    local_1c = 0;
    local_18 = 0;
    do {
      iVar4 = 0;
      local_4c.z = (float)local_18 * local_20 + *(float *)(params + 0x10);
      local_14 = local_1c;
      local_58.z = local_4c.z + local_20;
      local_10 = local_1c;
      do {
        iVar1 = local_14;
        local_4c.y = (float)iVar4 * local_24 + *(float *)(params + 0xc);
        local_58.y = local_4c.y + local_24;
        iVar3 = 0;
        *(undefined1 *)(*(int *)params + local_10) = 0;
        do {
          local_4c.x = (float)iVar3 * local_28 + *(float *)(params + 8);
          local_58.x = local_4c.x + local_28;
          local_c = iVar3;
          iVar2 = core_dcube_cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
                            ((CDemonCube *)params,&local_4c,&local_58);
          if (iVar2 != 0) {
            *(byte *)(iVar1 + *(int *)params) =
                 *(byte *)(iVar1 + *(int *)params) | g_VoxelGridBitmasks[iVar3];
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 8);
        iVar4 = iVar4 + 1;
        local_10 = local_10 + 1;
      } while (iVar4 < 8);
      local_18 = local_18 + 8;
    } while (local_14 + 1 < 8);
    puVar5 = *(undefined4 **)params;
    puVar6 = *(undefined4 **)(params + 4);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    }
  }
  return;
}


// Assembly code:
// 00457cf0: PUSH ESI
//   Label: core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0
// 00457cf1: PUSH EBP
// 00457cf2: SUB ESP,0x5c
// 00457cf5: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 00457cf9: CMP dword ptr [ESI],0x0
// 00457cfc: JZ 0x00457e6b
//   XREF to: 00457e6b (CONDITIONAL_JUMP)
// 00457d02: PUSH EDI
// 00457d03: PUSH EBX
// 00457d04: LEA EBX,[ESI + 0x14]
// 00457d07: LEA EAX,[ESI + 0x8]
// 00457d0a: FLD float ptr [EBX]
// 00457d0c: FSUB float ptr [EAX]
// 00457d0e: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x64] (WRITE)
// 00457d12: FLD float ptr [EBX + 0x4]
// 00457d15: FSUB float ptr [EAX + 0x4]
// 00457d18: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x60] (WRITE)
// 00457d1c: FLD float ptr [EBX + 0x8]
// 00457d1f: LEA EBX,[ESP + 0x2c]
//   XREF to: Stack[-0x40] (DATA)
// 00457d23: FSUB float ptr [EAX + 0x8]
// 00457d26: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x64] (DATA)
// 00457d2a: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x5c] (WRITE)
// 00457d2e: CMP EBX,EAX
// 00457d30: JNZ 0x00457e71
//   XREF to: 00457e71 (CONDITIONAL_JUMP)
// 00457d36: FLD float ptr [ESP + 0x2c]
//   Label: LAB_00457d36
//   XREF to: Stack[-0x40] (READ)
// 00457d3a: FDIV float ptr [0x0061a84e]
//   XREF to: 0061a84e (READ)
// 00457d40: FLD float ptr [0x0061a852]
//   XREF to: 0061a852 (READ)
// 00457d46: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x3c] (READ)
// 00457d4a: FMUL ST1
// 00457d4c: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x38] (READ)
// 00457d50: FMULP ST2
// 00457d52: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x34] (DATA)
// 00457d56: LEA EBX,[ESP + 0x44]
//   XREF to: Stack[-0x28] (DATA)
// 00457d5a: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (WRITE)
// 00457d5e: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (WRITE)
// 00457d62: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x34] (WRITE)
// 00457d66: CMP EBX,EAX
// 00457d68: JNZ 0x00457e8e
//   XREF to: 00457e8e (CONDITIONAL_JUMP)
// 00457d6e: XOR ECX,ECX
//   Label: LAB_00457d6e
// 00457d70: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00457d74: MOV dword ptr [ESP + 0x54],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00457d78: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00457d78
//   XREF to: Stack[-0x18] (READ)
// 00457d7c: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00457d80: FILD dword ptr [ESP + 0x60]
//   XREF to: Stack[-0xc] (READ)
// 00457d84: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x20] (READ)
// 00457d88: XOR EBP,EBP
// 00457d8a: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 00457d8e: FADD float ptr [ESI + 0x10]
// 00457d91: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00457d95: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x44] (WRITE)
// 00457d99: FADD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x20] (READ)
// 00457d9d: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00457da1: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x50] (WRITE)
// 00457da5: MOV dword ptr [ESP + 0x60],EBP
//   Label: LAB_00457da5
//   XREF to: Stack[-0xc] (WRITE)
// 00457da9: FILD dword ptr [ESP + 0x60]
//   XREF to: Stack[-0xc] (READ)
// 00457dad: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x24] (READ)
// 00457db1: FADD float ptr [ESI + 0xc]
// 00457db4: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x48] (WRITE)
// 00457db8: FADD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x24] (READ)
// 00457dbc: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x10] (READ)
// 00457dc0: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x54] (WRITE)
// 00457dc4: MOV EAX,dword ptr [ESI]
// 00457dc6: ADD EAX,EDI
// 00457dc8: XOR EBX,EBX
// 00457dca: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 00457dce: MOV byte ptr [EAX],0x0
// 00457dd1: MOV dword ptr [ESP + 0x60],EBX
//   Label: LAB_00457dd1
//   XREF to: Stack[-0xc] (WRITE)
// 00457dd5: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x58] (DATA)
// 00457dd9: FILD dword ptr [ESP + 0x60]
//   XREF to: Stack[-0xc] (READ)
// 00457ddd: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 00457de1: PUSH EAX
// 00457de2: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x4c] (DATA)
// 00457de6: FADD float ptr [ESI + 0x8]
// 00457de9: PUSH EAX
// 00457dea: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x4c] (WRITE)
// 00457dee: FADD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x28] (READ)
// 00457df2: PUSH ESI
// 00457df3: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (WRITE)
// 00457df7: CALL core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
//   XREF to: 00457ca0 (UNCONDITIONAL_CALL)
// 00457dfc: ADD ESP,0xc
// 00457dff: TEST EAX,EAX
// 00457e01: JZ 0x00457e0e
//   XREF to: 00457e0e (CONDITIONAL_JUMP)
// 00457e03: MOV EAX,dword ptr [ESI]
// 00457e05: MOV DL,byte ptr [EBX + 0x66ed90]
//   XREF to: 0066ed90 (READ)
// 00457e0b: OR byte ptr [EDI + EAX*0x1],DL
// 00457e0e: INC EBX
//   Label: LAB_00457e0e
// 00457e0f: CMP EBX,0x8
// 00457e12: JL 0x00457dd1
//   XREF to: 00457dd1 (CONDITIONAL_JUMP)
// 00457e14: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x10] (READ)
// 00457e18: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 00457e1c: INC EBP
// 00457e1d: INC EDX
// 00457e1e: INC EAX
// 00457e1f: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 00457e23: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00457e27: CMP EBP,0x8
// 00457e2a: JL 0x00457da5
//   XREF to: 00457da5 (CONDITIONAL_JUMP)
// 00457e30: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x18] (READ)
// 00457e34: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 00457e38: INC EBX
// 00457e39: ADD ECX,0x8
// 00457e3c: MOV dword ptr [ESP + 0x54],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00457e40: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00457e44: CMP EBX,0x8
// 00457e47: JL 0x00457d78
//   XREF to: 00457d78 (CONDITIONAL_JUMP)
// 00457e4d: MOV ECX,0x40
// 00457e52: MOV EAX,dword ptr [ESI]
// 00457e54: MOV EDI,dword ptr [ESI + 0x4]
// 00457e57: MOV ESI,EAX
// 00457e59: PUSH EDI
// 00457e5a: MOV EAX,ECX
// 00457e5c: SHR ECX,0x2
// 00457e5f: MOVSD.REP ES:EDI,ESI
// 00457e61: MOV CL,AL
// 00457e63: AND CL,0x3
// 00457e66: MOVSB.REP ES:EDI,ESI
// 00457e68: POP EDI
// 00457e69: POP EBX
// 00457e6a: POP EDI
// 00457e6b: ADD ESP,0x5c
//   Label: LAB_00457e6b
// 00457e6e: POP EBP
// 00457e6f: POP ESI
// 00457e70: RET
// 00457e71: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00457e71
//   XREF to: Stack[-0x64] (DATA)
// 00457e75: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00457e79: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x60] (READ)
// 00457e7d: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00457e81: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x5c] (READ)
// 00457e85: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00457e89: JMP 0x00457d36
//   XREF to: 00457d36 (UNCONDITIONAL_JUMP)
// 00457e8e: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_00457e8e
//   XREF to: Stack[-0x34] (DATA)
// 00457e92: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00457e96: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 00457e9a: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00457e9e: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 00457ea2: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00457ea6: JMP 0x00457d6e
//   XREF to: 00457d6e (UNCONDITIONAL_JUMP)
