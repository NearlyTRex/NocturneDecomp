; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_00556550(undefined4 param_1,int *param_2,uint param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_sound_snddx_cpp_005e9e2b
;   TerminatedCString s_DirectSoundDevice_setSfx_005e9e3e
;   TerminatedCString s_Set_hardware_sfx_seconda_005e9e6c
;   TerminatedCString s_Set_hardware_sfx_seconda_005e9e95
;   TerminatedCString s_Set_hardware_sfx_seconda_005e9ebb
;   TerminatedCString s_Set_hardware_sfx_seconda_005e9ee7
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005e9f1b
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005e9f3f
;   TerminatedCString s_Set_hardware_sfx_seconda_005e9f63
;   TerminatedCString s_Set_hardware_sfx_seconda_005e9f8c
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005e9fb8
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005e9fd8
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005ea004
;   TerminatedCString s_Set_hardware_sfx_seconda_005ea030
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_snddx.cpp_FUN_00554f80
;   sound_snddx.cpp_FUN_00555020
;   sound_sndmain.cpp_FUN_00552810
;   sound_sndmain.cpp_FUN_005549c0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556550
        ;   Label: sound_snddx.cpp_FUN_00556550
    PUSH ESI                            ; 00556551
    PUSH EDI                            ; 00556552
    PUSH EBP                            ; 00556553
    MOV EBP,ESP                         ; 00556554
    SUB ESP,0x12f8                      ; 00556556
    AND ESP,0xfffffff8                  ; 0055655c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0055655f
    MOV ESI,dword ptr [EBX + 0x60]      ; 00556562
    TEST ESI,ESI                        ; 00556565
    JLE 0x00556572                      ; 00556567
        ;   XREF to: 00556572 (CONDITIONAL_JUMP)  ; LAB_00556572
    CMP ESI,0x1f                        ; 00556569
    JL 0x005567c0                       ; 0055656c
        ;   XREF to: 005567c0 (CONDITIONAL_JUMP)  ; LAB_005567c0
    MOV ECX,0x5e9e2b                    ; 00556572 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_00556572
    MOV EDI,0x4f3                       ; 00556577
    PUSH 0x5e9e3e                       ; 0055657c | = "DirectSoundDevice::setSfxPos - invali..."
    MOV dword ptr [0x01d046a0],ECX      ; 00556581 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00556587 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0055658d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00556592
    MOV dword ptr [ESP + 0x12ec],0x1    ; 00556595
        ;   Label: LAB_00556595
    LEA EAX,[ESI*0x8 + 0x0]             ; 005565a0
    ADD EAX,ESI                         ; 005565a7
    MOV EDX,0x264ac10                   ; 005565a9
    SHL EAX,0x2                         ; 005565ae
    ADD EDX,EAX                         ; 005565b1
    MOV dword ptr [ESP + 0x12f0],EDX    ; 005565b3
    MOV EDI,dword ptr [EDX]             ; 005565ba
    MOV ESI,dword ptr [EDX + 0x4]       ; 005565bc
    TEST EDI,EDI                        ; 005565bf
    JZ 0x005567b7                       ; 005565c1
        ;   XREF to: 005567b7 (CONDITIONAL_JUMP)  ; LAB_005567b7
    TEST ESI,ESI                        ; 005565c7
    JNZ 0x00556a25                      ; 005565c9
        ;   XREF to: 00556a25 (CONDITIONAL_JUMP)  ; LAB_00556a25
    TEST byte ptr [EBP + 0x1c],0xca     ; 005565cf
    JZ 0x005566ff                       ; 005565d3
        ;   XREF to: 005566ff (CONDITIONAL_JUMP)  ; LAB_005566ff
    CALL sound_sndmain.cpp_FUN_00552810 ; 005565d9
        ;   XREF to: 00552810 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552810()
    MOV ECX,0x1                         ; 005565de
    MOV EDX,dword ptr [EBX + 0x90]      ; 005565e3
    MOV ESI,EAX                         ; 005565e9
    MOV dword ptr [ESP],EDX             ; 005565eb
    CMP EAX,ECX                         ; 005565ee
    JLE 0x00556614                      ; 005565f0
        ;   XREF to: 00556614 (CONDITIONAL_JUMP)  ; LAB_00556614
    LEA EDX,[EBX + 0x4]                 ; 005565f2
    FLD float ptr [EDX + 0x90]          ; 005565f5
        ;   Label: LAB_005565f5
    FCOMP float ptr [ESP]               ; 005565fb
    FNSTSW AX                           ; 005565fe
    SAHF                                ; 00556600
    JBE 0x0055660c                      ; 00556601
        ;   XREF to: 0055660c (CONDITIONAL_JUMP)  ; LAB_0055660c
    MOV EAX,dword ptr [EDX + 0x90]      ; 00556603
    MOV dword ptr [ESP],EAX             ; 00556609
    INC ECX                             ; 0055660c
        ;   Label: LAB_0055660c
    ADD EDX,0x4                         ; 0055660d
    CMP ECX,ESI                         ; 00556610
    JL 0x005565f5                       ; 00556612
        ;   XREF to: 005565f5 (CONDITIONAL_JUMP)  ; LAB_005565f5
    PUSH dword ptr [ESP]                ; 00556614
        ;   Label: LAB_00556614
    CALL sound_snddx.cpp_FUN_00554f80   ; 00556617
        ;   XREF to: 00554f80 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_00554f80()
    ADD ESP,0x4                         ; 0055661c
    MOV dword ptr [ESP + 0x12dc],EAX    ; 0055661f
    XOR EAX,EAX                         ; 00556626
    MOV dword ptr [ESP + 0x12e8],EAX    ; 00556628
    CMP ESI,0x2                         ; 0055662f
    JNZ 0x00556673                      ; 00556632
        ;   XREF to: 00556673 (CONDITIONAL_JUMP)  ; LAB_00556673
    FLD float ptr [ESP]                 ; 00556634
    FLDZ                                ; 00556637
    FCOMPP                              ; 00556639
    FNSTSW AX                           ; 0055663b
    SAHF                                ; 0055663d
    JNC 0x00556673                      ; 0055663e
        ;   XREF to: 00556673 (CONDITIONAL_JUMP)  ; LAB_00556673
    FLD float ptr [EBX + 0x90]          ; 00556640
    FCOMP float ptr [EBX + 0x94]        ; 00556646
    FNSTSW AX                           ; 0055664c
    SAHF                                ; 0055664e
    JNC 0x00556849                      ; 0055664f
        ;   XREF to: 00556849 (CONDITIONAL_JUMP)  ; LAB_00556849
    FLD float ptr [EBX + 0x90]          ; 00556655
    FLDZ                                ; 0055665b
    FCOMPP                              ; 0055665d
    FNSTSW AX                           ; 0055665f
    SAHF                                ; 00556661
    JC 0x005567dc                       ; 00556662
        ;   XREF to: 005567dc (CONDITIONAL_JUMP)  ; LAB_005567dc
    MOV dword ptr [ESP + 0x12e8],0x2710 ; 00556668
        ;   Label: LAB_00556668
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00556673
        ;   Label: LAB_00556673
    MOV EAX,dword ptr [ESP + 0x12dc]    ; 0055667a
    MOV ECX,dword ptr [EDX + 0x14]      ; 00556681
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00556684
    SUB EAX,ECX                         ; 00556687
    CMP ESI,-0x1                        ; 00556689
    JZ 0x005568e4                       ; 0055668c
        ;   XREF to: 005568e4 (CONDITIONAL_JUMP)  ; LAB_005568e4
    MOV EDX,dword ptr [ESP + 0x12dc]    ; 00556692
        ;   Label: LAB_00556692
    PUSH EDX                            ; 00556699
    MOV EAX,dword ptr [EDI]             ; 0055669a
    PUSH EDI                            ; 0055669c
    CALL dword ptr [EAX + 0x3c]         ; 0055669d
    TEST EAX,EAX                        ; 005566a0
    JNZ 0x005568f7                      ; 005566a2
        ;   XREF to: 005568f7 (CONDITIONAL_JUMP)  ; LAB_005568f7
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 005566a8
        ;   Label: LAB_005566a8
    MOV EAX,dword ptr [ESP + 0x12dc]    ; 005566af
    MOV dword ptr [EDX + 0x14],EAX      ; 005566b6
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 005566b9
        ;   Label: LAB_005566b9
    MOV EAX,dword ptr [ESP + 0x12e8]    ; 005566c0
    MOV ESI,dword ptr [EDX + 0x18]      ; 005566c7
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005566ca
    SUB EAX,ESI                         ; 005566cd
    CMP EDX,-0x1                        ; 005566cf
    JZ 0x00556939                       ; 005566d2
        ;   XREF to: 00556939 (CONDITIONAL_JUMP)  ; LAB_00556939
    MOV ECX,dword ptr [ESP + 0x12e8]    ; 005566d8
        ;   Label: LAB_005566d8
    PUSH ECX                            ; 005566df
    MOV EAX,dword ptr [EDI]             ; 005566e0
    PUSH EDI                            ; 005566e2
    CALL dword ptr [EAX + 0x40]         ; 005566e3
    TEST EAX,EAX                        ; 005566e6
    JNZ 0x0055694c                      ; 005566e8
        ;   XREF to: 0055694c (CONDITIONAL_JUMP)  ; LAB_0055694c
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 005566ee
        ;   Label: LAB_005566ee
    MOV EAX,dword ptr [ESP + 0x12e8]    ; 005566f5
    MOV dword ptr [EDX + 0x18],EAX      ; 005566fc
    TEST byte ptr [EBP + 0x1c],0x96     ; 005566ff
        ;   Label: LAB_005566ff
    JZ 0x00556752                       ; 00556703
        ;   XREF to: 00556752 (CONDITIONAL_JUMP)  ; LAB_00556752
    MOV EAX,dword ptr [EBX + 0x68]      ; 00556705
    FILD dword ptr [EAX + 0x10c]        ; 00556708
    FMUL float ptr [EBX + 0x6c]         ; 0055670e
    SUB ESP,0x4                         ; 00556711
    FSTP float ptr [ESP]                ; 00556714
    CALL sound_snddx.cpp_FUN_00555020   ; 00556717
        ;   XREF to: 00555020 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_00555020()
    ADD ESP,0x4                         ; 0055671c
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055671f
    MOV ESI,EAX                         ; 00556726
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00556728
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0055672b
    SUB EAX,ECX                         ; 0055672e
    CMP EDX,-0x1                        ; 00556730
    JZ 0x0055698e                       ; 00556733
        ;   XREF to: 0055698e (CONDITIONAL_JUMP)  ; LAB_0055698e
    PUSH ESI                            ; 00556739
        ;   Label: LAB_00556739
    MOV EAX,dword ptr [EDI]             ; 0055673a
    PUSH EDI                            ; 0055673c
    CALL dword ptr [EAX + 0x44]         ; 0055673d
    TEST EAX,EAX                        ; 00556740
    JNZ 0x005569a1                      ; 00556742
        ;   XREF to: 005569a1 (CONDITIONAL_JUMP)  ; LAB_005569a1
    MOV EAX,dword ptr [ESP + 0x12f0]    ; 00556748
        ;   Label: LAB_00556748
    MOV dword ptr [EAX + 0x1c],ESI      ; 0055674f
    TEST byte ptr [EBP + 0x1d],0x1      ; 00556752
        ;   Label: LAB_00556752
    JZ 0x00556780                       ; 00556756
        ;   XREF to: 00556780 (CONDITIONAL_JUMP)  ; LAB_00556780
    FLD double ptr [EBX + 0x10c]        ; 00556758
    CALL crt_math.c_round_FUN_005b7ff0  ; 0055675e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [ESP + 0x12c8]      ; 00556763
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 0055676a
    PUSH EAX                            ; 00556771
    MOV EDX,dword ptr [EDI]             ; 00556772
    PUSH EDI                            ; 00556774
    CALL dword ptr [EDX + 0x34]         ; 00556775
    TEST EAX,EAX                        ; 00556778
    JNZ 0x005569e3                      ; 0055677a
        ;   XREF to: 005569e3 (CONDITIONAL_JUMP)  ; LAB_005569e3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00556780
        ;   Label: LAB_00556780
    NOT EAX                             ; 00556783
    MOV EDI,dword ptr [EBX + 0x118]     ; 00556785
    OR EAX,0x40000000                   ; 0055678b
    AND EDI,EAX                         ; 00556790
    MOV EAX,dword ptr [ESP + 0x12ec]    ; 00556792
    MOV dword ptr [EBX + 0x118],EDI     ; 00556799
    TEST EAX,EAX                        ; 0055679f
    JNZ 0x005567b0                      ; 005567a1
        ;   XREF to: 005567b0 (CONDITIONAL_JUMP)  ; LAB_005567b0
    PUSH 0x5ea064                       ; 005567a3 | = "DirectSoundDevice::setSfxOpt - failed\n"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005567a8
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 005567ad
    MOV EDI,dword ptr [ESP + 0x12ec]    ; 005567b0
        ;   Label: LAB_005567b0
    MOV EAX,EDI                         ; 005567b7
        ;   Label: LAB_005567b7
    MOV ESP,EBP                         ; 005567b9
    POP EBP                             ; 005567bb
    POP EDI                             ; 005567bc
    POP ESI                             ; 005567bd
    POP EBX                             ; 005567be
    RET                                 ; 005567bf
    LEA EAX,[ESI*0x8 + 0x0]             ; 005567c0
        ;   Label: LAB_005567c0
    ADD EAX,ESI                         ; 005567c7
    CMP dword ptr [EAX*0x4 + 0x264ac10],0x0 ; 005567c9
    JZ 0x00556572                       ; 005567d1
        ;   XREF to: 00556572 (CONDITIONAL_JUMP)  ; LAB_00556572
    JMP 0x00556595                      ; 005567d7
        ;   XREF to: 00556595 (UNCONDITIONAL_JUMP)  ; LAB_00556595
    FLD float ptr [EBX + 0x94]          ; 005567dc
        ;   Label: LAB_005567dc
    FDIV float ptr [EBX + 0x90]         ; 005567e2
    FLDLN2                              ; 005567e8
    FXCH                                ; 005567ea
    FYL2X                               ; 005567ec
    FMUL double ptr [0x005ea099]        ; 005567ee | DAT_005ea099
    SUB ESP,0x8                         ; 005567f4
    FSTP double ptr [ESP]               ; 005567f7
    CALL crt_math.c_floor_FUN_005b84d0  ; 005567fa
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x12d0],EAX    ; 005567ff
    MOV dword ptr [ESP + 0x12d4],EDX    ; 00556806
    FLD double ptr [ESP + 0x12d0]       ; 0055680d
    ADD ESP,0x8                         ; 00556814
    CALL crt_math.c_round_FUN_005b7ff0  ; 00556817
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x12e8]      ; 0055681c
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 00556823
    CMP EDX,0x2710                      ; 0055682a
    JGE 0x00556840                      ; 00556830
        ;   XREF to: 00556840 (CONDITIONAL_JUMP)  ; LAB_00556840
    XOR ESI,ESI                         ; 00556832
        ;   Label: LAB_00556832
    MOV dword ptr [ESP + 0x12e8],ESI    ; 00556834
    JMP 0x00556673                      ; 0055683b
        ;   XREF to: 00556673 (UNCONDITIONAL_JUMP)  ; LAB_00556673
    TEST EDX,EDX                        ; 00556840
        ;   Label: LAB_00556840
    JG 0x00556832                       ; 00556842
        ;   XREF to: 00556832 (CONDITIONAL_JUMP)  ; LAB_00556832
    JMP 0x00556673                      ; 00556844
        ;   XREF to: 00556673 (UNCONDITIONAL_JUMP)  ; LAB_00556673
    FLD float ptr [EBX + 0x90]          ; 00556849
        ;   Label: LAB_00556849
    FCOMP float ptr [EBX + 0x94]        ; 0055684f
    FNSTSW AX                           ; 00556855
    SAHF                                ; 00556857
    JNC 0x00556673                      ; 00556858
        ;   XREF to: 00556673 (CONDITIONAL_JUMP)  ; LAB_00556673
    FLD float ptr [EBX + 0x94]          ; 0055685e
    FLDZ                                ; 00556864
    FCOMPP                              ; 00556866
    FNSTSW AX                           ; 00556868
    SAHF                                ; 0055686a
    JC 0x0055687d                       ; 0055686b
        ;   XREF to: 0055687d (CONDITIONAL_JUMP)  ; LAB_0055687d
    MOV dword ptr [ESP + 0x12e8],0xffffd8f0 ; 0055686d
    JMP 0x00556673                      ; 00556878
        ;   XREF to: 00556673 (UNCONDITIONAL_JUMP)  ; LAB_00556673
    FLD float ptr [EBX + 0x90]          ; 0055687d
        ;   Label: LAB_0055687d
    FDIV float ptr [EBX + 0x94]         ; 00556883
    FLDLN2                              ; 00556889
    FXCH                                ; 0055688b
    FYL2X                               ; 0055688d
    FMUL double ptr [0x005ea091]        ; 0055688f | DAT_005ea091
    SUB ESP,0x8                         ; 00556895
    FSTP double ptr [ESP]               ; 00556898
    CALL crt_math.c_floor_FUN_005b84d0  ; 0055689b
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x12d0],EAX    ; 005568a0
    MOV dword ptr [ESP + 0x12d4],EDX    ; 005568a7
    FLD double ptr [ESP + 0x12d0]       ; 005568ae
    ADD ESP,0x8                         ; 005568b5
    CALL crt_math.c_round_FUN_005b7ff0  ; 005568b8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x12e8]      ; 005568bd
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 005568c4
    TEST EDX,EDX                        ; 005568cb
    JL 0x00556668                       ; 005568cd
        ;   XREF to: 00556668 (CONDITIONAL_JUMP)  ; LAB_00556668
    CMP EDX,0xffffd8f0                  ; 005568d3
    JLE 0x00556673                      ; 005568d9
        ;   XREF to: 00556673 (CONDITIONAL_JUMP)  ; LAB_00556673
    JMP 0x00556668                      ; 005568df
        ;   XREF to: 00556668 (UNCONDITIONAL_JUMP)  ; LAB_00556668
    CDQ                                 ; 005568e4
        ;   Label: LAB_005568e4
    XOR EAX,EDX                         ; 005568e5
    SUB EAX,EDX                         ; 005568e7
    CMP EAX,0x1                         ; 005568e9
    JG 0x00556692                       ; 005568ec
        ;   XREF to: 00556692 (CONDITIONAL_JUMP)  ; LAB_00556692
    JMP 0x005566b9                      ; 005568f2
        ;   XREF to: 005566b9 (UNCONDITIONAL_JUMP)  ; LAB_005566b9
    PUSH EAX                            ; 005568f7
        ;   Label: LAB_005568f7
    CALL sound_snddx.cpp_FUN_00554ad0   ; 005568f8
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 005568fd
    PUSH EAX                            ; 00556900
    PUSH 0x5e9e6c                       ; 00556901 | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5e9a3b                       ; 00556906 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc94]               ; 0055690b
    PUSH EAX                            ; 00556912
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556913
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556918
    LEA EAX,[ESP + 0xc88]               ; 0055691b
    PUSH EAX                            ; 00556922
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556923
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556928
    XOR ECX,ECX                         ; 0055692b
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0055692d
    JMP 0x005566a8                      ; 00556934
        ;   XREF to: 005566a8 (UNCONDITIONAL_JUMP)  ; LAB_005566a8
    CDQ                                 ; 00556939
        ;   Label: LAB_00556939
    XOR EAX,EDX                         ; 0055693a
    SUB EAX,EDX                         ; 0055693c
    CMP EAX,0x1                         ; 0055693e
    JG 0x005566d8                       ; 00556941
        ;   XREF to: 005566d8 (CONDITIONAL_JUMP)  ; LAB_005566d8
    JMP 0x005566ff                      ; 00556947
        ;   XREF to: 005566ff (UNCONDITIONAL_JUMP)  ; LAB_005566ff
    PUSH EAX                            ; 0055694c
        ;   Label: LAB_0055694c
    CALL sound_snddx.cpp_FUN_00554ad0   ; 0055694d
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556952
    PUSH EAX                            ; 00556955
    PUSH 0x5e9e95                       ; 00556956 | = "Set hardware sfx secondary buffer pan"
    PUSH 0x5e9a3b                       ; 0055695b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4c4]               ; 00556960
    PUSH EAX                            ; 00556967
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556968
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055696d
    LEA EAX,[ESP + 0x4b8]               ; 00556970
    PUSH EAX                            ; 00556977
    XOR ESI,ESI                         ; 00556978
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0055697a
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 0055697f
    MOV dword ptr [ESP + 0x12ec],ESI    ; 00556982
    JMP 0x005566ee                      ; 00556989
        ;   XREF to: 005566ee (UNCONDITIONAL_JUMP)  ; LAB_005566ee
    CDQ                                 ; 0055698e
        ;   Label: LAB_0055698e
    XOR EAX,EDX                         ; 0055698f
    SUB EAX,EDX                         ; 00556991
    CMP EAX,0x1                         ; 00556993
    JG 0x00556739                       ; 00556996
        ;   XREF to: 00556739 (CONDITIONAL_JUMP)  ; LAB_00556739
    JMP 0x00556752                      ; 0055699c
        ;   XREF to: 00556752 (UNCONDITIONAL_JUMP)  ; LAB_00556752
    PUSH EAX                            ; 005569a1
        ;   Label: LAB_005569a1
    CALL sound_snddx.cpp_FUN_00554ad0   ; 005569a2
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 005569a7
    PUSH EAX                            ; 005569aa
    PUSH 0x5e9ebb                       ; 005569ab | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5e9a3b                       ; 005569b0 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x974]               ; 005569b5
    PUSH EAX                            ; 005569bc
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005569bd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 005569c2
    LEA EAX,[ESP + 0x968]               ; 005569c5
    PUSH EAX                            ; 005569cc
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005569cd
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 005569d2
    XOR ECX,ECX                         ; 005569d5
    MOV dword ptr [ESP + 0x12ec],ECX    ; 005569d7
    JMP 0x00556748                      ; 005569de
        ;   XREF to: 00556748 (UNCONDITIONAL_JUMP)  ; LAB_00556748
    PUSH EAX                            ; 005569e3
        ;   Label: LAB_005569e3
    CALL sound_snddx.cpp_FUN_00554ad0   ; 005569e4
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 005569e9
    PUSH EAX                            ; 005569ec
    PUSH 0x5e9ee7                       ; 005569ed | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5e9a3b                       ; 005569f2 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xfb4]               ; 005569f7
    PUSH EAX                            ; 005569fe
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005569ff
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556a04
    LEA EAX,[ESP + 0xfa8]               ; 00556a07
    PUSH EAX                            ; 00556a0e
    XOR ESI,ESI                         ; 00556a0f
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556a11
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556a16
    MOV dword ptr [ESP + 0x12ec],ESI    ; 00556a19
    JMP 0x00556780                      ; 00556a20
        ;   XREF to: 00556780 (UNCONDITIONAL_JUMP)  ; LAB_00556780
    TEST byte ptr [EBP + 0x1c],0x88     ; 00556a25
        ;   Label: LAB_00556a25
    JZ 0x00556a6e                       ; 00556a29
        ;   XREF to: 00556a6e (CONDITIONAL_JUMP)  ; LAB_00556a6e
    MOV EAX,dword ptr [EBX + 0xf0]      ; 00556a2b
    MOV EDX,dword ptr [EBX]             ; 00556a31
    MOV dword ptr [ESP + 0x12e0],EAX    ; 00556a33
    MOV EAX,dword ptr [EBX + 0xf8]      ; 00556a3a
    PUSH EDX                            ; 00556a40
    MOV dword ptr [ESP + 0x12dc],EAX    ; 00556a41
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 00556a48
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00551190(int channel_index)
    MOV dword ptr [ESP + 0x12f8],EAX    ; 00556a4d
    FLD float ptr [ESP + 0x12f8]        ; 00556a54
    ADD ESP,0x4                         ; 00556a5b
    MOV DL,byte ptr [EBX + 0x4c]        ; 00556a5e
    FSTP float ptr [ESP + 0x4]          ; 00556a61
    TEST DL,0x1                         ; 00556a65
    JZ 0x00556c64                       ; 00556a68
        ;   XREF to: 00556c64 (CONDITIONAL_JUMP)  ; LAB_00556c64
    TEST byte ptr [EBP + 0x1c],0x2      ; 00556a6e
        ;   Label: LAB_00556a6e
    JZ 0x00556a9f                       ; 00556a72
        ;   XREF to: 00556a9f (CONDITIONAL_JUMP)  ; LAB_00556a9f
    PUSH 0x1                            ; 00556a74
    FLD double ptr [EBX + 0x14]         ; 00556a76
    SUB ESP,0x4                         ; 00556a79
    MOV EAX,dword ptr [ESI]             ; 00556a7c
    FSTP float ptr [ESP]                ; 00556a7e
    SUB ESP,0x4                         ; 00556a81
    FLD double ptr [EBX + 0xc]          ; 00556a84
    FSTP float ptr [ESP]                ; 00556a87
    SUB ESP,0x4                         ; 00556a8a
    FLD double ptr [EBX + 0x4]          ; 00556a8d
    FSTP float ptr [ESP]                ; 00556a90
    PUSH ESI                            ; 00556a93
    CALL dword ptr [EAX + 0x4c]         ; 00556a94
    TEST EAX,EAX                        ; 00556a97
    JNZ 0x00556caa                      ; 00556a99
        ;   XREF to: 00556caa (CONDITIONAL_JUMP)  ; LAB_00556caa
    TEST byte ptr [EBP + 0x1c],0x4      ; 00556a9f
        ;   Label: LAB_00556a9f
    JZ 0x00556abe                       ; 00556aa3
        ;   XREF to: 00556abe (CONDITIONAL_JUMP)  ; LAB_00556abe
    PUSH 0x1                            ; 00556aa5
    PUSH dword ptr [EBX + 0x2c]         ; 00556aa7
    PUSH dword ptr [EBX + 0x28]         ; 00556aaa
    MOV EAX,dword ptr [ESI]             ; 00556aad
    PUSH dword ptr [EBX + 0x24]         ; 00556aaf
    PUSH ESI                            ; 00556ab2
    CALL dword ptr [EAX + 0x50]         ; 00556ab3
    TEST EAX,EAX                        ; 00556ab6
    JNZ 0x00556cec                      ; 00556ab8
        ;   XREF to: 00556cec (CONDITIONAL_JUMP)  ; LAB_00556cec
    TEST byte ptr [EBP + 0x1c],0x8      ; 00556abe
        ;   Label: LAB_00556abe
    JZ 0x00556b13                       ; 00556ac2
        ;   XREF to: 00556b13 (CONDITIONAL_JUMP)  ; LAB_00556b13
    FLD float ptr [EBX + 0x38]          ; 00556ac4
    FMUL float ptr [ESP + 0x4]          ; 00556ac7
    SUB ESP,0x4                         ; 00556acb
    FSTP float ptr [ESP]                ; 00556ace
    CALL sound_snddx.cpp_FUN_00554f80   ; 00556ad1
        ;   XREF to: 00554f80 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_00554f80()
    ADD ESP,0x4                         ; 00556ad6
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00556ad9
    MOV dword ptr [ESP + 0x12d0],EAX    ; 00556adc
    CMP EDX,-0x1                        ; 00556ae3
    JNZ 0x00556d2e                      ; 00556ae6
        ;   XREF to: 00556d2e (CONDITIONAL_JUMP)  ; LAB_00556d2e
    MOV EDX,dword ptr [ESP + 0x12d0]    ; 00556aec
        ;   Label: LAB_00556aec
    PUSH EDX                            ; 00556af3
    MOV EAX,dword ptr [EDI]             ; 00556af4
    PUSH EDI                            ; 00556af6
    CALL dword ptr [EAX + 0x3c]         ; 00556af7
    TEST EAX,EAX                        ; 00556afa
    JNZ 0x00556d4b                      ; 00556afc
        ;   XREF to: 00556d4b (CONDITIONAL_JUMP)  ; LAB_00556d4b
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00556b02
        ;   Label: LAB_00556b02
    MOV EAX,dword ptr [ESP + 0x12d0]    ; 00556b09
    MOV dword ptr [EDX + 0x14],EAX      ; 00556b10
    TEST byte ptr [EBP + 0x1c],0x10     ; 00556b13
        ;   Label: LAB_00556b13
    JZ 0x00556b6d                       ; 00556b17
        ;   XREF to: 00556b6d (CONDITIONAL_JUMP)  ; LAB_00556b6d
    MOV EAX,dword ptr [EBX + 0x68]      ; 00556b19
    FILD dword ptr [EAX + 0x10c]        ; 00556b1c
    FMUL float ptr [EBX + 0x3c]         ; 00556b22
    SUB ESP,0x4                         ; 00556b25
    FSTP float ptr [ESP]                ; 00556b28
    CALL sound_snddx.cpp_FUN_00555020   ; 00556b2b
        ;   XREF to: 00555020 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_00555020()
    ADD ESP,0x4                         ; 00556b30
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00556b33
    MOV dword ptr [ESP + 0x12d4],EAX    ; 00556b36
    CMP EDX,-0x1                        ; 00556b3d
    JNZ 0x00556d8d                      ; 00556b40
        ;   XREF to: 00556d8d (CONDITIONAL_JUMP)  ; LAB_00556d8d
    MOV EDX,dword ptr [ESP + 0x12d4]    ; 00556b46
        ;   Label: LAB_00556b46
    PUSH EDX                            ; 00556b4d
    MOV EAX,dword ptr [EDI]             ; 00556b4e
    PUSH EDI                            ; 00556b50
    CALL dword ptr [EAX + 0x44]         ; 00556b51
    TEST EAX,EAX                        ; 00556b54
    JNZ 0x00556daa                      ; 00556b56
        ;   XREF to: 00556daa (CONDITIONAL_JUMP)  ; LAB_00556daa
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00556b5c
        ;   Label: LAB_00556b5c
    MOV EAX,dword ptr [ESP + 0x12d4]    ; 00556b63
    MOV dword ptr [EDX + 0x1c],EAX      ; 00556b6a
    TEST byte ptr [EBP + 0x1c],0x40     ; 00556b6d
        ;   Label: LAB_00556b6d
    JZ 0x00556bc2                       ; 00556b71
        ;   XREF to: 00556bc2 (CONDITIONAL_JUMP)  ; LAB_00556bc2
    XOR EAX,EAX                         ; 00556b73
    MOV DL,byte ptr [EBX + 0x4c]        ; 00556b75
    MOV dword ptr [ESP + 0x12e4],EAX    ; 00556b78
    TEST DL,0x1                         ; 00556b7f
    JZ 0x00556b8f                       ; 00556b82
        ;   XREF to: 00556b8f (CONDITIONAL_JUMP)  ; LAB_00556b8f
    MOV dword ptr [ESP + 0x12e4],0x2    ; 00556b84
    CMP dword ptr [EBP + 0x1c],-0x1     ; 00556b8f
        ;   Label: LAB_00556b8f
    JNZ 0x00556dec                      ; 00556b93
        ;   XREF to: 00556dec (CONDITIONAL_JUMP)  ; LAB_00556dec
    PUSH 0x1                            ; 00556b99
        ;   Label: LAB_00556b99
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 00556b9b
    PUSH EDX                            ; 00556ba2
    MOV EAX,dword ptr [ESI]             ; 00556ba3
    PUSH ESI                            ; 00556ba5
    CALL dword ptr [EAX + 0x48]         ; 00556ba6
    TEST EAX,EAX                        ; 00556ba9
    JNZ 0x00556e08                      ; 00556bab
        ;   XREF to: 00556e08 (CONDITIONAL_JUMP)  ; LAB_00556e08
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00556bb1
        ;   Label: LAB_00556bb1
    MOV EAX,dword ptr [ESP + 0x12e4]    ; 00556bb8
    MOV dword ptr [EDX + 0x20],EAX      ; 00556bbf
    TEST byte ptr [EBP + 0x1c],0x80     ; 00556bc2
        ;   Label: LAB_00556bc2
    JZ 0x00556bf6                       ; 00556bc6
        ;   XREF to: 00556bf6 (CONDITIONAL_JUMP)  ; LAB_00556bf6
    PUSH 0x1                            ; 00556bc8
    MOV EAX,dword ptr [ESI]             ; 00556bca
    PUSH dword ptr [ESP + 0x12e4]       ; 00556bcc
    PUSH ESI                            ; 00556bd3
    CALL dword ptr [EAX + 0x44]         ; 00556bd4
    TEST EAX,EAX                        ; 00556bd7
    JNZ 0x00556e4a                      ; 00556bd9
        ;   XREF to: 00556e4a (CONDITIONAL_JUMP)  ; LAB_00556e4a
    PUSH 0x1                            ; 00556bdf
        ;   Label: LAB_00556bdf
    MOV EAX,dword ptr [ESI]             ; 00556be1
    PUSH dword ptr [ESP + 0x12dc]       ; 00556be3
    PUSH ESI                            ; 00556bea
    CALL dword ptr [EAX + 0x40]         ; 00556beb
    TEST EAX,EAX                        ; 00556bee
    JNZ 0x00556e8c                      ; 00556bf0
        ;   XREF to: 00556e8c (CONDITIONAL_JUMP)  ; LAB_00556e8c
    TEST byte ptr [EBP + 0x1d],0x1      ; 00556bf6
        ;   Label: LAB_00556bf6
    JZ 0x00556780                       ; 00556bfa
        ;   XREF to: 00556780 (CONDITIONAL_JUMP)  ; LAB_00556780
    FLD double ptr [EBX + 0x10c]        ; 00556c00
    CALL crt_math.c_round_FUN_005b7ff0  ; 00556c06
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [ESP + 0x12c8]      ; 00556c0b
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 00556c12
    PUSH EAX                            ; 00556c19
    MOV EDX,dword ptr [EDI]             ; 00556c1a
    PUSH EDI                            ; 00556c1c
    CALL dword ptr [EDX + 0x34]         ; 00556c1d
    TEST EAX,EAX                        ; 00556c20
    JZ 0x00556780                       ; 00556c22
        ;   XREF to: 00556780 (CONDITIONAL_JUMP)  ; LAB_00556780
    PUSH EAX                            ; 00556c28
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556c29
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556c2e
    PUSH EAX                            ; 00556c31
    PUSH 0x5ea030                       ; 00556c32 | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5e9a3b                       ; 00556c37 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 00556c3c
    PUSH EAX                            ; 00556c40
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556c41
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556c46
    LEA EAX,[ESP + 0x8]                 ; 00556c49
    PUSH EAX                            ; 00556c4d
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556c4e
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556c53
    XOR ECX,ECX                         ; 00556c56
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00556c58
    JMP 0x00556780                      ; 00556c5f
        ;   XREF to: 00556780 (UNCONDITIONAL_JUMP)  ; LAB_00556780
    FLD float ptr [ESP + 0x4]           ; 00556c64
        ;   Label: LAB_00556c64
    FLDZ                                ; 00556c68
    FCOMPP                              ; 00556c6a
    FNSTSW AX                           ; 00556c6c
    SAHF                                ; 00556c6e
    JNC 0x00556a6e                      ; 00556c6f
        ;   XREF to: 00556a6e (CONDITIONAL_JUMP)  ; LAB_00556a6e
    FLD float ptr [ESP + 0x4]           ; 00556c75
    FDIV ST0,ST0                        ; 00556c79
    FLD float ptr [ESP + 0x12e0]        ; 00556c7b
    FMUL float ptr [ESP + 0x4]          ; 00556c82
    FLD float ptr [ESP + 0x12d8]        ; 00556c86
    FMUL float ptr [ESP + 0x4]          ; 00556c8d
    FXCH                                ; 00556c91
    FSTP float ptr [ESP + 0x12e0]       ; 00556c93
    FSTP float ptr [ESP + 0x12d8]       ; 00556c9a
    FSTP float ptr [ESP + 0x4]          ; 00556ca1
    JMP 0x00556a6e                      ; 00556ca5
        ;   XREF to: 00556a6e (UNCONDITIONAL_JUMP)  ; LAB_00556a6e
    PUSH EAX                            ; 00556caa
        ;   Label: LAB_00556caa
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556cab
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556cb0
    PUSH EAX                            ; 00556cb3
    PUSH 0x5e9f1b                       ; 00556cb4 | = "Set hardware sfx 3d buffer position"
    PUSH 0x5e9a3b                       ; 00556cb9 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x7e4]               ; 00556cbe
    PUSH EAX                            ; 00556cc5
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556cc6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556ccb
    LEA EAX,[ESP + 0x7d8]               ; 00556cce
    PUSH EAX                            ; 00556cd5
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556cd6
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556cdb
    XOR ECX,ECX                         ; 00556cde
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00556ce0
    JMP 0x00556a9f                      ; 00556ce7
        ;   XREF to: 00556a9f (UNCONDITIONAL_JUMP)  ; LAB_00556a9f
    PUSH EAX                            ; 00556cec
        ;   Label: LAB_00556cec
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556ced
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556cf2
    PUSH EAX                            ; 00556cf5
    PUSH 0x5e9f3f                       ; 00556cf6 | = "Set hardware sfx 3d buffer velocity"
    PUSH 0x5e9a3b                       ; 00556cfb | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xe24]               ; 00556d00
    PUSH EAX                            ; 00556d07
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556d08
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556d0d
    LEA EAX,[ESP + 0xe18]               ; 00556d10
    PUSH EAX                            ; 00556d17
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556d18
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556d1d
    XOR EAX,EAX                         ; 00556d20
    MOV dword ptr [ESP + 0x12ec],EAX    ; 00556d22
    JMP 0x00556abe                      ; 00556d29
        ;   XREF to: 00556abe (UNCONDITIONAL_JUMP)  ; LAB_00556abe
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00556d2e
        ;   Label: LAB_00556d2e
    SUB EAX,dword ptr [EDX + 0x14]      ; 00556d35
    CDQ                                 ; 00556d38
    XOR EAX,EDX                         ; 00556d39
    SUB EAX,EDX                         ; 00556d3b
    CMP EAX,0x1                         ; 00556d3d
    JG 0x00556aec                       ; 00556d40
        ;   XREF to: 00556aec (CONDITIONAL_JUMP)  ; LAB_00556aec
    JMP 0x00556b13                      ; 00556d46
        ;   XREF to: 00556b13 (UNCONDITIONAL_JUMP)  ; LAB_00556b13
    PUSH EAX                            ; 00556d4b
        ;   Label: LAB_00556d4b
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556d4c
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556d51
    PUSH EAX                            ; 00556d54
    PUSH 0x5e9f63                       ; 00556d55 | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5e9a3b                       ; 00556d5a | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x334]               ; 00556d5f
    PUSH EAX                            ; 00556d66
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556d67
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556d6c
    LEA EAX,[ESP + 0x328]               ; 00556d6f
    PUSH EAX                            ; 00556d76
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556d77
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556d7c
    XOR ECX,ECX                         ; 00556d7f
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00556d81
    JMP 0x00556b02                      ; 00556d88
        ;   XREF to: 00556b02 (UNCONDITIONAL_JUMP)  ; LAB_00556b02
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00556d8d
        ;   Label: LAB_00556d8d
    SUB EAX,dword ptr [EDX + 0x1c]      ; 00556d94
    CDQ                                 ; 00556d97
    XOR EAX,EDX                         ; 00556d98
    SUB EAX,EDX                         ; 00556d9a
    CMP EAX,0x1                         ; 00556d9c
    JG 0x00556b46                       ; 00556d9f
        ;   XREF to: 00556b46 (CONDITIONAL_JUMP)  ; LAB_00556b46
    JMP 0x00556b6d                      ; 00556da5
        ;   XREF to: 00556b6d (UNCONDITIONAL_JUMP)  ; LAB_00556b6d
    PUSH EAX                            ; 00556daa
        ;   Label: LAB_00556daa
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556dab
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556db0
    PUSH EAX                            ; 00556db3
    PUSH 0x5e9f8c                       ; 00556db4 | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5e9a3b                       ; 00556db9 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x654]               ; 00556dbe
    PUSH EAX                            ; 00556dc5
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556dc6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556dcb
    LEA EAX,[ESP + 0x648]               ; 00556dce
    PUSH EAX                            ; 00556dd5
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556dd6
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556ddb
    XOR ECX,ECX                         ; 00556dde
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00556de0
    JMP 0x00556b5c                      ; 00556de7
        ;   XREF to: 00556b5c (UNCONDITIONAL_JUMP)  ; LAB_00556b5c
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00556dec
        ;   Label: LAB_00556dec
    MOV EAX,dword ptr [ESP + 0x12e4]    ; 00556df3
    CMP EAX,dword ptr [EDX + 0x20]      ; 00556dfa
    JNZ 0x00556b99                      ; 00556dfd
        ;   XREF to: 00556b99 (CONDITIONAL_JUMP)  ; LAB_00556b99
    JMP 0x00556bc2                      ; 00556e03
        ;   XREF to: 00556bc2 (UNCONDITIONAL_JUMP)  ; LAB_00556bc2
    PUSH EAX                            ; 00556e08
        ;   Label: LAB_00556e08
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556e09
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556e0e
    PUSH EAX                            ; 00556e11
    PUSH 0x5e9fb8                       ; 00556e12 | = "Set hardware sfx 3d buffer mode"
    PUSH 0x5e9a3b                       ; 00556e17 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1a4]               ; 00556e1c
    PUSH EAX                            ; 00556e23
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556e24
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556e29
    LEA EAX,[ESP + 0x198]               ; 00556e2c
    PUSH EAX                            ; 00556e33
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556e34
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556e39
    XOR ECX,ECX                         ; 00556e3c
    MOV dword ptr [ESP + 0x12ec],ECX    ; 00556e3e
    JMP 0x00556bb1                      ; 00556e45
        ;   XREF to: 00556bb1 (UNCONDITIONAL_JUMP)  ; LAB_00556bb1
    PUSH EAX                            ; 00556e4a
        ;   Label: LAB_00556e4a
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556e4b
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556e50
    PUSH EAX                            ; 00556e53
    PUSH 0x5e9fd8                       ; 00556e54 | = "Set hardware sfx 3d buffer minimum di..."
    PUSH 0x5e9a3b                       ; 00556e59 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1144]              ; 00556e5e
    PUSH EAX                            ; 00556e65
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556e66
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556e6b
    LEA EAX,[ESP + 0x1138]              ; 00556e6e
    PUSH EAX                            ; 00556e75
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556e76
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556e7b
    XOR EAX,EAX                         ; 00556e7e
    MOV dword ptr [ESP + 0x12ec],EAX    ; 00556e80
    JMP 0x00556bdf                      ; 00556e87
        ;   XREF to: 00556bdf (UNCONDITIONAL_JUMP)  ; LAB_00556bdf
    PUSH EAX                            ; 00556e8c
        ;   Label: LAB_00556e8c
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00556e8d
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00556e92
    PUSH EAX                            ; 00556e95
    PUSH 0x5ea004                       ; 00556e96 | = "Set hardware sfx 3d buffer maximum di..."
    PUSH 0x5e9a3b                       ; 00556e9b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xb04]               ; 00556ea0
    PUSH EAX                            ; 00556ea7
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00556ea8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00556ead
    LEA EAX,[ESP + 0xaf8]               ; 00556eb0
    PUSH EAX                            ; 00556eb7
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00556eb8
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00556ebd
    XOR EDX,EDX                         ; 00556ec0
    MOV dword ptr [ESP + 0x12ec],EDX    ; 00556ec2
    JMP 0x00556bf6                      ; 00556ec9
        ;   XREF to: 00556bf6 (UNCONDITIONAL_JUMP)  ; LAB_00556bf6

