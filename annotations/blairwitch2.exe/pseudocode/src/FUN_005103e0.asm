; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005103e0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00510070 at 0051007c
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 005103e0
        ;   Label: FUN_005103e0
    PUSH 0xf                            ; 005103e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005103e7
    PUSH EDX                            ; 005103eb
    CALL FUN_005b854f                   ; 005103ec
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 005103f1
    RET                                 ; 005103f4

