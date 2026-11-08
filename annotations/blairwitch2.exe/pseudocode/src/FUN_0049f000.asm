; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f000(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6890                       ; 0049f000
        ;   Label: FUN_0049f000
    PUSH 0x32                           ; 0049f005
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f007
    PUSH EDX                            ; 0049f00b
    CALL FUN_005b854f                   ; 0049f00c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f011
    RET                                 ; 0049f014

