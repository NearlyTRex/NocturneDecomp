// Name: core_dcube.cpp_CDemonCube_load_FUN_00457530
// Address: 00457530
// Address Range: [[00457530, 0045762d]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_load_FUN_00457530(CDemonCube * this_ptr, FILE * file_handle)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 004948f2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
//   core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
//   crt_stdio.c_fread_FUN_005fd990

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_load_FUN_00457530(CDemonCube *this_ptr,FILE *file_handle)

{
  int iVar1;
  SVoxelGrid *pSVar2;
  int iVar3;
  SVoxelGrid *pSVar4;
  byte bVar5;
  
  bVar5 = 0;
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->min_bounds,1,0xc,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->max_bounds,1,0xc,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex_count,1,4,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->triangle_count,1,4,file_handle);
  if (this_ptr->triangle_count != 0) {
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
  }
  crt_stdio_c_fread_FUN_005fd990(this_ptr->vertex_buffer,this_ptr->vertex_count,0xc,file_handle);
  iVar1 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar3 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
                ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar3),
                 file_handle,this_ptr->vertex_buffer);
      iVar3 = iVar3 + 0x20;
    } while (iVar1 < this_ptr->triangle_count);
  }
  if (this_ptr->triangle_count != 0) {
    crt_stdio_c_fread_FUN_005fd990
              (this_ptr->ground_type_memory,1,this_ptr->triangle_count,file_handle);
  }
  if (this_ptr->triangle_count != 0) {
    crt_stdio_c_fread_FUN_005fd990(this_ptr->voxel_buffer1,1,0x40,file_handle);
    pSVar2 = this_ptr->voxel_buffer1;
    pSVar4 = this_ptr->voxel_buffer2;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pSVar4->voxels[0] = *(undefined4 *)pSVar2->voxels[0];
      pSVar2 = (SVoxelGrid *)((int)pSVar2 + (uint)bVar5 * -8 + 4);
      pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar4->voxels[0][0] = pSVar2->voxels[0][0];
      pSVar2 = (SVoxelGrid *)((int)pSVar2 + (uint)bVar5 * -2 + 1);
      pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar5 * -2 + 1);
    }
    return;
  }
  return;
}


// Assembly code:
// 00457530: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_load_FUN_00457530
// 00457531: PUSH ESI
// 00457532: PUSH EDI
// 00457533: PUSH EBP
// 00457534: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00457538: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045753c: PUSH EBP
// 0045753d: PUSH 0xc
// 0045753f: PUSH 0x1
// 00457541: LEA EAX,[ESI + 0x8]
// 00457544: PUSH EAX
// 00457545: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045754a: ADD ESP,0x10
// 0045754d: PUSH EBP
// 0045754e: PUSH 0xc
// 00457550: PUSH 0x1
// 00457552: LEA EAX,[ESI + 0x14]
// 00457555: PUSH EAX
// 00457556: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045755b: ADD ESP,0x10
// 0045755e: PUSH EBP
// 0045755f: PUSH 0x4
// 00457561: PUSH 0x1
// 00457563: LEA EAX,[ESI + 0x20]
// 00457566: PUSH EAX
// 00457567: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045756c: ADD ESP,0x10
// 0045756f: PUSH EBP
// 00457570: PUSH 0x4
// 00457572: PUSH 0x1
// 00457574: LEA EAX,[ESI + 0x28]
// 00457577: PUSH EAX
// 00457578: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045757d: MOV EDX,dword ptr [ESI + 0x28]
// 00457580: ADD ESP,0x10
// 00457583: TEST EDX,EDX
// 00457585: JNZ 0x004575f2
//   XREF to: 004575f2 (CONDITIONAL_JUMP)
// 00457587: PUSH EBP
//   Label: LAB_00457587
// 00457588: PUSH 0xc
// 0045758a: MOV ECX,dword ptr [ESI + 0x20]
// 0045758d: PUSH ECX
// 0045758e: MOV EBX,dword ptr [ESI + 0x24]
// 00457591: PUSH EBX
// 00457592: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00457597: ADD ESP,0x10
// 0045759a: MOV EDI,dword ptr [ESI + 0x28]
// 0045759d: XOR EBX,EBX
// 0045759f: TEST EDI,EDI
// 004575a1: JLE 0x004575d0
//   XREF to: 004575d0 (CONDITIONAL_JUMP)
// 004575a3: XOR EDI,EDI
// 004575a5: MOV EAX,dword ptr [ESI + 0x24]
//   Label: LAB_004575a5
// 004575a8: PUSH EAX
// 004575a9: MOV EAX,dword ptr [ESI + 0x2c]
// 004575ac: PUSH EBP
// 004575ad: ADD EAX,EDI
// 004575af: PUSH EAX
// 004575b0: INC EBX
// 004575b1: CALL core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
//   XREF to: 004551d0 (UNCONDITIONAL_CALL)
// 004575b6: ADD EDI,0x20
// 004575b9: MOV EDX,dword ptr [ESI + 0x28]
// 004575bc: ADD ESP,0xc
// 004575bf: CMP EBX,EDX
// 004575c1: JL 0x004575a5
//   XREF to: 004575a5 (CONDITIONAL_JUMP)
// 004575c3: LEA EAX,[EAX]
// 004575c9: LEA EDX,[EDX]
// 004575cf: NOP
// 004575d0: MOV ECX,dword ptr [ESI + 0x28]
//   Label: LAB_004575d0
// 004575d3: TEST ECX,ECX
// 004575d5: JZ 0x004575e7
//   XREF to: 004575e7 (CONDITIONAL_JUMP)
// 004575d7: PUSH EBP
// 004575d8: PUSH ECX
// 004575d9: PUSH 0x1
// 004575db: MOV EDI,dword ptr [ESI + 0x30]
// 004575de: PUSH EDI
// 004575df: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004575e4: ADD ESP,0x10
// 004575e7: CMP dword ptr [ESI + 0x28],0x0
//   Label: LAB_004575e7
// 004575eb: JNZ 0x004575fd
//   XREF to: 004575fd (CONDITIONAL_JUMP)
// 004575ed: POP EBP
// 004575ee: POP EDI
// 004575ef: POP ESI
// 004575f0: POP EBX
// 004575f1: RET
// 004575f2: PUSH ESI
//   Label: LAB_004575f2
// 004575f3: CALL core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
//   XREF to: 00456840 (UNCONDITIONAL_CALL)
// 004575f8: ADD ESP,0x4
// 004575fb: JMP 0x00457587
//   XREF to: 00457587 (UNCONDITIONAL_JUMP)
// 004575fd: PUSH EBP
//   Label: LAB_004575fd
// 004575fe: PUSH 0x40
// 00457600: PUSH 0x1
// 00457602: MOV EDX,dword ptr [ESI]
// 00457604: PUSH EDX
// 00457605: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0045760a: MOV ECX,0x40
// 0045760f: ADD ESP,0x10
// 00457612: MOV EAX,dword ptr [ESI]
// 00457614: MOV EDI,dword ptr [ESI + 0x4]
// 00457617: MOV ESI,EAX
// 00457619: PUSH EDI
// 0045761a: MOV EAX,ECX
// 0045761c: SHR ECX,0x2
// 0045761f: MOVSD.REP ES:EDI,ESI
// 00457621: MOV CL,AL
// 00457623: AND CL,0x3
// 00457626: MOVSB.REP ES:EDI,ESI
// 00457628: POP EDI
// 00457629: POP EBP
// 0045762a: POP EDI
// 0045762b: POP ESI
// 0045762c: POP EBX
// 0045762d: RET
