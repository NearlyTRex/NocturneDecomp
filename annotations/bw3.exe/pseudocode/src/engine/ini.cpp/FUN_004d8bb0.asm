; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8bb0(char *param_1,char *param_2,char *param_3)
;
;
; XREF[1]:
;   core_inivar.cpp_FUN_004d95c0 at 004d9681
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_005c583b
;   TerminatedCString s_CIniFile_setString_filen_005c584d
;   TerminatedCString s_engine_ini_cpp_005c5875
;   TerminatedCString s_CIniFile_setString_secti_005c5887
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_ini.cpp_writeProfileString_FUN_004d89f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8bb0
        ;   Label: engine_ini.cpp_FUN_004d8bb0
    PUSH EBP                            ; 004d8bb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d8bb2
    CMP byte ptr [EBX],0x0              ; 004d8bb6
    JZ 0x004d8be1                       ; 004d8bb9
        ;   XREF to: 004d8be1 (CONDITIONAL_JUMP)  ; LAB_004d8be1
    CMP byte ptr [EBX + 0x100],0x0      ; 004d8bbb
        ;   Label: LAB_004d8bbb
    JZ 0x004d8c06                       ; 004d8bc2
        ;   XREF to: 004d8c06 (CONDITIONAL_JUMP)  ; LAB_004d8c06
    PUSH EBX                            ; 004d8bc4
        ;   Label: LAB_004d8bc4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004d8bc5
    PUSH EBP                            ; 004d8bc9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d8bca
    PUSH EAX                            ; 004d8bce
    ADD EBX,0x100                       ; 004d8bcf
    PUSH EBX                            ; 004d8bd5
    CALL engine_ini.cpp_writeProfileString_FUN_004d89f0 ; 004d8bd6
        ;   XREF to: 004d89f0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_writeProfileString_FUN_004d89f0(char * section, char * key, char * value, char * filename)
    ADD ESP,0x10                        ; 004d8bdb
    POP EBP                             ; 004d8bde
    POP EBX                             ; 004d8bdf
    RET                                 ; 004d8be0
    MOV EDX,0x5c583b                    ; 004d8be1 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004d8be1
    MOV ECX,0x280                       ; 004d8be6
    PUSH 0x5c584d                       ; 004d8beb | = "CIniFile::setString - filename not set!"
    MOV dword ptr [0x01d71de0],EDX      ; 004d8bf0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004d8bf6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004d8bfc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004d8c01
    JMP 0x004d8bbb                      ; 004d8c04
        ;   XREF to: 004d8bbb (UNCONDITIONAL_JUMP)  ; LAB_004d8bbb
    PUSH EDI                            ; 004d8c06
        ;   Label: LAB_004d8c06
    PUSH ESI                            ; 004d8c07
    MOV ESI,0x5c5875                    ; 004d8c08 | = "..\\engine\\ini.cpp"
    MOV EDI,0x281                       ; 004d8c0d
    PUSH 0x5c5887                       ; 004d8c12 | = "CIniFile::setString - section not set!"
    MOV dword ptr [0x01d71de0],ESI      ; 004d8c17 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004d8c1d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004d8c23
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004d8c28
    POP ESI                             ; 004d8c2b
    POP EDI                             ; 004d8c2c
    JMP 0x004d8bc4                      ; 004d8c2d
        ;   XREF to: 004d8bc4 (UNCONDITIONAL_JUMP)  ; LAB_004d8bc4

