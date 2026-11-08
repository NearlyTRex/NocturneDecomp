; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc490(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004fc490
        ;   Label: FUN_004fc490
    PUSH 0x10                           ; 004fc495
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fc497
    PUSH EDX                            ; 004fc49b
    CALL FUN_005c1066                   ; 004fc49c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004fc4a1
    RET                                 ; 004fc4a4

