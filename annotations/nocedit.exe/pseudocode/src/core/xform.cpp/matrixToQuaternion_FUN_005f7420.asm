; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CQuaternion4f * __stack_esi core_xform_cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix_in
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 at 00443006
;   core_platfrm.cpp_FUN_0054ea00 at 0054ef87
;   core_skeledit.cpp_FUN_00592690 at 00595af4
;   core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70 at 005f7ba2
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20 at 005f7b52
;   core_xform.cpp_lerpMatrix3x4_FUN_005f7140 at 005f71ac
;
; Referenced Globals:
;   double g_QuaternionMatrixConversionHalf = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f7420
        ;   Label: core_xform.cpp_matrixToQuaternion_FUN_005f7420
    PUSH EBP                            ; 005f7421
    MOV EBP,ESP                         ; 005f7422
    SUB ESP,0x44                        ; 005f7424
    AND ESP,0xfffffff8                  ; 005f7427
    MOV EDX,dword ptr [EBP + 0xc]       ; 005f742a
    MOV ECX,ESI                         ; 005f742d
    FLD float ptr [EDX]                 ; 005f742f
    FADD float ptr [EDX + 0x14]         ; 005f7431
    FST float ptr [ESP + 0x40]          ; 005f7434
    FADD float ptr [EDX + 0x28]         ; 005f7438
    FLDZ                                ; 005f743b
    FXCH                                ; 005f743d
    FSTP double ptr [ESP]               ; 005f743f
    FCOMP double ptr [ESP]              ; 005f7442
    FNSTSW AX                           ; 005f7445
    SAHF                                ; 005f7447
    JC 0x005f74c7                       ; 005f7448
        ;   XREF to: 005f74c7 (CONDITIONAL_JUMP)  ; LAB_005f74c7
    FLD float ptr [EDX]                 ; 005f744a
    FCOMP float ptr [EDX + 0x14]        ; 005f744c
    FNSTSW AX                           ; 005f744f
    SAHF                                ; 005f7451
    JBE 0x005f756a                      ; 005f7452
        ;   XREF to: 005f756a (CONDITIONAL_JUMP)  ; LAB_005f756a
    FLD float ptr [EDX]                 ; 005f7458
    FCOMP float ptr [EDX + 0x28]        ; 005f745a
    FNSTSW AX                           ; 005f745d
    SAHF                                ; 005f745f
    JBE 0x005f750a                      ; 005f7460
        ;   XREF to: 005f750a (CONDITIONAL_JUMP)  ; LAB_005f750a
    FLD float ptr [EDX + 0x14]          ; 005f7466
    FADD float ptr [EDX + 0x28]         ; 005f7469
    FSUBR float ptr [EDX]               ; 005f746c
    FLD1                                ; 005f746e
    FADDP                               ; 005f7470
    FSQRT                               ; 005f7472
    FLD double ptr [0x006583e5]         ; 005f7474 | g_QuaternionMatrixConversionHalf
    FLD ST0                             ; 005f747a
    FDIV ST0,ST2                        ; 005f747c
    FLD ST2                             ; 005f747e
    FMULP ST2                           ; 005f7480
    FLD float ptr [EDX + 0x24]          ; 005f7482
    FSUB float ptr [EDX + 0x18]         ; 005f7485
    FXCH                                ; 005f7488
    FSTP ST3                            ; 005f748a
    FMUL ST2                            ; 005f748c
    FLD float ptr [EDX + 0x20]          ; 005f748e
    FLD float ptr [EDX + 0x10]          ; 005f7491
    FADD float ptr [EDX + 0x4]          ; 005f7494
    FXCH                                ; 005f7497
    FADD float ptr [EDX + 0x8]          ; 005f7499
    FXCH                                ; 005f749c
    FMUL ST4                            ; 005f749e
    FXCH                                ; 005f74a0
    FMULP ST4                           ; 005f74a2
    FXCH ST2                            ; 005f74a4
    FSTP float ptr [ESP + 0xc]          ; 005f74a6
    FSTP float ptr [ESP + 0x8]          ; 005f74aa
    FSTP float ptr [ESP + 0x10]         ; 005f74ae
        ;   Label: LAB_005f74ae
    FSTP float ptr [ESP + 0x14]         ; 005f74b2
    LEA ESI,[ESP + 0x8]                 ; 005f74b6
    MOV EDI,ECX                         ; 005f74ba
    MOVSD ES:EDI,ESI                    ; 005f74bc
    MOVSD ES:EDI,ESI                    ; 005f74bd
    MOVSD ES:EDI,ESI                    ; 005f74be
    MOVSD ES:EDI,ESI                    ; 005f74bf
    MOV EAX,ECX                         ; 005f74c0
    MOV ESP,EBP                         ; 005f74c2
    POP EBP                             ; 005f74c4
    POP EDI                             ; 005f74c5
    RET                                 ; 005f74c6
    FLD1                                ; 005f74c7
        ;   Label: LAB_005f74c7
    FADD double ptr [ESP]               ; 005f74c9
    FSQRT                               ; 005f74cc
    FLD double ptr [0x006583e5]         ; 005f74ce | g_QuaternionMatrixConversionHalf
    FLD ST0                             ; 005f74d4
    FDIV ST0,ST2                        ; 005f74d6
    FLD ST2                             ; 005f74d8
    FMULP ST2                           ; 005f74da
    FLD float ptr [EDX + 0x24]          ; 005f74dc
    FSUB float ptr [EDX + 0x18]         ; 005f74df
    FXCH                                ; 005f74e2
    FSTP ST3                            ; 005f74e4
    FMUL ST2                            ; 005f74e6
    FLD float ptr [EDX + 0x10]          ; 005f74e8
    FLD float ptr [EDX + 0x8]           ; 005f74eb
    FSUB float ptr [EDX + 0x20]         ; 005f74ee
    FXCH                                ; 005f74f1
    FSUB float ptr [EDX + 0x4]          ; 005f74f3
    FXCH                                ; 005f74f6
    FMUL ST4                            ; 005f74f8
    FXCH                                ; 005f74fa
    FMULP ST4                           ; 005f74fc
    FXCH ST2                            ; 005f74fe
    FSTP float ptr [ESP + 0x8]          ; 005f7500
    FSTP float ptr [ESP + 0xc]          ; 005f7504
    JMP 0x005f74ae                      ; 005f7508
        ;   XREF to: 005f74ae (UNCONDITIONAL_JUMP)  ; LAB_005f74ae
    FLD float ptr [EDX + 0x28]          ; 005f750a
        ;   Label: LAB_005f750a
    FSUB float ptr [ESP + 0x40]         ; 005f750d
    FLD1                                ; 005f7511
    FADDP                               ; 005f7513
    FSQRT                               ; 005f7515
    FLD double ptr [0x006583e5]         ; 005f7517 | g_QuaternionMatrixConversionHalf
    FLD ST0                             ; 005f751d
    FDIV ST0,ST2                        ; 005f751f
    FLD ST2                             ; 005f7521
    FMULP ST2                           ; 005f7523
    FLD float ptr [EDX + 0x10]          ; 005f7525
    FSUB float ptr [EDX + 0x4]          ; 005f7528
    FXCH                                ; 005f752b
    FSTP ST3                            ; 005f752d
    FMUL ST2                            ; 005f752f
    FLD float ptr [EDX + 0x18]          ; 005f7531
    FLD float ptr [EDX + 0x8]           ; 005f7534
    FADD float ptr [EDX + 0x20]         ; 005f7537
    FXCH                                ; 005f753a
    FADD float ptr [EDX + 0x24]         ; 005f753c
    FXCH                                ; 005f753f
    FMUL ST4                            ; 005f7541
    FXCH                                ; 005f7543
    FMULP ST4                           ; 005f7545
    FXCH ST2                            ; 005f7547
    FSTP float ptr [ESP + 0x14]         ; 005f7549
    FSTP float ptr [ESP + 0x8]          ; 005f754d
    FSTP float ptr [ESP + 0xc]          ; 005f7551
    FSTP float ptr [ESP + 0x10]         ; 005f7555
    LEA ESI,[ESP + 0x8]                 ; 005f7559
    MOV EDI,ECX                         ; 005f755d
    MOVSD ES:EDI,ESI                    ; 005f755f
    MOVSD ES:EDI,ESI                    ; 005f7560
    MOVSD ES:EDI,ESI                    ; 005f7561
    MOVSD ES:EDI,ESI                    ; 005f7562
    MOV EAX,ECX                         ; 005f7563
    MOV ESP,EBP                         ; 005f7565
    POP EBP                             ; 005f7567
    POP EDI                             ; 005f7568
    RET                                 ; 005f7569
    FLD float ptr [EDX + 0x14]          ; 005f756a
        ;   Label: LAB_005f756a
    FCOMP float ptr [EDX + 0x28]        ; 005f756d
    FNSTSW AX                           ; 005f7570
    SAHF                                ; 005f7572
    JBE 0x005f750a                      ; 005f7573
        ;   XREF to: 005f750a (CONDITIONAL_JUMP)  ; LAB_005f750a
    FLD float ptr [EDX + 0x28]          ; 005f7575
    FADD float ptr [EDX]                ; 005f7578
    FSUBR float ptr [EDX + 0x14]        ; 005f757a
    FLD1                                ; 005f757d
    FADDP                               ; 005f757f
    FSQRT                               ; 005f7581
    FLD double ptr [0x006583e5]         ; 005f7583 | g_QuaternionMatrixConversionHalf
    FLD ST0                             ; 005f7589
    FDIV ST0,ST2                        ; 005f758b
    FLD ST2                             ; 005f758d
    FMULP ST2                           ; 005f758f
    FLD float ptr [EDX + 0x8]           ; 005f7591
    FSUB float ptr [EDX + 0x20]         ; 005f7594
    FXCH                                ; 005f7597
    FSTP ST3                            ; 005f7599
    FMUL ST2                            ; 005f759b
    FLD float ptr [EDX + 0x4]           ; 005f759d
    FLD float ptr [EDX + 0x24]          ; 005f75a0
    FADD float ptr [EDX + 0x18]         ; 005f75a3
    FXCH                                ; 005f75a6
    FADD float ptr [EDX + 0x10]         ; 005f75a8
    FXCH                                ; 005f75ab
    FMUL ST4                            ; 005f75ad
    FXCH                                ; 005f75af
    FMULP ST4                           ; 005f75b1
    FXCH ST2                            ; 005f75b3
    FSTP float ptr [ESP + 0x10]         ; 005f75b5
    FSTP float ptr [ESP + 0x8]          ; 005f75b9
    FSTP float ptr [ESP + 0x14]         ; 005f75bd
    FSTP float ptr [ESP + 0xc]          ; 005f75c1
    LEA ESI,[ESP + 0x8]                 ; 005f75c5
    MOV EDI,ECX                         ; 005f75c9
    MOVSD ES:EDI,ESI                    ; 005f75cb
    MOVSD ES:EDI,ESI                    ; 005f75cc
    MOVSD ES:EDI,ESI                    ; 005f75cd
    MOVSD ES:EDI,ESI                    ; 005f75ce
    MOV EAX,ECX                         ; 005f75cf
    MOV ESP,EBP                         ; 005f75d1
    POP EBP                             ; 005f75d3
    POP EDI                             ; 005f75d4
    RET                                 ; 005f75d5

