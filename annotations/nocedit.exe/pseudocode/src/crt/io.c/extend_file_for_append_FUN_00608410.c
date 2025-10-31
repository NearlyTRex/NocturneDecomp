// Name: crt_io.c_extend_file_for_append_FUN_00608410
// Address: 00608410
// Address Range: [[00608410, 006084e8]]
// Convention: __cdecl
// Signature: int crt_io.c_extend_file_for_append_FUN_00608410(int fd)
// Cross-references:
//   crt_io.c_write_FUN_006084ec (006084ec) at 006085a3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_getFileTypeFlags_FUN_006088b0
//   crt_io.c_setFileDescriptorFlags_FUN_00608908
//   crt_io.c_write_FUN_006084ec
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_lseek_FUN_00606690

#include "nocturne.h"

int __cdecl crt_io_c_extend_file_for_append_FUN_00608410(int fd)

{
  int distance_to_move;
  int iVar1;
  uint uVar2;
  SIZE_T SVar3;
  BADSPACEBASE *in_ESP;
  SIZE_T count;
  undefined1 auStack_1f8 [492];
  
  distance_to_move = crt_stdio_c_lseek_FUN_00606690(fd,0,1);
  iVar1 = distance_to_move;
  if ((distance_to_move != -1) && (iVar1 = crt_stdio_c_lseek_FUN_00606690(fd,0,2), iVar1 != -1)) {
    if (iVar1 < distance_to_move) {
      SVar3 = distance_to_move - iVar1;
      uVar2 = crt_io_c_getFileTypeFlags_FUN_006088b0(fd);
      crt_io_c_setFileDescriptorFlags_FUN_00608908(fd,uVar2 & 0xffff7fff);
      if (0 < (int)SVar3) {
        crt_memory_c_memset_FUN_005fde40(&stack0xfffffe04,0,0x200);
        do {
          count = SVar3;
          if (0x200 < (int)SVar3) {
            count = 0x200;
          }
          iVar1 = crt_io_c_write_FUN_006084ec(fd,auStack_1f8,count);
          if (iVar1 < 0) {
            return iVar1;
          }
          SVar3 = SVar3 - count;
        } while (SVar3 != 0);
      }
    }
    else {
      iVar1 = crt_stdio_c_lseek_FUN_00606690(fd,distance_to_move,0);
      uVar2 = crt_io_c_getFileTypeFlags_FUN_006088b0(fd);
      crt_io_c_setFileDescriptorFlags_FUN_00608908(fd,uVar2 & 0xffff7fff);
      if (iVar1 == -1) {
        return -1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


// Assembly code:
// 00608410: PUSH EBX
//   Label: crt_io.c_extend_file_for_append_FUN_00608410
// 00608411: PUSH ESI
// 00608412: PUSH EDI
// 00608413: SUB ESP,0x200
// 00608419: MOV EDI,dword ptr [ESP + 0x210]
//   XREF to: Stack[0x4] (READ)
// 00608420: PUSH 0x1
// 00608422: PUSH 0x0
// 00608424: PUSH EDI
// 00608425: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 0060842a: MOV EBX,EAX
// 0060842c: ADD ESP,0xc
// 0060842f: CMP EAX,-0x1
// 00608432: JZ 0x006084df
//   XREF to: 006084df (CONDITIONAL_JUMP)
// 00608438: PUSH 0x2
// 0060843a: PUSH 0x0
// 0060843c: PUSH EDI
// 0060843d: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 00608442: ADD ESP,0xc
// 00608445: CMP EAX,-0x1
// 00608448: JZ 0x006084df
//   XREF to: 006084df (CONDITIONAL_JUMP)
// 0060844e: CMP EBX,EAX
// 00608450: JLE 0x006084b0
//   XREF to: 006084b0 (CONDITIONAL_JUMP)
// 00608452: PUSH EDI
// 00608453: SUB EBX,EAX
// 00608455: CALL crt_io.c_getFileTypeFlags_FUN_006088b0
//   XREF to: 006088b0 (UNCONDITIONAL_CALL)
// 0060845a: ADD ESP,0x4
// 0060845d: AND AH,0x7f
// 00608460: PUSH EAX
// 00608461: PUSH EDI
// 00608462: CALL crt_io.c_setFileDescriptorFlags_FUN_00608908
//   XREF to: 00608908 (UNCONDITIONAL_CALL)
// 00608467: ADD ESP,0x8
// 0060846a: TEST EBX,EBX
// 0060846c: JLE 0x006084dd
//   XREF to: 006084dd (CONDITIONAL_JUMP)
// 00608472: PUSH 0x200
// 00608477: PUSH 0x0
// 00608479: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x20c] (DATA)
// 0060847d: PUSH EAX
// 0060847e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00608483: ADD ESP,0xc
// 00608486: CMP EBX,0x200
//   Label: LAB_00608486
// 0060848c: JLE 0x00608495
//   XREF to: 00608495 (CONDITIONAL_JUMP)
// 0060848e: MOV ESI,0x200
// 00608493: JMP 0x00608497
//   XREF to: 00608497 (UNCONDITIONAL_JUMP)
// 00608495: MOV ESI,EBX
//   Label: LAB_00608495
// 00608497: PUSH ESI
//   Label: LAB_00608497
// 00608498: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20c] (DATA)
// 0060849c: PUSH EAX
// 0060849d: PUSH EDI
// 0060849e: CALL crt_io.c_write_FUN_006084ec
//   XREF to: 006084ec (UNCONDITIONAL_CALL)
// 006084a3: ADD ESP,0xc
// 006084a6: TEST EAX,EAX
// 006084a8: JL 0x006084df
//   XREF to: 006084df (CONDITIONAL_JUMP)
// 006084aa: SUB EBX,ESI
// 006084ac: JNZ 0x00608486
//   XREF to: 00608486 (CONDITIONAL_JUMP)
// 006084ae: JMP 0x006084dd
//   XREF to: 006084dd (UNCONDITIONAL_JUMP)
// 006084b0: PUSH 0x0
//   Label: LAB_006084b0
// 006084b2: PUSH EBX
// 006084b3: PUSH EDI
// 006084b4: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 006084b9: ADD ESP,0xc
// 006084bc: PUSH EDI
// 006084bd: MOV EBX,EAX
// 006084bf: CALL crt_io.c_getFileTypeFlags_FUN_006088b0
//   XREF to: 006088b0 (UNCONDITIONAL_CALL)
// 006084c4: ADD ESP,0x4
// 006084c7: AND AH,0x7f
// 006084ca: PUSH EAX
// 006084cb: PUSH EDI
// 006084cc: CALL crt_io.c_setFileDescriptorFlags_FUN_00608908
//   XREF to: 00608908 (UNCONDITIONAL_CALL)
// 006084d1: ADD ESP,0x8
// 006084d4: CMP EBX,-0x1
// 006084d7: JNZ 0x006084dd
//   XREF to: 006084dd (CONDITIONAL_JUMP)
// 006084d9: MOV EAX,EBX
// 006084db: JMP 0x006084df
//   XREF to: 006084df (UNCONDITIONAL_JUMP)
// 006084dd: XOR EAX,EAX
//   Label: LAB_006084dd
// 006084df: ADD ESP,0x200
//   Label: LAB_006084df
// 006084e5: POP EDI
// 006084e6: POP ESI
// 006084e7: POP EBX
// 006084e8: RET
