; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baal_cpp_CBaal_setup_FUN_00596730(CBaal *this_ptr)
;
; Parameters:
; CBaal *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_R_Hand_005d949d
;   TerminatedCString s_Bip01_L_Hand_005d94aa
;   TerminatedCString s_baal_stand_wav_005d94b7
;   TerminatedCString s_baal_chasewalk_wav_005d94c6
;   TerminatedCString s_baal_chasefast_wav_005d94d9
;   TerminatedCString s_baal_attack_wav_005d94ec
;   TerminatedCString s_baal_attack1_wav_005d94fc
;   TerminatedCString s_baal_attack2_wav_005d950d
;   TerminatedCString s_baal_attack3_wav_005d951e
;   TerminatedCString s_baal_pain_wav_005d952f
;   TerminatedCString s_baal_die_wav_005d953d
;   TerminatedCString s_baal_warning_wav_005d954a
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   sound_sndmain.cpp_preloadSfx_FUN_00556230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596730
        ;   Label: core_baal.cpp_CBaal_setup_FUN_00596730
    PUSH ESI                            ; 00596731
    PUSH EDI                            ; 00596732
    MOV EBX,dword ptr [ESP + 0x10]      ; 00596733
    CMP dword ptr [EBX + 0x3268],0x0    ; 00596737
    JNZ 0x0059675e                      ; 0059673e
        ;   XREF to: 0059675e (CONDITIONAL_JUMP)  ; LAB_0059675e
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 00596740
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 0059674a
    MOV dword ptr [EBX + 0x2538],0x43480000 ; 00596754
    LEA EDI,[EBX + 0x158]               ; 0059675e
        ;   Label: LAB_0059675e
    PUSH EDI                            ; 00596764
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00596765
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059676a
    PUSH EDI                            ; 0059676d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0059676e
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00596773
    PUSH 0x1                            ; 00596776
    PUSH 0x5d949d                       ; 00596778 | = "Bip01 R Hand"
    PUSH EAX                            ; 0059677d
    MOV ESI,EAX                         ; 0059677e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00596780
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00596785
    PUSH 0x1                            ; 00596788
    PUSH 0x5d94aa                       ; 0059678a | = "Bip01 L Hand"
    PUSH ESI                            ; 0059678f
    MOV dword ptr [EBX + 0xd074],EAX    ; 00596790
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00596796
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0xce5c],0x0    ; 0059679b
    MOV dword ptr [EBX + 0xd078],EAX    ; 005967a5
    ADD ESP,0xc                         ; 005967ab
    MOV EAX,dword ptr [EBX + 0xd074]    ; 005967ae
    PUSH EBX                            ; 005967b4
    MOV dword ptr [EBX + 0x25a8],EAX    ; 005967b5
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 005967bb
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005967c0
    PUSH EDI                            ; 005967c3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005967c4
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005967c9
    ADD ESP,0x4                         ; 005967cc
    CMP EAX,0x9                         ; 005967cf
    JNZ 0x00596868                      ; 005967d2
        ;   XREF to: 00596868 (CONDITIONAL_JUMP)  ; LAB_00596868
    MOV dword ptr [EBX + 0x2540],0x0    ; 005967d8
    PUSH 0x5d94b7                       ; 005967e2 | = "baal_stand.wav"
        ;   Label: LAB_005967e2
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 005967e7
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 005967ec
    PUSH 0x5d94c6                       ; 005967ef | = "baal_chasewalk.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 005967f4
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 005967f9
    PUSH 0x5d94d9                       ; 005967fc | = "baal_chasefast.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 00596801
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 00596806
    PUSH 0x5d94ec                       ; 00596809 | = "baal_attack.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 0059680e
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 00596813
    PUSH 0x5d94fc                       ; 00596816 | = "baal_attack1.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 0059681b
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 00596820
    PUSH 0x5d950d                       ; 00596823 | = "baal_attack2.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 00596828
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 0059682d
    PUSH 0x5d951e                       ; 00596830 | = "baal_attack3.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 00596835
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 0059683a
    PUSH 0x5d952f                       ; 0059683d | = "baal_pain.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 00596842
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 00596847
    PUSH 0x5d953d                       ; 0059684a | = "baal_die.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 0059684f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 00596854
    PUSH 0x5d954a                       ; 00596857 | = "baal_warning.wav"
    CALL sound_sndmain.cpp_preloadSfx_FUN_00556230 ; 0059685c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_preloadSfx_FUN_00556230(char * filename)
    ADD ESP,0x4                         ; 00596861
    POP EDI                             ; 00596864
    POP ESI                             ; 00596865
    POP EBX                             ; 00596866
    RET                                 ; 00596867
    MOV dword ptr [EBX + 0x2540],0x2    ; 00596868
        ;   Label: LAB_00596868
    JMP 0x005967e2                      ; 00596872
        ;   XREF to: 005967e2 (UNCONDITIONAL_JUMP)  ; LAB_005967e2

