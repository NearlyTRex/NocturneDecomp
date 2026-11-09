; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ini_cpp_FUN_004d8aa0(char *param_1,char *param_2,char *param_3)
;
;
; XREF[1]:
;   core_inivar.cpp_FUN_004d94d0 at 004d9591
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_005dad14
;   TerminatedCString s_CIniFile_setString_filen_005dad26
;   TerminatedCString s_engine_ini_cpp_005dad4e
;   TerminatedCString s_CIniFile_setString_secti_005dad60
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_ini.cpp_writeProfileString_FUN_004d88e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8aa0
        ;   Label: engine_ini.cpp_FUN_004d8aa0
    PUSH EBP                            ; 004d8aa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d8aa2
    CMP byte ptr [EBX],0x0              ; 004d8aa6
    JZ 0x004d8ad1                       ; 004d8aa9
        ;   XREF to: 004d8ad1 (CONDITIONAL_JUMP)  ; LAB_004d8ad1
    CMP byte ptr [EBX + 0x100],0x0      ; 004d8aab
        ;   Label: LAB_004d8aab
    JZ 0x004d8af6                       ; 004d8ab2
        ;   XREF to: 004d8af6 (CONDITIONAL_JUMP)  ; LAB_004d8af6
    PUSH EBX                            ; 004d8ab4
        ;   Label: LAB_004d8ab4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004d8ab5
    PUSH EBP                            ; 004d8ab9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d8aba
    PUSH EAX                            ; 004d8abe
    ADD EBX,0x100                       ; 004d8abf
    PUSH EBX                            ; 004d8ac5
    CALL engine_ini.cpp_writeProfileString_FUN_004d88e0 ; 004d8ac6
        ;   XREF to: 004d88e0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_writeProfileString_FUN_004d88e0(char * section, char * key, char * value, char * filename)
    ADD ESP,0x10                        ; 004d8acb
    POP EBP                             ; 004d8ace
    POP EBX                             ; 004d8acf
    RET                                 ; 004d8ad0
    MOV EDX,0x5dad14                    ; 004d8ad1 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004d8ad1
    MOV ECX,0x280                       ; 004d8ad6
    PUSH 0x5dad26                       ; 004d8adb | = "CIniFile::setString - filename not set!"
    MOV dword ptr [0x01d046a0],EDX      ; 004d8ae0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004d8ae6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d8aec
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d8af1
    JMP 0x004d8aab                      ; 004d8af4
        ;   XREF to: 004d8aab (UNCONDITIONAL_JUMP)  ; LAB_004d8aab
    PUSH EDI                            ; 004d8af6
        ;   Label: LAB_004d8af6
    PUSH ESI                            ; 004d8af7
    MOV ESI,0x5dad4e                    ; 004d8af8 | = "..\\engine\\ini.cpp"
    MOV EDI,0x281                       ; 004d8afd
    PUSH 0x5dad60                       ; 004d8b02 | = "CIniFile::setString - section not set!"
    MOV dword ptr [0x01d046a0],ESI      ; 004d8b07 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004d8b0d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d8b13
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d8b18
    POP ESI                             ; 004d8b1b
    POP EDI                             ; 004d8b1c
    JMP 0x004d8ab4                      ; 004d8b1d
        ;   XREF to: 004d8ab4 (UNCONDITIONAL_JUMP)  ; LAB_004d8ab4

