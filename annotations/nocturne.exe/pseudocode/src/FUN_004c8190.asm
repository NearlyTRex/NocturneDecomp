; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8190(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00409fc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c8190
        ;   Label: FUN_004c8190
    PUSH EDX                            ; 004c8194
    CALL FUN_00409fc0                   ; 004c8195
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 004c819a
    RET                                 ; 004c819d

