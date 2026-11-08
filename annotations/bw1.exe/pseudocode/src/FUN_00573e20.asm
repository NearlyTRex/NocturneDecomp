; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00573e20(void)
;
;
; XREF[1]:
;   FUN_004ce580 at 004cecfe
;
; Referenced Globals:
;   undefined4 DAT_02c74650
;   undefined4 DAT_02c74654
;   undefined4 DAT_02c7476c
;   undefined4 DAT_02c74770
;
; *****************************************************************************

section .text

    MOV EAX,0x2c745ec                   ; 00573e20
        ;   Label: FUN_00573e20
    XOR EDX,EDX                         ; 00573e25
    LEA ECX,[EAX + 0x4700]              ; 00573e27
    CMP dword ptr [EAX + 0x68],0x0      ; 00573e2d | DAT_02c74654 | DAT_02c74770
        ;   Label: LAB_00573e2d
    JZ 0x00573e3a                       ; 00573e31
        ;   XREF to: 00573e3a (CONDITIONAL_JUMP)  ; LAB_00573e3a
    CMP dword ptr [EAX + 0x64],0x0      ; 00573e33 | DAT_02c74650 | DAT_02c7476c
    JZ 0x00573e3a                       ; 00573e37
        ;   XREF to: 00573e3a (CONDITIONAL_JUMP)  ; LAB_00573e3a
    INC EDX                             ; 00573e39
    ADD EAX,0x11c                       ; 00573e3a
        ;   Label: LAB_00573e3a
    CMP EAX,ECX                         ; 00573e3f
    JNZ 0x00573e2d                      ; 00573e41
        ;   XREF to: 00573e2d (CONDITIONAL_JUMP)  ; LAB_00573e2d
    MOV EAX,EDX                         ; 00573e43
    RET                                 ; 00573e45

