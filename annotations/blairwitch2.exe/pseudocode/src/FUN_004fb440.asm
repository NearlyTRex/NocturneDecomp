; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fb440(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004e4e20 at 004e4e4d
;
; Called Functions:
;   FUN_004fb450
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fb440
        ;   Label: FUN_004fb440
    PUSH EDX                            ; 004fb444
    CALL FUN_004fb450                   ; 004fb445
        ;   XREF to: 004fb450 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb450()
    ADD ESP,0x4                         ; 004fb44a
    RET                                 ; 004fb44d

