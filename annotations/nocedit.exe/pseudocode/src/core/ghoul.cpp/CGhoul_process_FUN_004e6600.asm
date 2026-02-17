; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004e6600(CGhoul *this_ptr,float delta_time)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x38c]:4  local_38c
; undefined4       Stack[-0x388]:4  local_388
; undefined4       Stack[-0x380]:4  local_380
; undefined4       Stack[-0x37c]:4  local_37c
; undefined1       Stack[-0x378]:1  local_378
; undefined1       Stack[-0x314]:1  local_314
; undefined4       Stack[-0x310]:4  local_310
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined4       Stack[-0x2dc]:4  local_2dc
; undefined1       Stack[-0x2d8]:1  local_2d8
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined1       Stack[-0x29c]:1  local_29c
; undefined4       Stack[-0x298]:4  local_298
; undefined4       Stack[-0x280]:4  local_280
; undefined4       Stack[-0x27c]:4  local_27c
; undefined4       Stack[-0x278]:4  local_278
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined1       Stack[-0x260]:1  local_260
; undefined1       Stack[-0x25f]:1  local_25f
; undefined1       Stack[-0x240]:1  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x230]:4  local_230
; undefined1       Stack[-0x228]:1  local_228
; undefined1       Stack[-0x21c]:1  local_21c
; undefined1       Stack[-0x210]:1  local_210
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined1       Stack[-0x1ec]:1  local_1ec
; undefined1       Stack[-0x1e0]:1  local_1e0
; undefined1       Stack[-0x1d4]:1  local_1d4
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined1       Stack[-0x1bc]:1  local_1bc
; undefined1       Stack[-0x1b0]:1  local_1b0
; undefined1       Stack[-0x1a4]:1  local_1a4
; undefined1       Stack[-0x198]:1  local_198
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined1       Stack[-0x15c]:1  local_15c
; undefined1       Stack[-0x150]:1  local_150
; undefined1       Stack[-0x144]:1  local_144
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined1       Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x108]:1  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined1       Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined8       Stack[-0xb4]:8  local_b4
; undefined8       Stack[-0xac]:8  local_ac
; undefined8       Stack[-0xa4]:8  local_a4
; undefined8       Stack[-0x9c]:8  local_9c
; undefined8       Stack[-0x8c]:8  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_004e6580 = 004e6a50
;   void* switchdataD_004e65b8 = 004e7477
;   TerminatedCString s_ghoul_eat_wav_0062dc66
;   TerminatedCString s_ghoul_dig_wav_1_3_0062dc76
;   TerminatedCString s_ghoul_eat_wav_1_3_0062dc8b
;   TerminatedCString s_ghoul_eat_wav_1_3_0062dca0
;   undefined4 s_houl-eat-?.wav_@1.3_0062dca1
;   TerminatedCString s_ghoul_dig_wav_1_3_0062dcb5
;   undefined4 s_houl-dig-?.wav_@1.3_0062dcb6
;   undefined4 s_oul-dig-?.wav_@1.3_0062dcb7
;   undefined4 s_ul-dig-?.wav_@1.3_0062dcb8
;   TerminatedCString s_s_confused_while_walking_0062dcca
;   TerminatedCString s_ghoul_alert_wav_0062dcf4
;   TerminatedCString s_ghoul_scream_wav_0062dd06
;   ... and 56 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
;   core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   ... and 25 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6600
        ;   Label: core_ghoul.cpp_CGhoul_process_FUN_004e6600
    PUSH ESI                            ; 004e6601
    PUSH EDI                            ; 004e6602
    PUSH EBP                            ; 004e6603
    MOV EBP,ESP                         ; 004e6604
    SUB ESP,0x368                       ; 004e6606
    SUB EBP,0x7a                        ; 004e660c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004e660f
    PUSH dword ptr [EBP + 0x92]         ; 004e6615
    PUSH EBX                            ; 004e661b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004e661c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e6621
    TEST EAX,EAX                        ; 004e6624
    JZ 0x004e6a48                       ; 004e6626
        ;   XREF to: 004e6a48 (CONDITIONAL_JUMP)  ; LAB_004e6a48
    LEA EAX,[EBX + 0x23ac]              ; 004e662c
    MOV dword ptr [EAX + 0x8],0x0       ; 004e6632
    FLD float ptr [EBP + 0x92]          ; 004e6639
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e663f
    MOV dword ptr [EAX + 0x4],EDX       ; 004e6642
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e6645
    MOV dword ptr [EAX],EDX             ; 004e6648
    FMUL float ptr [EBX + 0xbe24]       ; 004e664a
    LEA EAX,[EBX + 0x158]               ; 004e6650
    FSTP float ptr [EBP + 0x26]         ; 004e6656
    MOV dword ptr [EBP + 0x72],EAX      ; 004e6659
    FLD float ptr [EBP + 0x26]          ; 004e665c
        ;   Label: caseD_e
    FLDZ                                ; 004e665f
    FCOMPP                              ; 004e6661
    FNSTSW AX                           ; 004e6663
    SAHF                                ; 004e6665
    JC 0x004e6f80                       ; 004e6666
        ;   XREF to: 004e6f80 (CONDITIONAL_JUMP)  ; LAB_004e6f80
    PUSH 0x1                            ; 004e666c
    MOV EDX,dword ptr [EBP + 0x72]      ; 004e666e
    PUSH EDX                            ; 004e6671
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004e6672
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e6677
    FLD float ptr [EBP + 0x76]          ; 004e667a
    FMUL double ptr [0x0062dd5a]        ; 004e667d | DOUBLE_0062dd5a
    FLD float ptr [EBP + 0x92]          ; 004e6683
    FSTP double ptr [EBP + -0x2]        ; 004e6689
    FMUL double ptr [EBP + -0x2]        ; 004e668c
    FLD float ptr [EBX + 0xbe24]        ; 004e668f
    FLD double ptr [EBP + -0x2]         ; 004e6695
    FMUL double ptr [0x0062dd62]        ; 004e6698 | DOUBLE_0062dd62
    FLD float ptr [EBX + 0xbe24]        ; 004e669e
    FMULP ST3                           ; 004e66a4
    MOV ECX,dword ptr [EBP + 0x72]      ; 004e66a6
    ADD ESP,0x8                         ; 004e66a9
    FMULP                               ; 004e66ac
    PUSH ECX                            ; 004e66ae
    FXCH                                ; 004e66af
    FSTP float ptr [EBX + 0x2434]       ; 004e66b1
    FSTP float ptr [EBX + 0x2438]       ; 004e66b7
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e66bd
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e66c2
    ADD ESP,0x4                         ; 004e66c5
    MOV EDI,EAX                         ; 004e66c8
    CMP EAX,0x11                        ; 004e66ca
    JNZ 0x004e66fc                      ; 004e66cd
        ;   XREF to: 004e66fc (CONDITIONAL_JUMP)  ; LAB_004e66fc
    FLD float ptr [EBX + 0xbe24]        ; 004e66cf
    FLD double ptr [0x0062dd6a]         ; 004e66d5 | DOUBLE_0062dd6a
    FLD double ptr [EBP + -0x2]         ; 004e66db
    FMUL ST1                            ; 004e66de
    FLD float ptr [EBX + 0x2438]        ; 004e66e0
    FMUL ST2                            ; 004e66e6
    FXCH                                ; 004e66e8
    FMULP ST3                           ; 004e66ea
    FXCH                                ; 004e66ec
    FSTP ST1                            ; 004e66ee
    FSTP float ptr [EBX + 0x2438]       ; 004e66f0
    FSTP float ptr [EBX + 0x2434]       ; 004e66f6
    PUSH dword ptr [EBP + 0x92]         ; 004e66fc
        ;   Label: LAB_004e66fc
    PUSH EBX                            ; 004e6702
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 004e6703
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e6708
    TEST EAX,EAX                        ; 004e670b
    JZ 0x004e7fd7                       ; 004e670d
        ;   XREF to: 004e7fd7 (CONDITIONAL_JUMP)  ; LAB_004e7fd7
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004e6713
    CMP EAX,0x2                         ; 004e6719
    JNC 0x004e6fd5                      ; 004e671c
        ;   XREF to: 004e6fd5 (CONDITIONAL_JUMP)  ; LAB_004e6fd5
    CMP EAX,0x1                         ; 004e6722
    JNZ 0x004e6fdc                      ; 004e6725
        ;   XREF to: 004e6fdc (CONDITIONAL_JUMP)  ; LAB_004e6fdc
    PUSH EAX                            ; 004e672b
    PUSH EAX                            ; 004e672c
    LEA EAX,[EBX + 0x158]               ; 004e672d
        ;   Label: LAB_004e672d
    PUSH EAX                            ; 004e6733
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e6734
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e6739
        ;   Label: LAB_004e6739
    LEA EAX,[EBX + 0x23ac]              ; 004e673c
    MOV dword ptr [EAX + 0x8],0x0       ; 004e6742
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e6749
    MOV dword ptr [EAX + 0x4],EDX       ; 004e674c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e674f
    MOV dword ptr [EAX],EDX             ; 004e6752
    FLD float ptr [EBX + 0xbe38]        ; 004e6754
        ;   Label: LAB_004e6754
    FLDZ                                ; 004e675a
    FCOMPP                              ; 004e675c
    FNSTSW AX                           ; 004e675e
    SAHF                                ; 004e6760
    JNC 0x004e6775                      ; 004e6761
        ;   XREF to: 004e6775 (CONDITIONAL_JUMP)  ; LAB_004e6775
    FLD float ptr [EBX + 0xbe38]        ; 004e6763
    FSUB float ptr [EBP + 0x92]         ; 004e6769
    FSTP float ptr [EBX + 0xbe38]       ; 004e676f
    PUSH EBX                            ; 004e6775
        ;   Label: LAB_004e6775
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 004e6776
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e677b
    PUSH EBX                            ; 004e677e
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 004e677f
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e6784
    TEST EAX,EAX                        ; 004e6787
    JZ 0x004e6887                       ; 004e6789
        ;   XREF to: 004e6887 (CONDITIONAL_JUMP)  ; LAB_004e6887
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 004e678f
    TEST ESI,ESI                        ; 004e6795
    JZ 0x004e67c3                       ; 004e6797
        ;   XREF to: 004e67c3 (CONDITIONAL_JUMP)  ; LAB_004e67c3
    PUSH ESI                            ; 004e6799
    MOV EDX,dword ptr [ESI + 0x154]     ; 004e679a
    CALL dword ptr [EDX + 0x108]        ; 004e67a0
    ADD ESP,0x4                         ; 004e67a6
    CMP EAX,EBX                         ; 004e67a9
    JNZ 0x004e67c3                      ; 004e67ab
        ;   XREF to: 004e67c3 (CONDITIONAL_JUMP)  ; LAB_004e67c3
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e67ad
    PUSH EAX                            ; 004e67b3
    MOV EDX,dword ptr [0x006810c8]      ; 004e67b4 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 004e67ba | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004e67bb
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e67c0
    FLD float ptr [EBP + 0x92]          ; 004e67c3
        ;   Label: LAB_004e67c3
    FLD ST0                             ; 004e67c9
    FMUL double ptr [0x0062ddea]        ; 004e67cb | DOUBLE_0062ddea
    FLD float ptr [EBX + 0x242c]        ; 004e67d1
    FXCH                                ; 004e67d7
    FSUBR ST0,ST1                       ; 004e67d9
    LEA ESI,[EBX + 0x2428]              ; 004e67db
    FSTP ST1                            ; 004e67e1
    FSTP float ptr [EBX + 0x242c]       ; 004e67e3
    FLD float ptr [ESI]                 ; 004e67e9
    FMUL ST1                            ; 004e67eb
    FSTP float ptr [EBP + -0x42]        ; 004e67ed
    FLD float ptr [ESI + 0x4]           ; 004e67f0
    FMUL ST1                            ; 004e67f3
    LEA EDX,[EBX + 0x241c]              ; 004e67f5
    FSTP float ptr [EBP + -0x3e]        ; 004e67fb
    FMUL float ptr [ESI + 0x8]          ; 004e67fe
    LEA EAX,[EBX + 0x23ac]              ; 004e6801
    FLD float ptr [EBP + -0x42]         ; 004e6807
    FXCH                                ; 004e680a
    FSTP float ptr [EBP + -0x3a]        ; 004e680c
    FADD float ptr [EDX]                ; 004e680f
    FLD float ptr [EBP + -0x3e]         ; 004e6811
    FXCH                                ; 004e6814
    FSTP float ptr [EBP + -0x4e]        ; 004e6816
    FADD float ptr [EDX + 0x4]          ; 004e6819
    FLD float ptr [EBP + -0x3a]         ; 004e681c
    FXCH                                ; 004e681f
    FSTP float ptr [EBP + -0x4a]        ; 004e6821
    FADD float ptr [EDX + 0x8]          ; 004e6824 | DAT_00002424
    FLD float ptr [EBP + -0x4e]         ; 004e6827
    FXCH                                ; 004e682a
    FSTP float ptr [EBP + -0x46]        ; 004e682c
    FADD float ptr [EAX]                ; 004e682f
    FLD float ptr [EBP + -0x4a]         ; 004e6831
    FXCH                                ; 004e6834
    FSTP float ptr [EBP + 0xfffffefe]   ; 004e6836
    FADD float ptr [EAX + 0x4]          ; 004e683c
    FLD float ptr [EBP + -0x46]         ; 004e683f
    FXCH                                ; 004e6842
    FSTP float ptr [EBP + 0xffffff02]   ; 004e6844
    FADD float ptr [EAX + 0x8]          ; 004e684a
    FSTP float ptr [EBP + 0xffffff06]   ; 004e684d
    MOV dword ptr [EDX + 0x8],0x0       ; 004e6853 | DAT_00002424
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e685a | DAT_00002424
    MOV dword ptr [EDX + 0x4],ECX       ; 004e685d
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e6860
    MOV dword ptr [EDX],ECX             ; 004e6863
    MOV dword ptr [EAX + 0x8],0x0       ; 004e6865
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e686c
    MOV dword ptr [EAX + 0x4],EDX       ; 004e686f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e6872
    MOV dword ptr [EAX],EDX             ; 004e6875
    LEA EAX,[EBP + 0xfffffefe]          ; 004e6877
    PUSH EAX                            ; 004e687d
    PUSH EBX                            ; 004e687e
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 004e687f
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004e6884
    LEA ESI,[EBX + 0x158]               ; 004e6887
        ;   Label: LAB_004e6887
    PUSH ESI                            ; 004e688d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004e688e
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    FLDZ                                ; 004e6893
    FLD float ptr [EBX + 0xbed0]        ; 004e6895
    ADD ESP,0x4                         ; 004e689b
    FSTP double ptr [EBP + -0x2a]       ; 004e689e
    FCOMP double ptr [EBP + -0x2a]      ; 004e68a1
    FNSTSW AX                           ; 004e68a4
    SAHF                                ; 004e68a6
    JNC 0x004e6939                      ; 004e68a7
        ;   XREF to: 004e6939 (CONDITIONAL_JUMP)  ; LAB_004e6939
    FLD1                                ; 004e68ad
    FSUB double ptr [EBP + -0x2a]       ; 004e68af
    SUB ESP,0x4                         ; 004e68b2
    FSTP float ptr [ESP]                ; 004e68b5
    MOV ECX,dword ptr [EBX + 0xbed4]    ; 004e68b8
    PUSH ECX                            ; 004e68be
    PUSH ESI                            ; 004e68bf
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 004e68c0
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    FLD float ptr [EBX + 0xbed0]        ; 004e68c5
    FLD1                                ; 004e68cb
    FSUBRP                              ; 004e68cd
    FST float ptr [EBP + 0x2e]          ; 004e68cf
    FMUL float ptr [EBP + 0x2e]         ; 004e68d2
    FMUL float ptr [EBP + 0x2e]         ; 004e68d5
    MOV dword ptr [EBP + 0x76],EAX      ; 004e68d8
    ADD ESP,0xc                         ; 004e68db
    MOV EDX,dword ptr [EBX + 0xbed4]    ; 004e68de
    FLD float ptr [EBP + 0x76]          ; 004e68e4
    PUSH 0x59ddb0                       ; 004e68e7
    MOV EAX,[0x02d83320]                ; 004e68ec | INT_02d83320
    FLD1                                ; 004e68f1
    FSUBRP ST2,ST0                      ; 004e68f3
    PUSH EAX                            ; 004e68f5
    FXCH                                ; 004e68f6
    FSTP float ptr [EBP + 0x2e]         ; 004e68f8
    PUSH dword ptr [EBP + 0x2e]         ; 004e68fb
    FSTP float ptr [EBP + 0x2a]         ; 004e68fe
    PUSH dword ptr [EBP + 0x2a]         ; 004e6901
    PUSH EDX                            ; 004e6904
    PUSH ESI                            ; 004e6905
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004e6906
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBP + 0x92]          ; 004e690b
    FDIV float ptr [0x0065ed2c]         ; 004e6911 | FLOAT_0065ed2c
    FSUBR float ptr [EBX + 0xbed0]      ; 004e6917
    ADD ESP,0x18                        ; 004e691d
    FST float ptr [EBX + 0xbed0]        ; 004e6920
    FLDZ                                ; 004e6926
    FCOMPP                              ; 004e6928
    FNSTSW AX                           ; 004e692a
    SAHF                                ; 004e692c
    JBE 0x004e6939                      ; 004e692d
        ;   XREF to: 004e6939 (CONDITIONAL_JUMP)  ; LAB_004e6939
    MOV dword ptr [EBX + 0xbed0],0x0    ; 004e692f
    PUSH dword ptr [EBP + 0x92]         ; 004e6939
        ;   Label: LAB_004e6939
    PUSH EBX                            ; 004e693f
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004e6940
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    FLD float ptr [EBX + 0x2418]        ; 004e6945
    FABS                                ; 004e694b
    ADD ESP,0x8                         ; 004e694d
    FCOMP double ptr [0x0062ddf2]       ; 004e6950 | DOUBLE_0062ddf2
    FNSTSW AX                           ; 004e6956
    SAHF                                ; 004e6958
    JBE 0x004e8000                      ; 004e6959
        ;   XREF to: 004e8000 (CONDITIONAL_JUMP)  ; LAB_004e8000
    MOV EAX,dword ptr [EBX + 0xbebc]    ; 004e695f
        ;   Label: LAB_004e695f
    PUSH EAX                            ; 004e6965
    MOV EDX,dword ptr [0x00681ef8]      ; 004e6966 | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 004e696c | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 004e696d
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004e6972
    TEST EAX,EAX                        ; 004e6975
    JZ 0x004e8044                       ; 004e6977
        ;   XREF to: 004e8044 (CONDITIONAL_JUMP)  ; LAB_004e8044
    CMP dword ptr [EBX + 0xbe28],0x0    ; 004e697d
        ;   Label: LAB_004e697d
    JZ 0x004e8083                       ; 004e6984
        ;   XREF to: 004e8083 (CONDITIONAL_JUMP)  ; LAB_004e8083
    CMP dword ptr [EBX + 0xbf1c],0x0    ; 004e698a
        ;   Label: LAB_004e698a
    JZ 0x004e6a37                       ; 004e6991
        ;   XREF to: 004e6a37 (CONDITIONAL_JUMP)  ; LAB_004e6a37
    CMP EDI,0x11                        ; 004e6997
    JNZ 0x004e6a37                      ; 004e699a
        ;   XREF to: 004e6a37 (CONDITIONAL_JUMP)  ; LAB_004e6a37
    LEA EDX,[EBX + 0x20]                ; 004e69a0
    LEA EAX,[EBX + 0xbf2c]              ; 004e69a3
    FLD float ptr [EDX]                 ; 004e69a9
    FSUB float ptr [EAX]                ; 004e69ab
    FSTP float ptr [EBP + 0xfffffe86]   ; 004e69ad
    FLD float ptr [EDX + 0x4]           ; 004e69b3
    FSUB float ptr [EAX + 0x4]          ; 004e69b6
    FLD float ptr [EBP + 0xfffffe86]    ; 004e69b9
    FXCH                                ; 004e69bf
    FSTP float ptr [EBP + 0xfffffe8a]   ; 004e69c1
    FLD float ptr [EDX + 0x8]           ; 004e69c7
    FSUB float ptr [EAX + 0x8]          ; 004e69ca
    FXCH                                ; 004e69cd
    FMUL float ptr [EBP + 0xfffffe86]   ; 004e69cf
    FXCH                                ; 004e69d5
    FST float ptr [EBP + 0xfffffe8e]    ; 004e69d7
    FMUL float ptr [EBP + 0xfffffe8e]   ; 004e69dd
    FADDP                               ; 004e69e3
    FSQRT                               ; 004e69e5
    XOR EDI,EDI                         ; 004e69e7
    FLD float ptr [EBP + 0x92]          ; 004e69e9
    FMUL double ptr [0x0062dd82]        ; 004e69ef | DOUBLE_0062dd82
    MOV dword ptr [EBP + 0xfffffe8a],EDI ; 004e69f5
    FCOMPP                              ; 004e69fb
    FNSTSW AX                           ; 004e69fd
    SAHF                                ; 004e69ff
    JBE 0x004e8166                      ; 004e6a00
        ;   XREF to: 004e8166 (CONDITIONAL_JUMP)  ; LAB_004e8166
    FLD float ptr [EBX + 0xbf28]        ; 004e6a06
    FSUB float ptr [EBP + 0x92]         ; 004e6a0c
    FST float ptr [EBX + 0xbf28]        ; 004e6a12
    FLDZ                                ; 004e6a18
    FCOMPP                              ; 004e6a1a
    FNSTSW AX                           ; 004e6a1c
    SAHF                                ; 004e6a1e
    JBE 0x004e6a37                      ; 004e6a1f
        ;   XREF to: 004e6a37 (CONDITIONAL_JUMP)  ; LAB_004e6a37
    MOV dword ptr [EBX + 0xbf20],0x41f00000 ; 004e6a21
    MOV dword ptr [EBX + 0xbf1c],EDI    ; 004e6a2b
    MOV dword ptr [EBX + 0xbf24],EDI    ; 004e6a31
    LEA EAX,[EBX + 0xbf2c]              ; 004e6a37
        ;   Label: LAB_004e6a37
    ADD EBX,0x20                        ; 004e6a3d
    CMP EAX,EBX                         ; 004e6a40
    JNZ 0x004e8175                      ; 004e6a42
        ;   XREF to: 004e8175 (CONDITIONAL_JUMP)  ; LAB_004e8175
    LEA ESP,[EBP + 0x7a]                ; 004e6a48
        ;   Label: LAB_004e6a48
    POP EBP                             ; 004e6a4b
    POP EDI                             ; 004e6a4c
    POP ESI                             ; 004e6a4d
    POP EBX                             ; 004e6a4e
    RET                                 ; 004e6a4f
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 004e6a50
        ;   Label: caseD_5
    MOV ESI,0x1                         ; 004e6a56
    TEST ECX,ECX                        ; 004e6a5b
    JNZ 0x004e6a74                      ; 004e6a5d
        ;   XREF to: 004e6a74 (CONDITIONAL_JUMP)  ; LAB_004e6a74
    PUSH 0x1                            ; 004e6a5f
        ;   Label: LAB_004e6a5f
    PUSH 0x1                            ; 004e6a61
    MOV EDX,dword ptr [EBP + 0x72]      ; 004e6a63
    PUSH EDX                            ; 004e6a66
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e6a67
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e6a6c
    JMP 0x004e665c                      ; 004e6a6f
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH ECX                            ; 004e6a74
        ;   Label: LAB_004e6a74
    MOV EDX,dword ptr [ECX + 0x154]     ; 004e6a75
    CALL dword ptr [EDX + 0x120]        ; 004e6a7b
    ADD ESP,0x4                         ; 004e6a81
    TEST EAX,EAX                        ; 004e6a84
    JNZ 0x004e6a5f                      ; 004e6a86
        ;   XREF to: 004e6a5f (CONDITIONAL_JUMP)  ; LAB_004e6a5f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e6a88
    PUSH EAX                            ; 004e6a8e
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e6a8f
    CALL dword ptr [EDX + 0x108]        ; 004e6a95
    ADD ESP,0x4                         ; 004e6a9b
    TEST EAX,EAX                        ; 004e6a9e
    JNZ 0x004e6a5f                      ; 004e6aa0
        ;   XREF to: 004e6a5f (CONDITIONAL_JUMP)  ; LAB_004e6a5f
    PUSH 0x0                            ; 004e6aa2
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e6aa4
    PUSH EBX                            ; 004e6aaa
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e6aab
    PUSH EAX                            ; 004e6ab1
    CALL dword ptr [EDX + 0xfc]         ; 004e6ab2
    ADD ESP,0xc                         ; 004e6ab8
    TEST EAX,EAX                        ; 004e6abb
    JZ 0x004e6a5f                       ; 004e6abd
        ;   XREF to: 004e6a5f (CONDITIONAL_JUMP)  ; LAB_004e6a5f
    MOV EAX,[0x0065ed18]                ; 004e6abf | FLOAT_0065ed18
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 004e6ac4
    LEA EAX,[EBP + 0xffffff16]          ; 004e6aca
    PUSH EAX                            ; 004e6ad0
    LEA EAX,[EBP + 0xfffffec2]          ; 004e6ad1
    PUSH EAX                            ; 004e6ad7
    XOR EDI,EDI                         ; 004e6ad8
    PUSH EBX                            ; 004e6ada
    MOV dword ptr [EBP + 0xffffff16],EDI ; 004e6adb
    MOV dword ptr [EBP + 0xffffff1a],EDI ; 004e6ae1
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e6ae7
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e6aec
    FLD float ptr [EBP + 0xfffffec2]    ; 004e6af2
    FSUB float ptr [EAX + 0x20]         ; 004e6af8
    FMUL ST0                            ; 004e6afb
    FLD float ptr [EBP + 0xfffffeca]    ; 004e6afd
    FSUB float ptr [EAX + 0x28]         ; 004e6b03
    FMUL ST0                            ; 004e6b06
    FADDP                               ; 004e6b08
    FSQRT                               ; 004e6b0a
    ADD ESP,0xc                         ; 004e6b0c
    FLD1                                ; 004e6b0f
    FCOMPP                              ; 004e6b11
    FNSTSW AX                           ; 004e6b13
    SAHF                                ; 004e6b15
    JNC 0x004e6b1a                      ; 004e6b16
        ;   XREF to: 004e6b1a (CONDITIONAL_JUMP)  ; LAB_004e6b1a
    XOR ESI,ESI                         ; 004e6b18
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004e6b1a
        ;   Label: LAB_004e6b1a
    FLD float ptr [EBP + 0xfffffec6]    ; 004e6b20
    FSUB float ptr [EDX + 0x24]         ; 004e6b26
    FABS                                ; 004e6b29
    FCOMP double ptr [0x0062ddaa]       ; 004e6b2b | DOUBLE_0062ddaa
    FNSTSW AX                           ; 004e6b31
    SAHF                                ; 004e6b33
    JA 0x004e6a5f                       ; 004e6b34
        ;   XREF to: 004e6a5f (CONDITIONAL_JUMP)  ; LAB_004e6a5f
    TEST ESI,ESI                        ; 004e6b3a
    JNZ 0x004e6b4b                      ; 004e6b3c
        ;   XREF to: 004e6b4b (CONDITIONAL_JUMP)  ; LAB_004e6b4b
    TEST ESI,ESI                        ; 004e6b3e
        ;   Label: LAB_004e6b3e
    JNZ 0x004e665c                      ; 004e6b40
        ;   XREF to: 004e665c (CONDITIONAL_JUMP)  ; caseD_12
    JMP 0x004e6a5f                      ; 004e6b46
        ;   XREF to: 004e6a5f (UNCONDITIONAL_JUMP)  ; LAB_004e6a5f
    PUSH 0x0                            ; 004e6b4b
        ;   Label: LAB_004e6b4b
    PUSH EBX                            ; 004e6b4d
    MOV EAX,dword ptr [EDX + 0x154]     ; 004e6b4e
    PUSH EDX                            ; 004e6b54
    CALL dword ptr [EAX + 0x100]        ; 004e6b55
    ADD ESP,0xc                         ; 004e6b5b
    TEST EAX,EAX                        ; 004e6b5e
    JNZ 0x004e6b3e                      ; 004e6b60
        ;   XREF to: 004e6b3e (CONDITIONAL_JUMP)  ; LAB_004e6b3e
    JMP 0x004e6a5f                      ; 004e6b62
        ;   XREF to: 004e6a5f (UNCONDITIONAL_JUMP)  ; LAB_004e6a5f
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 004e6b67
        ;   Label: caseD_a
    TEST EDI,EDI                        ; 004e6b6d
    JNZ 0x004e6b83                      ; 004e6b6f
        ;   XREF to: 004e6b83 (CONDITIONAL_JUMP)  ; LAB_004e6b83
    PUSH 0x1                            ; 004e6b71
    PUSH 0x1                            ; 004e6b73
    PUSH ESI                            ; 004e6b75
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e6b76
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e6b7b
    JMP 0x004e665c                      ; 004e6b7e
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EDI                            ; 004e6b83
        ;   Label: LAB_004e6b83
    MOV EDX,dword ptr [EDI + 0x154]     ; 004e6b84
    CALL dword ptr [EDX + 0x108]        ; 004e6b8a
    ADD ESP,0x4                         ; 004e6b90
    CMP EAX,EBX                         ; 004e6b93
    JZ 0x004e6ba9                       ; 004e6b95
        ;   XREF to: 004e6ba9 (CONDITIONAL_JUMP)  ; LAB_004e6ba9
    PUSH 0x1                            ; 004e6b97
    PUSH 0x1                            ; 004e6b99
    PUSH ESI                            ; 004e6b9b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e6b9c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e6ba1
    JMP 0x004e665c                      ; 004e6ba4
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e6ba9
        ;   Label: LAB_004e6ba9
    PUSH EAX                            ; 004e6baf
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e6bb0
    CALL dword ptr [EDX + 0x120]        ; 004e6bb6
    ADD ESP,0x4                         ; 004e6bbc
    TEST EAX,EAX                        ; 004e6bbf
    JNZ 0x004e6d59                      ; 004e6bc1
        ;   XREF to: 004e6d59 (CONDITIONAL_JUMP)  ; LAB_004e6d59
    LEA EDX,[EBP + 0xfffffe4a]          ; 004e6bc7
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e6bcd
    PUSH EDX                            ; 004e6bd3
    MOV ESI,dword ptr [EAX + 0x154]     ; 004e6bd4
    PUSH EAX                            ; 004e6bda
    CALL dword ptr [ESI + 0x14]         ; 004e6bdb
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004e6bde
    FLD float ptr [EBP + 0xfffffe5a]    ; 004e6be4
    MOV EAX,dword ptr [EDX + 0x20]      ; 004e6bea
    ADD EDX,0x20                        ; 004e6bed
    FSUB float ptr [EBP + 0xfffffe4e]   ; 004e6bf0
    MOV dword ptr [EBP + 0xffffff22],EAX ; 004e6bf6
    LEA EAX,[EDX + 0x4]                 ; 004e6bfc
    FMUL double ptr [0x0062ddc2]        ; 004e6bff | DOUBLE_0062ddc2
    MOV EAX,dword ptr [EAX]             ; 004e6c05
    ADD ESP,0x8                         ; 004e6c07
    MOV dword ptr [EBP + 0xffffff26],EAX ; 004e6c0a
    LEA EAX,[EDX + 0x8]                 ; 004e6c10
    FLD float ptr [EBP + 0xffffff26]    ; 004e6c13
    MOV EAX,dword ptr [EAX]             ; 004e6c19
    FXCH                                ; 004e6c1b
    FADD ST0,ST1                        ; 004e6c1d
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 004e6c1f
    LEA EAX,[EBP + 0xfffffdee]          ; 004e6c25
    FSTP ST1                            ; 004e6c2b
    PUSH EAX                            ; 004e6c2d
    FSTP float ptr [EBP + 0xffffff26]   ; 004e6c2e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004e6c34
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e6c39
    PUSH 0x41c80000                     ; 004e6c3c
    PUSH 0x41700000                     ; 004e6c41
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e6c46
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 004e6c4b
    MOV dword ptr [EBP + 0x76],EAX      ; 004e6c4e
    LEA EAX,[EBP + 0xffffff22]          ; 004e6c51
    PUSH EAX                            ; 004e6c57
    LEA EAX,[EBP + -0x66]               ; 004e6c58
    FLD float ptr [EBP + 0x76]          ; 004e6c5b
    PUSH EAX                            ; 004e6c5e
    FSTP float ptr [EBP + 0xfffffdf2]   ; 004e6c5f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e6c65
    PUSH EAX                            ; 004e6c6b
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004e6c6c
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDX,EAX                         ; 004e6c71
    LEA EAX,[EBP + 0xfffffe0a]          ; 004e6c73
    ADD ESP,0xc                         ; 004e6c79
    CMP EAX,EDX                         ; 004e6c7c
    JZ 0x004e6c9a                       ; 004e6c7e
        ;   XREF to: 004e6c9a (CONDITIONAL_JUMP)  ; LAB_004e6c9a
    MOV EAX,dword ptr [EDX]             ; 004e6c80
    MOV dword ptr [EBP + 0xfffffe0a],EAX ; 004e6c82
    MOV EAX,dword ptr [EDX + 0x4]       ; 004e6c88
    MOV dword ptr [EBP + 0xfffffe0e],EAX ; 004e6c8b
    MOV EAX,dword ptr [EDX + 0x8]       ; 004e6c91
    MOV dword ptr [EBP + 0xfffffe12],EAX ; 004e6c94
    LEA ESI,[EBP + 0xfffffdee]          ; 004e6c9a
        ;   Label: LAB_004e6c9a
    MOV dword ptr [EBP + 0xfffffe22],EBX ; 004e6ca0
    MOV dword ptr [EBP + 0xfffffe26],EBX ; 004e6ca6
    PUSH ESI                            ; 004e6cac
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e6cad
    PUSH EAX                            ; 004e6cb3
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e6cb4
    CALL dword ptr [EDX + 0x11c]        ; 004e6cba
    FLD float ptr [EBP + 0xfffffdf2]    ; 004e6cc0
    FLDZ                                ; 004e6cc6
    ADD ESP,0x8                         ; 004e6cc8
    FXCH                                ; 004e6ccb
    FSTP double ptr [EBP + -0x22]       ; 004e6ccd
    FCOMP double ptr [EBP + -0x22]      ; 004e6cd0
    FNSTSW AX                           ; 004e6cd3
    SAHF                                ; 004e6cd5
    JNC 0x004e6d0d                      ; 004e6cd6
        ;   XREF to: 004e6d0d (CONDITIONAL_JUMP)  ; LAB_004e6d0d
    FLD double ptr [EBP + -0x22]        ; 004e6cd8
    FMUL double ptr [0x0062ddca]        ; 004e6cdb | DOUBLE_0062ddca
    FMUL double ptr [0x0062ddba]        ; 004e6ce1 | DOUBLE_0062ddba
    PUSH 0x0                            ; 004e6ce7
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e6ce9
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x1a]        ; 004e6cee
    MOV EDX,dword ptr [EBP + 0x1a]      ; 004e6cf1
    PUSH EDX                            ; 004e6cf4
    PUSH 0x0                            ; 004e6cf5
    LEA EAX,[EBP + 0xffffff22]          ; 004e6cf7
    PUSH EAX                            ; 004e6cfd
    MOV ECX,dword ptr [0x0067b9a0]      ; 004e6cfe | g_CGorePtr | g_CGoreInstance
    PUSH ECX                            ; 004e6d04 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 004e6d05
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004e6d0a
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004e6d0d
        ;   Label: LAB_004e6d0d
    FLD float ptr [EDX + 0x243c]        ; 004e6d13
    FLDZ                                ; 004e6d19
    FCOMPP                              ; 004e6d1b
    FNSTSW AX                           ; 004e6d1d
    SAHF                                ; 004e6d1f
    JC 0x004e6d42                       ; 004e6d20
        ;   XREF to: 004e6d42 (CONDITIONAL_JUMP)  ; LAB_004e6d42
    PUSH EDX                            ; 004e6d22
    MOV EAX,dword ptr [EDX + 0x154]     ; 004e6d23
    CALL dword ptr [EAX + 0x104]        ; 004e6d29
    ADD ESP,0x4                         ; 004e6d2f
    PUSH 0x1                            ; 004e6d32
    PUSH 0x1                            ; 004e6d34
    MOV ESI,dword ptr [EBP + 0x72]      ; 004e6d36
    PUSH ESI                            ; 004e6d39
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e6d3a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e6d3f
    PUSH 0x62dc66                       ; 004e6d42 | = "ghoul-eat-?.wav"
        ;   Label: LAB_004e6d42
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e6d47
    PUSH EBX                            ; 004e6d4d
    CALL dword ptr [EAX + 0x24]         ; 004e6d4e
    ADD ESP,0x8                         ; 004e6d51
    JMP 0x004e665c                      ; 004e6d54
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e6d59
        ;   Label: LAB_004e6d59
    PUSH EAX                            ; 004e6d5f
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e6d60
    CALL dword ptr [EDX + 0x104]        ; 004e6d66
    ADD ESP,0x4                         ; 004e6d6c
    PUSH 0x1                            ; 004e6d6f
    PUSH 0x1                            ; 004e6d71
    PUSH ESI                            ; 004e6d73
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e6d74
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e6d79
    JMP 0x004e665c                      ; 004e6d7c
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,dword ptr [EBP + 0x72]      ; 004e6d81
        ;   Label: caseD_b
    PUSH EAX                            ; 004e6d84
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004e6d85
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    MOV EAX,[0x02d83300]                ; 004e6d8a | INT_02d83300
    ADD ESP,0x4                         ; 004e6d8f
    CMP EDI,0xc                         ; 004e6d92
    JNZ 0x004e6d9c                      ; 004e6d95
        ;   XREF to: 004e6d9c (CONDITIONAL_JUMP)  ; LAB_004e6d9c
    MOV EAX,[0x02d83304]                ; 004e6d97 | INT_02d83304
    PUSH EAX                            ; 004e6d9c
        ;   Label: LAB_004e6d9c
    LEA EAX,[EBP + 0xfffffeaa]          ; 004e6d9d
    PUSH EAX                            ; 004e6da3
    MOV EDX,dword ptr [EBP + 0x72]      ; 004e6da4
    PUSH EDX                            ; 004e6da7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004e6da8
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e6dad
    PUSH EAX                            ; 004e6db0
    LEA EAX,[EBP + 0xfffffeb6]          ; 004e6db1
    PUSH EAX                            ; 004e6db7
    PUSH EBX                            ; 004e6db8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e6db9
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e6dbe
    PUSH 0x41400000                     ; 004e6dc1
    PUSH 0x41000000                     ; 004e6dc6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e6dcb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e6dd0
    ADD ESP,0x8                         ; 004e6dd3
    FLD float ptr [EBP + 0x76]          ; 004e6dd6
    FMUL double ptr [0x0062ddba]        ; 004e6dd9 | DOUBLE_0062ddba
    PUSH 0x0                            ; 004e6ddf
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e6de1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x32]        ; 004e6de6
    MOV ECX,dword ptr [EBP + 0x32]      ; 004e6de9
    PUSH ECX                            ; 004e6dec
    PUSH 0x0                            ; 004e6ded
    LEA EAX,[EBP + 0xfffffeb6]          ; 004e6def
    PUSH EAX                            ; 004e6df5
    MOV ESI,dword ptr [0x0067b9a0]      ; 004e6df6 | g_CGorePtr
    PUSH ESI                            ; 004e6dfc | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 004e6dfd
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004e6e02
    PUSH 0x62dc76                       ; 004e6e05 | = "ghoul-dig-?.wav @1.3"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e6e0a
    PUSH EBX                            ; 004e6e10
    CALL dword ptr [EAX + 0x24]         ; 004e6e11
    ADD ESP,0x8                         ; 004e6e14
    JMP 0x004e665c                      ; 004e6e17
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH ESI                            ; 004e6e1c
        ;   Label: caseD_d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004e6e1d
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e6e22
    MOV EAX,[0x02d832fc]                ; 004e6e25 | INT_02d832fc
    PUSH EAX                            ; 004e6e2a
    LEA EAX,[EBP + 0xfffffeda]          ; 004e6e2b
    PUSH EAX                            ; 004e6e31
    PUSH ESI                            ; 004e6e32
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004e6e33
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e6e38
    PUSH EAX                            ; 004e6e3b
    LEA EAX,[EBP + 0xfffffe62]          ; 004e6e3c
    PUSH EAX                            ; 004e6e42
    PUSH EBX                            ; 004e6e43
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e6e44
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e6e49
    PUSH 0x41400000                     ; 004e6e4c
    PUSH 0x41000000                     ; 004e6e51
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e6e56
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e6e5b
    ADD ESP,0x8                         ; 004e6e5e
    FLD float ptr [EBP + 0x76]          ; 004e6e61
    FMUL double ptr [0x0062ddba]        ; 004e6e64 | DOUBLE_0062ddba
    PUSH 0x0                            ; 004e6e6a
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e6e6c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x36]        ; 004e6e71
    MOV ECX,dword ptr [EBP + 0x36]      ; 004e6e74
    PUSH ECX                            ; 004e6e77
    PUSH 0x0                            ; 004e6e78
    LEA EAX,[EBP + 0xfffffe62]          ; 004e6e7a
    PUSH EAX                            ; 004e6e80
    MOV ESI,dword ptr [0x0067b9a0]      ; 004e6e81 | g_CGorePtr
    PUSH ESI                            ; 004e6e87 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 004e6e88
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004e6e8d
    PUSH 0x62dc8b                       ; 004e6e90 | = "ghoul-eat-?.wav @1.3"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e6e95
    PUSH EBX                            ; 004e6e9b
    CALL dword ptr [EAX + 0x24]         ; 004e6e9c
    ADD ESP,0x8                         ; 004e6e9f
    JMP 0x004e665c                      ; 004e6ea2
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH ESI                            ; 004e6ea7
        ;   Label: caseD_10
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004e6ea8
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e6ead
    MOV EAX,[0x02d832fc]                ; 004e6eb0 | INT_02d832fc
    PUSH EAX                            ; 004e6eb5
    LEA EAX,[EBP + 0xfffffe9e]          ; 004e6eb6
    PUSH EAX                            ; 004e6ebc
    PUSH ESI                            ; 004e6ebd
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004e6ebe
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e6ec3
    PUSH EAX                            ; 004e6ec6
    LEA EAX,[EBP + 0xffffff2e]          ; 004e6ec7
    PUSH EAX                            ; 004e6ecd
    PUSH EBX                            ; 004e6ece
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e6ecf
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e6ed4
    PUSH 0x41400000                     ; 004e6ed7
    PUSH 0x41000000                     ; 004e6edc
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e6ee1
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e6ee6
    ADD ESP,0x8                         ; 004e6ee9
    FLD float ptr [EBP + 0x76]          ; 004e6eec
    FMUL double ptr [0x0062ddba]        ; 004e6eef | DOUBLE_0062ddba
    PUSH 0x0                            ; 004e6ef5
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e6ef7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x6]         ; 004e6efc
    MOV ECX,dword ptr [EBP + 0x6]       ; 004e6eff
    PUSH ECX                            ; 004e6f02
    PUSH 0x0                            ; 004e6f03
    LEA EAX,[EBP + 0xffffff2e]          ; 004e6f05
    PUSH EAX                            ; 004e6f0b
    MOV ESI,dword ptr [0x0067b9a0]      ; 004e6f0c | g_CGorePtr
    PUSH ESI                            ; 004e6f12 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 004e6f13
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004e6f18
    PUSH 0x3f000000                     ; 004e6f1b
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e6f20
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e6f25
    TEST EAX,EAX                        ; 004e6f28
    JNZ 0x004e6f6a                      ; 004e6f2a
        ;   XREF to: 004e6f6a (CONDITIONAL_JUMP)  ; LAB_004e6f6a
    MOV ESI,0x62dcb5                    ; 004e6f2c | = "ghoul-dig-?.wav @1.3"
    LEA EDI,[EBP + 0xfffffe2a]          ; 004e6f31
        ;   Label: LAB_004e6f31
    PUSH EDI                            ; 004e6f37
    MOV AL,byte ptr [ESI]               ; 004e6f38 | = "ghoul-dig-?.wav @1.3" | s_oul-dig-?.wav_@1.3_0062dcb7 | s_ghoul_eat_wav_1_3_0062dca0
        ;   Label: LAB_004e6f38
    MOV byte ptr [EDI],AL               ; 004e6f3a
    CMP AL,0x0                          ; 004e6f3c
    JZ 0x004e6f50                       ; 004e6f3e
        ;   XREF to: 004e6f50 (CONDITIONAL_JUMP)  ; LAB_004e6f50
    MOV AL,byte ptr [ESI + 0x1]         ; 004e6f40 | s_houl-dig-?.wav_@1.3_0062dcb6 | s_ul-dig-?.wav_@1.3_0062dcb8 | s_houl-eat-?.wav_@1.3_0062dca1
    ADD ESI,0x2                         ; 004e6f43
    MOV byte ptr [EDI + 0x1],AL         ; 004e6f46
    ADD EDI,0x2                         ; 004e6f49
    CMP AL,0x0                          ; 004e6f4c
    JNZ 0x004e6f38                      ; 004e6f4e
        ;   XREF to: 004e6f38 (CONDITIONAL_JUMP)  ; LAB_004e6f38
    POP EDI                             ; 004e6f50
        ;   Label: LAB_004e6f50
    LEA EDX,[EBP + 0xfffffe2a]          ; 004e6f51
    PUSH EDX                            ; 004e6f57
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e6f58
    PUSH EBX                            ; 004e6f5e
    CALL dword ptr [EAX + 0x24]         ; 004e6f5f
    ADD ESP,0x8                         ; 004e6f62
    JMP 0x004e665c                      ; 004e6f65
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ESI,0x62dca0                    ; 004e6f6a | = "ghoul-eat-?.wav @1.3"
        ;   Label: LAB_004e6f6a
    JMP 0x004e6f31                      ; 004e6f6f
        ;   XREF to: 004e6f31 (UNCONDITIONAL_JUMP)  ; LAB_004e6f31
    PUSH EDI                            ; 004e6f71
        ;   Label: caseD_6
    PUSH EBX                            ; 004e6f72
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 004e6f73
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, uint event_id)
    ADD ESP,0x8                         ; 004e6f78
    JMP 0x004e665c                      ; 004e6f7b
        ;   XREF to: 004e665c (UNCONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[EBP + 0x26]                ; 004e6f80
        ;   Label: LAB_004e6f80
    PUSH EAX                            ; 004e6f83
    MOV ESI,dword ptr [EBP + 0x72]      ; 004e6f84
    PUSH ESI                            ; 004e6f87
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004e6f88
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    MOV EDI,EAX                         ; 004e6f8d
    SUB EAX,0x5                         ; 004e6f8f
    ADD ESP,0x8                         ; 004e6f92
    CMP EAX,0xd                         ; 004e6f95
    JA 0x004e6f71                       ; 004e6f98
        ;   XREF to: 004e6f71 (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x4e6580]  ; 004e6f9a | caseD_5 | caseD_f | caseD_a
        ;   Label: switchD
    PUSH 0x1                            ; 004e6fa1
        ;   Label: LAB_004e6fa1
    PUSH 0x0                            ; 004e6fa3
    LEA EAX,[EBX + 0x158]               ; 004e6fa5
    PUSH EAX                            ; 004e6fab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e6fac
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e6fb1
    PUSH EBX                            ; 004e6fb4
    MOV EAX,0x62dcca                    ; 004e6fb5 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004e6fba | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 004e6fbb | g_CConsolePtr
    PUSH ECX                            ; 004e6fc1 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e6fc2
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004e6739                      ; 004e6fc7
        ;   XREF to: 004e6739 (UNCONDITIONAL_JUMP)  ; LAB_004e6739
    PUSH 0x1                            ; 004e6fcc
        ;   Label: LAB_004e6fcc
    PUSH 0x11                           ; 004e6fce
    JMP 0x004e672d                      ; 004e6fd0
        ;   XREF to: 004e672d (UNCONDITIONAL_JUMP)  ; LAB_004e672d
    JBE 0x004e6fcc                      ; 004e6fd5
        ;   XREF to: 004e6fcc (CONDITIONAL_JUMP)  ; LAB_004e6fcc
        ;   Label: LAB_004e6fd5
    CMP EAX,0x3                         ; 004e6fd7
    JZ 0x004e6fa1                       ; 004e6fda
        ;   XREF to: 004e6fa1 (CONDITIONAL_JUMP)  ; LAB_004e6fa1
    PUSH 0x1                            ; 004e6fdc
        ;   Label: LAB_004e6fdc
    PUSH 0x0                            ; 004e6fde
    JMP 0x004e672d                      ; 004e6fe0
        ;   XREF to: 004e672d (UNCONDITIONAL_JUMP)  ; LAB_004e672d
    MOV EDX,dword ptr [EBX + 0xbe28]    ; 004e6fe5
        ;   Label: caseD_a
    TEST EDX,EDX                        ; 004e6feb
    JNZ 0x004e703f                      ; 004e6fed
        ;   XREF to: 004e703f (CONDITIONAL_JUMP)  ; LAB_004e703f
    CMP dword ptr [EBX + 0xbed8],0x1    ; 004e6fef
    JGE 0x004e703f                      ; 004e6ff6
        ;   XREF to: 004e703f (CONDITIONAL_JUMP)  ; LAB_004e703f
    CMP dword ptr [EBX + 0xdc],0x0      ; 004e6ff8
    JNZ 0x004e703f                      ; 004e6fff
        ;   XREF to: 004e703f (CONDITIONAL_JUMP)  ; LAB_004e703f
    PUSH EDX                            ; 004e7001
    LEA EAX,[EBP + 0xffffff5e]          ; 004e7002
    PUSH EAX                            ; 004e7008
    PUSH ESI                            ; 004e7009
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004e700a
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e700f
    PUSH EAX                            ; 004e7012
    LEA EAX,[EBP + -0x7e]               ; 004e7013
    PUSH EAX                            ; 004e7016
    PUSH EBX                            ; 004e7017
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e7018
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e701d
    PUSH 0x0                            ; 004e7020
    LEA EAX,[EBP + -0x7e]               ; 004e7022
    PUSH EAX                            ; 004e7025
    MOV EDX,dword ptr [0x0067b9a0]      ; 004e7026 | g_CGorePtr | g_CGoreInstance
    PUSH EDX                            ; 004e702c | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 004e702d
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 004e7032
    MOV dword ptr [EBX + 0xbe28],0x1    ; 004e7035
    MOV ECX,dword ptr [EBX + 0xbedc]    ; 004e703f
        ;   Label: LAB_004e703f
    MOV dword ptr [EBX + 0xbf24],0x0    ; 004e7045
    TEST ECX,ECX                        ; 004e704f
    JLE 0x004e717b                      ; 004e7051
        ;   XREF to: 004e717b (CONDITIONAL_JUMP)  ; LAB_004e717b
    MOV EAX,[0x02cf6a80]                ; 004e7057 | g_GlobalDeltaTimeInt
        ;   Label: LAB_004e7057
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 004e705c
    SUB EDX,EAX                         ; 004e7062
    MOV dword ptr [EBX + 0xbec4],EDX    ; 004e7064
    TEST EDX,EDX                        ; 004e706a
    JLE 0x004e718d                      ; 004e706c
        ;   XREF to: 004e718d (CONDITIONAL_JUMP)  ; LAB_004e718d
    CMP dword ptr [EBX + 0xbed8],0x0    ; 004e7072
        ;   Label: LAB_004e7072
    JLE 0x004e70a3                      ; 004e7079
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    CMP dword ptr [EBX + 0xbec8],0x0    ; 004e707b
    JLE 0x004e7220                      ; 004e7082
        ;   XREF to: 004e7220 (CONDITIONAL_JUMP)  ; LAB_004e7220
    MOV EAX,[0x02cf6a80]                ; 004e7088 | g_GlobalDeltaTimeInt
    MOV ECX,dword ptr [EBX + 0xbec8]    ; 004e708d
    SUB ECX,EAX                         ; 004e7093
    MOV dword ptr [EBX + 0xbec8],ECX    ; 004e7095
    TEST ECX,ECX                        ; 004e709b
    JLE 0x004e71f3                      ; 004e709d
        ;   XREF to: 004e71f3 (CONDITIONAL_JUMP)  ; LAB_004e71f3
    FLD float ptr [EBP + 0x6a]          ; 004e70a3
        ;   Label: caseD_3
    FLDZ                                ; 004e70a6
    FCOMPP                              ; 004e70a8
    FNSTSW AX                           ; 004e70aa
    SAHF                                ; 004e70ac
    JA 0x004e6754                       ; 004e70ad
        ;   XREF to: 004e6754 (CONDITIONAL_JUMP)  ; LAB_004e6754
    FLD float ptr [EBX + 0xbed0]        ; 004e70b3
    FLDZ                                ; 004e70b9
    FCOMPP                              ; 004e70bb
    FNSTSW AX                           ; 004e70bd
    SAHF                                ; 004e70bf
    JC 0x004e6754                       ; 004e70c0
        ;   XREF to: 004e6754 (CONDITIONAL_JUMP)  ; LAB_004e6754
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 004e70c6
    JZ 0x004e6754                       ; 004e70cd
        ;   XREF to: 004e6754 (CONDITIONAL_JUMP)  ; LAB_004e6754
    XOR EAX,EAX                         ; 004e70d3
    MOV dword ptr [EBP + 0xffffff52],EAX ; 004e70d5
    MOV dword ptr [EBP + 0xffffff56],EAX ; 004e70db
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004e70e1
    PUSH 0x3f060a92                     ; 004e70e4
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 004e70e9
    LEA EAX,[EBP + 0xffffff52]          ; 004e70ef
    PUSH 0x40400000                     ; 004e70f5
    PUSH EAX                            ; 004e70fa
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e70fb
    PUSH EAX                            ; 004e7101
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e7102
    CALL dword ptr [EDX + 0xbc]         ; 004e7108
    ADD ESP,0x4                         ; 004e710e
    PUSH EAX                            ; 004e7111
    PUSH 0x0                            ; 004e7112
    LEA EAX,[EBP + 0xfffffee6]          ; 004e7114
    PUSH EAX                            ; 004e711a
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e711b
    ADD EAX,0x158                       ; 004e7121
    PUSH EAX                            ; 004e7126
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004e7127
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e712c
    PUSH EAX                            ; 004e712f
    LEA EAX,[EBP + 0xffffff46]          ; 004e7130
    PUSH EAX                            ; 004e7136
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 004e7137
    PUSH ECX                            ; 004e713d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e713e
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e7143
    PUSH EAX                            ; 004e7146
    PUSH EBX                            ; 004e7147
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004e7148
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004e714d
    CMP EAX,0x1                         ; 004e7150
    JZ 0x004e6754                       ; 004e7153
        ;   XREF to: 004e6754 (CONDITIONAL_JUMP)  ; LAB_004e6754
    PUSH 0x1                            ; 004e7159
    PUSH 0x1                            ; 004e715b
    LEA EAX,[EBX + 0x158]               ; 004e715d
    PUSH EAX                            ; 004e7163
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7164
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7169
    MOV dword ptr [EBX + 0x2418],0x0    ; 004e716c
    JMP 0x004e6754                      ; 004e7176
        ;   XREF to: 004e6754 (UNCONDITIONAL_JUMP)  ; LAB_004e6754
    CMP dword ptr [EBX + 0xbed8],0x0    ; 004e717b
        ;   Label: LAB_004e717b
    JG 0x004e7057                       ; 004e7182
        ;   XREF to: 004e7057 (CONDITIONAL_JUMP)  ; LAB_004e7057
    JMP 0x004e7072                      ; 004e7188
        ;   XREF to: 004e7072 (UNCONDITIONAL_JUMP)  ; LAB_004e7072
    CMP dword ptr [EBX + 0xbed8],0x1    ; 004e718d
        ;   Label: LAB_004e718d
    JGE 0x004e719c                      ; 004e7194
        ;   XREF to: 004e719c (CONDITIONAL_JUMP)  ; LAB_004e719c
    DEC dword ptr [EBX + 0xbedc]        ; 004e7196
    CMP dword ptr [EBX + 0xbedc],0x0    ; 004e719c
        ;   Label: LAB_004e719c
    JG 0x004e71b2                       ; 004e71a3
        ;   XREF to: 004e71b2 (CONDITIONAL_JUMP)  ; LAB_004e71b2
    CMP dword ptr [EBX + 0xbed8],0x0    ; 004e71a5
    JLE 0x004e7072                      ; 004e71ac
        ;   XREF to: 004e7072 (CONDITIONAL_JUMP)  ; LAB_004e7072
    PUSH 0x41400000                     ; 004e71b2
        ;   Label: LAB_004e71b2
    PUSH 0x3f800000                     ; 004e71b7
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e71bc
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e71c1
    ADD ESP,0x8                         ; 004e71c4
    FLD float ptr [EBP + 0x76]          ; 004e71c7
    FMUL double ptr [0x0062dd72]        ; 004e71ca | DOUBLE_0062dd72
    PUSH 0x1                            ; 004e71d0
    LEA EAX,[EBX + 0x158]               ; 004e71d2
    PUSH 0xf                            ; 004e71d8
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e71da
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 004e71df
    FISTP dword ptr [EBX + 0xbec4]      ; 004e71e0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e71e6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e71eb
    JMP 0x004e7072                      ; 004e71ee
        ;   XREF to: 004e7072 (UNCONDITIONAL_JUMP)  ; LAB_004e7072
    PUSH 0x41f00000                     ; 004e71f3
        ;   Label: LAB_004e71f3
    PUSH 0x0                            ; 004e71f8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e71fa
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e71ff
    FLD float ptr [EBP + 0x76]          ; 004e7202
    FCHS                                ; 004e7205
    FMUL float ptr [0x0062dd8a]         ; 004e7207 | FLOAT_0062dd8a
    ADD ESP,0x8                         ; 004e720d
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e7210
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBX + 0xbec8]      ; 004e7215
    JMP 0x004e70a3                      ; 004e721b
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x02cf6a80]                ; 004e7220 | g_GlobalDeltaTimeInt
        ;   Label: LAB_004e7220
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 004e7225
    ADD EDX,EAX                         ; 004e722b
    XOR ESI,ESI                         ; 004e722d
    MOV dword ptr [EBX + 0xbec8],EDX    ; 004e722f
    TEST EDX,EDX                        ; 004e7235
    JL 0x004e7353                       ; 004e7237
        ;   XREF to: 004e7353 (CONDITIONAL_JUMP)  ; LAB_004e7353
    MOV dword ptr [EBX + 0xbec8],ESI    ; 004e723d
    MOV EAX,dword ptr [EBX + 0x2df0]    ; 004e7243
        ;   Label: LAB_004e7243
    MOV dword ptr [EBP + 0x6e],EAX      ; 004e7249
    FLD float ptr [EBP + 0x6e]          ; 004e724c
    FCOMP float ptr [EBX + 0x2dec]      ; 004e724f
    FNSTSW AX                           ; 004e7255
    SAHF                                ; 004e7257
    JNC 0x004e7263                      ; 004e7258
        ;   XREF to: 004e7263 (CONDITIONAL_JUMP)  ; LAB_004e7263
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 004e725a
    MOV dword ptr [EBP + 0x6e],EAX      ; 004e7260
    FLD float ptr [EBP + 0x6e]          ; 004e7263
        ;   Label: LAB_004e7263
    FCOMP float ptr [EBX + 0x2dec]      ; 004e7266
    FNSTSW AX                           ; 004e726c
    SAHF                                ; 004e726e
    JC 0x004e740a                       ; 004e726f
        ;   XREF to: 004e740a (CONDITIONAL_JUMP)  ; LAB_004e740a
    XOR ESI,ESI                         ; 004e7275
        ;   Label: LAB_004e7275
    MOV dword ptr [EBP + 0x76],ESI      ; 004e7277
        ;   Label: LAB_004e7277
    FILD dword ptr [EBP + 0x76]         ; 004e727a
    FMUL double ptr [0x0062ddd2]        ; 004e727d | DOUBLE_0062ddd2
    MOV ECX,dword ptr [0x006810c8]      ; 004e7283 | g_CDemonSetPtr | g_CDemonSetInstance
    FMUL double ptr [0x0062ddba]        ; 004e7289 | DOUBLE_0062ddba
    PUSH ECX                            ; 004e728f | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x22]         ; 004e7290
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 004e7293
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e7298
    PUSH EBX                            ; 004e729b
    MOV EAX,[0x006810c8]                ; 004e729c | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004e72a1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004e72a2
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + 0x22]          ; 004e72a7
    FLD ST0                             ; 004e72aa
    FCOS                                ; 004e72ac
    FXCH                                ; 004e72ae
    FSIN                                ; 004e72b0
    FXCH                                ; 004e72b2
    FLD double ptr [0x0062ddda]         ; 004e72b4 | DOUBLE_0062ddda
    FXCH                                ; 004e72ba
    FMUL ST1                            ; 004e72bc
    FXCH ST2                            ; 004e72be
    FMULP                               ; 004e72c0
    FLD float ptr [EBX + 0x24]          ; 004e72c2
    ADD ESP,0x8                         ; 004e72c5
    FADD float ptr [EBP + 0x6e]         ; 004e72c8
    SUB ESP,0x4                         ; 004e72cb
    FSTP float ptr [ESP]                ; 004e72ce
    FLD float ptr [EBX + 0x24]          ; 004e72d1
    FADD float ptr [EBX + 0x2dec]       ; 004e72d4
    SUB ESP,0x4                         ; 004e72da
    FSTP float ptr [ESP]                ; 004e72dd
    PUSH dword ptr [EBX + 0x2de0]       ; 004e72e0
    SUB ESP,0x4                         ; 004e72e6
    FXCH                                ; 004e72e9
    FSTP float ptr [ESP]                ; 004e72eb
    SUB ESP,0x4                         ; 004e72ee
    FSTP float ptr [ESP]                ; 004e72f1
    PUSH dword ptr [EBX + 0x28]         ; 004e72f4
    MOV EDX,dword ptr [0x006810c8]      ; 004e72f7 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH dword ptr [EBX + 0x20]         ; 004e72fd
    PUSH EDX                            ; 004e7300 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 ; 004e7301
        ;   XREF to: 00573470 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, ...)
    MOV ECX,dword ptr [0x006810c8]      ; 004e7306 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [EBP + 0x76],EAX      ; 004e730c
    ADD ESP,0x20                        ; 004e730f
    FLD float ptr [EBP + 0x76]          ; 004e7312
    PUSH ECX                            ; 004e7315 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x1e]         ; 004e7316
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 004e7319
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    FLD float ptr [EBP + 0x1e]          ; 004e731e
    FLD1                                ; 004e7321
    ADD ESP,0x4                         ; 004e7323
    FCOMPP                              ; 004e7326
    FNSTSW AX                           ; 004e7328
    SAHF                                ; 004e732a
    JBE 0x004e741e                      ; 004e732b
        ;   XREF to: 004e741e (CONDITIONAL_JUMP)  ; LAB_004e741e
    CMP ESI,0x4                         ; 004e7331
        ;   Label: LAB_004e7331
    JGE 0x004e742d                      ; 004e7334
        ;   XREF to: 004e742d (CONDITIONAL_JUMP)  ; LAB_004e742d
    MOV dword ptr [EBX + 0xbec8],0x3    ; 004e733a
    MOV dword ptr [EBX + 0xbe3c],0x0    ; 004e7344
    JMP 0x004e70a3                      ; 004e734e
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004e7353
        ;   Label: LAB_004e7353
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e7359
    PUSH EBX                            ; 004e735f
    CALL dword ptr [EAX + 0x158]        ; 004e7360
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e7366
    ADD ESP,0x8                         ; 004e736c
    TEST EAX,EAX                        ; 004e736f
    JZ 0x004e73fd                       ; 004e7371
        ;   XREF to: 004e73fd (CONDITIONAL_JUMP)  ; LAB_004e73fd
    LEA EDX,[EBX + 0x20]                ; 004e7377
    FLD float ptr [EDX]                 ; 004e737a
    FSUB float ptr [EAX + 0x20]         ; 004e737c
    FSTP float ptr [EBP + 0xffffff6a]   ; 004e737f
    FLD float ptr [EDX + 0x4]           ; 004e7385
    FSUB float ptr [EAX + 0x24]         ; 004e7388
    FSTP float ptr [EBP + 0xffffff6e]   ; 004e738b
    FLD float ptr [EDX + 0x8]           ; 004e7391
    LEA EDX,[EBP + -0x36]               ; 004e7394
    FSUB float ptr [EAX + 0x28]         ; 004e7397
    LEA EAX,[EBP + 0xffffff6a]          ; 004e739a
    FSTP float ptr [EBP + 0xffffff72]   ; 004e73a0
    CMP EDX,EAX                         ; 004e73a6
    JZ 0x004e73c5                       ; 004e73a8
        ;   XREF to: 004e73c5 (CONDITIONAL_JUMP)  ; LAB_004e73c5
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 004e73aa
    MOV dword ptr [EBP + -0x36],EAX     ; 004e73b0
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 004e73b3
    MOV dword ptr [EBP + -0x32],EAX     ; 004e73b9
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 004e73bc
    MOV dword ptr [EBP + -0x2e],EAX     ; 004e73c2
    FLD float ptr [EBP + -0x32]         ; 004e73c5
        ;   Label: LAB_004e73c5
    FMUL ST0                            ; 004e73c8
    FLD float ptr [EBP + -0x36]         ; 004e73ca
    FMUL ST0                            ; 004e73cd
    FADDP                               ; 004e73cf
    FLD float ptr [EBP + -0x2e]         ; 004e73d1
    FMUL ST0                            ; 004e73d4
    FADDP                               ; 004e73d6
    FSTP float ptr [EBP + 0xe]          ; 004e73d8
    MOV EAX,dword ptr [EBP + 0xe]       ; 004e73db
    MOV EDX,dword ptr [0x02d7a7b8]      ; 004e73de | INT_02d7a7b8
    SAR EAX,0x1                         ; 004e73e4
    ADD EAX,EDX                         ; 004e73e6
    MOV dword ptr [EBP + 0x12],EAX      ; 004e73e8
    FLD float ptr [EBP + 0x12]          ; 004e73eb
    FCOMP double ptr [0x0062dd6a]       ; 004e73ee | DOUBLE_0062dd6a
    FNSTSW AX                           ; 004e73f4
    SAHF                                ; 004e73f6
    JC 0x004e7243                       ; 004e73f7
        ;   XREF to: 004e7243 (CONDITIONAL_JUMP)  ; LAB_004e7243
    TEST ESI,ESI                        ; 004e73fd
        ;   Label: LAB_004e73fd
    JNZ 0x004e7243                      ; 004e73ff
        ;   XREF to: 004e7243 (CONDITIONAL_JUMP)  ; LAB_004e7243
    JMP 0x004e70a3                      ; 004e7405
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x2dec]        ; 004e740a
        ;   Label: LAB_004e740a
    FADD double ptr [0x0062dd82]        ; 004e7410 | DOUBLE_0062dd82
    FSTP float ptr [EBP + 0x6e]         ; 004e7416
    JMP 0x004e7275                      ; 004e7419
        ;   XREF to: 004e7275 (UNCONDITIONAL_JUMP)  ; LAB_004e7275
    INC ESI                             ; 004e741e
        ;   Label: LAB_004e741e
    CMP ESI,0x4                         ; 004e741f
    JL 0x004e7277                       ; 004e7422
        ;   XREF to: 004e7277 (CONDITIONAL_JUMP)  ; LAB_004e7277
    JMP 0x004e7331                      ; 004e7428
        ;   XREF to: 004e7331 (UNCONDITIONAL_JUMP)  ; LAB_004e7331
    MOV EAX,dword ptr [EBX + 0xbed8]    ; 004e742d
        ;   Label: LAB_004e742d
    INC EAX                             ; 004e7433
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7434
    FILD dword ptr [EBP + 0x76]         ; 004e7437
    FMUL double ptr [0x0062dde2]        ; 004e743a | DOUBLE_0062dde2
    SUB ESP,0x4                         ; 004e7440
    FSTP float ptr [ESP]                ; 004e7443
    PUSH 0x41200000                     ; 004e7446
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e744b
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 004e7450
    PUSH 0x1                            ; 004e7453
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7455
    LEA EAX,[EBX + 0x158]               ; 004e7458
    PUSH 0x10                           ; 004e745e
    FLD float ptr [EBP + 0x76]          ; 004e7460
    PUSH EAX                            ; 004e7463
    FSTP float ptr [EBX + 0x243c]       ; 004e7464
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e746a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e746f
    JMP 0x004e70a3                      ; 004e7472
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xbf18]        ; 004e7477
        ;   Label: caseD_0
    FLDZ                                ; 004e747d
    FCOMPP                              ; 004e747f
    FNSTSW AX                           ; 004e7481
    SAHF                                ; 004e7483
    JNC 0x004e749d                      ; 004e7484
        ;   XREF to: 004e749d (CONDITIONAL_JUMP)  ; LAB_004e749d
    FLD float ptr [EBX + 0xbf18]        ; 004e7486
    FSUB float ptr [EBP + 0x92]         ; 004e748c
    FSTP float ptr [EBX + 0xbf18]       ; 004e7492
    JMP 0x004e70a3                      ; 004e7498
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV ECX,dword ptr [EBX + 0xbf1c]    ; 004e749d
        ;   Label: LAB_004e749d
    TEST ECX,ECX                        ; 004e74a3
    JZ 0x004e7563                       ; 004e74a5
        ;   XREF to: 004e7563 (CONDITIONAL_JUMP)  ; LAB_004e7563
    MOV EDX,ECX                         ; 004e74ab
    LEA EAX,[EBX + 0x20]                ; 004e74ad
    FLD float ptr [EDX + 0x20]          ; 004e74b0
    FSUB float ptr [EAX]                ; 004e74b3
    FSTP float ptr [EBP + 0xffffff0a]   ; 004e74b5
    FLD float ptr [EDX + 0x24]          ; 004e74bb
    FSUB float ptr [EAX + 0x4]          ; 004e74be
    FSTP float ptr [EBP + 0xffffff0e]   ; 004e74c1
    FLD float ptr [EDX + 0x28]          ; 004e74c7
    FSUB float ptr [EAX + 0x8]          ; 004e74ca
    LEA EAX,[EBP + 0xffffff0a]          ; 004e74cd
    FSTP float ptr [EBP + 0xffffff12]   ; 004e74d3
    FLD float ptr [EAX + 0x4]           ; 004e74d9
    FMUL ST0                            ; 004e74dc
    FLD float ptr [EAX]                 ; 004e74de
    FMUL ST0                            ; 004e74e0
    FADDP                               ; 004e74e2
    FLD float ptr [EAX + 0x8]           ; 004e74e4
    FMUL ST0                            ; 004e74e7
    FADDP                               ; 004e74e9
    FSQRT                               ; 004e74eb
    FCOMP double ptr [0x0062ddaa]       ; 004e74ed | DOUBLE_0062ddaa
    FNSTSW AX                           ; 004e74f3
    SAHF                                ; 004e74f5
    JNC 0x004e70a3                      ; 004e74f6
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0x243c]        ; 004e74fc
    FLD float ptr [EBP + 0x92]          ; 004e7502
    FLD float ptr [EBX + 0xbf20]        ; 004e7508
    FSUB ST0,ST1                        ; 004e750e
    FXCH ST2                            ; 004e7510
    FADDP                               ; 004e7512
    FXCH                                ; 004e7514
    FSTP float ptr [EBX + 0xbf20]       ; 004e7516
    FST float ptr [EBX + 0x243c]        ; 004e751c
    FCOMP double ptr [0x0062ddb2]       ; 004e7522 | DOUBLE_0062ddb2
    FNSTSW AX                           ; 004e7528
    SAHF                                ; 004e752a
    JBE 0x004e7537                      ; 004e752b
        ;   XREF to: 004e7537 (CONDITIONAL_JUMP)  ; LAB_004e7537
    MOV dword ptr [EBX + 0x243c],0x42c80000 ; 004e752d
    FLD float ptr [EBX + 0xbf20]        ; 004e7537
        ;   Label: LAB_004e7537
    FLDZ                                ; 004e753d
    FCOMPP                              ; 004e753f
    FNSTSW AX                           ; 004e7541
    SAHF                                ; 004e7543
    JBE 0x004e70a3                      ; 004e7544
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBX + 0xbf20],0x0    ; 004e754a
    MOV dword ptr [EBX + 0xbf1c],0x0    ; 004e7554
    JMP 0x004e70a3                      ; 004e755e
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004e7563
        ;   Label: LAB_004e7563
    PUSH EBX                            ; 004e7569
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004e756a
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e756f
    TEST EAX,EAX                        ; 004e7572
    JZ 0x004e758e                       ; 004e7574
        ;   XREF to: 004e758e (CONDITIONAL_JUMP)  ; LAB_004e758e
    PUSH 0x1                            ; 004e7576
        ;   Label: LAB_004e7576
    PUSH 0x1                            ; 004e7578
    LEA EAX,[EBX + 0x158]               ; 004e757a
    PUSH EAX                            ; 004e7580
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7581
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7586
    JMP 0x004e70a3                      ; 004e7589
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004e758e
        ;   Label: LAB_004e758e
    MOV EDX,dword ptr [EBX + 0x154]     ; 004e7594
    PUSH EBX                            ; 004e759a
    CALL dword ptr [EDX + 0x158]        ; 004e759b
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 004e75a1
    ADD ESP,0x8                         ; 004e75a7
    TEST ESI,ESI                        ; 004e75aa
    JZ 0x004e70a3                       ; 004e75ac
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004e75b2
    PUSH 0x1                            ; 004e75b4
    LEA EAX,[EBX + 0x158]               ; 004e75b6
    PUSH EAX                            ; 004e75bc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e75bd
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e75c2
    MOV EAX,dword ptr [EBX + 0xbf0c]    ; 004e75c5
    PUSH EAX                            ; 004e75cb
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e75cc
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004e75d1
    TEST EAX,EAX                        ; 004e75d4
    JZ 0x004e75ef                       ; 004e75d6
        ;   XREF to: 004e75ef (CONDITIONAL_JUMP)  ; LAB_004e75ef
    MOV EDX,dword ptr [EBX + 0xbf10]    ; 004e75d8
    PUSH EDX                            ; 004e75de
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e75df
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004e75e4
    TEST EAX,EAX                        ; 004e75e7
    JNZ 0x004e70a3                      ; 004e75e9
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x62dcf4                       ; 004e75ef | = "ghoul-alert-?.wav"
        ;   Label: LAB_004e75ef
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e75f4
    PUSH EBX                            ; 004e75fa
    CALL dword ptr [EAX + 0x24]         ; 004e75fb
    ADD ESP,0x8                         ; 004e75fe
    MOV dword ptr [EBX + 0xbf0c],EAX    ; 004e7601
    JMP 0x004e70a3                      ; 004e7607
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    CMP dword ptr [EBX + 0xbf24],0x0    ; 004e760c
        ;   Label: caseD_1
    JZ 0x004e762c                       ; 004e7613
        ;   XREF to: 004e762c (CONDITIONAL_JUMP)  ; LAB_004e762c
    CMP EDI,0x1                         ; 004e7615
    JNZ 0x004e762c                      ; 004e7618
        ;   XREF to: 004e762c (CONDITIONAL_JUMP)  ; LAB_004e762c
    PUSH EDI                            ; 004e761a
    PUSH 0x11                           ; 004e761b
    LEA EAX,[EBX + 0x158]               ; 004e761d
    PUSH EAX                            ; 004e7623
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7624
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7629
    FLD float ptr [EBX + 0xbf18]        ; 004e762c
        ;   Label: LAB_004e762c
    FLDZ                                ; 004e7632
    FCOMPP                              ; 004e7634
    FNSTSW AX                           ; 004e7636
    SAHF                                ; 004e7638
    JC 0x004e77c4                       ; 004e7639
        ;   XREF to: 004e77c4 (CONDITIONAL_JUMP)  ; LAB_004e77c4
    LEA EAX,[EBX + 0x23ac]              ; 004e763f
    MOV dword ptr [EAX + 0x8],0x0       ; 004e7645
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e764c
    MOV dword ptr [EAX + 0x4],EDX       ; 004e764f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e7652
    MOV dword ptr [EAX],EDX             ; 004e7655
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 004e7657
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e765d
    XOR ESI,ESI                         ; 004e7664
    TEST EDX,EDX                        ; 004e7666
    JZ 0x004e766f                       ; 004e7668
        ;   XREF to: 004e766f (CONDITIONAL_JUMP)  ; LAB_004e766f
    MOV ESI,0x1                         ; 004e766a
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004e766f
        ;   Label: LAB_004e766f
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004e7675
    JZ 0x004e7680                       ; 004e767d
        ;   XREF to: 004e7680 (CONDITIONAL_JUMP)  ; LAB_004e7680
    INC ESI                             ; 004e767f
    MOV EAX,[0x02db87d0]                ; 004e7680 | g_LocalHeroIndex
        ;   Label: LAB_004e7680
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e7685 | g_HeroActors
    PUSH EAX                            ; 004e768c
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e768d
    CALL dword ptr [EDX + 0x120]        ; 004e7693
    ADD ESP,0x4                         ; 004e7699
    TEST EAX,EAX                        ; 004e769c
    JNZ 0x004e7a26                      ; 004e769e
        ;   XREF to: 004e7a26 (CONDITIONAL_JUMP)  ; LAB_004e7a26
    PUSH dword ptr [EBP + 0x92]         ; 004e76a4
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e76aa
    PUSH EBX                            ; 004e76b0
    CALL dword ptr [EAX + 0x158]        ; 004e76b1
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e76b7
    ADD ESP,0x8                         ; 004e76bd
    TEST EAX,EAX                        ; 004e76c0
    JZ 0x004e77ee                       ; 004e76c2
        ;   XREF to: 004e77ee (CONDITIONAL_JUMP)  ; LAB_004e77ee
    MOV EDX,EAX                         ; 004e76c8
    LEA EAX,[EBX + 0x20]                ; 004e76ca
    FLD float ptr [EDX + 0x20]          ; 004e76cd
    FSUB float ptr [EAX]                ; 004e76d0
    FSTP float ptr [EBP + 0xfffffe92]   ; 004e76d2
    FLD float ptr [EDX + 0x24]          ; 004e76d8
    FSUB float ptr [EAX + 0x4]          ; 004e76db
    FSTP float ptr [EBP + 0xfffffe96]   ; 004e76de
    FLD float ptr [EDX + 0x28]          ; 004e76e4
    XOR EDX,EDX                         ; 004e76e7
    FSUB float ptr [EAX + 0x8]          ; 004e76e9
    MOV dword ptr [EBP + 0xfffffe96],EDX ; 004e76ec
    FSTP float ptr [EBP + 0xfffffe9a]   ; 004e76f2
    FLD float ptr [EBX + 0x243c]        ; 004e76f8
    FCOMP double ptr [0x0062dd92]       ; 004e76fe | DOUBLE_0062dd92
    FNSTSW AX                           ; 004e7704
    SAHF                                ; 004e7706
    JNC 0x004e7725                      ; 004e7707
        ;   XREF to: 004e7725 (CONDITIONAL_JUMP)  ; LAB_004e7725
    TEST ESI,ESI                        ; 004e7709
    JLE 0x004e7725                      ; 004e770b
        ;   XREF to: 004e7725 (CONDITIONAL_JUMP)  ; LAB_004e7725
    CMP dword ptr [EBX + 0xbf1c],0x0    ; 004e770d
    JNZ 0x004e7725                      ; 004e7714
        ;   XREF to: 004e7725 (CONDITIONAL_JUMP)  ; LAB_004e7725
    PUSH dword ptr [EBP + 0x92]         ; 004e7716
    PUSH EBX                            ; 004e771c
    CALL core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0 ; 004e771d
        ;   XREF to: 004e63d0 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(CGhoul * this_ptr)
    ADD ESP,0x8                         ; 004e7722
    LEA EAX,[EBX + 0x158]               ; 004e7725
        ;   Label: LAB_004e7725
    MOV dword ptr [EBP + 0x5a],EAX      ; 004e772b
    MOV EAX,dword ptr [EBX + 0xbf1c]    ; 004e772e
    TEST EAX,EAX                        ; 004e7734
    JZ 0x004e7835                       ; 004e7736
        ;   XREF to: 004e7835 (CONDITIONAL_JUMP)  ; LAB_004e7835
    PUSH 0x0                            ; 004e773c
    PUSH 0x40400000                     ; 004e773e
    PUSH 0x3f87558                      ; 004e7743 | g_ZeroVector
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e7748
    PUSH EAX                            ; 004e774e
    CALL dword ptr [EDX + 0xbc]         ; 004e774f
    ADD ESP,0x4                         ; 004e7755
    PUSH EAX                            ; 004e7758
    MOV EAX,dword ptr [EBX + 0xbf1c]    ; 004e7759
    ADD EAX,0x20                        ; 004e775f
    PUSH EAX                            ; 004e7762
    PUSH EBX                            ; 004e7763
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004e7764
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004e7769
    MOV ESI,EAX                         ; 004e776c
    TEST EAX,EAX                        ; 004e776e
    JLE 0x004e77a0                      ; 004e7770
        ;   XREF to: 004e77a0 (CONDITIONAL_JUMP)  ; LAB_004e77a0
    PUSH 0x1                            ; 004e7772
    PUSH 0x0                            ; 004e7774
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004e7776
    PUSH EDX                            ; 004e7779
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e777a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e777f
    PUSH 0x41f00000                     ; 004e7782
    PUSH 0x41200000                     ; 004e7787
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e778c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7791
    ADD ESP,0x8                         ; 004e7794
    MOV EAX,dword ptr [EBP + 0x76]      ; 004e7797
    MOV dword ptr [EBX + 0xbf20],EAX    ; 004e779a
    TEST ESI,ESI                        ; 004e77a0
        ;   Label: LAB_004e77a0
    JL 0x004e781c                       ; 004e77a2
        ;   XREF to: 004e781c (CONDITIONAL_JUMP)  ; LAB_004e781c
    CMP EDI,0x1                         ; 004e77a4
        ;   Label: LAB_004e77a4
    JNZ 0x004e70a3                      ; 004e77a7
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH EDI                            ; 004e77ad
    PUSH 0x11                           ; 004e77ae
    LEA EAX,[EBX + 0x158]               ; 004e77b0
    PUSH EAX                            ; 004e77b6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e77b7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e77bc
    JMP 0x004e70a3                      ; 004e77bf
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004e77c4
        ;   Label: LAB_004e77c4
    FLD float ptr [EBX + 0xbf18]        ; 004e77c6
    LEA EAX,[EBX + 0x158]               ; 004e77cc
    PUSH 0x0                            ; 004e77d2
    FSUB float ptr [EBP + 0x92]         ; 004e77d4
    PUSH EAX                            ; 004e77da
    FSTP float ptr [EBX + 0xbf18]       ; 004e77db
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e77e1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e77e6
    JMP 0x004e70a3                      ; 004e77e9
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x92]         ; 004e77ee
        ;   Label: LAB_004e77ee
    PUSH EBX                            ; 004e77f4
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004e77f5
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e77fa
    TEST EAX,EAX                        ; 004e77fd
    JNZ 0x004e70a3                      ; 004e77ff
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004e7805
    PUSH EAX                            ; 004e7807
    LEA EAX,[EBX + 0x158]               ; 004e7808
    PUSH EAX                            ; 004e780e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e780f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7814
    JMP 0x004e70a3                      ; 004e7817
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBX + 0xbf20],0x41f00000 ; 004e781c
        ;   Label: LAB_004e781c
    MOV dword ptr [EBX + 0xbf1c],0x0    ; 004e7826
    JMP 0x004e77a4                      ; 004e7830
        ;   XREF to: 004e77a4 (UNCONDITIONAL_JUMP)  ; LAB_004e77a4
    PUSH 0x3e32b8c2                     ; 004e7835
        ;   Label: LAB_004e7835
    PUSH 0x3f800000                     ; 004e783a
    MOV EAX,[0x0065ed18]                ; 004e783f | FLOAT_0065ed18
    XOR EDX,EDX                         ; 004e7844
    MOV dword ptr [EBP + -0x72],EDX     ; 004e7846
    MOV dword ptr [EBP + -0x6a],EAX     ; 004e7849
    LEA EAX,[EBP + -0x72]               ; 004e784c
    MOV dword ptr [EBP + -0x6e],EDX     ; 004e784f
    PUSH EAX                            ; 004e7852
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e7853
    PUSH EAX                            ; 004e7859
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e785a
    CALL dword ptr [EDX + 0xbc]         ; 004e7860
    ADD ESP,0x4                         ; 004e7866
    PUSH EAX                            ; 004e7869
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e786a
    ADD EAX,0x20                        ; 004e7870
    PUSH EAX                            ; 004e7873
    PUSH EBX                            ; 004e7874
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004e7875
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004e787a
    TEST EAX,EAX                        ; 004e787d
    JL 0x004e79fa                       ; 004e787f
        ;   XREF to: 004e79fa (CONDITIONAL_JUMP)  ; LAB_004e79fa
    JLE 0x004e70a3                      ; 004e7885
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    TEST ESI,ESI                        ; 004e788b
    JLE 0x004e70a3                      ; 004e788d
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xbe38]        ; 004e7893
    FLDZ                                ; 004e7899
    FCOMPP                              ; 004e789b
    FNSTSW AX                           ; 004e789d
    SAHF                                ; 004e789f
    JC 0x004e70a3                       ; 004e78a0
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e78a6
    PUSH EAX                            ; 004e78ac
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e78ad
    CALL dword ptr [EDX + 0x108]        ; 004e78b3
    ADD ESP,0x4                         ; 004e78b9
    TEST EAX,EAX                        ; 004e78bc
    JNZ 0x004e70a3                      ; 004e78be
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBX + 0xbed0]        ; 004e78c4
    FLDZ                                ; 004e78ca
    FCOMPP                              ; 004e78cc
    FNSTSW AX                           ; 004e78ce
    SAHF                                ; 004e78d0
    JC 0x004e70a3                       ; 004e78d1
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBP + 0xfffffe96]    ; 004e78d7
    FMUL ST0                            ; 004e78dd
    FLD float ptr [EBP + 0xfffffe92]    ; 004e78df
    FMUL ST0                            ; 004e78e5
    FADDP                               ; 004e78e7
    FLD float ptr [EBP + 0xfffffe9a]    ; 004e78e9
    FMUL ST0                            ; 004e78ef
    FADDP                               ; 004e78f1
    FSQRT                               ; 004e78f3
    FSTP float ptr [EBP + 0x46]         ; 004e78f5
    MOV EAX,dword ptr [EBP + 0x46]      ; 004e78f8
    XOR ESI,ESI                         ; 004e78fb
    MOV dword ptr [EBP + 0x42],EAX      ; 004e78fd
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004e7900
    MOV dword ptr [EBP + 0x66],ESI      ; 004e7906
    MOV dword ptr [EBP + 0x4a],ESI      ; 004e7909
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e790c
    MOV dword ptr [EBP + 0x52],ESI      ; 004e7913
    TEST ECX,ECX                        ; 004e7916
    JZ 0x004e7936                       ; 004e7918
        ;   XREF to: 004e7936 (CONDITIONAL_JUMP)  ; LAB_004e7936
    FLD float ptr [0x0065ed1c]          ; 004e791a | FLOAT_0065ed1c
    FLD float ptr [EBP + 0x46]          ; 004e7920
    FSUB ST0,ST1                        ; 004e7923
    FABS                                ; 004e7925
    FDIVRP                              ; 004e7927
    FLD1                                ; 004e7929
    FSUBRP                              ; 004e792b
    FMUL double ptr [0x0062dd9a]        ; 004e792d | DOUBLE_0062dd9a
    FSTP float ptr [EBP + 0x66]         ; 004e7933
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 004e7936
        ;   Label: LAB_004e7936
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004e793c
    JZ 0x004e7962                       ; 004e7944
        ;   XREF to: 004e7962 (CONDITIONAL_JUMP)  ; LAB_004e7962
    FLD float ptr [0x0065ed20]          ; 004e7946 | FLOAT_0065ed20
    FLD float ptr [EBP + 0x42]          ; 004e794c
    FSUB ST0,ST1                        ; 004e794f
    FABS                                ; 004e7951
    FDIVRP                              ; 004e7953
    FLD1                                ; 004e7955
    FSUBRP                              ; 004e7957
    FMUL double ptr [0x0062dda2]        ; 004e7959 | DOUBLE_0062dda2
    FSTP float ptr [EBP + 0x4a]         ; 004e795f
    PUSH 0x0                            ; 004e7962
        ;   Label: LAB_004e7962
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e7964
    PUSH EBX                            ; 004e796a
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e796b
    PUSH EAX                            ; 004e7971
    CALL dword ptr [EDX + 0xfc]         ; 004e7972
    ADD ESP,0xc                         ; 004e7978
    TEST EAX,EAX                        ; 004e797b
    JZ 0x004e799b                       ; 004e797d
        ;   XREF to: 004e799b (CONDITIONAL_JUMP)  ; LAB_004e799b
    FLD float ptr [0x0065ed18]          ; 004e797f | FLOAT_0065ed18
    FLD float ptr [EBP + 0x42]          ; 004e7985
    FSUB ST0,ST1                        ; 004e7988
    FABS                                ; 004e798a
    FDIVRP                              ; 004e798c
    FLD1                                ; 004e798e
    FSUBRP                              ; 004e7990
    FMUL double ptr [0x0062dd9a]        ; 004e7992 | DOUBLE_0062dd9a
    FSTP float ptr [EBP + 0x52]         ; 004e7998
    FLD float ptr [EBP + 0x66]          ; 004e799b
        ;   Label: LAB_004e799b
    FADD float ptr [EBP + 0x4a]         ; 004e799e
    FST float ptr [EBP + 0x4e]          ; 004e79a1
    FADD float ptr [EBP + 0x52]         ; 004e79a4
    FST float ptr [EBP + 0x56]          ; 004e79a7
    FLDZ                                ; 004e79aa
    FCOMPP                              ; 004e79ac
    FNSTSW AX                           ; 004e79ae
    SAHF                                ; 004e79b0
    JNC 0x004e70a3                      ; 004e79b1
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH dword ptr [EBP + 0x56]         ; 004e79b7
    PUSH 0x0                            ; 004e79ba
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e79bc
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e79c1
    LEA EDX,[EBX + 0x158]               ; 004e79c4
    ADD ESP,0x8                         ; 004e79ca
    MOV EAX,dword ptr [EBP + 0x76]      ; 004e79cd
    MOV dword ptr [EBP + 0x62],EAX      ; 004e79d0
    FLD float ptr [EBP + 0x62]          ; 004e79d3
    FCOMP float ptr [EBP + 0x66]        ; 004e79d6
    FNSTSW AX                           ; 004e79d9
    SAHF                                ; 004e79db
    JNC 0x004e7a0f                      ; 004e79dc
        ;   XREF to: 004e7a0f (CONDITIONAL_JUMP)  ; LAB_004e7a0f
    PUSH 0x1                            ; 004e79de
    PUSH 0x2                            ; 004e79e0
    PUSH EDX                            ; 004e79e2
        ;   Label: LAB_004e79e2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e79e3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e79e8
    MOV dword ptr [EBX + 0xbe38],0x3f333333 ; 004e79eb
    JMP 0x004e70a3                      ; 004e79f5
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004e79fa
        ;   Label: LAB_004e79fa
    PUSH 0x0                            ; 004e79fc
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004e79fe
    PUSH EAX                            ; 004e7a01
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7a02
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7a07
    JMP 0x004e70a3                      ; 004e7a0a
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    FLD float ptr [EBP + 0x62]          ; 004e7a0f
        ;   Label: LAB_004e7a0f
    FCOMP float ptr [EBP + 0x4e]        ; 004e7a12
    FNSTSW AX                           ; 004e7a15
    SAHF                                ; 004e7a17
    JNC 0x004e7a20                      ; 004e7a18
        ;   XREF to: 004e7a20 (CONDITIONAL_JUMP)  ; LAB_004e7a20
    PUSH 0x1                            ; 004e7a1a
    PUSH 0xc                            ; 004e7a1c
    JMP 0x004e79e2                      ; 004e7a1e
        ;   XREF to: 004e79e2 (UNCONDITIONAL_JUMP)  ; LAB_004e79e2
    PUSH 0x1                            ; 004e7a20
        ;   Label: LAB_004e7a20
    PUSH 0xb                            ; 004e7a22
    JMP 0x004e79e2                      ; 004e7a24
        ;   XREF to: 004e79e2 (UNCONDITIONAL_JUMP)  ; LAB_004e79e2
    CMP dword ptr [EBX + 0xbecc],0x0    ; 004e7a26
        ;   Label: LAB_004e7a26
    JL 0x004e7b68                       ; 004e7a2d
        ;   XREF to: 004e7b68 (CONDITIONAL_JUMP)  ; LAB_004e7b68
    CMP dword ptr [EBX + 0xbecc],0x0    ; 004e7a33
        ;   Label: LAB_004e7a33
    JZ 0x004e7b9b                       ; 004e7a3a
        ;   XREF to: 004e7b9b (CONDITIONAL_JUMP)  ; LAB_004e7b9b
    MOV EAX,[0x0065ed24]                ; 004e7a40 | FLOAT_0065ed24
    MOV EDX,dword ptr [EBX + 0xbecc]    ; 004e7a45
    MOV dword ptr [EBP + 0x5e],EAX      ; 004e7a4b
    CMP EDX,0xe                         ; 004e7a4e
    JNZ 0x004e7a5b                      ; 004e7a51
        ;   XREF to: 004e7a5b (CONDITIONAL_JUMP)  ; LAB_004e7a5b
    MOV EAX,[0x0065ed28]                ; 004e7a53 | FLOAT_0065ed28
    MOV dword ptr [EBP + 0x5e],EAX      ; 004e7a58
    PUSH 0x3db2b8c2                     ; 004e7a5b
        ;   Label: LAB_004e7a5b
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004e7a60
    PUSH 0x3f000000                     ; 004e7a63
    MOV dword ptr [EBP + -0x52],EAX     ; 004e7a68
    LEA EAX,[EBP + -0x5a]               ; 004e7a6b
    XOR ECX,ECX                         ; 004e7a6e
    PUSH EAX                            ; 004e7a70
    MOV EAX,[0x02db87d0]                ; 004e7a71 | g_LocalHeroIndex
    MOV dword ptr [EBP + -0x5a],ECX     ; 004e7a76
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e7a79 | g_HeroActors
    MOV dword ptr [EBP + -0x56],ECX     ; 004e7a80
    PUSH EAX                            ; 004e7a83
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e7a84
    CALL dword ptr [EDX + 0xbc]         ; 004e7a8a
    ADD ESP,0x4                         ; 004e7a90
    PUSH EAX                            ; 004e7a93
    XOR ESI,ESI                         ; 004e7a94
    PUSH ESI                            ; 004e7a96
    LEA EAX,[EBP + 0xfffffef2]          ; 004e7a97
    PUSH EAX                            ; 004e7a9d
    MOV EAX,[0x02db87d0]                ; 004e7a9e | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e7aa3 | g_HeroActors
    ADD EAX,0x158                       ; 004e7aaa
    PUSH EAX                            ; 004e7aaf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004e7ab0
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e7ab5
    PUSH EAX                            ; 004e7ab8
    LEA EAX,[EBP + 0xffffff3a]          ; 004e7ab9
    PUSH EAX                            ; 004e7abf
    MOV EAX,[0x02db87d0]                ; 004e7ac0 | g_LocalHeroIndex
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e7ac5 | g_HeroActors
    PUSH EDX                            ; 004e7acc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e7acd
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e7ad2
    PUSH EAX                            ; 004e7ad5
    PUSH EBX                            ; 004e7ad6
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004e7ad7
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004e7adc
    TEST EAX,EAX                        ; 004e7adf
    JLE 0x004e70a3                      ; 004e7ae1
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x02db87d0]                ; 004e7ae7 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e7aec | g_HeroActors
    PUSH EAX                            ; 004e7af3
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e7af4
    CALL dword ptr [EDX + 0x120]        ; 004e7afa
    ADD ESP,0x4                         ; 004e7b00
    CMP EAX,0x2                         ; 004e7b03
    JNZ 0x004e70a3                      ; 004e7b06
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004e7b0c
    MOV ECX,dword ptr [EBX + 0xbecc]    ; 004e7b0e
    PUSH ECX                            ; 004e7b14
    LEA EAX,[EBX + 0x158]               ; 004e7b15
    PUSH EAX                            ; 004e7b1b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7b1c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV ESI,dword ptr [EBX + 0xbecc]    ; 004e7b21
    ADD ESP,0xc                         ; 004e7b27
    CMP ESI,0xd                         ; 004e7b2a
    JNZ 0x004e70a3                      ; 004e7b2d
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f99999a                     ; 004e7b33
    PUSH 0x3f000000                     ; 004e7b38
    MOV ESI,dword ptr [EBX + 0x154]     ; 004e7b3d
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e7b43
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 004e7b48
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7b4b
    SUB ESP,0x4                         ; 004e7b4e
    MOV EAX,dword ptr [EBP + 0x76]      ; 004e7b51
    MOV dword ptr [ESP],EAX             ; 004e7b54
    PUSH 0x62dd06                       ; 004e7b57 | = "ghoul-scream-!-?.wav"
    PUSH EBX                            ; 004e7b5c
    CALL dword ptr [ESI + 0x2c]         ; 004e7b5d
    ADD ESP,0xc                         ; 004e7b60
    JMP 0x004e70a3                      ; 004e7b63
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EDX,dword ptr [EBX + 0xbee4]    ; 004e7b68
        ;   Label: LAB_004e7b68
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x2298] ; 004e7b6e
    XOR EAX,EAX                         ; 004e7b75
    TEST ECX,ECX                        ; 004e7b77
    JZ 0x004e7b80                       ; 004e7b79
        ;   XREF to: 004e7b80 (CONDITIONAL_JUMP)  ; LAB_004e7b80
    MOV EAX,0x1                         ; 004e7b7b
    MOV EDX,dword ptr [EBX + 0xbeec]    ; 004e7b80
        ;   Label: LAB_004e7b80
    CMP dword ptr [EBX + EDX*0x4 + 0x2298],0x0 ; 004e7b86
    JZ 0x004e7b91                       ; 004e7b8e
        ;   XREF to: 004e7b91 (CONDITIONAL_JUMP)  ; LAB_004e7b91
    INC EAX                             ; 004e7b90
    TEST EAX,EAX                        ; 004e7b91
        ;   Label: LAB_004e7b91
    JNZ 0x004e7bb3                      ; 004e7b93
        ;   XREF to: 004e7bb3 (CONDITIONAL_JUMP)  ; LAB_004e7bb3
    MOV dword ptr [EBX + 0xbecc],EAX    ; 004e7b95
    PUSH 0x1                            ; 004e7b9b
        ;   Label: LAB_004e7b9b
    PUSH 0x0                            ; 004e7b9d
    LEA EAX,[EBX + 0x158]               ; 004e7b9f
    PUSH EAX                            ; 004e7ba5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7ba6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7bab
    JMP 0x004e70a3                      ; 004e7bae
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    CMP EAX,0x1                         ; 004e7bb3
        ;   Label: LAB_004e7bb3
    JNZ 0x004e7bd6                      ; 004e7bb6
        ;   XREF to: 004e7bd6 (CONDITIONAL_JUMP)  ; LAB_004e7bd6
    MOV EAX,[0x0067b654]                ; 004e7bb8 | g_CGamePtr
    MOV dword ptr [EBX + 0xbecc],0xe    ; 004e7bbd
    MOV dword ptr [EAX + 0x220],0x1     ; 004e7bc7 | DAT_02d81cbc
    JMP 0x004e7a33                      ; 004e7bd1
        ;   XREF to: 004e7a33 (UNCONDITIONAL_JUMP)  ; LAB_004e7a33
    PUSH 0x3f000000                     ; 004e7bd6
        ;   Label: LAB_004e7bd6
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e7bdb
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e7be0
    TEST EAX,EAX                        ; 004e7be3
    SETZ AL                             ; 004e7be5
    AND EAX,0xff                        ; 004e7be8
    ADD EAX,0xd                         ; 004e7bed
    MOV dword ptr [EBX + 0xbecc],EAX    ; 004e7bf0
    MOV EAX,[0x0067b654]                ; 004e7bf6 | g_CGamePtr
    MOV dword ptr [EAX + 0x220],0x1     ; 004e7bfb | DAT_02d81cbc
    JMP 0x004e7a33                      ; 004e7c05
        ;   XREF to: 004e7a33 (UNCONDITIONAL_JUMP)  ; LAB_004e7a33
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e7c0a
        ;   Label: caseD_2
    TEST EAX,EAX                        ; 004e7c10
    JZ 0x004e7576                       ; 004e7c12
        ;   XREF to: 004e7576 (CONDITIONAL_JUMP)  ; LAB_004e7576
    PUSH EAX                            ; 004e7c18
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e7c19
    CALL dword ptr [EDX + 0x108]        ; 004e7c1f
    ADD ESP,0x4                         ; 004e7c25
    TEST EAX,EAX                        ; 004e7c28
    JZ 0x004e7c3e                       ; 004e7c2a
        ;   XREF to: 004e7c3e (CONDITIONAL_JUMP)  ; LAB_004e7c3e
    PUSH 0x1                            ; 004e7c2c
    PUSH 0x1                            ; 004e7c2e
    PUSH ESI                            ; 004e7c30
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7c31
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7c36
    JMP 0x004e70a3                      ; 004e7c39
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f000000                     ; 004e7c3e
        ;   Label: LAB_004e7c3e
    PUSH 0x3e4ccccd                     ; 004e7c43
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e7c48
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7c4d
    FLD float ptr [EBP + 0x76]          ; 004e7c50
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004e7c53
    FSTP float ptr [EBX + 0xbe38]       ; 004e7c59
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e7c5f
    ADD ESP,0x8                         ; 004e7c66
    TEST EDX,EDX                        ; 004e7c69
    JZ 0x004e70a3                       ; 004e7c6b
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH ESI                            ; 004e7c71
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 004e7c72
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7c77
    ADD ESP,0x4                         ; 004e7c7a
    MOV EAX,dword ptr [EBP + 0x76]      ; 004e7c7d
    MOV dword ptr [EBP + 0x3a],EAX      ; 004e7c80
    FLD float ptr [EBP + 0x3a]          ; 004e7c83
    FST double ptr [EBP + -0x12]        ; 004e7c86
    FCOMP double ptr [0x0062dd7a]       ; 004e7c89 | DOUBLE_0062dd7a
    FNSTSW AX                           ; 004e7c8f
    SAHF                                ; 004e7c91
    JA 0x004e70a3                       ; 004e7c92
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x0065ed1c]                ; 004e7c98 | FLOAT_0065ed1c
    FLD1                                ; 004e7c9d
    MOV dword ptr [EBP + 0x6a],EAX      ; 004e7c9f
    FCOMP double ptr [EBP + -0x12]      ; 004e7ca2
    FNSTSW AX                           ; 004e7ca5
    SAHF                                ; 004e7ca7
    JA 0x004e70a3                       ; 004e7ca8
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    LEA EAX,[EBP + 0xfffffdb2]          ; 004e7cae
    PUSH EAX                            ; 004e7cb4
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004e7cb5
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e7cba
    PUSH 0x41700000                     ; 004e7cbd
    PUSH 0x40e00000                     ; 004e7cc2
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e7cc7
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7ccc
    MOV EAX,dword ptr [EBP + 0x76]      ; 004e7ccf
    MOV dword ptr [EBP + 0xfffffdb6],EAX ; 004e7cd2
    MOV ECX,dword ptr [EBX + 0xbf24]    ; 004e7cd8
    ADD ESP,0x8                         ; 004e7cde
    TEST ECX,ECX                        ; 004e7ce1
    JZ 0x004e7cfb                       ; 004e7ce3
        ;   XREF to: 004e7cfb (CONDITIONAL_JUMP)  ; LAB_004e7cfb
    FLD float ptr [EBP + 0xfffffdb6]    ; 004e7ce5
    FLD ST0                             ; 004e7ceb
    FMUL double ptr [0x0062dd7a]        ; 004e7ced | DOUBLE_0062dd7a
    FSTP ST1                            ; 004e7cf3
    FSTP float ptr [EBP + 0xfffffdb6]   ; 004e7cf5
    LEA EAX,[EBP + 0xfffffdb2]          ; 004e7cfb
        ;   Label: LAB_004e7cfb
    MOV EDX,dword ptr [0x02d83304]      ; 004e7d01 | INT_02d83304
    PUSH EAX                            ; 004e7d07
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7d08
    MOV dword ptr [EBP + 0xfffffde6],EBX ; 004e7d0f
    SUB EAX,EDX                         ; 004e7d15
    MOV dword ptr [EBP + 0xfffffdea],EBX ; 004e7d17
    SHL EAX,0x4                         ; 004e7d1d
    LEA EDX,[EBX + 0xfd8]               ; 004e7d20
    ADD EAX,EDX                         ; 004e7d26
    PUSH 0x3e4ccccd                     ; 004e7d28
    PUSH EAX                            ; 004e7d2d
    PUSH 0x2d832b4                      ; 004e7d2e | INT_02d832b4
    LEA EAX,[EBP + 0xffffff76]          ; 004e7d33
    PUSH EAX                            ; 004e7d39
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004e7d3a
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004e7d3f
    PUSH EAX                            ; 004e7d42
    LEA EAX,[EBP + 0xfffffece]          ; 004e7d43
    PUSH EAX                            ; 004e7d49
    PUSH EBX                            ; 004e7d4a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e7d4b
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e7d50
    PUSH EAX                            ; 004e7d53
    PUSH EBX                            ; 004e7d54
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 004e7d55
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 004e7d5a
    TEST EAX,EAX                        ; 004e7d5d
    JZ 0x004e70a3                       ; 004e7d5f
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x62dd1b                       ; 004e7d65 | = "gh-hits?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e7d6a
    PUSH EBX                            ; 004e7d70
    CALL dword ptr [EAX + 0x24]         ; 004e7d71
    ADD ESP,0x8                         ; 004e7d74
    JMP 0x004e70a3                      ; 004e7d77
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e7d7c
        ;   Label: caseD_c
    TEST EAX,EAX                        ; 004e7d82
    JZ 0x004e7d9a                       ; 004e7d84
        ;   XREF to: 004e7d9a (CONDITIONAL_JUMP)  ; LAB_004e7d9a
    PUSH EAX                            ; 004e7d86
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e7d87
    CALL dword ptr [EDX + 0x108]        ; 004e7d8d
    ADD ESP,0x4                         ; 004e7d93
    TEST EAX,EAX                        ; 004e7d96
    JZ 0x004e7dac                       ; 004e7d98
        ;   XREF to: 004e7dac (CONDITIONAL_JUMP)  ; LAB_004e7dac
    PUSH 0x1                            ; 004e7d9a
        ;   Label: LAB_004e7d9a
    PUSH 0x1                            ; 004e7d9c
    PUSH ESI                            ; 004e7d9e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7d9f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7da4
    JMP 0x004e70a3                      ; 004e7da7
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x3f000000                     ; 004e7dac
        ;   Label: LAB_004e7dac
    PUSH 0x3e4ccccd                     ; 004e7db1
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e7db6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7dbb
    FLD float ptr [EBP + 0x76]          ; 004e7dbe
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 004e7dc1
    FSTP float ptr [EBX + 0xbe38]       ; 004e7dc7
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e7dcd
    ADD ESP,0x8                         ; 004e7dd4
    TEST EDX,EDX                        ; 004e7dd7
    JZ 0x004e70a3                       ; 004e7dd9
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH ESI                            ; 004e7ddf
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 004e7de0
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7de5
    ADD ESP,0x4                         ; 004e7de8
    MOV EAX,dword ptr [EBP + 0x76]      ; 004e7deb
    MOV dword ptr [EBP + 0x3e],EAX      ; 004e7dee
    FLD float ptr [EBP + 0x3e]          ; 004e7df1
    FST double ptr [EBP + -0x1a]        ; 004e7df4
    FCOMP double ptr [0x0062dd7a]       ; 004e7df7 | DOUBLE_0062dd7a
    FNSTSW AX                           ; 004e7dfd
    SAHF                                ; 004e7dff
    JA 0x004e70a3                       ; 004e7e00
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x0065ed20]                ; 004e7e06 | FLOAT_0065ed20
    FLD1                                ; 004e7e0b
    MOV dword ptr [EBP + 0x6a],EAX      ; 004e7e0d
    FCOMP double ptr [EBP + -0x1a]      ; 004e7e10
    FNSTSW AX                           ; 004e7e13
    SAHF                                ; 004e7e15
    JA 0x004e70a3                       ; 004e7e16
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    LEA EAX,[EBP + 0xfffffd76]          ; 004e7e1c
    PUSH EAX                            ; 004e7e22
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004e7e23
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e7e28
    PUSH 0x41700000                     ; 004e7e2b
    PUSH 0x40e00000                     ; 004e7e30
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e7e35
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7e3a
    MOV EAX,dword ptr [EBP + 0x76]      ; 004e7e3d
    MOV dword ptr [EBP + 0xfffffd7a],EAX ; 004e7e40
    MOV ECX,dword ptr [EBX + 0xbf24]    ; 004e7e46
    ADD ESP,0x8                         ; 004e7e4c
    TEST ECX,ECX                        ; 004e7e4f
    JZ 0x004e7e69                       ; 004e7e51
        ;   XREF to: 004e7e69 (CONDITIONAL_JUMP)  ; LAB_004e7e69
    FLD float ptr [EBP + 0xfffffd7a]    ; 004e7e53
    FLD ST0                             ; 004e7e59
    FMUL double ptr [0x0062dd7a]        ; 004e7e5b | DOUBLE_0062dd7a
    FSTP ST1                            ; 004e7e61
    FSTP float ptr [EBP + 0xfffffd7a]   ; 004e7e63
    LEA EAX,[EBP + 0xfffffd76]          ; 004e7e69
        ;   Label: LAB_004e7e69
    MOV EDX,dword ptr [0x02d83300]      ; 004e7e6f | INT_02d83300
    PUSH EAX                            ; 004e7e75
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7e76
    MOV dword ptr [EBP + 0xfffffdaa],EBX ; 004e7e7d
    SUB EAX,EDX                         ; 004e7e83
    MOV dword ptr [EBP + 0xfffffdae],EBX ; 004e7e85
    SHL EAX,0x4                         ; 004e7e8b
    LEA EDX,[EBX + 0xfd8]               ; 004e7e8e
    ADD EAX,EDX                         ; 004e7e94
    PUSH 0x3ecccccd                     ; 004e7e96
    PUSH EAX                            ; 004e7e9b
    PUSH 0x2d832a8                      ; 004e7e9c | INT_02d832a8
    LEA EAX,[EBP + 0xfffffe7a]          ; 004e7ea1
    PUSH EAX                            ; 004e7ea7
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004e7ea8
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004e7ead
    PUSH EAX                            ; 004e7eb0
    LEA EAX,[EBP + 0xfffffe6e]          ; 004e7eb1
    PUSH EAX                            ; 004e7eb7
    PUSH EBX                            ; 004e7eb8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e7eb9
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e7ebe
    PUSH EAX                            ; 004e7ec1
    PUSH EBX                            ; 004e7ec2
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 004e7ec3
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 004e7ec8
    TEST EAX,EAX                        ; 004e7ecb
    JZ 0x004e70a3                       ; 004e7ecd
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x62dd28                       ; 004e7ed3 | = "gh-hits?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e7ed8
    PUSH EBX                            ; 004e7ede
    CALL dword ptr [EAX + 0x24]         ; 004e7edf
    ADD ESP,0x8                         ; 004e7ee2
    JMP 0x004e70a3                      ; 004e7ee5
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e7eea
        ;   Label: caseD_b
    TEST EAX,EAX                        ; 004e7ef0
    JZ 0x004e7d9a                       ; 004e7ef2
        ;   XREF to: 004e7d9a (CONDITIONAL_JUMP)  ; LAB_004e7d9a
    PUSH EAX                            ; 004e7ef8
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e7ef9
    CALL dword ptr [EDX + 0x108]        ; 004e7eff
    ADD ESP,0x4                         ; 004e7f05
    TEST EAX,EAX                        ; 004e7f08
    JNZ 0x004e7f19                      ; 004e7f0a
        ;   XREF to: 004e7f19 (CONDITIONAL_JUMP)  ; LAB_004e7f19
    MOV EAX,[0x0065ed18]                ; 004e7f0c | FLOAT_0065ed18
    MOV dword ptr [EBP + 0x6a],EAX      ; 004e7f11
    JMP 0x004e70a3                      ; 004e7f14
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e7f19
        ;   Label: LAB_004e7f19
    PUSH EAX                            ; 004e7f1f
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e7f20
    CALL dword ptr [EDX + 0x108]        ; 004e7f26
    ADD ESP,0x4                         ; 004e7f2c
    CMP EAX,EBX                         ; 004e7f2f
    JZ 0x004e70a3                       ; 004e7f31
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004e7f37
    PUSH 0x1                            ; 004e7f39
    PUSH ESI                            ; 004e7f3b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7f3c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7f41
    JMP 0x004e70a3                      ; 004e7f44
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV EAX,[0x02cf6a80]                ; 004e7f49 | g_GlobalDeltaTimeInt
        ;   Label: caseD_d
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 004e7f4e
    SUB EDX,EAX                         ; 004e7f54
    MOV dword ptr [EBX + 0xbec0],EDX    ; 004e7f56
    TEST EDX,EDX                        ; 004e7f5c
    JG 0x004e7f9b                       ; 004e7f5e
        ;   XREF to: 004e7f9b (CONDITIONAL_JUMP)  ; LAB_004e7f9b
    PUSH 0x62dd35                       ; 004e7f60 | = "burp[1,2].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e7f65
    PUSH EBX                            ; 004e7f6b
    CALL dword ptr [EAX + 0x24]         ; 004e7f6c
    ADD ESP,0x8                         ; 004e7f6f
    PUSH 0x41f00000                     ; 004e7f72
    PUSH 0x41700000                     ; 004e7f77
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e7f7c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e7f81
    FLD float ptr [EBP + 0x76]          ; 004e7f84
    FMUL double ptr [0x0062dd72]        ; 004e7f87 | DOUBLE_0062dd72
    ADD ESP,0x8                         ; 004e7f8d
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e7f90
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBX + 0xbec0]      ; 004e7f95
    PUSH dword ptr [EBP + 0x92]         ; 004e7f9b
        ;   Label: LAB_004e7f9b
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e7fa1
    PUSH EBX                            ; 004e7fa7
    CALL dword ptr [EAX + 0x158]        ; 004e7fa8
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 004e7fae
    ADD ESP,0x8                         ; 004e7fb4
    TEST ESI,ESI                        ; 004e7fb7
    JZ 0x004e70a3                       ; 004e7fb9
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    PUSH 0x1                            ; 004e7fbf
    PUSH 0x0                            ; 004e7fc1
    LEA EAX,[EBX + 0x158]               ; 004e7fc3
    PUSH EAX                            ; 004e7fc9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e7fca
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e7fcf
    JMP 0x004e70a3                      ; 004e7fd2
        ;   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)  ; caseD_10
    MOV dword ptr [EBP + 0x6a],0xbf800000 ; 004e7fd7
        ;   Label: LAB_004e7fd7
    LEA ESI,[EBX + 0x158]               ; 004e7fde
    PUSH ESI                            ; 004e7fe4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e7fe5
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e7fea
    ADD ESP,0x4                         ; 004e7fed
    CMP EAX,0x11                        ; 004e7ff0
    JA 0x004e70a3                       ; 004e7ff3
        ;   XREF to: 004e70a3 (CONDITIONAL_JUMP)  ; caseD_10
    JMP dword ptr [EAX*0x4 + 0x4e65b8]  ; 004e7ff9 | caseD_0 | caseD_11 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x241c]              ; 004e8000
        ;   Label: LAB_004e8000
    FLD float ptr [EAX + 0x4]           ; 004e8006
    FMUL ST0                            ; 004e8009
    FLD float ptr [EAX]                 ; 004e800b
    FMUL ST0                            ; 004e800d
    FADDP                               ; 004e800f
    FLD float ptr [EAX + 0x8]           ; 004e8011 | DAT_00002424
    FMUL ST0                            ; 004e8014
    FADDP                               ; 004e8016
    FSQRT                               ; 004e8018
    FCOMP double ptr [0x0062ddf2]       ; 004e801a | DOUBLE_0062ddf2
    FNSTSW AX                           ; 004e8020
    SAHF                                ; 004e8022
    JA 0x004e695f                       ; 004e8023
        ;   XREF to: 004e695f (CONDITIONAL_JUMP)  ; LAB_004e695f
    MOV ECX,dword ptr [EBX + 0xbebc]    ; 004e8029
    PUSH ECX                            ; 004e802f
    MOV ESI,dword ptr [0x00681ef8]      ; 004e8030 | g_CSoundPtr
    PUSH ESI                            ; 004e8036 | g_CSoundInstance
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 004e8037
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004e803c
    JMP 0x004e697d                      ; 004e803f
        ;   XREF to: 004e697d (UNCONDITIONAL_JUMP)  ; LAB_004e697d
    SUB ESP,0x8                         ; 004e8044
        ;   Label: LAB_004e8044
    FLD float ptr [EBX + 0xbe24]        ; 004e8047
    FSTP double ptr [ESP]               ; 004e804d
    PUSH 0x62dd43                       ; 004e8050 | = "ghoul-walk-?.wav *%f"
    LEA EAX,[EBP + 0xfffffd12]          ; 004e8055
    PUSH EAX                            ; 004e805b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004e805c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e8061
    LEA EAX,[EBP + 0xfffffd12]          ; 004e8064
    PUSH EAX                            ; 004e806a
    MOV EDX,dword ptr [EBX + 0x154]     ; 004e806b
    PUSH EBX                            ; 004e8071
    CALL dword ptr [EDX + 0x28]         ; 004e8072
    ADD ESP,0x8                         ; 004e8075
    MOV dword ptr [EBX + 0xbebc],EAX    ; 004e8078
    JMP 0x004e697d                      ; 004e807e
        ;   XREF to: 004e697d (UNCONDITIONAL_JUMP)  ; LAB_004e697d
    MOV EAX,dword ptr [EBX + 0xbf04]    ; 004e8083
        ;   Label: LAB_004e8083
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004e8089
    JZ 0x004e8152                       ; 004e8091
        ;   XREF to: 004e8152 (CONDITIONAL_JUMP)  ; LAB_004e8152
    MOV ECX,dword ptr [0x02d83310]      ; 004e8097 | INT_02d83310
    PUSH 0x3e4ccccd                     ; 004e809d
    PUSH ECX                            ; 004e80a2
    MOV ESI,dword ptr [EBX + 0xbee0]    ; 004e80a3
    PUSH ESI                            ; 004e80a9
    PUSH EBX                            ; 004e80aa
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 004e80ab
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 004e80b0
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e80b6
    ADD ESP,0x10                        ; 004e80bd
    TEST EDX,EDX                        ; 004e80c0
    JZ 0x004e80e0                       ; 004e80c2
        ;   XREF to: 004e80e0 (CONDITIONAL_JUMP)  ; LAB_004e80e0
    MOV ECX,dword ptr [0x02d83308]      ; 004e80c4 | INT_02d83308
    PUSH 0x3e4ccccd                     ; 004e80ca
    PUSH ECX                            ; 004e80cf
    MOV ESI,dword ptr [EBX + 0xbee4]    ; 004e80d0
    PUSH ESI                            ; 004e80d6
    PUSH EBX                            ; 004e80d7
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 004e80d8
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 004e80dd
    MOV EAX,[0x02d83314]                ; 004e80e0 | INT_02d83314
        ;   Label: LAB_004e80e0
    PUSH 0x3e4ccccd                     ; 004e80e5
    PUSH EAX                            ; 004e80ea
    MOV EDX,dword ptr [EBX + 0xbee8]    ; 004e80eb
    PUSH EDX                            ; 004e80f1
    PUSH EBX                            ; 004e80f2
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 004e80f3
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 004e80f8
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e80fe
    ADD ESP,0x10                        ; 004e8105
    TEST ECX,ECX                        ; 004e8108
    JZ 0x004e8128                       ; 004e810a
        ;   XREF to: 004e8128 (CONDITIONAL_JUMP)  ; LAB_004e8128
    MOV ESI,dword ptr [0x02d8330c]      ; 004e810c | INT_02d8330c
    PUSH 0x3e4ccccd                     ; 004e8112
    PUSH ESI                            ; 004e8117
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004e8118
    PUSH EAX                            ; 004e811e
    PUSH EBX                            ; 004e811f
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 004e8120
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 004e8125
    MOV EDX,dword ptr [0x02d832fc]      ; 004e8128 | INT_02d832fc
        ;   Label: LAB_004e8128
    PUSH 0x3f333333                     ; 004e812e
    PUSH EDX                            ; 004e8133
    MOV ECX,dword ptr [EBX + 0xbf08]    ; 004e8134
    PUSH ECX                            ; 004e813a
    PUSH EBX                            ; 004e813b
        ;   Label: LAB_004e813b
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810 ; 004e813c
        ;   XREF to: 0042b810 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 004e8141
    PUSH EBX                            ; 004e8144
    CALL core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670 ; 004e8145
        ;   XREF to: 0042b670 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e814a
    JMP 0x004e698a                      ; 004e814d
        ;   XREF to: 004e698a (UNCONDITIONAL_JUMP)  ; LAB_004e698a
    MOV EAX,[0x02d83324]                ; 004e8152 | INT_02d83324
        ;   Label: LAB_004e8152
    PUSH 0x3f000000                     ; 004e8157
    PUSH EAX                            ; 004e815c
    MOV EDX,dword ptr [EBX + 0xbf04]    ; 004e815d
    PUSH EDX                            ; 004e8163
    JMP 0x004e813b                      ; 004e8164
        ;   XREF to: 004e813b (UNCONDITIONAL_JUMP)  ; LAB_004e813b
    MOV dword ptr [EBX + 0xbf28],0x3f800000 ; 004e8166
        ;   Label: LAB_004e8166
    JMP 0x004e6a37                      ; 004e8170
        ;   XREF to: 004e6a37 (UNCONDITIONAL_JUMP)  ; LAB_004e6a37
    MOV EDX,dword ptr [EBX]             ; 004e8175
        ;   Label: LAB_004e8175
    MOV dword ptr [EAX],EDX             ; 004e8177
    MOV EDX,dword ptr [EBX + 0x4]       ; 004e8179
    MOV dword ptr [EAX + 0x4],EDX       ; 004e817c
    MOV EDX,dword ptr [EBX + 0x8]       ; 004e817f
    MOV dword ptr [EAX + 0x8],EDX       ; 004e8182
    LEA ESP,[EBP + 0x7a]                ; 004e8185
    POP EBP                             ; 004e8188
    POP EDI                             ; 004e8189
    POP ESI                             ; 004e818a
    POP EBX                             ; 004e818b
    RET                                 ; 004e818c

