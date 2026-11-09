; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_pow_FUN_005b9484(void)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00443180 at 004431b8
;   core_menu.cpp_FUN_004ed260 at 004ed9ec
;   core_set.cpp_CDemonSet_setGamma_FUN_00534580 at 005345cb
;   core_shadow.cpp_FUN_0053c500 at 0053d06e
;   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00508100 at 00508140
;   sound_mp3.cpp_requantizeLayer3Samples_FUN_00507910 at 00507b9b
;
; Referenced Globals:
;   undefined4 DAT_0061f458
;
; Called Functions:
;   crt_unknown.c_FUN_005b95c0
;   crt_unknown.c_FUN_005bf2b0
;   crt_unknown.c_FUN_005bf360
;   crt_unknown.c_FUN_005bf4f3
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b9484
        ;   Label: crt_math.c_pow_FUN_005b9484
    MOV EBP,ESP                         ; 005b9485
    FTST                                ; 005b9487
    SUB ESP,0x18                        ; 005b9489
    FSTSW word ptr [EBP + -0x8]         ; 005b948c
    FST double ptr [EBP + -0x18]        ; 005b9490
    MOV AH,byte ptr [EBP + -0x7]        ; 005b9493
    SAHF                                ; 005b9496
    JNZ 0x005b94bc                      ; 005b9497
        ;   XREF to: 005b94bc (CONDITIONAL_JUMP)  ; LAB_005b94bc
    MOV AL,0x0                          ; 005b9499
    FSTP ST0                            ; 005b949b
        ;   Label: LAB_005b949b
    FSTP double ptr [EBP + -0x10]       ; 005b949d
    MOV dword ptr [EBP + -0x8],EAX      ; 005b94a0
    MOV dword ptr [EBP + -0x4],EDX      ; 005b94a3
    CALL crt_unknown.c_FUN_005bf2b0     ; 005b94a6
        ;   XREF to: 005bf2b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf2b0()
    SUB ESP,0x8                         ; 005b94ab
    PUSH EDX                            ; 005b94ae
    PUSH EAX                            ; 005b94af
    FLD double ptr [ESP]                ; 005b94b0
    MOV EDX,dword ptr [EBP + -0x4]      ; 005b94b3
    WAIT                                ; 005b94b6
    JMP 0x005b95b5                      ; 005b94b7
        ;   XREF to: 005b95b5 (UNCONDITIONAL_JUMP)  ; LAB_005b95b5
    FLD ST1                             ; 005b94bc
        ;   Label: LAB_005b94bc
    FRNDINT                             ; 005b94be
    FCOMP ST2                           ; 005b94c0
    FSTSW word ptr [EBP + -0x6]         ; 005b94c2
    WAIT                                ; 005b94c6
    MOV AH,byte ptr [EBP + -0x5]        ; 005b94c7
    JNC 0x005b9507                      ; 005b94ca
        ;   XREF to: 005b9507 (CONDITIONAL_JUMP)  ; LAB_005b9507
    MOV AL,0x1                          ; 005b94cc
    SAHF                                ; 005b94ce
    JNZ 0x005b949b                      ; 005b94cf
        ;   XREF to: 005b949b (CONDITIONAL_JUMP)  ; LAB_005b949b
    MOV AX,0x2                          ; 005b94d1
    MOV word ptr [EBP + -0x4],AX        ; 005b94d5
    FILD word ptr [EBP + -0x4]          ; 005b94d9
    FLD ST2                             ; 005b94dc
    FPREM                               ; 005b94de
    FSTSW word ptr [EBP + -0x4]         ; 005b94e0
    WAIT                                ; 005b94e4
    MOV AH,byte ptr [EBP + -0x3]        ; 005b94e5
    SAHF                                ; 005b94e8
    MOV AH,0x0                          ; 005b94e9
    JP 0x005b94fe                       ; 005b94eb
        ;   XREF to: 005b94fe (CONDITIONAL_JUMP)  ; LAB_005b94fe
    FTST                                ; 005b94ed
    FSTSW word ptr [EBP + -0x4]         ; 005b94ef
    WAIT                                ; 005b94f3
    MOV AH,byte ptr [EBP + -0x3]        ; 005b94f4
    SAHF                                ; 005b94f7
    MOV AH,0x0                          ; 005b94f8
    JZ 0x005b94fe                       ; 005b94fa
        ;   XREF to: 005b94fe (CONDITIONAL_JUMP)  ; LAB_005b94fe
    MOV AH,0x1                          ; 005b94fc
    MOV byte ptr [EBP + -0x7],AH        ; 005b94fe
        ;   Label: LAB_005b94fe
    FSTP ST0                            ; 005b9501
    FSTP ST0                            ; 005b9503
    JMP 0x005b950f                      ; 005b9505
        ;   XREF to: 005b950f (UNCONDITIONAL_JUMP)  ; LAB_005b950f
    SAHF                                ; 005b9507
        ;   Label: LAB_005b9507
    JZ 0x005b950f                       ; 005b9508
        ;   XREF to: 005b950f (CONDITIONAL_JUMP)  ; LAB_005b950f
    JMP 0x005b9596                      ; 005b950a
        ;   XREF to: 005b9596 (UNCONDITIONAL_JUMP)  ; LAB_005b9596
    FLD ST1                             ; 005b950f
        ;   Label: LAB_005b950f
    FSTP double ptr [EBP + -0x10]       ; 005b9511
    WAIT                                ; 005b9514
    MOV AX,word ptr [EBP + -0xa]        ; 005b9515
    AND AX,0x7ff0                       ; 005b9519
    SUB AX,0x3ff0                       ; 005b951d
    CMP AX,0x100                        ; 005b9521
    JNC 0x005b9596                      ; 005b9525
        ;   XREF to: 005b9596 (CONDITIONAL_JUMP)  ; LAB_005b9596
    FLD ST1                             ; 005b9527
    FISTP dword ptr [EBP + -0x4]        ; 005b9529
    WAIT                                ; 005b952c
    MOV AX,word ptr [EBP + -0x2]        ; 005b952d
    OR AX,AX                            ; 005b9531
    JNZ 0x005b9541                      ; 005b9534
        ;   XREF to: 005b9541 (CONDITIONAL_JUMP)  ; LAB_005b9541
    MOV AX,word ptr [EBP + -0x4]        ; 005b9536
    CALL crt_unknown.c_FUN_005b95c0     ; 005b953a
        ;   XREF to: 005b95c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b95c0()
    JMP 0x005b956c                      ; 005b953f
        ;   XREF to: 005b956c (UNCONDITIONAL_JUMP)  ; LAB_005b956c
    INC AX                              ; 005b9541
        ;   Label: LAB_005b9541
    JNZ 0x005b9596                      ; 005b9543
        ;   XREF to: 005b9596 (CONDITIONAL_JUMP)  ; LAB_005b9596
    OR AX,word ptr [EBP + -0x4]         ; 005b9545
    JZ 0x005b9596                       ; 005b9549
        ;   XREF to: 005b9596 (CONDITIONAL_JUMP)  ; LAB_005b9596
    NEG AX                              ; 005b954b
    CALL crt_unknown.c_FUN_005b95c0     ; 005b954e
        ;   XREF to: 005b95c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b95c0()
    FLD1                                ; 005b9553
    TEST byte ptr [0x0061f458],0x1      ; 005b9555 | DAT_0061f458
    JNZ 0x005b9562                      ; 005b955c
        ;   XREF to: 005b9562 (CONDITIONAL_JUMP)  ; LAB_005b9562
    FDIVRP                              ; 005b955e
    JMP 0x005b956c                      ; 005b9560
        ;   XREF to: 005b956c (UNCONDITIONAL_JUMP)  ; LAB_005b956c
    MOV EAX,0xf                         ; 005b9562
        ;   Label: LAB_005b9562
    CALL crt_unknown.c_FUN_005bf4f3     ; 005b9567
        ;   XREF to: 005bf4f3 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf4f3()
    FST double ptr [EBP + -0x8]         ; 005b956c
        ;   Label: LAB_005b956c
    WAIT                                ; 005b956f
    MOV AX,word ptr [EBP + -0x8]        ; 005b9570
    OR AX,word ptr [EBP + -0x6]         ; 005b9574
    OR AX,word ptr [EBP + -0x4]         ; 005b9578
    JNZ 0x005b9592                      ; 005b957c
        ;   XREF to: 005b9592 (CONDITIONAL_JUMP)  ; LAB_005b9592
    MOV AX,word ptr [EBP + -0x2]        ; 005b957e
    SHL AX,0x1                          ; 005b9582
    CMP AX,0xffe0                       ; 005b9585
    JNZ 0x005b9592                      ; 005b9589
        ;   XREF to: 005b9592 (CONDITIONAL_JUMP)  ; LAB_005b9592
    MOV AL,0x2                          ; 005b958b
        ;   Label: LAB_005b958b
    JMP 0x005b949b                      ; 005b958d
        ;   XREF to: 005b949b (UNCONDITIONAL_JUMP)  ; LAB_005b949b
    FSTP ST1                            ; 005b9592
        ;   Label: LAB_005b9592
    JMP 0x005b95b5                      ; 005b9594
        ;   XREF to: 005b95b5 (UNCONDITIONAL_JUMP)  ; LAB_005b95b5
    FLDLN2                              ; 005b9596
        ;   Label: LAB_005b9596
    FMUL ST2                            ; 005b9598
    FXCH                                ; 005b959a
    FABS                                ; 005b959c
    FYL2X                               ; 005b959e
    MOV AL,0x7                          ; 005b95a0
    CALL crt_unknown.c_FUN_005bf360     ; 005b95a2
        ;   XREF to: 005bf360 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf360()
    CMP AL,0x0                          ; 005b95a7
    JNZ 0x005b958b                      ; 005b95a9
        ;   XREF to: 005b958b (CONDITIONAL_JUMP)  ; LAB_005b958b
    MOV AH,byte ptr [EBP + -0x7]        ; 005b95ab
    SAHF                                ; 005b95ae
    JNC 0x005b95b3                      ; 005b95af
        ;   XREF to: 005b95b3 (CONDITIONAL_JUMP)  ; LAB_005b95b3
    FCHS                                ; 005b95b1
    FSTP ST1                            ; 005b95b3
        ;   Label: LAB_005b95b3
    FSTP double ptr [EBP + -0x8]        ; 005b95b5
        ;   Label: LAB_005b95b5
    FLD double ptr [EBP + -0x8]         ; 005b95b8
    WAIT                                ; 005b95bb
    MOV ESP,EBP                         ; 005b95bc
    POP EBP                             ; 005b95be
    RET                                 ; 005b95bf

