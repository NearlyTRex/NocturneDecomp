// Name: crt_fstream.cpp_filebuf_open_FUN_00608c15
// Address: 00608c15
// Address Range: [[00608c15, 00608cd0]]
// Convention: __cdecl
// Signature: int crt_fstream.cpp_filebuf_open_FUN_00608c15(filebuf * this_ptr, char * filename, int mode, int permissions)
// Cross-references:
//   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 (00606456) at 006064cb [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_openFile_FUN_00600e85 (00600e85) at 00600eab [UNCONDITIONAL_CALL]
// Function calls:
//   crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340

#include "nocturne.h"

int __cdecl
crt_fstream_cpp_filebuf_open_FUN_00608c15(filebuf *this_ptr,char *filename,int mode,int permissions)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  if (this_ptr->__file_handle == -1) {
    if ((mode & 8U) != 0) {
      mode = mode | 2;
    }
    if (((mode & 2U) != 0) && ((mode & 0xdU) == 0)) {
      mode = mode | 0x10;
    }
    if ((((mode & 0x100U) == 0) || ((mode & 0x80U) == 0)) &&
       (((mode & 0x40U) == 0 || ((mode & 0x20U) == 0)))) {
      iVar1 = crt_fstream_cpp_convertModesAndOpenFile_FUN_0060c340(filename,&mode,permissions);
      this_ptr->__file_handle = iVar1;
      if (-1 < iVar1) {
        this_ptr->__file_mode = permissions;
        this_ptr->__attached = this_ptr->__attached & 0xfe;
        if ((permissions & 4U) != 0) {
          (*this_ptr->__vtable->seekoff)(&this_ptr->streambuf,0,2,permissions);
        }
        return (int)this_ptr;
      }
      this_ptr->__file_handle = -1;
    }
  }
  return 0;
}


// Assembly code:
// 00608c15: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_open_FUN_00608c15
// 00608c16: PUSH ESI
// 00608c17: PUSH EBP
// 00608c18: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00608c1c: CMP dword ptr [EBX + 0x2c],-0x1
// 00608c20: JNZ 0x00608cb4
//   XREF to: 00608cb4 (CONDITIONAL_JUMP)
// 00608c26: MOV AH,byte ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00608c2a: TEST AH,0x8
// 00608c2d: JNZ 0x00608cba
//   XREF to: 00608cba (CONDITIONAL_JUMP)
// 00608c33: MOV DH,byte ptr [ESP + 0x18]
//   Label: LAB_00608c33
//   XREF to: Stack[0xc] (READ)
// 00608c37: TEST DH,0x2
// 00608c3a: JZ 0x00608c4a
//   XREF to: 00608c4a (CONDITIONAL_JUMP)
// 00608c3c: TEST DH,0xd
// 00608c3f: JNZ 0x00608c4a
//   XREF to: 00608c4a (CONDITIONAL_JUMP)
// 00608c41: MOV CH,DH
// 00608c43: OR CH,0x10
// 00608c46: MOV byte ptr [ESP + 0x18],CH
//   XREF to: Stack[0xc] (WRITE)
// 00608c4a: TEST byte ptr [ESP + 0x19],0x1
//   Label: LAB_00608c4a
//   XREF to: Stack[0xd] (READ)
// 00608c4f: JZ 0x00608c58
//   XREF to: 00608c58 (CONDITIONAL_JUMP)
// 00608c51: TEST byte ptr [ESP + 0x18],0x80
//   XREF to: Stack[0xc] (READ)
// 00608c56: JNZ 0x00608cb4
//   XREF to: 00608cb4 (CONDITIONAL_JUMP)
// 00608c58: MOV DL,byte ptr [ESP + 0x18]
//   Label: LAB_00608c58
//   XREF to: Stack[0xc] (READ)
// 00608c5c: TEST DL,0x40
// 00608c5f: JZ 0x00608c66
//   XREF to: 00608c66 (CONDITIONAL_JUMP)
// 00608c61: TEST DL,0x20
// 00608c64: JNZ 0x00608cb4
//   XREF to: 00608cb4 (CONDITIONAL_JUMP)
// 00608c66: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_00608c66
//   XREF to: Stack[0x10] (READ)
// 00608c6a: PUSH ECX
// 00608c6b: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[0xc] (DATA)
// 00608c6f: PUSH EAX
// 00608c70: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00608c74: PUSH ESI
// 00608c75: CALL crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340
//   XREF to: 0060c340 (UNCONDITIONAL_CALL)
// 00608c7a: ADD ESP,0xc
// 00608c7d: MOV dword ptr [EBX + 0x2c],EAX
// 00608c80: TEST EAX,EAX
// 00608c82: JL 0x00608cc8
//   XREF to: 00608cc8 (CONDITIONAL_JUMP)
// 00608c84: MOV CL,byte ptr [EBX + 0x39]
// 00608c87: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00608c8b: AND CL,0xfe
// 00608c8e: MOV dword ptr [EBX + 0x30],EAX
// 00608c91: MOV byte ptr [EBX + 0x39],CL
// 00608c94: TEST byte ptr [ESP + 0x18],0x4
//   XREF to: Stack[0xc] (READ)
// 00608c99: JZ 0x00608cae
//   XREF to: 00608cae (CONDITIONAL_JUMP)
// 00608c9b: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00608c9f: PUSH EBP
// 00608ca0: PUSH 0x2
// 00608ca2: PUSH 0x0
// 00608ca4: MOV EAX,dword ptr [EBX + 0x28]
// 00608ca7: PUSH EBX
// 00608ca8: CALL dword ptr [EAX + 0x18]
// 00608cab: ADD ESP,0x10
// 00608cae: MOV EAX,EBX
//   Label: LAB_00608cae
// 00608cb0: POP EBP
// 00608cb1: POP ESI
// 00608cb2: POP EBX
// 00608cb3: RET
// 00608cb4: XOR EAX,EAX
//   Label: LAB_00608cb4
// 00608cb6: POP EBP
// 00608cb7: POP ESI
// 00608cb8: POP EBX
// 00608cb9: RET
// 00608cba: MOV DL,AH
//   Label: LAB_00608cba
// 00608cbc: OR DL,0x2
// 00608cbf: MOV byte ptr [ESP + 0x18],DL
//   XREF to: Stack[0xc] (WRITE)
// 00608cc3: JMP 0x00608c33
//   XREF to: 00608c33 (UNCONDITIONAL_JUMP)
// 00608cc8: MOV dword ptr [EBX + 0x2c],0xffffffff
//   Label: LAB_00608cc8
// 00608ccf: JMP 0x00608cb4
//   XREF to: 00608cb4 (UNCONDITIONAL_JUMP)
