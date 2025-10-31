// Name: engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0
// Address: 004bc5d0
// Address Range: [[004bc5d0, 004bc641]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0(CFileManager * this_ptr, char * network_username, char * password, char * domain)
// Globals:
//   undefined4 g_VersionControlSession.network_username[0]
//   undefined4 g_VersionControlSession.network_username[1]
//   undefined4 g_VersionControlSession.network_username[2]
//   undefined4 g_VersionControlSession.network_username[3]
//   undefined4 g_VersionControlSession.password[0]
//   undefined4 g_VersionControlSession.password[1]
//   undefined4 g_VersionControlSession.password[2]
//   undefined4 g_VersionControlSession.password[3]
//   undefined4 g_VersionControlSession.domain[0]
//   undefined4 g_VersionControlSession.domain[1]
//   undefined4 g_VersionControlSession.domain[2]
//   undefined4 g_VersionControlSession.domain[3]

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0
          (CFileManager *this_ptr,char *network_username,char *password,char *domain)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = g_VersionControlSession.network_username;
  do {
    cVar1 = *network_username;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = network_username[1];
    network_username = network_username + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  pcVar2 = g_VersionControlSession.password;
  do {
    cVar1 = *password;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = password[1];
    password = password + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  pcVar2 = g_VersionControlSession.domain;
  do {
    cVar1 = *domain;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = domain[1];
    domain = domain + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004bc5d0: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0
// 004bc5d1: PUSH EDI
// 004bc5d2: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004bc5d6: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 004bc5da: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004bc5de: MOV EDI,0x2d12bf8
//   XREF to: 02d12bf8 (DATA)
// 004bc5e3: PUSH EDI
//   XREF to: 02d12bf8 (DATA)
// 004bc5e4: MOV AL,byte ptr [ESI]
//   Label: LAB_004bc5e4
// 004bc5e6: MOV byte ptr [EDI],AL
//   XREF to: 02d12bf8 (WRITE)
//   XREF to: 02d12bfa (WRITE)
// 004bc5e8: CMP AL,0x0
// 004bc5ea: JZ 0x004bc5fc
//   XREF to: 004bc5fc (CONDITIONAL_JUMP)
// 004bc5ec: MOV AL,byte ptr [ESI + 0x1]
// 004bc5ef: ADD ESI,0x2
// 004bc5f2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d12bf9 (WRITE)
//   XREF to: 02d12bfb (WRITE)
// 004bc5f5: ADD EDI,0x2
// 004bc5f8: CMP AL,0x0
// 004bc5fa: JNZ 0x004bc5e4
//   XREF to: 004bc5e4 (CONDITIONAL_JUMP)
// 004bc5fc: POP EDI
//   Label: LAB_004bc5fc
// 004bc5fd: MOV EDI,0x2d12c60
//   XREF to: 02d12c60 (DATA)
// 004bc602: MOV ESI,ECX
// 004bc604: PUSH EDI
//   XREF to: 02d12c60 (DATA)
// 004bc605: MOV AL,byte ptr [ESI]
//   Label: LAB_004bc605
// 004bc607: MOV byte ptr [EDI],AL
//   XREF to: 02d12c60 (WRITE)
//   XREF to: 02d12c62 (WRITE)
// 004bc609: CMP AL,0x0
// 004bc60b: JZ 0x004bc61d
//   XREF to: 004bc61d (CONDITIONAL_JUMP)
// 004bc60d: MOV AL,byte ptr [ESI + 0x1]
// 004bc610: ADD ESI,0x2
// 004bc613: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d12c61 (WRITE)
//   XREF to: 02d12c63 (WRITE)
// 004bc616: ADD EDI,0x2
// 004bc619: CMP AL,0x0
// 004bc61b: JNZ 0x004bc605
//   XREF to: 004bc605 (CONDITIONAL_JUMP)
// 004bc61d: POP EDI
//   Label: LAB_004bc61d
// 004bc61e: MOV EDI,0x2d12cc8
//   XREF to: 02d12cc8 (DATA)
// 004bc623: MOV ESI,EDX
// 004bc625: PUSH EDI
//   XREF to: 02d12cc8 (DATA)
// 004bc626: MOV AL,byte ptr [ESI]
//   Label: LAB_004bc626
// 004bc628: MOV byte ptr [EDI],AL
//   XREF to: 02d12cc8 (WRITE)
//   XREF to: 02d12cca (WRITE)
// 004bc62a: CMP AL,0x0
// 004bc62c: JZ 0x004bc63e
//   XREF to: 004bc63e (CONDITIONAL_JUMP)
// 004bc62e: MOV AL,byte ptr [ESI + 0x1]
// 004bc631: ADD ESI,0x2
// 004bc634: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d12cc9 (WRITE)
//   XREF to: 02d12ccb (WRITE)
// 004bc637: ADD EDI,0x2
// 004bc63a: CMP AL,0x0
// 004bc63c: JNZ 0x004bc626
//   XREF to: 004bc626 (CONDITIONAL_JUMP)
// 004bc63e: POP EDI
//   Label: LAB_004bc63e
// 004bc63f: POP EDI
// 004bc640: POP ESI
// 004bc641: RET
