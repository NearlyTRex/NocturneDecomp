// Name: crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340
// Address: 0060c340
// Address Range: [[0060c340, 0060c431]]
// Convention: __cdecl
// Signature: int crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340(char * filename, int * iostream_mode, int permissions)
// Cross-references:
//   crt_fstream.cpp_filebuf_open_FUN_00608c15 (00608c15) at 00608c75 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_stat_FUN_00607e64
//   crt_stdio.c_CreateFileVariadic_FUN_00609074

#include "nocturne.h"

int __cdecl
crt_fstream_cpp_convertModesAndOpenFile_FUN_0060c340
          (char *filename,int *iostream_mode,int permissions)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  uint in_stack_00000010;
  stat sStack_50;
  
  uVar2 = *iostream_mode;
  if ((uVar2 & 3) == 3) {
    uVar3 = 0x22;
  }
  else if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      return -1;
    }
    uVar3 = 0x21;
  }
  else {
    uVar3 = 0;
  }
  if ((uVar2 & 8) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  if ((uVar2 & 0x10) != 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((uVar2 & 0x20) != 0) {
    uVar3 = uVar3 & 0xffffffdf;
  }
  if ((uVar2 & 0x100) == 0) {
    uVar3 = uVar3 | 0x100;
    *(byte *)iostream_mode = (byte)*iostream_mode | 0x80;
  }
  else {
    uVar3 = uVar3 | 0x200;
  }
  if ((((uVar2 & 0x40) != 0) && ((uVar3 | 0x20) != 0)) &&
     (iVar1 = crt_io_c_stat_FUN_00607e64(filename,&sStack_50), iVar1 != -1)) {
    return -1;
  }
  uVar2 = in_stack_00000010 & 0x7000;
  iVar1 = 0;
  if (uVar2 < 0x2000) {
    if (uVar2 == 0x1000) {
      iVar1 = 0x20;
    }
  }
  else if (uVar2 < 0x2001) {
    iVar1 = 0x30;
  }
  else if (0x2fff < uVar2) {
    if (uVar2 < 0x3001) {
      iVar1 = 0x40;
    }
    else if (uVar2 == 0x4000) {
      iVar1 = 0x10;
    }
  }
  in_stack_00000010 = in_stack_00000010 & 0xffff8fff;
  sStack_50.st_dev = in_stack_00000010;
  iVar1 = crt_stdio_c_CreateFileVariadic_FUN_00609074((char *)iostream_mode,uVar3,iVar1);
  return iVar1;
}


// Assembly code:
// 0060c340: PUSH EBX
//   Label: crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340
// 0060c341: PUSH ESI
// 0060c342: SUB ESP,0x48
// 0060c345: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0060c349: MOV EAX,dword ptr [ECX]
// 0060c34b: MOV EDX,EAX
// 0060c34d: AND EDX,0x3
// 0060c350: CMP EDX,0x3
// 0060c353: JNZ 0x0060c35c
//   XREF to: 0060c35c (CONDITIONAL_JUMP)
// 0060c355: MOV EBX,0x22
// 0060c35a: JMP 0x0060c377
//   XREF to: 0060c377 (UNCONDITIONAL_JUMP)
// 0060c35c: TEST AL,0x1
//   Label: LAB_0060c35c
// 0060c35e: JZ 0x0060c364
//   XREF to: 0060c364 (CONDITIONAL_JUMP)
// 0060c360: XOR EBX,EBX
// 0060c362: JMP 0x0060c377
//   XREF to: 0060c377 (UNCONDITIONAL_JUMP)
// 0060c364: TEST AL,0x2
//   Label: LAB_0060c364
// 0060c366: JNZ 0x0060c372
//   XREF to: 0060c372 (CONDITIONAL_JUMP)
// 0060c368: MOV EAX,0xffffffff
// 0060c36d: JMP 0x0060c42c
//   XREF to: 0060c42c (UNCONDITIONAL_JUMP)
// 0060c372: MOV EBX,0x21
//   Label: LAB_0060c372
// 0060c377: TEST AL,0x8
//   Label: LAB_0060c377
// 0060c379: JZ 0x0060c37e
//   XREF to: 0060c37e (CONDITIONAL_JUMP)
// 0060c37b: OR BL,0x10
// 0060c37e: TEST AL,0x10
//   Label: LAB_0060c37e
// 0060c380: JZ 0x0060c385
//   XREF to: 0060c385 (CONDITIONAL_JUMP)
// 0060c382: OR BL,0x40
// 0060c385: TEST AL,0x20
//   Label: LAB_0060c385
// 0060c387: JZ 0x0060c38c
//   XREF to: 0060c38c (CONDITIONAL_JUMP)
// 0060c389: AND BL,0xdf
// 0060c38c: TEST AH,0x1
//   Label: LAB_0060c38c
// 0060c38f: JZ 0x0060c396
//   XREF to: 0060c396 (CONDITIONAL_JUMP)
// 0060c391: OR BH,0x2
// 0060c394: JMP 0x0060c3a0
//   XREF to: 0060c3a0 (UNCONDITIONAL_JUMP)
// 0060c396: MOV DL,byte ptr [ECX]
//   Label: LAB_0060c396
// 0060c398: OR DL,0x80
// 0060c39b: OR BH,0x1
// 0060c39e: MOV byte ptr [ECX],DL
// 0060c3a0: TEST AL,0x40
//   Label: LAB_0060c3a0
// 0060c3a2: JZ 0x0060c3cc
//   XREF to: 0060c3cc (CONDITIONAL_JUMP)
// 0060c3a4: MOV EAX,EBX
// 0060c3a6: OR AL,0x20
// 0060c3a8: TEST EAX,EAX
// 0060c3aa: JZ 0x0060c3cc
//   XREF to: 0060c3cc (CONDITIONAL_JUMP)
// 0060c3ac: MOV EAX,ESP
// 0060c3ae: PUSH EAX
// 0060c3af: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0060c3b3: PUSH EDX
// 0060c3b4: CALL crt_io.c_stat_FUN_00607e64
//   XREF to: 00607e64 (UNCONDITIONAL_CALL)
// 0060c3b9: ADD ESP,0x8
// 0060c3bc: CMP EAX,-0x1
// 0060c3bf: JZ 0x0060c3cc
//   XREF to: 0060c3cc (CONDITIONAL_JUMP)
// 0060c3c1: MOV EAX,0xffffffff
// 0060c3c6: ADD ESP,0x48
// 0060c3c9: POP ESI
// 0060c3ca: POP EBX
// 0060c3cb: RET
// 0060c3cc: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_0060c3cc
//   XREF to: Stack[0xc] (READ)
// 0060c3d0: AND EAX,0x7000
// 0060c3d5: XOR EDX,EDX
// 0060c3d7: CMP EAX,0x2000
// 0060c3dc: JC 0x0060c3f2
//   XREF to: 0060c3f2 (CONDITIONAL_JUMP)
// 0060c3de: JBE 0x0060c400
//   XREF to: 0060c400 (CONDITIONAL_JUMP)
// 0060c3e0: CMP EAX,0x3000
// 0060c3e5: JC 0x0060c413
//   XREF to: 0060c413 (CONDITIONAL_JUMP)
// 0060c3e7: JBE 0x0060c407
//   XREF to: 0060c407 (CONDITIONAL_JUMP)
// 0060c3e9: CMP EAX,0x4000
// 0060c3ee: JZ 0x0060c40e
//   XREF to: 0060c40e (CONDITIONAL_JUMP)
// 0060c3f0: JMP 0x0060c413
//   XREF to: 0060c413 (UNCONDITIONAL_JUMP)
// 0060c3f2: CMP EAX,0x1000
//   Label: LAB_0060c3f2
// 0060c3f7: JNZ 0x0060c413
//   XREF to: 0060c413 (CONDITIONAL_JUMP)
// 0060c3f9: MOV EDX,0x20
// 0060c3fe: JMP 0x0060c413
//   XREF to: 0060c413 (UNCONDITIONAL_JUMP)
// 0060c400: MOV EDX,0x30
//   Label: LAB_0060c400
// 0060c405: JMP 0x0060c413
//   XREF to: 0060c413 (UNCONDITIONAL_JUMP)
// 0060c407: MOV EDX,0x40
//   Label: LAB_0060c407
// 0060c40c: JMP 0x0060c413
//   XREF to: 0060c413 (UNCONDITIONAL_JUMP)
// 0060c40e: MOV EDX,0x10
//   Label: LAB_0060c40e
// 0060c413: AND byte ptr [ESP + 0x5d],0x8f
//   Label: LAB_0060c413
//   XREF to: Stack[0xd] (READ_WRITE)
// 0060c418: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0xc] (READ)
// 0060c41c: PUSH ECX
// 0060c41d: PUSH EDX
// 0060c41e: PUSH EBX
// 0060c41f: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0060c423: PUSH ESI
// 0060c424: CALL crt_stdio.c_CreateFileVariadic_FUN_00609074
//   XREF to: 00609074 (UNCONDITIONAL_CALL)
// 0060c429: ADD ESP,0x10
// 0060c42c: ADD ESP,0x48
//   Label: LAB_0060c42c
// 0060c42f: POP ESI
// 0060c430: POP EBX
// 0060c431: RET
