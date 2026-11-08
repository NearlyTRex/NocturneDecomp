; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569f30(undefined4 param_1)
;
;
; XREF[93]:
;   FUN_0040f300 at 0040f316
;   FUN_00411280 at 004112aa
;   FUN_00412840 at 0041286a
;   FUN_00412ba0 at 00412f71
;   FUN_004152c0 at 004152d6
;   FUN_0041b940 at 0041b957
;   FUN_00423940 at 00423964
;   FUN_004287e0 at 00428823
;   FUN_0042c510 at 0042c5ae
;   FUN_0042f8e0 at 0042f8f6
;   ... and 83 more
;
; Called Functions:
;   FUN_00563c40
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00569f30
        ;   Label: FUN_00569f30
    PUSH EDX                            ; 00569f34
    CALL FUN_00569eb0                   ; 00569f35
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00569f3a
    PUSH EAX                            ; 00569f3d
    CALL FUN_00563c40                   ; 00569f3e
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c40()
    ADD ESP,0x4                         ; 00569f43
    RET                                 ; 00569f46

