// Name: engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
// Address: 00481dc0
// Address Range: [[00481dc0, 00481f15]]
// Convention: __cdecl
// Signature: void engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0(CFileFinder * finder, LPWIN32_FIND_DATAA find_data)
// Cross-references:
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 (00481cf0) at 00481d46 [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 (00481c70) at 00481cbf [UNCONDITIONAL_CALL]
// Globals:
//   FileTimeToLocalFileTime* PTR_FileTimeToLocalFileTime_00611540 = 00211d46
//   FileTimeToSystemTime* PTR_FileTimeToSystemTime_00611544 = 00211d60
//   TerminatedCString s_engine_dosio_c_00621617
//   TerminatedCString s_CFileFinder_convertStruc_00621629
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_string.c_strncpy_FUN_00600f40
//   crt_time.c_mktime_FUN_00600f80
//   FileTimeToLocalFileTime
//   FileTimeToSystemTime

#include "nocturne.h"

void __cdecl
engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0
          (CFileFinder *finder,LPWIN32_FIND_DATAA find_data)

{
  BOOL BVar1;
  uint uVar2;
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  ushort unaff_retaddr;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int local_18;
  int iStack_14;
  
  crt_memory_c_memset_FUN_005fde40(finder,0,0x100);
  crt_string_c_strncpy_FUN_00600f40(finder->filename,find_data->cFileName,0xff);
  finder->file_size = 0;
  if ((find_data->dwFileAttributes & 0x20) != 0) {
    *(byte *)&finder->file_size = (byte)finder->file_size | 1;
  }
  if ((find_data->dwFileAttributes & 2) != 0) {
    *(byte *)&finder->file_size = (byte)finder->file_size | 2;
  }
  if ((find_data->dwFileAttributes & 0x10) != 0) {
    *(byte *)&finder->file_size = (byte)finder->file_size | 4;
  }
  if ((find_data->dwFileAttributes & 1) != 0) {
    *(byte *)&finder->file_size = (byte)finder->file_size | 8;
  }
  if ((find_data->nFileSizeHigh != 0) || (0x7fffffff < find_data->nFileSizeLow)) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 0x2a7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFileFinder::convertStruct - file too big!");
  }
  finder->timestamp = find_data->nFileSizeLow;
  finder->attributes = 0;
  BVar1 = (*PTR_FileTimeToLocalFileTime_00611540)
                    (&find_data->ftLastWriteTime,(LPFILETIME)&stack0xfffffff4);
  if (BVar1 != 0) {
    BVar1 = (*PTR_FileTimeToSystemTime_00611544)
                      ((FILETIME *)&stack0x00000000,(LPSYSTEMTIME)&stack0xfffffff0);
    if (BVar1 != 0) {
      uStack_28 = (uint)find_data & 0xffff;
      uStack_24 = (uint)finder >> 0x10;
      uStack_20 = (uint)finder & 0xffff;
      uStack_1c = (uint)unaff_retaddr;
      local_18 = (unaff_EBX >> 0x10) - 1;
      iStack_14 = (unaff_EBX & 0xffff) - 0x76c;
      uVar2 = crt_time_c_mktime_FUN_00600f80((tm *)&uStack_28);
      finder->attributes = uVar2;
      return;
    }
  }
  return;
}


