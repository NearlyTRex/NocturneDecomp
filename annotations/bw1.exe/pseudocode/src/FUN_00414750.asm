; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414750(int param_1)
;
;
; Called Functions:
;   FUN_004a0510
;   FUN_00569b20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414750
        ;   Label: FUN_00414750
    ADD EAX,0x158                       ; 00414754
    PUSH EAX                            ; 00414759
    CALL FUN_00569b20                   ; 0041475a
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 0041475f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00414762
    PUSH EDX                            ; 00414766
    CALL FUN_004a0510                   ; 00414767
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 0041476c
    RET                                 ; 0041476f

