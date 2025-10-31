// Name: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0
// Address: 004973b0
// Address Range: [[004973b0, 004974ff]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0(CDemonRaytrace * this_ptr, uchar * voxel_data, int grid_x, int grid_y, int grid_z)
// Globals:
//   float g_VoxelSubGridScale = 0.125
//   uchar[8] g_VoxelYBitMasks
//   undefined4 s_@_006789f9
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0
          (CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  CVector3f local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar1 = (this_ptr->cell_size).x;
  fVar2 = (this_ptr->bbox_min).x;
  fVar3 = (this_ptr->cell_size).y;
  fVar4 = (this_ptr->bbox_min).y;
  fVar5 = (this_ptr->cell_size).z;
  local_1c = 0;
  fVar6 = (this_ptr->bbox_min).z;
  local_28 = 0;
  do {
    iVar8 = 0;
    local_24 = local_28;
    local_20 = local_28;
    do {
      if ((*(int *)voxel_data != 0) && (*(char *)(*(int *)voxel_data + local_24) != '\0')) {
        iVar7 = 0;
        local_18 = local_20;
        do {
          if ((*(byte *)(*(int *)voxel_data + local_18) & g_VoxelYBitMasks[iVar7]) != 0) {
            local_34.x = (float)iVar7 * (this_ptr->cell_size).x * g_VoxelSubGridScale +
                         (float)grid_x * fVar1 + fVar2;
            local_14 = local_1c;
            local_34.y = (float)iVar8 * (this_ptr->cell_size).y * g_VoxelSubGridScale +
                         (float)grid_y * fVar3 + fVar4;
            local_34.z = (float)local_1c * (this_ptr->cell_size).z * g_VoxelSubGridScale +
                         (float)grid_z * fVar5 + fVar6;
            core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00496e70(this_ptr,&local_34);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      iVar8 = iVar8 + 1;
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
    } while (iVar8 < 8);
    local_1c = local_1c + 1;
    local_28 = local_28 + 8;
  } while (local_1c < 8);
  return;
}


// Assembly code:
// 004973b0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0
// 004973b1: PUSH ESI
// 004973b2: PUSH EDI
// 004973b3: PUSH EBP
// 004973b4: SUB ESP,0x30
// 004973b7: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004973bb: MOV EBP,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 004973bf: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 004973c3: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004973c7: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004973cb: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 004973cf: FMUL float ptr [ESI + 0x28]
// 004973d2: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004973d6: FADD float ptr [ESI + 0x10]
// 004973d9: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004973dd: FXCH
// 004973df: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004973e2: FMUL float ptr [ESI + 0x2c]
// 004973e5: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x14] (READ)
// 004973e9: XOR EDX,EDX
// 004973eb: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004973ef: FADD float ptr [ESI + 0x14]
// 004973f2: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004973f6: FXCH
// 004973f8: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 004973fc: FMUL float ptr [ESI + 0x30]
// 004973ff: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00497403: FADD float ptr [ESI + 0x18]
// 00497406: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0049740a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 0049740e: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0049740e
//   XREF to: Stack[-0x28] (READ)
// 00497412: XOR EDI,EDI
// 00497414: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00497418: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0049741c: MOV EBX,dword ptr [EBP]
//   Label: LAB_0049741c
// 0049741f: TEST EBX,EBX
// 00497421: JZ 0x004974bf
//   XREF to: 004974bf (CONDITIONAL_JUMP)
// 00497427: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0049742b: LEA EAX,[EBX + EDX*0x1]
// 0049742e: CMP byte ptr [EAX],0x0
// 00497431: JZ 0x004974bf
//   XREF to: 004974bf (CONDITIONAL_JUMP)
// 00497437: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0049743b: XOR EBX,EBX
// 0049743d: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00497441: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00497441
//   XREF to: Stack[-0x18] (READ)
// 00497445: MOV EAX,dword ptr [EBP]
// 00497448: ADD EAX,ECX
// 0049744a: MOV AL,byte ptr [EAX]
// 0049744c: XOR EDX,EDX
// 0049744e: AND EAX,0xff
// 00497453: MOV DL,byte ptr [EBX + 0x6789f8]
//   XREF to: 006789f8 (READ)
//   XREF to: 006789f9 (READ)
// 00497459: TEST EAX,EDX
// 0049745b: JZ 0x004974b9
//   XREF to: 004974b9 (CONDITIONAL_JUMP)
// 0049745d: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00497461: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00497465: FMUL float ptr [ESI + 0x28]
// 00497468: FLD float ptr [0x00622b82]
//   XREF to: 00622b82 (READ)
// 0049746e: FXCH
// 00497470: FMUL ST1
// 00497472: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00497476: FADD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00497479: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0049747d: FXCH
// 0049747f: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (WRITE)
// 00497483: FMUL float ptr [ESI + 0x2c]
// 00497486: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0049748a: FMUL ST1
// 0049748c: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00497490: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00497494: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00497498: FXCH
// 0049749a: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 0049749e: FMUL float ptr [ESI + 0x30]
// 004974a1: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x34] (DATA)
// 004974a5: FMULP
// 004974a7: PUSH EAX
// 004974a8: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x38] (READ)
// 004974ac: PUSH ESI
// 004974ad: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 004974b1: CALL core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
//   XREF to: 00496e70 (UNCONDITIONAL_CALL)
// 004974b6: ADD ESP,0x8
// 004974b9: INC EBX
//   Label: LAB_004974b9
// 004974ba: CMP EBX,0x8
// 004974bd: JL 0x00497441
//   XREF to: 00497441 (CONDITIONAL_JUMP)
// 004974bf: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_004974bf
//   XREF to: Stack[-0x20] (READ)
// 004974c3: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 004974c7: INC EDI
// 004974c8: INC EAX
// 004974c9: INC EBX
// 004974ca: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004974ce: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004974d2: CMP EDI,0x8
// 004974d5: JL 0x0049741c
//   XREF to: 0049741c (CONDITIONAL_JUMP)
// 004974db: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004974df: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 004974e3: INC ECX
// 004974e4: ADD EDX,0x8
// 004974e7: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004974eb: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004974ef: CMP ECX,0x8
// 004974f2: JL 0x0049740e
//   XREF to: 0049740e (CONDITIONAL_JUMP)
// 004974f8: ADD ESP,0x30
// 004974fb: POP EBP
// 004974fc: POP EDI
// 004974fd: POP ESI
// 004974fe: POP EBX
// 004974ff: RET
