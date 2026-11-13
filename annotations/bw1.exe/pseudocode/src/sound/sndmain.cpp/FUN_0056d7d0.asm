; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0056d7d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2a78
;   undefined4 DAT_005f2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d7d0
        ;   Label: sound_sndmain.cpp_FUN_0056d7d0
    PUSH ESI                            ; 0056d7d1
    PUSH EDI                            ; 0056d7d2
    PUSH EBP                            ; 0056d7d3
    MOV EBP,ESP                         ; 0056d7d4
    SUB ESP,0x9c                        ; 0056d7d6
    AND ESP,0xfffffff8                  ; 0056d7dc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056d7df
    MOV ECX,0x1                         ; 0056d7e2
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056d7e7
    MOV dword ptr [ESP + 0x88],EAX      ; 0056d7ea
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056d7f1
    XOR EDX,EDX                         ; 0056d7f4
    MOV dword ptr [ESP + 0x8c],EAX      ; 0056d7f6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056d7fd
    MOV dword ptr [ESP + 0x78],EDX      ; 0056d800
    MOV dword ptr [ESP + 0x84],EAX      ; 0056d804
    MOV dword ptr [ESP + 0x7c],ECX      ; 0056d80b
    MOV EBX,dword ptr [ESP + 0x84]      ; 0056d80f
    MOV CL,byte ptr [ESP + 0x7c]        ; 0056d816
        ;   Label: LAB_0056d816
    MOV EAX,0x1                         ; 0056d81a
    SHL EAX,CL                          ; 0056d81f
    CMP EAX,EBX                         ; 0056d821
    JL 0x0056daf7                       ; 0056d823
        ;   XREF to: 0056daf7 (CONDITIONAL_JUMP)  ; LAB_0056daf7
    XOR ESI,ESI                         ; 0056d829
    TEST EBX,EBX                        ; 0056d82b
    JLE 0x0056d88d                      ; 0056d82d
        ;   XREF to: 0056d88d (CONDITIONAL_JUMP)  ; LAB_0056d88d
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0056d82f
        ;   Label: LAB_0056d82f
    MOV ECX,ESI                         ; 0056d833
    XOR EDX,EDX                         ; 0056d835
    XOR EAX,EAX                         ; 0056d837
    TEST EBX,EBX                        ; 0056d839
    JLE 0x0056d851                      ; 0056d83b
        ;   XREF to: 0056d851 (CONDITIONAL_JUMP)  ; LAB_0056d851
    MOV EBX,ECX                         ; 0056d83d
        ;   Label: LAB_0056d83d
    ADD EAX,EAX                         ; 0056d83f
    AND EBX,0x1                         ; 0056d841
    INC EDX                             ; 0056d844
    OR EAX,EBX                          ; 0056d845
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0056d847
    SAR ECX,0x1                         ; 0056d84b
    CMP EDX,EBX                         ; 0056d84d
    JL 0x0056d83d                       ; 0056d84f
        ;   XREF to: 0056d83d (CONDITIONAL_JUMP)  ; LAB_0056d83d
    FLD float ptr [EDI]                 ; 0056d851
        ;   Label: LAB_0056d851
    MOV EDX,dword ptr [ESP + 0x88]      ; 0056d853
    SHL EAX,0x2                         ; 0056d85a
    MOV EBX,dword ptr [ESP + 0x78]      ; 0056d85d
    FSTP float ptr [EDX + EAX*0x1]      ; 0056d861
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0056d864
    LEA ECX,[ESI*0x4 + 0x0]             ; 0056d86b
    ADD EAX,EDX                         ; 0056d872
    TEST EBX,EBX                        ; 0056d874
    JNZ 0x0056db00                      ; 0056d876
        ;   XREF to: 0056db00 (CONDITIONAL_JUMP)  ; LAB_0056db00
    MOV dword ptr [EAX],EBX             ; 0056d87c
    MOV ECX,dword ptr [ESP + 0x84]      ; 0056d87e
        ;   Label: LAB_0056d87e
    INC ESI                             ; 0056d885
    ADD EDI,0x4                         ; 0056d886
    CMP ESI,ECX                         ; 0056d889
    JL 0x0056d82f                       ; 0056d88b
        ;   XREF to: 0056d82f (CONDITIONAL_JUMP)  ; LAB_0056d82f
    MOV EBX,0x2                         ; 0056d88d
        ;   Label: LAB_0056d88d
    MOV ESI,dword ptr [ESP + 0x84]      ; 0056d892
    MOV dword ptr [ESP + 0x80],EBX      ; 0056d899
    CMP ESI,EBX                         ; 0056d8a0
    JL 0x0056daf0                       ; 0056d8a2
        ;   XREF to: 0056daf0 (CONDITIONAL_JUMP)  ; LAB_0056daf0
    MOV EAX,dword ptr [ESP + 0x80]      ; 0056d8a8
        ;   Label: LAB_0056d8a8
    MOV EDX,EAX                         ; 0056d8af
    SAR EDX,0x1f                        ; 0056d8b1
    SUB EAX,EDX                         ; 0056d8b4
    SAR EAX,0x1                         ; 0056d8b6
    MOV dword ptr [ESP + 0x98],EAX      ; 0056d8b8
    MOV dword ptr [ESP + 0x94],EAX      ; 0056d8bf
    FILD dword ptr [ESP + 0x98]         ; 0056d8c6
    FDIVR float ptr [0x005f2a80]        ; 0056d8cd | DAT_005f2a80
    FLD ST0                             ; 0056d8d3
    FSINCOS                             ; 0056d8d5
    FXCH ST2                            ; 0056d8d7
    FLD double ptr [0x005f2a78]         ; 0056d8d9 | DAT_005f2a78
    FXCH                                ; 0056d8df
    FMUL ST1                            ; 0056d8e1
    FLD ST0                             ; 0056d8e3
    FSIN                                ; 0056d8e5
    FXCH                                ; 0056d8e7
    FCOS                                ; 0056d8e9
    FXCH ST4                            ; 0056d8eb
    FSTP double ptr [ESP + 0x70]        ; 0056d8ed
    MOV EAX,dword ptr [ESP + 0x70]      ; 0056d8f1
    MOV dword ptr [ESP + 0x20],EAX      ; 0056d8f5
    MOV EAX,dword ptr [ESP + 0x74]      ; 0056d8f9
    MOV dword ptr [ESP + 0x24],EAX      ; 0056d8fd
    FLD double ptr [ESP + 0x20]         ; 0056d901
    FMULP ST2                           ; 0056d905
    XOR ESI,ESI                         ; 0056d907
    MOV EDI,dword ptr [ESP + 0x84]      ; 0056d909
    MOV dword ptr [ESP + 0x90],ESI      ; 0056d910
    FXCH ST2                            ; 0056d917
    FSTP double ptr [ESP]               ; 0056d919
    FXCH ST2                            ; 0056d91c
    FSTP double ptr [ESP + 0x70]        ; 0056d91e
    MOV EAX,dword ptr [ESP + 0x70]      ; 0056d922
    FSTP double ptr [ESP + 0x10]        ; 0056d926
    MOV dword ptr [ESP + 0x18],EAX      ; 0056d92a
    MOV EAX,dword ptr [ESP + 0x74]      ; 0056d92e
    FSTP double ptr [ESP + 0x8]         ; 0056d932
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056d936
    TEST EDI,EDI                        ; 0056d93a
    JLE 0x0056dad1                      ; 0056d93c
        ;   XREF to: 0056dad1 (CONDITIONAL_JUMP)  ; LAB_0056dad1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056d942
        ;   Label: LAB_0056d942
    MOV dword ptr [ESP + 0x30],EAX      ; 0056d946
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056d94a
    MOV dword ptr [ESP + 0x34],EAX      ; 0056d94e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056d952
    MOV dword ptr [ESP + 0x38],EAX      ; 0056d956
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056d95a
    MOV dword ptr [ESP + 0x3c],EAX      ; 0056d95e
    MOV EAX,dword ptr [ESP]             ; 0056d962
    MOV dword ptr [ESP + 0x48],EAX      ; 0056d965
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056d969
    MOV dword ptr [ESP + 0x4c],EAX      ; 0056d96d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056d971
    MOV EBX,dword ptr [ESP + 0x94]      ; 0056d975
    MOV dword ptr [ESP + 0x50],EAX      ; 0056d97c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056d980
    XOR ESI,ESI                         ; 0056d984
    MOV dword ptr [ESP + 0x54],EAX      ; 0056d986
    TEST EBX,EBX                        ; 0056d98a
    JLE 0x0056daab                      ; 0056d98c
        ;   XREF to: 0056daab (CONDITIONAL_JUMP)  ; LAB_0056daab
    FLD double ptr [ESP + 0x8]          ; 0056d992
    MOV ECX,dword ptr [ESP + 0x90]      ; 0056d996
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0056d99d
    SHL EBX,0x2                         ; 0056d9a4
    MOV EDX,dword ptr [ESP + 0x88]      ; 0056d9a7
    MOV dword ptr [ESP + 0x98],EBX      ; 0056d9ae
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0056d9b5
    MOV EDI,dword ptr [ESP + 0x98]      ; 0056d9bc
    SHL ECX,0x2                         ; 0056d9c3
    ADD EBX,EDI                         ; 0056d9c6
    MOV EDI,dword ptr [ESP + 0x88]      ; 0056d9c8
    ADD EAX,ECX                         ; 0056d9cf
    ADD EDI,dword ptr [ESP + 0x98]      ; 0056d9d1
    ADD EDX,ECX                         ; 0056d9d8
    ADD EDI,ECX                         ; 0056d9da
    ADD EBX,ECX                         ; 0056d9dc
    MOV ECX,EDI                         ; 0056d9de
    FLD ST0                             ; 0056d9e0
        ;   Label: LAB_0056d9e0
    FMUL double ptr [ESP + 0x30]        ; 0056d9e2
    FLD ST1                             ; 0056d9e6
    FMUL double ptr [ESP + 0x48]        ; 0056d9e8
    FXCH                                ; 0056d9ec
    FSUB double ptr [ESP + 0x38]        ; 0056d9ee
    FLD float ptr [ECX]                 ; 0056d9f2
    FXCH                                ; 0056d9f4
    FST double ptr [ESP + 0x28]         ; 0056d9f6
    FMUL ST1                            ; 0056d9fa
    FXCH ST2                            ; 0056d9fc
    FSUB double ptr [ESP + 0x50]        ; 0056d9fe
    FLD float ptr [EBX]                 ; 0056da02
    FLD double ptr [ESP + 0x28]         ; 0056da04
    FMUL ST1                            ; 0056da08
    FXCH ST2                            ; 0056da0a
    FST double ptr [ESP + 0x40]         ; 0056da0c
    FMULP                               ; 0056da10
    FLD double ptr [ESP + 0x40]         ; 0056da12
    FMULP ST3                           ; 0056da16
    FLD float ptr [EDX]                 ; 0056da18
    MOV EDI,dword ptr [ESP + 0x30]      ; 0056da1a
    ADD EAX,0x4                         ; 0056da1e
    ADD EDX,0x4                         ; 0056da21
    MOV dword ptr [ESP + 0x38],EDI      ; 0056da24
    MOV EDI,dword ptr [ESP + 0x34]      ; 0056da28
    ADD EBX,0x4                         ; 0056da2c
    MOV dword ptr [ESP + 0x3c],EDI      ; 0056da2f
    MOV EDI,dword ptr [ESP + 0x28]      ; 0056da33
    ADD ECX,0x4                         ; 0056da37
    MOV dword ptr [ESP + 0x30],EDI      ; 0056da3a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0056da3e
    INC ESI                             ; 0056da42
    MOV dword ptr [ESP + 0x34],EDI      ; 0056da43
    FXCH                                ; 0056da47
    FSUBP ST4,ST0                       ; 0056da49
    MOV EDI,dword ptr [ESP + 0x48]      ; 0056da4b
    FXCH ST2                            ; 0056da4f
    FADDP                               ; 0056da51
    FXCH                                ; 0056da53
    FSUB ST0,ST2                        ; 0056da55
    MOV dword ptr [ESP + 0x50],EDI      ; 0056da57
    FSTP float ptr [ECX + -0x4]         ; 0056da5b
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0056da5e
    FLD float ptr [EAX + -0x4]          ; 0056da62
    MOV dword ptr [ESP + 0x54],EDI      ; 0056da65
    FSUB ST0,ST1                        ; 0056da69
    MOV EDI,dword ptr [ESP + 0x40]      ; 0056da6b
    FSTP float ptr [EBX + -0x4]         ; 0056da6f
    FLD float ptr [EDX + -0x4]          ; 0056da72
    MOV dword ptr [ESP + 0x48],EDI      ; 0056da75
    FLD ST0                             ; 0056da79
    MOV EDI,dword ptr [ESP + 0x44]      ; 0056da7b
    FADDP ST3,ST0                       ; 0056da7f
    MOV dword ptr [ESP + 0x4c],EDI      ; 0056da81
    FXCH ST2                            ; 0056da85
    FSTP ST2                            ; 0056da87
    FXCH                                ; 0056da89
    FSTP float ptr [EDX + -0x4]         ; 0056da8b
    FLD float ptr [EAX + -0x4]          ; 0056da8e
    FADD ST1,ST0                        ; 0056da91
    MOV EDI,dword ptr [ESP + 0x94]      ; 0056da93
    FXCH                                ; 0056da9a
    FSTP ST1                            ; 0056da9c
    FSTP float ptr [EAX + -0x4]         ; 0056da9e
    CMP ESI,EDI                         ; 0056daa1
    JL 0x0056d9e0                       ; 0056daa3
        ;   XREF to: 0056d9e0 (CONDITIONAL_JUMP)  ; LAB_0056d9e0
    FSTP ST0                            ; 0056daa9
    MOV EAX,dword ptr [ESP + 0x80]      ; 0056daab
        ;   Label: LAB_0056daab
    MOV EDX,dword ptr [ESP + 0x90]      ; 0056dab2
    ADD EDX,EAX                         ; 0056dab9
    MOV ECX,dword ptr [ESP + 0x84]      ; 0056dabb
    MOV dword ptr [ESP + 0x90],EDX      ; 0056dac2
    CMP EDX,ECX                         ; 0056dac9
    JL 0x0056d942                       ; 0056dacb
        ;   XREF to: 0056d942 (CONDITIONAL_JUMP)  ; LAB_0056d942
    MOV ECX,dword ptr [ESP + 0x80]      ; 0056dad1
        ;   Label: LAB_0056dad1
    ADD ECX,ECX                         ; 0056dad8
    MOV EBX,dword ptr [ESP + 0x84]      ; 0056dada
    MOV dword ptr [ESP + 0x80],ECX      ; 0056dae1
    CMP ECX,EBX                         ; 0056dae8
    JLE 0x0056d8a8                      ; 0056daea
        ;   XREF to: 0056d8a8 (CONDITIONAL_JUMP)  ; LAB_0056d8a8
    MOV ESP,EBP                         ; 0056daf0
        ;   Label: LAB_0056daf0
    POP EBP                             ; 0056daf2
    POP EDI                             ; 0056daf3
    POP ESI                             ; 0056daf4
    POP EBX                             ; 0056daf5
    RET                                 ; 0056daf6
    INC dword ptr [ESP + 0x7c]          ; 0056daf7
        ;   Label: LAB_0056daf7
    JMP 0x0056d816                      ; 0056dafb
        ;   XREF to: 0056d816 (UNCONDITIONAL_JUMP)  ; LAB_0056d816
    ADD ECX,EBX                         ; 0056db00
        ;   Label: LAB_0056db00
    MOV EDX,dword ptr [ECX]             ; 0056db02
    MOV dword ptr [EAX],EDX             ; 0056db04
    JMP 0x0056d87e                      ; 0056db06
        ;   XREF to: 0056d87e (UNCONDITIONAL_JUMP)  ; LAB_0056d87e

