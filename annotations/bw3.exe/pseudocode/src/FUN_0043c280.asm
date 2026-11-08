; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043c280(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_0043f920 at 0043f9b0
;   FUN_0043f9d0 at 0043f9ee
;   FUN_0059df60 at 0059df85
;
; Called Functions:
;   FUN_0043c300
;   FUN_00460530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043c280
        ;   Label: FUN_0043c280
    PUSH EDX                            ; 0043c284
    CALL FUN_0043c300                   ; 0043c285
        ;   XREF to: 0043c300 (UNCONDITIONAL_CALL)  ; undefined FUN_0043c300()
    ADD ESP,0x4                         ; 0043c28a
    PUSH 0x1                            ; 0043c28d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043c28f
    PUSH ECX                            ; 0043c293
    CALL FUN_00460530                   ; 0043c294
        ;   XREF to: 00460530 (UNCONDITIONAL_CALL)  ; undefined FUN_00460530()
    ADD ESP,0x8                         ; 0043c299
    RET                                 ; 0043c29c

