; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468990(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fec60                       ; 00468990
        ;   Label: FUN_00468990
    PUSH 0x100                          ; 00468995
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046899a
    PUSH EDX                            ; 0046899e
    CALL FUN_005c1066                   ; 0046899f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004689a4
    RET                                 ; 004689a7

