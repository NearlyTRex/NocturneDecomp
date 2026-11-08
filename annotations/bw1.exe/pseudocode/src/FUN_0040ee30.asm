; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ee30(undefined4 param_1)
;
;
; XREF[47]:
;   FUN_0040ecc0 at 0040ecd5
;   FUN_0040ed50 at 0040ed65
;   FUN_00412690 at 004126a5
;   FUN_00414320 at 00414335
;   FUN_00414900 at 00414915
;   FUN_004150f0 at 00415115
;   FUN_004159f0 at 00415a15
;   FUN_00415a90 at 00415aa5
;   FUN_0041d850 at 0041d865
;   FUN_00424e90 at 00424ea5
;   ... and 37 more
;
; Referenced Globals:
;   undefined4 DAT_005fb960
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fb960                       ; 0040ee30 | DAT_005fb960
        ;   Label: FUN_0040ee30
    PUSH 0x32                           ; 0040ee35
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ee37
    PUSH EDX                            ; 0040ee3b
    CALL FUN_005c1066                   ; 0040ee3c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 0040ee41
    RET                                 ; 0040ee44

