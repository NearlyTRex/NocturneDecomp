; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8a10(char *param_1,char *param_2,char *param_3,int param_4)
;
;
; XREF[1]:
;   core_inivar.cpp_FUN_004d8d60 at 004d8e3b
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_005daca1
;   TerminatedCString s_CIniFile_getString_filen_005dacb3
;   TerminatedCString s_engine_ini_cpp_005dacdb
;   TerminatedCString s_CIniFile_getString_secti_005daced
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_ini.cpp_getProfileString_FUN_004d8800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8a10
        ;   Label: engine_ini.cpp_FUN_004d8a10
    PUSH EBP                            ; 004d8a11
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d8a12
    CMP byte ptr [EBX],0x0              ; 004d8a16
    JZ 0x004d8a47                       ; 004d8a19
        ;   XREF to: 004d8a47 (CONDITIONAL_JUMP)  ; LAB_004d8a47
    CMP byte ptr [EBX + 0x100],0x0      ; 004d8a1b
        ;   Label: LAB_004d8a1b
    JZ 0x004d8a6c                       ; 004d8a22
        ;   XREF to: 004d8a6c (CONDITIONAL_JUMP)  ; LAB_004d8a6c
    PUSH EBX                            ; 004d8a24
        ;   Label: LAB_004d8a24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004d8a25
    PUSH EBP                            ; 004d8a29
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004d8a2a
    PUSH EAX                            ; 004d8a2e
    PUSH EAX                            ; 004d8a2f
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d8a30
    PUSH ECX                            ; 004d8a34
    ADD EBX,0x100                       ; 004d8a35
    PUSH EBX                            ; 004d8a3b
    CALL engine_ini.cpp_getProfileString_FUN_004d8800 ; 004d8a3c
        ;   XREF to: 004d8800 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_getProfileString_FUN_004d8800(char * section, char * key, char * default_value, char * output_buffer, ...)
    ADD ESP,0x18                        ; 004d8a41
    POP EBP                             ; 004d8a44
    POP EBX                             ; 004d8a45
    RET                                 ; 004d8a46
    MOV EDX,0x5daca1                    ; 004d8a47 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004d8a47
    MOV ECX,0x27a                       ; 004d8a4c
    PUSH 0x5dacb3                       ; 004d8a51 | = "CIniFile::getString - filename not set!"
    MOV dword ptr [0x01d046a0],EDX      ; 004d8a56 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004d8a5c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d8a62
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d8a67
    JMP 0x004d8a1b                      ; 004d8a6a
        ;   XREF to: 004d8a1b (UNCONDITIONAL_JUMP)  ; LAB_004d8a1b
    PUSH EDI                            ; 004d8a6c
        ;   Label: LAB_004d8a6c
    PUSH ESI                            ; 004d8a6d
    MOV ESI,0x5dacdb                    ; 004d8a6e | = "..\\engine\\ini.cpp"
    MOV EDI,0x27b                       ; 004d8a73
    PUSH 0x5daced                       ; 004d8a78 | = "CIniFile::getString - section not set!"
    MOV dword ptr [0x01d046a0],ESI      ; 004d8a7d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004d8a83 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d8a89
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d8a8e
    POP ESI                             ; 004d8a91
    POP EDI                             ; 004d8a92
    JMP 0x004d8a24                      ; 004d8a93
        ;   XREF to: 004d8a24 (UNCONDITIONAL_JUMP)  ; LAB_004d8a24

