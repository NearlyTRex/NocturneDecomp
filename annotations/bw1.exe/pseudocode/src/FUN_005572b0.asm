; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005572b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0048e7f0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005572b0
        ;   Label: FUN_005572b0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005572b3
    PUSH EDX                            ; 005572b7
    PUSH 0x1fe5c1c                      ; 005572b8
    CALL FUN_0048e7f0                   ; 005572bd
        ;   XREF to: 0048e7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e7f0()
    MOV dword ptr [ESP + 0xc],EAX       ; 005572c2
    FLD float ptr [ESP + 0xc]           ; 005572c6
    ADD ESP,0x8                         ; 005572ca
    FSTP float ptr [ESP]                ; 005572cd
    MOV EAX,dword ptr [ESP]             ; 005572d0
    ADD ESP,0x8                         ; 005572d3
    RET                                 ; 005572d6

