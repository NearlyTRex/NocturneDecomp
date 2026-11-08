; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00487eb0(undefined4 param_1)
;
;
; XREF[30]:
;   FUN_0040eee0 at 0040eee5
;   FUN_004116f0 at 004116f8
;   FUN_00412be0 at 00412be8
;   FUN_00414a60 at 00414a77
;   FUN_00414dd0 at 00414dd8
;   FUN_004184c0 at 00418662
;   FUN_0041d9c0 at 0041db9e
;   FUN_0041f0f0 at 0041f113
;   FUN_00436be0 at 00436be8
;   FUN_00439150 at 0043919e
;   ... and 20 more
;
; Called Functions:
;   FUN_00422930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00487eb0
        ;   Label: FUN_00487eb0
    PUSH EDX                            ; 00487eb4
    CALL FUN_00422930                   ; 00487eb5
        ;   XREF to: 00422930 (UNCONDITIONAL_CALL)  ; undefined FUN_00422930()
    ADD ESP,0x4                         ; 00487eba
    RET                                 ; 00487ebd

