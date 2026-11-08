; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534a10(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004bb9b0 at 004bbc20
;
; Referenced Globals:
;   undefined4 s_Set_state_version_005e5bd9+1
;   undefined4 DAT_005e5bf0
;   TerminatedCString s_Camera_count_enabled_lis_005e5bf3
;   undefined4 DAT_005e5c12
;   undefined4 DAT_005e5c16
;
; Called Functions:
;   FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534a10
        ;   Label: FUN_00534a10
    PUSH EDI                            ; 00534a11
    PUSH EBP                            ; 00534a12
    MOV EBP,dword ptr [ESP + 0x10]      ; 00534a13
    MOV EDI,dword ptr [ESP + 0x14]      ; 00534a17
    PUSH 0x5e5bda                       ; 00534a1b | s_Set_state_version_005e5bd9+1
    PUSH EDI                            ; 00534a20
    CALL FUN_005b8010                   ; 00534a21
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 00534a26
    PUSH 0x5e5bf0                       ; 00534a29 | DAT_005e5bf0
    PUSH EDI                            ; 00534a2e
    CALL FUN_005b8010                   ; 00534a2f
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 00534a34
    PUSH 0x5e5bf3                       ; 00534a37 | = "// Camera count, enabled list\n"
    PUSH EDI                            ; 00534a3c
    CALL FUN_005b8010                   ; 00534a3d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 00534a42
    MOV EDX,dword ptr [EBP]             ; 00534a45
    PUSH EDX                            ; 00534a48
    PUSH 0x5e5c12                       ; 00534a49 | DAT_005e5c12
    PUSH EDI                            ; 00534a4e
    XOR EBX,EBX                         ; 00534a4f
    CALL FUN_005b8010                   ; 00534a51
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV ECX,dword ptr [EBP]             ; 00534a56
    ADD ESP,0xc                         ; 00534a59
    TEST ECX,ECX                        ; 00534a5c
    JLE 0x00534a87                      ; 00534a5e
        ;   XREF to: 00534a87 (CONDITIONAL_JUMP)  ; LAB_00534a87
    PUSH ESI                            ; 00534a60
    MOV ESI,EBP                         ; 00534a61
    MOV EAX,dword ptr [ESI + 0x1a4]     ; 00534a63
        ;   Label: LAB_00534a63
    PUSH EAX                            ; 00534a69
    PUSH 0x5e5c16                       ; 00534a6a | DAT_005e5c16
    PUSH EDI                            ; 00534a6f
    ADD ESI,0x1a4                       ; 00534a70
    INC EBX                             ; 00534a76
    CALL FUN_005b8010                   ; 00534a77
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV EDX,dword ptr [EBP]             ; 00534a7c
    ADD ESP,0xc                         ; 00534a7f
    CMP EBX,EDX                         ; 00534a82
    JL 0x00534a63                       ; 00534a84
        ;   XREF to: 00534a63 (CONDITIONAL_JUMP)  ; LAB_00534a63
    POP ESI                             ; 00534a86
    POP EBP                             ; 00534a87
        ;   Label: LAB_00534a87
    POP EDI                             ; 00534a88
    POP EBX                             ; 00534a89
    RET                                 ; 00534a8a