// Assembly code:
// 00481dc0: PUSH EBX
//   Label: engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0
// 00481dc1: PUSH ESI
// 00481dc2: PUSH EDI
// 00481dc3: PUSH EBP
// 00481dc4: SUB ESP,0x3c
// 00481dc7: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 00481dcb: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 00481dcf: PUSH 0x100
// 00481dd4: PUSH 0x0
// 00481dd6: PUSH EBX
// 00481dd7: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00481ddc: ADD ESP,0xc
// 00481ddf: PUSH 0xff
// 00481de4: MOV ESI,EDI
// 00481de6: LEA EAX,[EDI + 0x2c]
// 00481de9: PUSH EAX
// 00481dea: PUSH EBX
// 00481deb: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 00481df0: MOV dword ptr [EBX + 0x100],0x0
// 00481dfa: MOV AH,byte ptr [EDI]
// 00481dfc: ADD ESP,0xc
// 00481dff: TEST AH,0x20
// 00481e02: JNZ 0x00481e84
//   XREF to: 00481e84 (CONDITIONAL_JUMP)
// 00481e08: TEST byte ptr [ESI],0x2
//   Label: LAB_00481e08
// 00481e0b: JZ 0x00481e14
//   XREF to: 00481e14 (CONDITIONAL_JUMP)
// 00481e0d: OR byte ptr [EBX + 0x100],0x2
// 00481e14: TEST byte ptr [ESI],0x10
//   Label: LAB_00481e14
// 00481e17: JZ 0x00481e20
//   XREF to: 00481e20 (CONDITIONAL_JUMP)
// 00481e19: OR byte ptr [EBX + 0x100],0x4
// 00481e20: TEST byte ptr [ESI],0x1
//   Label: LAB_00481e20
// 00481e23: JZ 0x00481e2c
//   XREF to: 00481e2c (CONDITIONAL_JUMP)
// 00481e25: OR byte ptr [EBX + 0x100],0x8
// 00481e2c: CMP dword ptr [ESI + 0x1c],0x0
//   Label: LAB_00481e2c
// 00481e30: JZ 0x00481e90
//   XREF to: 00481e90 (CONDITIONAL_JUMP)
// 00481e32: MOV EDI,0x621617
//   Label: LAB_00481e32
//   XREF to: 00621617 (DATA)
// 00481e37: MOV EBP,0x2a7
// 00481e3c: PUSH 0x621629
//   XREF to: 00621629 (DATA)
// 00481e41: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00481e47: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00481e4d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00481e52: ADD ESP,0x4
// 00481e55: MOV EAX,dword ptr [ESI + 0x20]
//   Label: LAB_00481e55
// 00481e58: MOV dword ptr [EBX + 0x104],EAX
// 00481e5e: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x18] (DATA)
// 00481e62: PUSH EAX
// 00481e63: ADD ESI,0x14
// 00481e66: PUSH ESI
// 00481e67: MOV dword ptr [EBX + 0x108],0x0
// 00481e71: CALL dword ptr CS:[0x611540]
//   XREF to: EXTERNAL:0000005b (COMPUTED_CALL)
//   XREF to: 00611540 (READ)
// 00481e78: TEST EAX,EAX
// 00481e7a: JNZ 0x00481e9b
//   XREF to: 00481e9b (CONDITIONAL_JUMP)
// 00481e7c: ADD ESP,0x3c
//   Label: LAB_00481e7c
// 00481e7f: POP EBP
// 00481e80: POP EDI
// 00481e81: POP ESI
// 00481e82: POP EBX
// 00481e83: RET
// 00481e84: OR byte ptr [EBX + 0x100],0x1
//   Label: LAB_00481e84
// 00481e8b: JMP 0x00481e08
//   XREF to: 00481e08 (UNCONDITIONAL_JUMP)
// 00481e90: CMP dword ptr [ESI + 0x20],0x7fffffff
//   Label: LAB_00481e90
// 00481e97: JA 0x00481e32
//   XREF to: 00481e32 (CONDITIONAL_JUMP)
// 00481e99: JMP 0x00481e55
//   XREF to: 00481e55 (UNCONDITIONAL_JUMP)
// 00481e9b: LEA EAX,[ESP + 0x24]
//   Label: LAB_00481e9b
// 00481e9f: PUSH EAX
// 00481ea0: LEA EAX,[ESP + 0x38]
// 00481ea4: PUSH EAX
// 00481ea5: CALL dword ptr CS:[0x611544]
//   XREF to: EXTERNAL:0000005c (COMPUTED_CALL)
//   XREF to: 00611544 (READ)
// 00481eac: TEST EAX,EAX
// 00481eae: JZ 0x00481e7c
//   XREF to: 00481e7c (CONDITIONAL_JUMP)
// 00481eb0: XOR EAX,EAX
// 00481eb2: MOV AX,word ptr [ESP + 0x30]
// 00481eb7: MOV dword ptr [ESP],EAX
// 00481eba: XOR EAX,EAX
// 00481ebc: MOV AX,word ptr [ESP + 0x2e]
// 00481ec1: MOV dword ptr [ESP + 0x4],EAX
// 00481ec5: XOR EAX,EAX
// 00481ec7: MOV AX,word ptr [ESP + 0x2c]
// 00481ecc: MOV dword ptr [ESP + 0x8],EAX
// 00481ed0: XOR EAX,EAX
// 00481ed2: MOV AX,word ptr [ESP + 0x2a]
// 00481ed7: MOV dword ptr [ESP + 0xc],EAX
// 00481edb: XOR EAX,EAX
// 00481edd: MOV AX,word ptr [ESP + 0x26]
// 00481ee2: DEC EAX
// 00481ee3: MOV dword ptr [ESP + 0x10],EAX
// 00481ee7: XOR EAX,EAX
// 00481ee9: MOV AX,word ptr [ESP + 0x24]
// 00481eee: SUB EAX,0x76c
// 00481ef3: MOV dword ptr [ESP + 0x14],EAX
// 00481ef7: XOR EAX,EAX
// 00481ef9: MOV dword ptr [ESP + 0x20],EAX
// 00481efd: MOV EAX,ESP
// 00481eff: PUSH EAX
// 00481f00: CALL crt_time.c_mktime_FUN_00600f80
//   XREF to: 00600f80 (UNCONDITIONAL_CALL)
// 00481f05: ADD ESP,0x4
// 00481f08: MOV dword ptr [EBX + 0x108],EAX
// 00481f0e: ADD ESP,0x3c
// 00481f11: POP EBP
// 00481f12: POP EDI
// 00481f13: POP ESI
// 00481f14: POP EBX
// 00481f15: RET
