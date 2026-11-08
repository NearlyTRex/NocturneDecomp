; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059bf40(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d440
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0059bf40
        ;   Label: FUN_0059bf40
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059bf42
    PUSH EDX                            ; 0059bf46
    CALL FUN_0040d440                   ; 0059bf47
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d440()
    ADD ESP,0x8                         ; 0059bf4c
    RET                                 ; 0059bf4f

