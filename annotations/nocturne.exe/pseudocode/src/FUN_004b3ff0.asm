; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3ff0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00426440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3ff0
        ;   Label: FUN_004b3ff0
    PUSH EDX                            ; 004b3ff4
    CALL FUN_00426440                   ; 004b3ff5
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; undefined FUN_00426440()
    ADD ESP,0x4                         ; 004b3ffa
    RET                                 ; 004b3ffd

