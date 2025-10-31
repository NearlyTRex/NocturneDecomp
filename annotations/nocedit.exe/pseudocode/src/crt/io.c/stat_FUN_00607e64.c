// Name: crt_io.c_stat_FUN_00607e64
// Address: 00607e64
// Address Range: [[00607e64, 0060815f]]
// Convention: __cdecl
// Signature: int crt_io.c_stat_FUN_00607e64(char * filename, stat * file_info)
// Cross-references:
//   crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340 (0060c340) at 0060c3b4 [UNCONDITIONAL_CALL]
//   crt_io.c_stat_thunk_00600c18 (00600c18) at 00600c18 [UNCONDITIONAL_JUMP]
// Globals:
//   FindClose* PTR_FindClose_00611548 = 00211d78
//   FindFirstFileA* PTR_FindFirstFileA_0061154c = 00211d84
//   TerminatedCString s_anon_0065906c
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_ctype.c_tolower_FUN_005feb30
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_analyze_file_type_FUN_00607d50
//   crt_io.c_chdir_FUN_006012a0
//   crt_io.c_getcwd_FUN_00608d20
//   crt_io.c_realpath_FUN_00601140
//   crt_memory.c_memset_FUN_005fde40
//   crt_string.c_mbtowc_next_FUN_00605a70
//   crt_string.c_strncpy_FUN_00600f40
//   crt_string.c_strpbrk_FUN_0060c190
//   crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
//   crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
//   FindClose
//   FindFirstFileA

#include "nocturne.h"

int __cdecl crt_io_c_stat_FUN_00607e64(char *filename,stat *file_info)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  HANDLE hFindFile;
  DWORD DVar5;
  uint uVar6;
  time_t tVar7;
  BADSPACEBASE *in_ESP;
  WORD in_stack_00000014;
  WORD in_stack_0000001c;
  WORD in_stack_00000020;
  WORD in_stack_00000024;
  WORD in_stack_00000028;
  WORD in_stack_0000002c;
  WORD in_stack_00000030;
  uint in_stack_fffffcc4;
  ulong uStack_320;
  FILETIME FStack_31c;
  char acStack_310 [28];
  char acStack_2f4 [212];
  char acStack_220 [4];
  char cStack_21c;
  char cStack_21b;
  char cStack_21a;
  char cStack_219;
  char acStack_120 [16];
  char acStack_110 [20];
  byte bStack_fc;
  
  bVar1 = false;
  if ((*filename == '\0') ||
     (pcVar2 = crt_string_c_strpbrk_FUN_0060c190(filename,"*?"), pcVar2 != (char *)0x0))
  {
    crt_errno_c_setErrno_FUN_00602790(1);
    iVar3 = -1;
  }
  else {
    crt_io_c_getcwd_FUN_00608d20(acStack_120,0x104);
    pcVar2 = crt_io_c_realpath_FUN_00601140(acStack_220,filename,0x104);
    if ((pcVar2 != (char *)0x0) &&
       (((((g_CharacterClassificationTable[(byte)(cStack_21c + 1)] & 0xc0U) != 0 &&
          (cStack_21b == ':')) && (cStack_21a == '\\')) && (cStack_219 == '\0')))) {
      bVar1 = true;
    }
    pcVar4 = crt_string_c_mbtowc_next_FUN_00605a70(filename);
    pcVar2 = filename;
    if (*pcVar4 == ':') {
      pcVar2 = filename + 2;
    }
    if ((((*pcVar2 == '\\') || (*pcVar2 == '/')) && (pcVar2[1] == '\0')) || (bVar1)) {
      iVar3 = crt_io_c_chdir_FUN_006012a0(filename);
      if (iVar3 != 0) {
        return -1;
      }
      crt_io_c_chdir_FUN_006012a0(acStack_110);
      crt_memory_c_memset_FUN_005fde40(&stack0xfffffcb8,0,0x13e);
    }
    else {
      hFindFile = (*PTR_FindFirstFileA_0061154c)(filename,(LPWIN32_FIND_DATAA)&stack0xfffffca8);
      if (hFindFile == (HANDLE)0xffffffff) {
        DVar5 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar5;
      }
      (*PTR_FindClose_00611548)(hFindFile);
    }
    pcVar2 = crt_string_c_mbtowc_next_FUN_00605a70(filename);
    if (*pcVar2 == ':') {
      bStack_fc = *filename;
    }
    iVar3 = crt_ctype_c_tolower_FUN_005feb30((uint)bStack_fc);
    file_info->st_dev = iVar3 + -0x61;
    iVar3 = file_info->st_dev + -1;
    file_info->st_dev = iVar3;
    file_info->st_rdev = iVar3;
    file_info->st_size = FStack_31c.dwLowDateTime;
    uVar6 = crt_io_c_analyze_file_type_FUN_00607d50(in_stack_fffffcc4,acStack_310);
    file_info->st_mode = (ushort)uVar6;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0
              ((FILETIME *)&stack0xfffffcdc,(WORD *)&stack0x00000010,&stack0x0000001c);
    tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(in_stack_00000014,in_stack_00000020);
    file_info->st_mtime = tVar7;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0
              ((FILETIME *)&stack0xfffffcd4,&stack0x00000020,&stack0x0000001c);
    if ((in_stack_00000024 == in_stack_0000001c) && (in_stack_00000020 == in_stack_00000028)) {
      tVar7 = file_info->st_mtime;
    }
    else {
      tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(in_stack_00000024,in_stack_00000020);
    }
    file_info->st_ctime = tVar7;
    crt_time_c_filetime_to_dos_datetime_FUN_00609cb0(&FStack_31c,&stack0x00000028,&stack0x00000024);
    if ((in_stack_0000002c == in_stack_00000024) && (in_stack_00000028 == in_stack_00000030)) {
      tVar7 = file_info->st_mtime;
    }
    else {
      tVar7 = crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(in_stack_0000002c,in_stack_00000028);
    }
    file_info->st_atime = tVar7;
    file_info->st_gid = 0;
    file_info->st_nlink = 1;
    file_info->st_uid = (int)file_info->st_gid;
    file_info->st_ino = (int)file_info->st_gid;
    file_info->st_archivedID = 0;
    file_info->st_attr = uStack_320;
    file_info->st_updatedID = 0;
    file_info->st_inheritedRightsMask = 0;
    file_info->st_originatingNameSpace = '\0';
    crt_string_c_strncpy_FUN_00600f40((char *)file_info->st_name,acStack_2f4,0xd);
    iVar3 = 0;
  }
  return iVar3;
}


