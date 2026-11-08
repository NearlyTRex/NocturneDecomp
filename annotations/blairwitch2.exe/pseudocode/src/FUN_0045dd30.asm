; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045dd30(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_stand_005d0869
;
; Called Functions:
;   FUN_004d02e0
;   FUN_00503620
;   FUN_00503950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dd30
        ;   Label: FUN_0045dd30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045dd31
    PUSH EBX                            ; 0045dd35
    ADD EBX,0x2b4                       ; 0045dd36
    CALL FUN_004d02e0                   ; 0045dd3c
        ;   XREF to: 004d02e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d02e0()
    MOV dword ptr [EBX + 0x253e0],0x0   ; 0045dd41
    ADD ESP,0x4                         ; 0045dd4b
    MOV dword ptr [EBX + 0x253e4],0x0   ; 0045dd4e
    PUSH 0x0                            ; 0045dd58
    MOV dword ptr [EBX + 0x253f0],0x0   ; 0045dd5a
    PUSH 0x5d0869                       ; 0045dd64 | = "stand"
    MOV dword ptr [EBX + 0x2a50],0x0    ; 0045dd69
    PUSH EBX                            ; 0045dd73
    MOV dword ptr [EBX + 0x2a54],0x0    ; 0045dd74
    CALL FUN_00503950                   ; 0045dd7e
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; undefined FUN_00503950()
    ADD ESP,0xc                         ; 0045dd83
    PUSH 0x1                            ; 0045dd86
    PUSH 0x0                            ; 0045dd88
    PUSH EBX                            ; 0045dd8a
    CALL FUN_00503620                   ; 0045dd8b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0045dd90
    POP EBX                             ; 0045dd93
    RET                                 ; 0045dd94

