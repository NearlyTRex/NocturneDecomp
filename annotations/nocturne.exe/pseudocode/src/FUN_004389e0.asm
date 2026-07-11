; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004389e0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004389e0 | DAT_005993b0
        ;   Label: FUN_004389e0
    PUSH 0x3                            ; 004389e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004389e7
    PUSH EDX                            ; 004389eb
    CALL FUN_0056494f                   ; 004389ec
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 004389f1
    RET                                 ; 004389f4

