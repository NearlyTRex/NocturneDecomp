// Name: engine_dosio.c_getFullPath_FUN_004820c0
// Address: 004820c0
// Address Range: [[004820c0, 00482103]]
// Convention: __cdecl
// Signature: int engine_dosio.c_getFullPath_FUN_004820c0(char * output_path, char * input_path)
// Cross-references:
//   engine_dosio.c_findFileNormally_FUN_004817c0 (004817c0) at 004817e7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 (004ba6c0) at 004ba6e1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3b27 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_realpath_FUN_00601140

#include "nocturne.h"

int __cdecl engine_dosio_c_getFullPath_FUN_004820c0(char *output_path,char *input_path)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = crt_io_c_realpath_FUN_00601140(output_path,input_path,0x100);
  if (pcVar2 == output_path) {
    return 1;
  }
  do {
    cVar1 = *input_path;
    *output_path = cVar1;
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = input_path[1];
    input_path = input_path + 2;
    output_path[1] = cVar1;
    output_path = output_path + 2;
  } while (cVar1 != '\0');
  return 0;
}


// Assembly code:
// 004820c0: PUSH ESI
//   Label: engine_dosio.c_getFullPath_FUN_004820c0
// 004820c1: PUSH EDI
// 004820c2: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004820c6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004820ca: PUSH 0x100
// 004820cf: PUSH ESI
// 004820d0: PUSH EDI
// 004820d1: CALL crt_io.c_realpath_FUN_00601140
//   XREF to: 00601140 (UNCONDITIONAL_CALL)
// 004820d6: ADD ESP,0xc
// 004820d9: CMP EAX,EDI
// 004820db: JNZ 0x004820e5
//   XREF to: 004820e5 (CONDITIONAL_JUMP)
// 004820dd: MOV EAX,0x1
// 004820e2: POP EDI
// 004820e3: POP ESI
// 004820e4: RET
// 004820e5: PUSH EDI
//   Label: LAB_004820e5
// 004820e6: MOV AL,byte ptr [ESI]
//   Label: LAB_004820e6
// 004820e8: MOV byte ptr [EDI],AL
// 004820ea: CMP AL,0x0
// 004820ec: JZ 0x004820fe
//   XREF to: 004820fe (CONDITIONAL_JUMP)
// 004820ee: MOV AL,byte ptr [ESI + 0x1]
// 004820f1: ADD ESI,0x2
// 004820f4: MOV byte ptr [EDI + 0x1],AL
// 004820f7: ADD EDI,0x2
// 004820fa: CMP AL,0x0
// 004820fc: JNZ 0x004820e6
//   XREF to: 004820e6 (CONDITIONAL_JUMP)
// 004820fe: POP EDI
//   Label: LAB_004820fe
// 004820ff: XOR EAX,EAX
// 00482101: POP EDI
// 00482102: POP ESI
// 00482103: RET
