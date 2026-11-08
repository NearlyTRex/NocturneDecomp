; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6c50(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_model_name_005e419d
;   undefined4 DAT_005e41a8
;   TerminatedCString s_active_005e41ac
;   TerminatedCString s_graveState_005e41b3
;   TerminatedCString s_curFrame_005e41be
;   TerminatedCString s_hideOnFirstFrame_005e41c7
;   TerminatedCString s_startCondition_005e41d8
;   TerminatedCString s_startSound_005e41e7
;   undefined4 DAT_0061eea8
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6c50
        ;   Label: FUN_004e6c50
    PUSH ESI                            ; 004e6c51
    SUB ESP,0x4                         ; 004e6c52
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e6c55
    PUSH EBX                            ; 004e6c59
    CALL FUN_0040c040                   ; 004e6c5a
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004e6c5f
    PUSH 0x5e419d                       ; 004e6c62 | = "model name"
    LEA EAX,[EBX + 0x158]               ; 004e6c67
    PUSH EAX                            ; 004e6c6d
    CALL FUN_0040b770                   ; 004e6c6e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 004e6c73
    PUSH 0x5e41a8                       ; 004e6c76 | DAT_005e41a8
    LEA EAX,[EBX + 0x2d8]               ; 004e6c7b
    PUSH EAX                            ; 004e6c81
    CALL FUN_0040b5f0                   ; 004e6c82
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV EDX,dword ptr [0x0061eea8]      ; 004e6c87 | DAT_0061eea8
    ADD ESP,0x8                         ; 004e6c8d
    CMP EDX,0x2                         ; 004e6c90
    JL 0x004e6cff                       ; 004e6c93
        ;   XREF to: 004e6cff (CONDITIONAL_JUMP)  ; LAB_004e6cff
    PUSH 0x5e41b3                       ; 004e6c95 | = "graveState"
    LEA EAX,[EBX + 0x2e0]               ; 004e6c9a
    PUSH EAX                            ; 004e6ca0
    CALL FUN_0040b670                   ; 004e6ca1
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004e6ca6
    PUSH 0x5e41be                       ; 004e6ca9 | = "curFrame"
        ;   Label: LAB_004e6ca9
    LEA EAX,[EBX + 0x2d4]               ; 004e6cae
    PUSH EAX                            ; 004e6cb4
    CALL FUN_0040b5f0                   ; 004e6cb5
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV ESI,dword ptr [0x0061eea8]      ; 004e6cba | DAT_0061eea8
    ADD ESP,0x8                         ; 004e6cc0
    CMP ESI,0x3                         ; 004e6cc3
    JL 0x004e6cf0                       ; 004e6cc6
        ;   XREF to: 004e6cf0 (CONDITIONAL_JUMP)  ; LAB_004e6cf0
    PUSH 0x5e41c7                       ; 004e6cc8 | = "hideOnFirstFrame"
    LEA EAX,[EBX + 0x2e4]               ; 004e6ccd
    PUSH EAX                            ; 004e6cd3
    CALL FUN_0040b670                   ; 004e6cd4
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004e6cd9
    PUSH 0x5e41d8                       ; 004e6cdc | = "startCondition"
    LEA EAX,[EBX + 0x2e8]               ; 004e6ce1
    PUSH EAX                            ; 004e6ce7
    CALL FUN_0040b440                   ; 004e6ce8
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004e6ced
    CMP dword ptr [0x0061eea8],0x4      ; 004e6cf0 | DAT_0061eea8
        ;   Label: LAB_004e6cf0
    JGE 0x004e6d30                      ; 004e6cf7
        ;   XREF to: 004e6d30 (CONDITIONAL_JUMP)  ; LAB_004e6d30
    ADD ESP,0x4                         ; 004e6cf9
    POP ESI                             ; 004e6cfc
    POP EBX                             ; 004e6cfd
    RET                                 ; 004e6cfe
    PUSH 0x5e41ac                       ; 004e6cff | = "active"
        ;   Label: LAB_004e6cff
    LEA EAX,[ESP + 0x4]                 ; 004e6d04
    PUSH EAX                            ; 004e6d08
    CALL FUN_0040b670                   ; 004e6d09
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004e6d0e
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004e6d11
    CMP dword ptr [ESP],0x0             ; 004e6d1b
    JZ 0x004e6ca9                       ; 004e6d1f
        ;   XREF to: 004e6ca9 (CONDITIONAL_JUMP)  ; LAB_004e6ca9
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004e6d21
    JMP 0x004e6ca9                      ; 004e6d2b
        ;   XREF to: 004e6ca9 (UNCONDITIONAL_JUMP)  ; LAB_004e6ca9
    PUSH 0x5e41e7                       ; 004e6d30 | = "startSound"
        ;   Label: LAB_004e6d30
    ADD EBX,0x34c                       ; 004e6d35
    PUSH EBX                            ; 004e6d3b
    CALL FUN_0040b440                   ; 004e6d3c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004e6d41
    ADD ESP,0x4                         ; 004e6d44
    POP ESI                             ; 004e6d47
    POP EBX                             ; 004e6d48
    RET                                 ; 004e6d49

