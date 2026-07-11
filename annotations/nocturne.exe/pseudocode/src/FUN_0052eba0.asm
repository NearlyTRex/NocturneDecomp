; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052eba0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_0041e5e0 at 0041e7b2
;   FUN_0048d0c0 at 0048d24b
;   FUN_004f6170 at 004f634e
;   FUN_0052dff0 at 0052e0b6
;
; Called Functions:
;   FUN_00526c50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0052eba0
        ;   Label: FUN_0052eba0
    PUSH EDX                            ; 0052eba4
    CALL FUN_00526c50                   ; 0052eba5
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 0052ebaa
    RET                                 ; 0052ebad

