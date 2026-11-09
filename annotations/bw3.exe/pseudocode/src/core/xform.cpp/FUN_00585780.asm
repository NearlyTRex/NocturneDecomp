; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00585780(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_xform.cpp_lerpMatrix3x4_FUN_005854a0 at 00585518
;
; Referenced Globals:
;   undefined4 DAT_005d8193
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585780
        ;   Label: core_xform.cpp_FUN_00585780
    SUB ESP,0x2c                        ; 00585781
    MOV EDX,dword ptr [ESP + 0x34]      ; 00585784
    MOV ECX,ESI                         ; 00585788
    FLD float ptr [EDX]                 ; 0058578a
    FADD float ptr [EDX + 0x14]         ; 0058578c
    FST float ptr [ESP + 0x14]          ; 0058578f
    FADD float ptr [EDX + 0x28]         ; 00585793
    FLDZ                                ; 00585796
    FXCH                                ; 00585798
    FSTP float ptr [ESP + 0x24]         ; 0058579a
    FCOMP float ptr [ESP + 0x24]        ; 0058579e
    FNSTSW AX                           ; 005857a2
    SAHF                                ; 005857a4
    JC 0x00585821                       ; 005857a5
        ;   XREF to: 00585821 (CONDITIONAL_JUMP)  ; LAB_00585821
    FLD float ptr [EDX]                 ; 005857a7
    FCOMP float ptr [EDX + 0x14]        ; 005857a9
    FNSTSW AX                           ; 005857ac
    SAHF                                ; 005857ae
    JBE 0x005858c1                      ; 005857af
        ;   XREF to: 005858c1 (CONDITIONAL_JUMP)  ; LAB_005858c1
    FLD float ptr [EDX]                 ; 005857b5
    FCOMP float ptr [EDX + 0x28]        ; 005857b7
    FNSTSW AX                           ; 005857ba
    SAHF                                ; 005857bc
    JBE 0x00585864                      ; 005857bd
        ;   XREF to: 00585864 (CONDITIONAL_JUMP)  ; LAB_00585864
    FLD float ptr [EDX + 0x14]          ; 005857c3
    FADD float ptr [EDX + 0x28]         ; 005857c6
    FSUBR float ptr [EDX]               ; 005857c9
    FLD1                                ; 005857cb
    FADDP                               ; 005857cd
    FSQRT                               ; 005857cf
    FLD float ptr [0x005d8193]          ; 005857d1 | DAT_005d8193
    FLD ST0                             ; 005857d7
    FDIV ST0,ST2                        ; 005857d9
    FLD ST2                             ; 005857db
    FMULP ST2                           ; 005857dd
    FLD float ptr [EDX + 0x24]          ; 005857df
    FSUB float ptr [EDX + 0x18]         ; 005857e2
    FXCH                                ; 005857e5
    FSTP ST3                            ; 005857e7
    FMUL ST2                            ; 005857e9
    FLD float ptr [EDX + 0x20]          ; 005857eb
    FLD float ptr [EDX + 0x10]          ; 005857ee
    FADD float ptr [EDX + 0x4]          ; 005857f1
    FXCH                                ; 005857f4
    FADD float ptr [EDX + 0x8]          ; 005857f6
    FXCH                                ; 005857f9
    FMUL ST4                            ; 005857fb
    FXCH                                ; 005857fd
    FMULP ST4                           ; 005857ff
    FXCH ST2                            ; 00585801
    FSTP float ptr [ESP + 0x4]          ; 00585803
    FSTP float ptr [ESP]                ; 00585807
    FSTP float ptr [ESP + 0x8]          ; 0058580a
        ;   Label: LAB_0058580a
    FSTP float ptr [ESP + 0xc]          ; 0058580e
    MOV ESI,ESP                         ; 00585812
    MOV EDI,ECX                         ; 00585814
    MOVSD ES:EDI,ESI                    ; 00585816
    MOVSD ES:EDI,ESI                    ; 00585817
    MOVSD ES:EDI,ESI                    ; 00585818
    MOVSD ES:EDI,ESI                    ; 00585819
    MOV EAX,ECX                         ; 0058581a
    ADD ESP,0x2c                        ; 0058581c
    POP EDI                             ; 0058581f
    RET                                 ; 00585820
    FLD1                                ; 00585821
        ;   Label: LAB_00585821
    FADD float ptr [ESP + 0x24]         ; 00585823
    FSQRT                               ; 00585827
    FLD float ptr [0x005d8193]          ; 00585829 | DAT_005d8193
    FLD ST0                             ; 0058582f
    FDIV ST0,ST2                        ; 00585831
    FLD ST2                             ; 00585833
    FMULP ST2                           ; 00585835
    FLD float ptr [EDX + 0x24]          ; 00585837
    FSUB float ptr [EDX + 0x18]         ; 0058583a
    FXCH                                ; 0058583d
    FSTP ST3                            ; 0058583f
    FMUL ST2                            ; 00585841
    FLD float ptr [EDX + 0x10]          ; 00585843
    FLD float ptr [EDX + 0x8]           ; 00585846
    FSUB float ptr [EDX + 0x20]         ; 00585849
    FXCH                                ; 0058584c
    FSUB float ptr [EDX + 0x4]          ; 0058584e
    FXCH                                ; 00585851
    FMUL ST4                            ; 00585853
    FXCH                                ; 00585855
    FMULP ST4                           ; 00585857
    FXCH ST2                            ; 00585859
    FSTP float ptr [ESP]                ; 0058585b
    FSTP float ptr [ESP + 0x4]          ; 0058585e
    JMP 0x0058580a                      ; 00585862
        ;   XREF to: 0058580a (UNCONDITIONAL_JUMP)  ; LAB_0058580a
    FLD float ptr [EDX + 0x28]          ; 00585864
        ;   Label: LAB_00585864
    FSUB float ptr [ESP + 0x14]         ; 00585867
    FLD1                                ; 0058586b
    FADDP                               ; 0058586d
    FSQRT                               ; 0058586f
    FLD float ptr [0x005d8193]          ; 00585871 | DAT_005d8193
    FLD ST0                             ; 00585877
    FDIV ST0,ST2                        ; 00585879
    FLD ST2                             ; 0058587b
    FMULP ST2                           ; 0058587d
    FLD float ptr [EDX + 0x10]          ; 0058587f
    FSUB float ptr [EDX + 0x4]          ; 00585882
    FXCH                                ; 00585885
    FSTP ST3                            ; 00585887
    FMUL ST2                            ; 00585889
    FLD float ptr [EDX + 0x18]          ; 0058588b
    FLD float ptr [EDX + 0x8]           ; 0058588e
    FADD float ptr [EDX + 0x20]         ; 00585891
    FXCH                                ; 00585894
    FADD float ptr [EDX + 0x24]         ; 00585896
    FXCH                                ; 00585899
    FMUL ST4                            ; 0058589b
    FXCH                                ; 0058589d
    FMULP ST4                           ; 0058589f
    FXCH ST2                            ; 005858a1
    FSTP float ptr [ESP + 0xc]          ; 005858a3
    FSTP float ptr [ESP]                ; 005858a7
    FSTP float ptr [ESP + 0x4]          ; 005858aa
    FSTP float ptr [ESP + 0x8]          ; 005858ae
    MOV ESI,ESP                         ; 005858b2
    MOV EDI,ECX                         ; 005858b4
    MOVSD ES:EDI,ESI                    ; 005858b6
    MOVSD ES:EDI,ESI                    ; 005858b7
    MOVSD ES:EDI,ESI                    ; 005858b8
    MOVSD ES:EDI,ESI                    ; 005858b9
    MOV EAX,ECX                         ; 005858ba
    ADD ESP,0x2c                        ; 005858bc
    POP EDI                             ; 005858bf
    RET                                 ; 005858c0
    FLD float ptr [EDX + 0x14]          ; 005858c1
        ;   Label: LAB_005858c1
    FCOMP float ptr [EDX + 0x28]        ; 005858c4
    FNSTSW AX                           ; 005858c7
    SAHF                                ; 005858c9
    JBE 0x00585864                      ; 005858ca
        ;   XREF to: 00585864 (CONDITIONAL_JUMP)  ; LAB_00585864
    FLD float ptr [EDX + 0x28]          ; 005858cc
    FADD float ptr [EDX]                ; 005858cf
    FSUBR float ptr [EDX + 0x14]        ; 005858d1
    FLD1                                ; 005858d4
    FADDP                               ; 005858d6
    FSQRT                               ; 005858d8
    FLD float ptr [0x005d8193]          ; 005858da | DAT_005d8193
    FLD ST0                             ; 005858e0
    FDIV ST0,ST2                        ; 005858e2
    FLD ST2                             ; 005858e4
    FMULP ST2                           ; 005858e6
    FLD float ptr [EDX + 0x8]           ; 005858e8
    FSUB float ptr [EDX + 0x20]         ; 005858eb
    FXCH                                ; 005858ee
    FSTP ST3                            ; 005858f0
    FMUL ST2                            ; 005858f2
    FLD float ptr [EDX + 0x4]           ; 005858f4
    FLD float ptr [EDX + 0x24]          ; 005858f7
    FADD float ptr [EDX + 0x18]         ; 005858fa
    FXCH                                ; 005858fd
    FADD float ptr [EDX + 0x10]         ; 005858ff
    FXCH                                ; 00585902
    FMUL ST4                            ; 00585904
    FXCH                                ; 00585906
    FMULP ST4                           ; 00585908
    FXCH ST2                            ; 0058590a
    FSTP float ptr [ESP + 0x8]          ; 0058590c
    FSTP float ptr [ESP]                ; 00585910
    FSTP float ptr [ESP + 0xc]          ; 00585913
    FSTP float ptr [ESP + 0x4]          ; 00585917
    MOV ESI,ESP                         ; 0058591b
    MOV EDI,ECX                         ; 0058591d
    MOVSD ES:EDI,ESI                    ; 0058591f
    MOVSD ES:EDI,ESI                    ; 00585920
    MOVSD ES:EDI,ESI                    ; 00585921
    MOVSD ES:EDI,ESI                    ; 00585922
    MOV EAX,ECX                         ; 00585923
    ADD ESP,0x2c                        ; 00585925
    POP EDI                             ; 00585928
    RET                                 ; 00585929

