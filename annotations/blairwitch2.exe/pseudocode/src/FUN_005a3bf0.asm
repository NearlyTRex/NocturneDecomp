; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3bf0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_BreathState_005f0204+2
;   undefined4 DAT_0061eb24
;
; Called Functions:
;   FUN_0040b960
;   FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3bf0
        ;   Label: FUN_005a3bf0
    PUSH EDX                            ; 005a3bf4
    CALL FUN_0059fc10                   ; 005a3bf5
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fc10()
    MOV ECX,dword ptr [0x0061eb24]      ; 005a3bfa | DAT_0061eb24
    ADD ESP,0x4                         ; 005a3c00
    CMP ECX,0x2                         ; 005a3c03
    JGE 0x005a3c09                      ; 005a3c06
        ;   XREF to: 005a3c09 (CONDITIONAL_JUMP)  ; LAB_005a3c09
    RET                                 ; 005a3c08
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a3c09
        ;   Label: LAB_005a3c09
    PUSH 0x5f0206                       ; 005a3c0d | s_BreathState_005f0204+2
    ADD EAX,0x11864                     ; 005a3c12
    PUSH EAX                            ; 005a3c17
    CALL FUN_0040b960                   ; 005a3c18
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 005a3c1d
    RET                                 ; 005a3c20

