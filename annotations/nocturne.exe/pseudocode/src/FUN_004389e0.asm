; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004389e0(undefined4 param_1)
;
;
; XREF[4]:
;   FUN_004389c0 at 004389cc
;   FUN_0048ca70 at 0048ca7a
;   FUN_0048cb30 at 0048cb3a
;   FUN_0051f860 at 0051f86a
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

