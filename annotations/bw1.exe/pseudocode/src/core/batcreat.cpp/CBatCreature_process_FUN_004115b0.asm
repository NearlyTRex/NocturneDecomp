; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_004115b0(CBatCreature *this_ptr,float delta_time)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00411584 = 00411a57
;   TerminatedCString s_s_confused_while_walking_005d37e8
;   TerminatedCString s_batman_attack_wav_005d3812
;   TerminatedCString s_batman_alert_wav_005d3825
;   TerminatedCString s_batman_attack_wav_005d3836
;   TerminatedCString s_batman_attack_wav_005d3849
;   undefined4 DAT_005d3861
;   undefined4 DAT_005d3869
;   undefined4 DAT_005d3871
;   undefined4 DAT_005fbfcc
;   undefined4 DAT_005fbfd8
;   CConsole* g_CConsolePtr = 007db5f0
;   CGore* g_CGorePtr = 01cd0e3c
;   undefined4 DAT_007c3754
;   CConsole g_CConsoleInstance
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00435320
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004115b0
        ;   Label: core_batcreat.cpp_CBatCreature_process_FUN_004115b0
    PUSH ESI                            ; 004115b1
    PUSH EDI                            ; 004115b2
    PUSH EBP                            ; 004115b3
    MOV EBP,ESP                         ; 004115b4
    SUB ESP,0x22c                       ; 004115b6
    SUB EBP,0x7a                        ; 004115bc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004115bf
    PUSH dword ptr [EBP + 0x92]         ; 004115c5
    PUSH EBX                            ; 004115cb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004115cc
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004115d1
    TEST EAX,EAX                        ; 004115d4
    JZ 0x00411832                       ; 004115d6
        ;   XREF to: 00411832 (CONDITIONAL_JUMP)  ; LAB_00411832
    LEA EAX,[EBX + 0x249c]              ; 004115dc
    MOV dword ptr [EAX + 0x8],0x0       ; 004115e2
    FLD float ptr [EBP + 0x92]          ; 004115e9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004115ef
    MOV dword ptr [EAX + 0x4],EDX       ; 004115f2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004115f5
    MOV dword ptr [EAX],EDX             ; 004115f8
    FMUL float ptr [EBX + 0xc1d0]       ; 004115fa
    LEA ESI,[EBX + 0x158]               ; 00411600
    FSTP float ptr [EBP + 0x52]         ; 00411606
    FLD float ptr [EBP + 0x52]          ; 00411609
        ;   Label: LAB_00411609
    FLDZ                                ; 0041160c
    FCOMPP                              ; 0041160e
    FNSTSW AX                           ; 00411610
    SAHF                                ; 00411612
    JC 0x0041183a                       ; 00411613
        ;   XREF to: 0041183a (CONDITIONAL_JUMP)  ; LAB_0041183a
    FLD float ptr [EBP + 0x92]          ; 00411619
    FMUL float ptr [EBX + 0xc1d0]       ; 0041161f
    SUB ESP,0x4                         ; 00411625
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00411628
    MOV dword ptr [EBX + 0x2524],EAX    ; 0041162e
    FSTP float ptr [ESP]                ; 00411634
    PUSH EBX                            ; 00411637
    CALL core_charactr.cpp_FUN_00435320 ; 00411638
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV EAX,dword ptr [EBX + 0xc298]    ; 0041163d
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00411643
    ADD ESP,0x8                         ; 0041164a
    TEST EDX,EDX                        ; 0041164d
    JZ 0x00411856                       ; 0041164f
        ;   XREF to: 00411856 (CONDITIONAL_JUMP)  ; LAB_00411856
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 00411655
        ;   Label: LAB_00411655
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0041165b
    JZ 0x0041186a                       ; 00411663
        ;   XREF to: 0041186a (CONDITIONAL_JUMP)  ; LAB_0041186a
    LEA EAX,[EBX + 0x158]               ; 00411669
        ;   Label: LAB_00411669
    PUSH EAX                            ; 0041166f
    MOV dword ptr [EBP + 0x6e],EAX      ; 00411670
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00411673
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00411678
    PUSH dword ptr [EBP + 0x92]         ; 0041167b
    MOV EAX,dword ptr [EAX + 0x24]      ; 00411681
    PUSH EBX                            ; 00411684
    MOV dword ptr [EBP + 0x62],EAX      ; 00411685
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00411688
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041168d
    TEST EAX,EAX                        ; 00411690
    JZ 0x004120ec                       ; 00411692
        ;   XREF to: 004120ec (CONDITIONAL_JUMP)  ; LAB_004120ec
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00411698
    CMP EAX,0x2                         ; 0041169e
    JNC 0x00411911                      ; 004116a1
        ;   XREF to: 00411911 (CONDITIONAL_JUMP)  ; LAB_00411911
    CMP EAX,0x1                         ; 004116a7
    JNZ 0x0041191c                      ; 004116aa
        ;   XREF to: 0041191c (CONDITIONAL_JUMP)  ; LAB_0041191c
    PUSH 0x1                            ; 004116b0
        ;   Label: LAB_004116b0
    PUSH 0x1                            ; 004116b2
    LEA EAX,[EBX + 0x158]               ; 004116b4
        ;   Label: LAB_004116b4
    PUSH EAX                            ; 004116ba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004116bb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004116c0
        ;   Label: LAB_004116c0
    LEA EAX,[EBX + 0x249c]              ; 004116c3
    MOV dword ptr [EAX + 0x8],0x0       ; 004116c9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004116d0
    MOV dword ptr [EAX + 0x4],EDX       ; 004116d3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004116d6
    MOV dword ptr [EAX],EDX             ; 004116d9
    FLD float ptr [EBX + 0xc1e4]        ; 004116db
        ;   Label: caseD_2
    FLDZ                                ; 004116e1
    FCOMPP                              ; 004116e3
    FNSTSW AX                           ; 004116e5
    SAHF                                ; 004116e7
    JNC 0x004116fc                      ; 004116e8
        ;   XREF to: 004116fc (CONDITIONAL_JUMP)  ; LAB_004116fc
    FLD float ptr [EBX + 0xc1e4]        ; 004116ea
    FSUB float ptr [EBP + 0x92]         ; 004116f0
    FSTP float ptr [EBX + 0xc1e4]       ; 004116f6
    PUSH EBX                            ; 004116fc
        ;   Label: LAB_004116fc
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 004116fd
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00411702
    TEST EAX,EAX                        ; 00411705
    JZ 0x0041180b                       ; 00411707
        ;   XREF to: 0041180b (CONDITIONAL_JUMP)  ; LAB_0041180b
    PUSH dword ptr [EBP + 0x92]         ; 0041170d
    PUSH EBX                            ; 00411713
    LEA ESI,[EBX + 0x2518]              ; 00411714
    CALL core_charactr.cpp_FUN_0042d700 ; 0041171a
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 0041171f
    FMUL float ptr [EBP + 0x92]         ; 00411721
    FLD float ptr [ESI + 0x4]           ; 00411727
    FMUL float ptr [EBP + 0x92]         ; 0041172a
    FLD float ptr [ESI + 0x8]           ; 00411730
    FMUL float ptr [EBP + 0x92]         ; 00411733
    LEA EDI,[EBP + 0xffffff32]          ; 00411739
    LEA ESI,[EBP + -0x3e]               ; 0041173f
    FXCH ST2                            ; 00411742
    FSTP float ptr [EBP + -0x3e]        ; 00411744
    FSTP float ptr [EBP + -0x3a]        ; 00411747
    FSTP float ptr [EBP + -0x36]        ; 0041174a
    MOVSD ES:EDI,ESI                    ; 0041174d
    MOVSD ES:EDI,ESI                    ; 0041174e
    MOVSD ES:EDI,ESI                    ; 0041174f
    LEA EDX,[EBX + 0x250c]              ; 00411750
    FLD float ptr [EBP + 0xffffff32]    ; 00411756
    FLD float ptr [EBP + 0xffffff36]    ; 0041175c
    FLD float ptr [EBP + 0xffffff3a]    ; 00411762
    LEA EDI,[EBP + -0x6e]               ; 00411768
    LEA ESI,[EBP + 0xffffff6e]          ; 0041176b
    FXCH ST2                            ; 00411771
    FADD float ptr [EDX]                ; 00411773
    FXCH                                ; 00411775
    FADD float ptr [EDX + 0x4]          ; 00411777
    FXCH ST2                            ; 0041177a
    FADD float ptr [EDX + 0x8]          ; 0041177c
    FXCH                                ; 0041177f
    FSTP float ptr [EBP + 0xffffff6e]   ; 00411781
    FXCH                                ; 00411787
    FSTP float ptr [EBP + 0xffffff72]   ; 00411789
    FSTP float ptr [EBP + 0xffffff76]   ; 0041178f
    MOVSD ES:EDI,ESI                    ; 00411795
    MOVSD ES:EDI,ESI                    ; 00411796
    MOVSD ES:EDI,ESI                    ; 00411797
    LEA EAX,[EBX + 0x249c]              ; 00411798
    FLD float ptr [EBP + -0x6e]         ; 0041179e
    FLD float ptr [EBP + -0x6a]         ; 004117a1
    FLD float ptr [EBP + -0x66]         ; 004117a4
    LEA EDI,[EBP + 0x22]                ; 004117a7
    LEA ESI,[EBP + 0xfffffeea]          ; 004117aa
    FXCH ST2                            ; 004117b0
    FADD float ptr [EAX]                ; 004117b2
    FXCH                                ; 004117b4
    FADD float ptr [EAX + 0x4]          ; 004117b6
    FXCH ST2                            ; 004117b9
    FADD float ptr [EAX + 0x8]          ; 004117bb
    FXCH                                ; 004117be
    FSTP float ptr [EBP + 0xfffffeea]   ; 004117c0
    FXCH                                ; 004117c6
    FSTP float ptr [EBP + 0xfffffeee]   ; 004117c8
    FSTP float ptr [EBP + 0xfffffef2]   ; 004117ce
    MOVSD ES:EDI,ESI                    ; 004117d4
    MOVSD ES:EDI,ESI                    ; 004117d5
    MOVSD ES:EDI,ESI                    ; 004117d6
    MOV dword ptr [EDX + 0x8],0x0       ; 004117d7
    MOV ECX,dword ptr [EDX + 0x8]       ; 004117de
    MOV dword ptr [EDX + 0x4],ECX       ; 004117e1
    MOV ECX,dword ptr [EDX + 0x4]       ; 004117e4
    MOV dword ptr [EDX],ECX             ; 004117e7
    MOV dword ptr [EAX + 0x8],0x0       ; 004117e9
    ADD ESP,0x8                         ; 004117f0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004117f3
    MOV dword ptr [EAX + 0x4],EDX       ; 004117f6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004117f9
    MOV dword ptr [EAX],EDX             ; 004117fc
    LEA EAX,[EBP + 0x22]                ; 004117fe
    PUSH EAX                            ; 00411801
    PUSH EBX                            ; 00411802
    CALL core_charactr.cpp_FUN_0042d750 ; 00411803
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00411808
    PUSH EBX                            ; 0041180b
        ;   Label: LAB_0041180b
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 0041180c
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00411811
    LEA EAX,[EBX + 0x158]               ; 00411814
    PUSH EAX                            ; 0041181a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 0041181b
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411820
    PUSH dword ptr [EBP + 0x92]         ; 00411823
    PUSH EBX                            ; 00411829
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 0041182a
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041182f
    LEA ESP,[EBP + 0x7a]                ; 00411832
        ;   Label: LAB_00411832
    POP EBP                             ; 00411835
    POP EDI                             ; 00411836
    POP ESI                             ; 00411837
    POP EBX                             ; 00411838
    RET                                 ; 00411839
    LEA EAX,[EBP + 0x52]                ; 0041183a
        ;   Label: LAB_0041183a
    PUSH EAX                            ; 0041183d
    PUSH ESI                            ; 0041183e
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0041183f
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00411844
    PUSH EAX                            ; 00411847
    PUSH EBX                            ; 00411848
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00411849
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0041184e
    JMP 0x00411609                      ; 00411851
        ;   XREF to: 00411609 (UNCONDITIONAL_JUMP)  ; LAB_00411609
    MOV EAX,dword ptr [EBX + 0xc290]    ; 00411856
        ;   Label: LAB_00411856
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0041185c
    JNZ 0x00411655                      ; 00411864
        ;   XREF to: 00411655 (CONDITIONAL_JUMP)  ; LAB_00411655
    FLD float ptr [EBX + 0xc268]        ; 0041186a
        ;   Label: LAB_0041186a
    FLDZ                                ; 00411870
    FCOMPP                              ; 00411872
    FNSTSW AX                           ; 00411874
    SAHF                                ; 00411876
    JA 0x00411669                       ; 00411877
        ;   XREF to: 00411669 (CONDITIONAL_JUMP)  ; LAB_00411669
    FLD float ptr [EBX + 0xc268]        ; 0041187d
    FADD float ptr [EBP + 0x92]         ; 00411883
    FST float ptr [EBX + 0xc268]        ; 00411889
    FCOMP double ptr [0x005d3861]       ; 0041188f | DAT_005d3861
    FNSTSW AX                           ; 00411895
    SAHF                                ; 00411897
    JC 0x00411669                       ; 00411898
        ;   XREF to: 00411669 (CONDITIONAL_JUMP)  ; LAB_00411669
    LEA EAX,[EBP + 0xfffffe8a]          ; 0041189e
    PUSH EAX                            ; 004118a4
    MOV EDI,0x461c3f9a                  ; 004118a5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004118aa
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    LEA EAX,[EBP + 0xfffffe8a]          ; 004118af
    ADD ESP,0x4                         ; 004118b5
    MOV dword ptr [EBP + 0xfffffe8e],EDI ; 004118b8
    MOV dword ptr [EBP + 0xfffffebe],EBX ; 004118be
    MOV dword ptr [EBP + 0xfffffec2],EBX ; 004118c4
    PUSH EAX                            ; 004118ca
    MOV EDX,dword ptr [EBX + 0x154]     ; 004118cb
    PUSH EBX                            ; 004118d1
    CALL dword ptr [EDX + 0x108]        ; 004118d2
    ADD ESP,0x8                         ; 004118d8
    MOV dword ptr [EBX + 0xc268],0xbf800000 ; 004118db
    JMP 0x00411669                      ; 004118e5
        ;   XREF to: 00411669 (UNCONDITIONAL_JUMP)  ; LAB_00411669
    PUSH 0x1                            ; 004118ea
        ;   Label: LAB_004118ea
    PUSH 0x0                            ; 004118ec
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004118ee
    PUSH ECX                            ; 004118f1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004118f2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004118f7
    PUSH EBX                            ; 004118fa
    PUSH 0x5d37e8                       ; 004118fb | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 00411900 | g_CConsolePtr
    PUSH ESI                            ; 00411906 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00411907
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x004116c0                      ; 0041190c
        ;   XREF to: 004116c0 (UNCONDITIONAL_JUMP)  ; LAB_004116c0
    JBE 0x004116b0                      ; 00411911
        ;   XREF to: 004116b0 (CONDITIONAL_JUMP)  ; LAB_004116b0
        ;   Label: LAB_00411911
    CMP EAX,0x3                         ; 00411917
    JZ 0x004118ea                       ; 0041191a
        ;   XREF to: 004118ea (CONDITIONAL_JUMP)  ; LAB_004118ea
    PUSH 0x1                            ; 0041191c
        ;   Label: LAB_0041191c
    PUSH 0x0                            ; 0041191e
    JMP 0x004116b4                      ; 00411920
        ;   XREF to: 004116b4 (UNCONDITIONAL_JUMP)  ; LAB_004116b4
    MOV ECX,dword ptr [EBX + 0xc1d4]    ; 00411925
        ;   Label: caseD_8
    TEST ECX,ECX                        ; 0041192b
    JNZ 0x004116db                      ; 0041192d
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 00411933
    JNZ 0x004116db                      ; 0041193a
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    PUSH ECX                            ; 00411940
    MOV EDI,dword ptr [EBP + 0x6e]      ; 00411941
    PUSH EDI                            ; 00411944
    LEA ESI,[EBP + 0xa]                 ; 00411945
    CALL core_skeleton.cpp_FUN_00569040 ; 00411948
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[EBP + 0xffffff0e]          ; 0041194d
    ADD ESP,0x8                         ; 00411953
    LEA EAX,[EBP + 0xffffff0e]          ; 00411956
    LEA ESI,[EBP + 0xa]                 ; 0041195c
    PUSH EAX                            ; 0041195f
    MOVSD ES:EDI,ESI                    ; 00411960
    MOVSD ES:EDI,ESI                    ; 00411961
    MOVSD ES:EDI,ESI                    ; 00411962
    PUSH EBX                            ; 00411963
    LEA ESI,[EBP + 0xffffff26]          ; 00411964
    CALL core_actor.cpp_FUN_00408b40    ; 0041196a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0041196f
    PUSH 0x0                            ; 00411972
    LEA EAX,[EBP + 0xffffff7a]          ; 00411974
    LEA EDI,[EBP + 0xffffff7a]          ; 0041197a
    PUSH EAX                            ; 00411980
    MOV EAX,[0x0061dca4]                ; 00411981 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff26]          ; 00411986
    PUSH EAX                            ; 0041198c
    MOVSD ES:EDI,ESI                    ; 0041198d
    MOVSD ES:EDI,ESI                    ; 0041198e
    MOVSD ES:EDI,ESI                    ; 0041198f
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 00411990
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00411995
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 00411998
    JMP 0x004116db                      ; 004119a2
        ;   XREF to: 004116db (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffe4e]          ; 004119a7
        ;   Label: caseD_3
    PUSH EAX                            ; 004119ad
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004119ae
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004119b3
    PUSH 0x41700000                     ; 004119b6
    PUSH 0x40e00000                     ; 004119bb
    LEA ESI,[EBP + 0xffffff02]          ; 004119c0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004119c6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004119cb
    ADD ESP,0x8                         ; 004119ce
    LEA EAX,[EBP + 0xfffffe4e]          ; 004119d1
    MOV EDX,dword ptr [0x007c3754]      ; 004119d7 | DAT_007c3754
    PUSH EAX                            ; 004119dd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004119de
    MOV dword ptr [EBP + 0xfffffe82],EBX ; 004119e5
    SUB EAX,EDX                         ; 004119eb
    MOV dword ptr [EBP + 0xfffffe86],EBX ; 004119ed
    SHL EAX,0x4                         ; 004119f3
    LEA EDX,[EBX + 0xfd8]               ; 004119f6
    PUSH 0x3ecccccd                     ; 004119fc
    ADD EAX,EDX                         ; 00411a01
    LEA EDI,[EBP + -0x26]               ; 00411a03
    PUSH EAX                            ; 00411a06
    FLD float ptr [EBP + 0x76]          ; 00411a07
    PUSH 0x2c8af28                      ; 00411a0a | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffe52]   ; 00411a0f
    CALL core_xform.cpp_FUN_005b5080    ; 00411a15
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00411a1a
    LEA EAX,[EBP + -0x26]               ; 00411a1d
    LEA ESI,[EBP + 0xffffff02]          ; 00411a20
    PUSH EAX                            ; 00411a26
    MOVSD ES:EDI,ESI                    ; 00411a27
    MOVSD ES:EDI,ESI                    ; 00411a28
    MOVSD ES:EDI,ESI                    ; 00411a29
    PUSH EBX                            ; 00411a2a
    LEA ESI,[EBP + 0xfffffed2]          ; 00411a2b
    CALL core_actor.cpp_FUN_00408b40    ; 00411a31
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00411a36
    LEA EAX,[EBP + -0x1a]               ; 00411a39
    PUSH EAX                            ; 00411a3c
    LEA EDI,[EBP + -0x1a]               ; 00411a3d
    LEA ESI,[EBP + 0xfffffed2]          ; 00411a40
    PUSH EBX                            ; 00411a46
    MOVSD ES:EDI,ESI                    ; 00411a47
    MOVSD ES:EDI,ESI                    ; 00411a48
    MOVSD ES:EDI,ESI                    ; 00411a49
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 00411a4a
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00411a4f
    JMP 0x004116db                      ; 00411a52
        ;   XREF to: 004116db (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00411a57
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00411a5d
    PUSH EBX                            ; 00411a63
    CALL dword ptr [EAX + 0x144]        ; 00411a64
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00411a6a
    ADD ESP,0x8                         ; 00411a70
    TEST ESI,ESI                        ; 00411a73
    JZ 0x00411d4d                       ; 00411a75
        ;   XREF to: 00411d4d (CONDITIONAL_JUMP)  ; LAB_00411d4d
    MOV EDX,ESI                         ; 00411a7b
    LEA EDI,[EBP + 0xfffffef6]          ; 00411a7d
    LEA EAX,[EBX + 0x20]                ; 00411a83
    FLD float ptr [EDX + 0x20]          ; 00411a86
    FLD float ptr [EDX + 0x24]          ; 00411a89
    FLD float ptr [EDX + 0x28]          ; 00411a8c
    LEA ESI,[EBP + 0xffffff1a]          ; 00411a8f
    FXCH ST2                            ; 00411a95
    FSUB float ptr [EAX]                ; 00411a97
    FXCH                                ; 00411a99
    FSUB float ptr [EAX + 0x4]          ; 00411a9b
    FXCH ST2                            ; 00411a9e
    FSUB float ptr [EAX + 0x8]          ; 00411aa0
    FXCH                                ; 00411aa3
    FSTP float ptr [EBP + 0xffffff1a]   ; 00411aa5
    FXCH                                ; 00411aab
    FSTP float ptr [EBP + 0xffffff1e]   ; 00411aad
    FSTP float ptr [EBP + 0xffffff22]   ; 00411ab3
    MOVSD ES:EDI,ESI                    ; 00411ab9
    MOVSD ES:EDI,ESI                    ; 00411aba
    MOVSD ES:EDI,ESI                    ; 00411abb
    FLD float ptr [EBP + 0xfffffefa]    ; 00411abc
    FMUL ST0                            ; 00411ac2
    FLD float ptr [EBP + 0xfffffef6]    ; 00411ac4
    FMUL ST0                            ; 00411aca
    FADDP                               ; 00411acc
    FLD float ptr [EBP + 0xfffffefe]    ; 00411ace
    FMUL ST0                            ; 00411ad4
    FADDP                               ; 00411ad6
    FSQRT                               ; 00411ad8
    FSTP float ptr [EBP + 0x66]         ; 00411ada
    MOV EAX,dword ptr [EBP + 0x66]      ; 00411add
    FLD float ptr [EBP + 0x66]          ; 00411ae0
    MOV dword ptr [EBP + 0x56],EAX      ; 00411ae3
    FCOMP float ptr [0x005fbfcc]        ; 00411ae6 | DAT_005fbfcc
    FNSTSW AX                           ; 00411aec
    SAHF                                ; 00411aee
    JC 0x00411c6e                       ; 00411aef
        ;   XREF to: 00411c6e (CONDITIONAL_JUMP)  ; LAB_00411c6e
    FLD float ptr [EBP + 0x56]          ; 00411af5
        ;   Label: LAB_00411af5
    FCOMP float ptr [EBX + 0xc1e0]      ; 00411af8
    FNSTSW AX                           ; 00411afe
    SAHF                                ; 00411b00
    JNC 0x004116db                      ; 00411b01
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBX + 0x158]               ; 00411b07
    FLD float ptr [EBP + 0x56]          ; 00411b0d
    MOV dword ptr [EBP + 0x6a],EAX      ; 00411b10
    FCOMP float ptr [0x005fbfd8]        ; 00411b13 | DAT_005fbfd8
    FNSTSW AX                           ; 00411b19
    SAHF                                ; 00411b1b
    JC 0x00411d0f                       ; 00411b1c
        ;   XREF to: 00411d0f (CONDITIONAL_JUMP)  ; LAB_00411d0f
    PUSH 0x3dcccccd                     ; 00411b22
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00411b27
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00411b31
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00411b36
    TEST EAX,EAX                        ; 00411b39
    JZ 0x00411d40                       ; 00411b3b
        ;   XREF to: 00411d40 (CONDITIONAL_JUMP)  ; LAB_00411d40
    LEA EDI,[EBP + 0xffffff4a]          ; 00411b41
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00411b47
    LEA ESI,[EBP + 0xfffffec6]          ; 00411b4d
    LEA EDX,[EBX + 0x20]                ; 00411b53
    FLD float ptr [EAX + 0x24]          ; 00411b56
    FLD float ptr [EAX + 0x28]          ; 00411b59
    FLD float ptr [EAX + 0x20]          ; 00411b5c
    LEA EAX,[EBP + 0xffffff4a]          ; 00411b5f
    FSUB float ptr [EDX]                ; 00411b65
    FXCH ST2                            ; 00411b67
    FSUB float ptr [EDX + 0x4]          ; 00411b69
    FXCH                                ; 00411b6c
    FSUB float ptr [EDX + 0x8]          ; 00411b6e
    FXCH ST2                            ; 00411b71
    FSTP float ptr [EBP + 0xfffffec6]   ; 00411b73
    FSTP float ptr [EBP + 0xfffffeca]   ; 00411b79
    FSTP float ptr [EBP + 0xfffffece]   ; 00411b7f
    MOVSD ES:EDI,ESI                    ; 00411b85
    MOVSD ES:EDI,ESI                    ; 00411b86
    MOVSD ES:EDI,ESI                    ; 00411b87
    PUSH EAX                            ; 00411b88
    LEA ESI,[EBP + -0xe]                ; 00411b89
    LEA EDI,[EBP + -0x2]                ; 00411b8c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00411b8f
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + -0xe]                ; 00411b94
    MOVSD ES:EDI,ESI                    ; 00411b97
    MOVSD ES:EDI,ESI                    ; 00411b98
    MOVSD ES:EDI,ESI                    ; 00411b99
    ADD ESP,0x4                         ; 00411b9a
    FLD float ptr [EBP + 0x2]           ; 00411b9d
    FSUB float ptr [EBX + 0x34]         ; 00411ba0
    SUB ESP,0x4                         ; 00411ba3
    FSTP float ptr [ESP]                ; 00411ba6
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00411ba9
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00411bae
    FLD float ptr [EBP + 0x76]          ; 00411bb1
    FABS                                ; 00411bb4
    ADD ESP,0x4                         ; 00411bb6
    FCOMP double ptr [0x005d3869]       ; 00411bb9 | DAT_005d3869
    FNSTSW AX                           ; 00411bbf
    SAHF                                ; 00411bc1
    JNC 0x00411d33                      ; 00411bc2
        ;   XREF to: 00411d33 (CONDITIONAL_JUMP)  ; LAB_00411d33
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00411bc8
    FLD float ptr [EAX + 0x24]          ; 00411bce
    FSUB float ptr [EBX + 0x24]         ; 00411bd1
    FABS                                ; 00411bd4
    FCOMP double ptr [0x005d3871]       ; 00411bd6 | DAT_005d3871
    FNSTSW AX                           ; 00411bdc
    SAHF                                ; 00411bde
    JNC 0x00411d26                      ; 00411bdf
        ;   XREF to: 00411d26 (CONDITIONAL_JUMP)  ; LAB_00411d26
    PUSH 0x1                            ; 00411be5
    PUSH 0x2                            ; 00411be7
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00411be9
    PUSH EDX                            ; 00411bec
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00411bed
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00411bed
    ADD ESP,0xc                         ; 00411bf2
    CMP dword ptr [EBX + 0xc2b0],0x0    ; 00411bf5
    JNZ 0x004116db                      ; 00411bfc
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [EBX + 0xc2a8]    ; 00411c02
    PUSH EDI                            ; 00411c08
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00411c09
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00411c0e
    TEST EAX,EAX                        ; 00411c11
    JNZ 0x004116db                      ; 00411c13
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xc2ac]    ; 00411c19
    PUSH EAX                            ; 00411c1f
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00411c20
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00411c25
    TEST EAX,EAX                        ; 00411c28
    JNZ 0x004116db                      ; 00411c2a
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0xc2a4]    ; 00411c30
    PUSH EDX                            ; 00411c36
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00411c37
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00411c3c
    TEST EAX,EAX                        ; 00411c3f
    JNZ 0x004116db                      ; 00411c41
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x5d3825                       ; 00411c47 | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00411c4c
    PUSH EBX                            ; 00411c52
    CALL dword ptr [EAX + 0x2c]         ; 00411c53
    MOV dword ptr [EBX + 0xc2b0],0x1    ; 00411c56
    ADD ESP,0x8                         ; 00411c60
    MOV dword ptr [EBX + 0xc2a4],EAX    ; 00411c63
    JMP 0x004116db                      ; 00411c69
        ;   XREF to: 004116db (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffef6]          ; 00411c6e
        ;   Label: LAB_00411c6e
    PUSH EAX                            ; 00411c74
    LEA ESI,[EBP + -0x56]               ; 00411c75
    LEA EDI,[EBP + -0x62]               ; 00411c78
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00411c7b
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + -0x56]               ; 00411c80
    MOVSD ES:EDI,ESI                    ; 00411c83
    MOVSD ES:EDI,ESI                    ; 00411c84
    MOVSD ES:EDI,ESI                    ; 00411c85
    ADD ESP,0x4                         ; 00411c86
    FLD float ptr [EBP + -0x5e]         ; 00411c89
    FSUB float ptr [EBX + 0x34]         ; 00411c8c
    SUB ESP,0x4                         ; 00411c8f
    FSTP float ptr [ESP]                ; 00411c92
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00411c95
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00411c9a
    FLD float ptr [EBP + 0x76]          ; 00411c9d
    FABS                                ; 00411ca0
    ADD ESP,0x4                         ; 00411ca2
    FCOMP double ptr [0x005d3869]       ; 00411ca5 | DAT_005d3869
    FNSTSW AX                           ; 00411cab
    SAHF                                ; 00411cad
    JNC 0x00411af5                      ; 00411cae
        ;   XREF to: 00411af5 (CONDITIONAL_JUMP)  ; LAB_00411af5
    PUSH 0x1                            ; 00411cb4
    PUSH 0x3                            ; 00411cb6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00411cb8
    PUSH EAX                            ; 00411cbb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00411cbc
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00411cc1
    MOV EDX,dword ptr [EBX + 0xc2a8]    ; 00411cc4
    PUSH EDX                            ; 00411cca
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00411ccb
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00411cd0
    TEST EAX,EAX                        ; 00411cd3
    JNZ 0x00411af5                      ; 00411cd5
        ;   XREF to: 00411af5 (CONDITIONAL_JUMP)  ; LAB_00411af5
    MOV ECX,dword ptr [EBX + 0xc2ac]    ; 00411cdb
    PUSH ECX                            ; 00411ce1
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00411ce2
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00411ce7
    TEST EAX,EAX                        ; 00411cea
    JNZ 0x00411af5                      ; 00411cec
        ;   XREF to: 00411af5 (CONDITIONAL_JUMP)  ; LAB_00411af5
    PUSH 0x5d3812                       ; 00411cf2 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00411cf7
    PUSH EBX                            ; 00411cfd
    CALL dword ptr [EAX + 0x2c]         ; 00411cfe
    ADD ESP,0x8                         ; 00411d01
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 00411d04
    JMP 0x00411af5                      ; 00411d0a
        ;   XREF to: 00411af5 (UNCONDITIONAL_JUMP)  ; LAB_00411af5
    PUSH 0x1                            ; 00411d0f
        ;   Label: LAB_00411d0f
    PUSH 0x1                            ; 00411d11
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00411d13
    PUSH ECX                            ; 00411d16
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00411d17
    JMP 0x00411bed                      ; 00411d21
        ;   XREF to: 00411bed (UNCONDITIONAL_JUMP)  ; LAB_00411bed
    PUSH 0x1                            ; 00411d26
        ;   Label: LAB_00411d26
    PUSH 0x1                            ; 00411d28
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00411d2a
    PUSH EAX                            ; 00411d2d
    JMP 0x00411bed                      ; 00411d2e
        ;   XREF to: 00411bed (UNCONDITIONAL_JUMP)  ; LAB_00411bed
    PUSH 0x1                            ; 00411d33
        ;   Label: LAB_00411d33
    PUSH 0x1                            ; 00411d35
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00411d37
    PUSH EDI                            ; 00411d3a
    JMP 0x00411bed                      ; 00411d3b
        ;   XREF to: 00411bed (UNCONDITIONAL_JUMP)  ; LAB_00411bed
    PUSH 0x1                            ; 00411d40
        ;   Label: LAB_00411d40
    PUSH 0x1                            ; 00411d42
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00411d44
    PUSH ESI                            ; 00411d47
    JMP 0x00411bed                      ; 00411d48
        ;   XREF to: 00411bed (UNCONDITIONAL_JUMP)  ; LAB_00411bed
    PUSH dword ptr [EBP + 0x92]         ; 00411d4d
        ;   Label: LAB_00411d4d
    PUSH EBX                            ; 00411d53
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00411d54
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00411d59
    TEST EAX,EAX                        ; 00411d5c
    JZ 0x004116db                       ; 00411d5e
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00411d64
    PUSH 0x1                            ; 00411d66
    MOV EDI,dword ptr [EBP + 0x6e]      ; 00411d68
    PUSH EDI                            ; 00411d6b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00411d6c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00411d71
    JMP 0x004116db                      ; 00411d74
        ;   XREF to: 004116db (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00411d79
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 00411d7f
    PUSH EBX                            ; 00411d85
    CALL dword ptr [EAX + 0x144]        ; 00411d86
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00411d8c
    ADD ESP,0x8                         ; 00411d92
    TEST EDX,EDX                        ; 00411d95
    JNZ 0x00411dd5                      ; 00411d97
        ;   XREF to: 00411dd5 (CONDITIONAL_JUMP)  ; LAB_00411dd5
    PUSH dword ptr [EBP + 0x92]         ; 00411d99
    PUSH EBX                            ; 00411d9f
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00411da0
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00411da5
    TEST EAX,EAX                        ; 00411da8
    JZ 0x00411dc1                       ; 00411daa
        ;   XREF to: 00411dc1 (CONDITIONAL_JUMP)  ; LAB_00411dc1
    PUSH 0x1                            ; 00411dac
    PUSH 0x1                            ; 00411dae
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00411db0
    PUSH ECX                            ; 00411db3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00411db4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00411db9
    JMP 0x004116db                      ; 00411dbc
        ;   XREF to: 004116db (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00411dc1
        ;   Label: LAB_00411dc1
    PUSH EAX                            ; 00411dc3
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00411dc4
    PUSH EDX                            ; 00411dc7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00411dc8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00411dcd
    JMP 0x004116db                      ; 00411dd0
        ;   XREF to: 004116db (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x005fbfcc]                ; 00411dd5 | DAT_005fbfcc
        ;   Label: LAB_00411dd5
    PUSH 0x3e32b8c2                     ; 00411dda
    MOV dword ptr [EBP + 0x5a],EAX      ; 00411ddf
    LEA EAX,[EBX + 0x249c]              ; 00411de2
    PUSH 0x3f000000                     ; 00411de8
    MOV dword ptr [EAX + 0x8],0x0       ; 00411ded
    XOR ECX,ECX                         ; 00411df4
    MOV EDX,dword ptr [EAX + 0x8]       ; 00411df6
    MOV dword ptr [EAX + 0x4],EDX       ; 00411df9
    MOV EDX,dword ptr [EAX + 0x4]       ; 00411dfc
    MOV dword ptr [EAX],EDX             ; 00411dff
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00411e01
    MOV dword ptr [EBP + 0xffffff56],ECX ; 00411e04
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 00411e0a
    LEA EAX,[EBP + 0xffffff56]          ; 00411e10
    MOV dword ptr [EBP + 0xffffff5a],ECX ; 00411e16
    PUSH EAX                            ; 00411e1c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00411e1d
    PUSH EAX                            ; 00411e23
    MOV EDX,dword ptr [EAX + 0x154]     ; 00411e24
    CALL dword ptr [EDX + 0xc4]         ; 00411e2a
    ADD ESP,0x4                         ; 00411e30
    PUSH EAX                            ; 00411e33
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00411e34
    ADD EAX,0x20                        ; 00411e3a
    PUSH EAX                            ; 00411e3d
    PUSH EBX                            ; 00411e3e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00411e3f
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00411e44
    TEST EAX,EAX                        ; 00411e47
    JL 0x004116db                       ; 00411e49
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + 0x2e]                ; 00411e4f
    LEA EDX,[EBX + 0x20]                ; 00411e52
    LEA ESI,[EBP + 0xffffff3e]          ; 00411e55
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00411e5b
    FLD float ptr [EDX]                 ; 00411e61
    FLD float ptr [EDX + 0x4]           ; 00411e63
    FLD float ptr [EDX + 0x8]           ; 00411e66
    FXCH ST2                            ; 00411e69
    FSUB float ptr [EAX + 0x20]         ; 00411e6b
    FXCH                                ; 00411e6e
    FSUB float ptr [EAX + 0x24]         ; 00411e70
    FXCH ST2                            ; 00411e73
    FSUB float ptr [EAX + 0x28]         ; 00411e75
    FXCH                                ; 00411e78
    FSTP float ptr [EBP + 0xffffff3e]   ; 00411e7a
    FXCH                                ; 00411e80
    FSTP float ptr [EBP + 0xffffff42]   ; 00411e82
    FSTP float ptr [EBP + 0xffffff46]   ; 00411e88
    MOVSD ES:EDI,ESI                    ; 00411e8e
    MOVSD ES:EDI,ESI                    ; 00411e8f
    MOVSD ES:EDI,ESI                    ; 00411e90
    FLD float ptr [EBP + 0x2e]          ; 00411e91
    FMUL ST0                            ; 00411e94
    FLD float ptr [EBP + 0x36]          ; 00411e96
    FMUL ST0                            ; 00411e99
    FADDP                               ; 00411e9b
    FSQRT                               ; 00411e9d
    XOR EDI,EDI                         ; 00411e9f
    MOV dword ptr [EBP + 0x32],EDI      ; 00411ea1
    FSTP float ptr [EBP + 0x72]         ; 00411ea4
    MOV EAX,dword ptr [EBP + 0x72]      ; 00411ea7
    FLD float ptr [EBP + 0x72]          ; 00411eaa
    MOV dword ptr [EBP + 0x5e],EAX      ; 00411ead
    FCOMP float ptr [0x005fbfd8]        ; 00411eb0 | DAT_005fbfd8
    FNSTSW AX                           ; 00411eb6
    SAHF                                ; 00411eb8
    JBE 0x00411f95                      ; 00411eb9
        ;   XREF to: 00411f95 (CONDITIONAL_JUMP)  ; LAB_00411f95
    MOV EAX,dword ptr [EBP + 0x62]      ; 00411ebf
    MOV dword ptr [EBX + 0xc1e4],EDI    ; 00411ec2
    CMP EAX,0x1                         ; 00411ec8
    JNZ 0x00411f95                      ; 00411ecb
        ;   XREF to: 00411f95 (CONDITIONAL_JUMP)  ; LAB_00411f95
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00411ed1
    LEA EDI,[EBP + -0x4a]               ; 00411ed7
    LEA ESI,[EBP + 0xfffffede]          ; 00411eda
    FLD float ptr [EAX + 0x24]          ; 00411ee0
    FLD float ptr [EAX + 0x28]          ; 00411ee3
    FLD float ptr [EAX + 0x20]          ; 00411ee6
    LEA EAX,[EBP + -0x4a]               ; 00411ee9
    FSUB float ptr [EDX]                ; 00411eec
    FXCH ST2                            ; 00411eee
    FSUB float ptr [EDX + 0x4]          ; 00411ef0
    FXCH                                ; 00411ef3
    FSUB float ptr [EDX + 0x8]          ; 00411ef5
    FXCH ST2                            ; 00411ef8
    FSTP float ptr [EBP + 0xfffffede]   ; 00411efa
    FSTP float ptr [EBP + 0xfffffee2]   ; 00411f00
    FSTP float ptr [EBP + 0xfffffee6]   ; 00411f06
    MOVSD ES:EDI,ESI                    ; 00411f0c
    MOVSD ES:EDI,ESI                    ; 00411f0d
    MOVSD ES:EDI,ESI                    ; 00411f0e
    PUSH EAX                            ; 00411f0f
    LEA ESI,[EBP + 0x3a]                ; 00411f10
    LEA EDI,[EBP + -0x7a]               ; 00411f13
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00411f16
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0x3a]                ; 00411f1b
    MOVSD ES:EDI,ESI                    ; 00411f1e
    MOVSD ES:EDI,ESI                    ; 00411f1f
    MOVSD ES:EDI,ESI                    ; 00411f20
    ADD ESP,0x4                         ; 00411f21
    FLD float ptr [EBP + -0x76]         ; 00411f24
    FSUB float ptr [EBX + 0x34]         ; 00411f27
    SUB ESP,0x4                         ; 00411f2a
    FSTP float ptr [ESP]                ; 00411f2d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00411f30
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00411f35
    FLD float ptr [EBP + 0x76]          ; 00411f38
    FABS                                ; 00411f3b
    ADD ESP,0x4                         ; 00411f3d
    FCOMP double ptr [0x005d3869]       ; 00411f40 | DAT_005d3869
    FNSTSW AX                           ; 00411f46
    SAHF                                ; 00411f48
    JNC 0x00411f95                      ; 00411f49
        ;   XREF to: 00411f95 (CONDITIONAL_JUMP)  ; LAB_00411f95
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00411f4b
    FLD float ptr [EAX + 0x24]          ; 00411f51
    FSUB float ptr [EBX + 0x24]         ; 00411f54
    FABS                                ; 00411f57
    FCOMP double ptr [0x005d3871]       ; 00411f59 | DAT_005d3871
    FNSTSW AX                           ; 00411f5f
    SAHF                                ; 00411f61
    JNC 0x00411f95                      ; 00411f62
        ;   XREF to: 00411f95 (CONDITIONAL_JUMP)  ; LAB_00411f95
    PUSH 0x1                            ; 00411f64
    PUSH 0x2                            ; 00411f66
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00411f68
    PUSH EDX                            ; 00411f6b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00411f6c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00411f71
    MOV ECX,dword ptr [EBX + 0xc2a8]    ; 00411f74
    PUSH ECX                            ; 00411f7a
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 00411f7b
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00411f85
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00411f8a
    TEST EAX,EAX                        ; 00411f8d
    JZ 0x00412088                       ; 00411f8f
        ;   XREF to: 00412088 (CONDITIONAL_JUMP)  ; LAB_00412088
    FLD float ptr [EBP + 0x5e]          ; 00411f95
        ;   Label: LAB_00411f95
    FCOMP float ptr [EBP + 0x5a]        ; 00411f98
    FNSTSW AX                           ; 00411f9b
    SAHF                                ; 00411f9d
    JA 0x0041205e                       ; 00411f9e
        ;   XREF to: 0041205e (CONDITIONAL_JUMP)  ; LAB_0041205e
    FLD float ptr [EBX + 0xc1e4]        ; 00411fa4
    FLDZ                                ; 00411faa
    FCOMPP                              ; 00411fac
    FNSTSW AX                           ; 00411fae
    SAHF                                ; 00411fb0
    JC 0x0041205e                       ; 00411fb1
        ;   XREF to: 0041205e (CONDITIONAL_JUMP)  ; LAB_0041205e
    LEA EDI,[EBP + 0x16]                ; 00411fb7
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00411fba
    LEA ESI,[EBP + -0x32]               ; 00411fc0
    LEA EDX,[EBX + 0x20]                ; 00411fc3
    FLD float ptr [EAX + 0x24]          ; 00411fc6
    FLD float ptr [EAX + 0x28]          ; 00411fc9
    FLD float ptr [EAX + 0x20]          ; 00411fcc
    LEA EAX,[EBP + 0x16]                ; 00411fcf
    FSUB float ptr [EDX]                ; 00411fd2
    FXCH ST2                            ; 00411fd4
    FSUB float ptr [EDX + 0x4]          ; 00411fd6
    FXCH                                ; 00411fd9
    FSUB float ptr [EDX + 0x8]          ; 00411fdb
    FXCH ST2                            ; 00411fde
    FSTP float ptr [EBP + -0x32]        ; 00411fe0
    FSTP float ptr [EBP + -0x2e]        ; 00411fe3
    FSTP float ptr [EBP + -0x2a]        ; 00411fe6
    MOVSD ES:EDI,ESI                    ; 00411fe9
    MOVSD ES:EDI,ESI                    ; 00411fea
    MOVSD ES:EDI,ESI                    ; 00411feb
    PUSH EAX                            ; 00411fec
    LEA ESI,[EBP + 0x46]                ; 00411fed
    LEA EDI,[EBP + 0xffffff62]          ; 00411ff0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00411ff6
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0x46]                ; 00411ffb
    MOVSD ES:EDI,ESI                    ; 00411ffe
    MOVSD ES:EDI,ESI                    ; 00411fff
    MOVSD ES:EDI,ESI                    ; 00412000
    ADD ESP,0x4                         ; 00412001
    FLD float ptr [EBP + 0xffffff66]    ; 00412004
    FSUB float ptr [EBX + 0x34]         ; 0041200a
    SUB ESP,0x4                         ; 0041200d
    FSTP float ptr [ESP]                ; 00412010
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00412013
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00412018
    FLD float ptr [EBP + 0x76]          ; 0041201b
    FABS                                ; 0041201e
    ADD ESP,0x4                         ; 00412020
    FCOMP double ptr [0x005d3869]       ; 00412023 | DAT_005d3869
    FNSTSW AX                           ; 00412029
    SAHF                                ; 0041202b
    JNC 0x0041205e                      ; 0041202c
        ;   XREF to: 0041205e (CONDITIONAL_JUMP)  ; LAB_0041205e
    PUSH 0x1                            ; 0041202e
    PUSH 0x3                            ; 00412030
    LEA EAX,[EBX + 0x158]               ; 00412032
    PUSH EAX                            ; 00412038
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00412039
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041203e
    MOV EDI,dword ptr [EBX + 0xc2a8]    ; 00412041
    PUSH EDI                            ; 00412047
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 00412048
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00412052
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00412057
    TEST EAX,EAX                        ; 0041205a
    JZ 0x004120bc                       ; 0041205c
        ;   XREF to: 004120bc (CONDITIONAL_JUMP)  ; LAB_004120bc
    FLD float ptr [EBP + 0x5e]          ; 0041205e
        ;   Label: LAB_0041205e
    FCOMP float ptr [EBX + 0xc1e0]      ; 00412061
    FNSTSW AX                           ; 00412067
    SAHF                                ; 00412069
    JBE 0x004116db                      ; 0041206a
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00412070
    PUSH 0x0                            ; 00412072
    LEA EAX,[EBX + 0x158]               ; 00412074
    PUSH EAX                            ; 0041207a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041207b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00412080
    JMP 0x004116db                      ; 00412083
        ;   XREF to: 004116db (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV ESI,dword ptr [EBX + 0xc2ac]    ; 00412088
        ;   Label: LAB_00412088
    PUSH ESI                            ; 0041208e
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0041208f
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00412094
    TEST EAX,EAX                        ; 00412097
    JNZ 0x00411f95                      ; 00412099
        ;   XREF to: 00411f95 (CONDITIONAL_JUMP)  ; LAB_00411f95
    PUSH 0x5d3836                       ; 0041209f | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004120a4
    PUSH EBX                            ; 004120aa
    CALL dword ptr [EAX + 0x2c]         ; 004120ab
    ADD ESP,0x8                         ; 004120ae
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 004120b1
    JMP 0x00411f95                      ; 004120b7
        ;   XREF to: 00411f95 (UNCONDITIONAL_JUMP)  ; LAB_00411f95
    MOV EAX,dword ptr [EBX + 0xc2ac]    ; 004120bc
        ;   Label: LAB_004120bc
    PUSH EAX                            ; 004120c2
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004120c3
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004120c8
    TEST EAX,EAX                        ; 004120cb
    JNZ 0x0041205e                      ; 004120cd
        ;   XREF to: 0041205e (CONDITIONAL_JUMP)  ; LAB_0041205e
    PUSH 0x5d3849                       ; 004120cf | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004120d4
    PUSH EBX                            ; 004120da
    CALL dword ptr [EAX + 0x2c]         ; 004120db
    ADD ESP,0x8                         ; 004120de
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 004120e1
    JMP 0x0041205e                      ; 004120e7
        ;   XREF to: 0041205e (UNCONDITIONAL_JUMP)  ; LAB_0041205e
    MOV EDX,dword ptr [EBP + 0x62]      ; 004120ec
        ;   Label: LAB_004120ec
    CMP EDX,0x8                         ; 004120ef
    JA 0x004116db                       ; 004120f2
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,EDX                         ; 004120f8
    JMP dword ptr [EAX*0x4 + 0x411584]  ; 004120fa | caseD_0 | caseD_1 | caseD_7
        ;   Label: switchD

