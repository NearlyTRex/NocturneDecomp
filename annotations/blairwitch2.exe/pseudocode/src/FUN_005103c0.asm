; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005103c0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00510070 at 0051008c
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 005103c0
        ;   Label: FUN_005103c0
    PUSH 0x7                            ; 005103c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005103c7
    PUSH EDX                            ; 005103cb
    CALL FUN_005b854f                   ; 005103cc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 005103d1
    RET                                 ; 005103d4

