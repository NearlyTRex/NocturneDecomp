; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_skeleton_cpp_distancePointToLineSegment_FUN_005405f0(float *param_1,float *param_2,float *param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005405f0
        ;   Label: core_skeleton.cpp_distancePointToLineSegment_FUN_005405f0
    PUSH ESI                            ; 005405f1
    PUSH EDI                            ; 005405f2
    PUSH EBP                            ; 005405f3
    MOV EBP,ESP                         ; 005405f4
    SUB ESP,0x9c                        ; 005405f6
    AND ESP,0xfffffff8                  ; 005405fc
    MOV EDX,dword ptr [EBP + 0x14]      ; 005405ff
    MOV EBX,dword ptr [EBP + 0x18]      ; 00540602
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00540605
    FLD float ptr [EBX]                 ; 00540608
    FLD float ptr [EBX + 0x4]           ; 0054060a
    FLD float ptr [EBX + 0x8]           ; 0054060d
    LEA EDI,[ESP + 0x34]                ; 00540610
    LEA ESI,[ESP + 0x10]                ; 00540614
    FXCH ST2                            ; 00540618
    FSUB float ptr [EDX]                ; 0054061a
    FXCH                                ; 0054061c
    FSUB float ptr [EDX + 0x4]          ; 0054061e
    FXCH ST2                            ; 00540621
    FSUB float ptr [EDX + 0x8]          ; 00540623
    FXCH                                ; 00540626
    FSTP float ptr [ESP + 0x10]         ; 00540628
    FXCH                                ; 0054062c
    FSTP float ptr [ESP + 0x14]         ; 0054062e
    FSTP float ptr [ESP + 0x18]         ; 00540632
    MOVSD ES:EDI,ESI                    ; 00540636
    MOVSD ES:EDI,ESI                    ; 00540637
    MOVSD ES:EDI,ESI                    ; 00540638
    FLD float ptr [ESP + 0x38]          ; 00540639
    FMUL ST0                            ; 0054063d
    FLD float ptr [ESP + 0x34]          ; 0054063f
    FMUL ST0                            ; 00540643
    FADDP                               ; 00540645
    FLD float ptr [ESP + 0x3c]          ; 00540647
    FMUL ST0                            ; 0054064b
    FADDP                               ; 0054064d
    FSQRT                               ; 0054064f
    FLDZ                                ; 00540651
    FXCH                                ; 00540653
    FSTP double ptr [ESP]               ; 00540655
    FCOMP double ptr [ESP]              ; 00540658
    FNSTSW AX                           ; 0054065b
    SAHF                                ; 0054065d
    JNC 0x0054071f                      ; 0054065e
        ;   XREF to: 0054071f (CONDITIONAL_JUMP)  ; LAB_0054071f
    FLD double ptr [ESP]                ; 00540664
    FLD1                                ; 00540667
    FLD float ptr [ESP + 0x34]          ; 00540669
    FXCH ST2                            ; 0054066d
    FSTP float ptr [ESP + 0x74]         ; 0054066f
    FDIV float ptr [ESP + 0x74]         ; 00540673
    FXCH                                ; 00540677
    FMUL ST1                            ; 00540679
    FLD float ptr [ESP + 0x38]          ; 0054067b
    FMUL ST2                            ; 0054067f
    FLD float ptr [ESP + 0x3c]          ; 00540681
    FMULP ST3                           ; 00540685
    FLD float ptr [ECX + 0x4]           ; 00540687
    FXCH                                ; 0054068a
    FSTP float ptr [ESP + 0x38]         ; 0054068c
    FMUL float ptr [ESP + 0x38]         ; 00540690
    FLD float ptr [EDX + 0x4]           ; 00540694
    FMUL float ptr [ESP + 0x38]         ; 00540697
    FXCH ST2                            ; 0054069b
    FSTP float ptr [ESP + 0x34]         ; 0054069d
    FLD float ptr [ECX]                 ; 005406a1
    FMUL float ptr [ESP + 0x34]         ; 005406a3
    FLD float ptr [EDX]                 ; 005406a7
    FMUL float ptr [ESP + 0x34]         ; 005406a9
    FXCH ST4                            ; 005406ad
    FSTP float ptr [ESP + 0x3c]         ; 005406af
    FXCH ST3                            ; 005406b3
    FADDP ST2,ST0                       ; 005406b5
    FADDP ST2,ST0                       ; 005406b7
    FLD float ptr [EDX + 0x8]           ; 005406b9
    FMUL float ptr [ESP + 0x3c]         ; 005406bc
    FLD float ptr [ECX + 0x8]           ; 005406c0
    FMUL float ptr [ESP + 0x3c]         ; 005406c3
    FXCH                                ; 005406c7
    FADDP ST2,ST0                       ; 005406c9
    FADDP ST2,ST0                       ; 005406cb
    FSUBP                               ; 005406cd
    FLDZ                                ; 005406cf
    FXCH                                ; 005406d1
    FSTP double ptr [ESP + 0x8]         ; 005406d3
    FCOMP double ptr [ESP + 0x8]        ; 005406d7
    FNSTSW AX                           ; 005406db
    SAHF                                ; 005406dd
    JNC 0x0054071f                      ; 005406de
        ;   XREF to: 0054071f (CONDITIONAL_JUMP)  ; LAB_0054071f
    FLD double ptr [ESP + 0x8]          ; 005406e0
    FCOMP double ptr [ESP]              ; 005406e4
    FNSTSW AX                           ; 005406e7
    SAHF                                ; 005406e9
    JC 0x00540739                       ; 005406ea
        ;   XREF to: 00540739 (CONDITIONAL_JUMP)  ; LAB_00540739
    FLD float ptr [ECX]                 ; 005406ec
    FSUB float ptr [EBX]                ; 005406ee
    FMUL ST0                            ; 005406f0
    FLD float ptr [ECX + 0x4]           ; 005406f2
    FSUB float ptr [EBX + 0x4]          ; 005406f5
    FMUL ST0                            ; 005406f8
    FLD float ptr [ECX + 0x8]           ; 005406fa
    FXCH                                ; 005406fd
    FADDP ST2,ST0                       ; 005406ff
    FSUB float ptr [EBX + 0x8]          ; 00540701
    FMUL ST0                            ; 00540704
        ;   Label: LAB_00540704
    FADDP                               ; 00540706
    FSQRT                               ; 00540708
    FSTP float ptr [ESP + 0x80]         ; 0054070a
    MOV EAX,dword ptr [ESP + 0x80]      ; 00540711
    MOV ESP,EBP                         ; 00540718
    POP EBP                             ; 0054071a
    POP EDI                             ; 0054071b
    POP ESI                             ; 0054071c
    POP EBX                             ; 0054071d
    RET                                 ; 0054071e
    FLD float ptr [ECX]                 ; 0054071f
        ;   Label: LAB_0054071f
    FSUB float ptr [EDX]                ; 00540721
    FMUL ST0                            ; 00540723
    FLD float ptr [ECX + 0x4]           ; 00540725
    FSUB float ptr [EDX + 0x4]          ; 00540728
    FMUL ST0                            ; 0054072b
    FLD float ptr [ECX + 0x8]           ; 0054072d
    FXCH                                ; 00540730
    FADDP ST2,ST0                       ; 00540732
    FSUB float ptr [EDX + 0x8]          ; 00540734
    JMP 0x00540704                      ; 00540737
        ;   XREF to: 00540704 (UNCONDITIONAL_JUMP)  ; LAB_00540704
    FLD float ptr [ESP + 0x34]          ; 00540739
        ;   Label: LAB_00540739
    FLD double ptr [ESP + 0x8]          ; 0054073d
    FSTP float ptr [ESP + 0x90]         ; 00540741
    FMUL float ptr [ESP + 0x90]         ; 00540748
    FLD float ptr [ESP + 0x38]          ; 0054074f
    FMUL float ptr [ESP + 0x90]         ; 00540753
    FLD float ptr [ESP + 0x3c]          ; 0054075a
    FMUL float ptr [ESP + 0x90]         ; 0054075e
    LEA EDI,[ESP + 0x40]                ; 00540765
    LEA ESI,[ESP + 0x28]                ; 00540769
    FXCH ST2                            ; 0054076d
    FSTP float ptr [ESP + 0x28]         ; 0054076f
    FSTP float ptr [ESP + 0x2c]         ; 00540773
    FSTP float ptr [ESP + 0x30]         ; 00540777
    MOVSD ES:EDI,ESI                    ; 0054077b
    MOVSD ES:EDI,ESI                    ; 0054077c
    MOVSD ES:EDI,ESI                    ; 0054077d
    FLD float ptr [EDX]                 ; 0054077e
    FLD float ptr [EDX + 0x4]           ; 00540780
    FLD float ptr [EDX + 0x8]           ; 00540783
    LEA EDI,[ESP + 0x1c]                ; 00540786
    LEA ESI,[ESP + 0x4c]                ; 0054078a
    FXCH ST2                            ; 0054078e
    FADD float ptr [ESP + 0x40]         ; 00540790
    FXCH                                ; 00540794
    FADD float ptr [ESP + 0x44]         ; 00540796
    FXCH ST2                            ; 0054079a
    FADD float ptr [ESP + 0x48]         ; 0054079c
    FXCH                                ; 005407a0
    FSTP float ptr [ESP + 0x4c]         ; 005407a2
    FXCH                                ; 005407a6
    FSTP float ptr [ESP + 0x50]         ; 005407a8
    FSTP float ptr [ESP + 0x54]         ; 005407ac
    MOVSD ES:EDI,ESI                    ; 005407b0
    MOVSD ES:EDI,ESI                    ; 005407b1
    MOVSD ES:EDI,ESI                    ; 005407b2
    FLD float ptr [ECX]                 ; 005407b3
    FSUB float ptr [ESP + 0x1c]         ; 005407b5
    FMUL ST0                            ; 005407b9
    FLD float ptr [ECX + 0x4]           ; 005407bb
    FSUB float ptr [ESP + 0x20]         ; 005407be
    FMUL ST0                            ; 005407c2
    FLD float ptr [ECX + 0x8]           ; 005407c4
    FXCH                                ; 005407c7
    FADDP ST2,ST0                       ; 005407c9
    FSUB float ptr [ESP + 0x24]         ; 005407cb
    JMP 0x00540704                      ; 005407cf
        ;   XREF to: 00540704 (UNCONDITIONAL_JUMP)  ; LAB_00540704

