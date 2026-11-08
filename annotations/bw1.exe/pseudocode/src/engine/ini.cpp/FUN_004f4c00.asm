; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f4c00(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004f4f50 at 004f502b
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_005e5802
;   TerminatedCString s_CIniFile_getString_filen_005e5814
;   TerminatedCString s_engine_ini_cpp_005e583c
;   TerminatedCString s_CIniFile_getString_secti_005e584e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004f49f0
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4c00
        ;   Label: FUN_004f4c00
    PUSH EBP                            ; 004f4c01
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f4c02
    CMP byte ptr [EBX],0x0              ; 004f4c06
    JZ 0x004f4c37                       ; 004f4c09
        ;   XREF to: 004f4c37 (CONDITIONAL_JUMP)  ; LAB_004f4c37
    CMP byte ptr [EBX + 0x100],0x0      ; 004f4c0b
        ;   Label: LAB_004f4c0b
    JZ 0x004f4c5c                       ; 004f4c12
        ;   XREF to: 004f4c5c (CONDITIONAL_JUMP)  ; LAB_004f4c5c
    PUSH EBX                            ; 004f4c14
        ;   Label: LAB_004f4c14
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f4c15
    PUSH EBP                            ; 004f4c19
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f4c1a
    PUSH EAX                            ; 004f4c1e
    PUSH EAX                            ; 004f4c1f
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f4c20
    PUSH ECX                            ; 004f4c24
    ADD EBX,0x100                       ; 004f4c25
    PUSH EBX                            ; 004f4c2b
    CALL FUN_004f49f0                   ; 004f4c2c
        ;   XREF to: 004f49f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f49f0()
    ADD ESP,0x18                        ; 004f4c31
    POP EBP                             ; 004f4c34
    POP EBX                             ; 004f4c35
    RET                                 ; 004f4c36
    MOV EDX,0x5e5802                    ; 004f4c37 | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004f4c37
    MOV ECX,0x27a                       ; 004f4c3c
    PUSH 0x5e5814                       ; 004f4c41 | = "CIniFile::getString - filename not set!"
    MOV dword ptr [0x01d1d400],EDX      ; 004f4c46 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004f4c4c | DAT_01d1d404
    CALL FUN_005030e0                   ; 004f4c52
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004f4c57
    JMP 0x004f4c0b                      ; 004f4c5a
        ;   XREF to: 004f4c0b (UNCONDITIONAL_JUMP)  ; LAB_004f4c0b
    PUSH EDI                            ; 004f4c5c
        ;   Label: LAB_004f4c5c
    PUSH ESI                            ; 004f4c5d
    MOV ESI,0x5e583c                    ; 004f4c5e | = "..\\engine\\ini.cpp"
    MOV EDI,0x27b                       ; 004f4c63
    PUSH 0x5e584e                       ; 004f4c68 | = "CIniFile::getString - section not set!"
    MOV dword ptr [0x01d1d400],ESI      ; 004f4c6d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004f4c73 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004f4c79
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004f4c7e
    POP ESI                             ; 004f4c81
    POP EDI                             ; 004f4c82
    JMP 0x004f4c14                      ; 004f4c83
        ;   XREF to: 004f4c14 (UNCONDITIONAL_JUMP)  ; LAB_004f4c14

