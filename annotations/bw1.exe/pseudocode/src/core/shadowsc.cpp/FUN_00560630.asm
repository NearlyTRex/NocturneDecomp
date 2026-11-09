; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadowsc_cpp_FUN_00560630(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00560610 = 00560a1f
;   TerminatedCString s_s_confused_while_walking_005f1836
;   TerminatedCString s_ScorpTailAttack_005f1860
;   TerminatedCString s_ScorpDying_005f1870
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005f187b
;   undefined4 DAT_005f189d
;   undefined4 DAT_005f18a5
;   undefined4 DAT_005f18ad
;   undefined4 DAT_005f18b5
;   undefined4 DAT_005f18b9
;   undefined4 DAT_005f18bd
;   undefined4 DAT_005f18c5
;   undefined4 DAT_005f18c9
;   undefined4 DAT_005f18cd
;   undefined4 DAT_0060533c
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cc60
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e120
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00432f10
;   core_charactr.cpp_FUN_00433e80
;   core_charactr.cpp_FUN_00434790
;   core_charactr.cpp_FUN_00435320
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560630
        ;   Label: core_shadowsc.cpp_FUN_00560630
    PUSH ESI                            ; 00560631
    PUSH EDI                            ; 00560632
    PUSH EBP                            ; 00560633
    MOV EBP,ESP                         ; 00560634
    SUB ESP,0x180                       ; 00560636
    SUB EBP,0x7a                        ; 0056063c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0056063f
    PUSH dword ptr [EBP + 0x92]         ; 00560645
    PUSH EBX                            ; 0056064b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0056064c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00560651
    TEST EAX,EAX                        ; 00560654
    JNZ 0x00560660                      ; 00560656
        ;   XREF to: 00560660 (CONDITIONAL_JUMP)  ; LAB_00560660
    LEA ESP,[EBP + 0x7a]                ; 00560658
    POP EBP                             ; 0056065b
    POP EDI                             ; 0056065c
    POP ESI                             ; 0056065d
    POP EBX                             ; 0056065e
    RET                                 ; 0056065f
    LEA ESI,[EBX + 0x158]               ; 00560660
        ;   Label: LAB_00560660
    PUSH ESI                            ; 00560666
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00560667
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0056066c
    FLD float ptr [ESI + 0x8]           ; 0056066f
    MOV EAX,dword ptr [EAX + 0x24]      ; 00560672
    PUSH ESI                            ; 00560675
    FSTP float ptr [EBP + 0x72]         ; 00560676
    MOV dword ptr [EBP + 0x66],EAX      ; 00560679
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0056067c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00560681
    PUSH dword ptr [EBP + 0x92]         ; 00560684
    FILD dword ptr [EAX + 0x64]         ; 0056068a
    PUSH EBX                            ; 0056068d
    FSTP float ptr [EBP + 0x56]         ; 0056068e
    CALL core_charactr.cpp_FUN_00434790 ; 00560691
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
    ADD ESP,0x8                         ; 00560696
    MOV EDX,dword ptr [EBX + 0xc1d4]    ; 00560699
    XOR EAX,EAX                         ; 0056069f
    CMP EDX,0x1                         ; 005606a1
    JZ 0x0056070e                       ; 005606a4
        ;   XREF to: 0056070e (CONDITIONAL_JUMP)  ; LAB_0056070e
    PUSH EAX                            ; 005606a6
        ;   Label: LAB_005606a6
    PUSH dword ptr [EBP + 0x92]         ; 005606a7
    PUSH EBX                            ; 005606ad
    CALL core_charactr.cpp_FUN_00432f10 ; 005606ae
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432f10()
    LEA EAX,[EBX + 0x249c]              ; 005606b3
    MOV dword ptr [EAX + 0x8],0x0       ; 005606b9
    FLD float ptr [EBP + 0x92]          ; 005606c0
    MOV EDX,dword ptr [EAX + 0x8]       ; 005606c6
    MOV dword ptr [EAX + 0x4],EDX       ; 005606c9
    MOV EDX,dword ptr [EAX + 0x4]       ; 005606cc
    MOV dword ptr [EAX],EDX             ; 005606cf
    FMUL float ptr [EBX + 0xc1d0]       ; 005606d1
    FMUL float ptr [EBX + 0xc288]       ; 005606d7
    ADD ESP,0xc                         ; 005606dd
    LEA ESI,[EBX + 0x158]               ; 005606e0
    FSTP float ptr [EBP + 0x4e]         ; 005606e6
    FLD float ptr [EBP + 0x4e]          ; 005606e9
        ;   Label: LAB_005606e9
    FLDZ                                ; 005606ec
    FCOMPP                              ; 005606ee
    FNSTSW AX                           ; 005606f0
    SAHF                                ; 005606f2
    JNC 0x00560712                      ; 005606f3
        ;   XREF to: 00560712 (CONDITIONAL_JUMP)  ; LAB_00560712
    LEA EAX,[EBP + 0x4e]                ; 005606f5
    PUSH EAX                            ; 005606f8
    PUSH ESI                            ; 005606f9
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005606fa
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005606ff
    PUSH EAX                            ; 00560702
    PUSH EBX                            ; 00560703
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00560704
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00560709
    JMP 0x005606e9                      ; 0056070c
        ;   XREF to: 005606e9 (UNCONDITIONAL_JUMP)  ; LAB_005606e9
    MOV EAX,EDX                         ; 0056070e
        ;   Label: LAB_0056070e
    JMP 0x005606a6                      ; 00560710
        ;   XREF to: 005606a6 (UNCONDITIONAL_JUMP)  ; LAB_005606a6
    FLD float ptr [EBP + 0x92]          ; 00560712
        ;   Label: LAB_00560712
    FMUL float ptr [EBX + 0xc1d0]       ; 00560718
    SUB ESP,0x4                         ; 0056071e
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00560721
    MOV dword ptr [EBX + 0x2524],EAX    ; 00560727
    FSTP float ptr [ESP]                ; 0056072d
    PUSH EBX                            ; 00560730
    CALL core_charactr.cpp_FUN_00435320 ; 00560731
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00560736
    PUSH dword ptr [EBP + 0x92]         ; 00560739
    PUSH EBX                            ; 0056073f
    CALL core_charactr.cpp_FUN_00432240 ; 00560740
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00560745
    TEST EAX,EAX                        ; 00560748
    JZ 0x00560f60                       ; 0056074a
        ;   XREF to: 00560f60 (CONDITIONAL_JUMP)  ; LAB_00560f60
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00560750
    CMP EAX,0x2                         ; 00560756
    JNC 0x005609da                      ; 00560759
        ;   XREF to: 005609da (CONDITIONAL_JUMP)  ; LAB_005609da
    CMP EAX,0x1                         ; 0056075f
    JNZ 0x005609e5                      ; 00560762
        ;   XREF to: 005609e5 (CONDITIONAL_JUMP)  ; LAB_005609e5
    LEA EAX,[EBX + 0x158]               ; 00560768
        ;   Label: LAB_00560768
    PUSH EAX                            ; 0056076e
    CALL core_motion.cpp_FUN_00525020   ; 0056076f
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00560774
    ADD ESP,0x4                         ; 00560777
    FLD float ptr [EBP + 0x76]          ; 0056077a
    FCOMP double ptr [0x005f18ad]       ; 0056077d | DAT_005f18ad
    FNSTSW AX                           ; 00560783
    SAHF                                ; 00560785
    JBE 0x005607a9                      ; 00560786
        ;   XREF to: 005607a9 (CONDITIONAL_JUMP)  ; LAB_005607a9
    PUSH 0x1                            ; 00560788
    PUSH 0x0                            ; 0056078a
    PUSH 0x0                            ; 0056078c
    CALL core_actor.cpp_FUN_0040cc60    ; 0056078e
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560793
    ADD EAX,0x2                         ; 00560796
    PUSH EAX                            ; 00560799
    LEA EAX,[EBX + 0x158]               ; 0056079a
    PUSH EAX                            ; 005607a0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005607a1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005607a1
    ADD ESP,0xc                         ; 005607a6
        ;   Label: LAB_005607a6
    LEA EAX,[EBX + 0x249c]              ; 005607a9
        ;   Label: LAB_005607a9
    MOV dword ptr [EAX + 0x8],0x0       ; 005607af
    MOV EDX,dword ptr [EAX + 0x8]       ; 005607b6
    MOV dword ptr [EAX + 0x4],EDX       ; 005607b9
    MOV EDX,dword ptr [EAX + 0x4]       ; 005607bc
    MOV dword ptr [EAX],EDX             ; 005607bf
    MOV ESI,dword ptr [EBP + 0x66]      ; 005607c1
        ;   Label: caseD_5
    CMP ESI,0x6                         ; 005607c4
    JZ 0x0056086f                       ; 005607c7
        ;   XREF to: 0056086f (CONDITIONAL_JUMP)  ; LAB_0056086f
    CMP ESI,0x7                         ; 005607cd
    JZ 0x0056086f                       ; 005607d0
        ;   XREF to: 0056086f (CONDITIONAL_JUMP)  ; LAB_0056086f
    TEST ESI,ESI                        ; 005607d6
    JZ 0x0056086f                       ; 005607d8
        ;   XREF to: 0056086f (CONDITIONAL_JUMP)  ; LAB_0056086f
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 005607de
    TEST EDX,EDX                        ; 005607e4
    JZ 0x00560fcb                       ; 005607e6
        ;   XREF to: 00560fcb (CONDITIONAL_JUMP)  ; LAB_00560fcb
    LEA EAX,[EBX + 0x20]                ; 005607ec
    LEA EDI,[EBP + 0xffffff72]          ; 005607ef
    LEA ESI,[EBP + -0xa]                ; 005607f5
    FLD float ptr [EAX]                 ; 005607f8
    FLD float ptr [EAX + 0x4]           ; 005607fa
    FLD float ptr [EAX + 0x8]           ; 005607fd
    FXCH ST2                            ; 00560800
    FSUB float ptr [EDX + 0x20]         ; 00560802
    FXCH                                ; 00560805
    FSUB float ptr [EDX + 0x24]         ; 00560807
    FXCH ST2                            ; 0056080a
    FSUB float ptr [EDX + 0x28]         ; 0056080c
    FXCH                                ; 0056080f
    FSTP float ptr [EBP + -0xa]         ; 00560811
    FXCH                                ; 00560814
    FSTP float ptr [EBP + -0x6]         ; 00560816
    FSTP float ptr [EBP + -0x2]         ; 00560819
    MOVSD ES:EDI,ESI                    ; 0056081c
    MOVSD ES:EDI,ESI                    ; 0056081d
    MOVSD ES:EDI,ESI                    ; 0056081e
    FLD float ptr [EBP + 0xffffff76]    ; 0056081f
    FMUL ST0                            ; 00560825
    FLD float ptr [EBP + 0xffffff72]    ; 00560827
    FMUL ST0                            ; 0056082d
    FADDP                               ; 0056082f
    FLD float ptr [EBP + 0xffffff7a]    ; 00560831
    FMUL ST0                            ; 00560837
    FADDP                               ; 00560839
    FSQRT                               ; 0056083b
    FLD float ptr [EBX + 0xc1e0]        ; 0056083d
    FMUL float ptr [0x005f18c5]         ; 00560843 | DAT_005f18c5
    FSTP float ptr [EBP + 0x62]         ; 00560849
    FST float ptr [EBP + 0x5a]          ; 0056084c
    FCOMP float ptr [EBP + 0x62]        ; 0056084f
    FNSTSW AX                           ; 00560852
    SAHF                                ; 00560854
    JBE 0x00560f75                      ; 00560855
        ;   XREF to: 00560f75 (CONDITIONAL_JUMP)  ; LAB_00560f75
    MOV dword ptr [EBX + 0xc294],0x0    ; 0056085b
    MOV dword ptr [EBX + 0xc28c],0x3    ; 00560865
    FLD float ptr [EBX + 0xc1e4]        ; 0056086f
        ;   Label: LAB_0056086f
    FLDZ                                ; 00560875
    FCOMPP                              ; 00560877
    FNSTSW AX                           ; 00560879
    SAHF                                ; 0056087b
    JNC 0x00560890                      ; 0056087c
        ;   XREF to: 00560890 (CONDITIONAL_JUMP)  ; LAB_00560890
    FLD float ptr [EBX + 0xc1e4]        ; 0056087e
    FSUB float ptr [EBP + 0x92]         ; 00560884
    FSTP float ptr [EBX + 0xc1e4]       ; 0056088a
    PUSH EBX                            ; 00560890
        ;   Label: LAB_00560890
    CALL core_charactr.cpp_FUN_0042e120 ; 00560891
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00560896
    TEST EAX,EAX                        ; 00560899
    JZ 0x00560981                       ; 0056089b
        ;   XREF to: 00560981 (CONDITIONAL_JUMP)  ; LAB_00560981
    PUSH dword ptr [EBP + 0x92]         ; 005608a1
    PUSH EBX                            ; 005608a7
    LEA ESI,[EBX + 0x2518]              ; 005608a8
    CALL core_charactr.cpp_FUN_0042d700 ; 005608ae
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 005608b3
    FMUL float ptr [EBP + 0x92]         ; 005608b5
    FLD float ptr [ESI + 0x4]           ; 005608bb
    FMUL float ptr [EBP + 0x92]         ; 005608be
    FLD float ptr [ESI + 0x8]           ; 005608c4
    FMUL float ptr [EBP + 0x92]         ; 005608c7
    LEA EDI,[EBP + 0x32]                ; 005608cd
    LEA ESI,[EBP + -0x6a]               ; 005608d0
    FXCH ST2                            ; 005608d3
    FSTP float ptr [EBP + -0x6a]        ; 005608d5
    FSTP float ptr [EBP + -0x66]        ; 005608d8
    FSTP float ptr [EBP + -0x62]        ; 005608db
    MOVSD ES:EDI,ESI                    ; 005608de
    MOVSD ES:EDI,ESI                    ; 005608df
    MOVSD ES:EDI,ESI                    ; 005608e0
    LEA EDX,[EBX + 0x250c]              ; 005608e1
    FLD float ptr [EBP + 0x32]          ; 005608e7
    FLD float ptr [EBP + 0x36]          ; 005608ea
    FLD float ptr [EBP + 0x3a]          ; 005608ed
    LEA EDI,[EBP + -0x46]               ; 005608f0
    LEA ESI,[EBP + 0x1a]                ; 005608f3
    FXCH ST2                            ; 005608f6
    FADD float ptr [EDX]                ; 005608f8
    FXCH                                ; 005608fa
    FADD float ptr [EDX + 0x4]          ; 005608fc
    FXCH ST2                            ; 005608ff
    FADD float ptr [EDX + 0x8]          ; 00560901
    FXCH                                ; 00560904
    FSTP float ptr [EBP + 0x1a]         ; 00560906
    FXCH                                ; 00560909
    FSTP float ptr [EBP + 0x1e]         ; 0056090b
    FSTP float ptr [EBP + 0x22]         ; 0056090e
    MOVSD ES:EDI,ESI                    ; 00560911
    MOVSD ES:EDI,ESI                    ; 00560912
    MOVSD ES:EDI,ESI                    ; 00560913
    LEA EAX,[EBX + 0x249c]              ; 00560914
    FLD float ptr [EBP + -0x46]         ; 0056091a
    FLD float ptr [EBP + -0x42]         ; 0056091d
    FLD float ptr [EBP + -0x3e]         ; 00560920
    LEA EDI,[EBP + -0x76]               ; 00560923
    LEA ESI,[EBP + 0xffffff7e]          ; 00560926
    FXCH ST2                            ; 0056092c
    FADD float ptr [EAX]                ; 0056092e
    FXCH                                ; 00560930
    FADD float ptr [EAX + 0x4]          ; 00560932
    FXCH ST2                            ; 00560935
    FADD float ptr [EAX + 0x8]          ; 00560937
    FXCH                                ; 0056093a
    FSTP float ptr [EBP + 0xffffff7e]   ; 0056093c
    FXCH                                ; 00560942
    FSTP float ptr [EBP + -0x7e]        ; 00560944
    FSTP float ptr [EBP + -0x7a]        ; 00560947
    MOVSD ES:EDI,ESI                    ; 0056094a
    MOVSD ES:EDI,ESI                    ; 0056094b
    MOVSD ES:EDI,ESI                    ; 0056094c
    MOV dword ptr [EDX + 0x8],0x0       ; 0056094d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00560954
    MOV dword ptr [EDX + 0x4],ECX       ; 00560957
    MOV ECX,dword ptr [EDX + 0x4]       ; 0056095a
    MOV dword ptr [EDX],ECX             ; 0056095d
    MOV dword ptr [EAX + 0x8],0x0       ; 0056095f
    ADD ESP,0x8                         ; 00560966
    MOV EDX,dword ptr [EAX + 0x8]       ; 00560969
    MOV dword ptr [EAX + 0x4],EDX       ; 0056096c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056096f
    MOV dword ptr [EAX],EDX             ; 00560972
    LEA EAX,[EBP + -0x76]               ; 00560974
    PUSH EAX                            ; 00560977
    PUSH EBX                            ; 00560978
    CALL core_charactr.cpp_FUN_0042d750 ; 00560979
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0056097e
    PUSH EBX                            ; 00560981
        ;   Label: LAB_00560981
    CALL core_charactr.cpp_FUN_0042e160 ; 00560982
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00560987
    LEA EAX,[EBX + 0x158]               ; 0056098a
    PUSH EAX                            ; 00560990
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00560991
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00560996
    PUSH dword ptr [EBP + 0x92]         ; 00560999
    PUSH EBX                            ; 0056099f
    CALL core_charactr.cpp_FUN_00433e80 ; 005609a0
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005609a5
    LEA ESP,[EBP + 0x7a]                ; 005609a8
    POP EBP                             ; 005609ab
    POP EDI                             ; 005609ac
    POP ESI                             ; 005609ad
    POP EBX                             ; 005609ae
    RET                                 ; 005609af
    PUSH 0x1                            ; 005609b0
        ;   Label: LAB_005609b0
    PUSH 0x1                            ; 005609b2
    LEA EAX,[EBX + 0x158]               ; 005609b4
    PUSH EAX                            ; 005609ba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005609bb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005609c0
    PUSH EBX                            ; 005609c3
    PUSH 0x5f1836                       ; 005609c4 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00611100]      ; 005609c9 | g_CConsolePtr
    PUSH ECX                            ; 005609cf | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005609d0
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x005607a6                      ; 005609d5
        ;   XREF to: 005607a6 (UNCONDITIONAL_JUMP)  ; LAB_005607a6
    JBE 0x00560768                      ; 005609da
        ;   XREF to: 00560768 (CONDITIONAL_JUMP)  ; LAB_00560768
        ;   Label: LAB_005609da
    CMP EAX,0x3                         ; 005609e0
    JZ 0x005609b0                       ; 005609e3
        ;   XREF to: 005609b0 (CONDITIONAL_JUMP)  ; LAB_005609b0
    LEA ESI,[EBX + 0x158]               ; 005609e5
        ;   Label: LAB_005609e5
    PUSH ESI                            ; 005609eb
    CALL core_motion.cpp_FUN_00525020   ; 005609ec
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005609f1
    ADD ESP,0x4                         ; 005609f4
    FLD float ptr [EBP + 0x76]          ; 005609f7
    FCOMP double ptr [0x005f18ad]       ; 005609fa | DAT_005f18ad
    FNSTSW AX                           ; 00560a00
    SAHF                                ; 00560a02
    JBE 0x005607a9                      ; 00560a03
        ;   XREF to: 005607a9 (CONDITIONAL_JUMP)  ; LAB_005607a9
    PUSH 0x1                            ; 00560a09
    PUSH 0x0                            ; 00560a0b
    PUSH 0x0                            ; 00560a0d
    CALL core_actor.cpp_FUN_0040cc60    ; 00560a0f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560a14
    INC EAX                             ; 00560a17
    PUSH EAX                            ; 00560a18
    PUSH ESI                            ; 00560a19
    JMP 0x005607a1                      ; 00560a1a
        ;   XREF to: 005607a1 (UNCONDITIONAL_JUMP)  ; LAB_005607a1
    FLD float ptr [EBP + 0x72]          ; 00560a1f
        ;   Label: caseD_0
    FMUL double ptr [0x005f18bd]        ; 00560a22 | DAT_005f18bd
    FDIV float ptr [EBP + 0x56]         ; 00560a28
    MOV dword ptr [EBX + 0xc298],0x0    ; 00560a2b
    PUSH EBX                            ; 00560a35
    MOV dword ptr [EBX + 0xc28c],0x3    ; 00560a36
    CALL crt_math.c_round_FUN_005c03a0  ; 00560a40
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0xc294]      ; 00560a45
    CALL core_shadowsc.cpp_FUN_005610e0 ; 00560a4b
        ;   XREF to: 005610e0 (UNCONDITIONAL_CALL)  ; undefined core_shadowsc.cpp_FUN_005610e0()
    ADD ESP,0x4                         ; 00560a50
    JMP 0x005607c1                      ; 00560a53
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBP + 0xfffffefa]          ; 00560a58
        ;   Label: caseD_3
    PUSH EAX                            ; 00560a5e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00560a5f
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00560a64
    PUSH 0x420c0000                     ; 00560a67
    PUSH 0x41700000                     ; 00560a6c
    CALL core_actor.cpp_FUN_0040cc00    ; 00560a71
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 00560a76
    MOV dword ptr [EBP + 0xffffff2e],EBX ; 00560a79
    MOV dword ptr [EBP + 0xffffff32],EBX ; 00560a7f
    ADD ESP,0x8                         ; 00560a85
    FLD float ptr [EBP + 0x76]          ; 00560a88
    LEA EAX,[EBP + 0xfffffefa]          ; 00560a8b
    FSTP float ptr [EBP + 0xfffffefe]   ; 00560a91
    MOV EDX,dword ptr [EBX + 0xc278]    ; 00560a97
    PUSH EAX                            ; 00560a9d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00560a9e
    SUB EAX,EDX                         ; 00560aa5
    SHL EAX,0x4                         ; 00560aa7
    LEA EDX,[EBX + 0xfd8]               ; 00560aaa
    ADD EAX,EDX                         ; 00560ab0
    PUSH 0x40800000                     ; 00560ab2
    PUSH EAX                            ; 00560ab7
    PUSH 0x2c8af28                      ; 00560ab8 | DAT_02c8af28
    LEA ESI,[EBP + 0xe]                 ; 00560abd
    LEA EDI,[EBP + -0x2e]               ; 00560ac0
    CALL core_xform.cpp_FUN_005b5080    ; 00560ac3
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00560ac8
    LEA EAX,[EBP + -0x2e]               ; 00560acb
    LEA ESI,[EBP + 0xe]                 ; 00560ace
    PUSH EAX                            ; 00560ad1
    MOVSD ES:EDI,ESI                    ; 00560ad2
    MOVSD ES:EDI,ESI                    ; 00560ad3
    MOVSD ES:EDI,ESI                    ; 00560ad4
    PUSH EBX                            ; 00560ad5
    LEA ESI,[EBP + -0x16]               ; 00560ad6
    CALL core_actor.cpp_FUN_00408b40    ; 00560ad9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00560ade
    LEA EAX,[EBP + -0x22]               ; 00560ae1
    PUSH EAX                            ; 00560ae4
    LEA EDI,[EBP + -0x22]               ; 00560ae5
    LEA ESI,[EBP + -0x16]               ; 00560ae8
    PUSH EBX                            ; 00560aeb
    MOVSD ES:EDI,ESI                    ; 00560aec
    MOVSD ES:EDI,ESI                    ; 00560aed
    MOVSD ES:EDI,ESI                    ; 00560aee
    CALL core_enemy.cpp_FUN_004a0770    ; 00560aef
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00560af4
    PUSH 0x5f1860                       ; 00560af7 | = "ScorpTailAttack"
    MOV EDX,dword ptr [0x0061b4d0]      ; 00560afc | DAT_0061b4d0
    PUSH EDX                            ; 00560b02
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00560b03
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00560b08
    MOV ECX,dword ptr [EBX + 0xc27c]    ; 00560b0b
    PUSH ECX                            ; 00560b11
    MOV ESI,dword ptr [0x006236b8]      ; 00560b12 | DAT_006236b8
    PUSH ESI                            ; 00560b18
    CALL core_sound.cpp_FUN_0057d9c0    ; 00560b19
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00560b1e
    TEST EAX,EAX                        ; 00560b21
    JNZ 0x005607c1                      ; 00560b23
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH EBX                            ; 00560b29
    CALL core_shadowsc.cpp_FUN_00561020 ; 00560b2a
        ;   XREF to: 00561020 (UNCONDITIONAL_CALL)  ; undefined core_shadowsc.cpp_FUN_00561020()
    ADD ESP,0x4                         ; 00560b2f
    JMP 0x005607c1                      ; 00560b32
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x5f1870                       ; 00560b37 | = "ScorpDying"
        ;   Label: caseD_6
    MOV EAX,[0x0061b4d0]                ; 00560b3c | DAT_0061b4d0
    PUSH EAX                            ; 00560b41
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00560b42
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    FLD float ptr [EBP + 0x72]          ; 00560b47
    FDIV float ptr [EBP + 0x56]         ; 00560b4a
    FLD1                                ; 00560b4d
    FSUBRP                              ; 00560b4f
    FMUL float ptr [0x005f189d]         ; 00560b51 | DAT_005f189d
    ADD ESP,0x8                         ; 00560b57
    MOV dword ptr [EBX + 0xc28c],0x3    ; 00560b5a
    CALL crt_math.c_round_FUN_005c03a0  ; 00560b64
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0xc294]      ; 00560b69
    JMP 0x005607c1                      ; 00560b6f
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV ESI,dword ptr [EBX + 0xc1d4]    ; 00560b74
        ;   Label: caseD_7
    TEST ESI,ESI                        ; 00560b7a
    JNZ 0x005607c1                      ; 00560b7c
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [EBX + 0xdc],0x0      ; 00560b82
    JNZ 0x005607c1                      ; 00560b89
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH ESI                            ; 00560b8f
    LEA EAX,[EBX + 0x158]               ; 00560b90
    PUSH EAX                            ; 00560b96
    LEA ESI,[EBP + 0x2]                 ; 00560b97
    LEA EDI,[EBP + -0x3a]               ; 00560b9a
    CALL core_skeleton.cpp_FUN_00569040 ; 00560b9d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00560ba2
    LEA EAX,[EBP + -0x3a]               ; 00560ba5
    LEA ESI,[EBP + 0x2]                 ; 00560ba8
    PUSH EAX                            ; 00560bab
    MOVSD ES:EDI,ESI                    ; 00560bac
    MOVSD ES:EDI,ESI                    ; 00560bad
    MOVSD ES:EDI,ESI                    ; 00560bae
    PUSH EBX                            ; 00560baf
    LEA ESI,[EBP + 0x3e]                ; 00560bb0
    CALL core_actor.cpp_FUN_00408b40    ; 00560bb3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 00560bb8
    MOV dword ptr [EBX + 0xc294],0x0    ; 00560bc2
    ADD ESP,0x8                         ; 00560bcc
    MOV dword ptr [EBX + 0xc28c],0x3    ; 00560bcf
    JMP 0x005607c1                      ; 00560bd9
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH dword ptr [EBP + 0x92]         ; 00560bde
        ;   Label: caseD_1
    PUSH EBX                            ; 00560be4
    CALL core_enemy.cpp_FUN_004a0fe0    ; 00560be5
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00560bea
    LEA ESI,[EBX + 0x158]               ; 00560bed
    TEST EAX,EAX                        ; 00560bf3
    JZ 0x00560c35                       ; 00560bf5
        ;   XREF to: 00560c35 (CONDITIONAL_JUMP)  ; LAB_00560c35
    PUSH ESI                            ; 00560bf7
    CALL core_motion.cpp_FUN_00525020   ; 00560bf8
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00560bfd
    ADD ESP,0x4                         ; 00560c00
    FLD float ptr [EBP + 0x76]          ; 00560c03
    FCOMP double ptr [0x005f18ad]       ; 00560c06 | DAT_005f18ad
    FNSTSW AX                           ; 00560c0c
    SAHF                                ; 00560c0e
    JBE 0x005607c1                      ; 00560c0f
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 00560c15
    PUSH 0x0                            ; 00560c17
    PUSH 0x0                            ; 00560c19
    CALL core_actor.cpp_FUN_0040cc60    ; 00560c1b
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560c20
    ADD EAX,0x2                         ; 00560c23
    PUSH EAX                            ; 00560c26
    PUSH ESI                            ; 00560c27
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560c28
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00560c2d
    JMP 0x005607c1                      ; 00560c30
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH dword ptr [EBP + 0x92]         ; 00560c35
        ;   Label: LAB_00560c35
    MOV EAX,dword ptr [EBX + 0x154]     ; 00560c3b
    PUSH EBX                            ; 00560c41
    CALL dword ptr [EAX + 0x144]        ; 00560c42
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00560c48
    ADD ESP,0x8                         ; 00560c4e
    TEST EDX,EDX                        ; 00560c51
    JZ 0x005607c1                       ; 00560c53
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 00560c59
    PUSH 0x0                            ; 00560c5b
    PUSH 0x0                            ; 00560c5d
    CALL core_actor.cpp_FUN_0040cc60    ; 00560c5f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560c64
    ADD EAX,0x2                         ; 00560c67
    PUSH EAX                            ; 00560c6a
    PUSH ESI                            ; 00560c6b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560c6c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00560c71
    PUSH EBX                            ; 00560c74
    CALL core_shadowsc.cpp_FUN_00560fe0 ; 00560c75
        ;   XREF to: 00560fe0 (UNCONDITIONAL_CALL)  ; undefined core_shadowsc.cpp_FUN_00560fe0()
    ADD ESP,0x4                         ; 00560c7a
    JMP 0x005607c1                      ; 00560c7d
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBP + 0xffffff36]          ; 00560c82
        ;   Label: caseD_2
    PUSH EAX                            ; 00560c88
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00560c89
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00560c8e
    PUSH 0x420c0000                     ; 00560c91
    PUSH 0x41700000                     ; 00560c96
    CALL core_actor.cpp_FUN_0040cc00    ; 00560c9b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 00560ca0
    ADD ESP,0x8                         ; 00560ca3
    MOV dword ptr [EBP + 0xffffff6a],EBX ; 00560ca6
    MOV dword ptr [EBP + 0xffffff6e],EBX ; 00560cac
    PUSH dword ptr [EBP + 0x92]         ; 00560cb2
    FLD float ptr [EBP + 0x76]          ; 00560cb8
    PUSH EBX                            ; 00560cbb
    FSTP float ptr [EBP + 0xffffff3a]   ; 00560cbc
    MOV EAX,dword ptr [EBX + 0x154]     ; 00560cc2
    CALL dword ptr [EAX + 0x144]        ; 00560cc8
    ADD ESP,0x8                         ; 00560cce
    LEA EAX,[EBX + 0x158]               ; 00560cd1
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 00560cd7
    MOV dword ptr [EBP + 0x6a],EAX      ; 00560cdd
    TEST EDI,EDI                        ; 00560ce0
    JZ 0x00560e8a                       ; 00560ce2
        ;   XREF to: 00560e8a (CONDITIONAL_JUMP)  ; LAB_00560e8a
    LEA EAX,[EBX + 0x20]                ; 00560ce8
    LEA ESI,[EBP + 0x26]                ; 00560ceb
    FLD float ptr [EAX]                 ; 00560cee
    FLD float ptr [EAX + 0x4]           ; 00560cf0
    FLD float ptr [EAX + 0x8]           ; 00560cf3
    FXCH ST2                            ; 00560cf6
    FSUB float ptr [EDI + 0x20]         ; 00560cf8
    FXCH                                ; 00560cfb
    FSUB float ptr [EDI + 0x24]         ; 00560cfd
    FXCH ST2                            ; 00560d00
    FSUB float ptr [EDI + 0x28]         ; 00560d02
    FXCH                                ; 00560d05
    FSTP float ptr [EBP + 0x26]         ; 00560d07
    FXCH                                ; 00560d0a
    FSTP float ptr [EBP + 0x2a]         ; 00560d0c
    LEA EDI,[EBP + -0x5e]               ; 00560d0f
    FSTP float ptr [EBP + 0x2e]         ; 00560d12
    MOVSD ES:EDI,ESI                    ; 00560d15
    MOVSD ES:EDI,ESI                    ; 00560d16
    MOVSD ES:EDI,ESI                    ; 00560d17
    FLD float ptr [EBP + -0x5a]         ; 00560d18
    FMUL ST0                            ; 00560d1b
    FLD float ptr [EBP + -0x5e]         ; 00560d1d
    FMUL ST0                            ; 00560d20
    FADDP                               ; 00560d22
    FLD float ptr [EBP + -0x56]         ; 00560d24
    FMUL ST0                            ; 00560d27
    FADDP                               ; 00560d29
    FSQRT                               ; 00560d2b
    FSTP float ptr [EBP + 0x6e]         ; 00560d2d
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00560d30
    FLD float ptr [EBP + 0x6e]          ; 00560d33
    MOV dword ptr [EBP + 0x5e],EAX      ; 00560d36
    FCOMP float ptr [0x00605348]        ; 00560d39 | DAT_00605348
    FNSTSW AX                           ; 00560d3f
    SAHF                                ; 00560d41
    JBE 0x00560d97                      ; 00560d42
        ;   XREF to: 00560d97 (CONDITIONAL_JUMP)  ; LAB_00560d97
    CMP dword ptr [EBP + 0x66],0x2      ; 00560d44
    JNZ 0x00560d97                      ; 00560d48
        ;   XREF to: 00560d97 (CONDITIONAL_JUMP)  ; LAB_00560d97
    FLD float ptr [EBX + 0xc1e4]        ; 00560d4a
    FCOMP double ptr [0x005f18a5]       ; 00560d50 | DAT_005f18a5
    FNSTSW AX                           ; 00560d56
    SAHF                                ; 00560d58
    JBE 0x00560efd                      ; 00560d59
        ;   XREF to: 00560efd (CONDITIONAL_JUMP)  ; LAB_00560efd
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00560d5f
    PUSH ESI                            ; 00560d62
    CALL core_motion.cpp_FUN_00525020   ; 00560d63
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00560d68
    ADD ESP,0x4                         ; 00560d6b
    FLD float ptr [EBP + 0x76]          ; 00560d6e
    FCOMP double ptr [0x005f18ad]       ; 00560d71 | DAT_005f18ad
    FNSTSW AX                           ; 00560d77
    SAHF                                ; 00560d79
    JBE 0x00560d97                      ; 00560d7a
        ;   XREF to: 00560d97 (CONDITIONAL_JUMP)  ; LAB_00560d97
    PUSH 0x1                            ; 00560d7c
    PUSH 0x0                            ; 00560d7e
    PUSH 0x0                            ; 00560d80
    CALL core_actor.cpp_FUN_0040cc60    ; 00560d82
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560d87
    ADD EAX,0x2                         ; 00560d8a
    PUSH EAX                            ; 00560d8d
    PUSH ESI                            ; 00560d8e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560d8f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00560d8f
    ADD ESP,0xc                         ; 00560d94
    FLD float ptr [EBP + 0x5e]          ; 00560d97
        ;   Label: LAB_00560d97
    FCOMP float ptr [0x005f18b5]        ; 00560d9a | DAT_005f18b5
    FNSTSW AX                           ; 00560da0
    SAHF                                ; 00560da2
    JBE 0x00560de1                      ; 00560da3
        ;   XREF to: 00560de1 (CONDITIONAL_JUMP)  ; LAB_00560de1
    FLD float ptr [EBP + 0x5e]          ; 00560da5
    FCOMP float ptr [0x005f18b9]        ; 00560da8 | DAT_005f18b9
    FNSTSW AX                           ; 00560dae
    SAHF                                ; 00560db0
    JNC 0x00560de1                      ; 00560db1
        ;   XREF to: 00560de1 (CONDITIONAL_JUMP)  ; LAB_00560de1
    PUSH 0xa                            ; 00560db3
    PUSH 0x0                            ; 00560db5
    CALL core_actor.cpp_FUN_0040cc60    ; 00560db7
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560dbc
    CMP EAX,0x5                         ; 00560dbf
    JNZ 0x00560de1                      ; 00560dc2
        ;   XREF to: 00560de1 (CONDITIONAL_JUMP)  ; LAB_00560de1
    PUSH 0x1                            ; 00560dc4
    PUSH 0x3                            ; 00560dc6
    LEA EAX,[EBX + 0x158]               ; 00560dc8
    PUSH EAX                            ; 00560dce
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560dcf
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00560dd4
    MOV dword ptr [EBX + 0xc1e4],0x40200000 ; 00560dd7
    MOV EAX,[0x0060533c]                ; 00560de1 | DAT_0060533c
        ;   Label: LAB_00560de1
    MOV dword ptr [EBP + 0x4a],EAX      ; 00560de6
    LEA EAX,[EBX + 0x249c]              ; 00560de9
    MOV dword ptr [EAX + 0x8],0x0       ; 00560def
    MOV EDX,dword ptr [EAX + 0x8]       ; 00560df6
    MOV dword ptr [EAX + 0x4],EDX       ; 00560df9
    MOV EDX,dword ptr [EAX + 0x4]       ; 00560dfc
    MOV dword ptr [EAX],EDX             ; 00560dff
    XOR EAX,EAX                         ; 00560e01
    MOV dword ptr [EBP + -0x52],EAX     ; 00560e03
    MOV dword ptr [EBP + -0x4e],EAX     ; 00560e06
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00560e09
    PUSH 0x3e32b8c2                     ; 00560e0c
    MOV dword ptr [EBP + -0x4a],EAX     ; 00560e11
    LEA EAX,[EBP + -0x52]               ; 00560e14
    PUSH 0x3f000000                     ; 00560e17
    PUSH EAX                            ; 00560e1c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00560e1d
    PUSH EAX                            ; 00560e23
    MOV EDX,dword ptr [EAX + 0x154]     ; 00560e24
    CALL dword ptr [EDX + 0xc4]         ; 00560e2a
    ADD ESP,0x4                         ; 00560e30
    PUSH EAX                            ; 00560e33
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00560e34
    ADD EAX,0x20                        ; 00560e3a
    PUSH EAX                            ; 00560e3d
    PUSH EBX                            ; 00560e3e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00560e3f
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00560e44
    LEA ESI,[EBX + 0x158]               ; 00560e47
    TEST EAX,EAX                        ; 00560e4d
    JL 0x00560f39                       ; 00560e4f
        ;   XREF to: 00560f39 (CONDITIONAL_JUMP)  ; LAB_00560f39
    JLE 0x005607c1                      ; 00560e55
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    FLD float ptr [EBX + 0xc1e4]        ; 00560e5b
    FLDZ                                ; 00560e61
    FCOMPP                              ; 00560e63
    FNSTSW AX                           ; 00560e65
    SAHF                                ; 00560e67
    JC 0x005607c1                       ; 00560e68
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 00560e6e
    PUSH 0x3                            ; 00560e70
    PUSH ESI                            ; 00560e72
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560e73
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00560e78
    MOV dword ptr [EBX + 0xc1e4],0x40200000 ; 00560e7b
    JMP 0x005607c1                      ; 00560e85
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH dword ptr [EBP + 0x92]         ; 00560e8a
        ;   Label: LAB_00560e8a
    PUSH EBX                            ; 00560e90
    CALL core_enemy.cpp_FUN_004a0fe0    ; 00560e91
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00560e96
    TEST EAX,EAX                        ; 00560e99
    JZ 0x00560ede                       ; 00560e9b
        ;   XREF to: 00560ede (CONDITIONAL_JUMP)  ; LAB_00560ede
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00560e9d
    PUSH EDI                            ; 00560ea0
    CALL core_motion.cpp_FUN_00525020   ; 00560ea1
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00560ea6
    ADD ESP,0x4                         ; 00560ea9
    FLD float ptr [EBP + 0x76]          ; 00560eac
    FCOMP double ptr [0x005f18ad]       ; 00560eaf | DAT_005f18ad
    FNSTSW AX                           ; 00560eb5
    SAHF                                ; 00560eb7
    JBE 0x005607c1                      ; 00560eb8
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 00560ebe
    PUSH 0x0                            ; 00560ec0
    PUSH 0x0                            ; 00560ec2
    CALL core_actor.cpp_FUN_0040cc60    ; 00560ec4
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560ec9
    ADD EAX,0x2                         ; 00560ecc
    PUSH EAX                            ; 00560ecf
    PUSH EDI                            ; 00560ed0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560ed1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00560ed6
    JMP 0x005607c1                      ; 00560ed9
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 00560ede
        ;   Label: LAB_00560ede
    PUSH EDI                            ; 00560ee0
    PUSH EDI                            ; 00560ee1
    CALL core_actor.cpp_FUN_0040cc60    ; 00560ee2
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560ee7
    INC EAX                             ; 00560eea
    PUSH EAX                            ; 00560eeb
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00560eec
    PUSH ESI                            ; 00560eef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560ef0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00560ef5
    JMP 0x005607c1                      ; 00560ef8
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00560efd
        ;   Label: LAB_00560efd
    PUSH EDX                            ; 00560f00
    CALL core_motion.cpp_FUN_00525020   ; 00560f01
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00560f06
    ADD ESP,0x4                         ; 00560f09
    FLD float ptr [EBP + 0x76]          ; 00560f0c
    FCOMP double ptr [0x005f18ad]       ; 00560f0f | DAT_005f18ad
    FNSTSW AX                           ; 00560f15
    SAHF                                ; 00560f17
    JBE 0x00560d97                      ; 00560f18
        ;   XREF to: 00560d97 (CONDITIONAL_JUMP)  ; LAB_00560d97
    PUSH 0x1                            ; 00560f1e
    PUSH 0x0                            ; 00560f20
    PUSH 0x0                            ; 00560f22
    CALL core_actor.cpp_FUN_0040cc60    ; 00560f24
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00560f29
    ADD EAX,0x2                         ; 00560f2c
    PUSH EAX                            ; 00560f2f
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00560f30
    PUSH ECX                            ; 00560f33
    JMP 0x00560d8f                      ; 00560f34
        ;   XREF to: 00560d8f (UNCONDITIONAL_JUMP)  ; LAB_00560d8f
    PUSH EBX                            ; 00560f39
        ;   Label: LAB_00560f39
    PUSH 0x5f187b                       ; 00560f3a | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00611100]      ; 00560f3f | g_CConsolePtr
    PUSH ECX                            ; 00560f45 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00560f46
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00560f4b
    PUSH 0x1                            ; 00560f4e
    PUSH 0x1                            ; 00560f50
    PUSH ESI                            ; 00560f52
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560f53
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00560f58
    JMP 0x005607c1                      ; 00560f5b
        ;   XREF to: 005607c1 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV ECX,dword ptr [EBP + 0x66]      ; 00560f60
        ;   Label: LAB_00560f60
    CMP ECX,0x7                         ; 00560f63
    JA 0x005607c1                       ; 00560f66
        ;   XREF to: 005607c1 (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,ECX                         ; 00560f6c
    JMP dword ptr [EAX*0x4 + 0x560610]  ; 00560f6e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    FLD float ptr [EBP + 0x62]          ; 00560f75
        ;   Label: LAB_00560f75
    FLD ST0                             ; 00560f78
    FSUB float ptr [EBP + 0x5a]         ; 00560f7a
    FDIVRP                              ; 00560f7d
    FLD ST0                             ; 00560f7f
    FMUL ST1                            ; 00560f81
    FLD ST1                             ; 00560f83
    FMUL float ptr [0x005f18c9]         ; 00560f85 | DAT_005f18c9
    FSUBRP                              ; 00560f8b
    FSTP ST1                            ; 00560f8d
    FMUL float ptr [0x005f18cd]         ; 00560f8f | DAT_005f18cd
    CALL crt_math.c_round_FUN_005c03a0  ; 00560f95
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0xc294]      ; 00560f9a
    MOV ECX,dword ptr [EBX + 0xc294]    ; 00560fa0
    MOV dword ptr [EBX + 0xc28c],0x0    ; 00560fa6
    CMP ECX,0xffdc                      ; 00560fb0
    JLE 0x0056086f                      ; 00560fb6
        ;   XREF to: 0056086f (CONDITIONAL_JUMP)  ; LAB_0056086f
    MOV dword ptr [EBX + 0xc294],0xffdc ; 00560fbc
    JMP 0x0056086f                      ; 00560fc6
        ;   XREF to: 0056086f (UNCONDITIONAL_JUMP)  ; LAB_0056086f
    MOV dword ptr [EBX + 0xc28c],0x3    ; 00560fcb
        ;   Label: LAB_00560fcb
    MOV dword ptr [EBX + 0xc294],EDX    ; 00560fd5
    JMP 0x0056086f                      ; 00560fdb
        ;   XREF to: 0056086f (UNCONDITIONAL_JUMP)  ; LAB_0056086f

