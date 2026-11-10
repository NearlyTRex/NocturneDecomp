; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_isStreamableFile_FUN_0054c76e(char *param_1)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_dosio.cpp_splitPath_FUN_00461070
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0054c76e
        ;   Label: sound_sndmain.cpp_isStreamableFile_FUN_0054c76e
    SUB ESP,0x100                       ; 0054c770
    MOV EDX,dword ptr [ESP + 0x104]     ; 0054c776
    PUSH EDX                            ; 0054c77d
    PUSH 0x5e7ee3                       ; 0054c77e
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0054c783
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054c788
    CMP EAX,0x200000                    ; 0054c78b
    JLE 0x0054c79e                      ; 0054c790
        ;   XREF to: 0054c79e (CONDITIONAL_JUMP)  ; LAB_0054c79e
    MOV EAX,0x1                         ; 0054c792
        ;   Label: LAB_0054c792
    ADD ESP,0x100                       ; 0054c797
    RET                                 ; 0054c79d
    MOV EAX,ESP                         ; 0054c79e
        ;   Label: LAB_0054c79e
    PUSH EAX                            ; 0054c7a0
    PUSH 0x0                            ; 0054c7a1
    PUSH 0x0                            ; 0054c7a3
    PUSH 0x0                            ; 0054c7a5
    MOV ECX,dword ptr [ESP + 0x114]     ; 0054c7a7
    PUSH ECX                            ; 0054c7ae
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 0054c7af
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0054c7b4
    PUSH 0x5e7ee9                       ; 0054c7b7
    LEA EAX,[ESP + 0x4]                 ; 0054c7bc
    PUSH EAX                            ; 0054c7c0
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054c7c1
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c7c6
    TEST EAX,EAX                        ; 0054c7c9
    JZ 0x0054c792                       ; 0054c7cb
        ;   XREF to: 0054c792 (CONDITIONAL_JUMP)  ; LAB_0054c792
    PUSH 0x5e7eed                       ; 0054c7cd
    LEA EAX,[ESP + 0x4]                 ; 0054c7d2
    PUSH EAX                            ; 0054c7d6
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054c7d7
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c7dc
    TEST EAX,EAX                        ; 0054c7df
    JZ 0x0054c792                       ; 0054c7e1
        ;   XREF to: 0054c792 (CONDITIONAL_JUMP)  ; LAB_0054c792
    XOR EAX,EAX                         ; 0054c7e3
    ADD ESP,0x100                       ; 0054c7e5
    RET                                 ; 0054c7eb

