; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004ad640(CGabriella *this_ptr,float delta_time)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004ad62c = 004ae934
;   TerminatedCString s_s_confused_while_walking_005d6f0c
;   TerminatedCString s_flashlit_wav_005d6f36
;   TerminatedCString s_draw_f_wav_1_5_005d6f43
;   TerminatedCString s_undraw_s_wav_7_005d6f54
;   undefined4 DAT_005d6f67
;   undefined4 DAT_005d6f6b
;   undefined4 DAT_005d6f73
;   undefined4 DAT_005d6f7b
;   undefined4 DAT_005d6f83
;   undefined4 DAT_005d6f87
;   undefined4 DAT_005d6f8b
;   undefined4 DAT_005d6f8f
;   undefined4 DAT_005d6f93
;   undefined4 DAT_005d6f9b
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e600
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad640
        ;   Label: core_gabriela.cpp_CGabriella_process_FUN_004ad640
    PUSH ESI                            ; 004ad641
    PUSH EDI                            ; 004ad642
    PUSH EBP                            ; 004ad643
    MOV EBP,ESP                         ; 004ad644
    SUB ESP,0x2f4                       ; 004ad646
    SUB EBP,0x7a                        ; 004ad64c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004ad64f
    PUSH dword ptr [EBP + 0x92]         ; 004ad655
    PUSH EBX                            ; 004ad65b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004ad65c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ad661
    TEST EAX,EAX                        ; 004ad664
    JZ 0x004adf59                       ; 004ad666
        ;   XREF to: 004adf59 (CONDITIONAL_JUMP)  ; LAB_004adf59
    CMP dword ptr [EBX + 0x10a64],0x2   ; 004ad66c
    JZ 0x004adf61                       ; 004ad673
        ;   XREF to: 004adf61 (CONDITIONAL_JUMP)  ; LAB_004adf61
    FLD float ptr [EBX + 0x10a60]       ; 004ad679
        ;   Label: LAB_004ad679
    FSUB float ptr [EBP + 0x92]         ; 004ad67f
    FST float ptr [EBX + 0x10a60]       ; 004ad685
    FLDZ                                ; 004ad68b
    FCOMPP                              ; 004ad68d
    FNSTSW AX                           ; 004ad68f
    SAHF                                ; 004ad691
    JBE 0x004ad69e                      ; 004ad692
        ;   XREF to: 004ad69e (CONDITIONAL_JUMP)  ; LAB_004ad69e
    MOV dword ptr [EBX + 0x10a60],0x0   ; 004ad694
    PUSH EBX                            ; 004ad69e
        ;   Label: LAB_004ad69e
    LEA ESI,[EBP + 0xfffffe56]          ; 004ad69f
    LEA EDI,[EBP + 0xfffffe02]          ; 004ad6a5
    CALL core_gabriela.cpp_FUN_004af960 ; 004ad6ab
        ;   XREF to: 004af960 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004af960()
    ADD ESP,0x4                         ; 004ad6b0
    LEA EAX,[EBP + 0xfffffe02]          ; 004ad6b3
    LEA ESI,[EBP + 0xfffffe56]          ; 004ad6b9
    PUSH EAX                            ; 004ad6bf
    MOVSD ES:EDI,ESI                    ; 004ad6c0
    MOVSD ES:EDI,ESI                    ; 004ad6c1
    MOVSD ES:EDI,ESI                    ; 004ad6c2
    PUSH EBX                            ; 004ad6c3
    LEA ESI,[EBP + 0xfffffe32]          ; 004ad6c4
    LEA EDI,[EBP + 0xfffffdf6]          ; 004ad6ca
    CALL core_actor.cpp_FUN_00408d70    ; 004ad6d0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xfffffe32]          ; 004ad6d5
    ADD ESP,0x8                         ; 004ad6db
    LEA EAX,[EBX + 0x2508]              ; 004ad6de
    MOVSD ES:EDI,ESI                    ; 004ad6e4
    MOVSD ES:EDI,ESI                    ; 004ad6e5
    MOVSD ES:EDI,ESI                    ; 004ad6e6
    PUSH dword ptr [EBP + 0x92]         ; 004ad6e7
    MOV dword ptr [EAX + 0x8],0x0       ; 004ad6ed
    PUSH EBX                            ; 004ad6f4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ad6f5
    MOV dword ptr [EAX + 0x4],EDX       ; 004ad6f8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ad6fb
    MOV dword ptr [EAX],EDX             ; 004ad6fe
    CALL core_gabriela.cpp_FUN_004af410 ; 004ad700
        ;   XREF to: 004af410 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004af410()
    FLD float ptr [EBX + 0x25a8]        ; 004ad705
    FLDZ                                ; 004ad70b
    XOR ECX,ECX                         ; 004ad70d
    ADD ESP,0x8                         ; 004ad70f
    MOV dword ptr [EBP + 0x72],ECX      ; 004ad712
    FCOMPP                              ; 004ad715
    FNSTSW AX                           ; 004ad717
    SAHF                                ; 004ad719
    JC 0x004ad723                       ; 004ad71a
        ;   XREF to: 004ad723 (CONDITIONAL_JUMP)  ; LAB_004ad723
    MOV dword ptr [EBP + 0x72],0x1      ; 004ad71c
    CMP dword ptr [EBX + 0x276c],0x0    ; 004ad723
        ;   Label: LAB_004ad723
    JZ 0x004ad733                       ; 004ad72a
        ;   XREF to: 004ad733 (CONDITIONAL_JUMP)  ; LAB_004ad733
    MOV dword ptr [EBP + 0x72],0x1      ; 004ad72c
    CMP dword ptr [EBX + 0x2560c],0x0   ; 004ad733
        ;   Label: LAB_004ad733
    JZ 0x004ad743                       ; 004ad73a
        ;   XREF to: 004ad743 (CONDITIONAL_JUMP)  ; LAB_004ad743
    MOV dword ptr [EBP + 0x72],0x1      ; 004ad73c
    CMP dword ptr [EBX + 0x25614],0x0   ; 004ad743
        ;   Label: LAB_004ad743
    JZ 0x004ad753                       ; 004ad74a
        ;   XREF to: 004ad753 (CONDITIONAL_JUMP)  ; LAB_004ad753
    MOV dword ptr [EBP + 0x72],0x1      ; 004ad74c
    PUSH 0x8                            ; 004ad753
        ;   Label: LAB_004ad753
    LEA EAX,[EBX + 0x2b4]               ; 004ad755
    PUSH EAX                            ; 004ad75b
    CALL core_motion.cpp_FUN_005038a0   ; 004ad75c
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad761
    ADD ESP,0x8                         ; 004ad764
    FLD float ptr [EBP + 0x76]          ; 004ad767
    FLDZ                                ; 004ad76a
    FCOMPP                              ; 004ad76c
    FNSTSW AX                           ; 004ad76e
    SAHF                                ; 004ad770
    JNC 0x004ad77a                      ; 004ad771
        ;   XREF to: 004ad77a (CONDITIONAL_JUMP)  ; LAB_004ad77a
    MOV dword ptr [EBP + 0x72],0x1      ; 004ad773
    PUSH 0xb                            ; 004ad77a
        ;   Label: LAB_004ad77a
    LEA EAX,[EBX + 0x2b4]               ; 004ad77c
    PUSH EAX                            ; 004ad782
    CALL core_motion.cpp_FUN_005038a0   ; 004ad783
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad788
    ADD ESP,0x8                         ; 004ad78b
    FLD float ptr [EBP + 0x76]          ; 004ad78e
    FLDZ                                ; 004ad791
    FCOMPP                              ; 004ad793
    FNSTSW AX                           ; 004ad795
    SAHF                                ; 004ad797
    JNC 0x004ad7a1                      ; 004ad798
        ;   XREF to: 004ad7a1 (CONDITIONAL_JUMP)  ; LAB_004ad7a1
    MOV dword ptr [EBP + 0x72],0x1      ; 004ad79a
    PUSH 0xc                            ; 004ad7a1
        ;   Label: LAB_004ad7a1
    LEA EAX,[EBX + 0x2b4]               ; 004ad7a3
    PUSH EAX                            ; 004ad7a9
    CALL core_motion.cpp_FUN_005038a0   ; 004ad7aa
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad7af
    ADD ESP,0x8                         ; 004ad7b2
    FLD float ptr [EBP + 0x76]          ; 004ad7b5
    FLDZ                                ; 004ad7b8
    FCOMPP                              ; 004ad7ba
    FNSTSW AX                           ; 004ad7bc
    SAHF                                ; 004ad7be
    JNC 0x004ad7c8                      ; 004ad7bf
        ;   XREF to: 004ad7c8 (CONDITIONAL_JUMP)  ; LAB_004ad7c8
    MOV dword ptr [EBP + 0x72],0x1      ; 004ad7c1
    PUSH 0x12                           ; 004ad7c8
        ;   Label: LAB_004ad7c8
    LEA EAX,[EBX + 0x2b4]               ; 004ad7ca
    PUSH EAX                            ; 004ad7d0
    CALL core_motion.cpp_FUN_005038a0   ; 004ad7d1
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad7d6
    ADD ESP,0x8                         ; 004ad7d9
    FLD float ptr [EBP + 0x76]          ; 004ad7dc
    FLDZ                                ; 004ad7df
    FCOMPP                              ; 004ad7e1
    FNSTSW AX                           ; 004ad7e3
    SAHF                                ; 004ad7e5
    JNC 0x004ad7ef                      ; 004ad7e6
        ;   XREF to: 004ad7ef (CONDITIONAL_JUMP)  ; LAB_004ad7ef
    MOV dword ptr [EBP + 0x72],0x1      ; 004ad7e8
    MOV dword ptr [EBX + 0x2598],0x0    ; 004ad7ef
        ;   Label: LAB_004ad7ef
    MOV EAX,dword ptr [EBX + 0x2570]    ; 004ad7f9
    XOR EDI,EDI                         ; 004ad7ff
    MOV dword ptr [EBX + 0x2594],0x0    ; 004ad801
    MOV dword ptr [EBP + 0x6a],EDI      ; 004ad80b
    TEST EAX,EAX                        ; 004ad80e
    JZ 0x004ad8cf                       ; 004ad810
        ;   XREF to: 004ad8cf (CONDITIONAL_JUMP)  ; LAB_004ad8cf
    PUSH 0x1                            ; 004ad816
    LEA ESI,[EBX + 0x2b4]               ; 004ad818
    PUSH ESI                            ; 004ad81e
    CALL core_motion.cpp_FUN_005038a0   ; 004ad81f
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad824
    ADD ESP,0x8                         ; 004ad827
    FLD float ptr [EBP + 0x76]          ; 004ad82a
    FMUL float ptr [0x01cb0638]         ; 004ad82d | DAT_01cb0638
    PUSH 0x2                            ; 004ad833
    FADD float ptr [EBX + 0x2594]       ; 004ad835
    PUSH ESI                            ; 004ad83b
    FSTP float ptr [EBX + 0x2594]       ; 004ad83c
    CALL core_motion.cpp_FUN_005038a0   ; 004ad842
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad847
    ADD ESP,0x8                         ; 004ad84a
    FLD float ptr [EBP + 0x76]          ; 004ad84d
    FMUL float ptr [0x01cb063c]         ; 004ad850 | DAT_01cb063c
    PUSH 0x3                            ; 004ad856
    FADD float ptr [EBX + 0x2594]       ; 004ad858
    PUSH ESI                            ; 004ad85e
    FSTP float ptr [EBX + 0x2594]       ; 004ad85f
    CALL core_motion.cpp_FUN_005038a0   ; 004ad865
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad86a
    ADD ESP,0x8                         ; 004ad86d
    FLD float ptr [EBP + 0x76]          ; 004ad870
    FMUL float ptr [0x01cb0640]         ; 004ad873 | DAT_01cb0640
    PUSH 0x14                           ; 004ad879
    FSUBR float ptr [EBX + 0x2594]      ; 004ad87b
    PUSH ESI                            ; 004ad881
    FSTP float ptr [EBX + 0x2594]       ; 004ad882
    CALL core_motion.cpp_FUN_005038a0   ; 004ad888
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad88d
    ADD ESP,0x8                         ; 004ad890
    FLD float ptr [EBP + 0x76]          ; 004ad893
    FMUL float ptr [0x005f7368]         ; 004ad896 | DAT_005f7368
    PUSH 0x15                           ; 004ad89c
    FLDZ                                ; 004ad89e
    FSUBRP                              ; 004ad8a0
    PUSH ESI                            ; 004ad8a2
    FSTP float ptr [EBP + 0x6a]         ; 004ad8a3
    CALL core_motion.cpp_FUN_005038a0   ; 004ad8a6
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad8ab
    ADD ESP,0x8                         ; 004ad8ae
    FLD float ptr [EBP + 0x76]          ; 004ad8b1
    FMUL float ptr [0x005f7368]         ; 004ad8b4 | DAT_005f7368
    PUSH dword ptr [EBP + 0x92]         ; 004ad8ba
    FADD float ptr [EBP + 0x6a]         ; 004ad8c0
    PUSH EBX                            ; 004ad8c3
    FSTP float ptr [EBP + 0x6a]         ; 004ad8c4
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004ad8c7
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004ad8cc
    FLD float ptr [EBP + 0x92]          ; 004ad8cf
        ;   Label: LAB_004ad8cf
    FLD float ptr [EBX + 0x2594]        ; 004ad8d5
    FMUL ST1                            ; 004ad8db
    FLD float ptr [EBP + 0x6a]          ; 004ad8dd
    FMULP ST2                           ; 004ad8e0
    MOV EDX,dword ptr [EBX + 0x25614]   ; 004ad8e2
    FXCH                                ; 004ad8e8
    FSTP float ptr [EBP + 0x6a]         ; 004ad8ea
    FSTP float ptr [EBX + 0x2594]       ; 004ad8ed
    TEST EDX,EDX                        ; 004ad8f3
    JZ 0x004adf7c                       ; 004ad8f5
        ;   XREF to: 004adf7c (CONDITIONAL_JUMP)  ; LAB_004adf7c
    LEA EAX,[EDX + 0x430]               ; 004ad8fb
    PUSH EAX                            ; 004ad901
    PUSH EDX                            ; 004ad902
    LEA ESI,[EBP + 0xfffffee6]          ; 004ad903
    LEA EDI,[EBP + 0xffffff6a]          ; 004ad909
    CALL core_actor.cpp_FUN_00408d70    ; 004ad90f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xfffffee6]          ; 004ad914
    MOVSD ES:EDI,ESI                    ; 004ad91a
    MOVSD ES:EDI,ESI                    ; 004ad91b
    MOVSD ES:EDI,ESI                    ; 004ad91c
    ADD ESP,0x8                         ; 004ad91d
    FLD float ptr [EBX + 0x24]          ; 004ad920
    FCOMP float ptr [EBP + 0xffffff6e]  ; 004ad923
    FNSTSW AX                           ; 004ad929
    SAHF                                ; 004ad92b
    JBE 0x004ad9e7                      ; 004ad92c
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    MOV ECX,0x3f000000                  ; 004ad932
    MOV ESI,0x40800000                  ; 004ad937
    LEA EAX,[EBP + -0x4e]               ; 004ad93c
    LEA EDI,[EBP + 0xffffff76]          ; 004ad93f
    XOR EDX,EDX                         ; 004ad945
    MOV dword ptr [EBX + 0x25614],0x0   ; 004ad947
    PUSH EAX                            ; 004ad951
    MOV dword ptr [EBP + -0x4e],EDX     ; 004ad952
    MOV dword ptr [EBP + -0x46],ESI     ; 004ad955
    PUSH EBX                            ; 004ad958
    LEA ESI,[EBP + -0x36]               ; 004ad959
    MOV dword ptr [EBP + -0x4a],ECX     ; 004ad95c
    CALL core_actor.cpp_FUN_00408cf0    ; 004ad95f
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + -0x36]               ; 004ad964
    MOVSD ES:EDI,ESI                    ; 004ad967
    MOVSD ES:EDI,ESI                    ; 004ad968
    MOVSD ES:EDI,ESI                    ; 004ad969
    LEA ESI,[EBP + 0xffffff76]          ; 004ad96a
    LEA EAX,[EBX + 0x20]                ; 004ad970
    FLD float ptr [ESI]                 ; 004ad973
    FADD float ptr [EAX]                ; 004ad975
    FSTP float ptr [EAX]                ; 004ad977
    FLD float ptr [ESI + 0x4]           ; 004ad979
    FADD float ptr [EAX + 0x4]          ; 004ad97c
    ADD ESP,0x8                         ; 004ad97f
    FSTP float ptr [EAX + 0x4]          ; 004ad982
    FLD float ptr [ESI + 0x8]           ; 004ad985
    FADD float ptr [EAX + 0x8]          ; 004ad988
    PUSH 0x0                            ; 004ad98b
    FSTP float ptr [EAX + 0x8]          ; 004ad98d
    PUSH dword ptr [EBX + 0x3430]       ; 004ad990
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004ad996
    PUSH EBX                            ; 004ad99c
    CALL dword ptr [ESI + 0x48]         ; 004ad99d
    MOV dword ptr [EBP + 0x76],EAX      ; 004ad9a0
    MOV EAX,dword ptr [EBP + 0x76]      ; 004ad9a3
    MOV dword ptr [EBX + 0x2574],EAX    ; 004ad9a6
    FLD float ptr [EBX + 0x2574]        ; 004ad9ac
    FADD double ptr [0x005d6f93]        ; 004ad9b2 | DAT_005d6f93
    ADD ESP,0xc                         ; 004ad9b8
    FLD float ptr [EBX + 0x24]          ; 004ad9bb
    FCOMPP                              ; 004ad9be
    FNSTSW AX                           ; 004ad9c0
    SAHF                                ; 004ad9c2
    JNC 0x004adf75                      ; 004ad9c3
        ;   XREF to: 004adf75 (CONDITIONAL_JUMP)  ; LAB_004adf75
    MOV EAX,0x1                         ; 004ad9c9
    PUSH 0x1                            ; 004ad9ce
        ;   Label: LAB_004ad9ce
    PUSH 0x0                            ; 004ad9d0
    MOV dword ptr [EBX + 0x2570],EAX    ; 004ad9d2
    LEA EAX,[EBX + 0x2b4]               ; 004ad9d8
        ;   Label: LAB_004ad9d8
    PUSH EAX                            ; 004ad9de
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ad9df
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004ad9df
    ADD ESP,0xc                         ; 004ad9e4
        ;   Label: LAB_004ad9e4
    CMP dword ptr [EBX + 0x25614],0x0   ; 004ad9e7
        ;   Label: LAB_004ad9e7
    JZ 0x004ae5aa                       ; 004ad9ee
        ;   XREF to: 004ae5aa (CONDITIONAL_JUMP)  ; LAB_004ae5aa
    LEA EAX,[EBX + 0x2508]              ; 004ad9f4
    PUSH EAX                            ; 004ad9fa
    LEA ESI,[EBP + -0x2a]               ; 004ad9fb
    PUSH EBX                            ; 004ad9fe
    LEA EDI,[EBP + 0xffffff2e]          ; 004ad9ff
    MOV dword ptr [EBP + 0x76],EAX      ; 004ada05
    CALL core_actor.cpp_FUN_00408cf0    ; 004ada08
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + -0x2a]               ; 004ada0d
    LEA EAX,[EBX + 0x20]                ; 004ada10
    MOVSD ES:EDI,ESI                    ; 004ada13
    MOVSD ES:EDI,ESI                    ; 004ada14
    MOVSD ES:EDI,ESI                    ; 004ada15
    FLD float ptr [EAX]                 ; 004ada16
    FLD float ptr [EAX + 0x4]           ; 004ada18
    FLD float ptr [EAX + 0x8]           ; 004ada1b
    FXCH ST2                            ; 004ada1e
    FADD float ptr [EBP + 0xffffff2e]   ; 004ada20
    FXCH                                ; 004ada26
    FADD float ptr [EBP + 0xffffff32]   ; 004ada28
    FXCH ST2                            ; 004ada2e
    FADD float ptr [EBP + 0xffffff36]   ; 004ada30
    FXCH                                ; 004ada36
    FSTP float ptr [EAX]                ; 004ada38
    FXCH                                ; 004ada3a
    FSTP float ptr [EAX + 0x4]          ; 004ada3c
    FSTP float ptr [EAX + 0x8]          ; 004ada3f
    MOV EAX,dword ptr [EBP + 0x76]      ; 004ada42
    MOV dword ptr [EAX + 0x8],0x0       ; 004ada45
    ADD ESP,0x8                         ; 004ada4c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ada4f
    MOV dword ptr [EAX + 0x4],EDX       ; 004ada52
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ada55
    MOV dword ptr [EAX],EDX             ; 004ada58
    PUSH EBX                            ; 004ada5a
        ;   Label: LAB_004ada5a
    MOV ESI,dword ptr [EBP + 0x72]      ; 004ada5b
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 004ada5e
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ada63
    TEST ESI,ESI                        ; 004ada66
    JZ 0x004ae6f9                       ; 004ada68
        ;   XREF to: 004ae6f9 (CONDITIONAL_JUMP)  ; LAB_004ae6f9
    MOV EAX,[0x007bcc84]                ; 004ada6e | DAT_007bcc84
        ;   Label: LAB_004ada6e
    PUSH EAX                            ; 004ada73
    MOV EDX,dword ptr [EBX + 0x2620]    ; 004ada74
    PUSH EDX                            ; 004ada7a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ada7b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ada80
    MOV ESI,EAX                         ; 004ada83
    TEST EAX,EAX                        ; 004ada85
    JZ 0x004adb29                       ; 004ada87
        ;   XREF to: 004adb29 (CONDITIONAL_JUMP)  ; LAB_004adb29
    CMP dword ptr [EBX + 0x10a7c],0x0   ; 004ada8d
    JZ 0x004adaa0                       ; 004ada94
        ;   XREF to: 004adaa0 (CONDITIONAL_JUMP)  ; LAB_004adaa0
    CMP dword ptr [EBP + 0x72],0x0      ; 004ada96
    JZ 0x004ae74c                       ; 004ada9a
        ;   XREF to: 004ae74c (CONDITIONAL_JUMP)  ; LAB_004ae74c
    CMP dword ptr [ESI + 0x248c],0x0    ; 004adaa0
        ;   Label: LAB_004adaa0
    JZ 0x004adb29                       ; 004adaa7
        ;   XREF to: 004adb29 (CONDITIONAL_JUMP)  ; LAB_004adb29
    FLD float ptr [EBX + 0x10a94]       ; 004adaad
    FMUL float ptr [0x005d6f83]         ; 004adab3 | DAT_005d6f83
    FMUL double ptr [0x005d6f9b]        ; 004adab9 | DAT_005d6f9b
    FMUL float ptr [EBP + 0x92]         ; 004adabf
    FLD float ptr [EBX + 0x25654]       ; 004adac5
    FXCH                                ; 004adacb
    FADD ST0,ST1                        ; 004adacd
    PUSH EBX                            ; 004adacf
    FSTP ST1                            ; 004adad0
    FSTP float ptr [EBX + 0x25654]      ; 004adad2
    CALL core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004af900 ; 004adad8
        ;   XREF to: 004af900 (UNCONDITIONAL_CALL)  ; float core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(CGabriella * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004adadd
    ADD ESP,0x4                         ; 004adae0
    FLD float ptr [EBP + 0x76]          ; 004adae3
    PUSH EBX                            ; 004adae6
    FSTP float ptr [EBP + 0x46]         ; 004adae7
    CALL core_gabriela.cpp_CGabriella_getFlashlightMaxAngle_FUN_004af950 ; 004adaea
        ;   XREF to: 004af950 (UNCONDITIONAL_CALL)  ; float core_gabriela.cpp_CGabriella_getFlashlightMaxAngle_FUN_004af950(CGabriella * this_ptr)
    FLD float ptr [EBX + 0x25654]       ; 004adaef
    MOV dword ptr [EBP + 0x76],EAX      ; 004adaf5
    ADD ESP,0x4                         ; 004adaf8
    MOV EAX,dword ptr [EBP + 0x76]      ; 004adafb
    MOV dword ptr [EBP + 0x42],EAX      ; 004adafe
    FCOMP float ptr [EBP + 0x46]        ; 004adb01
    FNSTSW AX                           ; 004adb04
    SAHF                                ; 004adb06
    JNC 0x004adb12                      ; 004adb07
        ;   XREF to: 004adb12 (CONDITIONAL_JUMP)  ; LAB_004adb12
    MOV EAX,dword ptr [EBP + 0x46]      ; 004adb09
    MOV dword ptr [EBX + 0x25654],EAX   ; 004adb0c
    FLD float ptr [EBX + 0x25654]       ; 004adb12
        ;   Label: LAB_004adb12
    FCOMP float ptr [EBP + 0x42]        ; 004adb18
    FNSTSW AX                           ; 004adb1b
    SAHF                                ; 004adb1d
    JBE 0x004adb29                      ; 004adb1e
        ;   XREF to: 004adb29 (CONDITIONAL_JUMP)  ; LAB_004adb29
    MOV EAX,dword ptr [EBP + 0x42]      ; 004adb20
    MOV dword ptr [EBX + 0x25654],EAX   ; 004adb23
    TEST byte ptr [EBX + 0x25640],0x1   ; 004adb29
        ;   Label: LAB_004adb29
    JZ 0x004ae787                       ; 004adb30
        ;   XREF to: 004ae787 (CONDITIONAL_JUMP)  ; LAB_004ae787
    FLD float ptr [EBP + 0x92]          ; 004adb36
    FDIV float ptr [0x005f7328]         ; 004adb3c | DAT_005f7328
    FADD float ptr [EBX + 0x25644]      ; 004adb42
    FST float ptr [EBX + 0x25644]       ; 004adb48
    FLD1                                ; 004adb4e
    FCOMPP                              ; 004adb50
    FNSTSW AX                           ; 004adb52
    SAHF                                ; 004adb54
    JNC 0x004adb61                      ; 004adb55
        ;   XREF to: 004adb61 (CONDITIONAL_JUMP)  ; LAB_004adb61
    MOV dword ptr [EBX + 0x25644],0x3f800000 ; 004adb57
    TEST byte ptr [EBX + 0x25640],0x2   ; 004adb61
        ;   Label: LAB_004adb61
    JZ 0x004ae7bb                       ; 004adb68
        ;   XREF to: 004ae7bb (CONDITIONAL_JUMP)  ; LAB_004ae7bb
    FLD float ptr [EBP + 0x92]          ; 004adb6e
    FDIV float ptr [0x005f7328]         ; 004adb74 | DAT_005f7328
    MOV EAX,dword ptr [EBX + 0x25648]   ; 004adb7a
    MOV dword ptr [EBP + 0x4e],EAX      ; 004adb80
    FADD float ptr [EBP + 0x4e]         ; 004adb83
    FST float ptr [EBX + 0x25648]       ; 004adb86
    FLD1                                ; 004adb8c
    FCOMPP                              ; 004adb8e
    FNSTSW AX                           ; 004adb90
    SAHF                                ; 004adb92
    JNC 0x004adb9f                      ; 004adb93
        ;   XREF to: 004adb9f (CONDITIONAL_JUMP)  ; LAB_004adb9f
    MOV dword ptr [EBX + 0x25648],0x3f800000 ; 004adb95
    FLD float ptr [0x005f7334]          ; 004adb9f | DAT_005f7334
        ;   Label: LAB_004adb9f
    FADD double ptr [0x005d6fab]        ; 004adba5 | DAT_005d6fab
    FLD float ptr [EBP + 0x4e]          ; 004adbab
    FXCH                                ; 004adbae
    FSTP float ptr [EBP + 0x3a]         ; 004adbb0
    FCOMP float ptr [EBP + 0x3a]        ; 004adbb3
    FNSTSW AX                           ; 004adbb6
    SAHF                                ; 004adbb8
    JA 0x004adbe9                       ; 004adbb9
        ;   XREF to: 004adbe9 (CONDITIONAL_JUMP)  ; LAB_004adbe9
    FLD float ptr [EBX + 0x25648]       ; 004adbbb
    FCOMP float ptr [EBP + 0x3a]        ; 004adbc1
    FNSTSW AX                           ; 004adbc4
    SAHF                                ; 004adbc6
    JBE 0x004adbe9                      ; 004adbc7
        ;   XREF to: 004adbe9 (CONDITIONAL_JUMP)  ; LAB_004adbe9
    MOV EAX,[0x00616494]                ; 004adbc9 | g_CGamePtr
    PUSH EAX                            ; 004adbce | g_CGameInstance
    CALL core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890 ; 004adbcf
        ;   XREF to: 004bb890 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890(CGame * this_ptr)
    ADD ESP,0x4                         ; 004adbd4
    PUSH 0x5d6f43                       ; 004adbd7 | = "draw-f.wav @ 1.5"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004adbdc
        ;   Label: LAB_004adbdc
    PUSH EBX                            ; 004adbe2
    CALL dword ptr [EAX + 0x34]         ; 004adbe3
    ADD ESP,0x8                         ; 004adbe6
    TEST byte ptr [EBX + 0x25640],0x3   ; 004adbe9
        ;   Label: LAB_004adbe9
    JZ 0x004ae828                       ; 004adbf0
        ;   XREF to: 004ae828 (CONDITIONAL_JUMP)  ; LAB_004ae828
    FLD float ptr [EBP + 0x92]          ; 004adbf6
    FDIV float ptr [0x005f7328]         ; 004adbfc | DAT_005f7328
    FADD float ptr [EBX + 0x2564c]      ; 004adc02
    FST float ptr [EBX + 0x2564c]       ; 004adc08
    FLD1                                ; 004adc0e
    FCOMPP                              ; 004adc10
    FNSTSW AX                           ; 004adc12
    SAHF                                ; 004adc14
    JNC 0x004adc21                      ; 004adc15
        ;   XREF to: 004adc21 (CONDITIONAL_JUMP)  ; LAB_004adc21
    MOV dword ptr [EBX + 0x2564c],0x3f800000 ; 004adc17
    CMP dword ptr [EBP + 0x72],0x0      ; 004adc21
        ;   Label: LAB_004adc21
    JZ 0x004ae85c                       ; 004adc25
        ;   XREF to: 004ae85c (CONDITIONAL_JUMP)  ; LAB_004ae85c
    FLD float ptr [EBP + 0x92]          ; 004adc2b
    FDIV float ptr [0x005f732c]         ; 004adc31 | DAT_005f732c
    FMUL double ptr [0x005d6f6b]        ; 004adc37 | DAT_005d6f6b
    FSUBR float ptr [EBX + 0x25650]     ; 004adc3d
        ;   Label: LAB_004adc3d
    FSTP float ptr [EBX + 0x25650]      ; 004adc43
        ;   Label: LAB_004adc43
    FLD float ptr [EBX + 0x25650]       ; 004adc49
    FLDZ                                ; 004adc4f
    FCOMPP                              ; 004adc51
    FNSTSW AX                           ; 004adc53
    SAHF                                ; 004adc55
    JBE 0x004adc62                      ; 004adc56
        ;   XREF to: 004adc62 (CONDITIONAL_JUMP)  ; LAB_004adc62
    MOV dword ptr [EBX + 0x25650],0x0   ; 004adc58
    FLD float ptr [EBX + 0x25650]       ; 004adc62
        ;   Label: LAB_004adc62
    FCOMP double ptr [0x005d6fb3]       ; 004adc68 | DAT_005d6fb3
    FNSTSW AX                           ; 004adc6e
    SAHF                                ; 004adc70
    JBE 0x004adc7d                      ; 004adc71
        ;   XREF to: 004adc7d (CONDITIONAL_JUMP)  ; LAB_004adc7d
    MOV dword ptr [EBX + 0x25650],0x3f666666 ; 004adc73
    MOV ESI,dword ptr [EBP + 0x72]      ; 004adc7d
        ;   Label: LAB_004adc7d
    PUSH ESI                            ; 004adc80
    PUSH dword ptr [EBP + 0x92]         ; 004adc81
    PUSH EBX                            ; 004adc87
    CALL core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004b1530 ; 004adc88
        ;   XREF to: 004b1530 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004b1530(CGabriella * this_ptr, float delta_time, int is_holstering)
    FLD float ptr [EBP + 0x92]          ; 004adc8d
    FDIV float ptr [0x005f733c]         ; 004adc93 | DAT_005f733c
    FSUBR float ptr [EBX + 0x25678]     ; 004adc99
    ADD ESP,0xc                         ; 004adc9f
    FST float ptr [EBX + 0x25678]       ; 004adca2
    FLDZ                                ; 004adca8
    FCOMPP                              ; 004adcaa
    FNSTSW AX                           ; 004adcac
    SAHF                                ; 004adcae
    JC 0x004adcc3                       ; 004adcaf
        ;   XREF to: 004adcc3 (CONDITIONAL_JUMP)  ; LAB_004adcc3
    MOV dword ptr [EBX + 0x25678],0x0   ; 004adcb1
    TEST ESI,ESI                        ; 004adcbb
    JZ 0x004ae8a8                       ; 004adcbd
        ;   XREF to: 004ae8a8 (CONDITIONAL_JUMP)  ; LAB_004ae8a8
    PUSH EBX                            ; 004adcc3
        ;   Label: LAB_004adcc3
    MOV ESI,dword ptr [EBP + 0x72]      ; 004adcc4
    CALL core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20 ; 004adcc7
        ;   XREF to: 004afa20 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004adccc
    TEST ESI,ESI                        ; 004adccf
    SETZ AL                             ; 004adcd1
    AND EAX,0xff                        ; 004adcd4
    PUSH EAX                            ; 004adcd9
    PUSH dword ptr [EBP + 0x92]         ; 004adcda
    PUSH EBX                            ; 004adce0
    CALL core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004b1e00 ; 004adce1
        ;   XREF to: 004b1e00 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004b1e00(CGabriella * this_ptr, float delta_time, int has_carried_objects)
    ADD ESP,0xc                         ; 004adce6
    PUSH dword ptr [EBP + 0x92]         ; 004adce9
    PUSH EBX                            ; 004adcef
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 004adcf0
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004adcf5
    PUSH 0xd                            ; 004adcf8
    LEA ESI,[EBX + 0x2b4]               ; 004adcfa
    PUSH ESI                            ; 004add00
    CALL core_motion.cpp_FUN_005038a0   ; 004add01
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004add06
    ADD ESP,0x8                         ; 004add09
    FLD float ptr [EBP + 0x76]          ; 004add0c
    FLDZ                                ; 004add0f
    FCOMPP                              ; 004add11
    FNSTSW AX                           ; 004add13
    SAHF                                ; 004add15
    JNC 0x004ae99b                      ; 004add16
        ;   XREF to: 004ae99b (CONDITIONAL_JUMP)  ; LAB_004ae99b
    PUSH ESI                            ; 004add1c
    CALL core_motion.cpp_FUN_00503e60   ; 004add1d
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004add22
    ADD ESP,0x4                         ; 004add25
    FLD float ptr [EBP + 0x76]          ; 004add28
    FLD1                                ; 004add2b
    FCOMPP                              ; 004add2d
    FNSTSW AX                           ; 004add2f
    SAHF                                ; 004add31
    JNC 0x004ade29                      ; 004add32
        ;   XREF to: 004ade29 (CONDITIONAL_JUMP)  ; LAB_004ade29
    MOV EDI,dword ptr [0x007bc9e8]      ; 004add38 | g_CBoxActorClassInfo.name_hash
    PUSH EDI                            ; 004add3e
    MOV EAX,dword ptr [EBX + 0x2560c]   ; 004add3f
    PUSH EAX                            ; 004add45
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004add46
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [EBP + 0x52],EAX      ; 004add4b
    ADD ESP,0x8                         ; 004add4e
    TEST EAX,EAX                        ; 004add51
    JZ 0x004ade29                       ; 004add53
        ;   XREF to: 004ade29 (CONDITIONAL_JUMP)  ; LAB_004ade29
    PUSH EBX                            ; 004add59
    LEA ESI,[EBP + 0xfffffe1a]          ; 004add5a
    LEA EDI,[EBP + 0xfffffdea]          ; 004add60
    CALL core_gabriela.cpp_FUN_004af960 ; 004add66
        ;   XREF to: 004af960 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004af960()
    ADD ESP,0x4                         ; 004add6b
    LEA EAX,[EBP + 0xfffffdea]          ; 004add6e
    LEA ESI,[EBP + 0xfffffe1a]          ; 004add74
    PUSH EAX                            ; 004add7a
    MOVSD ES:EDI,ESI                    ; 004add7b
    MOVSD ES:EDI,ESI                    ; 004add7c
    MOVSD ES:EDI,ESI                    ; 004add7d
    PUSH EBX                            ; 004add7e
    LEA ESI,[EBP + -0x7e]               ; 004add7f
    LEA EDI,[EBP + 0xfffffe9e]          ; 004add82
    CALL core_actor.cpp_FUN_00408d70    ; 004add88
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + -0x7e]               ; 004add8d
    LEA EAX,[EBP + -0x66]               ; 004add90
    ADD ESP,0x8                         ; 004add93
    XOR ECX,ECX                         ; 004add96
    MOVSD ES:EDI,ESI                    ; 004add98
    MOVSD ES:EDI,ESI                    ; 004add99
    MOVSD ES:EDI,ESI                    ; 004add9a
    PUSH EAX                            ; 004add9b
    FLD float ptr [EBP + 0xfffffe9e]    ; 004add9c
    FLD float ptr [EBP + 0xfffffea2]    ; 004adda2
    FLD float ptr [EBP + 0xfffffea6]    ; 004adda8
    LEA EDI,[EBP + -0x66]               ; 004addae
    LEA ESI,[EBP + 0xffffff3a]          ; 004addb1
    FXCH ST2                            ; 004addb7
    FSUB float ptr [EBP + 0xfffffdf6]   ; 004addb9
    FXCH                                ; 004addbf
    FSUB float ptr [EBP + 0xfffffdfa]   ; 004addc1
    FXCH ST2                            ; 004addc7
    FSUB float ptr [EBP + 0xfffffdfe]   ; 004addc9
    FXCH                                ; 004addcf
    FSTP float ptr [EBP + 0xffffff3a]   ; 004addd1
    FXCH                                ; 004addd7
    FSTP float ptr [EBP + 0xffffff3e]   ; 004addd9
    FSTP float ptr [EBP + 0xffffff42]   ; 004adddf
    MOVSD ES:EDI,ESI                    ; 004adde5
    MOVSD ES:EDI,ESI                    ; 004adde6
    MOVSD ES:EDI,ESI                    ; 004adde7
    PUSH EBX                            ; 004adde8
    LEA ESI,[EBP + -0x1e]               ; 004adde9
    LEA EDI,[EBP + 0xffffff16]          ; 004addec
    MOV dword ptr [EBP + -0x62],ECX     ; 004addf2
    CALL core_actor.cpp_FUN_00408d30    ; 004addf5
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[EBP + -0x1e]               ; 004addfa
    MOVSD ES:EDI,ESI                    ; 004addfd
    MOVSD ES:EDI,ESI                    ; 004addfe
    MOVSD ES:EDI,ESI                    ; 004addff
    ADD ESP,0x8                         ; 004ade00
    FLD float ptr [EBP + 0xffffff1e]    ; 004ade03
    FLDZ                                ; 004ade09
    FCOMPP                              ; 004ade0b
    FNSTSW AX                           ; 004ade0d
    SAHF                                ; 004ade0f
    JNC 0x004ade29                      ; 004ade10
        ;   XREF to: 004ade29 (CONDITIONAL_JUMP)  ; LAB_004ade29
    LEA EAX,[EBP + -0x66]               ; 004ade12
    PUSH EAX                            ; 004ade15
    LEA EAX,[EBP + 0xfffffdf6]          ; 004ade16
    PUSH EAX                            ; 004ade1c
    MOV ESI,dword ptr [EBP + 0x52]      ; 004ade1d
    PUSH ESI                            ; 004ade20
    CALL core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40 ; 004ade21
        ;   XREF to: 0041cb40 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40(CBoxActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    ADD ESP,0xc                         ; 004ade26
    PUSH dword ptr [EBP + 0x92]         ; 004ade29
        ;   Label: LAB_004ade29
    PUSH EBX                            ; 004ade2f
    CALL core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004b0210 ; 004ade30
        ;   XREF to: 004b0210 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004b0210(CGabriella * this_ptr, float delta_time)
    MOV EDI,dword ptr [EBX + 0x25658]   ; 004ade35
    ADD ESP,0x8                         ; 004ade3b
    CMP EDI,0x3                         ; 004ade3e
    JNZ 0x004aeab5                      ; 004ade41
        ;   XREF to: 004aeab5 (CONDITIONAL_JUMP)  ; LAB_004aeab5
    MOV EAX,[0x01c225d8]                ; 004ade47 | g_CDynamiteClassInfo.name_hash
    PUSH EAX                            ; 004ade4c
    LEA EAX,[EBX + 0x2437c]             ; 004ade4d
    MOV ESI,dword ptr [EAX + 0x468]     ; 004ade53
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x610] ; 004ade59
    PUSH EAX                            ; 004ade60
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ade61
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ade66
    MOV dword ptr [EBP + 0x2e],EAX      ; 004ade69
    TEST EAX,EAX                        ; 004ade6c
    JNZ 0x004ae9a9                      ; 004ade6e
        ;   XREF to: 004ae9a9 (CONDITIONAL_JUMP)  ; LAB_004ae9a9
    MOV dword ptr [EBX + 0x25658],0x2   ; 004ade74
    FLD float ptr [0x005f736c]          ; 004ade7e | DAT_005f736c
        ;   Label: LAB_004ade7e
    PUSH EBX                            ; 004ade84
    FSTP float ptr [EBX + 0x601b0]      ; 004ade85
    CALL core_gabriela.cpp_CGabriella_canFireWeapon_FUN_004b0e80 ; 004ade8b
        ;   XREF to: 004b0e80 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_CGabriella_canFireWeapon_FUN_004b0e80(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004ade90
    TEST EAX,EAX                        ; 004ade93
    JZ 0x004aeac2                       ; 004ade95
        ;   XREF to: 004aeac2 (CONDITIONAL_JUMP)  ; LAB_004aeac2
    MOV dword ptr [EBX + 0x25658],0x1   ; 004ade9b
    PUSH EBX                            ; 004adea5
        ;   Label: LAB_004adea5
    MOV dword ptr [EBX + 0x25658],0x0   ; 004adea6
    CALL core_gabriela.cpp_FUN_004b0ef0 ; 004adeb0
        ;   XREF to: 004b0ef0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004b0ef0()
    LEA EAX,[EBX + 0x2437c]             ; 004adeb5
    MOV ESI,dword ptr [EAX + 0x468]     ; 004adebb
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x610] ; 004adec1
    MOV ESI,dword ptr [EAX + 0x448]     ; 004adec8
    ADD ESP,0x4                         ; 004adece
    TEST ESI,ESI                        ; 004aded1
    JZ 0x004aeae3                       ; 004aded3
        ;   XREF to: 004aeae3 (CONDITIONAL_JUMP)  ; LAB_004aeae3
    PUSH EBX                            ; 004aded9
        ;   Label: LAB_004aded9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004adeda
    CALL dword ptr [EAX + 0x114]        ; 004adee0
    ADD ESP,0x4                         ; 004adee6
    CMP EAX,0x2                         ; 004adee9
    JZ 0x004adf18                       ; 004adeec
        ;   XREF to: 004adf18 (CONDITIONAL_JUMP)  ; LAB_004adf18
    LEA EAX,[EBX + 0x2b4]               ; 004adeee
    PUSH EAX                            ; 004adef4
    PUSH dword ptr [EBX + 0x2574]       ; 004adef5
    LEA EAX,[EBX + 0x30]                ; 004adefb
    PUSH dword ptr [EBP + 0x92]         ; 004adefe
    PUSH EAX                            ; 004adf04
    LEA EAX,[EBX + 0x20]                ; 004adf05
    PUSH EAX                            ; 004adf08
    LEA EAX,[EBX + 0x25680]             ; 004adf09
    PUSH EAX                            ; 004adf0f
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 004adf10
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 004adf15
    LEA ESI,[EBX + 0x2437c]             ; 004adf18
        ;   Label: LAB_004adf18
    MOV EAX,dword ptr [ESI + 0x468]     ; 004adf1e
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x610] ; 004adf24
    PUSH dword ptr [EBP + 0x92]         ; 004adf2b
    PUSH EAX                            ; 004adf31
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 004adf32
    CALL dword ptr [EDI + 0x14]         ; 004adf38
    MOV EAX,dword ptr [ESI + 0x468]     ; 004adf3b
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x610] ; 004adf41
    MOV EDI,dword ptr [EAX + 0xfc]      ; 004adf48
    ADD ESP,0x8                         ; 004adf4e
    TEST EDI,EDI                        ; 004adf51
    JNZ 0x004aeaee                      ; 004adf53
        ;   XREF to: 004aeaee (CONDITIONAL_JUMP)  ; LAB_004aeaee
    LEA ESP,[EBP + 0x7a]                ; 004adf59
        ;   Label: LAB_004adf59
    POP EBP                             ; 004adf5c
    POP EDI                             ; 004adf5d
    POP ESI                             ; 004adf5e
    POP EBX                             ; 004adf5f
    RET                                 ; 004adf60
    PUSH dword ptr [EBP + 0x92]         ; 004adf61
        ;   Label: LAB_004adf61
    PUSH EBX                            ; 004adf67
    CALL core_gabriela.cpp_FUN_004aeb00 ; 004adf68
        ;   XREF to: 004aeb00 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004aeb00()
    ADD ESP,0x8                         ; 004adf6d
    JMP 0x004ad679                      ; 004adf70
        ;   XREF to: 004ad679 (UNCONDITIONAL_JUMP)  ; LAB_004ad679
    XOR EAX,EAX                         ; 004adf75
        ;   Label: LAB_004adf75
    JMP 0x004ad9ce                      ; 004adf77
        ;   XREF to: 004ad9ce (UNCONDITIONAL_JUMP)  ; LAB_004ad9ce
    MOV ECX,dword ptr [EBX + 0x276c]    ; 004adf7c
        ;   Label: LAB_004adf7c
    TEST ECX,ECX                        ; 004adf82
    JZ 0x004ae0f5                       ; 004adf84
        ;   XREF to: 004ae0f5 (CONDITIONAL_JUMP)  ; LAB_004ae0f5
    CMP dword ptr [EBX + 0x2770],0x0    ; 004adf8a
    JNZ 0x004ae06c                      ; 004adf91
        ;   XREF to: 004ae06c (CONDITIONAL_JUMP)  ; LAB_004ae06c
    LEA EAX,[ECX + 0x20]                ; 004adf97
    PUSH EAX                            ; 004adf9a
    PUSH EBX                            ; 004adf9b
    LEA ESI,[EBP + 0xfffffe3e]          ; 004adf9c
    LEA EDI,[EBP + 0x6]                 ; 004adfa2
    CALL core_actor.cpp_FUN_00408de0    ; 004adfa5
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xfffffe3e]          ; 004adfaa
    LEA EAX,[EBP + 0x6]                 ; 004adfb0
    ADD ESP,0x8                         ; 004adfb3
    MOVSD ES:EDI,ESI                    ; 004adfb6
    MOVSD ES:EDI,ESI                    ; 004adfb7
    MOVSD ES:EDI,ESI                    ; 004adfb8
    PUSH EAX                            ; 004adfb9
    LEA ESI,[EBP + 0xffffff0a]          ; 004adfba
    LEA EDI,[EBP + 0xfffffe0e]          ; 004adfc0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004adfc6
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xffffff0a]          ; 004adfcb
    ADD ESP,0x4                         ; 004adfd1
    MOVSD ES:EDI,ESI                    ; 004adfd4
    MOVSD ES:EDI,ESI                    ; 004adfd5
    MOVSD ES:EDI,ESI                    ; 004adfd6
    PUSH dword ptr [EBP + 0xfffffe12]   ; 004adfd7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004adfdd
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004adfe2
    ADD ESP,0x4                         ; 004adfe5
    MOV EAX,dword ptr [EBP + 0x76]      ; 004adfe8
    MOV dword ptr [EBP + 0x6e],EAX      ; 004adfeb
    FLD float ptr [EBP + 0x6e]          ; 004adfee
    FCOMP float ptr [0x005d6f87]        ; 004adff1 | DAT_005d6f87
    FNSTSW AX                           ; 004adff7
    SAHF                                ; 004adff9
    JNC 0x004ae008                      ; 004adffa
        ;   XREF to: 004ae008 (CONDITIONAL_JUMP)  ; LAB_004ae008
    FLD float ptr [EBP + 0x6e]          ; 004adffc
    FADD float ptr [0x005d6f83]         ; 004adfff | DAT_005d6f83
    FSTP float ptr [EBP + 0x6e]         ; 004ae005
    FLD float ptr [EBP + 0x6e]          ; 004ae008
        ;   Label: LAB_004ae008
    FCOMP float ptr [0x005d6f8b]        ; 004ae00b | DAT_005d6f8b
    FNSTSW AX                           ; 004ae011
    SAHF                                ; 004ae013
    JBE 0x004ae022                      ; 004ae014
        ;   XREF to: 004ae022 (CONDITIONAL_JUMP)  ; LAB_004ae022
    FLD float ptr [EBP + 0x6e]          ; 004ae016
    FADD float ptr [0x005d6f8f]         ; 004ae019 | DAT_005d6f8f
    FSTP float ptr [EBP + 0x6e]         ; 004ae01f
    FLD float ptr [EBP + 0x92]          ; 004ae022
        ;   Label: LAB_004ae022
    FMUL float ptr [0x005d6f83]         ; 004ae028 | DAT_005d6f83
    FLD float ptr [EBP + 0x6e]          ; 004ae02e
    FXCH                                ; 004ae031
    FST float ptr [EBP + 0x5e]          ; 004ae033
    FCHS                                ; 004ae036
    FSTP float ptr [EBP + 0x3e]         ; 004ae038
    FCOMP float ptr [EBP + 0x3e]        ; 004ae03b
    FNSTSW AX                           ; 004ae03e
    SAHF                                ; 004ae040
    JNC 0x004ae049                      ; 004ae041
        ;   XREF to: 004ae049 (CONDITIONAL_JUMP)  ; LAB_004ae049
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004ae043
    MOV dword ptr [EBP + 0x6e],EAX      ; 004ae046
    FLD float ptr [EBP + 0x6e]          ; 004ae049
        ;   Label: LAB_004ae049
    FCOMP float ptr [EBP + 0x5e]        ; 004ae04c
    FNSTSW AX                           ; 004ae04f
    SAHF                                ; 004ae051
    JBE 0x004ae05a                      ; 004ae052
        ;   XREF to: 004ae05a (CONDITIONAL_JUMP)  ; LAB_004ae05a
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004ae054
    MOV dword ptr [EBP + 0x6e],EAX      ; 004ae057
    FLD float ptr [EBX + 0x34]          ; 004ae05a
        ;   Label: LAB_004ae05a
    FADD float ptr [EBP + 0x6e]         ; 004ae05d
    PUSH EBX                            ; 004ae060
    FSTP float ptr [EBX + 0x34]         ; 004ae061
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 004ae064
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ae069
    MOV EAX,dword ptr [EBX + 0x276c]    ; 004ae06c
        ;   Label: LAB_004ae06c
    MOV dword ptr [EBP + 0x5a],EAX      ; 004ae072
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004ae075
    PUSH 0x0                            ; 004ae07b
    MOV dword ptr [EBP + 0x76],EAX      ; 004ae07d
    LEA EAX,[EBX + 0x2b4]               ; 004ae080
    PUSH EAX                            ; 004ae086
    LEA ESI,[EBP + 0xfffffe7a]          ; 004ae087
    MOV dword ptr [EBP + 0x36],EAX      ; 004ae08d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004ae090
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004ae095
    LEA EAX,[EBP + 0xffffff46]          ; 004ae098
    PUSH EAX                            ; 004ae09e
    LEA EDI,[EBP + 0xffffff46]          ; 004ae09f
    LEA ESI,[EBP + 0xfffffe7a]          ; 004ae0a5
    PUSH EBX                            ; 004ae0ab
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004ae0ac
    MOV EAX,dword ptr [EBP + 0x76]      ; 004ae0af
    PUSH EDX                            ; 004ae0b2
    MOVSD ES:EDI,ESI                    ; 004ae0b3
    MOVSD ES:EDI,ESI                    ; 004ae0b4
    MOVSD ES:EDI,ESI                    ; 004ae0b5
    CALL dword ptr [EAX + 0x118]        ; 004ae0b6
    ADD ESP,0xc                         ; 004ae0bc
    TEST EAX,EAX                        ; 004ae0bf
    JZ 0x004ae0e6                       ; 004ae0c1
        ;   XREF to: 004ae0e6 (CONDITIONAL_JUMP)  ; LAB_004ae0e6
    CMP dword ptr [EBX + 0x276c],0x0    ; 004ae0c3
    JZ 0x004ae0ec                       ; 004ae0ca
        ;   XREF to: 004ae0ec (CONDITIONAL_JUMP)  ; LAB_004ae0ec
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004ae0cc
    JZ 0x004ad9e7                       ; 004ae0d3
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    PUSH 0x1                            ; 004ae0d9
    PUSH 0x7                            ; 004ae0db
    MOV EDI,dword ptr [EBP + 0x36]      ; 004ae0dd
    PUSH EDI                            ; 004ae0e0
    JMP 0x004ad9df                      ; 004ae0e1
        ;   XREF to: 004ad9df (UNCONDITIONAL_JUMP)  ; LAB_004ad9df
    MOV dword ptr [EBX + 0x276c],EAX    ; 004ae0e6
        ;   Label: LAB_004ae0e6
    PUSH 0x1                            ; 004ae0ec
        ;   Label: LAB_004ae0ec
    PUSH 0x0                            ; 004ae0ee
    JMP 0x004ad9d8                      ; 004ae0f0
        ;   XREF to: 004ad9d8 (UNCONDITIONAL_JUMP)  ; LAB_004ad9d8
    MOV ESI,dword ptr [EBX + 0x2560c]   ; 004ae0f5
        ;   Label: LAB_004ae0f5
    TEST ESI,ESI                        ; 004ae0fb
    JZ 0x004ae3a6                       ; 004ae0fd
        ;   XREF to: 004ae3a6 (CONDITIONAL_JUMP)  ; LAB_004ae3a6
    MOV EAX,dword ptr [EBX + 0x10a74]   ; 004ae103
    MOV dword ptr [EBP + 0x32],EDX      ; 004ae109
    TEST EAX,EAX                        ; 004ae10c
    JNZ 0x004ae13b                      ; 004ae10e
        ;   XREF to: 004ae13b (CONDITIONAL_JUMP)  ; LAB_004ae13b
    MOV ESI,dword ptr [EBP + 0x32]      ; 004ae110
        ;   Label: LAB_004ae110
    TEST ESI,ESI                        ; 004ae113
    JNZ 0x004ad9e7                      ; 004ae115
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    PUSH 0x1                            ; 004ae11b
    PUSH ESI                            ; 004ae11d
    LEA EAX,[EBX + 0x2b4]               ; 004ae11e
    PUSH EAX                            ; 004ae124
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ae125
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ae12a
    PUSH EBX                            ; 004ae12d
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004cf830 ; 004ae12e
        ;   XREF to: 004cf830 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004cf830(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ae133
    JMP 0x004ad9e7                      ; 004ae136
        ;   XREF to: 004ad9e7 (UNCONDITIONAL_JUMP)  ; LAB_004ad9e7
    PUSH ESI                            ; 004ae13b
        ;   Label: LAB_004ae13b
    MOV EDI,dword ptr [ESI + 0x2b0]     ; 004ae13c
    LEA ESI,[EBP + 0xfffffdc6]          ; 004ae142
    CALL dword ptr [EDI + 0x24]         ; 004ae148
    MOV ECX,0x6                         ; 004ae14b
    LEA EDI,[EBP + 0xfffffdae]          ; 004ae150
    LEA ESI,[EBP + 0xfffffdc6]          ; 004ae156
    MOVSD.REP ES:EDI,ESI                ; 004ae15c
    FLD float ptr [EBP + 0xfffffdae]    ; 004ae15e
    FLD float ptr [EBP + 0xfffffdb2]    ; 004ae164
    FLD float ptr [EBP + 0xfffffdb6]    ; 004ae16a
    LEA EDI,[EBP + -0x6]                ; 004ae170
    LEA ESI,[EBP + 0xfffffe86]          ; 004ae173
    FXCH ST2                            ; 004ae179
    FADD float ptr [EBP + 0xfffffdba]   ; 004ae17b
    FXCH                                ; 004ae181
    FADD float ptr [EBP + 0xfffffdbe]   ; 004ae183
    FXCH ST2                            ; 004ae189
    FADD float ptr [EBP + 0xfffffdc2]   ; 004ae18b
    FXCH                                ; 004ae191
    FSTP float ptr [EBP + 0xfffffe86]   ; 004ae193
    FXCH                                ; 004ae199
    FSTP float ptr [EBP + 0xfffffe8a]   ; 004ae19b
    FSTP float ptr [EBP + 0xfffffe8e]   ; 004ae1a1
    MOVSD ES:EDI,ESI                    ; 004ae1a7
    MOVSD ES:EDI,ESI                    ; 004ae1a8
    MOVSD ES:EDI,ESI                    ; 004ae1a9
    FLD float ptr [EBP + -0x6]          ; 004ae1aa
    FMUL float ptr [0x005d6f67]         ; 004ae1ad | DAT_005d6f67
    FLD float ptr [EBP + -0x2]          ; 004ae1b3
    FMUL float ptr [0x005d6f67]         ; 004ae1b6 | DAT_005d6f67
    FLD float ptr [EBP + 0x2]           ; 004ae1bc
    FMUL float ptr [0x005d6f67]         ; 004ae1bf | DAT_005d6f67
    LEA EAX,[EBP + 0xfffffeb6]          ; 004ae1c5
    ADD ESP,0x4                         ; 004ae1cb
    LEA EDI,[EBP + 0xfffffeb6]          ; 004ae1ce
    LEA ESI,[EBP + 0xfffffe4a]          ; 004ae1d4
    FXCH ST2                            ; 004ae1da
    FSTP float ptr [EBP + 0xfffffe4a]   ; 004ae1dc
    FSTP float ptr [EBP + 0xfffffe4e]   ; 004ae1e2
    FSTP float ptr [EBP + 0xfffffe52]   ; 004ae1e8
    MOVSD ES:EDI,ESI                    ; 004ae1ee
    MOVSD ES:EDI,ESI                    ; 004ae1ef
    MOVSD ES:EDI,ESI                    ; 004ae1f0
    PUSH EAX                            ; 004ae1f1
    MOV EDX,dword ptr [EBX + 0x2560c]   ; 004ae1f2
    PUSH EDX                            ; 004ae1f8
    LEA ESI,[EBP + 0xfffffe62]          ; 004ae1f9
    LEA EDI,[EBP + 0xfffffeaa]          ; 004ae1ff
    CALL core_actor.cpp_FUN_00408d70    ; 004ae205
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004ae20a
    LEA EAX,[EBP + 0xfffffeaa]          ; 004ae20d
    LEA ESI,[EBP + 0xfffffe62]          ; 004ae213
    PUSH EAX                            ; 004ae219
    MOVSD ES:EDI,ESI                    ; 004ae21a
    MOVSD ES:EDI,ESI                    ; 004ae21b
    MOVSD ES:EDI,ESI                    ; 004ae21c
    PUSH EBX                            ; 004ae21d
    LEA ESI,[EBP + 0xffffff22]          ; 004ae21e
    LEA EDI,[EBP + 0xfffffece]          ; 004ae224
    CALL core_actor.cpp_FUN_00408de0    ; 004ae22a
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xffffff22]          ; 004ae22f
    LEA EAX,[EBP + 0xfffffece]          ; 004ae235
    ADD ESP,0x8                         ; 004ae23b
    MOVSD ES:EDI,ESI                    ; 004ae23e
    MOVSD ES:EDI,ESI                    ; 004ae23f
    MOVSD ES:EDI,ESI                    ; 004ae240
    PUSH EAX                            ; 004ae241
    LEA ESI,[EBP + 0xfffffe26]          ; 004ae242
    LEA EDI,[EBP + 0xfffffef2]          ; 004ae248
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004ae24e
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xfffffe26]          ; 004ae253
    ADD ESP,0x4                         ; 004ae259
    MOVSD ES:EDI,ESI                    ; 004ae25c
    MOVSD ES:EDI,ESI                    ; 004ae25d
    MOVSD ES:EDI,ESI                    ; 004ae25e
    PUSH dword ptr [EBP + 0xfffffef6]   ; 004ae25f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004ae265
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    FLD float ptr [EBP + 0xfffffdba]    ; 004ae26a
    FLD float ptr [EBP + 0xfffffdbe]    ; 004ae270
    FLD float ptr [EBP + 0xfffffdc2]    ; 004ae276
    LEA EDI,[EBP + -0x72]               ; 004ae27c
    LEA ESI,[EBP + 0xfffffe92]          ; 004ae27f
    FXCH ST2                            ; 004ae285
    FSUB float ptr [EBP + 0xfffffdae]   ; 004ae287
    FXCH                                ; 004ae28d
    FSUB float ptr [EBP + 0xfffffdb2]   ; 004ae28f
    FXCH ST2                            ; 004ae295
    FSUB float ptr [EBP + 0xfffffdb6]   ; 004ae297
    FXCH                                ; 004ae29d
    FSTP float ptr [EBP + 0xfffffe92]   ; 004ae29f
    FXCH                                ; 004ae2a5
    FSTP float ptr [EBP + 0xfffffe96]   ; 004ae2a7
    FSTP float ptr [EBP + 0xfffffe9a]   ; 004ae2ad
    MOVSD ES:EDI,ESI                    ; 004ae2b3
    MOVSD ES:EDI,ESI                    ; 004ae2b4
    MOVSD ES:EDI,ESI                    ; 004ae2b5
    FLD float ptr [EBP + -0x72]         ; 004ae2b6
    FMUL float ptr [0x005d6f67]         ; 004ae2b9 | DAT_005d6f67
    FLD float ptr [EBP + -0x6e]         ; 004ae2bf
    FMUL float ptr [0x005d6f67]         ; 004ae2c2 | DAT_005d6f67
    FLD float ptr [EBP + -0x6a]         ; 004ae2c8
    FMUL float ptr [0x005d6f67]         ; 004ae2cb | DAT_005d6f67
    LEA EDI,[EBP + -0x12]               ; 004ae2d1
    LEA ESI,[EBP + 0xfffffe6e]          ; 004ae2d4
    FXCH ST2                            ; 004ae2da
    FSTP float ptr [EBP + 0xfffffe6e]   ; 004ae2dc
    FSTP float ptr [EBP + 0xfffffe72]   ; 004ae2e2
    FSTP float ptr [EBP + 0xfffffe76]   ; 004ae2e8
    MOVSD ES:EDI,ESI                    ; 004ae2ee
    MOVSD ES:EDI,ESI                    ; 004ae2ef
    MOVSD ES:EDI,ESI                    ; 004ae2f0
    FLD float ptr [EBP + -0x12]         ; 004ae2f1
    FMUL ST0                            ; 004ae2f4
    FLD float ptr [EBP + -0xa]          ; 004ae2f6
    FMUL ST0                            ; 004ae2f9
    FADDP                               ; 004ae2fb
    MOV dword ptr [EBP + 0x76],EAX      ; 004ae2fd
    FSQRT                               ; 004ae300
    ADD ESP,0x4                         ; 004ae302
    XOR ECX,ECX                         ; 004ae305
    MOV EAX,dword ptr [EBP + 0x76]      ; 004ae307
    MOV dword ptr [EBP + 0x66],EAX      ; 004ae30a
    FSUBR float ptr [EBP + 0xfffffed6]  ; 004ae30d
    MOV dword ptr [EBP + -0xe],ECX      ; 004ae313
    FCOMP double ptr [0x005d6f6b]       ; 004ae316 | DAT_005d6f6b
    FNSTSW AX                           ; 004ae31c
    SAHF                                ; 004ae31e
    JNC 0x004ae110                      ; 004ae31f
        ;   XREF to: 004ae110 (CONDITIONAL_JUMP)  ; LAB_004ae110
    FLD float ptr [EBP + 0xfffffed2]    ; 004ae325
    FLD1                                ; 004ae32b
    FXCH                                ; 004ae32d
    FSTP double ptr [EBP + 0x1e]        ; 004ae32f
    FCOMP double ptr [EBP + 0x1e]       ; 004ae332
    FNSTSW AX                           ; 004ae335
    SAHF                                ; 004ae337
    JNC 0x004ae110                      ; 004ae338
        ;   XREF to: 004ae110 (CONDITIONAL_JUMP)  ; LAB_004ae110
    FLD double ptr [EBP + 0x1e]         ; 004ae33e
    FCOMP double ptr [0x005d6f73]       ; 004ae341 | DAT_005d6f73
    FNSTSW AX                           ; 004ae347
    SAHF                                ; 004ae349
    JNC 0x004ae110                      ; 004ae34a
        ;   XREF to: 004ae110 (CONDITIONAL_JUMP)  ; LAB_004ae110
    FLD float ptr [EBP + 0x66]          ; 004ae350
    FABS                                ; 004ae353
    FCOMP double ptr [0x005d6f7b]       ; 004ae355 | DAT_005d6f7b
    FNSTSW AX                           ; 004ae35b
    SAHF                                ; 004ae35d
    JNC 0x004ae110                      ; 004ae35e
        ;   XREF to: 004ae110 (CONDITIONAL_JUMP)  ; LAB_004ae110
    FLD float ptr [EBP + 0x92]          ; 004ae364
    FMUL float ptr [0x005d6f83]         ; 004ae36a | DAT_005d6f83
    FST float ptr [EBP + 0x62]          ; 004ae370
    FCHS                                ; 004ae373
    FCOMP float ptr [EBP + 0x66]        ; 004ae375
    FNSTSW AX                           ; 004ae378
    SAHF                                ; 004ae37a
    JA 0x004ae39c                       ; 004ae37b
        ;   XREF to: 004ae39c (CONDITIONAL_JUMP)  ; LAB_004ae39c
    FLD float ptr [EBP + 0x66]          ; 004ae37d
        ;   Label: LAB_004ae37d
    FCOMP float ptr [EBP + 0x62]        ; 004ae380
    FNSTSW AX                           ; 004ae383
    SAHF                                ; 004ae385
    JBE 0x004ae38e                      ; 004ae386
        ;   XREF to: 004ae38e (CONDITIONAL_JUMP)  ; LAB_004ae38e
    MOV EAX,dword ptr [EBP + 0x62]      ; 004ae388
    MOV dword ptr [EBP + 0x66],EAX      ; 004ae38b
    FLD float ptr [EBX + 0x34]          ; 004ae38e
        ;   Label: LAB_004ae38e
    FADD float ptr [EBP + 0x66]         ; 004ae391
    FSTP float ptr [EBX + 0x34]         ; 004ae394
    JMP 0x004ad9e7                      ; 004ae397
        ;   XREF to: 004ad9e7 (UNCONDITIONAL_JUMP)  ; LAB_004ad9e7
    FLD float ptr [EBP + 0x62]          ; 004ae39c
        ;   Label: LAB_004ae39c
    FCHS                                ; 004ae39f
    FSTP float ptr [EBP + 0x66]         ; 004ae3a1
    JMP 0x004ae37d                      ; 004ae3a4
        ;   XREF to: 004ae37d (UNCONDITIONAL_JUMP)  ; LAB_004ae37d
    PUSH dword ptr [EBP + 0x92]         ; 004ae3a6
        ;   Label: LAB_004ae3a6
    PUSH EBX                            ; 004ae3ac
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 004ae3ad
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ae3b2
    LEA ESI,[EBX + 0x2b4]               ; 004ae3b5
    TEST EAX,EAX                        ; 004ae3bb
    JZ 0x004ae419                       ; 004ae3bd
        ;   XREF to: 004ae419 (CONDITIONAL_JUMP)  ; LAB_004ae419
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004ae3bf
    CMP EAX,0x2                         ; 004ae3c5
    JNC 0x004ae409                      ; 004ae3c8
        ;   XREF to: 004ae409 (CONDITIONAL_JUMP)  ; LAB_004ae409
    CMP EAX,0x1                         ; 004ae3ca
    JNZ 0x004ae0ec                      ; 004ae3cd
        ;   XREF to: 004ae0ec (CONDITIONAL_JUMP)  ; LAB_004ae0ec
    PUSH EAX                            ; 004ae3d3
    PUSH EAX                            ; 004ae3d4
    PUSH ESI                            ; 004ae3d5
    JMP 0x004ad9df                      ; 004ae3d6
        ;   XREF to: 004ad9df (UNCONDITIONAL_JUMP)  ; LAB_004ad9df
    PUSH 0x1                            ; 004ae3db
        ;   Label: LAB_004ae3db
    PUSH 0x0                            ; 004ae3dd
    PUSH ESI                            ; 004ae3df
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ae3e0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ae3e5
    PUSH EBX                            ; 004ae3e8
    PUSH 0x5d6f0c                       ; 004ae3e9 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 004ae3ee | g_CConsolePtr
    PUSH ESI                            ; 004ae3f4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004ae3f5
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x004ad9e4                      ; 004ae3fa
        ;   XREF to: 004ad9e4 (UNCONDITIONAL_JUMP)  ; LAB_004ad9e4
    PUSH 0x1                            ; 004ae3ff
        ;   Label: LAB_004ae3ff
    PUSH 0x2                            ; 004ae401
    PUSH ESI                            ; 004ae403
    JMP 0x004ad9df                      ; 004ae404
        ;   XREF to: 004ad9df (UNCONDITIONAL_JUMP)  ; LAB_004ad9df
    JBE 0x004ae3ff                      ; 004ae409
        ;   XREF to: 004ae3ff (CONDITIONAL_JUMP)  ; LAB_004ae3ff
        ;   Label: LAB_004ae409
    CMP EAX,0x3                         ; 004ae40b
    JZ 0x004ae3db                       ; 004ae40e
        ;   XREF to: 004ae3db (CONDITIONAL_JUMP)  ; LAB_004ae3db
    PUSH 0x1                            ; 004ae410
    PUSH 0x0                            ; 004ae412
    JMP 0x004ad9d8                      ; 004ae414
        ;   XREF to: 004ad9d8 (UNCONDITIONAL_JUMP)  ; LAB_004ad9d8
    CMP dword ptr [EBP + 0x72],0x0      ; 004ae419
        ;   Label: LAB_004ae419
    JNZ 0x004ad9e7                      ; 004ae41d
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    PUSH ESI                            ; 004ae423
    CALL core_motion.cpp_FUN_005035c0   ; 004ae424
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ae429
    ADD ESP,0x4                         ; 004ae42c
    CMP EAX,0xe                         ; 004ae42f
    JNC 0x004ae555                      ; 004ae432
        ;   XREF to: 004ae555 (CONDITIONAL_JUMP)  ; LAB_004ae555
    CMP EAX,0x1                         ; 004ae438
    JNC 0x004ae58d                      ; 004ae43b
        ;   XREF to: 004ae58d (CONDITIONAL_JUMP)  ; LAB_004ae58d
    TEST EAX,EAX                        ; 004ae441
    JNZ 0x004ad9e7                      ; 004ae443
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    CMP dword ptr [EBX + 0x2570],0x0    ; 004ae449
        ;   Label: LAB_004ae449
    JZ 0x004ad9e7                       ; 004ae450
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    MOV EDI,dword ptr [EBX + 0x10a68]   ; 004ae456
    XOR ESI,ESI                         ; 004ae45c
    TEST EDI,EDI                        ; 004ae45e
    JZ 0x004ae474                       ; 004ae460
        ;   XREF to: 004ae474 (CONDITIONAL_JUMP)  ; LAB_004ae474
    CMP dword ptr [EBX + 0x10a70],0x0   ; 004ae462
    JZ 0x004ae509                       ; 004ae469
        ;   XREF to: 004ae509 (CONDITIONAL_JUMP)  ; LAB_004ae509
    MOV ESI,0x2                         ; 004ae46f
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 004ae474
        ;   Label: LAB_004ae474
    JZ 0x004ae482                       ; 004ae47b
        ;   XREF to: 004ae482 (CONDITIONAL_JUMP)  ; LAB_004ae482
    MOV ESI,0x3                         ; 004ae47d
    FLD float ptr [EBX + 0x10a90]       ; 004ae482
        ;   Label: LAB_004ae482
    FMUL float ptr [EBX + 0x2598]       ; 004ae488
    FLD float ptr [EBX + 0x2594]        ; 004ae48e
    FLD float ptr [EBX + 0x257c]        ; 004ae494
    LEA EDI,[EBX + 0x2b4]               ; 004ae49a
    FADD float ptr [EBP + 0x6a]         ; 004ae4a0
    PUSH EDI                            ; 004ae4a3
    FXCH                                ; 004ae4a4
    FADD float ptr [EBX + 0x2584]       ; 004ae4a6
    FXCH ST2                            ; 004ae4ac
    FSTP float ptr [EBX + 0x2578]       ; 004ae4ae
    FXCH                                ; 004ae4b4
    FSTP float ptr [EBX + 0x2584]       ; 004ae4b6
    FSTP float ptr [EBX + 0x257c]       ; 004ae4bc
    CALL core_motion.cpp_FUN_005035c0   ; 004ae4c2
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ae4c7
    ADD ESP,0x4                         ; 004ae4ca
    CMP ESI,EAX                         ; 004ae4cd
    JZ 0x004ae4dd                       ; 004ae4cf
        ;   XREF to: 004ae4dd (CONDITIONAL_JUMP)  ; LAB_004ae4dd
    PUSH 0x1                            ; 004ae4d1
    PUSH ESI                            ; 004ae4d3
    PUSH EDI                            ; 004ae4d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ae4d5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ae4da
    CMP dword ptr [EBX + 0x10a78],0x0   ; 004ae4dd
        ;   Label: LAB_004ae4dd
    JZ 0x004ad9e7                       ; 004ae4e4
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    PUSH EBX                            ; 004ae4ea
    CALL core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004b05b0 ; 004ae4eb
        ;   XREF to: 004b05b0 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004b05b0(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004ae4f0
    TEST EAX,EAX                        ; 004ae4f3
    JNZ 0x004ad9e7                      ; 004ae4f5
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    PUSH EBX                            ; 004ae4fb
    CALL core_gabriela.cpp_CGabriella_tryThrowObject_FUN_004b0f70 ; 004ae4fc
        ;   XREF to: 004b0f70 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_CGabriella_tryThrowObject_FUN_004b0f70(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004ae501
    JMP 0x004ad9e7                      ; 004ae504
        ;   XREF to: 004ad9e7 (UNCONDITIONAL_JUMP)  ; LAB_004ad9e7
    MOV ESI,0x1                         ; 004ae509
        ;   Label: LAB_004ae509
    JMP 0x004ae474                      ; 004ae50e
        ;   XREF to: 004ae474 (UNCONDITIONAL_JUMP)  ; LAB_004ae474
    MOV EAX,[0x007bc3e0]                ; 004ae513 | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_004ae513
    PUSH EAX                            ; 004ae518
    MOV EDX,dword ptr [EBX + 0x25608]   ; 004ae519
    PUSH EDX                            ; 004ae51f
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ae520
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDI,EAX                         ; 004ae525
    ADD ESP,0x8                         ; 004ae527
    TEST EAX,EAX                        ; 004ae52a
    JZ 0x004ad9e7                       ; 004ae52c
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    PUSH ESI                            ; 004ae532
    CALL core_motion.cpp_FUN_00503e60   ; 004ae533
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ae538
    MOV dword ptr [EBP + 0x76],EAX      ; 004ae53b
    SUB ESP,0x4                         ; 004ae53e
    MOV EAX,dword ptr [EBP + 0x76]      ; 004ae541
    MOV dword ptr [ESP],EAX             ; 004ae544
    PUSH EDI                            ; 004ae547
    CALL core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e600 ; 004ae548
        ;   XREF to: 0040e600 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e600(CAmmoBox * this_ptr, float open_pct)
    ADD ESP,0x8                         ; 004ae54d
    JMP 0x004ad9e7                      ; 004ae550
        ;   XREF to: 004ad9e7 (UNCONDITIONAL_JUMP)  ; LAB_004ad9e7
    JBE 0x004ae513                      ; 004ae555
        ;   XREF to: 004ae513 (CONDITIONAL_JUMP)  ; LAB_004ae513
        ;   Label: LAB_004ae555
    CMP EAX,0x11                        ; 004ae557
    JNC 0x004ae56a                      ; 004ae55a
        ;   XREF to: 004ae56a (CONDITIONAL_JUMP)  ; LAB_004ae56a
    CMP EAX,0x10                        ; 004ae55c
    JZ 0x004ae449                       ; 004ae55f
        ;   XREF to: 004ae449 (CONDITIONAL_JUMP)  ; LAB_004ae449
    JMP 0x004ad9e7                      ; 004ae565
        ;   XREF to: 004ad9e7 (UNCONDITIONAL_JUMP)  ; LAB_004ad9e7
    JBE 0x004ae449                      ; 004ae56a
        ;   XREF to: 004ae449 (CONDITIONAL_JUMP)  ; LAB_004ae449
        ;   Label: LAB_004ae56a
    CMP EAX,0x14                        ; 004ae570
    JC 0x004ad9e7                       ; 004ae573
        ;   XREF to: 004ad9e7 (CONDITIONAL_JUMP)  ; LAB_004ad9e7
    JBE 0x004ae449                      ; 004ae579
        ;   XREF to: 004ae449 (CONDITIONAL_JUMP)  ; LAB_004ae449
    CMP EAX,0x15                        ; 004ae57f
    JZ 0x004ae449                       ; 004ae582
        ;   XREF to: 004ae449 (CONDITIONAL_JUMP)  ; LAB_004ae449
    JMP 0x004ad9e7                      ; 004ae588
        ;   XREF to: 004ad9e7 (UNCONDITIONAL_JUMP)  ; LAB_004ad9e7
    JBE 0x004ae449                      ; 004ae58d
        ;   XREF to: 004ae449 (CONDITIONAL_JUMP)  ; LAB_004ae449
        ;   Label: LAB_004ae58d
    CMP EAX,0x2                         ; 004ae593
    JBE 0x004ae449                      ; 004ae596
        ;   XREF to: 004ae449 (CONDITIONAL_JUMP)  ; LAB_004ae449
    CMP EAX,0x3                         ; 004ae59c
    JZ 0x004ae449                       ; 004ae59f
        ;   XREF to: 004ae449 (CONDITIONAL_JUMP)  ; LAB_004ae449
    JMP 0x004ad9e7                      ; 004ae5a5
        ;   XREF to: 004ad9e7 (UNCONDITIONAL_JUMP)  ; LAB_004ad9e7
    CMP dword ptr [EBP + 0x72],0x0      ; 004ae5aa
        ;   Label: LAB_004ae5aa
    JNZ 0x004ae69c                      ; 004ae5ae
        ;   XREF to: 004ae69c (CONDITIONAL_JUMP)  ; LAB_004ae69c
    LEA EDI,[EBP + -0x42]               ; 004ae5b4
        ;   Label: LAB_004ae5b4
    LEA EAX,[EBX + 0x2b4]               ; 004ae5b7
    LEA ESI,[EBX + 0x257c]              ; 004ae5bd
    PUSH EAX                            ; 004ae5c3
    MOVSD ES:EDI,ESI                    ; 004ae5c4
    MOVSD ES:EDI,ESI                    ; 004ae5c5
    MOVSD ES:EDI,ESI                    ; 004ae5c6
    CALL core_motion.cpp_FUN_005035c0   ; 004ae5c7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ae5cc
    ADD ESP,0x4                         ; 004ae5cf
    CMP EAX,0x3                         ; 004ae5d2
    JNC 0x004ae6c9                      ; 004ae5d5
        ;   XREF to: 004ae6c9 (CONDITIONAL_JUMP)  ; LAB_004ae6c9
    CMP EAX,0x1                         ; 004ae5db
    JNC 0x004ae608                      ; 004ae5de
        ;   XREF to: 004ae608 (CONDITIONAL_JUMP)  ; LAB_004ae608
    TEST EAX,EAX                        ; 004ae5e0
    JZ 0x004ae608                       ; 004ae5e2
        ;   XREF to: 004ae608 (CONDITIONAL_JUMP)  ; LAB_004ae608
        ;   Label: LAB_004ae5e2
    LEA EAX,[EBX + 0x2508]              ; 004ae5e4
        ;   Label: LAB_004ae5e4
    FLD float ptr [EBP + -0x42]         ; 004ae5ea
    FADD float ptr [EAX]                ; 004ae5ed
    FLD float ptr [EBP + -0x3e]         ; 004ae5ef
    FXCH                                ; 004ae5f2
    FSTP float ptr [EBP + -0x42]        ; 004ae5f4
    FADD float ptr [EAX + 0x4]          ; 004ae5f7
    FLD float ptr [EBP + -0x3a]         ; 004ae5fa
    FXCH                                ; 004ae5fd
    FSTP float ptr [EBP + -0x3e]        ; 004ae5ff
    FADD float ptr [EAX + 0x8]          ; 004ae602
    FSTP float ptr [EBP + -0x3a]        ; 004ae605
    PUSH dword ptr [EBP + 0x92]         ; 004ae608
        ;   Label: LAB_004ae608
    PUSH EBX                            ; 004ae60e
    CALL core_charactr.cpp_FUN_00423a10 ; 004ae60f
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA EAX,[EBX + 0x2588]              ; 004ae614
    FLD float ptr [EAX]                 ; 004ae61a
    FMUL float ptr [EBP + 0x92]         ; 004ae61c
    FLD float ptr [EAX + 0x4]           ; 004ae622
    FMUL float ptr [EBP + 0x92]         ; 004ae625
    FLD float ptr [EAX + 0x8]           ; 004ae62b
    FMUL float ptr [EBP + 0x92]         ; 004ae62e
    LEA EDI,[EBP + 0xffffff52]          ; 004ae634
    LEA ESI,[EBP + 0xfffffdde]          ; 004ae63a
    FLD float ptr [EBP + -0x42]         ; 004ae640
    FLD float ptr [EBP + -0x3e]         ; 004ae643
    FLD float ptr [EBP + -0x3a]         ; 004ae646
    ADD ESP,0x8                         ; 004ae649
    LEA EAX,[EBP + -0x42]               ; 004ae64c
    FXCH ST5                            ; 004ae64f
    FSTP float ptr [EBP + 0xfffffdde]   ; 004ae651
    FXCH ST3                            ; 004ae657
    FSTP float ptr [EBP + 0xfffffde2]   ; 004ae659
    FXCH                                ; 004ae65f
    FSTP float ptr [EBP + 0xfffffde6]   ; 004ae661
    PUSH EAX                            ; 004ae667
    MOVSD ES:EDI,ESI                    ; 004ae668
    MOVSD ES:EDI,ESI                    ; 004ae669
    MOVSD ES:EDI,ESI                    ; 004ae66a
    PUSH EBX                            ; 004ae66b
    FADD float ptr [EBP + 0xffffff52]   ; 004ae66c
    FXCH                                ; 004ae672
    FADD float ptr [EBP + 0xffffff56]   ; 004ae674
    FXCH ST2                            ; 004ae67a
    FADD float ptr [EBP + 0xffffff5a]   ; 004ae67c
    FXCH                                ; 004ae682
    FSTP float ptr [EBP + -0x42]        ; 004ae684
    FXCH                                ; 004ae687
    FSTP float ptr [EBP + -0x3e]        ; 004ae689
    FSTP float ptr [EBP + -0x3a]        ; 004ae68c
    CALL core_charactr.cpp_FUN_00423a60 ; 004ae68f
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004ae694
    JMP 0x004ada5a                      ; 004ae697
        ;   XREF to: 004ada5a (UNCONDITIONAL_JUMP)  ; LAB_004ada5a
    LEA EAX,[EBX + 0x2b4]               ; 004ae69c
        ;   Label: LAB_004ae69c
    PUSH EAX                            ; 004ae6a2
    CALL core_motion.cpp_FUN_005035c0   ; 004ae6a3
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ae6a8
    ADD ESP,0x4                         ; 004ae6ab
    CMP EAX,0xd                         ; 004ae6ae
    JZ 0x004ae5b4                       ; 004ae6b1
        ;   XREF to: 004ae5b4 (CONDITIONAL_JUMP)  ; LAB_004ae5b4
    CMP dword ptr [EBX + 0xdc],0x0      ; 004ae6b7
    JNZ 0x004ae5b4                      ; 004ae6be
        ;   XREF to: 004ae5b4 (CONDITIONAL_JUMP)  ; LAB_004ae5b4
    JMP 0x004ada5a                      ; 004ae6c4
        ;   XREF to: 004ada5a (UNCONDITIONAL_JUMP)  ; LAB_004ada5a
    JBE 0x004ae608                      ; 004ae6c9
        ;   XREF to: 004ae608 (CONDITIONAL_JUMP)  ; LAB_004ae608
        ;   Label: LAB_004ae6c9
    CMP EAX,0x11                        ; 004ae6cf
    JNC 0x004ae6dc                      ; 004ae6d2
        ;   XREF to: 004ae6dc (CONDITIONAL_JUMP)  ; LAB_004ae6dc
    CMP EAX,0x10                        ; 004ae6d4
    JMP 0x004ae5e2                      ; 004ae6d7
        ;   XREF to: 004ae5e2 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e2
    JBE 0x004ae608                      ; 004ae6dc
        ;   XREF to: 004ae608 (CONDITIONAL_JUMP)  ; LAB_004ae608
        ;   Label: LAB_004ae6dc
    CMP EAX,0x14                        ; 004ae6e2
    JC 0x004ae5e4                       ; 004ae6e5
        ;   XREF to: 004ae5e4 (CONDITIONAL_JUMP)  ; LAB_004ae5e4
    JBE 0x004ae608                      ; 004ae6eb
        ;   XREF to: 004ae608 (CONDITIONAL_JUMP)  ; LAB_004ae608
    CMP EAX,0x15                        ; 004ae6f1
    JMP 0x004ae5e2                      ; 004ae6f4
        ;   XREF to: 004ae5e2 (UNCONDITIONAL_JUMP)  ; LAB_004ae5e2
    CMP dword ptr [EBX + 0x10a80],0x0   ; 004ae6f9
        ;   Label: LAB_004ae6f9
    JZ 0x004ada6e                       ; 004ae700
        ;   XREF to: 004ada6e (CONDITIONAL_JUMP)  ; LAB_004ada6e
    LEA EAX,[EBX + 0x2437c]             ; 004ae706
    MOV ESI,dword ptr [EAX + 0x468]     ; 004ae70c
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x610] ; 004ae712
    TEST EAX,EAX                        ; 004ae719
    JZ 0x004ada6e                       ; 004ae71b
        ;   XREF to: 004ada6e (CONDITIONAL_JUMP)  ; LAB_004ada6e
    MOV AH,byte ptr [EBX + 0x25640]     ; 004ae721
    TEST AH,0x3                         ; 004ae727
    JZ 0x004ae73c                       ; 004ae72a
        ;   XREF to: 004ae73c (CONDITIONAL_JUMP)  ; LAB_004ae73c
    MOV DH,AH                           ; 004ae72c
    AND DH,0xfc                         ; 004ae72e
    MOV byte ptr [EBX + 0x25640],DH     ; 004ae731
    JMP 0x004ada6e                      ; 004ae737
        ;   XREF to: 004ada6e (UNCONDITIONAL_JUMP)  ; LAB_004ada6e
    MOV DL,AH                           ; 004ae73c
        ;   Label: LAB_004ae73c
    OR DL,0x2                           ; 004ae73e
    MOV byte ptr [EBX + 0x25640],DL     ; 004ae741
    JMP 0x004ada6e                      ; 004ae747
        ;   XREF to: 004ada6e (UNCONDITIONAL_JUMP)  ; LAB_004ada6e
    CMP dword ptr [EAX + 0x248c],0x0    ; 004ae74c
        ;   Label: LAB_004ae74c
    SETZ AL                             ; 004ae753
    AND EAX,0xff                        ; 004ae756
    MOV ECX,dword ptr [ESI + 0x7d4]     ; 004ae75b
    MOV dword ptr [ESI + 0x248c],EAX    ; 004ae761
    CMP ECX,0x1                         ; 004ae767
    JNZ 0x004adaa0                      ; 004ae76a
        ;   XREF to: 004adaa0 (CONDITIONAL_JUMP)  ; LAB_004adaa0
    PUSH 0x5d6f36                       ; 004ae770 | = "flashlit.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ae775
    PUSH EBX                            ; 004ae77b
    CALL dword ptr [EAX + 0x34]         ; 004ae77c
    ADD ESP,0x8                         ; 004ae77f
    JMP 0x004adaa0                      ; 004ae782
        ;   XREF to: 004adaa0 (UNCONDITIONAL_JUMP)  ; LAB_004adaa0
    FLD float ptr [EBP + 0x92]          ; 004ae787
        ;   Label: LAB_004ae787
    FDIV float ptr [0x005f732c]         ; 004ae78d | DAT_005f732c
    FSUBR float ptr [EBX + 0x25644]     ; 004ae793
    FST float ptr [EBX + 0x25644]       ; 004ae799
    FLDZ                                ; 004ae79f
    FCOMPP                              ; 004ae7a1
    FNSTSW AX                           ; 004ae7a3
    SAHF                                ; 004ae7a5
    JBE 0x004adb61                      ; 004ae7a6
        ;   XREF to: 004adb61 (CONDITIONAL_JUMP)  ; LAB_004adb61
    MOV dword ptr [EBX + 0x25644],0x0   ; 004ae7ac
    JMP 0x004adb61                      ; 004ae7b6
        ;   XREF to: 004adb61 (UNCONDITIONAL_JUMP)  ; LAB_004adb61
    FLD float ptr [EBP + 0x92]          ; 004ae7bb
        ;   Label: LAB_004ae7bb
    FDIV float ptr [0x005f732c]         ; 004ae7c1 | DAT_005f732c
    MOV EAX,dword ptr [EBX + 0x25648]   ; 004ae7c7
    MOV dword ptr [EBP + 0x56],EAX      ; 004ae7cd
    FSUBR float ptr [EBP + 0x56]        ; 004ae7d0
    FST float ptr [EBX + 0x25648]       ; 004ae7d3
    FLDZ                                ; 004ae7d9
    FCOMPP                              ; 004ae7db
    FNSTSW AX                           ; 004ae7dd
    SAHF                                ; 004ae7df
    JBE 0x004ae7ec                      ; 004ae7e0
        ;   XREF to: 004ae7ec (CONDITIONAL_JUMP)  ; LAB_004ae7ec
    MOV dword ptr [EBX + 0x25648],0x0   ; 004ae7e2
    FLD float ptr [0x005f7334]          ; 004ae7ec | DAT_005f7334
        ;   Label: LAB_004ae7ec
    FADD double ptr [0x005d6fa3]        ; 004ae7f2 | DAT_005d6fa3
    FLD float ptr [EBP + 0x56]          ; 004ae7f8
    FXCH                                ; 004ae7fb
    FSTP float ptr [EBP + 0x4a]         ; 004ae7fd
    FCOMP float ptr [EBP + 0x4a]        ; 004ae800
    FNSTSW AX                           ; 004ae803
    SAHF                                ; 004ae805
    JC 0x004adbe9                       ; 004ae806
        ;   XREF to: 004adbe9 (CONDITIONAL_JUMP)  ; LAB_004adbe9
    FLD float ptr [EBX + 0x25648]       ; 004ae80c
    FCOMP float ptr [EBP + 0x4a]        ; 004ae812
    FNSTSW AX                           ; 004ae815
    SAHF                                ; 004ae817
    JNC 0x004adbe9                      ; 004ae818
        ;   XREF to: 004adbe9 (CONDITIONAL_JUMP)  ; LAB_004adbe9
    PUSH 0x5d6f54                       ; 004ae81e | = "undraw-s.wav @ .7"
    JMP 0x004adbdc                      ; 004ae823
        ;   XREF to: 004adbdc (UNCONDITIONAL_JUMP)  ; LAB_004adbdc
    FLD float ptr [EBP + 0x92]          ; 004ae828
        ;   Label: LAB_004ae828
    FDIV float ptr [0x005f732c]         ; 004ae82e | DAT_005f732c
    FSUBR float ptr [EBX + 0x2564c]     ; 004ae834
    FST float ptr [EBX + 0x2564c]       ; 004ae83a
    FLDZ                                ; 004ae840
    FCOMPP                              ; 004ae842
    FNSTSW AX                           ; 004ae844
    SAHF                                ; 004ae846
    JBE 0x004adc21                      ; 004ae847
        ;   XREF to: 004adc21 (CONDITIONAL_JUMP)  ; LAB_004adc21
    MOV dword ptr [EBX + 0x2564c],0x0   ; 004ae84d
    JMP 0x004adc21                      ; 004ae857
        ;   XREF to: 004adc21 (UNCONDITIONAL_JUMP)  ; LAB_004adc21
    TEST ESI,ESI                        ; 004ae85c
        ;   Label: LAB_004ae85c
    JZ 0x004ae897                       ; 004ae85e
        ;   XREF to: 004ae897 (CONDITIONAL_JUMP)  ; LAB_004ae897
    CMP dword ptr [ESI + 0x248c],0x0    ; 004ae860
    JZ 0x004ae897                       ; 004ae867
        ;   XREF to: 004ae897 (CONDITIONAL_JUMP)  ; LAB_004ae897
    LEA EAX,[EBX + 0x2b4]               ; 004ae869
    PUSH EAX                            ; 004ae86f
    CALL core_motion.cpp_FUN_005035c0   ; 004ae870
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ae875
    ADD ESP,0x4                         ; 004ae878
    CMP EAX,0x5                         ; 004ae87b
    JZ 0x004ae897                       ; 004ae87e
        ;   XREF to: 004ae897 (CONDITIONAL_JUMP)  ; LAB_004ae897
    FLD float ptr [EBP + 0x92]          ; 004ae880
    FDIV float ptr [0x005f7328]         ; 004ae886 | DAT_005f7328
    FADD float ptr [EBX + 0x25650]      ; 004ae88c
    JMP 0x004adc43                      ; 004ae892
        ;   XREF to: 004adc43 (UNCONDITIONAL_JUMP)  ; LAB_004adc43
    FLD float ptr [EBP + 0x92]          ; 004ae897
        ;   Label: LAB_004ae897
    FDIV float ptr [0x005f732c]         ; 004ae89d | DAT_005f732c
    JMP 0x004adc3d                      ; 004ae8a3
        ;   XREF to: 004adc3d (UNCONDITIONAL_JUMP)  ; LAB_004adc3d
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004ae8a8
        ;   Label: LAB_004ae8a8
    JZ 0x004adcc3                       ; 004ae8af
        ;   XREF to: 004adcc3 (CONDITIONAL_JUMP)  ; LAB_004adcc3
    CMP dword ptr [EBX + 0x25658],0x0   ; 004ae8b5
    JNZ 0x004adcc3                      ; 004ae8bc
        ;   XREF to: 004adcc3 (CONDITIONAL_JUMP)  ; LAB_004adcc3
    CMP dword ptr [EBX + 0x25640],0x0   ; 004ae8c2
    JZ 0x004ae8da                       ; 004ae8c9
        ;   XREF to: 004ae8da (CONDITIONAL_JUMP)  ; LAB_004ae8da
    MOV dword ptr [EBX + 0x25658],0x3   ; 004ae8cb
    JMP 0x004adcc3                      ; 004ae8d5
        ;   XREF to: 004adcc3 (UNCONDITIONAL_JUMP)  ; LAB_004adcc3
    FLD float ptr [EBX + 0x25648]       ; 004ae8da
        ;   Label: LAB_004ae8da
    FLDZ                                ; 004ae8e0
    FCOMPP                              ; 004ae8e2
    FNSTSW AX                           ; 004ae8e4
    SAHF                                ; 004ae8e6
    JC 0x004adcc3                       ; 004ae8e7
        ;   XREF to: 004adcc3 (CONDITIONAL_JUMP)  ; LAB_004adcc3
    PUSH EBX                            ; 004ae8ed
    CALL core_hero.cpp_FUN_004cec50     ; 004ae8ee
        ;   XREF to: 004cec50 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cec50()
    ADD ESP,0x4                         ; 004ae8f3
    TEST EAX,EAX                        ; 004ae8f6
    JNZ 0x004adcc3                      ; 004ae8f8
        ;   XREF to: 004adcc3 (CONDITIONAL_JUMP)  ; LAB_004adcc3
    PUSH ESI                            ; 004ae8fe
    PUSH EBX                            ; 004ae8ff
    CALL core_hero.cpp_FUN_004cf030     ; 004ae900
        ;   XREF to: 004cf030 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf030()
    ADD ESP,0x8                         ; 004ae905
    MOV ESI,EAX                         ; 004ae908
    CMP EAX,0x3                         ; 004ae90a
    JA 0x004ae92b                       ; 004ae90d
        ;   XREF to: 004ae92b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4ad62c]  ; 004ae90f | caseD_1 | caseD_3 | switchdataD_004ad62c
        ;   Label: switchD
    PUSH 0x1                            ; 004ae916
        ;   Label: caseD_2
    PUSH 0x12                           ; 004ae918
    LEA EAX,[EBX + 0x2b4]               ; 004ae91a
    PUSH EAX                            ; 004ae920
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ae921
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ae926
    JMP 0x004ae934                      ; 004ae929
        ;   XREF to: 004ae934 (UNCONDITIONAL_JUMP)  ; caseD_1
    PUSH EBX                            ; 004ae92b
        ;   Label: default
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230 ; 004ae92c
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ae931
    TEST ESI,ESI                        ; 004ae934
        ;   Label: caseD_0
    JNZ 0x004adcc3                      ; 004ae936
        ;   XREF to: 004adcc3 (CONDITIONAL_JUMP)  ; LAB_004adcc3
    PUSH EBX                            ; 004ae93c
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90 ; 004ae93d
        ;   XREF to: 004cee90 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ae942
    TEST EAX,EAX                        ; 004ae945
    JNZ 0x004adcc3                      ; 004ae947
        ;   XREF to: 004adcc3 (CONDITIONAL_JUMP)  ; LAB_004adcc3
    PUSH EBX                            ; 004ae94d
    CALL core_hero.cpp_FUN_004cf4e0     ; 004ae94e
        ;   XREF to: 004cf4e0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf4e0()
    ADD ESP,0x4                         ; 004ae953
    TEST EAX,EAX                        ; 004ae956
    JNZ 0x004ae975                      ; 004ae958
        ;   XREF to: 004ae975 (CONDITIONAL_JUMP)  ; LAB_004ae975
    PUSH EBX                            ; 004ae95a
    CALL core_hero.cpp_FUN_004cf2b0     ; 004ae95b
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004cf2b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ae960
    TEST EAX,EAX                        ; 004ae963
    JZ 0x004ae98d                       ; 004ae965
        ;   XREF to: 004ae98d (CONDITIONAL_JUMP)  ; LAB_004ae98d
    PUSH EBX                            ; 004ae967
    CALL core_hero.cpp_FUN_004cf440     ; 004ae968
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf440()
    ADD ESP,0x4                         ; 004ae96d
    JMP 0x004adcc3                      ; 004ae970
        ;   XREF to: 004adcc3 (UNCONDITIONAL_JUMP)  ; LAB_004adcc3
    PUSH 0x1                            ; 004ae975
        ;   Label: LAB_004ae975
    PUSH 0xd                            ; 004ae977
    LEA EAX,[EBX + 0x2b4]               ; 004ae979
    PUSH EAX                            ; 004ae97f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004ae980
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ae985
    JMP 0x004adcc3                      ; 004ae988
        ;   XREF to: 004adcc3 (UNCONDITIONAL_JUMP)  ; LAB_004adcc3
    PUSH EBX                            ; 004ae98d
        ;   Label: LAB_004ae98d
    CALL core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004b0a90 ; 004ae98e
        ;   XREF to: 004b0a90 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004b0a90(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004ae993
    JMP 0x004adcc3                      ; 004ae996
        ;   XREF to: 004adcc3 (UNCONDITIONAL_JUMP)  ; LAB_004adcc3
    PUSH EBX                            ; 004ae99b
        ;   Label: LAB_004ae99b
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004cf830 ; 004ae99c
        ;   XREF to: 004cf830 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004cf830(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ae9a1
    JMP 0x004ade29                      ; 004ae9a4
        ;   XREF to: 004ade29 (UNCONDITIONAL_JUMP)  ; LAB_004ade29
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004ae9a9
        ;   Label: LAB_004ae9a9
    JZ 0x004aead4                       ; 004ae9b0
        ;   XREF to: 004aead4 (CONDITIONAL_JUMP)  ; LAB_004aead4
    FLD float ptr [EBP + 0x92]          ; 004ae9b6
    FMUL double ptr [0x005d6fbb]        ; 004ae9bc | DAT_005d6fbb
    FADD float ptr [EBX + 0x601b0]      ; 004ae9c2
    FST float ptr [EBX + 0x601b0]       ; 004ae9c8
    FCOMP float ptr [0x005f7370]        ; 004ae9ce | DAT_005f7370
    FNSTSW AX                           ; 004ae9d4
    SAHF                                ; 004ae9d6
    JBE 0x004ae9f8                      ; 004ae9d7
        ;   XREF to: 004ae9f8 (CONDITIONAL_JUMP)  ; LAB_004ae9f8
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004ae9d9
    MOV dword ptr [EBX + 0x25658],0x2   ; 004ae9e3
    MOV EAX,[0x005f7370]                ; 004ae9ed | DAT_005f7370
    MOV dword ptr [EBX + 0x601b0],EAX   ; 004ae9f2
    MOV EAX,dword ptr [EBX + 0x25670]   ; 004ae9f8
        ;   Label: LAB_004ae9f8
    XOR ECX,ECX                         ; 004ae9fe
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 004aea00
    LEA EAX,[EBP + 0xfffffec2]          ; 004aea06
    XOR ESI,ESI                         ; 004aea0c
    PUSH EAX                            ; 004aea0e
    LEA EAX,[EBP + 0xfffffd86]          ; 004aea0f
    XOR EDI,EDI                         ; 004aea15
    PUSH EAX                            ; 004aea17
    MOV dword ptr [EBP + 0xfffffeca],ECX ; 004aea18
    MOV dword ptr [EBP + 0xfffffec6],ECX ; 004aea1e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004aea24
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x601b0]   ; 004aea29
    ADD ESP,0x8                         ; 004aea2f
    MOV dword ptr [EBP + 0xfffffee2],EAX ; 004aea32
    LEA EAX,[EBP + 0xfffffeda]          ; 004aea38
    MOV dword ptr [EBP + 0xfffffeda],EDI ; 004aea3e
    PUSH EAX                            ; 004aea44
    LEA EAX,[EBP + 0xfffffd86]          ; 004aea45
    MOV dword ptr [EBP + 0xfffffede],ESI ; 004aea4b
    PUSH EAX                            ; 004aea51
    LEA ESI,[EBP + 0xffffff5e]          ; 004aea52
    LEA EDI,[EBP + -0x5a]               ; 004aea58
    CALL core_dirmat.cpp_FUN_00449530   ; 004aea5b
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 004aea60
    LEA EAX,[EBP + -0x5a]               ; 004aea63
    LEA ESI,[EBP + 0xffffff5e]          ; 004aea66
    PUSH EAX                            ; 004aea6c
    MOVSD ES:EDI,ESI                    ; 004aea6d
    MOVSD ES:EDI,ESI                    ; 004aea6e
    MOVSD ES:EDI,ESI                    ; 004aea6f
    PUSH EBX                            ; 004aea70
    LEA ESI,[EBP + 0x12]                ; 004aea71
    LEA EDI,[EBP + 0xfffffefe]          ; 004aea74
    CALL core_actor.cpp_FUN_00408cf0    ; 004aea7a
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + 0x12]                ; 004aea7f
    MOVSD ES:EDI,ESI                    ; 004aea82
    MOVSD ES:EDI,ESI                    ; 004aea83
    MOVSD ES:EDI,ESI                    ; 004aea84
    MOV ESI,dword ptr [EBP + 0x2e]      ; 004aea85
    LEA EAX,[EBP + 0xfffffefe]          ; 004aea88
    ADD ESI,0x6d8                       ; 004aea8e
    ADD ESP,0x8                         ; 004aea94
    CMP ESI,EAX                         ; 004aea97
    JZ 0x004aeab5                       ; 004aea99
        ;   XREF to: 004aeab5 (CONDITIONAL_JUMP)  ; LAB_004aeab5
    MOV EAX,dword ptr [EBP + 0xfffffefe] ; 004aea9b
    MOV dword ptr [ESI],EAX             ; 004aeaa1
    MOV EAX,dword ptr [EBP + 0xffffff02] ; 004aeaa3
    MOV dword ptr [ESI + 0x4],EAX       ; 004aeaa9
    MOV EAX,dword ptr [EBP + 0xffffff06] ; 004aeaac
    MOV dword ptr [ESI + 0x8],EAX       ; 004aeab2
    CMP dword ptr [EBX + 0x25658],0x2   ; 004aeab5
        ;   Label: LAB_004aeab5
    JZ 0x004ade7e                       ; 004aeabc
        ;   XREF to: 004ade7e (CONDITIONAL_JUMP)  ; LAB_004ade7e
    CMP dword ptr [EBX + 0x25658],0x1   ; 004aeac2
        ;   Label: LAB_004aeac2
    JZ 0x004adea5                       ; 004aeac9
        ;   XREF to: 004adea5 (CONDITIONAL_JUMP)  ; LAB_004adea5
    JMP 0x004aded9                      ; 004aeacf
        ;   XREF to: 004aded9 (UNCONDITIONAL_JUMP)  ; LAB_004aded9
    MOV dword ptr [EBX + 0x25658],0x2   ; 004aead4
        ;   Label: LAB_004aead4
    JMP 0x004ae9f8                      ; 004aeade
        ;   XREF to: 004ae9f8 (UNCONDITIONAL_JUMP)  ; LAB_004ae9f8
    MOV dword ptr [EBX + 0x10a74],ESI   ; 004aeae3
        ;   Label: LAB_004aeae3
    JMP 0x004aded9                      ; 004aeae9
        ;   XREF to: 004aded9 (UNCONDITIONAL_JUMP)  ; LAB_004aded9
    MOV dword ptr [EBX + 0xfc],0x1      ; 004aeaee
        ;   Label: LAB_004aeaee
    LEA ESP,[EBP + 0x7a]                ; 004aeaf8
    POP EBP                             ; 004aeafb
    POP EDI                             ; 004aeafc
    POP ESI                             ; 004aeafd
    POP EBX                             ; 004aeafe
    RET                                 ; 004aeaff

