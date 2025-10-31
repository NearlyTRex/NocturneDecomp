// Name: core_dcube.cpp_CDemonCube_save_FUN_00457430
// Address: 00457430
// Address Range: [[00457430, 00457521]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_save_FUN_00457430(CDemonCube * this_ptr, FILE * file_handle)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50 (00494f50) at 00494ffc [UNCONDITIONAL_CALL]
// Function calls:
//   core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
//   crt_stdio.c_fwrite_FUN_005fdc00

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_save_FUN_00457430(CDemonCube *this_ptr,FILE *file_handle)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->min_bounds,1,0xc,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->max_bounds,1,0xc,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->vertex_count,1,4,file_handle);
  iVar1 = 0;
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->triangle_count,1,4,file_handle);
  if (0 < this_ptr->vertex_count) {
    iVar2 = 0;
    do {
      ptr = (void *)((int)&this_ptr->vertex_buffer->x + iVar2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
      crt_stdio_c_fwrite_FUN_005fdc00(ptr,1,0xc,file_handle);
    } while (iVar1 < this_ptr->vertex_count);
  }
  iVar1 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
                ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar2),
                 file_handle,this_ptr->vertex_buffer);
      iVar2 = iVar2 + 0x20;
    } while (iVar1 < this_ptr->triangle_count);
  }
  if (this_ptr->triangle_count == 0) {
    if (this_ptr->triangle_count == 0) {
      return;
    }
  }
  else {
    crt_stdio_c_fwrite_FUN_005fdc00
              (this_ptr->ground_type_memory,1,this_ptr->triangle_count,file_handle);
    if (this_ptr->triangle_count == 0) {
      return;
    }
  }
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr->voxel_buffer1,1,0x40,file_handle);
  return;
}


// Assembly code:
// 00457430: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_save_FUN_00457430
// 00457431: PUSH ESI
// 00457432: PUSH EDI
// 00457433: PUSH EBP
// 00457434: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00457438: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045743c: PUSH EBP
// 0045743d: PUSH 0xc
// 0045743f: PUSH 0x1
// 00457441: LEA EAX,[EBX + 0x8]
// 00457444: PUSH EAX
// 00457445: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045744a: ADD ESP,0x10
// 0045744d: PUSH EBP
// 0045744e: PUSH 0xc
// 00457450: PUSH 0x1
// 00457452: LEA EAX,[EBX + 0x14]
// 00457455: PUSH EAX
// 00457456: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045745b: ADD ESP,0x10
// 0045745e: PUSH EBP
// 0045745f: PUSH 0x4
// 00457461: PUSH 0x1
// 00457463: LEA EAX,[EBX + 0x20]
// 00457466: PUSH EAX
// 00457467: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045746c: ADD ESP,0x10
// 0045746f: PUSH EBP
// 00457470: PUSH 0x4
// 00457472: PUSH 0x1
// 00457474: LEA EAX,[EBX + 0x28]
// 00457477: PUSH EAX
// 00457478: XOR ESI,ESI
// 0045747a: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045747f: MOV EDX,dword ptr [EBX + 0x20]
// 00457482: ADD ESP,0x10
// 00457485: TEST EDX,EDX
// 00457487: JLE 0x004574b0
//   XREF to: 004574b0 (CONDITIONAL_JUMP)
// 00457489: XOR EDI,EDI
// 0045748b: PUSH EBP
//   Label: LAB_0045748b
// 0045748c: PUSH 0xc
// 0045748e: MOV EAX,dword ptr [EBX + 0x24]
// 00457491: PUSH 0x1
// 00457493: ADD EAX,EDI
// 00457495: PUSH EAX
// 00457496: INC ESI
// 00457497: ADD EDI,0xc
// 0045749a: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045749f: MOV ECX,dword ptr [EBX + 0x20]
// 004574a2: ADD ESP,0x10
// 004574a5: CMP ESI,ECX
// 004574a7: JL 0x0045748b
//   XREF to: 0045748b (CONDITIONAL_JUMP)
// 004574a9: LEA EAX,[EAX]
// 004574af: NOP
// 004574b0: MOV EDI,dword ptr [EBX + 0x28]
//   Label: LAB_004574b0
// 004574b3: XOR ESI,ESI
// 004574b5: TEST EDI,EDI
// 004574b7: JLE 0x004574e0
//   XREF to: 004574e0 (CONDITIONAL_JUMP)
// 004574b9: XOR EDI,EDI
// 004574bb: MOV EAX,dword ptr [EBX + 0x24]
//   Label: LAB_004574bb
// 004574be: PUSH EAX
// 004574bf: MOV EAX,dword ptr [EBX + 0x2c]
// 004574c2: PUSH EBP
// 004574c3: ADD EAX,EDI
// 004574c5: PUSH EAX
// 004574c6: INC ESI
// 004574c7: CALL core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
//   XREF to: 00455250 (UNCONDITIONAL_CALL)
// 004574cc: ADD EDI,0x20
// 004574cf: MOV EDX,dword ptr [EBX + 0x28]
// 004574d2: ADD ESP,0xc
// 004574d5: CMP ESI,EDX
// 004574d7: JL 0x004574bb
//   XREF to: 004574bb (CONDITIONAL_JUMP)
// 004574d9: LEA EAX,[EAX]
// 004574df: NOP
// 004574e0: MOV ECX,dword ptr [EBX + 0x28]
//   Label: LAB_004574e0
// 004574e3: TEST ECX,ECX
// 004574e5: JNZ 0x004574f2
//   XREF to: 004574f2 (CONDITIONAL_JUMP)
// 004574e7: CMP dword ptr [EBX + 0x28],0x0
// 004574eb: JNZ 0x0045750d
//   XREF to: 0045750d (CONDITIONAL_JUMP)
// 004574ed: POP EBP
// 004574ee: POP EDI
// 004574ef: POP ESI
// 004574f0: POP EBX
// 004574f1: RET
// 004574f2: PUSH EBP
//   Label: LAB_004574f2
// 004574f3: PUSH ECX
// 004574f4: PUSH 0x1
// 004574f6: MOV EDI,dword ptr [EBX + 0x30]
// 004574f9: PUSH EDI
// 004574fa: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004574ff: ADD ESP,0x10
// 00457502: CMP dword ptr [EBX + 0x28],0x0
// 00457506: JNZ 0x0045750d
//   XREF to: 0045750d (CONDITIONAL_JUMP)
// 00457508: POP EBP
// 00457509: POP EDI
// 0045750a: POP ESI
// 0045750b: POP EBX
// 0045750c: RET
// 0045750d: PUSH EBP
//   Label: LAB_0045750d
// 0045750e: PUSH 0x40
// 00457510: PUSH 0x1
// 00457512: MOV EDX,dword ptr [EBX]
// 00457514: PUSH EDX
// 00457515: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0045751a: ADD ESP,0x10
// 0045751d: POP EBP
// 0045751e: POP EDI
// 0045751f: POP ESI
// 00457520: POP EBX
// 00457521: RET
