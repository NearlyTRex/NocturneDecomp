// Name: crt_io.c_convertFileInfo_FUN_00602264
// Address: 00602264
// Address Range: [[00602264, 006022f3]]
// Convention: __watcallStack
// Signature: void crt_io.c_convertFileInfo_FUN_00602264(LPWIN32_FIND_DATAA win32_data, find_t * dos_info)
// Cross-references:
//   crt_io.c_findFirstFileWrapper_FUN_006021f0 (006021f0) at 0060224f [UNCONDITIONAL_CALL]
//   crt_io.c_findNextFileWrapper_FUN_00602300 (00602300) at 00602366 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_time.c_filetime_to_time_t_FUN_00609da0

#include "nocturne.h"

void __watcallStack
crt_io_c_convertFileInfo_FUN_00602264(LPWIN32_FIND_DATAA win32_data,find_t *dos_info)

{
  char cVar1;
  time_t tVar2;
  CHAR *pCVar3;
  char *pcVar4;
  
  dos_info->attrib = '\0';
  dos_info->padding_0x1[0] = '\0';
  dos_info->padding_0x1[1] = '\0';
  dos_info->padding_0x1[2] = '\0';
  if ((win32_data->dwFileAttributes & 0x20) != 0) {
    dos_info->attrib = dos_info->attrib | 0x20;
  }
  if ((win32_data->dwFileAttributes & 0x10) != 0) {
    dos_info->attrib = dos_info->attrib | 0x10;
  }
  if ((win32_data->dwFileAttributes & 2) != 0) {
    dos_info->attrib = dos_info->attrib | 2;
  }
  if ((win32_data->dwFileAttributes & 1) != 0) {
    dos_info->attrib = dos_info->attrib | 1;
  }
  if ((win32_data->dwFileAttributes & 4) != 0) {
    dos_info->attrib = dos_info->attrib | 4;
  }
  tVar2 = crt_time_c_filetime_to_time_t_FUN_00609da0(&win32_data->ftCreationTime);
  dos_info->wr_time = tVar2;
  tVar2 = crt_time_c_filetime_to_time_t_FUN_00609da0(&win32_data->ftLastAccessTime);
  dos_info->cr_time = tVar2;
  pcVar4 = dos_info->name;
  tVar2 = crt_time_c_filetime_to_time_t_FUN_00609da0(&win32_data->ftLastWriteTime);
  dos_info->ac_time = tVar2;
  pCVar3 = win32_data->cFileName;
  dos_info->size = win32_data->nFileSizeLow;
  do {
    cVar1 = *pCVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pCVar3[1];
    pCVar3 = pCVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00602264: PUSH EBX
//   Label: crt_io.c_convertFileInfo_FUN_00602264
// 00602265: PUSH ESI
// 00602266: PUSH EDI
// 00602267: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060226b: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060226f: MOV dword ptr [EBX],0x0
// 00602275: TEST byte ptr [ESI],0x20
// 00602278: JZ 0x0060227d
//   XREF to: 0060227d (CONDITIONAL_JUMP)
// 0060227a: OR byte ptr [EBX],0x20
// 0060227d: TEST byte ptr [ESI],0x10
//   Label: LAB_0060227d
// 00602280: JZ 0x00602285
//   XREF to: 00602285 (CONDITIONAL_JUMP)
// 00602282: OR byte ptr [EBX],0x10
// 00602285: TEST byte ptr [ESI],0x2
//   Label: LAB_00602285
// 00602288: JZ 0x0060228d
//   XREF to: 0060228d (CONDITIONAL_JUMP)
// 0060228a: OR byte ptr [EBX],0x2
// 0060228d: TEST byte ptr [ESI],0x1
//   Label: LAB_0060228d
// 00602290: JZ 0x00602295
//   XREF to: 00602295 (CONDITIONAL_JUMP)
// 00602292: OR byte ptr [EBX],0x1
// 00602295: TEST byte ptr [ESI],0x4
//   Label: LAB_00602295
// 00602298: JZ 0x0060229d
//   XREF to: 0060229d (CONDITIONAL_JUMP)
// 0060229a: OR byte ptr [EBX],0x4
// 0060229d: LEA EAX,[ESI + 0x4]
//   Label: LAB_0060229d
// 006022a0: PUSH EAX
// 006022a1: CALL crt_time.c_filetime_to_time_t_FUN_00609da0
//   XREF to: 00609da0 (UNCONDITIONAL_CALL)
// 006022a6: ADD ESP,0x4
// 006022a9: MOV dword ptr [EBX + 0x4],EAX
// 006022ac: LEA EAX,[ESI + 0xc]
// 006022af: PUSH EAX
// 006022b0: CALL crt_time.c_filetime_to_time_t_FUN_00609da0
//   XREF to: 00609da0 (UNCONDITIONAL_CALL)
// 006022b5: ADD ESP,0x4
// 006022b8: MOV dword ptr [EBX + 0x8],EAX
// 006022bb: LEA EAX,[ESI + 0x14]
// 006022be: PUSH EAX
// 006022bf: LEA EDI,[EBX + 0x14]
// 006022c2: CALL crt_time.c_filetime_to_time_t_FUN_00609da0
//   XREF to: 00609da0 (UNCONDITIONAL_CALL)
// 006022c7: MOV dword ptr [EBX + 0xc],EAX
// 006022ca: ADD ESP,0x4
// 006022cd: MOV EAX,dword ptr [ESI + 0x20]
// 006022d0: ADD ESI,0x2c
// 006022d3: MOV dword ptr [EBX + 0x10],EAX
// 006022d6: PUSH EDI
// 006022d7: MOV AL,byte ptr [ESI]
//   Label: LAB_006022d7
// 006022d9: MOV byte ptr [EDI],AL
// 006022db: CMP AL,0x0
// 006022dd: JZ 0x006022ef
//   XREF to: 006022ef (CONDITIONAL_JUMP)
// 006022df: MOV AL,byte ptr [ESI + 0x1]
// 006022e2: ADD ESI,0x2
// 006022e5: MOV byte ptr [EDI + 0x1],AL
// 006022e8: ADD EDI,0x2
// 006022eb: CMP AL,0x0
// 006022ed: JNZ 0x006022d7
//   XREF to: 006022d7 (CONDITIONAL_JUMP)
// 006022ef: POP EDI
//   Label: LAB_006022ef
// 006022f0: POP EDI
// 006022f1: POP ESI
// 006022f2: POP EBX
// 006022f3: RET
