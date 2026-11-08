; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051a3a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00503a30 at 00503a5d
;
; Called Functions:
;   FUN_0051a3b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a3a0
        ;   Label: FUN_0051a3a0
    PUSH EDX                            ; 0051a3a4
    CALL FUN_0051a3b0                   ; 0051a3a5
        ;   XREF to: 0051a3b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a3b0()
    ADD ESP,0x4                         ; 0051a3aa
    RET                                 ; 0051a3ad

