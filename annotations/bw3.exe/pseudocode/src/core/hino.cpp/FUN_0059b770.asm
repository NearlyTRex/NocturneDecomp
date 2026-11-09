; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hino_cpp_FUN_0059b770(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005d9beb+1
;   TerminatedCString s_Bip01_R_Hand_005d9bf7
;   TerminatedCString s_hino_stand_fly_wav_005d9c04
;   TerminatedCString s_hino_walk_fly_wav_005d9c17
;   TerminatedCString s_hino_run_fly_wav_005d9c29
;   TerminatedCString s_hino_reverse_wav_005d9c3a
;   TerminatedCString s_hino_attack_fly_wav_005d9c4b
;   TerminatedCString s_hino_attack_fly2_wav_005d9c5f
;   TerminatedCString s_hino_damage_fly_wav_005d9c74
;   TerminatedCString s_hino_die_fly_wav_005d9c88
;   TerminatedCString s_hino_warning_wav_005d9c99
;   TerminatedCString s_hino_big_attack_wav_005d9caa
;   TerminatedCString s_hino_appear_wav_005d9cbe
;   TerminatedCString s_hino_disappear_wav_005d9cce
;   undefined4 DAT_02d24c4c
;   ... and 1 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_00548090
;   core_skeleton.cpp_FUN_0054e6b0
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b770
        ;   Label: core_hino.cpp_FUN_0059b770
    PUSH ESI                            ; 0059b771
    PUSH EDI                            ; 0059b772
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059b773
    PUSH EBX                            ; 0059b777
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 0059b778
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    MOV EDX,dword ptr [EBX + 0x3268]    ; 0059b77d
    ADD ESP,0x4                         ; 0059b783
    TEST EDX,EDX                        ; 0059b786
    JNZ 0x0059b7a8                      ; 0059b788
        ;   XREF to: 0059b7a8 (CONDITIONAL_JUMP)  ; LAB_0059b7a8
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 0059b78a
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 0059b794
    MOV dword ptr [EBX + 0x2538],0x43160000 ; 0059b79e
    LEA ESI,[EBX + 0x158]               ; 0059b7a8
        ;   Label: LAB_0059b7a8
    PUSH ESI                            ; 0059b7ae
    CALL core_skeleton.cpp_FUN_0054e6b0 ; 0059b7af
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059b7b4
    PUSH ESI                            ; 0059b7b7
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0059b7b8
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059b7bd
    PUSH 0x1                            ; 0059b7c0
    PUSH 0x5d9bec                       ; 0059b7c2 | s_Bip01_Head_005d9beb+1
    PUSH EAX                            ; 0059b7c7
    MOV EDI,EAX                         ; 0059b7c8
    CALL core_skeleton.cpp_FUN_00548090 ; 0059b7ca
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059b7cf
    PUSH 0x1                            ; 0059b7d2
    PUSH 0x5d9bf7                       ; 0059b7d4 | = "Bip01 R Hand"
    PUSH EDI                            ; 0059b7d9
    MOV [0x02d24c4c],EAX                ; 0059b7da | DAT_02d24c4c
    CALL core_skeleton.cpp_FUN_00548090 ; 0059b7df
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059b7e4
    PUSH ESI                            ; 0059b7e7
    MOV [0x02d24c54],EAX                ; 0059b7e8 | DAT_02d24c54
    MOV dword ptr [EBX + 0x25a8],EAX    ; 0059b7ed
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0059b7f3
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059b7f8
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059b7fb
    PUSH ESI                            ; 0059b805
    MOV dword ptr [EBX + 0xf8],0x0      ; 0059b806
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059b810
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059b815
    ADD ESP,0x4                         ; 0059b818
    CMP EAX,0x8                         ; 0059b81b
    JNZ 0x0059b8e2                      ; 0059b81e
        ;   XREF to: 0059b8e2 (CONDITIONAL_JUMP)  ; LAB_0059b8e2
    MOV dword ptr [EBX + 0x2540],0x0    ; 0059b824
    MOV dword ptr [EBX + 0xd054],0x0    ; 0059b82e
        ;   Label: LAB_0059b82e
    PUSH 0x5d9c04                       ; 0059b838 | = "hino_stand_fly.wav"
    MOV dword ptr [EBX + 0xd058],0x0    ; 0059b83d
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b847
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b84c
    PUSH 0x5d9c17                       ; 0059b84f | = "hino_walk_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b854
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b859
    PUSH 0x5d9c29                       ; 0059b85c | = "hino_run_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b861
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b866
    PUSH 0x5d9c3a                       ; 0059b869 | = "hino_reverse.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b86e
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b873
    PUSH 0x5d9c4b                       ; 0059b876 | = "hino_attack_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b87b
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b880
    PUSH 0x5d9c5f                       ; 0059b883 | = "hino_attack_fly2.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b888
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b88d
    PUSH 0x5d9c74                       ; 0059b890 | = "hino_damage_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b895
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b89a
    PUSH 0x5d9c88                       ; 0059b89d | = "hino_die_fly.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b8a2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b8a7
    PUSH 0x5d9c99                       ; 0059b8aa | = "hino_warning.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b8af
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b8b4
    PUSH 0x5d9caa                       ; 0059b8b7 | = "hino_big_attack.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b8bc
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b8c1
    PUSH 0x5d9cbe                       ; 0059b8c4 | = "hino_appear.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b8c9
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b8ce
    PUSH 0x5d9cce                       ; 0059b8d1 | = "hino_disappear.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 0059b8d6
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0059b8db
    POP EDI                             ; 0059b8de
    POP ESI                             ; 0059b8df
    POP EBX                             ; 0059b8e0
    RET                                 ; 0059b8e1
    MOV dword ptr [EBX + 0x2540],0x2    ; 0059b8e2
        ;   Label: LAB_0059b8e2
    JMP 0x0059b82e                      ; 0059b8ec
        ;   XREF to: 0059b82e (UNCONDITIONAL_JUMP)  ; LAB_0059b82e

