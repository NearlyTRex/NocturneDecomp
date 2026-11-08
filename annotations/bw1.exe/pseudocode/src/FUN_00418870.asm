; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418870(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d0a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00418870
        ;   Label: FUN_00418870
    PUSH EDX                            ; 00418874
    CALL FUN_0040d0a0                   ; 00418875
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 0041887a
    RET                                 ; 0041887d

