; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00549330(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fba10                       ; 00549330
        ;   Label: FUN_00549330
    PUSH 0x28                           ; 00549335
    MOV EDX,dword ptr [ESP + 0xc]       ; 00549337
    PUSH EDX                            ; 0054933b
    CALL FUN_005b854f                   ; 0054933c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 00549341
    RET                                 ; 00549344

