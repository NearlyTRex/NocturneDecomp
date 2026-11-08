; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00468860(int param_1)
;
;
; XREF[45]:
;   FUN_0040dbc0 at 0040dbd6
;   FUN_0040e0b0 at 0040e0c6
;   FUN_0040e5d0 at 0040e5e6
;   FUN_0040eeb0 at 0040eec4
;   FUN_0040f180 at 0040f1a8
;   FUN_00410b50 at 00410b72
;   FUN_00414410 at 00414424
;   FUN_004149f0 at 00414a06
;   FUN_00415d90 at 00415dc2
;   FUN_0041b170 at 0041b178
;   ... and 35 more
;
; Called Functions:
;   FUN_00468880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468860
        ;   Label: FUN_00468860
    MOV EBX,dword ptr [ESP + 0x8]       ; 00468861
    MOV byte ptr [EBX + 0x78],0x0       ; 00468865
    PUSH EBX                            ; 00468869
    MOV dword ptr [EBX + 0x178],0x0     ; 0046886a
    CALL FUN_00468880                   ; 00468874
        ;   XREF to: 00468880 (UNCONDITIONAL_CALL)  ; undefined FUN_00468880()
    ADD ESP,0x4                         ; 00468879
    MOV EAX,EBX                         ; 0046887c
    POP EBX                             ; 0046887e
    RET                                 ; 0046887f

