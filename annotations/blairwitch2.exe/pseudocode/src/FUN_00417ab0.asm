; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00417ab0(int param_1)
;
;
; Called Functions:
;   FUN_00409f20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417ab0
        ;   Label: FUN_00417ab0
    CMP dword ptr [EAX + 0x2b4],0x0     ; 00417ab4
    JZ 0x00417ac0                       ; 00417abb
        ;   XREF to: 00417ac0 (CONDITIONAL_JUMP)  ; LAB_00417ac0
    XOR EAX,EAX                         ; 00417abd
    RET                                 ; 00417abf
    PUSH EAX                            ; 00417ac0
        ;   Label: LAB_00417ac0
    CALL FUN_00409f20                   ; 00417ac1
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f20()
    ADD ESP,0x4                         ; 00417ac6
    RET                                 ; 00417ac9

