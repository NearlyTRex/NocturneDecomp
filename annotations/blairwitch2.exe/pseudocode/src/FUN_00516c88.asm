; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516c88(void)
;
;
; XREF[1]:
;   FUN_00516a60 at 00516afd
;
; Called Functions:
;   FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00516c88
        ;   Label: FUN_00516c88
    MOV EAX,dword ptr [EBP + 0x14]      ; 00516c89
    PUSH EAX                            ; 00516c8c
    CALL FUN_005b8ce0                   ; 00516c8d
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 00516c92
    MOV dword ptr [EBP + 0x14],EAX      ; 00516c95
    ADD ESP,0x144                       ; 00516c98
    POP EBP                             ; 00516c9e
    POP EDI                             ; 00516c9f
    POP ESI                             ; 00516ca0
    POP EBX                             ; 00516ca1
    RET                                 ; 00516ca2

