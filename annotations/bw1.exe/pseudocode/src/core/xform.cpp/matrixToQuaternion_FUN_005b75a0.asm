; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_matrixToQuaternion_FUN_005b75a0(float *param_1)
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
;   core_xform.cpp_lerpMatrix3x4_FUN_005b72c0 at 005b7338
;
; Referenced Globals:
;   undefined4 DAT_005fa168
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b75a0
        ;   Label: core_xform.cpp_matrixToQuaternion_FUN_005b75a0
    SUB ESP,0x2c                        ; 005b75a1
    MOV EDX,dword ptr [ESP + 0x34]      ; 005b75a4
    MOV ECX,ESI                         ; 005b75a8
    FLD float ptr [EDX]                 ; 005b75aa
    FADD float ptr [EDX + 0x14]         ; 005b75ac
    FST float ptr [ESP + 0x14]          ; 005b75af
    FADD float ptr [EDX + 0x28]         ; 005b75b3
    FLDZ                                ; 005b75b6
    FXCH                                ; 005b75b8
    FSTP float ptr [ESP + 0x24]         ; 005b75ba
    FCOMP float ptr [ESP + 0x24]        ; 005b75be
    FNSTSW AX                           ; 005b75c2
    SAHF                                ; 005b75c4
    JC 0x005b7641                       ; 005b75c5
        ;   XREF to: 005b7641 (CONDITIONAL_JUMP)  ; LAB_005b7641
    FLD float ptr [EDX]                 ; 005b75c7
    FCOMP float ptr [EDX + 0x14]        ; 005b75c9
    FNSTSW AX                           ; 005b75cc
    SAHF                                ; 005b75ce
    JBE 0x005b76e1                      ; 005b75cf
        ;   XREF to: 005b76e1 (CONDITIONAL_JUMP)  ; LAB_005b76e1
    FLD float ptr [EDX]                 ; 005b75d5
    FCOMP float ptr [EDX + 0x28]        ; 005b75d7
    FNSTSW AX                           ; 005b75da
    SAHF                                ; 005b75dc
    JBE 0x005b7684                      ; 005b75dd
        ;   XREF to: 005b7684 (CONDITIONAL_JUMP)  ; LAB_005b7684
    FLD float ptr [EDX + 0x14]          ; 005b75e3
    FADD float ptr [EDX + 0x28]         ; 005b75e6
    FSUBR float ptr [EDX]               ; 005b75e9
    FLD1                                ; 005b75eb
    FADDP                               ; 005b75ed
    FSQRT                               ; 005b75ef
    FLD float ptr [0x005fa168]          ; 005b75f1 | DAT_005fa168
    FLD ST0                             ; 005b75f7
    FDIV ST0,ST2                        ; 005b75f9
    FLD ST2                             ; 005b75fb
    FMULP ST2                           ; 005b75fd
    FLD float ptr [EDX + 0x24]          ; 005b75ff
    FSUB float ptr [EDX + 0x18]         ; 005b7602
    FXCH                                ; 005b7605
    FSTP ST3                            ; 005b7607
    FMUL ST2                            ; 005b7609
    FLD float ptr [EDX + 0x20]          ; 005b760b
    FLD float ptr [EDX + 0x10]          ; 005b760e
    FADD float ptr [EDX + 0x4]          ; 005b7611
    FXCH                                ; 005b7614
    FADD float ptr [EDX + 0x8]          ; 005b7616
    FXCH                                ; 005b7619
    FMUL ST4                            ; 005b761b
    FXCH                                ; 005b761d
    FMULP ST4                           ; 005b761f
    FXCH ST2                            ; 005b7621
    FSTP float ptr [ESP + 0x4]          ; 005b7623
    FSTP float ptr [ESP]                ; 005b7627
    FSTP float ptr [ESP + 0x8]          ; 005b762a
        ;   Label: LAB_005b762a
    FSTP float ptr [ESP + 0xc]          ; 005b762e
    MOV ESI,ESP                         ; 005b7632
    MOV EDI,ECX                         ; 005b7634
    MOVSD ES:EDI,ESI                    ; 005b7636
    MOVSD ES:EDI,ESI                    ; 005b7637
    MOVSD ES:EDI,ESI                    ; 005b7638
    MOVSD ES:EDI,ESI                    ; 005b7639
    MOV EAX,ECX                         ; 005b763a
    ADD ESP,0x2c                        ; 005b763c
    POP EDI                             ; 005b763f
    RET                                 ; 005b7640
    FLD1                                ; 005b7641
        ;   Label: LAB_005b7641
    FADD float ptr [ESP + 0x24]         ; 005b7643
    FSQRT                               ; 005b7647
    FLD float ptr [0x005fa168]          ; 005b7649 | DAT_005fa168
    FLD ST0                             ; 005b764f
    FDIV ST0,ST2                        ; 005b7651
    FLD ST2                             ; 005b7653
    FMULP ST2                           ; 005b7655
    FLD float ptr [EDX + 0x24]          ; 005b7657
    FSUB float ptr [EDX + 0x18]         ; 005b765a
    FXCH                                ; 005b765d
    FSTP ST3                            ; 005b765f
    FMUL ST2                            ; 005b7661
    FLD float ptr [EDX + 0x10]          ; 005b7663
    FLD float ptr [EDX + 0x8]           ; 005b7666
    FSUB float ptr [EDX + 0x20]         ; 005b7669
    FXCH                                ; 005b766c
    FSUB float ptr [EDX + 0x4]          ; 005b766e
    FXCH                                ; 005b7671
    FMUL ST4                            ; 005b7673
    FXCH                                ; 005b7675
    FMULP ST4                           ; 005b7677
    FXCH ST2                            ; 005b7679
    FSTP float ptr [ESP]                ; 005b767b
    FSTP float ptr [ESP + 0x4]          ; 005b767e
    JMP 0x005b762a                      ; 005b7682
        ;   XREF to: 005b762a (UNCONDITIONAL_JUMP)  ; LAB_005b762a
    FLD float ptr [EDX + 0x28]          ; 005b7684
        ;   Label: LAB_005b7684
    FSUB float ptr [ESP + 0x14]         ; 005b7687
    FLD1                                ; 005b768b
    FADDP                               ; 005b768d
    FSQRT                               ; 005b768f
    FLD float ptr [0x005fa168]          ; 005b7691 | DAT_005fa168
    FLD ST0                             ; 005b7697
    FDIV ST0,ST2                        ; 005b7699
    FLD ST2                             ; 005b769b
    FMULP ST2                           ; 005b769d
    FLD float ptr [EDX + 0x10]          ; 005b769f
    FSUB float ptr [EDX + 0x4]          ; 005b76a2
    FXCH                                ; 005b76a5
    FSTP ST3                            ; 005b76a7
    FMUL ST2                            ; 005b76a9
    FLD float ptr [EDX + 0x18]          ; 005b76ab
    FLD float ptr [EDX + 0x8]           ; 005b76ae
    FADD float ptr [EDX + 0x20]         ; 005b76b1
    FXCH                                ; 005b76b4
    FADD float ptr [EDX + 0x24]         ; 005b76b6
    FXCH                                ; 005b76b9
    FMUL ST4                            ; 005b76bb
    FXCH                                ; 005b76bd
    FMULP ST4                           ; 005b76bf
    FXCH ST2                            ; 005b76c1
    FSTP float ptr [ESP + 0xc]          ; 005b76c3
    FSTP float ptr [ESP]                ; 005b76c7
    FSTP float ptr [ESP + 0x4]          ; 005b76ca
    FSTP float ptr [ESP + 0x8]          ; 005b76ce
    MOV ESI,ESP                         ; 005b76d2
    MOV EDI,ECX                         ; 005b76d4
    MOVSD ES:EDI,ESI                    ; 005b76d6
    MOVSD ES:EDI,ESI                    ; 005b76d7
    MOVSD ES:EDI,ESI                    ; 005b76d8
    MOVSD ES:EDI,ESI                    ; 005b76d9
    MOV EAX,ECX                         ; 005b76da
    ADD ESP,0x2c                        ; 005b76dc
    POP EDI                             ; 005b76df
    RET                                 ; 005b76e0
    FLD float ptr [EDX + 0x14]          ; 005b76e1
        ;   Label: LAB_005b76e1
    FCOMP float ptr [EDX + 0x28]        ; 005b76e4
    FNSTSW AX                           ; 005b76e7
    SAHF                                ; 005b76e9
    JBE 0x005b7684                      ; 005b76ea
        ;   XREF to: 005b7684 (CONDITIONAL_JUMP)  ; LAB_005b7684
    FLD float ptr [EDX + 0x28]          ; 005b76ec
    FADD float ptr [EDX]                ; 005b76ef
    FSUBR float ptr [EDX + 0x14]        ; 005b76f1
    FLD1                                ; 005b76f4
    FADDP                               ; 005b76f6
    FSQRT                               ; 005b76f8
    FLD float ptr [0x005fa168]          ; 005b76fa | DAT_005fa168
    FLD ST0                             ; 005b7700
    FDIV ST0,ST2                        ; 005b7702
    FLD ST2                             ; 005b7704
    FMULP ST2                           ; 005b7706
    FLD float ptr [EDX + 0x8]           ; 005b7708
    FSUB float ptr [EDX + 0x20]         ; 005b770b
    FXCH                                ; 005b770e
    FSTP ST3                            ; 005b7710
    FMUL ST2                            ; 005b7712
    FLD float ptr [EDX + 0x4]           ; 005b7714
    FLD float ptr [EDX + 0x24]          ; 005b7717
    FADD float ptr [EDX + 0x18]         ; 005b771a
    FXCH                                ; 005b771d
    FADD float ptr [EDX + 0x10]         ; 005b771f
    FXCH                                ; 005b7722
    FMUL ST4                            ; 005b7724
    FXCH                                ; 005b7726
    FMULP ST4                           ; 005b7728
    FXCH ST2                            ; 005b772a
    FSTP float ptr [ESP + 0x8]          ; 005b772c
    FSTP float ptr [ESP]                ; 005b7730
    FSTP float ptr [ESP + 0xc]          ; 005b7733
    FSTP float ptr [ESP + 0x4]          ; 005b7737
    MOV ESI,ESP                         ; 005b773b
    MOV EDI,ECX                         ; 005b773d
    MOVSD ES:EDI,ESI                    ; 005b773f
    MOVSD ES:EDI,ESI                    ; 005b7740
    MOVSD ES:EDI,ESI                    ; 005b7741
    MOVSD ES:EDI,ESI                    ; 005b7742
    MOV EAX,ECX                         ; 005b7743
    ADD ESP,0x2c                        ; 005b7745
    POP EDI                             ; 005b7748
    RET                                 ; 005b7749

