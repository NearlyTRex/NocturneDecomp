; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004deab0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409d50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004deab0
        ;   Label: FUN_004deab0
    PUSH EDX                            ; 004deab4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004deab5
    PUSH ECX                            ; 004deab9
    CALL FUN_00409d50                   ; 004deaba
        ;   XREF to: 00409d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d50()
    ADD ESP,0x8                         ; 004deabf
    RET                                 ; 004deac2

