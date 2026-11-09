; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004f4c90(char *param_1,char *param_2,char *param_3)
;
;
; XREF[1]:
;   core_inivar.cpp_FUN_004f5760 at 004f5821
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_005e5875
;   TerminatedCString s_CIniFile_setString_filen_005e5887
;   TerminatedCString s_engine_ini_cpp_005e58af
;   TerminatedCString s_CIniFile_setString_secti_005e58c1
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_ini.cpp_writeProfileString_FUN_004f4ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4c90
        ;   Label: engine_ini.cpp_FUN_004f4c90
    PUSH EBP                            ; 004f4c91
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f4c92
    CMP byte ptr [EBX],0x0              ; 004f4c96
    JZ 0x004f4cc1                       ; 004f4c99
        ;   XREF to: 004f4cc1 (CONDITIONAL_JUMP)  ; LAB_004f4cc1
    CMP byte ptr [EBX + 0x100],0x0      ; 004f4c9b
        ;   Label: LAB_004f4c9b
    JZ 0x004f4ce6                       ; 004f4ca2
        ;   XREF to: 004f4ce6 (CONDITIONAL_JUMP)  ; LAB_004f4ce6
    PUSH EBX                            ; 004f4ca4
        ;   Label: LAB_004f4ca4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f4ca5
    PUSH EBP                            ; 004f4ca9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f4caa
    PUSH EAX                            ; 004f4cae
    ADD EBX,0x100                       ; 004f4caf
    PUSH EBX                            ; 004f4cb5
    CALL engine_ini.cpp_writeProfileString_FUN_004f4ad0 ; 004f4cb6
        ;   XREF to: 004f4ad0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_writeProfileString_FUN_004f4ad0(char * section, char * key, char * value, char * filename)
    ADD ESP,0x10                        ; 004f4cbb
    POP EBP                             ; 004f4cbe
    POP EBX                             ; 004f4cbf
    RET                                 ; 004f4cc0
    MOV EDX,0x5e5875                    ; 004f4cc1 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004f4cc1
    MOV ECX,0x280                       ; 004f4cc6
    PUSH 0x5e5887                       ; 004f4ccb | = "CIniFile::setString - filename not set!"
    MOV dword ptr [0x01d1d400],EDX      ; 004f4cd0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004f4cd6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004f4cdc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004f4ce1
    JMP 0x004f4c9b                      ; 004f4ce4
        ;   XREF to: 004f4c9b (UNCONDITIONAL_JUMP)  ; LAB_004f4c9b
    PUSH EDI                            ; 004f4ce6
        ;   Label: LAB_004f4ce6
    PUSH ESI                            ; 004f4ce7
    MOV ESI,0x5e58af                    ; 004f4ce8 | = "..\\engine\\ini.cpp"
    MOV EDI,0x281                       ; 004f4ced
    PUSH 0x5e58c1                       ; 004f4cf2 | = "CIniFile::setString - section not set!"
    MOV dword ptr [0x01d1d400],ESI      ; 004f4cf7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004f4cfd | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004f4d03
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004f4d08
    POP ESI                             ; 004f4d0b
    POP EDI                             ; 004f4d0c
    JMP 0x004f4ca4                      ; 004f4d0d
        ;   XREF to: 004f4ca4 (UNCONDITIONAL_JUMP)  ; LAB_004f4ca4

