; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3fe0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3fe0
        ;   Label: FUN_004b3fe0
    PUSH EDX                            ; 004b3fe4
    CALL FUN_004b49a0                   ; 004b3fe5
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b49a0()
    ADD ESP,0x4                         ; 004b3fea
    RET                                 ; 004b3fed

