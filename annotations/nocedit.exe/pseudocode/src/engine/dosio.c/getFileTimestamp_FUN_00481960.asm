; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_dosio.c_getFileTimestamp_FUN_00481960(char * directory, char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x32c]:1  local_32c
; undefined1       Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b39a6
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4fcd
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bc06b
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004ba8e7
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8f1e
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5b47
;   engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120 at 004b313a
;   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 at 004b34ff
;
; Called Functions:
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
;   engine_dosio.c_getRelativeFilePath_FUN_004816c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481960
        ;   Label: engine_dosio.c_getFileTimestamp_FUN_00481960
    SUB ESP,0x328                       ; 00481961
    MOV EDX,dword ptr [ESP + 0x334]     ; 00481967
    PUSH EDX                            ; 0048196e
    MOV ECX,dword ptr [ESP + 0x334]     ; 0048196f
    PUSH ECX                            ; 00481976
    LEA EAX,[ESP + 0x8]                 ; 00481977
    PUSH EAX                            ; 0048197b
    CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0 ; 0048197c | void engine_dosio.c_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
        ;   XREF to: 004816c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00481981
    LEA EAX,[ESP + 0x214]               ; 00481984
    PUSH EAX                            ; 0048198b
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 0048198c | CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00481991
    MOV EAX,ESP                         ; 00481994
    PUSH EAX                            ; 00481996
    LEA EAX,[ESP + 0x218]               ; 00481997
    PUSH EAX                            ; 0048199e
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 0048199f | int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004819a4
    TEST EAX,EAX                        ; 004819a7
    JZ 0x004819ce                       ; 004819a9 | LAB_004819ce
        ;   XREF to: 004819ce (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004819ab
    LEA EAX,[ESP + 0x218]               ; 004819ad
    PUSH EAX                            ; 004819b4
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004819b5
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 004819bc | CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint d1)
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004819c1
    MOV EAX,EBX                         ; 004819c4
    ADD ESP,0x328                       ; 004819c6
    POP EBX                             ; 004819cc
    RET                                 ; 004819cd
    PUSH EAX                            ; 004819ce
        ;   Label: LAB_004819ce
    LEA EAX,[ESP + 0x218]               ; 004819cf
    PUSH EAX                            ; 004819d6
    MOV EBX,0xffffffff                  ; 004819d7
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 004819dc | CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint d1)
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004819e1
    MOV EAX,EBX                         ; 004819e4
    ADD ESP,0x328                       ; 004819e6
    POP EBX                             ; 004819ec
    RET                                 ; 004819ed

