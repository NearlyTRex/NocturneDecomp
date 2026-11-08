; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570bd0(int param_1)
;
;
; XREF[1]:
;   FUN_00570f30 at 005710b2
;
; Referenced Globals:
;   undefined4 DAT_006232ec
;   undefined4 DAT_02c80710
;   undefined4 DAT_02c80718
;   undefined4 DAT_02c80750
;   undefined4 DAT_02c80758
;   undefined4 DAT_02c80790
;   undefined4 DAT_02c80798
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570bd0
        ;   Label: FUN_00570bd0
    PUSH ESI                            ; 00570bd1
    PUSH EDI                            ; 00570bd2
    SUB ESP,0x18                        ; 00570bd3
    MOV EDI,dword ptr [0x006232ec]      ; 00570bd6 | DAT_006232ec
    MOV ESI,dword ptr [ESP + 0x28]      ; 00570bdc
    XOR EBX,EBX                         ; 00570be0
    TEST EDI,EDI                        ; 00570be2
    JLE 0x00570c30                      ; 00570be4
        ;   XREF to: 00570c30 (CONDITIONAL_JUMP)  ; LAB_00570c30
    MOV ECX,ESI                         ; 00570be6
    XOR EDX,EDX                         ; 00570be8
    FLD double ptr [ESI + 0x4]          ; 00570bea
        ;   Label: LAB_00570bea
    FSUB double ptr [EDX + 0x2c80710]   ; 00570bed | DAT_02c80710 | DAT_02c80718
    FMUL ST0                            ; 00570bf3
    FLD double ptr [ESI + 0xc]          ; 00570bf5
    FSUB double ptr [EDX + 0x2c80750]   ; 00570bf8 | DAT_02c80750 | DAT_02c80758
    FMUL ST0                            ; 00570bfe
    FLD double ptr [ESI + 0x14]         ; 00570c00
    FXCH                                ; 00570c03
    FADDP ST2,ST0                       ; 00570c05
    FSUB double ptr [EDX + 0x2c80790]   ; 00570c07 | DAT_02c80790 | DAT_02c80798
    FMUL ST0                            ; 00570c0d
    FADDP                               ; 00570c0f
    FSQRT                               ; 00570c11
    ADD ECX,0x4                         ; 00570c13
    ADD EDX,0x8                         ; 00570c16
    INC EBX                             ; 00570c19
    FSTP float ptr [ECX + 0x6c]         ; 00570c1a
    CMP EBX,EDI                         ; 00570c1d
    JL 0x00570bea                       ; 00570c1f
        ;   XREF to: 00570bea (CONDITIONAL_JUMP)  ; LAB_00570bea
    LEA EAX,[EAX]                       ; 00570c21
    LEA EDX,[EDX]                       ; 00570c27
    LEA EAX,[EAX]                       ; 00570c2d
    MOV dword ptr [0x006232ec],EDI      ; 00570c30 | DAT_006232ec
        ;   Label: LAB_00570c30
    ADD ESP,0x18                        ; 00570c36
    POP EDI                             ; 00570c39
    POP ESI                             ; 00570c3a
    POP EBX                             ; 00570c3b
    RET                                 ; 00570c3c

