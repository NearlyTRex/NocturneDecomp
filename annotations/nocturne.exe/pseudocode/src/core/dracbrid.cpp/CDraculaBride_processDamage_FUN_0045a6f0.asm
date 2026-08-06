; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_processDamage_FUN_0045a6f0(CDraculaBride *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_bride_launch_wav_0057d836
;   TerminatedCString s_bride_die_wav_0057d847
;   TerminatedCString s_bride_hurt_wav_0057d856
;   double DOUBLE_0057d866 = 2
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_FUN_00427730
;   core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0
;   core_dracbrid.cpp_CDraculaBride_FUN_0045ab40
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a6f0
        ;   Label: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0045a6f0
    PUSH ESI                            ; 0045a6f1
    PUSH EDI                            ; 0045a6f2
    PUSH EBP                            ; 0045a6f3
    SUB ESP,0x2c                        ; 0045a6f4
    MOV ESI,dword ptr [ESP + 0x40]      ; 0045a6f7
    MOV EDI,dword ptr [ESP + 0x44]      ; 0045a6fb
    MOV EDX,dword ptr [EDI + 0x28]      ; 0045a6ff
    XOR EBP,EBP                         ; 0045a702
    CMP EDX,0x7                         ; 0045a704
    JZ 0x0045a800                       ; 0045a707
        ;   XREF to: 0045a800 (CONDITIONAL_JUMP)  ; LAB_0045a800
    CMP dword ptr [EDI + 0x30],0x68     ; 0045a70d
        ;   Label: LAB_0045a70d
    JNZ 0x0045a718                      ; 0045a711
        ;   XREF to: 0045a718 (CONDITIONAL_JUMP)  ; LAB_0045a718
    MOV EBP,0x1                         ; 0045a713
    CMP dword ptr [EDI + 0x30],0x6c     ; 0045a718
        ;   Label: LAB_0045a718
    JNZ 0x0045a75c                      ; 0045a71c
        ;   XREF to: 0045a75c (CONDITIONAL_JUMP)  ; LAB_0045a75c
    PUSH 0x0                            ; 0045a71e
    LEA EAX,[ESP + 0x4]                 ; 0045a720
    PUSH EAX                            ; 0045a724
    LEA EAX,[ESI + 0x150]               ; 0045a725
    PUSH EAX                            ; 0045a72b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 0045a72c
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0045a731
    PUSH EAX                            ; 0045a734
    LEA EAX,[ESP + 0x1c]                ; 0045a735
    PUSH EAX                            ; 0045a739
    PUSH ESI                            ; 0045a73a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0045a73b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0045a740
    PUSH 0x0                            ; 0045a743
    PUSH 0x41200000                     ; 0045a745
    PUSH 0x0                            ; 0045a74a
    PUSH 0x0                            ; 0045a74c
    LEA EAX,[ESP + 0x28]                ; 0045a74e
    PUSH EAX                            ; 0045a752
    PUSH ESI                            ; 0045a753
    CALL core_charactr.cpp_CCharacter_FUN_00427730 ; 0045a754
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00427730(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0045a759
    PUSH EDI                            ; 0045a75c
        ;   Label: LAB_0045a75c
    PUSH ESI                            ; 0045a75d
    CALL core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0 ; 0045a75e
        ;   XREF to: 0045a6a0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(CDraculaBride * this_ptr, SDamageInfo * damage_info)
    FLD float ptr [EDI + 0x4]           ; 0045a763
    ADD ESP,0x8                         ; 0045a766
    FSUBR float ptr [ESI + 0x2434]      ; 0045a769
    LEA EBX,[ESI + 0x150]               ; 0045a76f
    FST float ptr [ESI + 0x2434]        ; 0045a775
    FLDZ                                ; 0045a77b
    FCOMPP                              ; 0045a77d
    FNSTSW AX                           ; 0045a77f
    SAHF                                ; 0045a781
    JC 0x0045a890                       ; 0045a782
        ;   XREF to: 0045a890 (CONDITIONAL_JUMP)  ; LAB_0045a890
    PUSH EBX                            ; 0045a788
    MOV dword ptr [ESI + 0x2434],0x0    ; 0045a789
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0045a793
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045a798
    ADD ESP,0x4                         ; 0045a79b
    CMP EAX,0x11                        ; 0045a79e
    JZ 0x0045a7d9                       ; 0045a7a1
        ;   XREF to: 0045a7d9 (CONDITIONAL_JUMP)  ; LAB_0045a7d9
    CMP EAX,0x10                        ; 0045a7a3
    JZ 0x0045a7d9                       ; 0045a7a6
        ;   XREF to: 0045a7d9 (CONDITIONAL_JUMP)  ; LAB_0045a7d9
    CMP EAX,0xa                         ; 0045a7a8
    JZ 0x0045a7d9                       ; 0045a7ab
        ;   XREF to: 0045a7d9 (CONDITIONAL_JUMP)  ; LAB_0045a7d9
    CMP EAX,0x7                         ; 0045a7ad
    JZ 0x0045a7d9                       ; 0045a7b0
        ;   XREF to: 0045a7d9 (CONDITIONAL_JUMP)  ; LAB_0045a7d9
    TEST EBP,EBP                        ; 0045a7b2
    JZ 0x0045a859                       ; 0045a7b4
        ;   XREF to: 0045a859 (CONDITIONAL_JUMP)  ; LAB_0045a859
    PUSH 0x1                            ; 0045a7ba
    PUSH 0x7                            ; 0045a7bc
    PUSH EBX                            ; 0045a7be
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0045a7bf
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a7c4
    PUSH 0x57d836                       ; 0045a7c7 | = "bride-launch.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0045a7cc
    PUSH ESI                            ; 0045a7d2
    CALL dword ptr [EAX + 0x28]         ; 0045a7d3
    ADD ESP,0x8                         ; 0045a7d6
    PUSH 0x3ecccccd                     ; 0045a7d9
        ;   Label: LAB_0045a7d9
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0045a7de
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 0045a7e3
    TEST EAX,EAX                        ; 0045a7e6
    JNZ 0x0045a86b                      ; 0045a7e8
        ;   XREF to: 0045a86b (CONDITIONAL_JUMP)  ; LAB_0045a86b
    PUSH EDI                            ; 0045a7ee
        ;   Label: LAB_0045a7ee
    PUSH ESI                            ; 0045a7ef
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0045a7f0
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0045a7f5
    ADD ESP,0x2c                        ; 0045a7f8
    POP EBP                             ; 0045a7fb
    POP EDI                             ; 0045a7fc
    POP ESI                             ; 0045a7fd
    POP EBX                             ; 0045a7fe
    RET                                 ; 0045a7ff
    FLD float ptr [EDI + 0x4]           ; 0045a800
        ;   Label: LAB_0045a800
    LEA EAX,[EDI + 0x1c]                ; 0045a803
    FLD ST0                             ; 0045a806
    FMUL double ptr [0x0057d866]        ; 0045a808 | DOUBLE_0057d866
    PUSH EAX                            ; 0045a80e
    LEA EAX,[ESP + 0x10]                ; 0045a80f
    XOR EBX,EBX                         ; 0045a813
    PUSH EAX                            ; 0045a815
    FSTP ST1                            ; 0045a816
    PUSH ESI                            ; 0045a818
    FSTP float ptr [EDI + 0x4]          ; 0045a819
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0045a81c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0045a821
    PUSH 0xffff                         ; 0045a824
        ;   Label: LAB_0045a824
    PUSH EBP                            ; 0045a829
    PUSH 0x4000                         ; 0045a82a
    PUSH 0x4000                         ; 0045a82f
    PUSH EBP                            ; 0045a834
    LEA EAX,[ESP + 0x20]                ; 0045a835
    PUSH EAX                            ; 0045a839
    MOV ECX,dword ptr [0x005b80f0]      ; 0045a83a | g_CFireEffect_PTR_005b80f0
    PUSH ECX                            ; 0045a840
    INC EBX                             ; 0045a841
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 0045a842
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0045a847
    CMP EBX,0x5                         ; 0045a84a
    JL 0x0045a824                       ; 0045a84d
        ;   XREF to: 0045a824 (CONDITIONAL_JUMP)  ; LAB_0045a824
    MOV EBP,0x1                         ; 0045a84f
    JMP 0x0045a70d                      ; 0045a854
        ;   XREF to: 0045a70d (UNCONDITIONAL_JUMP)  ; LAB_0045a70d
    PUSH 0x1                            ; 0045a859
        ;   Label: LAB_0045a859
    PUSH 0xa                            ; 0045a85b
    PUSH EBX                            ; 0045a85d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0045a85e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a863
    JMP 0x0045a7d9                      ; 0045a866
        ;   XREF to: 0045a7d9 (UNCONDITIONAL_JUMP)  ; LAB_0045a7d9
    PUSH 0x40000000                     ; 0045a86b
        ;   Label: LAB_0045a86b
    PUSH 0x57d847                       ; 0045a870 | = "bride-die?.wav"
    PUSH ESI                            ; 0045a875
    CALL core_dracbrid.cpp_CDraculaBride_FUN_0045ab40 ; 0045a876
        ;   XREF to: 0045ab40 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_0045ab40(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0045a87b
    PUSH EDI                            ; 0045a87e
    PUSH ESI                            ; 0045a87f
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0045a880
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0045a885
    ADD ESP,0x2c                        ; 0045a888
    POP EBP                             ; 0045a88b
    POP EDI                             ; 0045a88c
    POP ESI                             ; 0045a88d
    POP EBX                             ; 0045a88e
    RET                                 ; 0045a88f
    PUSH EBX                            ; 0045a890
        ;   Label: LAB_0045a890
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0045a891
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045a896
    ADD ESP,0x4                         ; 0045a899
    CMP EAX,0x8                         ; 0045a89c
    JNZ 0x0045a8ee                      ; 0045a89f
        ;   XREF to: 0045a8ee (CONDITIONAL_JUMP)  ; LAB_0045a8ee
    PUSH 0x1                            ; 0045a8a1
        ;   Label: LAB_0045a8a1
    PUSH 0x1                            ; 0045a8a3
    LEA EAX,[ESI + 0x150]               ; 0045a8a5
        ;   Label: LAB_0045a8a5
    PUSH EAX                            ; 0045a8ab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0045a8ac
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a8b1
    PUSH 0x3ecccccd                     ; 0045a8b4
        ;   Label: LAB_0045a8b4
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0045a8b9
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 0045a8be
    TEST EAX,EAX                        ; 0045a8c1
    JZ 0x0045a7ee                       ; 0045a8c3
        ;   XREF to: 0045a7ee (CONDITIONAL_JUMP)  ; LAB_0045a7ee
    PUSH 0x40000000                     ; 0045a8c9
    PUSH 0x57d856                       ; 0045a8ce | = "bride-hurt?.wav"
    PUSH ESI                            ; 0045a8d3
    CALL core_dracbrid.cpp_CDraculaBride_FUN_0045ab40 ; 0045a8d4
        ;   XREF to: 0045ab40 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_0045ab40(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0045a8d9
    PUSH EDI                            ; 0045a8dc
    PUSH ESI                            ; 0045a8dd
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0045a8de
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0045a8e3
    ADD ESP,0x2c                        ; 0045a8e6
    POP EBP                             ; 0045a8e9
    POP EDI                             ; 0045a8ea
    POP ESI                             ; 0045a8eb
    POP EBX                             ; 0045a8ec
    RET                                 ; 0045a8ed
    CMP EAX,0x9                         ; 0045a8ee
        ;   Label: LAB_0045a8ee
    JZ 0x0045a8a1                       ; 0045a8f1
        ;   XREF to: 0045a8a1 (CONDITIONAL_JUMP)  ; LAB_0045a8a1
    CMP EAX,0x2                         ; 0045a8f3
    JZ 0x0045a8a1                       ; 0045a8f6
        ;   XREF to: 0045a8a1 (CONDITIONAL_JUMP)  ; LAB_0045a8a1
    TEST EAX,EAX                        ; 0045a8f8
    JZ 0x0045a901                       ; 0045a8fa
        ;   XREF to: 0045a901 (CONDITIONAL_JUMP)  ; LAB_0045a901
    CMP EAX,0xe                         ; 0045a8fc
    JNZ 0x0045a94f                      ; 0045a8ff
        ;   XREF to: 0045a94f (CONDITIONAL_JUMP)  ; LAB_0045a94f
    PUSH 0x2                            ; 0045a901
        ;   Label: LAB_0045a901
    PUSH 0x0                            ; 0045a903
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0045a905
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 0045a90a
    MOV EBX,EAX                         ; 0045a90d
    TEST EAX,EAX                        ; 0045a90f
    JNZ 0x0045a926                      ; 0045a911
        ;   XREF to: 0045a926 (CONDITIONAL_JUMP)  ; LAB_0045a926
    PUSH 0x1                            ; 0045a913
    PUSH 0x4                            ; 0045a915
    LEA EAX,[ESI + 0x150]               ; 0045a917
    PUSH EAX                            ; 0045a91d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0045a91e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a923
    CMP EBX,0x1                         ; 0045a926
        ;   Label: LAB_0045a926
    JNZ 0x0045a93d                      ; 0045a929
        ;   XREF to: 0045a93d (CONDITIONAL_JUMP)  ; LAB_0045a93d
    PUSH EBX                            ; 0045a92b
    PUSH 0x5                            ; 0045a92c
    LEA EAX,[ESI + 0x150]               ; 0045a92e
    PUSH EAX                            ; 0045a934
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0045a935
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a93a
    CMP EBX,0x2                         ; 0045a93d
        ;   Label: LAB_0045a93d
    JNZ 0x0045a8b4                      ; 0045a940
        ;   XREF to: 0045a8b4 (CONDITIONAL_JUMP)  ; LAB_0045a8b4
    PUSH 0x1                            ; 0045a946
    PUSH 0x6                            ; 0045a948
    JMP 0x0045a8a5                      ; 0045a94a
        ;   XREF to: 0045a8a5 (UNCONDITIONAL_JUMP)  ; LAB_0045a8a5
    CMP EAX,0x13                        ; 0045a94f
        ;   Label: LAB_0045a94f
    JZ 0x0045a901                       ; 0045a952
        ;   XREF to: 0045a901 (CONDITIONAL_JUMP)  ; LAB_0045a901
    CMP EAX,0xc                         ; 0045a954
    JZ 0x0045a901                       ; 0045a957
        ;   XREF to: 0045a901 (CONDITIONAL_JUMP)  ; LAB_0045a901
    CMP EAX,0x12                        ; 0045a959
    JZ 0x0045a901                       ; 0045a95c
        ;   XREF to: 0045a901 (CONDITIONAL_JUMP)  ; LAB_0045a901
    CMP EAX,0x14                        ; 0045a95e
    JZ 0x0045a901                       ; 0045a961
        ;   XREF to: 0045a901 (CONDITIONAL_JUMP)  ; LAB_0045a901
    CMP EAX,0x15                        ; 0045a963
    JZ 0x0045a901                       ; 0045a966
        ;   XREF to: 0045a901 (CONDITIONAL_JUMP)  ; LAB_0045a901
    JMP 0x0045a8b4                      ; 0045a968
        ;   XREF to: 0045a8b4 (UNCONDITIONAL_JUMP)  ; LAB_0045a8b4

