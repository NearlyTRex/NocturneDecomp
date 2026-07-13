; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00424ff0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00423ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424ff0
        ;   Label: FUN_00424ff0
    SUB ESP,0x3c                        ; 00424ff1
    MOV EBX,dword ptr [ESP + 0x44]      ; 00424ff4
    PUSH EBX                            ; 00424ff8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00424ff9
    CALL dword ptr [EAX + 0x104]        ; 00424fff
    ADD ESP,0x4                         ; 00425005
    TEST EAX,EAX                        ; 00425008
    JLE 0x00425011                      ; 0042500a
        ;   XREF to: 00425011 (CONDITIONAL_JUMP)  ; LAB_00425011
    ADD ESP,0x3c                        ; 0042500c
    POP EBX                             ; 0042500f
    RET                                 ; 00425010
    MOV EAX,ESP                         ; 00425011
        ;   Label: LAB_00425011
    PUSH EAX                            ; 00425013
    CALL FUN_00423ed0                   ; 00425014
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00423ed0()
    ADD ESP,0x4                         ; 00425019
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042501c
    MOV dword ptr [ESP + 0x30],EAX      ; 00425020
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00425024
    MOV dword ptr [ESP + 0x4],EAX       ; 00425028
    MOV EAX,ESP                         ; 0042502c
    PUSH EAX                            ; 0042502e
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0042502f
    PUSH EBX                            ; 00425035
    CALL dword ptr [EDX + 0x100]        ; 00425036
    ADD ESP,0x8                         ; 0042503c
    ADD ESP,0x3c                        ; 0042503f
    POP EBX                             ; 00425042
    RET                                 ; 00425043

