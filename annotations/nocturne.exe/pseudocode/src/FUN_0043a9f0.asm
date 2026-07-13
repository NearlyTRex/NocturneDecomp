; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043a9f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00426440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043a9f0
        ;   Label: FUN_0043a9f0
    PUSH EDX                            ; 0043a9f4
    CALL FUN_00426440                   ; 0043a9f5
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; undefined FUN_00426440()
    ADD ESP,0x4                         ; 0043a9fa
    RET                                 ; 0043a9fd

