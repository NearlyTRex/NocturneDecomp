; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_FUN_005766b0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d70a7
;   undefined4 DAT_005d70af
;   undefined4 DAT_005d70b7
;   undefined4 DAT_005d70bb
;   undefined4 DAT_005d70bf
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_fire.cpp_FUN_004a36e0
;   core_flame.cpp_FUN_004a5b10
;   core_vessel.cpp_isStartLocTriggered_FUN_00576690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005766b0
        ;   Label: core_vessel.cpp_FUN_005766b0
    PUSH ESI                            ; 005766b1
    PUSH EDI                            ; 005766b2
    PUSH EBP                            ; 005766b3
    MOV EBP,ESP                         ; 005766b4
    SUB ESP,0x5c                        ; 005766b6
    AND ESP,0xfffffff8                  ; 005766b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005766bc
    MOV EDX,dword ptr [EBX + 0x3b4]     ; 005766bf
    CMP EDX,0x1                         ; 005766c5
    JZ 0x0057698f                       ; 005766c8
        ;   XREF to: 0057698f (CONDITIONAL_JUMP)  ; LAB_0057698f
    TEST EDX,EDX                        ; 005766ce
    JNZ 0x005769f4                      ; 005766d0
        ;   XREF to: 005769f4 (CONDITIONAL_JUMP)  ; LAB_005769f4
    FLD float ptr [EBP + 0x18]          ; 005766d6
    FMUL float ptr [0x005d70bb]         ; 005766d9 | DAT_005d70bb
    FADD float ptr [EBX + 0x668]        ; 005766df
    FSTP float ptr [EBX + 0x668]        ; 005766e5
    MOV ESI,dword ptr [EBX + 0x2d4]     ; 005766eb
        ;   Label: LAB_005766eb
    TEST ESI,ESI                        ; 005766f1
    JNZ 0x00576988                      ; 005766f3
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    CMP dword ptr [EBX + 0x3c0],0x0     ; 005766f9
    JNZ 0x00576a2f                      ; 00576700
        ;   XREF to: 00576a2f (CONDITIONAL_JUMP)  ; LAB_00576a2f
    LEA EDI,[EBX + 0x30]                ; 00576706
    MOV EAX,dword ptr [EBX + 0x3b8]     ; 00576709
    LEA ESI,[EBX + 0x20]                ; 0057670f
    CMP EAX,0x1                         ; 00576712
    JNZ 0x00576af4                      ; 00576715
        ;   XREF to: 00576af4 (CONDITIONAL_JUMP)  ; LAB_00576af4
    FLD float ptr [EBX + 0x3bc]         ; 0057671b
    FADD float ptr [EBP + 0x18]         ; 00576721
    FST float ptr [EBX + 0x3bc]         ; 00576724
    FLD1                                ; 0057672a
    FCOMPP                              ; 0057672c
    FNSTSW AX                           ; 0057672e
    SAHF                                ; 00576730
    JNC 0x00576988                      ; 00576731
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    MOV EDX,dword ptr [EBX + 0x2d8]     ; 00576737
    MOV dword ptr [EBX + 0x3bc],0x3f800000 ; 0057673d
    TEST EDX,EDX                        ; 00576747
    JNZ 0x00576a3c                      ; 00576749
        ;   XREF to: 00576a3c (CONDITIONAL_JUMP)  ; LAB_00576a3c
    MOV EDX,dword ptr [EBX + 0x2dc]     ; 0057674f
    PUSH EDX                            ; 00576755
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00576690 ; 00576756
        ;   XREF to: 00576690 (UNCONDITIONAL_CALL)  ; undefined core_vessel.cpp_isStartLocTriggered_FUN_00576690()
    ADD ESP,0x4                         ; 0057675b
    TEST EAX,EAX                        ; 0057675e
    JZ 0x005767a6                       ; 00576760
        ;   XREF to: 005767a6 (CONDITIONAL_JUMP)  ; LAB_005767a6
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 00576762
    MOV dword ptr [EBX + 0x3b8],0x2     ; 00576768
    MOV EAX,dword ptr [EDX + 0x20]      ; 00576772
    MOV dword ptr [ESI],EAX             ; 00576775
    MOV EAX,dword ptr [EDX + 0x24]      ; 00576777
    MOV dword ptr [ESI + 0x4],EAX       ; 0057677a
    MOV EAX,dword ptr [EDX + 0x28]      ; 0057677d
    MOV dword ptr [ESI + 0x8],EAX       ; 00576780
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00576783
    MOV dword ptr [ESI + 0xc],EAX       ; 00576786
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 00576789
    ADD EDX,0x30                        ; 0057678f
    CMP EDI,EDX                         ; 00576792
    JZ 0x005767a6                       ; 00576794
        ;   XREF to: 005767a6 (CONDITIONAL_JUMP)  ; LAB_005767a6
    MOV EAX,dword ptr [EDX]             ; 00576796
    MOV dword ptr [EDI],EAX             ; 00576798
    MOV EAX,dword ptr [EDX + 0x4]       ; 0057679a
    MOV dword ptr [EDI + 0x4],EAX       ; 0057679d
    MOV EAX,dword ptr [EDX + 0x8]       ; 005767a0
    MOV dword ptr [EDI + 0x8],EAX       ; 005767a3
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005767a6
        ;   Label: LAB_005767a6
    CMP dword ptr [EAX + 0x184],0x0     ; 005767ac
    JZ 0x00576c0c                       ; 005767b3
        ;   XREF to: 00576c0c (CONDITIONAL_JUMP)  ; LAB_00576c0c
    MOV dword ptr [ESP + 0x58],0x4479f99a ; 005767b9
        ;   Label: LAB_005767b9
    MOV EAX,[0x01d5ba14]                ; 005767c1 | DAT_01d5ba14
    LEA EDI,[ESP + 0x30]                ; 005767c6
    XOR EDX,EDX                         ; 005767ca
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005767cc
    MOV dword ptr [ESP + 0x50],EDX      ; 005767d3
    LEA EDX,[EBX + 0x20]                ; 005767d7
    FLD float ptr [ESI + 0x24]          ; 005767da
    FLD float ptr [ESI + 0x28]          ; 005767dd
    FLD float ptr [ESI + 0x20]          ; 005767e0
    LEA ESI,[ESP + 0x24]                ; 005767e3
    FSUB float ptr [EDX]                ; 005767e7
    FXCH ST2                            ; 005767e9
    FSUB float ptr [EDX + 0x4]          ; 005767eb
    FXCH                                ; 005767ee
    FSUB float ptr [EDX + 0x8]          ; 005767f0
    FXCH ST2                            ; 005767f3
    FSTP float ptr [ESP + 0x24]         ; 005767f5
    FSTP float ptr [ESP + 0x28]         ; 005767f9
    FSTP float ptr [ESP + 0x2c]         ; 005767fd
    MOVSD ES:EDI,ESI                    ; 00576801
    MOVSD ES:EDI,ESI                    ; 00576802
    MOVSD ES:EDI,ESI                    ; 00576803
    FLD float ptr [ESP + 0x34]          ; 00576804
    FMUL ST0                            ; 00576808
    FLD float ptr [ESP + 0x30]          ; 0057680a
    FMUL ST0                            ; 0057680e
    FADDP                               ; 00576810
    FLD float ptr [ESP + 0x38]          ; 00576812
    FMUL ST0                            ; 00576816
    FADDP                               ; 00576818
    FSQRT                               ; 0057681a
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 0057681c
    FSTP float ptr [ESP + 0x54]         ; 00576822
    TEST ECX,ECX                        ; 00576826
    JZ 0x00576878                       ; 00576828
        ;   XREF to: 00576878 (CONDITIONAL_JUMP)  ; LAB_00576878
    FLD float ptr [EDX]                 ; 0057682a
    FLD float ptr [EDX + 0x4]           ; 0057682c
    FLD float ptr [EDX + 0x8]           ; 0057682f
    LEA EDI,[ESP + 0xc]                 ; 00576832
    LEA ESI,[ESP + 0x3c]                ; 00576836
    FXCH ST2                            ; 0057683a
    FSUB float ptr [ECX + 0x20]         ; 0057683c
    FXCH                                ; 0057683f
    FSUB float ptr [ECX + 0x24]         ; 00576841
    FXCH ST2                            ; 00576844
    FSUB float ptr [ECX + 0x28]         ; 00576846
    FXCH                                ; 00576849
    FSTP float ptr [ESP + 0x3c]         ; 0057684b
    FXCH                                ; 0057684f
    FSTP float ptr [ESP + 0x40]         ; 00576851
    FSTP float ptr [ESP + 0x44]         ; 00576855
    MOVSD ES:EDI,ESI                    ; 00576859
    MOVSD ES:EDI,ESI                    ; 0057685a
    MOVSD ES:EDI,ESI                    ; 0057685b
    FLD float ptr [ESP + 0x10]          ; 0057685c
    FMUL ST0                            ; 00576860
    FLD float ptr [ESP + 0xc]           ; 00576862
    FMUL ST0                            ; 00576866
    FADDP                               ; 00576868
    FLD float ptr [ESP + 0x14]          ; 0057686a
    FMUL ST0                            ; 0057686e
    FADDP                               ; 00576870
    FSQRT                               ; 00576872
    FSTP float ptr [ESP + 0x58]         ; 00576874
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 00576878
        ;   Label: LAB_00576878
    TEST ESI,ESI                        ; 0057687e
    JZ 0x005768cc                       ; 00576880
        ;   XREF to: 005768cc (CONDITIONAL_JUMP)  ; LAB_005768cc
    FLD float ptr [ESI + 0x24]          ; 00576882
    FLD float ptr [ESI + 0x28]          ; 00576885
    FLD float ptr [ESI + 0x20]          ; 00576888
    LEA EDX,[EBX + 0x20]                ; 0057688b
    MOV EDI,ESP                         ; 0057688e
    LEA ESI,[ESP + 0x18]                ; 00576890
    FSUB float ptr [EDX]                ; 00576894
    FXCH ST2                            ; 00576896
    FSUB float ptr [EDX + 0x4]          ; 00576898
    FXCH                                ; 0057689b
    FSUB float ptr [EDX + 0x8]          ; 0057689d
    FXCH ST2                            ; 005768a0
    FSTP float ptr [ESP + 0x18]         ; 005768a2
    FSTP float ptr [ESP + 0x1c]         ; 005768a6
    FSTP float ptr [ESP + 0x20]         ; 005768aa
    MOVSD ES:EDI,ESI                    ; 005768ae
    MOVSD ES:EDI,ESI                    ; 005768af
    MOVSD ES:EDI,ESI                    ; 005768b0
    FLD float ptr [ESP + 0x4]           ; 005768b1
    FMUL ST0                            ; 005768b5
    FLD float ptr [ESP]                 ; 005768b7
    FMUL ST0                            ; 005768ba
    FADDP                               ; 005768bc
    FLD float ptr [ESP + 0x8]           ; 005768be
    FMUL ST0                            ; 005768c2
    FADDP                               ; 005768c4
    FSQRT                               ; 005768c6
    FSTP float ptr [ESP + 0x50]         ; 005768c8
    FLD float ptr [ESP + 0x58]          ; 005768cc
        ;   Label: LAB_005768cc
    FCOMP float ptr [EBX + 0x3b0]       ; 005768d0
    FNSTSW AX                           ; 005768d6
    SAHF                                ; 005768d8
    JNC 0x00576943                      ; 005768d9
        ;   XREF to: 00576943 (CONDITIONAL_JUMP)  ; LAB_00576943
    FLD float ptr [ESP + 0x54]          ; 005768db
    FCOMP float ptr [EBX + 0x3b0]       ; 005768df
    FNSTSW AX                           ; 005768e5
    SAHF                                ; 005768e7
    JBE 0x00576943                      ; 005768e8
        ;   XREF to: 00576943 (CONDITIONAL_JUMP)  ; LAB_00576943
    FLD float ptr [ESP + 0x50]          ; 005768ea
    FCOMP float ptr [EBX + 0x3b0]       ; 005768ee
    FNSTSW AX                           ; 005768f4
    SAHF                                ; 005768f6
    JBE 0x00576943                      ; 005768f7
        ;   XREF to: 00576943 (CONDITIONAL_JUMP)  ; LAB_00576943
    MOV EDX,dword ptr [EBX + 0x2d8]     ; 005768f9
    MOV EDI,dword ptr [EDX + 0x2d4]     ; 005768ff
    TEST EDI,EDI                        ; 00576905
    JNZ 0x00576943                      ; 00576907
        ;   XREF to: 00576943 (CONDITIONAL_JUMP)  ; LAB_00576943
    CMP dword ptr [EDX + 0x3b8],0x0     ; 00576909
    JNZ 0x00576943                      ; 00576910
        ;   XREF to: 00576943 (CONDITIONAL_JUMP)  ; LAB_00576943
    MOV dword ptr [EDX + 0x3b8],0x1     ; 00576912
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 0057691c
    MOV dword ptr [EAX + 0x3bc],EDI     ; 00576922
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 00576928
    ADD EAX,0x2e0                       ; 0057692e
    PUSH EAX                            ; 00576933
    MOV EDX,dword ptr [0x005fba60]      ; 00576934 | DAT_005fba60
    PUSH EDX                            ; 0057693a
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 0057693b
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00576940
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 00576943
        ;   Label: LAB_00576943
    TEST ECX,ECX                        ; 00576949
    JZ 0x00576988                       ; 0057694b
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 0057694d
    TEST ESI,ESI                        ; 00576953
    JZ 0x00576988                       ; 00576955
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 00576957
    CMP dword ptr [EAX + 0x184],0x0     ; 0057695d
    JZ 0x00576988                       ; 00576964
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    MOV EAX,dword ptr [ECX + 0x3ac]     ; 00576966
    CMP dword ptr [EAX + 0x184],0x0     ; 0057696c
    JZ 0x00576988                       ; 00576973
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    MOV EAX,dword ptr [ESI + 0x3ac]     ; 00576975
    CMP dword ptr [EAX + 0x184],0x0     ; 0057697b
    JNZ 0x00576c47                      ; 00576982
        ;   XREF to: 00576c47 (CONDITIONAL_JUMP)  ; LAB_00576c47
    MOV ESP,EBP                         ; 00576988
        ;   Label: LAB_00576988
    POP EBP                             ; 0057698a
    POP EDI                             ; 0057698b
    POP ESI                             ; 0057698c
    POP EBX                             ; 0057698d
    RET                                 ; 0057698e
    LEA ESI,[EBX + 0x3e4]               ; 0057698f
        ;   Label: LAB_0057698f
    LEA EDX,[EBX + 0x20]                ; 00576995
    MOV EAX,dword ptr [EDX]             ; 00576998
    MOV dword ptr [ESI],EAX             ; 0057699a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0057699c
    MOV dword ptr [ESI + 0x4],EAX       ; 0057699f
    MOV EAX,dword ptr [EDX + 0x8]       ; 005769a2
    MOV dword ptr [ESI + 0x8],EAX       ; 005769a5
    MOV EAX,dword ptr [EDX + 0xc]       ; 005769a8
    MOV dword ptr [ESI + 0xc],EAX       ; 005769ab
    LEA EDX,[EBX + 0x3f4]               ; 005769ae
    FLD float ptr [EBX + 0x3e8]         ; 005769b4
    FADD float ptr [0x005d70bf]         ; 005769ba | DAT_005d70bf
    LEA ESI,[EBX + 0x30]                ; 005769c0
    FSTP float ptr [EBX + 0x3e8]        ; 005769c3
    CMP EDX,ESI                         ; 005769c9
    JZ 0x005769dd                       ; 005769cb
        ;   XREF to: 005769dd (CONDITIONAL_JUMP)  ; LAB_005769dd
    MOV EAX,dword ptr [ESI]             ; 005769cd
    MOV dword ptr [EDX],EAX             ; 005769cf
    MOV EAX,dword ptr [ESI + 0x4]       ; 005769d1
    MOV dword ptr [EDX + 0x4],EAX       ; 005769d4
    MOV EAX,dword ptr [ESI + 0x8]       ; 005769d7
    MOV dword ptr [EDX + 0x8],EAX       ; 005769da
    LEA EAX,[EBX + 0x3c4]               ; 005769dd
        ;   Label: LAB_005769dd
    PUSH dword ptr [EBP + 0x18]         ; 005769e3
    PUSH EAX                            ; 005769e6
    CALL core_flame.cpp_FUN_004a5b10    ; 005769e7
        ;   XREF to: 004a5b10 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_FUN_004a5b10(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005769ec
    JMP 0x005766eb                      ; 005769ef
        ;   XREF to: 005766eb (UNCONDITIONAL_JUMP)  ; LAB_005766eb
    FLD float ptr [EBP + 0x18]          ; 005769f4
        ;   Label: LAB_005769f4
    FMUL double ptr [0x005d70a7]        ; 005769f7 | DAT_005d70a7
    FADD float ptr [EBX + 0x7ec]        ; 005769fd
    FST float ptr [EBX + 0x7ec]         ; 00576a03
    FCOMP double ptr [0x005d70af]       ; 00576a09 | DAT_005d70af
    FNSTSW AX                           ; 00576a0f
    SAHF                                ; 00576a11
    JC 0x005766eb                       ; 00576a12
        ;   XREF to: 005766eb (CONDITIONAL_JUMP)  ; LAB_005766eb
    FLD float ptr [EBX + 0x7ec]         ; 00576a18
    FADD float ptr [0x005d70b7]         ; 00576a1e | DAT_005d70b7
    FSTP float ptr [EBX + 0x7ec]        ; 00576a24
    JMP 0x005766eb                      ; 00576a2a
        ;   XREF to: 005766eb (UNCONDITIONAL_JUMP)  ; LAB_005766eb
    MOV dword ptr [EBX + 0x3c0],ESI     ; 00576a2f
        ;   Label: LAB_00576a2f
    MOV ESP,EBP                         ; 00576a35
    POP EBP                             ; 00576a37
    POP EDI                             ; 00576a38
    POP ESI                             ; 00576a39
    POP EBX                             ; 00576a3a
    RET                                 ; 00576a3b
    PUSH EDX                            ; 00576a3c
        ;   Label: LAB_00576a3c
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00576690 ; 00576a3d
        ;   XREF to: 00576690 (UNCONDITIONAL_CALL)  ; undefined core_vessel.cpp_isStartLocTriggered_FUN_00576690()
    ADD ESP,0x4                         ; 00576a42
    TEST EAX,EAX                        ; 00576a45
    JZ 0x00576aaf                       ; 00576a47
        ;   XREF to: 00576aaf (CONDITIONAL_JUMP)  ; LAB_00576aaf
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 00576a49
    PUSH ESI                            ; 00576a4f
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00576690 ; 00576a50
        ;   XREF to: 00576690 (UNCONDITIONAL_CALL)  ; undefined core_vessel.cpp_isStartLocTriggered_FUN_00576690()
    ADD ESP,0x4                         ; 00576a55
    TEST EAX,EAX                        ; 00576a58
    JZ 0x00576aaf                       ; 00576a5a
        ;   XREF to: 00576aaf (CONDITIONAL_JUMP)  ; LAB_00576aaf
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 00576a5c
        ;   Label: LAB_00576a5c
    MOV dword ptr [EBX + 0x3b8],0x2     ; 00576a62
    LEA ESI,[EBX + 0x20]                ; 00576a6c
    MOV EAX,dword ptr [EDX + 0x20]      ; 00576a6f
    MOV dword ptr [ESI],EAX             ; 00576a72
    MOV EAX,dword ptr [EDX + 0x24]      ; 00576a74
    MOV dword ptr [ESI + 0x4],EAX       ; 00576a77
    MOV EAX,dword ptr [EDX + 0x28]      ; 00576a7a
    MOV dword ptr [ESI + 0x8],EAX       ; 00576a7d
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00576a80
    MOV dword ptr [ESI + 0xc],EAX       ; 00576a83
    MOV ESI,dword ptr [EBX + 0x3a8]     ; 00576a86
    LEA EDX,[EBX + 0x30]                ; 00576a8c
    ADD ESI,0x30                        ; 00576a8f
    CMP EDX,ESI                         ; 00576a92
    JZ 0x005767a6                       ; 00576a94
        ;   XREF to: 005767a6 (CONDITIONAL_JUMP)  ; LAB_005767a6
    MOV EAX,dword ptr [ESI]             ; 00576a9a
    MOV dword ptr [EDX],EAX             ; 00576a9c
    MOV EAX,dword ptr [ESI + 0x4]       ; 00576a9e
    MOV dword ptr [EDX + 0x4],EAX       ; 00576aa1
    MOV EAX,dword ptr [ESI + 0x8]       ; 00576aa4
    MOV dword ptr [EDX + 0x8],EAX       ; 00576aa7
    JMP 0x005767a6                      ; 00576aaa
        ;   XREF to: 005767a6 (UNCONDITIONAL_JUMP)  ; LAB_005767a6
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 00576aaf
        ;   Label: LAB_00576aaf
    PUSH EDI                            ; 00576ab5
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00576690 ; 00576ab6
        ;   XREF to: 00576690 (UNCONDITIONAL_CALL)  ; undefined core_vessel.cpp_isStartLocTriggered_FUN_00576690()
    ADD ESP,0x4                         ; 00576abb
    TEST EAX,EAX                        ; 00576abe
    JZ 0x00576adc                       ; 00576ac0
        ;   XREF to: 00576adc (CONDITIONAL_JUMP)  ; LAB_00576adc
    MOV dword ptr [EBX + 0x24],0x461c3f9a ; 00576ac2
        ;   Label: LAB_00576ac2
    MOV dword ptr [EBX + 0x28],0x461c3f9a ; 00576ac9
    MOV dword ptr [EBX + 0x20],0x461c3f9a ; 00576ad0
    JMP 0x005767a6                      ; 00576ad7
        ;   XREF to: 005767a6 (UNCONDITIONAL_JUMP)  ; LAB_005767a6
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 00576adc
        ;   Label: LAB_00576adc
    PUSH EAX                            ; 00576ae2
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00576690 ; 00576ae3
        ;   XREF to: 00576690 (UNCONDITIONAL_CALL)  ; undefined core_vessel.cpp_isStartLocTriggered_FUN_00576690()
    ADD ESP,0x4                         ; 00576ae8
    TEST EAX,EAX                        ; 00576aeb
    JNZ 0x00576ac2                      ; 00576aed
        ;   XREF to: 00576ac2 (CONDITIONAL_JUMP)  ; LAB_00576ac2
    JMP 0x00576a5c                      ; 00576aef
        ;   XREF to: 00576a5c (UNCONDITIONAL_JUMP)  ; LAB_00576a5c
    CMP EAX,0x2                         ; 00576af4
        ;   Label: LAB_00576af4
    JNZ 0x00576b2e                      ; 00576af7
        ;   XREF to: 00576b2e (CONDITIONAL_JUMP)  ; LAB_00576b2e
    FLD float ptr [EBX + 0x3bc]         ; 00576af9
    FSUB float ptr [EBP + 0x18]         ; 00576aff
    FST float ptr [EBX + 0x3bc]         ; 00576b02
    FLDZ                                ; 00576b08
    FCOMPP                              ; 00576b0a
    FNSTSW AX                           ; 00576b0c
    SAHF                                ; 00576b0e
    JBE 0x00576988                      ; 00576b0f
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    MOV dword ptr [EBX + 0x3b8],0x0     ; 00576b15
    MOV dword ptr [EBX + 0x3bc],0x0     ; 00576b1f
    JMP 0x005767a6                      ; 00576b29
        ;   XREF to: 005767a6 (UNCONDITIONAL_JUMP)  ; LAB_005767a6
    CMP EAX,0x3                         ; 00576b2e
        ;   Label: LAB_00576b2e
    JNZ 0x005767a6                      ; 00576b31
        ;   XREF to: 005767a6 (CONDITIONAL_JUMP)  ; LAB_005767a6
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 00576b37
    MOV EDX,dword ptr [EAX + 0x184]     ; 00576b3d
    TEST EDX,EDX                        ; 00576b43
    JNZ 0x00576b56                      ; 00576b45
        ;   XREF to: 00576b56 (CONDITIONAL_JUMP)  ; LAB_00576b56
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 00576b47
    CMP dword ptr [EAX + 0x184],0x0     ; 00576b4d
    JZ 0x00576b6f                       ; 00576b54
        ;   XREF to: 00576b6f (CONDITIONAL_JUMP)  ; LAB_00576b6f
    MOV dword ptr [EBX + 0x3bc],0x0     ; 00576b56
        ;   Label: LAB_00576b56
    MOV dword ptr [EBX + 0x3b8],0x0     ; 00576b60
    JMP 0x005767a6                      ; 00576b6a
        ;   XREF to: 005767a6 (UNCONDITIONAL_JUMP)  ; LAB_005767a6
    FLD float ptr [EBX + 0x3bc]         ; 00576b6f
        ;   Label: LAB_00576b6f
    FSUB float ptr [EBP + 0x18]         ; 00576b75
    FST float ptr [EBX + 0x3bc]         ; 00576b78
    FLDZ                                ; 00576b7e
    FCOMPP                              ; 00576b80
    FNSTSW AX                           ; 00576b82
    SAHF                                ; 00576b84
    JBE 0x00576988                      ; 00576b85
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    PUSH EDX                            ; 00576b8b
    PUSH 0x40800000                     ; 00576b8c
    PUSH 0x44bb8000                     ; 00576b91
    PUSH 0x41000000                     ; 00576b96
    PUSH ESI                            ; 00576b9b
    MOV EAX,[0x005fc5a0]                ; 00576b9c | DAT_005fc5a0
    PUSH EAX                            ; 00576ba1
    CALL core_fire.cpp_FUN_004a36e0     ; 00576ba2
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a36e0()
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 00576ba7
    MOV dword ptr [EBX + 0x3bc],0x3f800000 ; 00576bad
    MOV EAX,dword ptr [EDX + 0x20]      ; 00576bb7
    MOV dword ptr [ESI],EAX             ; 00576bba
    MOV EAX,dword ptr [EDX + 0x24]      ; 00576bbc
    MOV dword ptr [ESI + 0x4],EAX       ; 00576bbf
    MOV EAX,dword ptr [EDX + 0x28]      ; 00576bc2
    MOV dword ptr [ESI + 0x8],EAX       ; 00576bc5
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00576bc8
    MOV dword ptr [ESI + 0xc],EAX       ; 00576bcb
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 00576bce
    ADD EDX,0x30                        ; 00576bd4
    ADD ESP,0x18                        ; 00576bd7
    CMP EDI,EDX                         ; 00576bda
    JNZ 0x00576bed                      ; 00576bdc
        ;   XREF to: 00576bed (CONDITIONAL_JUMP)  ; LAB_00576bed
    MOV dword ptr [EBX + 0x3b8],0x2     ; 00576bde
    JMP 0x005767a6                      ; 00576be8
        ;   XREF to: 005767a6 (UNCONDITIONAL_JUMP)  ; LAB_005767a6
    MOV EAX,dword ptr [EDX]             ; 00576bed
        ;   Label: LAB_00576bed
    MOV dword ptr [EDI],EAX             ; 00576bef
    MOV EAX,dword ptr [EDX + 0x4]       ; 00576bf1
    MOV dword ptr [EDI + 0x4],EAX       ; 00576bf4
    MOV EAX,dword ptr [EDX + 0x8]       ; 00576bf7
    MOV dword ptr [EDI + 0x8],EAX       ; 00576bfa
    MOV dword ptr [EBX + 0x3b8],0x2     ; 00576bfd
    JMP 0x005767a6                      ; 00576c07
        ;   XREF to: 005767a6 (UNCONDITIONAL_JUMP)  ; LAB_005767a6
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 00576c0c
        ;   Label: LAB_00576c0c
    CMP dword ptr [EAX + 0x184],0x0     ; 00576c12
    JNZ 0x005767b9                      ; 00576c19
        ;   XREF to: 005767b9 (CONDITIONAL_JUMP)  ; LAB_005767b9
    CMP dword ptr [EBX + 0x3b8],0x0     ; 00576c1f
    JNZ 0x00576988                      ; 00576c26
        ;   XREF to: 00576988 (CONDITIONAL_JUMP)  ; LAB_00576988
    MOV dword ptr [EBX + 0x3bc],0x40400000 ; 00576c2c
    MOV dword ptr [EBX + 0x3b8],0x3     ; 00576c36
    MOV ESP,EBP                         ; 00576c40
    POP EBP                             ; 00576c42
    POP EDI                             ; 00576c43
    POP ESI                             ; 00576c44
    POP EBX                             ; 00576c45
    RET                                 ; 00576c46
    LEA EAX,[EBX + 0x344]               ; 00576c47
        ;   Label: LAB_00576c47
    PUSH EAX                            ; 00576c4d
    MOV ESI,dword ptr [0x005fba60]      ; 00576c4e | DAT_005fba60
    PUSH ESI                            ; 00576c54
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00576c55
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 00576c5a
    MOV dword ptr [EAX + 0x7f0],0x1     ; 00576c60
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 00576c6a
    MOV dword ptr [EAX + 0x7f0],0x1     ; 00576c70
    ADD ESP,0x8                         ; 00576c7a
    MOV dword ptr [EBX + 0x7f0],0x1     ; 00576c7d
    MOV ESP,EBP                         ; 00576c87
    POP EBP                             ; 00576c89
    POP EDI                             ; 00576c8a
    POP ESI                             ; 00576c8b
    POP EBX                             ; 00576c8c
    RET                                 ; 00576c8d

