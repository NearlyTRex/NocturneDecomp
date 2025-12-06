; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList * this_ptr, int entry_index)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   entry_index
;
; XREF[3]:
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4f08
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b37dd
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bc00a
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_0062642c
;   TerminatedCString s_CCheckOutList_remove_inv_00626441
;   TerminatedCString s_engine_fileio_cpp_00626468
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2d70
        ;   Label: engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
    PUSH ESI                            ; 004b2d71
    PUSH EBP                            ; 004b2d72
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b2d73
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b2d77
    TEST ESI,ESI                        ; 004b2d7b
    JL 0x004b2d83                       ; 004b2d7d | LAB_004b2d83
        ;   XREF to: 004b2d83 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [EBX]             ; 004b2d7f
    JL 0x004b2da8                       ; 004b2d81 | LAB_004b2da8
        ;   XREF to: 004b2da8 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004b2d83
        ;   Label: LAB_004b2d83
    MOV ECX,0x62642c                    ; 004b2d84 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_0062642c = ..\engine\fileio.cpp
    MOV EDI,0x2f4                       ; 004b2d89
    PUSH 0x626441                       ; 004b2d8e | = "CCheckOutList::remove - invalid index!" | s_CCheckOutList_remove_inv_00626441 = CCheckOutList::remove - invalid index!
    MOV dword ptr [0x02f0ca48],ECX      ; 004b2d93 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b2d99 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b2d9f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b2da4
    POP EDI                             ; 004b2da7
    MOV EBP,dword ptr [EBX]             ; 004b2da8
        ;   Label: LAB_004b2da8
    CMP EBP,0x1                         ; 004b2daa
    JLE 0x004b2e47                      ; 004b2dad | LAB_004b2e47
        ;   XREF to: 004b2e47 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x1]                ; 004b2db3
    MOV EDX,EAX                         ; 004b2db6
    SUB EDX,ESI                         ; 004b2db8
    MOV dword ptr [EBX],EAX             ; 004b2dba
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b2dbc
    SUB EAX,EDX                         ; 004b2dc3
    SHL EAX,0x3                         ; 004b2dc5
    MOV EDX,EAX                         ; 004b2dc8
    SHL EAX,0x4                         ; 004b2dca
    SUB EAX,EDX                         ; 004b2dcd
    LEA EDX,[ESI + 0x1]                 ; 004b2dcf
    PUSH EAX                            ; 004b2dd2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b2dd3
    SUB EAX,EDX                         ; 004b2dda
    SHL EAX,0x3                         ; 004b2ddc
    MOV EDX,EAX                         ; 004b2ddf
    SHL EAX,0x4                         ; 004b2de1
    MOV ECX,dword ptr [EBX + 0x4]       ; 004b2de4
    SUB EAX,EDX                         ; 004b2de7
    ADD EAX,ECX                         ; 004b2de9
    PUSH EAX                            ; 004b2deb
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b2dec
    SUB EAX,ESI                         ; 004b2df3
    SHL EAX,0x3                         ; 004b2df5
    MOV EDX,EAX                         ; 004b2df8
    SHL EAX,0x4                         ; 004b2dfa
    SUB EAX,EDX                         ; 004b2dfd
    ADD ECX,EAX                         ; 004b2dff
    PUSH ECX                            ; 004b2e01
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b2e02 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX]             ; 004b2e07
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b2e09
    SUB EAX,EDX                         ; 004b2e10
    ADD ESP,0xc                         ; 004b2e12
    SHL EAX,0x3                         ; 004b2e15
    PUSH 0x2f8                          ; 004b2e18
    MOV EDX,EAX                         ; 004b2e1d
    SHL EAX,0x4                         ; 004b2e1f
    PUSH 0x626468                       ; 004b2e22 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00626468 = ..\engine\fileio.cpp
    SUB EAX,EDX                         ; 004b2e27
    PUSH EAX                            ; 004b2e29
    MOV EDX,dword ptr [EBX + 0x4]       ; 004b2e2a
    PUSH EDX                            ; 004b2e2d
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b2e2e | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b2e33
    MOV dword ptr [EBX + 0x4],EAX       ; 004b2e36
    TEST EAX,EAX                        ; 004b2e39
    SETNZ AL                            ; 004b2e3b
    AND EAX,0xff                        ; 004b2e3e
    POP EBP                             ; 004b2e43
    POP ESI                             ; 004b2e44
    POP EBX                             ; 004b2e45
    RET                                 ; 004b2e46
    PUSH EBX                            ; 004b2e47
        ;   Label: LAB_004b2e47
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b2e48 | void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 004b2e4d
    ADD ESP,0x4                         ; 004b2e52
    POP EBP                             ; 004b2e55
    POP ESI                             ; 004b2e56
    POP EBX                             ; 004b2e57
    RET                                 ; 004b2e58

