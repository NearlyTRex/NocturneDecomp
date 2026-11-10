; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mattnntt_cpp_CMattanntote_setup_FUN_00591d10(CMattanntote *this_ptr)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_005d8f3d
;   TerminatedCString s_Bip01_R_Hand_005d8f4a
;   TerminatedCString s_Bip01_L_Toe0_005d8f57
;   TerminatedCString s_Bip01_R_Toe0_005d8f64
;   TerminatedCString s_Bip01_L_Foot_005d8f71
;   TerminatedCString s_Bip01_R_Foot_005d8f7e
;   TerminatedCString s_mann_firestaff_wav_005d8f8b
;   TerminatedCString s_mann_stand_wav_005d8f9e
;   TerminatedCString s_mann_chasewalk_wav_005d8fad
;   TerminatedCString s_mann_chasefast_wav_005d8fc0
;   TerminatedCString s_mann_attack_wav_005d8fd3
;   TerminatedCString s_mann_attack1_wav_005d8fe3
;   TerminatedCString s_mann_attack2_wav_005d8ff4
;   TerminatedCString s_mann_attack3_wav_005d9005
;   TerminatedCString s_mann_pain_wav_005d9016
;   ... and 4 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591d10
        ;   Label: core_mattnntt.cpp_CMattanntote_setup_FUN_00591d10
    PUSH ESI                            ; 00591d11
    PUSH EDI                            ; 00591d12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00591d13
    CMP dword ptr [EBX + 0x3268],0x0    ; 00591d17
    JNZ 0x00591d3e                      ; 00591d1e
        ;   XREF to: 00591d3e (CONDITIONAL_JUMP)  ; LAB_00591d3e
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 00591d20
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 00591d2a
    MOV dword ptr [EBX + 0x2538],0x43480000 ; 00591d34
    LEA EDI,[EBX + 0x158]               ; 00591d3e
        ;   Label: LAB_00591d3e
    PUSH EDI                            ; 00591d44
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00591d45
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00591d4a
    PUSH EDI                            ; 00591d4d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00591d4e
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00591d53
    PUSH 0x1                            ; 00591d56
    PUSH 0x5d8f3d                       ; 00591d58 | = "Bip01 L Hand"
    PUSH EAX                            ; 00591d5d
    MOV ESI,EAX                         ; 00591d5e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00591d60
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00591d65
    PUSH 0x1                            ; 00591d68
    PUSH 0x5d8f4a                       ; 00591d6a | = "Bip01 R Hand"
    PUSH ESI                            ; 00591d6f
    MOV dword ptr [EBX + 0xd078],EAX    ; 00591d70
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00591d76
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00591d7b
    PUSH 0x1                            ; 00591d7e
    PUSH 0x5d8f57                       ; 00591d80 | = "Bip01 L Toe0"
    PUSH ESI                            ; 00591d85
    MOV dword ptr [EBX + 0xd074],EAX    ; 00591d86
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00591d8c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00591d91
    PUSH 0x1                            ; 00591d94
    PUSH 0x5d8f64                       ; 00591d96 | = "Bip01 R Toe0"
    PUSH ESI                            ; 00591d9b
    MOV dword ptr [EBX + 0xd084],EAX    ; 00591d9c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00591da2
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00591da7
    PUSH 0x1                            ; 00591daa
    PUSH 0x5d8f71                       ; 00591dac | = "Bip01 L Foot"
    PUSH ESI                            ; 00591db1
    MOV dword ptr [EBX + 0xd088],EAX    ; 00591db2
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00591db8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00591dbd
    PUSH 0x1                            ; 00591dc0
    PUSH 0x5d8f7e                       ; 00591dc2 | = "Bip01 R Foot"
    PUSH ESI                            ; 00591dc7
    MOV dword ptr [EBX + 0xd07c],EAX    ; 00591dc8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00591dce
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0xce5c],0x0    ; 00591dd3
    MOV dword ptr [EBX + 0xd080],EAX    ; 00591ddd
    MOV EAX,dword ptr [EBX + 0xd078]    ; 00591de3
    MOV dword ptr [EBX + 0x2620],EAX    ; 00591de9
    ADD ESP,0xc                         ; 00591def
    MOV EAX,dword ptr [EBX + 0xd074]    ; 00591df2
    PUSH EBX                            ; 00591df8
    MOV dword ptr [EBX + 0x25a8],EAX    ; 00591df9
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 00591dff
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00591e04
    PUSH EDI                            ; 00591e07
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00591e08
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00591e0d
    ADD ESP,0x4                         ; 00591e10
    CMP EAX,0x9                         ; 00591e13
    JNZ 0x00591ed3                      ; 00591e16
        ;   XREF to: 00591ed3 (CONDITIONAL_JUMP)  ; LAB_00591ed3
    MOV dword ptr [EBX + 0x2540],0x0    ; 00591e1c
    PUSH 0x5d8f8b                       ; 00591e26 | = "mann_firestaff.wav"
        ;   Label: LAB_00591e26
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e2b
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e30
    PUSH 0x5d8f9e                       ; 00591e33 | = "mann_stand.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e38
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e3d
    PUSH 0x5d8fad                       ; 00591e40 | = "mann_chasewalk.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e45
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e4a
    PUSH 0x5d8fc0                       ; 00591e4d | = "mann_chasefast.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e52
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e57
    PUSH 0x5d8fd3                       ; 00591e5a | = "mann_attack.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e5f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e64
    PUSH 0x5d8fe3                       ; 00591e67 | = "mann_attack1.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e6c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e71
    PUSH 0x5d8ff4                       ; 00591e74 | = "mann_attack2.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e79
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e7e
    PUSH 0x5d9005                       ; 00591e81 | = "mann_attack3.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e86
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e8b
    PUSH 0x5d9016                       ; 00591e8e | = "mann_pain.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591e93
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591e98
    PUSH 0x5d9024                       ; 00591e9b | = "mann_die.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591ea0
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591ea5
    PUSH 0x5d9031                       ; 00591ea8 | = "mann_warning.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591ead
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591eb2
    PUSH 0x5d9042                       ; 00591eb5 | = "mann_appear.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591eba
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591ebf
    PUSH 0x5d9052                       ; 00591ec2 | = "mann_disappear.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00591ec7
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00591ecc
    POP EDI                             ; 00591ecf
    POP ESI                             ; 00591ed0
    POP EBX                             ; 00591ed1
    RET                                 ; 00591ed2
    MOV dword ptr [EBX + 0x2540],0x2    ; 00591ed3
        ;   Label: LAB_00591ed3
    JMP 0x00591e26                      ; 00591edd
        ;   XREF to: 00591e26 (UNCONDITIONAL_JUMP)  ; LAB_00591e26

