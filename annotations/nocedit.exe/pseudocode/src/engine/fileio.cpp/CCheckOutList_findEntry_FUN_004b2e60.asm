; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[9]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3986
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b5227
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4b8a
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b37c4
;   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 at 004b3fbc
;   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 at 004b2c33
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbcf1
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004ba835
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8b92
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2e60
        ;   Label: engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
    PUSH ESI                            ; 004b2e61
    PUSH EDI                            ; 004b2e62
    PUSH EBP                            ; 004b2e63
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b2e64
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b2e68
    MOV EDX,dword ptr [EDI]             ; 004b2e6c
    XOR EBX,EBX                         ; 004b2e6e
    TEST EDX,EDX                        ; 004b2e70
    JLE 0x004b2e96                      ; 004b2e72
        ;   XREF to: 004b2e96 (CONDITIONAL_JUMP)  ; LAB_004b2e96
    XOR ESI,ESI                         ; 004b2e74
    MOV EAX,dword ptr [EDI + 0x4]       ; 004b2e76
        ;   Label: LAB_004b2e76
    PUSH EBP                            ; 004b2e79
    ADD EAX,ESI                         ; 004b2e7a
    PUSH EAX                            ; 004b2e7c
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b2e7d
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b2e82
    TEST EAX,EAX                        ; 004b2e85
    JZ 0x004b2ea0                       ; 004b2e87
        ;   XREF to: 004b2ea0 (CONDITIONAL_JUMP)  ; LAB_004b2ea0
    INC EBX                             ; 004b2e89
    MOV ECX,dword ptr [EDI]             ; 004b2e8a
    ADD ESI,0x168                       ; 004b2e8c
    CMP EBX,ECX                         ; 004b2e92
    JL 0x004b2e76                       ; 004b2e94
        ;   XREF to: 004b2e76 (CONDITIONAL_JUMP)  ; LAB_004b2e76
    MOV EAX,0xffffffff                  ; 004b2e96
        ;   Label: LAB_004b2e96
    POP EBP                             ; 004b2e9b
    POP EDI                             ; 004b2e9c
    POP ESI                             ; 004b2e9d
    POP EBX                             ; 004b2e9e
    RET                                 ; 004b2e9f
    MOV EAX,EBX                         ; 004b2ea0
        ;   Label: LAB_004b2ea0
    POP EBP                             ; 004b2ea2
    POP EDI                             ; 004b2ea3
    POP ESI                             ; 004b2ea4
    POP EBX                             ; 004b2ea5
    RET                                 ; 004b2ea6

