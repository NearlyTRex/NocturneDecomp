; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00421a00(int param_1)
;
;
; XREF[4]:
;   FUN_0041f0f0 at 0041f327
;   FUN_00420000 at 00420111
;   FUN_004203a0 at 0042054e
;   FUN_00420830 at 00420835
;
; Referenced Globals:
;   undefined4 DAT_005cca81
;   undefined4 DAT_005cca85
;
; Called Functions:
;   FUN_0041a590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421a00
        ;   Label: FUN_00421a00
    PUSH ESI                            ; 00421a01
    PUSH EDI                            ; 00421a02
    PUSH EBP                            ; 00421a03
    MOV EDI,dword ptr [ESP + 0x14]      ; 00421a04
    LEA EBX,[EDI + 0x1e608]             ; 00421a08
    LEA ESI,[EDI + 0x10b08]             ; 00421a0e
    MOV EAX,EBX                         ; 00421a14
    MOV EBP,ESI                         ; 00421a16
    CMP EBX,ESI                         ; 00421a18
    JNZ 0x00421aed                      ; 00421a1a
        ;   XREF to: 00421aed (CONDITIONAL_JUMP)  ; LAB_00421aed
    LEA EBX,[EAX + 0xc]                 ; 00421a20
        ;   Label: LAB_00421a20
    CMP EBX,EBP                         ; 00421a23
    JZ 0x00421a38                       ; 00421a25
        ;   XREF to: 00421a38 (CONDITIONAL_JUMP)  ; LAB_00421a38
    MOV EAX,dword ptr [EBP]             ; 00421a27
    MOV dword ptr [EBX],EAX             ; 00421a2a
    MOV EAX,dword ptr [EBP + 0x4]       ; 00421a2c
    MOV dword ptr [EBX + 0x4],EAX       ; 00421a2f
    MOV EAX,dword ptr [EBP + 0x8]       ; 00421a32
    MOV dword ptr [EBX + 0x8],EAX       ; 00421a35
    MOV ESI,0x1                         ; 00421a38
        ;   Label: LAB_00421a38
    CMP ESI,dword ptr [EDI + 0x10afc]   ; 00421a3d
    JGE 0x00421a70                      ; 00421a43
        ;   XREF to: 00421a70 (CONDITIONAL_JUMP)  ; LAB_00421a70
    LEA EBP,[EDI + 0x1e608]             ; 00421a45
    LEA EBX,[EDI + 0x10b48]             ; 00421a4b
    PUSH EBX                            ; 00421a51
        ;   Label: LAB_00421a51
    PUSH EBP                            ; 00421a52
    INC ESI                             ; 00421a53
    CALL FUN_0041a590                   ; 00421a54
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a590()
    ADD EBX,0x40                        ; 00421a59
    MOV ECX,dword ptr [EDI + 0x10afc]   ; 00421a5c
    ADD ESP,0x8                         ; 00421a62
    CMP ESI,ECX                         ; 00421a65
    JL 0x00421a51                       ; 00421a67
        ;   XREF to: 00421a51 (CONDITIONAL_JUMP)  ; LAB_00421a51
    LEA EAX,[EAX]                       ; 00421a69
    NOP                                 ; 00421a6f
    FLD float ptr [EDI + 0x1e608]       ; 00421a70
        ;   Label: LAB_00421a70
    FLD float ptr [EDI + 0x1e60c]       ; 00421a76
    FLD float ptr [EDI + 0x1e610]       ; 00421a7c
    FLD float ptr [EDI + 0x1e614]       ; 00421a82
    FLD float ptr [EDI + 0x1e618]       ; 00421a88
    FLD float ptr [EDI + 0x1e61c]       ; 00421a8e
    FXCH ST5                            ; 00421a94
    FLD float ptr [0x005cca81]          ; 00421a96 | DAT_005cca81
    FXCH                                ; 00421a9c
    FADD ST0,ST1                        ; 00421a9e
    FXCH ST5                            ; 00421aa0
    FADD ST0,ST1                        ; 00421aa2
    FXCH ST4                            ; 00421aa4
    FADDP                               ; 00421aa6
    FXCH ST2                            ; 00421aa8
    FLD float ptr [0x005cca85]          ; 00421aaa | DAT_005cca85
    FXCH                                ; 00421ab0
    FADD ST0,ST1                        ; 00421ab2
    FXCH ST2                            ; 00421ab4
    FADD ST0,ST1                        ; 00421ab6
    FXCH ST6                            ; 00421ab8
    FADDP                               ; 00421aba
    FXCH ST3                            ; 00421abc
    FSTP float ptr [EDI + 0x1e60c]      ; 00421abe
    FXCH                                ; 00421ac4
    FSTP float ptr [EDI + 0x1e610]      ; 00421ac6
    FSTP float ptr [EDI + 0x1e614]      ; 00421acc
    FXCH ST2                            ; 00421ad2
    FSTP float ptr [EDI + 0x1e618]      ; 00421ad4
    FXCH                                ; 00421ada
    FSTP float ptr [EDI + 0x1e61c]      ; 00421adc
    FSTP float ptr [EDI + 0x1e608]      ; 00421ae2
    POP EBP                             ; 00421ae8
    POP EDI                             ; 00421ae9
    POP ESI                             ; 00421aea
    POP EBX                             ; 00421aeb
    RET                                 ; 00421aec
    MOV EDX,dword ptr [ESI]             ; 00421aed
        ;   Label: LAB_00421aed
    MOV dword ptr [EBX],EDX             ; 00421aef
    MOV EDX,dword ptr [ESI + 0x4]       ; 00421af1
    MOV dword ptr [EBX + 0x4],EDX       ; 00421af4
    MOV EDX,dword ptr [ESI + 0x8]       ; 00421af7
    MOV dword ptr [EBX + 0x8],EDX       ; 00421afa
    JMP 0x00421a20                      ; 00421afd
        ;   XREF to: 00421a20 (UNCONDITIONAL_JUMP)  ; LAB_00421a20

