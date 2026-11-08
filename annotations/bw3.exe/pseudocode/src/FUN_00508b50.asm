; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00508b50(int param_1)
;
;
; Called Functions:
;   FUN_004c4d60
;   FUN_00508ea0
;   FUN_00508ec0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00508b50
        ;   Label: FUN_00508b50
    PUSH 0x0                            ; 00508b54
    ADD EAX,0x12c                       ; 00508b56
    PUSH EAX                            ; 00508b5b
    CALL FUN_00508ec0                   ; 00508b5c
        ;   XREF to: 00508ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00508ec0()
    ADD ESP,0x8                         ; 00508b61
    PUSH 0x0                            ; 00508b64
    SUB EAX,0x8c                        ; 00508b66
    PUSH EAX                            ; 00508b6b
    CALL FUN_00508ea0                   ; 00508b6c
        ;   XREF to: 00508ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00508ea0()
    ADD ESP,0x8                         ; 00508b71
    PUSH 0x0                            ; 00508b74
    SUB EAX,0xa0                        ; 00508b76
    PUSH EAX                            ; 00508b7b
    CALL FUN_004c4d60                   ; 00508b7c
        ;   XREF to: 004c4d60 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4d60()
    ADD ESP,0x8                         ; 00508b81
    RET                                 ; 00508b84

