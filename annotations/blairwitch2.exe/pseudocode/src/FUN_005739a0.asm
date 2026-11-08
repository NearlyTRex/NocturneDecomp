; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005739a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00574db0 at 00574db8
;
; Called Functions:
;   FUN_005739b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005739a0
        ;   Label: FUN_005739a0
    PUSH EDX                            ; 005739a4
    CALL FUN_005739b0                   ; 005739a5
        ;   XREF to: 005739b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005739b0()
    ADD ESP,0x4                         ; 005739aa
    RET                                 ; 005739ad

