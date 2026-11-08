; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050ced0(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_004221c0 at 0042231f
;   FUN_00422570 at 0042288f
;   FUN_0042b9e0 at 0042bdf5
;   FUN_004c07b0 at 004c1998
;   FUN_004c6c80 at 004c6e20
;   FUN_00579130 at 00579202
;
; Called Functions:
;   FUN_0050cd60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050ced0
        ;   Label: FUN_0050ced0
    PUSH EDX                            ; 0050ced4
    CALL FUN_0050cd60                   ; 0050ced5
        ;   XREF to: 0050cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0050cd60()
    ADD ESP,0x4                         ; 0050ceda
    RET                                 ; 0050cedd

