; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005145d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5faac0                       ; 005145d0
        ;   Label: FUN_005145d0
    PUSH 0xc                            ; 005145d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005145d7
    PUSH EDX                            ; 005145db
    CALL FUN_005b854f                   ; 005145dc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 005145e1
    RET                                 ; 005145e4

