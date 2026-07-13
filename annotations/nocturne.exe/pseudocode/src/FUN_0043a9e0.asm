; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043a9e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043a9e0
        ;   Label: FUN_0043a9e0
    PUSH EDX                            ; 0043a9e4
    CALL FUN_004b49a0                   ; 0043a9e5
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b49a0()
    ADD ESP,0x4                         ; 0043a9ea
    RET                                 ; 0043a9ed

