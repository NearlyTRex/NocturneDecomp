; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0510(undefined4 param_1)
;
;
; XREF[35]:
;   FUN_0040ea80 at 0040ea85
;   FUN_00411280 at 00411292
;   FUN_00412840 at 00412852
;   FUN_00414750 at 00414767
;   FUN_00414ab0 at 00414ab8
;   FUN_0041b940 at 0041bae2
;   FUN_00423940 at 00423b28
;   FUN_00425120 at 00425143
;   FUN_004287e0 at 00428a0f
;   FUN_004459c0 at 004459ee
;   ... and 25 more
;
; Called Functions:
;   FUN_0042c510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a0510
        ;   Label: FUN_004a0510
    PUSH EDX                            ; 004a0514
    CALL FUN_0042c510                   ; 004a0515
        ;   XREF to: 0042c510 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c510()
    ADD ESP,0x4                         ; 004a051a
    RET                                 ; 004a051d

