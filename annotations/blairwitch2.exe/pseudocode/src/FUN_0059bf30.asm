; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059bf30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d420
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059bf30
        ;   Label: FUN_0059bf30
    PUSH EDX                            ; 0059bf34
    CALL FUN_0040d420                   ; 0059bf35
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 0059bf3a
    RET                                 ; 0059bf3d

