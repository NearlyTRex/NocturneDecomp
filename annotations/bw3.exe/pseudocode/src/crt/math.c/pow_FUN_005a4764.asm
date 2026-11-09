; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_pow_FUN_005a4764(void)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980 at 004509b8
;   core_set.cpp_CDemonSet_setGamma_FUN_0053b1c0 at 0053b20b
;   core_shadow.cpp_FUN_005438d0 at 005444d4
;   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00500be0 at 00500c20
;   sound_mp3.cpp_requantizeLayer3Samples_FUN_005003f0 at 0050067b
;
; Referenced Globals:
;   undefined4 DAT_00607b5c
;
; Called Functions:
;   crt_unknown.c_FUN_005a48a0
;   crt_unknown.c_FUN_005aa3e0
;   crt_unknown.c_FUN_005aa490
;   crt_unknown.c_FUN_005aa623
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a4764
        ;   Label: crt_math.c_pow_FUN_005a4764
    MOV EBP,ESP                         ; 005a4765
    FTST                                ; 005a4767
    SUB ESP,0x18                        ; 005a4769
    FSTSW word ptr [EBP + -0x8]         ; 005a476c
    FST double ptr [EBP + -0x18]        ; 005a4770
    MOV AH,byte ptr [EBP + -0x7]        ; 005a4773
    SAHF                                ; 005a4776
    JNZ 0x005a479c                      ; 005a4777
        ;   XREF to: 005a479c (CONDITIONAL_JUMP)  ; LAB_005a479c
    MOV AL,0x0                          ; 005a4779
    FSTP ST0                            ; 005a477b
        ;   Label: LAB_005a477b
    FSTP double ptr [EBP + -0x10]       ; 005a477d
    MOV dword ptr [EBP + -0x8],EAX      ; 005a4780
    MOV dword ptr [EBP + -0x4],EDX      ; 005a4783
    CALL crt_unknown.c_FUN_005aa3e0     ; 005a4786
        ;   XREF to: 005aa3e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa3e0()
    SUB ESP,0x8                         ; 005a478b
    PUSH EDX                            ; 005a478e
    PUSH EAX                            ; 005a478f
    FLD double ptr [ESP]                ; 005a4790
    MOV EDX,dword ptr [EBP + -0x4]      ; 005a4793
    WAIT                                ; 005a4796
    JMP 0x005a4895                      ; 005a4797
        ;   XREF to: 005a4895 (UNCONDITIONAL_JUMP)  ; LAB_005a4895
    FLD ST1                             ; 005a479c
        ;   Label: LAB_005a479c
    FRNDINT                             ; 005a479e
    FCOMP ST2                           ; 005a47a0
    FSTSW word ptr [EBP + -0x6]         ; 005a47a2
    WAIT                                ; 005a47a6
    MOV AH,byte ptr [EBP + -0x5]        ; 005a47a7
    JNC 0x005a47e7                      ; 005a47aa
        ;   XREF to: 005a47e7 (CONDITIONAL_JUMP)  ; LAB_005a47e7
    MOV AL,0x1                          ; 005a47ac
    SAHF                                ; 005a47ae
    JNZ 0x005a477b                      ; 005a47af
        ;   XREF to: 005a477b (CONDITIONAL_JUMP)  ; LAB_005a477b
    MOV AX,0x2                          ; 005a47b1
    MOV word ptr [EBP + -0x4],AX        ; 005a47b5
    FILD word ptr [EBP + -0x4]          ; 005a47b9
    FLD ST2                             ; 005a47bc
    FPREM                               ; 005a47be
    FSTSW word ptr [EBP + -0x4]         ; 005a47c0
    WAIT                                ; 005a47c4
    MOV AH,byte ptr [EBP + -0x3]        ; 005a47c5
    SAHF                                ; 005a47c8
    MOV AH,0x0                          ; 005a47c9
    JP 0x005a47de                       ; 005a47cb
        ;   XREF to: 005a47de (CONDITIONAL_JUMP)  ; LAB_005a47de
    FTST                                ; 005a47cd
    FSTSW word ptr [EBP + -0x4]         ; 005a47cf
    WAIT                                ; 005a47d3
    MOV AH,byte ptr [EBP + -0x3]        ; 005a47d4
    SAHF                                ; 005a47d7
    MOV AH,0x0                          ; 005a47d8
    JZ 0x005a47de                       ; 005a47da
        ;   XREF to: 005a47de (CONDITIONAL_JUMP)  ; LAB_005a47de
    MOV AH,0x1                          ; 005a47dc
    MOV byte ptr [EBP + -0x7],AH        ; 005a47de
        ;   Label: LAB_005a47de
    FSTP ST0                            ; 005a47e1
    FSTP ST0                            ; 005a47e3
    JMP 0x005a47ef                      ; 005a47e5
        ;   XREF to: 005a47ef (UNCONDITIONAL_JUMP)  ; LAB_005a47ef
    SAHF                                ; 005a47e7
        ;   Label: LAB_005a47e7
    JZ 0x005a47ef                       ; 005a47e8
        ;   XREF to: 005a47ef (CONDITIONAL_JUMP)  ; LAB_005a47ef
    JMP 0x005a4876                      ; 005a47ea
        ;   XREF to: 005a4876 (UNCONDITIONAL_JUMP)  ; LAB_005a4876
    FLD ST1                             ; 005a47ef
        ;   Label: LAB_005a47ef
    FSTP double ptr [EBP + -0x10]       ; 005a47f1
    WAIT                                ; 005a47f4
    MOV AX,word ptr [EBP + -0xa]        ; 005a47f5
    AND AX,0x7ff0                       ; 005a47f9
    SUB AX,0x3ff0                       ; 005a47fd
    CMP AX,0x100                        ; 005a4801
    JNC 0x005a4876                      ; 005a4805
        ;   XREF to: 005a4876 (CONDITIONAL_JUMP)  ; LAB_005a4876
    FLD ST1                             ; 005a4807
    FISTP dword ptr [EBP + -0x4]        ; 005a4809
    WAIT                                ; 005a480c
    MOV AX,word ptr [EBP + -0x2]        ; 005a480d
    OR AX,AX                            ; 005a4811
    JNZ 0x005a4821                      ; 005a4814
        ;   XREF to: 005a4821 (CONDITIONAL_JUMP)  ; LAB_005a4821
    MOV AX,word ptr [EBP + -0x4]        ; 005a4816
    CALL crt_unknown.c_FUN_005a48a0     ; 005a481a
        ;   XREF to: 005a48a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a48a0()
    JMP 0x005a484c                      ; 005a481f
        ;   XREF to: 005a484c (UNCONDITIONAL_JUMP)  ; LAB_005a484c
    INC AX                              ; 005a4821
        ;   Label: LAB_005a4821
    JNZ 0x005a4876                      ; 005a4823
        ;   XREF to: 005a4876 (CONDITIONAL_JUMP)  ; LAB_005a4876
    OR AX,word ptr [EBP + -0x4]         ; 005a4825
    JZ 0x005a4876                       ; 005a4829
        ;   XREF to: 005a4876 (CONDITIONAL_JUMP)  ; LAB_005a4876
    NEG AX                              ; 005a482b
    CALL crt_unknown.c_FUN_005a48a0     ; 005a482e
        ;   XREF to: 005a48a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a48a0()
    FLD1                                ; 005a4833
    TEST byte ptr [0x00607b5c],0x1      ; 005a4835 | DAT_00607b5c
    JNZ 0x005a4842                      ; 005a483c
        ;   XREF to: 005a4842 (CONDITIONAL_JUMP)  ; LAB_005a4842
    FDIVRP                              ; 005a483e
    JMP 0x005a484c                      ; 005a4840
        ;   XREF to: 005a484c (UNCONDITIONAL_JUMP)  ; LAB_005a484c
    MOV EAX,0xf                         ; 005a4842
        ;   Label: LAB_005a4842
    CALL crt_unknown.c_FUN_005aa623     ; 005a4847
        ;   XREF to: 005aa623 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa623()
    FST double ptr [EBP + -0x8]         ; 005a484c
        ;   Label: LAB_005a484c
    WAIT                                ; 005a484f
    MOV AX,word ptr [EBP + -0x8]        ; 005a4850
    OR AX,word ptr [EBP + -0x6]         ; 005a4854
    OR AX,word ptr [EBP + -0x4]         ; 005a4858
    JNZ 0x005a4872                      ; 005a485c
        ;   XREF to: 005a4872 (CONDITIONAL_JUMP)  ; LAB_005a4872
    MOV AX,word ptr [EBP + -0x2]        ; 005a485e
    SHL AX,0x1                          ; 005a4862
    CMP AX,0xffe0                       ; 005a4865
    JNZ 0x005a4872                      ; 005a4869
        ;   XREF to: 005a4872 (CONDITIONAL_JUMP)  ; LAB_005a4872
    MOV AL,0x2                          ; 005a486b
        ;   Label: LAB_005a486b
    JMP 0x005a477b                      ; 005a486d
        ;   XREF to: 005a477b (UNCONDITIONAL_JUMP)  ; LAB_005a477b
    FSTP ST1                            ; 005a4872
        ;   Label: LAB_005a4872
    JMP 0x005a4895                      ; 005a4874
        ;   XREF to: 005a4895 (UNCONDITIONAL_JUMP)  ; LAB_005a4895
    FLDLN2                              ; 005a4876
        ;   Label: LAB_005a4876
    FMUL ST2                            ; 005a4878
    FXCH                                ; 005a487a
    FABS                                ; 005a487c
    FYL2X                               ; 005a487e
    MOV AL,0x7                          ; 005a4880
    CALL crt_unknown.c_FUN_005aa490     ; 005a4882
        ;   XREF to: 005aa490 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa490()
    CMP AL,0x0                          ; 005a4887
    JNZ 0x005a486b                      ; 005a4889
        ;   XREF to: 005a486b (CONDITIONAL_JUMP)  ; LAB_005a486b
    MOV AH,byte ptr [EBP + -0x7]        ; 005a488b
    SAHF                                ; 005a488e
    JNC 0x005a4893                      ; 005a488f
        ;   XREF to: 005a4893 (CONDITIONAL_JUMP)  ; LAB_005a4893
    FCHS                                ; 005a4891
    FSTP ST1                            ; 005a4893
        ;   Label: LAB_005a4893
    FSTP double ptr [EBP + -0x8]        ; 005a4895
        ;   Label: LAB_005a4895
    FLD double ptr [EBP + -0x8]         ; 005a4898
    WAIT                                ; 005a489b
    MOV ESP,EBP                         ; 005a489c
    POP EBP                             ; 005a489e
    RET                                 ; 005a489f

