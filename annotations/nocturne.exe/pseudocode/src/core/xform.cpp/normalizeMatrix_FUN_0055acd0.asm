; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_normalizeMatrix_FUN_0055acd0(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055acd0
        ;   Label: core_xform.cpp_normalizeMatrix_FUN_0055acd0
    PUSH ESI                            ; 0055acd1
    PUSH EDI                            ; 0055acd2
    PUSH EBP                            ; 0055acd3
    MOV EBP,ESP                         ; 0055acd4
    SUB ESP,0x30                        ; 0055acd6
    AND ESP,0xfffffff8                  ; 0055acd9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0055acdc
    FLD float ptr [EDX + 0x4]           ; 0055acdf
    FMUL ST0                            ; 0055ace2
    FLD float ptr [EDX]                 ; 0055ace4
    FMUL ST0                            ; 0055ace6
    FADDP                               ; 0055ace8
    FLD float ptr [EDX + 0x8]           ; 0055acea
    FMUL ST0                            ; 0055aced
    FADDP                               ; 0055acef
    FLDZ                                ; 0055acf1
    FXCH                                ; 0055acf3
    FSTP double ptr [ESP]               ; 0055acf5
    FCOMP double ptr [ESP]              ; 0055acf8
    FNSTSW AX                           ; 0055acfb
    SAHF                                ; 0055acfd
    JNC 0x0055ad52                      ; 0055acfe
        ;   XREF to: 0055ad52 (CONDITIONAL_JUMP)  ; LAB_0055ad52
    MOV ECX,dword ptr [ESP + 0x4]       ; 0055ad00
    MOV EBX,dword ptr [ESP]             ; 0055ad04
    CMP ECX,0x3ff00000                  ; 0055ad07
    JNZ 0x0055ad13                      ; 0055ad0d
        ;   XREF to: 0055ad13 (CONDITIONAL_JUMP)  ; LAB_0055ad13
    TEST EBX,EBX                        ; 0055ad0f
    JZ 0x0055ad52                       ; 0055ad11
        ;   XREF to: 0055ad52 (CONDITIONAL_JUMP)  ; LAB_0055ad52
    FLD double ptr [ESP]                ; 0055ad13
        ;   Label: LAB_0055ad13
    FSQRT                               ; 0055ad16
    FLD1                                ; 0055ad18
    FDIVRP                              ; 0055ad1a
    FLD float ptr [EDX]                 ; 0055ad1c
    FLD ST0                             ; 0055ad1e
    FXCH ST2                            ; 0055ad20
    FSTP double ptr [ESP]               ; 0055ad22
    FXCH                                ; 0055ad25
    FMUL double ptr [ESP]               ; 0055ad27
    FLD float ptr [EDX + 0x4]           ; 0055ad2a
    FLD ST0                             ; 0055ad2d
    FMUL double ptr [ESP]               ; 0055ad2f
    FLD float ptr [EDX + 0x8]           ; 0055ad32
    FLD ST0                             ; 0055ad35
    FMUL double ptr [ESP]               ; 0055ad37
    FXCH ST4                            ; 0055ad3a
    FSTP ST5                            ; 0055ad3c
    FXCH                                ; 0055ad3e
    FSTP ST2                            ; 0055ad40
    FXCH ST2                            ; 0055ad42
    FSTP ST2                            ; 0055ad44
    FXCH ST2                            ; 0055ad46
    FSTP float ptr [EDX]                ; 0055ad48
    FXCH                                ; 0055ad4a
    FSTP float ptr [EDX + 0x4]          ; 0055ad4c
    FSTP float ptr [EDX + 0x8]          ; 0055ad4f
    FLD float ptr [EDX + 0x10]          ; 0055ad52
        ;   Label: LAB_0055ad52
    FMUL ST0                            ; 0055ad55
    FLD float ptr [EDX + 0x14]          ; 0055ad57
    FMUL ST0                            ; 0055ad5a
    FADDP                               ; 0055ad5c
    FLD float ptr [EDX + 0x18]          ; 0055ad5e
    FMUL ST0                            ; 0055ad61
    FADDP                               ; 0055ad63
    FLDZ                                ; 0055ad65
    FXCH                                ; 0055ad67
    FSTP double ptr [ESP + 0x10]        ; 0055ad69
    FCOMP double ptr [ESP + 0x10]       ; 0055ad6d
    FNSTSW AX                           ; 0055ad71
    SAHF                                ; 0055ad73
    JNC 0x0055add0                      ; 0055ad74
        ;   XREF to: 0055add0 (CONDITIONAL_JUMP)  ; LAB_0055add0
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055ad76
    MOV EDI,dword ptr [ESP + 0x10]      ; 0055ad7a
    CMP ESI,0x3ff00000                  ; 0055ad7e
    JNZ 0x0055ad8a                      ; 0055ad84
        ;   XREF to: 0055ad8a (CONDITIONAL_JUMP)  ; LAB_0055ad8a
    TEST EDI,EDI                        ; 0055ad86
    JZ 0x0055add0                       ; 0055ad88
        ;   XREF to: 0055add0 (CONDITIONAL_JUMP)  ; LAB_0055add0
    FLD double ptr [ESP + 0x10]         ; 0055ad8a
        ;   Label: LAB_0055ad8a
    FSQRT                               ; 0055ad8e
    FLD1                                ; 0055ad90
    FDIVRP                              ; 0055ad92
    FLD float ptr [EDX + 0x10]          ; 0055ad94
    FLD ST0                             ; 0055ad97
    FXCH ST2                            ; 0055ad99
    FSTP double ptr [ESP + 0x10]        ; 0055ad9b
    FXCH                                ; 0055ad9f
    FMUL double ptr [ESP + 0x10]        ; 0055ada1
    FLD float ptr [EDX + 0x14]          ; 0055ada5
    FLD ST0                             ; 0055ada8
    FMUL double ptr [ESP + 0x10]        ; 0055adaa
    FLD float ptr [EDX + 0x18]          ; 0055adae
    FLD ST0                             ; 0055adb1
    FMUL double ptr [ESP + 0x10]        ; 0055adb3
    FXCH ST4                            ; 0055adb7
    FSTP ST5                            ; 0055adb9
    FXCH                                ; 0055adbb
    FSTP ST2                            ; 0055adbd
    FXCH ST2                            ; 0055adbf
    FSTP ST2                            ; 0055adc1
    FXCH ST2                            ; 0055adc3
    FSTP float ptr [EDX + 0x10]         ; 0055adc5
    FXCH                                ; 0055adc8
    FSTP float ptr [EDX + 0x14]         ; 0055adca
    FSTP float ptr [EDX + 0x18]         ; 0055adcd
    FLD float ptr [EDX + 0x20]          ; 0055add0
        ;   Label: LAB_0055add0
    FMUL ST0                            ; 0055add3
    FLD float ptr [EDX + 0x24]          ; 0055add5
    FMUL ST0                            ; 0055add8
    FADDP                               ; 0055adda
    FLD float ptr [EDX + 0x28]          ; 0055addc
    FMUL ST0                            ; 0055addf
    FADDP                               ; 0055ade1
    FLDZ                                ; 0055ade3
    FXCH                                ; 0055ade5
    FSTP double ptr [ESP + 0x8]         ; 0055ade7
    FCOMP double ptr [ESP + 0x8]        ; 0055adeb
    FNSTSW AX                           ; 0055adef
    SAHF                                ; 0055adf1
    JNC 0x0055ae07                      ; 0055adf2
        ;   XREF to: 0055ae07 (CONDITIONAL_JUMP)  ; LAB_0055ae07
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055adf4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055adf8
    CMP EAX,0x3ff00000                  ; 0055adfc
    JNZ 0x0055ae0e                      ; 0055ae01
        ;   XREF to: 0055ae0e (CONDITIONAL_JUMP)  ; LAB_0055ae0e
    TEST ECX,ECX                        ; 0055ae03
    JNZ 0x0055ae0e                      ; 0055ae05
        ;   XREF to: 0055ae0e (CONDITIONAL_JUMP)  ; LAB_0055ae0e
    MOV ESP,EBP                         ; 0055ae07
        ;   Label: LAB_0055ae07
    POP EBP                             ; 0055ae09
    POP EDI                             ; 0055ae0a
    POP ESI                             ; 0055ae0b
    POP EBX                             ; 0055ae0c
    RET                                 ; 0055ae0d
    FLD double ptr [ESP + 0x8]          ; 0055ae0e
        ;   Label: LAB_0055ae0e
    FSQRT                               ; 0055ae12
    FLD1                                ; 0055ae14
    FDIVRP                              ; 0055ae16
    FLD float ptr [EDX + 0x20]          ; 0055ae18
    FLD ST0                             ; 0055ae1b
    FXCH ST2                            ; 0055ae1d
    FSTP double ptr [ESP + 0x8]         ; 0055ae1f
    FXCH                                ; 0055ae23
    FMUL double ptr [ESP + 0x8]         ; 0055ae25
    FLD float ptr [EDX + 0x24]          ; 0055ae29
    FLD ST0                             ; 0055ae2c
    FMUL double ptr [ESP + 0x8]         ; 0055ae2e
    FLD float ptr [EDX + 0x28]          ; 0055ae32
    FLD ST0                             ; 0055ae35
    FMUL double ptr [ESP + 0x8]         ; 0055ae37
    FXCH ST4                            ; 0055ae3b
    FSTP ST5                            ; 0055ae3d
    FXCH                                ; 0055ae3f
    FSTP ST2                            ; 0055ae41
    FXCH ST2                            ; 0055ae43
    FSTP ST2                            ; 0055ae45
    FXCH ST2                            ; 0055ae47
    FSTP float ptr [EDX + 0x20]         ; 0055ae49
    FXCH                                ; 0055ae4c
    FSTP float ptr [EDX + 0x24]         ; 0055ae4e
    FSTP float ptr [EDX + 0x28]         ; 0055ae51
    MOV ESP,EBP                         ; 0055ae54
    POP EBP                             ; 0055ae56
    POP EDI                             ; 0055ae57
    POP ESI                             ; 0055ae58
    POP EBX                             ; 0055ae59
    RET                                 ; 0055ae5a