// Assembly code:
// 00607e64: PUSH EBX
//   Label: crt_io.c_stat_FUN_00607e64
// 00607e65: PUSH ESI
// 00607e66: PUSH EDI
// 00607e67: PUSH EBP
// 00607e68: SUB ESP,0x358
// 00607e6e: MOV ESI,dword ptr [ESP + 0x36c]
//   XREF to: Stack[0x4] (READ)
// 00607e75: MOV EBX,dword ptr [ESP + 0x370]
//   XREF to: Stack[0x8] (READ)
// 00607e7c: MOV AH,byte ptr [ESI]
// 00607e7e: XOR EBP,EBP
// 00607e80: TEST AH,AH
// 00607e82: JZ 0x00607e96
//   XREF to: 00607e96 (CONDITIONAL_JUMP)
// 00607e84: PUSH 0x65906c
//   XREF to: 0065906c (DATA)
// 00607e89: PUSH ESI
// 00607e8a: CALL crt_string.c_strpbrk_FUN_0060c190
//   XREF to: 0060c190 (UNCONDITIONAL_CALL)
// 00607e8f: ADD ESP,0x8
// 00607e92: TEST EAX,EAX
// 00607e94: JZ 0x00607eaa
//   XREF to: 00607eaa (CONDITIONAL_JUMP)
// 00607e96: PUSH 0x1
//   Label: LAB_00607e96
// 00607e98: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00607e9d: MOV EAX,0xffffffff
// 00607ea2: ADD ESP,0x4
// 00607ea5: JMP 0x00608155
//   XREF to: 00608155 (UNCONDITIONAL_JUMP)
// 00607eaa: PUSH 0x104
//   Label: LAB_00607eaa
// 00607eaf: LEA EAX,[ESP + 0x248]
//   XREF to: Stack[-0x124] (DATA)
// 00607eb6: PUSH EAX
// 00607eb7: CALL crt_io.c_getcwd_FUN_00608d20
//   XREF to: 00608d20 (UNCONDITIONAL_CALL)
// 00607ebc: ADD ESP,0x8
// 00607ebf: PUSH 0x104
// 00607ec4: PUSH ESI
// 00607ec5: LEA EAX,[ESP + 0x148]
//   XREF to: Stack[-0x228] (DATA)
// 00607ecc: PUSH EAX
// 00607ecd: CALL crt_io.c_realpath_FUN_00601140
//   XREF to: 00601140 (UNCONDITIONAL_CALL)
// 00607ed2: ADD ESP,0xc
// 00607ed5: TEST EAX,EAX
// 00607ed7: JZ 0x00607f13
//   XREF to: 00607f13 (CONDITIONAL_JUMP)
// 00607ed9: MOV AL,byte ptr [ESP + 0x140]
//   XREF to: Stack[-0x228] (READ)
// 00607ee0: INC AL
// 00607ee2: AND EAX,0xff
// 00607ee7: TEST byte ptr [EAX + 0x6849c4],0xc0
//   XREF to: 006849c4 (DATA)
// 00607eee: JZ 0x00607f13
//   XREF to: 00607f13 (CONDITIONAL_JUMP)
// 00607ef0: CMP byte ptr [ESP + 0x141],0x3a
//   XREF to: Stack[-0x227] (READ)
// 00607ef8: JNZ 0x00607f13
//   XREF to: 00607f13 (CONDITIONAL_JUMP)
// 00607efa: CMP byte ptr [ESP + 0x142],0x5c
//   XREF to: Stack[-0x226] (READ)
// 00607f02: JNZ 0x00607f13
//   XREF to: 00607f13 (CONDITIONAL_JUMP)
// 00607f04: CMP byte ptr [ESP + 0x143],0x0
//   XREF to: Stack[-0x225] (READ)
// 00607f0c: JNZ 0x00607f13
//   XREF to: 00607f13 (CONDITIONAL_JUMP)
// 00607f0e: MOV EBP,0x1
// 00607f13: PUSH ESI
//   Label: LAB_00607f13
// 00607f14: MOV EDI,ESI
// 00607f16: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 00607f1b: MOV DL,byte ptr [EAX]
// 00607f1d: ADD ESP,0x4
// 00607f20: CMP DL,0x3a
// 00607f23: JNZ 0x00607f28
//   XREF to: 00607f28 (CONDITIONAL_JUMP)
// 00607f25: LEA EDI,[ESI + 0x2]
// 00607f28: MOV DH,byte ptr [EDI]
//   Label: LAB_00607f28
// 00607f2a: CMP DH,0x5c
// 00607f2d: JZ 0x00607f34
//   XREF to: 00607f34 (CONDITIONAL_JUMP)
// 00607f2f: CMP DH,0x2f
// 00607f32: JNZ 0x00607f3a
//   XREF to: 00607f3a (CONDITIONAL_JUMP)
// 00607f34: CMP byte ptr [EDI + 0x1],0x0
//   Label: LAB_00607f34
// 00607f38: JZ 0x00607f3e
//   XREF to: 00607f3e (CONDITIONAL_JUMP)
// 00607f3a: TEST EBP,EBP
//   Label: LAB_00607f3a
// 00607f3c: JZ 0x00607f89
//   XREF to: 00607f89 (CONDITIONAL_JUMP)
// 00607f3e: PUSH ESI
//   Label: LAB_00607f3e
// 00607f3f: CALL crt_io.c_chdir_FUN_006012a0
//   XREF to: 006012a0 (UNCONDITIONAL_CALL)
// 00607f44: ADD ESP,0x4
// 00607f47: TEST EAX,EAX
// 00607f49: JZ 0x00607f5b
//   XREF to: 00607f5b (CONDITIONAL_JUMP)
// 00607f4b: MOV EAX,0xffffffff
// 00607f50: ADD ESP,0x358
// 00607f56: POP EBP
// 00607f57: POP EDI
// 00607f58: POP ESI
// 00607f59: POP EBX
// 00607f5a: RET
// 00607f5b: LEA EAX,[ESP + 0x244]
//   Label: LAB_00607f5b
//   XREF to: Stack[-0x124] (DATA)
// 00607f62: PUSH EAX
// 00607f63: CALL crt_io.c_chdir_FUN_006012a0
//   XREF to: 006012a0 (UNCONDITIONAL_CALL)
// 00607f68: ADD ESP,0x4
// 00607f6b: PUSH 0x13e
// 00607f70: PUSH 0x0
// 00607f72: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x368] (DATA)
// 00607f76: PUSH EAX
// 00607f77: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00607f7c: MOV EDX,0x10
// 00607f81: ADD ESP,0xc
// 00607f84: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x368] (DATA)
// 00607f87: JMP 0x00607fb1
//   XREF to: 00607fb1 (UNCONDITIONAL_JUMP)
// 00607f89: MOV EAX,ESP
//   Label: LAB_00607f89
// 00607f8b: PUSH EAX
// 00607f8c: PUSH ESI
// 00607f8d: CALL dword ptr CS:[0x61154c]
//   XREF to: EXTERNAL:0000005e (COMPUTED_CALL)
//   XREF to: 0061154c (READ)
// 00607f94: CMP EAX,-0x1
// 00607f97: JNZ 0x00607fa9
//   XREF to: 00607fa9 (CONDITIONAL_JUMP)
// 00607f99: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00607f9e: ADD ESP,0x358
// 00607fa4: POP EBP
// 00607fa5: POP EDI
// 00607fa6: POP ESI
// 00607fa7: POP EBX
// 00607fa8: RET
// 00607fa9: PUSH EAX
//   Label: LAB_00607fa9
// 00607faa: CALL dword ptr CS:[0x611548]
//   XREF to: EXTERNAL:0000005d (COMPUTED_CALL)
//   XREF to: 00611548 (READ)
// 00607fb1: PUSH ESI
//   Label: LAB_00607fb1
// 00607fb2: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 00607fb7: MOV DL,byte ptr [EAX]
// 00607fb9: ADD ESP,0x4
// 00607fbc: CMP DL,0x3a
// 00607fbf: JNZ 0x00607fc7
//   XREF to: 00607fc7 (CONDITIONAL_JUMP)
// 00607fc1: XOR EAX,EAX
// 00607fc3: MOV AL,byte ptr [ESI]
// 00607fc5: JMP 0x00607fd0
//   XREF to: 00607fd0 (UNCONDITIONAL_JUMP)
// 00607fc7: XOR EAX,EAX
//   Label: LAB_00607fc7
// 00607fc9: MOV AL,byte ptr [ESP + 0x244]
//   XREF to: Stack[-0x124] (READ)
// 00607fd0: PUSH EAX
//   Label: LAB_00607fd0
// 00607fd1: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 00607fd6: SUB EAX,0x61
// 00607fd9: ADD ESP,0x4
// 00607fdc: MOV dword ptr [EBX],EAX
// 00607fde: MOV ECX,dword ptr [EBX]
// 00607fe0: DEC ECX
// 00607fe1: MOV dword ptr [EBX],ECX
// 00607fe3: MOV dword ptr [EBX + 0x12],ECX
// 00607fe6: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x348] (READ)
// 00607fea: MOV dword ptr [EBX + 0x16],EAX
// 00607fed: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x33c] (DATA)
// 00607ff1: PUSH EAX
// 00607ff2: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x368] (READ)
// 00607ff6: PUSH ESI
// 00607ff7: CALL crt_io.c_analyze_file_type_FUN_00607d50
//   XREF to: 00607d50 (UNCONDITIONAL_CALL)
// 00607ffc: ADD ESP,0x8
// 00607fff: MOV word ptr [EBX + 0x8],AX
// 00608003: LEA EAX,[ESP + 0x354]
//   XREF to: Stack[-0x14] (DATA)
// 0060800a: PUSH EAX
// 0060800b: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x20] (DATA)
// 00608012: PUSH EAX
// 00608013: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x354] (DATA)
// 00608017: PUSH EAX
// 00608018: CALL crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
//   XREF to: 00609cb0 (UNCONDITIONAL_CALL)
// 0060801d: ADD ESP,0xc
// 00608020: XOR EAX,EAX
// 00608022: MOV AX,word ptr [ESP + 0x354]
//   XREF to: Stack[-0x14] (READ)
// 0060802a: PUSH EAX
// 0060802b: XOR EAX,EAX
// 0060802d: MOV AX,word ptr [ESP + 0x34c]
//   XREF to: Stack[-0x20] (READ)
// 00608035: PUSH EAX
// 00608036: CALL crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
//   XREF to: 0060c1e0 (UNCONDITIONAL_CALL)
// 0060803b: ADD ESP,0x8
// 0060803e: MOV dword ptr [EBX + 0x1e],EAX
// 00608041: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x1c] (DATA)
// 00608048: PUSH EAX
// 00608049: LEA EAX,[ESP + 0x354]
//   XREF to: Stack[-0x18] (DATA)
// 00608050: PUSH EAX
// 00608051: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x364] (DATA)
// 00608055: PUSH EAX
// 00608056: CALL crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
//   XREF to: 00609cb0 (UNCONDITIONAL_CALL)
// 0060805b: ADD ESP,0xc
// 0060805e: MOV EAX,dword ptr [ESP + 0x350]
//   XREF to: Stack[-0x18] (READ)
// 00608065: CMP AX,word ptr [ESP + 0x348]
//   XREF to: Stack[-0x20] (READ)
// 0060806d: JNZ 0x00608085
//   XREF to: 00608085 (CONDITIONAL_JUMP)
// 0060806f: MOV EAX,dword ptr [ESP + 0x34c]
//   XREF to: Stack[-0x1c] (READ)
// 00608076: CMP AX,word ptr [ESP + 0x354]
//   XREF to: Stack[-0x14] (READ)
// 0060807e: JNZ 0x00608085
//   XREF to: 00608085 (CONDITIONAL_JUMP)
// 00608080: MOV EAX,dword ptr [EBX + 0x1e]
// 00608083: JMP 0x006080a3
//   XREF to: 006080a3 (UNCONDITIONAL_JUMP)
// 00608085: XOR EAX,EAX
//   Label: LAB_00608085
// 00608087: MOV AX,word ptr [ESP + 0x34c]
//   XREF to: Stack[-0x1c] (READ)
// 0060808f: PUSH EAX
// 00608090: XOR EAX,EAX
// 00608092: MOV AX,word ptr [ESP + 0x354]
//   XREF to: Stack[-0x18] (READ)
// 0060809a: PUSH EAX
// 0060809b: CALL crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
//   XREF to: 0060c1e0 (UNCONDITIONAL_CALL)
// 006080a0: ADD ESP,0x8
// 006080a3: MOV dword ptr [EBX + 0x22],EAX
//   Label: LAB_006080a3
// 006080a6: LEA EAX,[ESP + 0x34c]
//   XREF to: Stack[-0x1c] (DATA)
// 006080ad: PUSH EAX
// 006080ae: LEA EAX,[ESP + 0x354]
//   XREF to: Stack[-0x18] (DATA)
// 006080b5: PUSH EAX
// 006080b6: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x35c] (DATA)
// 006080ba: PUSH EAX
// 006080bb: CALL crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
//   XREF to: 00609cb0 (UNCONDITIONAL_CALL)
// 006080c0: ADD ESP,0xc
// 006080c3: MOV EAX,dword ptr [ESP + 0x350]
//   XREF to: Stack[-0x18] (READ)
// 006080ca: CMP AX,word ptr [ESP + 0x348]
//   XREF to: Stack[-0x20] (READ)
// 006080d2: JNZ 0x006080ea
//   XREF to: 006080ea (CONDITIONAL_JUMP)
// 006080d4: MOV EAX,dword ptr [ESP + 0x34c]
//   XREF to: Stack[-0x1c] (READ)
// 006080db: CMP AX,word ptr [ESP + 0x354]
//   XREF to: Stack[-0x14] (READ)
// 006080e3: JNZ 0x006080ea
//   XREF to: 006080ea (CONDITIONAL_JUMP)
// 006080e5: MOV EAX,dword ptr [EBX + 0x1e]
// 006080e8: JMP 0x00608108
//   XREF to: 00608108 (UNCONDITIONAL_JUMP)
// 006080ea: XOR EAX,EAX
//   Label: LAB_006080ea
// 006080ec: MOV AX,word ptr [ESP + 0x34c]
//   XREF to: Stack[-0x1c] (READ)
// 006080f4: PUSH EAX
// 006080f5: XOR EAX,EAX
// 006080f7: MOV AX,word ptr [ESP + 0x354]
//   XREF to: Stack[-0x18] (READ)
// 006080ff: PUSH EAX
// 00608100: CALL crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
//   XREF to: 0060c1e0 (UNCONDITIONAL_CALL)
// 00608105: ADD ESP,0x8
// 00608108: MOV dword ptr [EBX + 0x1a],EAX
//   Label: LAB_00608108
// 0060810b: MOV word ptr [EBX + 0x10],0x0
// 00608111: MOV AX,word ptr [EBX + 0x10]
// 00608115: MOV word ptr [EBX + 0xa],0x1
// 0060811b: CWDE
// 0060811c: MOV dword ptr [EBX + 0xc],EAX
// 0060811f: MOV dword ptr [EBX + 0x4],EAX
// 00608122: ADD EBX,0x39
// 00608125: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x368] (DATA)
// 00608128: MOV dword ptr [EBX + -0xb],0x0
// 0060812f: PUSH 0xd
// 00608131: MOV dword ptr [EBX + -0xf],EAX
// 00608134: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x33c] (DATA)
// 00608138: MOV dword ptr [EBX + -0x7],0x0
// 0060813f: PUSH EAX
// 00608140: MOV word ptr [EBX + -0x3],0x0
// 00608146: PUSH EBX
// 00608147: MOV byte ptr [EBX + -0x1],0x0
// 0060814b: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 00608150: ADD ESP,0xc
// 00608153: XOR EAX,EAX
// 00608155: ADD ESP,0x358
//   Label: LAB_00608155
// 0060815b: POP EBP
// 0060815c: POP EDI
// 0060815d: POP ESI
// 0060815e: POP EBX
// 0060815f: RET
