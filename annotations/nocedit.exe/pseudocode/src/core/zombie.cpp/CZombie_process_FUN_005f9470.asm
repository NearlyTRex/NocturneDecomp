; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr,float delta_time)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x3b0]:4  local_3b0
; undefined1       Stack[-0x3ac]:1  local_3ac
; undefined4       Stack[-0x3a8]:4  local_3a8
; undefined4       Stack[-0x378]:4  local_378
; undefined4       Stack[-0x374]:4  local_374
; undefined1       Stack[-0x370]:1  local_370
; undefined4       Stack[-0x36c]:4  local_36c
; undefined4       Stack[-0x33c]:4  local_33c
; undefined4       Stack[-0x338]:4  local_338
; undefined1       Stack[-0x334]:1  local_334
; undefined1       Stack[-0x333]:1  local_333
; undefined1       Stack[-0x314]:1  local_314
; undefined1       Stack[-0x2fc]:1  local_2fc
; undefined1       Stack[-0x2e4]:1  local_2e4
; undefined1       Stack[-0x2cc]:1  local_2cc
; undefined1       Stack[-0x2b4]:1  local_2b4
; undefined1       Stack[-0x29c]:1  local_29c
; undefined4       Stack[-0x290]:4  local_290
; undefined4       Stack[-0x28c]:4  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x284]:4  local_284
; undefined4       Stack[-0x280]:4  local_280
; undefined4       Stack[-0x27c]:4  local_27c
; undefined1       Stack[-0x278]:1  local_278
; undefined4       Stack[-0x26c]:4  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined1       Stack[-0x230]:1  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x224]:4  local_224
; undefined4       Stack[-0x220]:4  local_220
; undefined4       Stack[-0x21c]:4  local_21c
; undefined1       Stack[-0x218]:1  local_218
; undefined1       Stack[-0x20c]:1  local_20c
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined1       Stack[-0x1d0]:1  local_1d0
; undefined1       Stack[-0x1c4]:1  local_1c4
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined1       Stack[-0x17c]:1  local_17c
; undefined1       Stack[-0x170]:1  local_170
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined1       Stack[-0x140]:1  local_140
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined1       Stack[-0x128]:1  local_128
; undefined1       Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined1       Stack[-0x104]:1  local_104
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xb0]:1  local_b0
; undefined1       Stack[-0xa4]:1  local_a4
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x68]:4  local_68
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
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   TerminatedCString s_CHASE_2_006585ad
;   TerminatedCString s_s_picked_up_s_using_hand_006585c5
;   TerminatedCString s_core_zombie_cpp_006585e4
;   TerminatedCString s_WTF_006585f7
;   TerminatedCString s_s_lugging_s_006585fc
;   TerminatedCString s_zom_h0_wav_0065860b
;   TerminatedCString s_core_zombie_cpp_00658617
;   TerminatedCString s_WTF_0065862a
;   TerminatedCString s_s_tossing_s_0065862f
;   TerminatedCString s_zom_h0_wav_0065863e
;   TerminatedCString s_zombie_bang_door_wav_0065864a
;   TerminatedCString s_ghoul_eat_wav_00658660
;   undefined4 s_houl-eat-?.wav_00658661
;   undefined4 s_oul-eat-?.wav_00658662
;   ... and 57 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_CVector_ctor_FUN_00410340
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670
;   ... and 33 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f9470
        ;   Label: core_zombie.cpp_CZombie_process_FUN_005f9470
    PUSH ESI                            ; 005f9471
    PUSH EDI                            ; 005f9472
    PUSH EBP                            ; 005f9473
    MOV EBP,ESP                         ; 005f9474
    SUB ESP,0x39c                       ; 005f9476
    SUB EBP,0x7a                        ; 005f947c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005f947f
    PUSH dword ptr [EBP + 0x92]         ; 005f9485
    PUSH EBX                            ; 005f948b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 005f948c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005f9491
    TEST EAX,EAX                        ; 005f9494
    JNZ 0x005f94a0                      ; 005f9496
        ;   XREF to: 005f94a0 (CONDITIONAL_JUMP)  ; LAB_005f94a0
    LEA ESP,[EBP + 0x7a]                ; 005f9498
        ;   Label: LAB_005f9498
    POP EBP                             ; 005f949b
    POP EDI                             ; 005f949c
    POP ESI                             ; 005f949d
    POP EBX                             ; 005f949e
    RET                                 ; 005f949f
    XOR EDX,EDX                         ; 005f94a0
        ;   Label: LAB_005f94a0
    PUSH EDX                            ; 005f94a2
    PUSH 0x6585ad                       ; 005f94a3 | = "CHASE_2"
    LEA EAX,[EBX + 0x158]               ; 005f94a8
    PUSH EAX                            ; 005f94ae
    MOV dword ptr [EBP + 0x52],EDX      ; 005f94af
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005f94b2
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005f94b7
    PUSH EAX                            ; 005f94ba
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 005f94bb
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005f94c0
    CMP EAX,0x16                        ; 005f94c3
    JNZ 0x005f94cf                      ; 005f94c6
        ;   XREF to: 005f94cf (CONDITIONAL_JUMP)  ; LAB_005f94cf
    MOV dword ptr [EBP + 0x52],0x1      ; 005f94c8
    MOV ESI,dword ptr [EBX + 0x2598]    ; 005f94cf
        ;   Label: LAB_005f94cf
    TEST ESI,ESI                        ; 005f94d5
    JNZ 0x005f954d                      ; 005f94d7
        ;   XREF to: 005f954d (CONDITIONAL_JUMP)  ; LAB_005f954d
    FLD float ptr [EBX + 0xbf94]        ; 005f94d9
    FLDZ                                ; 005f94df
    FCOMPP                              ; 005f94e1
    FNSTSW AX                           ; 005f94e3
    SAHF                                ; 005f94e5
    JC 0x005f958d                       ; 005f94e6
        ;   XREF to: 005f958d (CONDITIONAL_JUMP)  ; LAB_005f958d
    FLD float ptr [EBP + 0x92]          ; 005f94ec
        ;   Label: LAB_005f94ec
    LEA EAX,[EBX + 0x158]               ; 005f94f2
    FMUL float ptr [EBX + 0xbe24]       ; 005f94f8
    MOV dword ptr [EBP + 0x6a],EAX      ; 005f94fe
    FSTP float ptr [EBP + 0xe]          ; 005f9501
    FLD float ptr [EBP + 0xe]           ; 005f9504
        ;   Label: LAB_005f9504
    FLDZ                                ; 005f9507
    FCOMPP                              ; 005f9509
    FNSTSW AX                           ; 005f950b
    SAHF                                ; 005f950d
    JNC 0x005f9e0c                      ; 005f950e
        ;   XREF to: 005f9e0c (CONDITIONAL_JUMP)  ; LAB_005f9e0c
    LEA EAX,[EBP + 0xe]                 ; 005f9514
    PUSH EAX                            ; 005f9517
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005f9518
    PUSH ESI                            ; 005f951b
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005f951c
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005f9521
    MOV EDX,EAX                         ; 005f9524
    CMP EAX,0xb                         ; 005f9526
    JNC 0x005f9db4                      ; 005f9529
        ;   XREF to: 005f9db4 (CONDITIONAL_JUMP)  ; LAB_005f9db4
    CMP EAX,0x5                         ; 005f952f
    JNC 0x005f9dee                      ; 005f9532
        ;   XREF to: 005f9dee (CONDITIONAL_JUMP)  ; LAB_005f9dee
    CMP EAX,0x2                         ; 005f9538
    JZ 0x005f990b                       ; 005f953b
        ;   XREF to: 005f990b (CONDITIONAL_JUMP)  ; LAB_005f990b
    PUSH EDX                            ; 005f9541
        ;   Label: LAB_005f9541
    PUSH EBX                            ; 005f9542
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 005f9543
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005f9548
    JMP 0x005f9504                      ; 005f954b
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    PUSH 0x0                            ; 005f954d
        ;   Label: LAB_005f954d
    LEA EAX,[EBP + 0xfffffeba]          ; 005f954f
    PUSH EAX                            ; 005f9555
    LEA EAX,[EBX + 0x158]               ; 005f9556
    PUSH EAX                            ; 005f955c
    MOV EDI,dword ptr [ESI + 0x154]     ; 005f955d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005f9563
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005f9568
    PUSH EAX                            ; 005f956b
    PUSH EBX                            ; 005f956c
    PUSH ESI                            ; 005f956d
    CALL dword ptr [EDI + 0x124]        ; 005f956e
    ADD ESP,0xc                         ; 005f9574
    TEST EAX,EAX                        ; 005f9577
    JNZ 0x005f9498                      ; 005f9579
        ;   XREF to: 005f9498 (CONDITIONAL_JUMP)  ; LAB_005f9498
    MOV dword ptr [EBX + 0x2598],EAX    ; 005f957f
    LEA ESP,[EBP + 0x7a]                ; 005f9585
    POP EBP                             ; 005f9588
    POP EDI                             ; 005f9589
    POP ESI                             ; 005f958a
    POP EBX                             ; 005f958b
    RET                                 ; 005f958c
    FLD float ptr [EBX + 0xbf94]        ; 005f958d
        ;   Label: LAB_005f958d
    FSUB float ptr [EBP + 0x92]         ; 005f9593
    FSTP float ptr [EBX + 0xbf94]       ; 005f9599
    JMP 0x005f94ec                      ; 005f959f
        ;   XREF to: 005f94ec (UNCONDITIONAL_JUMP)  ; LAB_005f94ec
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 005f95a4
        ;   Label: LAB_005f95a4
    MOV ESI,0x1                         ; 005f95aa
    TEST EDI,EDI                        ; 005f95af
    JNZ 0x005f95c1                      ; 005f95b1
        ;   XREF to: 005f95c1 (CONDITIONAL_JUMP)  ; LAB_005f95c1
    PUSH EBX                            ; 005f95b3
        ;   Label: LAB_005f95b3
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005f95b4
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005f95b9
    JMP 0x005f9504                      ; 005f95bc
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    MOV EAX,[0x006659c8]                ; 005f95c1 | FLOAT_006659c8
        ;   Label: LAB_005f95c1
    MOV dword ptr [EBP + 0x16],EAX      ; 005f95c6
    XOR EAX,EAX                         ; 005f95c9
    MOV dword ptr [EBP + 0xfffffdfa],EAX ; 005f95cb
    MOV dword ptr [EBP + 0xfffffdfe],EAX ; 005f95d1
    MOV EAX,dword ptr [EBP + 0x16]      ; 005f95d7
    MOV dword ptr [EBP + 0xfffffe02],EAX ; 005f95da
    LEA EAX,[EBP + 0xfffffdfa]          ; 005f95e0
    PUSH EAX                            ; 005f95e6
    LEA EAX,[EBP + 0xfffffe1e]          ; 005f95e7
    PUSH EAX                            ; 005f95ed
    PUSH EBX                            ; 005f95ee
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f95ef
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EBP + 0xfffffe1e]    ; 005f95f4
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f95fa
    FLD float ptr [EBP + 0xfffffe22]    ; 005f9600
    FXCH                                ; 005f9606
    FSUB float ptr [EAX + 0x20]         ; 005f9608
    FLD float ptr [EBP + 0xfffffe26]    ; 005f960b
    FXCH                                ; 005f9611
    FSTP float ptr [EBP + 0xfffffeea]   ; 005f9613
    FXCH                                ; 005f9619
    FSUB float ptr [EAX + 0x24]         ; 005f961b
    FLD float ptr [EBP + 0xfffffeea]    ; 005f961e
    FXCH                                ; 005f9624
    FSTP float ptr [EBP + 0xfffffeee]   ; 005f9626
    FXCH                                ; 005f962c
    FSUB float ptr [EAX + 0x28]         ; 005f962e
    FXCH                                ; 005f9631
    FMUL float ptr [EBP + 0xfffffeea]   ; 005f9633
    FXCH                                ; 005f9639
    FST float ptr [EBP + 0xfffffef2]    ; 005f963b
    FMUL float ptr [EBP + 0xfffffef2]   ; 005f9641
    FADDP                               ; 005f9647
    FSQRT                               ; 005f9649
    XOR ECX,ECX                         ; 005f964b
    ADD ESP,0xc                         ; 005f964d
    MOV dword ptr [EBP + 0xfffffeee],ECX ; 005f9650
    FLD1                                ; 005f9656
    FCOMPP                              ; 005f9658
    FNSTSW AX                           ; 005f965a
    SAHF                                ; 005f965c
    JC 0x005f95b3                       ; 005f965d
        ;   XREF to: 005f95b3 (CONDITIONAL_JUMP)  ; LAB_005f95b3
    TEST ESI,ESI                        ; 005f9663
    JZ 0x005f9733                       ; 005f9665
        ;   XREF to: 005f9733 (CONDITIONAL_JUMP)  ; LAB_005f9733
    MOV dword ptr [EBP + 0xffffff06],0x40800000 ; 005f966b
    LEA EAX,[EBP + 0xffffff02]          ; 005f9675
    PUSH EAX                            ; 005f967b
    LEA EAX,[EBP + 0xfffffe5a]          ; 005f967c
    PUSH EAX                            ; 005f9682
    PUSH EBX                            ; 005f9683
    MOV dword ptr [EBP + 0xffffff02],ECX ; 005f9684
    MOV dword ptr [EBP + 0xffffff0a],ECX ; 005f968a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f9690
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005f9695
    MOV EAX,dword ptr [EDX + 0x20]      ; 005f969b
    ADD EDX,0x20                        ; 005f969e
    MOV dword ptr [EBP + 0xffffff32],EAX ; 005f96a1
    LEA EAX,[EDX + 0x4]                 ; 005f96a7
    MOV EAX,dword ptr [EAX]             ; 005f96aa
    MOV dword ptr [EBP + 0xffffff36],EAX ; 005f96ac
    LEA EAX,[EDX + 0x8]                 ; 005f96b2
    MOV ECX,dword ptr [0x006810c8]      ; 005f96b5 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EAX,dword ptr [EAX]             ; 005f96bb
    ADD ESP,0xc                         ; 005f96bd
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 005f96c0
    MOV EAX,dword ptr [EBP + 0xfffffe5e] ; 005f96c6
    PUSH ECX                            ; 005f96cc | g_CDemonSetInstance
    MOV dword ptr [EBP + 0xffffff36],EAX ; 005f96cd
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005f96d3
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005f96d8
    PUSH EBX                            ; 005f96db
    MOV EDI,dword ptr [0x006810c8]      ; 005f96dc | g_CDemonSetPtr
    PUSH EDI                            ; 005f96e2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005f96e3
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005f96e8
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f96eb
    PUSH EAX                            ; 005f96f1
    MOV EDX,dword ptr [0x006810c8]      ; 005f96f2 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 005f96f8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005f96f9
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005f96fe
    LEA EAX,[EBP + 0xffffff32]          ; 005f9701
    PUSH EAX                            ; 005f9707
    LEA EAX,[EBP + 0xfffffe5a]          ; 005f9708
    PUSH EAX                            ; 005f970e
    MOV ECX,dword ptr [0x006810c8]      ; 005f970f | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005f9715 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 ; 005f9716
        ;   XREF to: 00572460 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 005f971b
    TEST EAX,EAX                        ; 005f971e
    JZ 0x005f9724                       ; 005f9720
        ;   XREF to: 005f9724 (CONDITIONAL_JUMP)  ; LAB_005f9724
    XOR ESI,ESI                         ; 005f9722
    MOV EDI,dword ptr [0x006810c8]      ; 005f9724 | g_CDemonSetPtr
        ;   Label: LAB_005f9724
    PUSH EDI                            ; 005f972a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005f972b
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005f9730
    TEST ESI,ESI                        ; 005f9733
        ;   Label: LAB_005f9733
    JZ 0x005f9758                       ; 005f9735
        ;   XREF to: 005f9758 (CONDITIONAL_JUMP)  ; LAB_005f9758
    PUSH 0x0                            ; 005f9737
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f9739
    PUSH EBX                            ; 005f973f
    MOV EDX,dword ptr [EAX + 0x154]     ; 005f9740
    PUSH EAX                            ; 005f9746
    CALL dword ptr [EDX + 0x100]        ; 005f9747
    ADD ESP,0xc                         ; 005f974d
    TEST EAX,EAX                        ; 005f9750
    JZ 0x005f95b3                       ; 005f9752
        ;   XREF to: 005f95b3 (CONDITIONAL_JUMP)  ; LAB_005f95b3
    TEST ESI,ESI                        ; 005f9758
        ;   Label: LAB_005f9758
    JNZ 0x005f9504                      ; 005f975a
        ;   XREF to: 005f9504 (CONDITIONAL_JUMP)  ; LAB_005f9504
    PUSH EBX                            ; 005f9760
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005f9761
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005f9766
    JMP 0x005f9504                      ; 005f9769
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 005f976e
        ;   Label: LAB_005f976e
    JNZ 0x005f9785                      ; 005f9775
        ;   XREF to: 005f9785 (CONDITIONAL_JUMP)  ; LAB_005f9785
    PUSH EBX                            ; 005f9777
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005f9778
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005f977d
    JMP 0x005f9504                      ; 005f9780
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    MOV EDI,dword ptr [EBX + 0xbf4c]    ; 005f9785
        ;   Label: LAB_005f9785
    PUSH EDI                            ; 005f978b
    LEA EAX,[EBP + 0xfffffdee]          ; 005f978c
    PUSH EAX                            ; 005f9792
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005f9793
    PUSH EAX                            ; 005f9796
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005f9797
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005f979c
    PUSH EAX                            ; 005f979f
    LEA EAX,[EBP + 0xfffffe42]          ; 005f97a0
    PUSH EAX                            ; 005f97a6
    PUSH EBX                            ; 005f97a7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f97a8
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,dword ptr [EBX + 0xbf88]    ; 005f97ad
    ADD ESP,0xc                         ; 005f97b3
    TEST EDX,EDX                        ; 005f97b6
    JL 0x005f97e2                       ; 005f97b8
        ;   XREF to: 005f97e2 (CONDITIONAL_JUMP)  ; LAB_005f97e2
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f97ba
    PUSH EAX                            ; 005f97c0
    MOV EDX,dword ptr [EAX + 0x154]     ; 005f97c1
    CALL dword ptr [EDX + 0x108]        ; 005f97c7
    ADD ESP,0x4                         ; 005f97cd
    CMP EAX,EBX                         ; 005f97d0
    JZ 0x005f981b                       ; 005f97d2
        ;   XREF to: 005f981b (CONDITIONAL_JUMP)  ; LAB_005f981b
    PUSH EBX                            ; 005f97d4
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005f97d5
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005f97da
    JMP 0x005f9504                      ; 005f97dd
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f97e2
        ;   Label: LAB_005f97e2
    FLD float ptr [EBP + 0xfffffe42]    ; 005f97e8
    FSUB float ptr [EAX + 0x20]         ; 005f97ee
    FMUL ST0                            ; 005f97f1
    FLD float ptr [EBP + 0xfffffe4a]    ; 005f97f3
    FSUB float ptr [EAX + 0x28]         ; 005f97f9
    FMUL ST0                            ; 005f97fc
    FADDP                               ; 005f97fe
    FSQRT                               ; 005f9800
    FCOMP double ptr [0x0065880d]       ; 005f9802 | DOUBLE_0065880d
    FNSTSW AX                           ; 005f9808
    SAHF                                ; 005f980a
    JBE 0x005f981b                      ; 005f980b
        ;   XREF to: 005f981b (CONDITIONAL_JUMP)  ; LAB_005f981b
    PUSH EBX                            ; 005f980d
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005f980e
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005f9813
    JMP 0x005f9504                      ; 005f9816
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    LEA EAX,[EBP + 0xfffffcde]          ; 005f981b
        ;   Label: LAB_005f981b
    PUSH EAX                            ; 005f9821
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005f9822
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005f9827
    PUSH 0x41c80000                     ; 005f982a
    PUSH 0x41700000                     ; 005f982f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005f9834
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [EBX + 0xbecc]    ; 005f990b
        ;   Label: LAB_005f990b
    TEST EAX,EAX                        ; 005f9911
    JZ 0x005f9504                       ; 005f9913
        ;   XREF to: 005f9504 (CONDITIONAL_JUMP)  ; LAB_005f9504
    MOV EDX,dword ptr [EBX + 0xbed0]    ; 005f9919
    PUSH EDX                            ; 005f991f
    PUSH EBX                            ; 005f9920
    MOV EDI,EAX                         ; 005f9921
    MOV dword ptr [EBX + 0xbecc],0x0    ; 005f9923
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00 ; 005f992d
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005f9932
    MOV ESI,EAX                         ; 005f9935
    TEST EAX,EAX                        ; 005f9937
    JL 0x005f9504                       ; 005f9939
        ;   XREF to: 005f9504 (CONDITIONAL_JUMP)  ; LAB_005f9504
    PUSH 0x3e4ccccd                     ; 005f993f
    PUSH EDI                            ; 005f9944
    PUSH EAX                            ; 005f9945
    PUSH EBX                            ; 005f9946
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 005f9947
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr, int hand_index, CDemonActor * object, float blend_time)
    ADD ESP,0x10                        ; 005f994c
    PUSH ESI                            ; 005f994f
    PUSH EDI                            ; 005f9950
    PUSH EBX                            ; 005f9951
    MOV EAX,0x6585c5                    ; 005f9952 | = "%s picked up %s using hand %d\n"
    PUSH EAX                            ; 005f9957 | = "%s picked up %s using hand %d\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005f9958 | g_CConsolePtr
    PUSH ECX                            ; 005f995e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005f995f
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 005f9964
    JMP 0x005f9504                      ; 005f9967
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    PUSH 0x2                            ; 005f996c
        ;   Label: LAB_005f996c
    PUSH EBX                            ; 005f996e
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00 ; 005f996f
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005f9974
    MOV ESI,EAX                         ; 005f9977
    TEST EAX,EAX                        ; 005f9979
    JL 0x005f99f3                       ; 005f997b
        ;   XREF to: 005f99f3 (CONDITIONAL_JUMP)  ; LAB_005f99f3
    IMUL EAX,ESI,0x44                   ; 005f997d
        ;   Label: LAB_005f997d
    ADD EAX,EBX                         ; 005f9980
    MOV EDX,dword ptr [EAX + 0x24b4]    ; 005f9982
    TEST EDX,EDX                        ; 005f9988
    JZ 0x005f9504                       ; 005f998a
        ;   XREF to: 005f9504 (CONDITIONAL_JUMP)  ; LAB_005f9504
    PUSH EDX                            ; 005f9990
    PUSH EBX                            ; 005f9991
    PUSH 0x6585fc                       ; 005f9992 | = "%s lugging %s\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 005f9997 | g_CConsolePtr
    PUSH EDI                            ; 005f999d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005f999e
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EDX,0x40c00000                  ; 005f99a3
    XOR EAX,EAX                         ; 005f99a8
    ADD ESP,0x10                        ; 005f99aa
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 005f99ad
    LEA EAX,[EBP + 0xffffff3e]          ; 005f99b3
    MOV ECX,0x41880000                  ; 005f99b9
    PUSH EAX                            ; 005f99be
    MOV dword ptr [EBP + 0xffffff42],EDX ; 005f99bf
    MOV dword ptr [EBP + 0xffffff46],ECX ; 005f99c5
    PUSH ESI                            ; 005f99cb
    MOV EDX,dword ptr [EBX + 0x154]     ; 005f99cc
    PUSH EBX                            ; 005f99d2
    CALL dword ptr [EDX + 0x13c]        ; 005f99d3
    ADD ESP,0xc                         ; 005f99d9
    PUSH 0x65860b                       ; 005f99dc | = "zom-h0?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f99e1
    PUSH EBX                            ; 005f99e7
    CALL dword ptr [EAX + 0x24]         ; 005f99e8
    ADD ESP,0x8                         ; 005f99eb
    JMP 0x005f9504                      ; 005f99ee
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    MOV ECX,0x6585e4                    ; 005f99f3 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005f99f3
    MOV EDI,0x1ee                       ; 005f99f8
    PUSH 0x6585f7                       ; 005f99fd | = "WTF!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005f9a02 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005f9a08 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005f9a0e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005f9a13
    JMP 0x005f997d                      ; 005f9a16
        ;   XREF to: 005f997d (UNCONDITIONAL_JUMP)  ; LAB_005f997d
    PUSH 0x3                            ; 005f9a1b
        ;   Label: LAB_005f9a1b
    PUSH EBX                            ; 005f9a1d
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00 ; 005f9a1e
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005f9a23
    MOV EDI,EAX                         ; 005f9a26
    TEST EAX,EAX                        ; 005f9a28
    JL 0x005f9af3                       ; 005f9a2a
        ;   XREF to: 005f9af3 (CONDITIONAL_JUMP)  ; LAB_005f9af3
    IMUL ESI,EDI,0x44                   ; 005f9a30
        ;   Label: LAB_005f9a30
    ADD ESI,EBX                         ; 005f9a33
    MOV ECX,dword ptr [ESI + 0x24b4]    ; 005f9a35
    TEST ECX,ECX                        ; 005f9a3b
    JZ 0x005f9504                       ; 005f9a3d
        ;   XREF to: 005f9504 (CONDITIONAL_JUMP)  ; LAB_005f9504
    PUSH ECX                            ; 005f9a43
    PUSH EBX                            ; 005f9a44
    PUSH 0x65862f                       ; 005f9a45 | = "%s tossing %s\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005f9a4a | g_CConsolePtr
    PUSH EDX                            ; 005f9a50 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005f9a51
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    XOR ECX,ECX                         ; 005f9a56
    MOV EDX,0x3f800000                  ; 005f9a58
    MOV dword ptr [EBP + 0xfffffe4e],ECX ; 005f9a5d
    MOV dword ptr [EBP + 0xfffffe52],ECX ; 005f9a63
    MOV dword ptr [EBP + 0xfffffe56],EDX ; 005f9a69
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005f9a6f
    ADD ESP,0x10                        ; 005f9a75
    TEST ECX,ECX                        ; 005f9a78
    JNZ 0x005f9b1a                      ; 005f9a7a
        ;   XREF to: 005f9b1a (CONDITIONAL_JUMP)  ; LAB_005f9b1a
    FLD float ptr [0x006587c9]          ; 005f9a80 | FLOAT_006587c9
        ;   Label: LAB_005f9a80
    FLD float ptr [EBP + 0xfffffe4e]    ; 005f9a86
    FMUL ST1                            ; 005f9a8c
    FLD float ptr [EBP + 0xfffffe52]    ; 005f9a8e
    FMUL ST2                            ; 005f9a94
    FLD float ptr [EBP + 0xfffffe56]    ; 005f9a96
    LEA EAX,[EBP + 0xfffffe4e]          ; 005f9a9c
    FMULP ST3                           ; 005f9aa2
    PUSH EAX                            ; 005f9aa4
    FXCH                                ; 005f9aa5
    FSTP float ptr [EBP + 0xfffffe4e]   ; 005f9aa7
    FSTP float ptr [EBP + 0xfffffe52]   ; 005f9aad
    FSTP float ptr [EBP + 0xfffffe56]   ; 005f9ab3
    FLD float ptr [EBP + 0xfffffe52]    ; 005f9ab9
    PUSH EDI                            ; 005f9abf
    FADD float ptr [0x00658805]         ; 005f9ac0 | FLOAT_00658805
    PUSH EBX                            ; 005f9ac6
    FSTP float ptr [EBP + 0xfffffe52]   ; 005f9ac7
    MOV EDX,dword ptr [EBX + 0x154]     ; 005f9acd
    CALL dword ptr [EDX + 0x13c]        ; 005f9ad3
    ADD ESP,0xc                         ; 005f9ad9
    PUSH 0x65863e                       ; 005f9adc | = "zom-h0?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f9ae1
    PUSH EBX                            ; 005f9ae7
    CALL dword ptr [EAX + 0x24]         ; 005f9ae8
    ADD ESP,0x8                         ; 005f9aeb
    JMP 0x005f9504                      ; 005f9aee
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    MOV EAX,0x658617                    ; 005f9af3 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005f9af3
    MOV EDX,0x205                       ; 005f9af8
    PUSH 0x65862a                       ; 005f9afd | = "WTF!"
    MOV [0x02f0ca48],EAX                ; 005f9b02 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005f9b07 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005f9b0d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005f9b12
    JMP 0x005f9a30                      ; 005f9b15
        ;   XREF to: 005f9a30 (UNCONDITIONAL_JUMP)  ; LAB_005f9a30
    LEA EDX,[EBP + 0xfffffda6]          ; 005f9b1a
        ;   Label: LAB_005f9b1a
    MOV EAX,dword ptr [ESI + 0x24b4]    ; 005f9b20
    PUSH EDX                            ; 005f9b26
    MOV ECX,dword ptr [EAX + 0x154]     ; 005f9b27
    PUSH EAX                            ; 005f9b2d
    CALL dword ptr [ECX + 0x14]         ; 005f9b2e
    LEA EDX,[EAX + 0xc]                 ; 005f9b31
    FLD float ptr [EAX]                 ; 005f9b34
    FADD float ptr [EDX]                ; 005f9b36
    FST float ptr [EBP + 0xfffffe66]    ; 005f9b38
    FLD float ptr [EAX + 0x4]           ; 005f9b3e
    FADD float ptr [EDX + 0x4]          ; 005f9b41
    FXCH                                ; 005f9b44
    FMUL float ptr [0x006587c5]         ; 005f9b46 | FLOAT_006587c5
    FXCH                                ; 005f9b4c
    FST float ptr [EBP + 0xfffffe6a]    ; 005f9b4e
    FLD float ptr [EAX + 0x8]           ; 005f9b54
    FADD float ptr [EDX + 0x8]          ; 005f9b57
    FXCH                                ; 005f9b5a
    FMUL float ptr [0x006587c5]         ; 005f9b5c | FLOAT_006587c5
    FXCH                                ; 005f9b62
    FST float ptr [EBP + 0xfffffe6e]    ; 005f9b64
    FMUL float ptr [0x006587c5]         ; 005f9b6a | FLOAT_006587c5
    ADD ESP,0x8                         ; 005f9b70
    LEA EAX,[EBP + -0x62]               ; 005f9b73
    FXCH ST2                            ; 005f9b76
    FSTP float ptr [EBP + -0x62]        ; 005f9b78
    PUSH EAX                            ; 005f9b7b
    LEA EAX,[EBP + -0x3e]               ; 005f9b7c
    FSTP float ptr [EBP + -0x5e]        ; 005f9b7f
    PUSH EAX                            ; 005f9b82
    FSTP float ptr [EBP + -0x5a]        ; 005f9b83
    MOV EAX,dword ptr [ESI + 0x24b4]    ; 005f9b86
    PUSH EAX                            ; 005f9b8c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f9b8d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005f9b92
    LEA EDX,[EBP + 0xfffffd76]          ; 005f9b95
    PUSH EDX                            ; 005f9b9b
    MOV ESI,EAX                         ; 005f9b9c
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f9b9e
    PUSH EAX                            ; 005f9ba4
    MOV ECX,dword ptr [EAX + 0x154]     ; 005f9ba5
    CALL dword ptr [ECX + 0x14]         ; 005f9bab
    LEA EDX,[EAX + 0xc]                 ; 005f9bae
    FLD float ptr [EAX]                 ; 005f9bb1
    FADD float ptr [EDX]                ; 005f9bb3
    FST float ptr [EBP + 0xfffffeae]    ; 005f9bb5
    FLD float ptr [EAX + 0x4]           ; 005f9bbb
    FADD float ptr [EDX + 0x4]          ; 005f9bbe
    FXCH                                ; 005f9bc1
    FMUL float ptr [0x006587c5]         ; 005f9bc3 | FLOAT_006587c5
    FXCH                                ; 005f9bc9
    FST float ptr [EBP + 0xfffffeb2]    ; 005f9bcb
    FLD float ptr [EAX + 0x8]           ; 005f9bd1
    FADD float ptr [EDX + 0x8]          ; 005f9bd4
    FXCH                                ; 005f9bd7
    FMUL float ptr [0x006587c5]         ; 005f9bd9 | FLOAT_006587c5
    FXCH                                ; 005f9bdf
    FST float ptr [EBP + 0xfffffeb6]    ; 005f9be1
    FMUL float ptr [0x006587c5]         ; 005f9be7 | FLOAT_006587c5
    ADD ESP,0x8                         ; 005f9bed
    LEA EAX,[EBP + -0x6e]               ; 005f9bf0
    FXCH ST2                            ; 005f9bf3
    FSTP float ptr [EBP + -0x6e]        ; 005f9bf5
    PUSH EAX                            ; 005f9bf8
    LEA EAX,[EBP + -0x26]               ; 005f9bf9
    FSTP float ptr [EBP + -0x6a]        ; 005f9bfc
    PUSH EAX                            ; 005f9bff
    FSTP float ptr [EBP + -0x66]        ; 005f9c00
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005f9c03
    PUSH EDX                            ; 005f9c09
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f9c0a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 005f9c0f
    FSUB float ptr [ESI]                ; 005f9c11
    FSTP float ptr [EBP + 0xfffffea2]   ; 005f9c13
    FLD float ptr [EAX + 0x4]           ; 005f9c19
    FSUB float ptr [ESI + 0x4]          ; 005f9c1c
    FST float ptr [EBP + 0xfffffea6]    ; 005f9c1f
    FMUL float ptr [EBP + 0xfffffea6]   ; 005f9c25
    FLD float ptr [EBP + 0xfffffea2]    ; 005f9c2b
    FMUL ST0                            ; 005f9c31
    FLD float ptr [EAX + 0x8]           ; 005f9c33
    FSUB float ptr [ESI + 0x8]          ; 005f9c36
    FXCH                                ; 005f9c39
    FADDP ST2,ST0                       ; 005f9c3b
    FST float ptr [EBP + 0xfffffeaa]    ; 005f9c3d
    FMUL float ptr [EBP + 0xfffffeaa]   ; 005f9c43
    FADDP                               ; 005f9c49
    FSQRT                               ; 005f9c4b
    ADD ESP,0xc                         ; 005f9c4d
    FST float ptr [EBP + 0x5e]          ; 005f9c50
    FLDZ                                ; 005f9c53
    FCOMPP                              ; 005f9c55
    FNSTSW AX                           ; 005f9c57
    SAHF                                ; 005f9c59
    JNC 0x005f9a80                      ; 005f9c5a
        ;   XREF to: 005f9a80 (CONDITIONAL_JUMP)  ; LAB_005f9a80
    LEA EAX,[EBP + 0xfffffea2]          ; 005f9c60
    PUSH EAX                            ; 005f9c66
    LEA EAX,[EBP + 0xfffffe12]          ; 005f9c67
    PUSH EAX                            ; 005f9c6d
    PUSH EBX                            ; 005f9c6e
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 005f9c6f
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    FLD1                                ; 005f9c74
    FLD float ptr [EAX]                 ; 005f9c76
    FXCH                                ; 005f9c78
    FDIV float ptr [EBP + 0x5e]         ; 005f9c7a
    FXCH                                ; 005f9c7d
    FMUL ST1                            ; 005f9c7f
    FSTP float ptr [EBP + -0x4a]        ; 005f9c81
    FLD float ptr [EAX + 0x4]           ; 005f9c84
    FMUL ST1                            ; 005f9c87
    FSTP float ptr [EBP + -0x46]        ; 005f9c89
    FMUL float ptr [EAX + 0x8]          ; 005f9c8c
    LEA EDX,[EBP + -0x4a]               ; 005f9c8f
    ADD ESP,0xc                         ; 005f9c92
    LEA EAX,[EBP + 0xfffffe4e]          ; 005f9c95
    FSTP float ptr [EBP + -0x42]        ; 005f9c9b
    CMP EAX,EDX                         ; 005f9c9e
    JZ 0x005f9a80                       ; 005f9ca0
        ;   XREF to: 005f9a80 (CONDITIONAL_JUMP)  ; LAB_005f9a80
    MOV EAX,dword ptr [EBP + -0x4a]     ; 005f9ca6
    MOV dword ptr [EBP + 0xfffffe4e],EAX ; 005f9ca9
    MOV EAX,dword ptr [EBP + -0x46]     ; 005f9caf
    MOV dword ptr [EBP + 0xfffffe52],EAX ; 005f9cb2
    MOV EAX,dword ptr [EBP + -0x42]     ; 005f9cb8
    MOV dword ptr [EBP + 0xfffffe56],EAX ; 005f9cbb
    JMP 0x005f9a80                      ; 005f9cc1
        ;   XREF to: 005f9a80 (UNCONDITIONAL_JUMP)  ; LAB_005f9a80
    MOV ECX,dword ptr [EBX + 0xbed8]    ; 005f9cc6
        ;   Label: LAB_005f9cc6
    TEST ECX,ECX                        ; 005f9ccc
    JZ 0x005f9504                       ; 005f9cce
        ;   XREF to: 005f9504 (CONDITIONAL_JUMP)  ; LAB_005f9504
    PUSH 0x3e99999a                     ; 005f9cd4
    PUSH ECX                            ; 005f9cd9
    CALL core_door.cpp_CDoor_setSwingRange_FUN_00480de0 ; 005f9cda
        ;   XREF to: 00480de0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_setSwingRange_FUN_00480de0(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 005f9cdf
    MOV EAX,dword ptr [EBX + 0xbed8]    ; 005f9ce2
    PUSH 0x65864a                       ; 005f9ce8 | = "zombie-bang-door?.wav"
    MOV EDX,dword ptr [EAX + 0x154]     ; 005f9ced
    PUSH EAX                            ; 005f9cf3
    CALL dword ptr [EDX + 0x24]         ; 005f9cf4
    ADD ESP,0x8                         ; 005f9cf7
    MOV dword ptr [EBX + 0xbed8],0x0    ; 005f9cfa
    JMP 0x005f9504                      ; 005f9d04
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    MOV EDI,dword ptr [EBX + 0xbf4c]    ; 005f9d09
        ;   Label: LAB_005f9d09
    PUSH EDI                            ; 005f9d0f
    LEA EAX,[EBP + 0xffffff6e]          ; 005f9d10
    PUSH EAX                            ; 005f9d16
    PUSH ESI                            ; 005f9d17
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005f9d18
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005f9d1d
    PUSH EAX                            ; 005f9d20
    LEA EAX,[EBP + -0x7a]               ; 005f9d21
    PUSH EAX                            ; 005f9d24
    PUSH EBX                            ; 005f9d25
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f9d26
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005f9d2b
    PUSH 0x0                            ; 005f9d2e
    PUSH 0x3                            ; 005f9d30
    PUSH 0x0                            ; 005f9d32
    LEA EAX,[EBP + -0x7a]               ; 005f9d34
    PUSH EAX                            ; 005f9d37
    MOV EDX,dword ptr [0x0067b9a0]      ; 005f9d38 | g_CGorePtr | g_CGoreInstance
    PUSH EDX                            ; 005f9d3e | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 005f9d3f
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005f9d44
    PUSH 0x3f000000                     ; 005f9d47
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005f9d4c
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005f9d51
    TEST EAX,EAX                        ; 005f9d54
    JZ 0x005f9d96                       ; 005f9d56
        ;   XREF to: 005f9d96 (CONDITIONAL_JUMP)  ; LAB_005f9d96
    MOV ESI,0x658660                    ; 005f9d58 | = "ghoul-eat-?.wav"
    LEA EDI,[EBP + 0xfffffd56]          ; 005f9d5d
        ;   Label: LAB_005f9d5d
    PUSH EDI                            ; 005f9d63
    MOV AL,byte ptr [ESI]               ; 005f9d64 | = "ghoul-eat-?.wav" | s_oul-eat-?.wav_00658662 | s_ghoul_dig_wav_00658670
        ;   Label: LAB_005f9d64
    MOV byte ptr [EDI],AL               ; 005f9d66
    CMP AL,0x0                          ; 005f9d68
    JZ 0x005f9d7c                       ; 005f9d6a
        ;   XREF to: 005f9d7c (CONDITIONAL_JUMP)  ; LAB_005f9d7c
    MOV AL,byte ptr [ESI + 0x1]         ; 005f9d6c | s_houl-eat-?.wav_00658661 | s_ul-eat-?.wav_00658663 | s_houl-dig-?.wav_00658671
    ADD ESI,0x2                         ; 005f9d6f
    MOV byte ptr [EDI + 0x1],AL         ; 005f9d72
    ADD EDI,0x2                         ; 005f9d75
    CMP AL,0x0                          ; 005f9d78
    JNZ 0x005f9d64                      ; 005f9d7a
        ;   XREF to: 005f9d64 (CONDITIONAL_JUMP)  ; LAB_005f9d64
    POP EDI                             ; 005f9d7c
        ;   Label: LAB_005f9d7c
    LEA EDX,[EBP + 0xfffffd56]          ; 005f9d7d
    PUSH EDX                            ; 005f9d83
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f9d84
    PUSH EBX                            ; 005f9d8a
    CALL dword ptr [EAX + 0x24]         ; 005f9d8b
    ADD ESP,0x8                         ; 005f9d8e
    JMP 0x005f9504                      ; 005f9d91
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    MOV ESI,0x658670                    ; 005f9d96 | = "ghoul-dig-?.wav"
        ;   Label: LAB_005f9d96
    JMP 0x005f9d5d                      ; 005f9d9b
        ;   XREF to: 005f9d5d (UNCONDITIONAL_JUMP)  ; LAB_005f9d5d
    PUSH 0x658680                       ; 005f9d9d | = "fall-?.wav"
        ;   Label: LAB_005f9d9d
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f9da2
    PUSH EBX                            ; 005f9da8
    CALL dword ptr [EAX + 0x24]         ; 005f9da9
    ADD ESP,0x8                         ; 005f9dac
    JMP 0x005f9504                      ; 005f9daf
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    JBE 0x005f996c                      ; 005f9db4
        ;   XREF to: 005f996c (CONDITIONAL_JUMP)  ; LAB_005f996c
        ;   Label: LAB_005f9db4
    CMP EAX,0xd                         ; 005f9dba
    JC 0x005f9a1b                       ; 005f9dbd
        ;   XREF to: 005f9a1b (CONDITIONAL_JUMP)  ; LAB_005f9a1b
    JBE 0x005f9cc6                      ; 005f9dc3
        ;   XREF to: 005f9cc6 (CONDITIONAL_JUMP)  ; LAB_005f9cc6
    CMP EAX,0x65                        ; 005f9dc9
    JC 0x005f9541                       ; 005f9dcc
        ;   XREF to: 005f9541 (CONDITIONAL_JUMP)  ; LAB_005f9541
    JBE 0x005f9d9d                      ; 005f9dd2
        ;   XREF to: 005f9d9d (CONDITIONAL_JUMP)  ; LAB_005f9d9d
    CMP EAX,0x29a                       ; 005f9dd4
    JZ 0x005f9d09                       ; 005f9dd9
        ;   XREF to: 005f9d09 (CONDITIONAL_JUMP)  ; LAB_005f9d09
    PUSH EDX                            ; 005f9ddf
    PUSH EBX                            ; 005f9de0
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 005f9de1
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005f9de6
    JMP 0x005f9504                      ; 005f9de9
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    JBE 0x005f95a4                      ; 005f9dee
        ;   XREF to: 005f95a4 (CONDITIONAL_JUMP)  ; LAB_005f95a4
        ;   Label: LAB_005f9dee
    CMP EAX,0xa                         ; 005f9df4
    JZ 0x005f976e                       ; 005f9df7
        ;   XREF to: 005f976e (CONDITIONAL_JUMP)  ; LAB_005f976e
    PUSH EDX                            ; 005f9dfd
    PUSH EBX                            ; 005f9dfe
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 005f9dff
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005f9e04
    JMP 0x005f9504                      ; 005f9e07
        ;   XREF to: 005f9504 (UNCONDITIONAL_JUMP)  ; LAB_005f9504
    FLD float ptr [EBX + 0xbe24]        ; 005f9e0c
        ;   Label: LAB_005f9e0c
    FLD float ptr [EBP + 0x92]          ; 005f9e12
    FMUL double ptr [0x0065877d]        ; 005f9e18 | DOUBLE_0065877d
    FMULP                               ; 005f9e1e
    FMUL double ptr [0x00658785]        ; 005f9e20 | DOUBLE_00658785
    FLD float ptr [EBX + 0x23b4]        ; 005f9e26
    MOV EAX,dword ptr [EBX + 0xbf84]    ; 005f9e2c
    FSTP float ptr [EBX + 0x2434]       ; 005f9e32
    FSTP float ptr [EBX + 0x2438]       ; 005f9e38
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005f9e3e
    JZ 0x005fa082                       ; 005f9e46
        ;   XREF to: 005fa082 (CONDITIONAL_JUMP)  ; LAB_005fa082
    MOV EAX,dword ptr [EBX + 0xbf90]    ; 005f9e4c
        ;   Label: LAB_005f9e4c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005f9e52
    JZ 0x005fa096                       ; 005f9e5a
        ;   XREF to: 005fa096 (CONDITIONAL_JUMP)  ; LAB_005fa096
    LEA EDI,[EBX + 0x158]               ; 005f9e60
        ;   Label: LAB_005f9e60
    PUSH EDI                            ; 005f9e66
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005f9e67
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005f9e6c
    MOV ESI,dword ptr [EAX + 0x24]      ; 005f9e6f
    PUSH dword ptr [EBP + 0x92]         ; 005f9e72
    XOR EAX,EAX                         ; 005f9e78
    PUSH EBX                            ; 005f9e7a
    MOV dword ptr [EBP + 0x42],EAX      ; 005f9e7b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 005f9e7e
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005f9e83
    TEST EAX,EAX                        ; 005f9e86
    JZ 0x005fae7b                       ; 005f9e88
        ;   XREF to: 005fae7b (CONDITIONAL_JUMP)  ; LAB_005fae7b
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005f9e8e
    CMP EAX,0x2                         ; 005f9e94
    JNC 0x005fa144                      ; 005f9e97
        ;   XREF to: 005fa144 (CONDITIONAL_JUMP)  ; LAB_005fa144
    CMP EAX,0x1                         ; 005f9e9d
    JNZ 0x005fa14f                      ; 005f9ea0
        ;   XREF to: 005fa14f (CONDITIONAL_JUMP)  ; LAB_005fa14f
    CMP ESI,0x1                         ; 005f9ea6
        ;   Label: LAB_005f9ea6
    JZ 0x005f9eb4                       ; 005f9ea9
        ;   XREF to: 005f9eb4 (CONDITIONAL_JUMP)  ; LAB_005f9eb4
    PUSH EBX                            ; 005f9eab
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005f9eac
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005f9eb1
    LEA EAX,[EBX + 0x23ac]              ; 005f9eb4
        ;   Label: LAB_005f9eb4
    MOV dword ptr [EAX + 0x8],0x0       ; 005f9eba
    MOV EDX,dword ptr [EAX + 0x8]       ; 005f9ec1
    MOV dword ptr [EAX + 0x4],EDX       ; 005f9ec4
    MOV EDX,dword ptr [EAX + 0x4]       ; 005f9ec7
    MOV dword ptr [EAX],EDX             ; 005f9eca
    FLD float ptr [EBX + 0xbe38]        ; 005f9ecc
        ;   Label: LAB_005f9ecc
    FLDZ                                ; 005f9ed2
    FCOMPP                              ; 005f9ed4
    FNSTSW AX                           ; 005f9ed6
    SAHF                                ; 005f9ed8
    JNC 0x005f9eed                      ; 005f9ed9
        ;   XREF to: 005f9eed (CONDITIONAL_JUMP)  ; LAB_005f9eed
    FLD float ptr [EBX + 0xbe38]        ; 005f9edb
    FSUB float ptr [EBP + 0x92]         ; 005f9ee1
    FSTP float ptr [EBX + 0xbe38]       ; 005f9ee7
    LEA EAX,[EBX + 0x158]               ; 005f9eed
        ;   Label: LAB_005f9eed
    PUSH EAX                            ; 005f9ef3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005f9ef4
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    LEA ESI,[EBX + 0x23ac]              ; 005f9ef9
    MOV EAX,dword ptr [EAX + 0x24]      ; 005f9eff
    ADD ESP,0x4                         ; 005f9f02
    MOV EDI,EAX                         ; 005f9f05
    CMP EAX,0xe                         ; 005f9f07
    JNZ 0x005faf13                      ; 005f9f0a
        ;   XREF to: 005faf13 (CONDITIONAL_JUMP)  ; LAB_005faf13
    MOV dword ptr [ESI + 0x8],0x0       ; 005f9f10
    MOV EAX,dword ptr [ESI + 0x8]       ; 005f9f17
        ;   Label: LAB_005f9f17
    MOV dword ptr [ESI + 0x4],EAX       ; 005f9f1a
    MOV EAX,dword ptr [ESI + 0x4]       ; 005f9f1d
    MOV dword ptr [ESI],EAX             ; 005f9f20
    PUSH EBX                            ; 005f9f22
        ;   Label: LAB_005f9f22
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 005f9f23
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005f9f28
    CMP EDI,0xe                         ; 005f9f2b
    JZ 0x005f9f4e                       ; 005f9f2e
        ;   XREF to: 005f9f4e (CONDITIONAL_JUMP)  ; LAB_005f9f4e
    LEA EAX,[EBX + 0x158]               ; 005f9f30
    PUSH EAX                            ; 005f9f36
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005f9f37
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005f9f3c
    PUSH dword ptr [EBP + 0x92]         ; 005f9f3f
    PUSH EBX                            ; 005f9f45
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005f9f46
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005f9f4b
    CMP dword ptr [EBX + 0xbe28],0x0    ; 005f9f4e
        ;   Label: LAB_005f9f4e
    JNZ 0x005fa033                      ; 005f9f55
        ;   XREF to: 005fa033 (CONDITIONAL_JUMP)  ; LAB_005fa033
    MOV EAX,dword ptr [EBX + 0xbf8c]    ; 005f9f5b
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005f9f61
    JZ 0x005fb186                       ; 005f9f69
        ;   XREF to: 005fb186 (CONDITIONAL_JUMP)  ; LAB_005fb186
    MOV EAX,dword ptr [EBX + 0xbf60]    ; 005f9f6f
    PUSH 0x3e4ccccd                     ; 005f9f75
    PUSH EAX                            ; 005f9f7a
    MOV EDX,dword ptr [EBX + 0xbf78]    ; 005f9f7b
    PUSH EDX                            ; 005f9f81
    PUSH EBX                            ; 005f9f82
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 005f9f83
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbf78]    ; 005f9f88
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005f9f8e
    ADD ESP,0x10                        ; 005f9f95
    TEST ECX,ECX                        ; 005f9f98
    JZ 0x005f9fb8                       ; 005f9f9a
        ;   XREF to: 005f9fb8 (CONDITIONAL_JUMP)  ; LAB_005f9fb8
    MOV ESI,dword ptr [EBX + 0xbf58]    ; 005f9f9c
    PUSH 0x3e4ccccd                     ; 005f9fa2
    PUSH ESI                            ; 005f9fa7
    MOV EDI,dword ptr [EBX + 0xbf7c]    ; 005f9fa8
    PUSH EDI                            ; 005f9fae
    PUSH EBX                            ; 005f9faf
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 005f9fb0
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 005f9fb5
    MOV EAX,dword ptr [EBX + 0xbf64]    ; 005f9fb8
        ;   Label: LAB_005f9fb8
    PUSH 0x3e4ccccd                     ; 005f9fbe
    PUSH EAX                            ; 005f9fc3
    MOV EDX,dword ptr [EBX + 0xbf80]    ; 005f9fc4
    PUSH EDX                            ; 005f9fca
    PUSH EBX                            ; 005f9fcb
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 005f9fcc
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbf80]    ; 005f9fd1
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005f9fd7
    ADD ESP,0x10                        ; 005f9fde
    TEST ECX,ECX                        ; 005f9fe1
    JZ 0x005fa001                       ; 005f9fe3
        ;   XREF to: 005fa001 (CONDITIONAL_JUMP)  ; LAB_005fa001
    MOV ESI,dword ptr [EBX + 0xbf5c]    ; 005f9fe5
    PUSH 0x3e4ccccd                     ; 005f9feb
    PUSH ESI                            ; 005f9ff0
    MOV EDI,dword ptr [EBX + 0xbf84]    ; 005f9ff1
    PUSH EDI                            ; 005f9ff7
    PUSH EBX                            ; 005f9ff8
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 005f9ff9
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 005f9ffe
    MOV EAX,dword ptr [EBX + 0xbf4c]    ; 005fa001
        ;   Label: LAB_005fa001
    PUSH 0x3f333333                     ; 005fa007
    PUSH EAX                            ; 005fa00c
    MOV EDX,dword ptr [EBX + 0xbf90]    ; 005fa00d
    PUSH EDX                            ; 005fa013
    PUSH EBX                            ; 005fa014
        ;   Label: LAB_005fa014
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810 ; 005fa015
        ;   XREF to: 0042b810 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 005fa01a
    CMP dword ptr [EBX + 0xbf88],0x0    ; 005fa01d
    JL 0x005fb198                       ; 005fa024
        ;   XREF to: 005fb198 (CONDITIONAL_JUMP)  ; LAB_005fb198
    PUSH EBX                            ; 005fa02a
        ;   Label: LAB_005fa02a
    CALL core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670 ; 005fa02b
        ;   XREF to: 0042b670 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005fa030
    PUSH 0x1                            ; 005fa033
        ;   Label: LAB_005fa033
    PUSH EBX                            ; 005fa035
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00 ; 005fa036
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie * this_ptr, int object_shape_type)
    MOV EDX,dword ptr [EBP + 0x42]      ; 005fa03b
    ADD ESP,0x8                         ; 005fa03e
    TEST EDX,EDX                        ; 005fa041
    JZ 0x005f9498                       ; 005fa043
        ;   XREF to: 005f9498 (CONDITIONAL_JUMP)  ; LAB_005f9498
    TEST EAX,EAX                        ; 005fa049
    JL 0x005f9498                       ; 005fa04b
        ;   XREF to: 005f9498 (CONDITIONAL_JUMP)  ; LAB_005f9498
    MOV EDX,EAX                         ; 005fa051
    SHL EAX,0x4                         ; 005fa053
    ADD EAX,EDX                         ; 005fa056
    SHL EAX,0x2                         ; 005fa058
    ADD EAX,EBX                         ; 005fa05b
    MOV ECX,dword ptr [EAX + 0x24b4]    ; 005fa05d
    TEST ECX,ECX                        ; 005fa063
    JZ 0x005f9498                       ; 005fa065
        ;   XREF to: 005f9498 (CONDITIONAL_JUMP)  ; LAB_005f9498
    PUSH 0x2                            ; 005fa06b
    MOV EDX,dword ptr [ECX + 0x154]     ; 005fa06d
    PUSH ECX                            ; 005fa073
    CALL dword ptr [EDX + 0x70]         ; 005fa074
    ADD ESP,0x8                         ; 005fa077
    LEA ESP,[EBP + 0x7a]                ; 005fa07a
    POP EBP                             ; 005fa07d
    POP EDI                             ; 005fa07e
    POP ESI                             ; 005fa07f
    POP EBX                             ; 005fa080
    RET                                 ; 005fa081
    MOV EAX,dword ptr [EBX + 0xbf7c]    ; 005fa082
        ;   Label: LAB_005fa082
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005fa088
    JNZ 0x005f9e4c                      ; 005fa090
        ;   XREF to: 005f9e4c (CONDITIONAL_JUMP)  ; LAB_005f9e4c
    FLD float ptr [EBX + 0xbf98]        ; 005fa096
        ;   Label: LAB_005fa096
    FLDZ                                ; 005fa09c
    FCOMPP                              ; 005fa09e
    FNSTSW AX                           ; 005fa0a0
    SAHF                                ; 005fa0a2
    JA 0x005f9e60                       ; 005fa0a3
        ;   XREF to: 005f9e60 (CONDITIONAL_JUMP)  ; LAB_005f9e60
    FLD float ptr [EBX + 0xbf98]        ; 005fa0a9
    FADD float ptr [EBP + 0x92]         ; 005fa0af
    FST float ptr [EBX + 0xbf98]        ; 005fa0b5
    FCOMP double ptr [0x0065878d]       ; 005fa0bb | DOUBLE_0065878d
    FNSTSW AX                           ; 005fa0c1
    SAHF                                ; 005fa0c3
    JC 0x005f9e60                       ; 005fa0c4
        ;   XREF to: 005f9e60 (CONDITIONAL_JUMP)  ; LAB_005f9e60
    LEA EAX,[EBP + 0xfffffd1a]          ; 005fa0ca
    PUSH EAX                            ; 005fa0d0
    MOV ESI,0x461c3f9a                  ; 005fa0d1
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005fa0d6
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    LEA EDX,[EBP + 0xfffffd1a]          ; 005fa0db
    ADD ESP,0x4                         ; 005fa0e1
    MOV dword ptr [EBP + 0xfffffd1e],ESI ; 005fa0e4
    MOV dword ptr [EBP + 0xfffffd4e],EBX ; 005fa0ea
    MOV dword ptr [EBP + 0xfffffd52],EBX ; 005fa0f0
    PUSH EDX                            ; 005fa0f6
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fa0f7
    PUSH EBX                            ; 005fa0fd
    CALL dword ptr [EAX + 0x11c]        ; 005fa0fe
    ADD ESP,0x8                         ; 005fa104
    MOV dword ptr [EBX + 0xbf98],0xbf800000 ; 005fa107
    JMP 0x005f9e60                      ; 005fa111
        ;   XREF to: 005f9e60 (UNCONDITIONAL_JUMP)  ; LAB_005f9e60
    PUSH 0x1                            ; 005fa116
        ;   Label: LAB_005fa116
    PUSH 0x0                            ; 005fa118
    LEA EAX,[EBX + 0x158]               ; 005fa11a
    PUSH EAX                            ; 005fa120
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fa121
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fa126
    PUSH EBX                            ; 005fa129
    MOV EAX,0x65868b                    ; 005fa12a | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 005fa12f | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 005fa130 | g_CConsolePtr
    PUSH ECX                            ; 005fa136 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fa137
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005fa13c
    JMP 0x005f9eb4                      ; 005fa13f
        ;   XREF to: 005f9eb4 (UNCONDITIONAL_JUMP)  ; LAB_005f9eb4
    JBE 0x005f9ea6                      ; 005fa144
        ;   XREF to: 005f9ea6 (CONDITIONAL_JUMP)  ; LAB_005f9ea6
        ;   Label: LAB_005fa144
    CMP EAX,0x3                         ; 005fa14a
    JZ 0x005fa116                       ; 005fa14d
        ;   XREF to: 005fa116 (CONDITIONAL_JUMP)  ; LAB_005fa116
    PUSH 0x1                            ; 005fa14f
        ;   Label: LAB_005fa14f
    PUSH 0x0                            ; 005fa151
    LEA EAX,[EBX + 0x158]               ; 005fa153
    PUSH EAX                            ; 005fa159
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fa15a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fa15f
    JMP 0x005f9eb4                      ; 005fa162
        ;   XREF to: 005f9eb4 (UNCONDITIONAL_JUMP)  ; LAB_005f9eb4
    MOV EAX,[0x02db87d0]                ; 005fa167 | g_LocalHeroIndex
        ;   Label: LAB_005fa167
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005fa16c | g_HeroActors
    PUSH EAX                            ; 005fa173
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fa174
    CALL dword ptr [EDX + 0x120]        ; 005fa17a
    ADD ESP,0x4                         ; 005fa180
    TEST EAX,EAX                        ; 005fa183
    JZ 0x005fa255                       ; 005fa185
        ;   XREF to: 005fa255 (CONDITIONAL_JUMP)  ; LAB_005fa255
    FLD float ptr [EBP + 0x56]          ; 005fa18b
        ;   Label: LAB_005fa18b
    FLDZ                                ; 005fa18e
    FCOMPP                              ; 005fa190
    FNSTSW AX                           ; 005fa192
    SAHF                                ; 005fa194
    JA 0x005f9ecc                       ; 005fa195
        ;   XREF to: 005f9ecc (CONDITIONAL_JUMP)  ; LAB_005f9ecc
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 005fa19b
    JZ 0x005f9ecc                       ; 005fa1a2
        ;   XREF to: 005f9ecc (CONDITIONAL_JUMP)  ; LAB_005f9ecc
    FLD float ptr [EBP + 0x3e]          ; 005fa1a8
    FMUL float ptr [EBX + 0xbe24]       ; 005fa1ab
    FLD float ptr [EBX + 0xbe24]        ; 005fa1b1
    FMUL double ptr [0x006587ed]        ; 005fa1b7 | DOUBLE_006587ed
    FXCH                                ; 005fa1bd
    FLD float ptr [EBP + 0x92]          ; 005fa1bf
    FXCH                                ; 005fa1c5
    FMUL ST1                            ; 005fa1c7
    FXCH                                ; 005fa1c9
    FMULP ST2                           ; 005fa1cb
    PUSH 0x3f490fdb                     ; 005fa1cd
    PUSH 0x40400000                     ; 005fa1d2
    MOV EAX,dword ptr [EBP + 0x56]      ; 005fa1d7
    XOR ECX,ECX                         ; 005fa1da
    FSTP float ptr [EBX + 0x2434]       ; 005fa1dc
    FSTP float ptr [EBX + 0x2438]       ; 005fa1e2
    MOV dword ptr [EBP + -0x56],ECX     ; 005fa1e8
    MOV dword ptr [EBP + -0x4e],EAX     ; 005fa1eb
    LEA EAX,[EBP + -0x56]               ; 005fa1ee
    MOV dword ptr [EBP + -0x52],ECX     ; 005fa1f1
    PUSH EAX                            ; 005fa1f4
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fa1f5
    PUSH EAX                            ; 005fa1fb
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fa1fc
    CALL dword ptr [EDX + 0xbc]         ; 005fa202
    ADD ESP,0x4                         ; 005fa208
    PUSH EAX                            ; 005fa20b
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fa20c
    ADD EAX,0x20                        ; 005fa212
    PUSH EAX                            ; 005fa215
    PUSH EBX                            ; 005fa216
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 005fa217
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005fa21c
    CMP EAX,0x1                         ; 005fa21f
    JZ 0x005f9ecc                       ; 005fa222
        ;   XREF to: 005f9ecc (CONDITIONAL_JUMP)  ; LAB_005f9ecc
    PUSH EBX                            ; 005fa228
    PUSH 0x658762                       ; 005fa229 | = "%s giving up attack\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 005fa22e | g_CConsolePtr
    PUSH EDI                            ; 005fa234 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fa235
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005fa23a
    PUSH EBX                            ; 005fa23d
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005fa23e
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005fa243
    MOV dword ptr [EBX + 0x2418],0x0    ; 005fa246
    JMP 0x005f9ecc                      ; 005fa250
        ;   XREF to: 005f9ecc (UNCONDITIONAL_JUMP)  ; LAB_005f9ecc
    PUSH dword ptr [EBP + 0x92]         ; 005fa255
        ;   Label: LAB_005fa255
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fa25b
    PUSH EBX                            ; 005fa261
    CALL dword ptr [EAX + 0x158]        ; 005fa262
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005fa268
    ADD ESP,0x8                         ; 005fa26e
    TEST ECX,ECX                        ; 005fa271
    JZ 0x005fa18b                       ; 005fa273
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH 0x1                            ; 005fa279
        ;   Label: LAB_005fa279
    PUSH 0x0                            ; 005fa27b
    LEA EAX,[EBX + 0x158]               ; 005fa27d
    PUSH EAX                            ; 005fa283
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fa284
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fa289
    JMP 0x005fa18b                      ; 005fa28c
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD float ptr [EBX + 0xbfa8]        ; 005fa291
        ;   Label: LAB_005fa291
    FSUB float ptr [EBP + 0x92]         ; 005fa297
    FST float ptr [EBX + 0xbfa8]        ; 005fa29d
    FLDZ                                ; 005fa2a3
    FCOMPP                              ; 005fa2a5
    FNSTSW AX                           ; 005fa2a7
    SAHF                                ; 005fa2a9
    JC 0x005fa18b                       ; 005fa2aa
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH dword ptr [EBP + 0x92]         ; 005fa2b0
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fa2b6
    PUSH EBX                            ; 005fa2bc
    MOV dword ptr [EBX + 0xbfa8],0x0    ; 005fa2bd
    CALL dword ptr [EAX + 0x158]        ; 005fa2c7
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 005fa2cd
    ADD ESP,0x8                         ; 005fa2d3
    TEST EDI,EDI                        ; 005fa2d6
    JZ 0x005fa18b                       ; 005fa2d8
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD float ptr [ESI]                 ; 005fa2de
    FSUB float ptr [EDI + 0x20]         ; 005fa2e0
    FSTP float ptr [EBP + 0xfffffe36]   ; 005fa2e3
    FLD float ptr [ESI + 0x4]           ; 005fa2e9
    FSUB float ptr [EDI + 0x24]         ; 005fa2ec
    LEA EAX,[EBP + 0xfffffe36]          ; 005fa2ef
    FSTP float ptr [EBP + 0xfffffe3a]   ; 005fa2f5
    FLD float ptr [ESI + 0x8]           ; 005fa2fb
    FSUB float ptr [EDI + 0x28]         ; 005fa2fe
    LEA EDX,[EBP + 0xffffff56]          ; 005fa301
    FSTP float ptr [EBP + 0xfffffe3e]   ; 005fa307
    CMP EDX,EAX                         ; 005fa30d
    JNZ 0x005fa462                      ; 005fa30f
        ;   XREF to: 005fa462 (CONDITIONAL_JUMP)  ; LAB_005fa462
    FLD float ptr [EBP + 0xffffff5a]    ; 005fa315
        ;   Label: LAB_005fa315
    FMUL ST0                            ; 005fa31b
    FLD float ptr [EBP + 0xffffff56]    ; 005fa31d
    FMUL ST0                            ; 005fa323
    FADDP                               ; 005fa325
    FLD float ptr [EBP + 0xffffff5e]    ; 005fa327
    FMUL ST0                            ; 005fa32d
    FADDP                               ; 005fa32f
    FSTP float ptr [EBP + 0x6e]         ; 005fa331
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005fa334
    MOV EDX,dword ptr [0x02d7a7b8]      ; 005fa337 | INT_02d7a7b8
    SAR EAX,0x1                         ; 005fa33d
    ADD EAX,EDX                         ; 005fa33f
    MOV dword ptr [EBP + 0x2e],EAX      ; 005fa341
    FLD float ptr [EBP + 0x2e]          ; 005fa344
    FCOMP double ptr [0x00658795]       ; 005fa347 | DOUBLE_00658795
    FNSTSW AX                           ; 005fa34d
    SAHF                                ; 005fa34f
    JA 0x005fa18b                       ; 005fa350
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EAX,dword ptr [EBX + 0x2df0]    ; 005fa356
    MOV dword ptr [EBP + 0x5a],EAX      ; 005fa35c
    FLD float ptr [EBP + 0x5a]          ; 005fa35f
    FCOMP float ptr [EBX + 0x2dec]      ; 005fa362
    FNSTSW AX                           ; 005fa368
    SAHF                                ; 005fa36a
    JNC 0x005fa376                      ; 005fa36b
        ;   XREF to: 005fa376 (CONDITIONAL_JUMP)  ; LAB_005fa376
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 005fa36d
    MOV dword ptr [EBP + 0x5a],EAX      ; 005fa373
    FLD float ptr [EBP + 0x5a]          ; 005fa376
        ;   Label: LAB_005fa376
    FCOMP float ptr [EBX + 0x2dec]      ; 005fa379
    FNSTSW AX                           ; 005fa37f
    SAHF                                ; 005fa381
    JC 0x005fa48b                       ; 005fa382
        ;   XREF to: 005fa48b (CONDITIONAL_JUMP)  ; LAB_005fa48b
    XOR ESI,ESI                         ; 005fa388
        ;   Label: LAB_005fa388
    MOV dword ptr [EBP + 0x76],ESI      ; 005fa38a
        ;   Label: LAB_005fa38a
    FILD dword ptr [EBP + 0x76]         ; 005fa38d
    FMUL double ptr [0x006587dd]        ; 005fa390 | DOUBLE_006587dd
    MOV EDI,dword ptr [0x006810c8]      ; 005fa396 | g_CDemonSetPtr
    FMUL double ptr [0x006587d5]        ; 005fa39c | DOUBLE_006587d5
    PUSH EDI                            ; 005fa3a2 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x12]         ; 005fa3a3
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005fa3a6
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005fa3ab
    PUSH EBX                            ; 005fa3ae
    MOV EAX,[0x006810c8]                ; 005fa3af | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 005fa3b4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005fa3b5
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + 0x12]          ; 005fa3ba
    FLD ST0                             ; 005fa3bd
    FCOS                                ; 005fa3bf
    FXCH                                ; 005fa3c1
    FSIN                                ; 005fa3c3
    FXCH                                ; 005fa3c5
    FLD double ptr [0x006587e5]         ; 005fa3c7 | DOUBLE_006587e5
    FXCH                                ; 005fa3cd
    FMUL ST1                            ; 005fa3cf
    FXCH ST2                            ; 005fa3d1
    FMULP                               ; 005fa3d3
    FLD float ptr [EBX + 0x24]          ; 005fa3d5
    ADD ESP,0x8                         ; 005fa3d8
    FADD float ptr [EBP + 0x5a]         ; 005fa3db
    SUB ESP,0x4                         ; 005fa3de
    FSTP float ptr [ESP]                ; 005fa3e1
    FLD float ptr [EBX + 0x24]          ; 005fa3e4
    FADD float ptr [EBX + 0x2dec]       ; 005fa3e7
    SUB ESP,0x4                         ; 005fa3ed
    FSTP float ptr [ESP]                ; 005fa3f0
    PUSH dword ptr [EBX + 0x2de0]       ; 005fa3f3
    SUB ESP,0x4                         ; 005fa3f9
    FXCH                                ; 005fa3fc
    FSTP float ptr [ESP]                ; 005fa3fe
    SUB ESP,0x4                         ; 005fa401
    FSTP float ptr [ESP]                ; 005fa404
    PUSH dword ptr [EBX + 0x28]         ; 005fa407
    MOV EDX,dword ptr [0x006810c8]      ; 005fa40a | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH dword ptr [EBX + 0x20]         ; 005fa410
    PUSH EDX                            ; 005fa413 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00573470 ; 005fa414
        ;   XREF to: 00573470 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00573470(CDemonSet * this_ptr, float start_x, float start_z, float dir_x, ...)
    MOV ECX,dword ptr [0x006810c8]      ; 005fa419 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [EBP + 0x76],EAX      ; 005fa41f
    ADD ESP,0x20                        ; 005fa422
    FLD float ptr [EBP + 0x76]          ; 005fa425
    PUSH ECX                            ; 005fa428 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x72]         ; 005fa429
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005fa42c
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    FLD float ptr [EBP + 0x72]          ; 005fa431
    FLD1                                ; 005fa434
    ADD ESP,0x4                         ; 005fa436
    FCOMPP                              ; 005fa439
    FNSTSW AX                           ; 005fa43b
    SAHF                                ; 005fa43d
    JBE 0x005fa49f                      ; 005fa43e
        ;   XREF to: 005fa49f (CONDITIONAL_JUMP)  ; LAB_005fa49f
    CMP ESI,0x4                         ; 005fa440
        ;   Label: LAB_005fa440
    JGE 0x005fa279                      ; 005fa443
        ;   XREF to: 005fa279 (CONDITIONAL_JUMP)  ; LAB_005fa279
    MOV dword ptr [EBX + 0xbfa8],0x40400000 ; 005fa449
    MOV dword ptr [EBX + 0xbe3c],0x0    ; 005fa453
    JMP 0x005fa18b                      ; 005fa45d
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EAX,dword ptr [EBP + 0xfffffe36] ; 005fa462
        ;   Label: LAB_005fa462
    MOV dword ptr [EBP + 0xffffff56],EAX ; 005fa468
    MOV EAX,dword ptr [EBP + 0xfffffe3a] ; 005fa46e
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 005fa474
    MOV EAX,dword ptr [EBP + 0xfffffe3e] ; 005fa47a
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 005fa480
    JMP 0x005fa315                      ; 005fa486
        ;   XREF to: 005fa315 (UNCONDITIONAL_JUMP)  ; LAB_005fa315
    FLD float ptr [EBX + 0x2dec]        ; 005fa48b
        ;   Label: LAB_005fa48b
    FADD double ptr [0x00658785]        ; 005fa491 | DOUBLE_00658785
    FSTP float ptr [EBP + 0x5a]         ; 005fa497
    JMP 0x005fa388                      ; 005fa49a
        ;   XREF to: 005fa388 (UNCONDITIONAL_JUMP)  ; LAB_005fa388
    INC ESI                             ; 005fa49f
        ;   Label: LAB_005fa49f
    CMP ESI,0x4                         ; 005fa4a0
    JL 0x005fa38a                       ; 005fa4a3
        ;   XREF to: 005fa38a (CONDITIONAL_JUMP)  ; LAB_005fa38a
    JMP 0x005fa440                      ; 005fa4a9
        ;   XREF to: 005fa440 (UNCONDITIONAL_JUMP)  ; LAB_005fa440
    LEA EAX,[EBX + 0xbedc]              ; 005fa4ab
        ;   Label: LAB_005fa4ab
    PUSH EAX                            ; 005fa4b1
    MOV EDX,dword ptr [0x006793d0]      ; 005fa4b2 | g_CEventListPtr
    PUSH EDX                            ; 005fa4b8 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005fa4b9
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005fa4be
    TEST EAX,EAX                        ; 005fa4c1
    JZ 0x005fa18b                       ; 005fa4c3
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD float ptr [EBX + 0xbfa4]        ; 005fa4c9
    FSUB float ptr [EBP + 0x92]         ; 005fa4cf
    FST float ptr [EBX + 0xbfa4]        ; 005fa4d5
    FLDZ                                ; 005fa4db
    FCOMPP                              ; 005fa4dd
    FNSTSW AX                           ; 005fa4df
    SAHF                                ; 005fa4e1
    JBE 0x005fa18b                      ; 005fa4e2
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD1                                ; 005fa4e8
    MOV dword ptr [EBP + 0x66],ESI      ; 005fa4ea
    XOR ECX,ECX                         ; 005fa4ed
    XOR EDI,EDI                         ; 005fa4ef
    FADD float ptr [EBX + 0xbfa4]       ; 005fa4f1
    MOV dword ptr [EBP + 0x62],ECX      ; 005fa4f7
    FSTP float ptr [EBX + 0xbfa4]       ; 005fa4fa
    MOV EAX,[0x006810c8]                ; 005fa500 | g_CDemonSetPtr
        ;   Label: LAB_005fa500
    MOV EDX,dword ptr [EBP + 0x62]      ; 005fa505
    CMP EDX,dword ptr [EAX + 0x14f098]  ; 005fa508 | g_CDemonSetInstance.character_count
    JGE 0x005fa18b                      ; 005fa50e
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH EBX                            ; 005fa514
    MOV ESI,dword ptr [EDI + EAX*0x1 + 0x14f09c] ; 005fa515 | g_CDemonSetInstance.characters[0] | g_CDemonSetInstance.characters[1]
    PUSH ESI                            ; 005fa51c
    MOV EAX,dword ptr [ESI + 0x154]     ; 005fa51d
    CALL dword ptr [EAX + 0xf8]         ; 005fa523
    ADD ESP,0x8                         ; 005fa529
    TEST EAX,EAX                        ; 005fa52c
    JNZ 0x005fa53c                      ; 005fa52e
        ;   XREF to: 005fa53c (CONDITIONAL_JUMP)  ; LAB_005fa53c
    MOV EAX,dword ptr [EBP + 0x62]      ; 005fa530
        ;   Label: LAB_005fa530
    INC EAX                             ; 005fa533
    ADD EDI,0x4                         ; 005fa534
    MOV dword ptr [EBP + 0x62],EAX      ; 005fa537
    JMP 0x005fa500                      ; 005fa53a
        ;   XREF to: 005fa500 (UNCONDITIONAL_JUMP)  ; LAB_005fa500
    MOV EAX,dword ptr [EBP + 0x66]      ; 005fa53c
        ;   Label: LAB_005fa53c
    FLD float ptr [ESI + 0x20]          ; 005fa53f
    FSUB float ptr [EAX]                ; 005fa542
    FSTP float ptr [EBP + 0xfffffed2]   ; 005fa544
    FLD float ptr [ESI + 0x24]          ; 005fa54a
    FSUB float ptr [EAX + 0x4]          ; 005fa54d
    FST float ptr [EBP + 0xfffffed6]    ; 005fa550
    FLD float ptr [ESI + 0x28]          ; 005fa556
    FSUB float ptr [EAX + 0x8]          ; 005fa559
    FXCH                                ; 005fa55c
    FABS                                ; 005fa55e
    FXCH                                ; 005fa560
    FSTP float ptr [EBP + 0xfffffeda]   ; 005fa562
    FCOMP double ptr [0x00658815]       ; 005fa568 | DOUBLE_00658815
    FNSTSW AX                           ; 005fa56e
    SAHF                                ; 005fa570
    JA 0x005fa530                       ; 005fa571
        ;   XREF to: 005fa530 (CONDITIONAL_JUMP)  ; LAB_005fa530
    FLD float ptr [EBP + 0xfffffed2]    ; 005fa573
    FMUL ST0                            ; 005fa579
    FLD float ptr [EBP + 0xfffffeda]    ; 005fa57b
    FMUL ST0                            ; 005fa581
    XOR EAX,EAX                         ; 005fa583
    FADDP                               ; 005fa585
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 005fa587
    FSQRT                               ; 005fa58d
    FCOMP float ptr [EBX + 0xbe34]      ; 005fa58f
    FNSTSW AX                           ; 005fa595
    SAHF                                ; 005fa597
    JA 0x005fa530                       ; 005fa598
        ;   XREF to: 005fa530 (CONDITIONAL_JUMP)  ; LAB_005fa530
    PUSH EBX                            ; 005fa59a
    PUSH 0x6586b5                       ; 005fa59b | = "%s rising from the grave\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005fa5a0 | g_CConsolePtr
    PUSH EDX                            ; 005fa5a6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fa5a7
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005fa5ac
    PUSH 0x1                            ; 005fa5af
    PUSH 0xf                            ; 005fa5b1
    LEA EAX,[EBX + 0x158]               ; 005fa5b3
    PUSH EAX                            ; 005fa5b9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fa5ba
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV ECX,dword ptr [EBX + 0xbed4]    ; 005fa5bf
    ADD ESP,0xc                         ; 005fa5c5
    TEST ECX,ECX                        ; 005fa5c8
    JZ 0x005fa5df                       ; 005fa5ca
        ;   XREF to: 005fa5df (CONDITIONAL_JUMP)  ; LAB_005fa5df
    PUSH ECX                            ; 005fa5cc
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004ee790 ; 005fa5cd
        ;   XREF to: 004ee790 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004ee790(CGrave * this_ptr)
    ADD ESP,0x4                         ; 005fa5d2
    MOV dword ptr [EBX + 0xbed4],0x0    ; 005fa5d5
    MOV dword ptr [EBX + 0xbe34],0x42c80000 ; 005fa5df
        ;   Label: LAB_005fa5df
    JMP 0x005fa18b                      ; 005fa5e9
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV ESI,dword ptr [EBX + 0xbe28]    ; 005fa5ee
        ;   Label: LAB_005fa5ee
    TEST ESI,ESI                        ; 005fa5f4
    JNZ 0x005fa18b                      ; 005fa5f6
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    CMP dword ptr [EBX + 0xdc],0x0      ; 005fa5fc
    JNZ 0x005fa18b                      ; 005fa603
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH ESI                            ; 005fa609
    LEA EAX,[EBP + -0x1a]               ; 005fa60a
    PUSH EAX                            ; 005fa60d
    PUSH EDI                            ; 005fa60e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005fa60f
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005fa614
    PUSH EAX                            ; 005fa617
    LEA EAX,[EBP + 0xfffffec6]          ; 005fa618
    PUSH EAX                            ; 005fa61e
    PUSH EBX                            ; 005fa61f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005fa620
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005fa625
    PUSH ESI                            ; 005fa628
    LEA EAX,[EBP + 0xfffffec6]          ; 005fa629
    PUSH EAX                            ; 005fa62f
    MOV EDX,dword ptr [0x0067b9a0]      ; 005fa630 | g_CGorePtr | g_CGoreInstance
    PUSH EDX                            ; 005fa636 | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 005fa637
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 005fa63c
    MOV dword ptr [EBX + 0xbe28],0x1    ; 005fa63f
    JMP 0x005fa18b                      ; 005fa649
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD float ptr [EBP + 0x92]          ; 005fa64e
        ;   Label: LAB_005fa64e
    FMUL double ptr [0x006587bd]        ; 005fa654 | DOUBLE_006587bd
    SUB ESP,0x4                         ; 005fa65a
    FSTP float ptr [ESP]                ; 005fa65d
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005fa660
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005fa665
    TEST EAX,EAX                        ; 005fa668
    JZ 0x005fa694                       ; 005fa66a
        ;   XREF to: 005fa694 (CONDITIONAL_JUMP)  ; LAB_005fa694
    PUSH 0x0                            ; 005fa66c
    MOV EAX,0x6586cf                    ; 005fa66e | = "pickass"
    PUSH EAX                            ; 005fa673 | = "pickass"
    LEA EAX,[EBX + 0x158]               ; 005fa674
    PUSH EAX                            ; 005fa67a
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005fa67b
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005fa680
    PUSH EAX                            ; 005fa683
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005fa684
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005fa689
    TEST EAX,EAX                        ; 005fa68c
    JGE 0x005fa72d                      ; 005fa68e
        ;   XREF to: 005fa72d (CONDITIONAL_JUMP)  ; LAB_005fa72d
    PUSH dword ptr [EBP + 0x92]         ; 005fa694
        ;   Label: LAB_005fa694
    PUSH EBX                            ; 005fa69a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 005fa69b
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005fa6a0
    TEST EAX,EAX                        ; 005fa6a3
    JZ 0x005fa6b0                       ; 005fa6a5
        ;   XREF to: 005fa6b0 (CONDITIONAL_JUMP)  ; LAB_005fa6b0
    PUSH EBX                            ; 005fa6a7
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005fa6a8
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005fa6ad
    PUSH dword ptr [EBP + 0x92]         ; 005fa6b0
        ;   Label: LAB_005fa6b0
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fa6b6
    PUSH EBX                            ; 005fa6bc
    CALL dword ptr [EAX + 0x158]        ; 005fa6bd
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005fa6c3
    ADD ESP,0x8                         ; 005fa6c9
    TEST ECX,ECX                        ; 005fa6cc
    JNZ 0x005fa6d6                      ; 005fa6ce
        ;   XREF to: 005fa6d6 (CONDITIONAL_JUMP)  ; LAB_005fa6d6
    CMP dword ptr [EBP + 0x52],0x0      ; 005fa6d0
    JNZ 0x005fa745                      ; 005fa6d4
        ;   XREF to: 005fa745 (CONDITIONAL_JUMP)  ; LAB_005fa745
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 005fa6d6
        ;   Label: LAB_005fa6d6
    JZ 0x005fa18b                       ; 005fa6dd
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH EBX                            ; 005fa6e3
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005fa6e4
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005fa6e9
    MOV EAX,dword ptr [EBX + 0xbfa0]    ; 005fa6ec
    PUSH EAX                            ; 005fa6f2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005fa6f3
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005fa6f8
    TEST EAX,EAX                        ; 005fa6fb
    JNZ 0x005fa18b                      ; 005fa6fd
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    CMP dword ptr [EBX + 0xbf48],0x0    ; 005fa703
    JZ 0x005fa78f                       ; 005fa70a
        ;   XREF to: 005fa78f (CONDITIONAL_JUMP)  ; LAB_005fa78f
    PUSH 0x6586d7                       ; 005fa710 | = "f-zombie-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fa715
    PUSH EBX                            ; 005fa71b
    CALL dword ptr [EAX + 0x24]         ; 005fa71c
    ADD ESP,0x8                         ; 005fa71f
    MOV dword ptr [EBX + 0xbfa0],EAX    ; 005fa722
    JMP 0x005fa18b                      ; 005fa728
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH 0x1                            ; 005fa72d
        ;   Label: LAB_005fa72d
    PUSH 0x10                           ; 005fa72f
    LEA EAX,[EBX + 0x158]               ; 005fa731
    PUSH EAX                            ; 005fa737
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fa738
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fa73d
    JMP 0x005fa18b                      ; 005fa740
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EAX,[0x02db87d0]                ; 005fa745 | g_LocalHeroIndex
        ;   Label: LAB_005fa745
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005fa74a | g_HeroActors
    PUSH EAX                            ; 005fa751
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fa752
    CALL dword ptr [EDX + 0x120]        ; 005fa758
    ADD ESP,0x4                         ; 005fa75e
    TEST EAX,EAX                        ; 005fa761
    JZ 0x005fa18b                       ; 005fa763
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EAX,[0x0067b654]                ; 005fa769 | g_CGamePtr
    MOV dword ptr [EAX + 0x220],0x1     ; 005fa76e | g_CGameInstance.player_hit_flag
    MOV EAX,[0x02db87d0]                ; 005fa778 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005fa77d | g_HeroActors
    MOV dword ptr [EBX + 0xbe3c],EAX    ; 005fa784
    JMP 0x005fa6d6                      ; 005fa78a
        ;   XREF to: 005fa6d6 (UNCONDITIONAL_JUMP)  ; LAB_005fa6d6
    PUSH 0x6586eb                       ; 005fa78f | = "zom-a0?.wav"
        ;   Label: LAB_005fa78f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fa794
    PUSH EBX                            ; 005fa79a
    CALL dword ptr [EAX + 0x24]         ; 005fa79b
    ADD ESP,0x8                         ; 005fa79e
    MOV dword ptr [EBX + 0xbfa0],EAX    ; 005fa7a1
    JMP 0x005fa18b                      ; 005fa7a7
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH dword ptr [EBP + 0x92]         ; 005fa7ac
        ;   Label: LAB_005fa7ac
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fa7b2
    PUSH EBX                            ; 005fa7b8
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005fa7b9
    CALL dword ptr [EAX + 0x158]        ; 005fa7bf
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fa7c5
    ADD ESP,0x8                         ; 005fa7cb
    TEST EAX,EAX                        ; 005fa7ce
    JNZ 0x005fa819                      ; 005fa7d0
        ;   XREF to: 005fa819 (CONDITIONAL_JUMP)  ; LAB_005fa819
    CMP dword ptr [EBP + 0x52],0x0      ; 005fa7d2
    JZ 0x005fa819                       ; 005fa7d6
        ;   XREF to: 005fa819 (CONDITIONAL_JUMP)  ; LAB_005fa819
    MOV EAX,[0x02db87d0]                ; 005fa7d8 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005fa7dd | g_HeroActors
    PUSH EAX                            ; 005fa7e4
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fa7e5
    CALL dword ptr [EDX + 0x120]        ; 005fa7eb
    ADD ESP,0x4                         ; 005fa7f1
    TEST EAX,EAX                        ; 005fa7f4
    JZ 0x005fa819                       ; 005fa7f6
        ;   XREF to: 005fa819 (CONDITIONAL_JUMP)  ; LAB_005fa819
    MOV EAX,[0x0067b654]                ; 005fa7f8 | g_CGamePtr
    MOV dword ptr [EAX + 0x220],0x1     ; 005fa7fd | g_CGameInstance.player_hit_flag
    MOV EAX,[0x02db87d0]                ; 005fa807 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005fa80c | g_HeroActors
    MOV dword ptr [EBX + 0xbe3c],EAX    ; 005fa813
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 005fa819
        ;   Label: LAB_005fa819
    JZ 0x005fa86c                       ; 005fa820
        ;   XREF to: 005fa86c (CONDITIONAL_JUMP)  ; LAB_005fa86c
    TEST ESI,ESI                        ; 005fa822
    JNZ 0x005fa8a1                      ; 005fa824
        ;   XREF to: 005fa8a1 (CONDITIONAL_JUMP)  ; LAB_005fa8a1
    MOV EAX,dword ptr [EBX + 0xbfa0]    ; 005fa82a
    PUSH EAX                            ; 005fa830
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005fa831
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005fa836
    TEST EAX,EAX                        ; 005fa839
    JNZ 0x005fa85e                      ; 005fa83b
        ;   XREF to: 005fa85e (CONDITIONAL_JUMP)  ; LAB_005fa85e
    CMP dword ptr [EBX + 0xbf48],0x0    ; 005fa83d
    JZ 0x005fa89a                       ; 005fa844
        ;   XREF to: 005fa89a (CONDITIONAL_JUMP)  ; LAB_005fa89a
    PUSH 0x6586f7                       ; 005fa846 | = "f-zombie-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fa84b
        ;   Label: LAB_005fa84b
    PUSH EBX                            ; 005fa851
    CALL dword ptr [EAX + 0x24]         ; 005fa852
    ADD ESP,0x8                         ; 005fa855
    MOV dword ptr [EBX + 0xbfa0],EAX    ; 005fa858
    PUSH EBX                            ; 005fa85e
        ;   Label: LAB_005fa85e
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005fa85f
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005fa864
    JMP 0x005fa18b                      ; 005fa867
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH dword ptr [EBP + 0x92]         ; 005fa86c
        ;   Label: LAB_005fa86c
    PUSH EBX                            ; 005fa872
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 005fa873
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005fa878
    TEST EAX,EAX                        ; 005fa87b
    JNZ 0x005fa18b                      ; 005fa87d
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH 0x1                            ; 005fa883
    PUSH EAX                            ; 005fa885
    LEA EAX,[EBX + 0x158]               ; 005fa886
    PUSH EAX                            ; 005fa88c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fa88d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fa892
    JMP 0x005fa18b                      ; 005fa895
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH 0x65870b                       ; 005fa89a | = "zom-a0?.wav"
        ;   Label: LAB_005fa89a
    JMP 0x005fa84b                      ; 005fa89f
        ;   XREF to: 005fa84b (UNCONDITIONAL_JUMP)  ; LAB_005fa84b
    MOV EAX,dword ptr [EBX + 0xbf7c]    ; 005fa8a1
        ;   Label: LAB_005fa8a1
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005fa8a7
    XOR EDI,EDI                         ; 005fa8ae
    TEST ESI,ESI                        ; 005fa8b0
    JZ 0x005fa8b9                       ; 005fa8b2
        ;   XREF to: 005fa8b9 (CONDITIONAL_JUMP)  ; LAB_005fa8b9
    MOV EDI,0x1                         ; 005fa8b4
    MOV EAX,dword ptr [EBX + 0xbf84]    ; 005fa8b9
        ;   Label: LAB_005fa8b9
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005fa8bf
    JZ 0x005fa8ca                       ; 005fa8c7
        ;   XREF to: 005fa8ca (CONDITIONAL_JUMP)  ; LAB_005fa8ca
    INC EDI                             ; 005fa8c9
    LEA EAX,[EBX + 0x23ac]              ; 005fa8ca
        ;   Label: LAB_005fa8ca
    PUSH dword ptr [EBP + 0x92]         ; 005fa8d0
    MOV dword ptr [EAX + 0x8],0x0       ; 005fa8d6
    PUSH EBX                            ; 005fa8dd
    MOV EDX,dword ptr [EAX + 0x8]       ; 005fa8de
    MOV dword ptr [EAX + 0x4],EDX       ; 005fa8e1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005fa8e4
    MOV dword ptr [EAX],EDX             ; 005fa8e7
    CALL core_zombie.cpp_CZombie_processPickup_FUN_005fb530 ; 005fa8e9
        ;   XREF to: 005fb530 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_processPickup_FUN_005fb530(CZombie * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005fa8ee
    TEST EAX,EAX                        ; 005fa8f1
    JNZ 0x005fa18b                      ; 005fa8f3
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH 0x1                            ; 005fa8f9
    MOV EAX,[0x006659c8]                ; 005fa8fb | FLOAT_006659c8
    PUSH EBX                            ; 005fa900
    MOV dword ptr [EBP + 0x3a],EAX      ; 005fa901
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00 ; 005fa904
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005fa909
    MOV dword ptr [EBP + 0x4a],EAX      ; 005fa90c
    TEST EAX,EAX                        ; 005fa90f
    JL 0x005fa9ab                       ; 005fa911
        ;   XREF to: 005fa9ab (CONDITIONAL_JUMP)  ; LAB_005fa9ab
    MOV EDX,EAX                         ; 005fa917
    SHL EAX,0x4                         ; 005fa919
    ADD EAX,EDX                         ; 005fa91c
    SHL EAX,0x2                         ; 005fa91e
    ADD EAX,EBX                         ; 005fa921
    MOV ECX,dword ptr [EAX + 0x24b4]    ; 005fa923
    TEST ECX,ECX                        ; 005fa929
    JZ 0x005fa9ab                       ; 005fa92b
        ;   XREF to: 005fa9ab (CONDITIONAL_JUMP)  ; LAB_005fa9ab
    CMP dword ptr [EBX + 0xbed0],0x1    ; 005fa931
    JNZ 0x005fa9ab                      ; 005fa938
        ;   XREF to: 005fa9ab (CONDITIONAL_JUMP)  ; LAB_005fa9ab
    MOV EDX,0x3f800000                  ; 005fa93a
    MOV EAX,ECX                         ; 005fa93f
    MOV dword ptr [EBP + 0x46],EDX      ; 005fa941
    TEST ECX,ECX                        ; 005fa944
    JZ 0x005fa9a5                       ; 005fa946
        ;   XREF to: 005fa9a5 (CONDITIONAL_JUMP)  ; LAB_005fa9a5
    LEA EDX,[EBP + 0xfffffdbe]          ; 005fa948
    PUSH EDX                            ; 005fa94e
    MOV ECX,dword ptr [ECX + 0x154]     ; 005fa94f
    PUSH EAX                            ; 005fa955
    CALL dword ptr [ECX + 0x14]         ; 005fa956
    MOV ESI,EAX                         ; 005fa959
    ADD EAX,0xc                         ; 005fa95b
    ADD ESP,0x8                         ; 005fa95e
    MOV dword ptr [EBP + 0x76],EAX      ; 005fa961
    LEA EAX,[EBP + 0xfffffef6]          ; 005fa964
    PUSH EAX                            ; 005fa96a
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 005fa96b
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    MOV EAX,dword ptr [EBP + 0x76]      ; 005fa970
    FLD float ptr [EAX]                 ; 005fa973
    FSUB float ptr [ESI]                ; 005fa975
    FSTP float ptr [EBP + 0xfffffef6]   ; 005fa977
    FLD float ptr [EAX + 0x4]           ; 005fa97d
    FSUB float ptr [ESI + 0x4]          ; 005fa980
    FSTP float ptr [EBP + 0xfffffefa]   ; 005fa983
    FLD float ptr [EAX + 0x8]           ; 005fa989
    FSUB float ptr [ESI + 0x8]          ; 005fa98c
    FST float ptr [EBP + 0xfffffefe]    ; 005fa98f
    FMUL double ptr [0x00658785]        ; 005fa995 | DOUBLE_00658785
    FLD1                                ; 005fa99b
    FADDP                               ; 005fa99d
    ADD ESP,0x4                         ; 005fa99f
    FSTP float ptr [EBP + 0x46]         ; 005fa9a2
    MOV EAX,dword ptr [EBP + 0x46]      ; 005fa9a5
        ;   Label: LAB_005fa9a5
    MOV dword ptr [EBP + 0x3a],EAX      ; 005fa9a8
    PUSH 0x3eb2b8c2                     ; 005fa9ab
        ;   Label: LAB_005fa9ab
    PUSH 0x3f8ccccd                     ; 005fa9b0
    XOR ECX,ECX                         ; 005fa9b5
    MOV EAX,dword ptr [EBP + 0x3a]      ; 005fa9b7
    MOV dword ptr [EBP + 0xfffffe8a],ECX ; 005fa9ba
    MOV dword ptr [EBP + 0xfffffe92],EAX ; 005fa9c0
    LEA EAX,[EBP + 0xfffffe8a]          ; 005fa9c6
    MOV dword ptr [EBP + 0xfffffe8e],ECX ; 005fa9cc
    PUSH EAX                            ; 005fa9d2
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fa9d3
    PUSH EAX                            ; 005fa9d9
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fa9da
    CALL dword ptr [EDX + 0xbc]         ; 005fa9e0
    ADD ESP,0x4                         ; 005fa9e6
    PUSH EAX                            ; 005fa9e9
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fa9ea
    ADD EAX,0x20                        ; 005fa9f0
    PUSH EAX                            ; 005fa9f3
    PUSH EBX                            ; 005fa9f4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 005fa9f5
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005fa9fa
    LEA ESI,[EBX + 0x158]               ; 005fa9fd
    TEST EAX,EAX                        ; 005faa03
    JL 0x005faa7a                       ; 005faa05
        ;   XREF to: 005faa7a (CONDITIONAL_JUMP)  ; LAB_005faa7a
    JLE 0x005faaf9                      ; 005faa07
        ;   XREF to: 005faaf9 (CONDITIONAL_JUMP)  ; LAB_005faaf9
    TEST EDI,EDI                        ; 005faa0d
    JLE 0x005fa18b                      ; 005faa0f
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD float ptr [EBX + 0xbe38]        ; 005faa15
    FLDZ                                ; 005faa1b
    FCOMPP                              ; 005faa1d
    FNSTSW AX                           ; 005faa1f
    SAHF                                ; 005faa21
    JC 0x005fa18b                       ; 005faa22
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005faa28
    PUSH EAX                            ; 005faa2e
    MOV EDX,dword ptr [EAX + 0x154]     ; 005faa2f
    CALL dword ptr [EDX + 0x108]        ; 005faa35
    ADD ESP,0x4                         ; 005faa3b
    TEST EAX,EAX                        ; 005faa3e
    JNZ 0x005fa18b                      ; 005faa40
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EDX,dword ptr [EBP + 0x4a]      ; 005faa46
    TEST EDX,EDX                        ; 005faa49
    JL 0x005faaa1                       ; 005faa4b
        ;   XREF to: 005faaa1 (CONDITIONAL_JUMP)  ; LAB_005faaa1
    MOV EAX,EDX                         ; 005faa4d
    SHL EAX,0x4                         ; 005faa4f
    ADD EAX,EDX                         ; 005faa52
    CMP dword ptr [EBX + EAX*0x4 + 0x24b4],0x0 ; 005faa54
    JZ 0x005faaa1                       ; 005faa5c
        ;   XREF to: 005faaa1 (CONDITIONAL_JUMP)  ; LAB_005faaa1
    PUSH 0x1                            ; 005faa5e
    PUSH 0x2                            ; 005faa60
    PUSH ESI                            ; 005faa62
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005faa63
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005faa63
    ADD ESP,0xc                         ; 005faa68
    MOV dword ptr [EBX + 0xbe38],0x3f4ccccd ; 005faa6b
    JMP 0x005fa18b                      ; 005faa75
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH EBX                            ; 005faa7a
        ;   Label: LAB_005faa7a
    PUSH 0x658717                       ; 005faa7b | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 005faa80 | g_CConsolePtr
    PUSH EDI                            ; 005faa86 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005faa87
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005faa8c
    PUSH 0x1                            ; 005faa8f
    PUSH 0x0                            ; 005faa91
    PUSH ESI                            ; 005faa93
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005faa94
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005faa99
    JMP 0x005fa18b                      ; 005faa9c
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    CMP dword ptr [EBP + 0x52],0x0      ; 005faaa1
        ;   Label: LAB_005faaa1
    JZ 0x005faae9                       ; 005faaa5
        ;   XREF to: 005faae9 (CONDITIONAL_JUMP)  ; LAB_005faae9
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005faaa7
    PUSH EAX                            ; 005faaad
    MOV EDX,dword ptr [EAX + 0x154]     ; 005faaae
    CALL dword ptr [EDX + 0x120]        ; 005faab4
    ADD ESP,0x4                         ; 005faaba
    TEST EAX,EAX                        ; 005faabd
    JZ 0x005faae9                       ; 005faabf
        ;   XREF to: 005faae9 (CONDITIONAL_JUMP)  ; LAB_005faae9
    PUSH 0x3f000000                     ; 005faac1
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005faac6
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005faacb
    LEA EDX,[EBX + 0x158]               ; 005faace
    TEST EAX,EAX                        ; 005faad4
    JZ 0x005faadf                       ; 005faad6
        ;   XREF to: 005faadf (CONDITIONAL_JUMP)  ; LAB_005faadf
    PUSH 0x1                            ; 005faad8
    PUSH 0x18                           ; 005faada
    PUSH EDX                            ; 005faadc
    JMP 0x005faa63                      ; 005faadd
        ;   XREF to: 005faa63 (UNCONDITIONAL_JUMP)  ; LAB_005faa63
    PUSH 0x1                            ; 005faadf
        ;   Label: LAB_005faadf
    PUSH 0x19                           ; 005faae1
    PUSH EDX                            ; 005faae3
    JMP 0x005faa63                      ; 005faae4
        ;   XREF to: 005faa63 (UNCONDITIONAL_JUMP)  ; LAB_005faa63
    PUSH 0x1                            ; 005faae9
        ;   Label: LAB_005faae9
    PUSH 0x3                            ; 005faaeb
    LEA EAX,[EBX + 0x158]               ; 005faaed
    PUSH EAX                            ; 005faaf3
    JMP 0x005faa63                      ; 005faaf4
        ;   XREF to: 005faa63 (UNCONDITIONAL_JUMP)  ; LAB_005faa63
    MOV EDI,dword ptr [EBX + 0xbed0]    ; 005faaf9
        ;   Label: LAB_005faaf9
    PUSH EDI                            ; 005faaff
    PUSH EBX                            ; 005fab00
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00 ; 005fab01
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie * this_ptr, int object_shape_type)
    LEA EDX,[EBX + 0x20]                ; 005fab06
    MOV EDI,EAX                         ; 005fab09
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fab0b
    FLD float ptr [EDX]                 ; 005fab11
    FSUB float ptr [EAX + 0x20]         ; 005fab13
    FSTP float ptr [EBP + 0xfffffede]   ; 005fab16
    FLD float ptr [EDX + 0x4]           ; 005fab1c
    FSUB float ptr [EAX + 0x24]         ; 005fab1f
    FST float ptr [EBP + 0xfffffee2]    ; 005fab22
    FMUL float ptr [EBP + 0xfffffee2]   ; 005fab28
    FLD float ptr [EBP + 0xfffffede]    ; 005fab2e
    FMUL ST0                            ; 005fab34
    FLD float ptr [EDX + 0x8]           ; 005fab36
    FSUB float ptr [EAX + 0x28]         ; 005fab39
    FXCH                                ; 005fab3c
    FADDP ST2,ST0                       ; 005fab3e
    FST float ptr [EBP + 0xfffffee6]    ; 005fab40
    FMUL float ptr [EBP + 0xfffffee6]   ; 005fab46
    FADDP                               ; 005fab4c
    FSQRT                               ; 005fab4e
    ADD ESP,0x8                         ; 005fab50
    FCOMP double ptr [0x006587ad]       ; 005fab53 | DOUBLE_006587ad
    FNSTSW AX                           ; 005fab59
    SAHF                                ; 005fab5b
    JNC 0x005fa18b                      ; 005fab5c
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fab62
    ADD EAX,0x20                        ; 005fab68
    PUSH EAX                            ; 005fab6b
    LEA EAX,[EBP + 0xfffffe7e]          ; 005fab6c
    PUSH EAX                            ; 005fab72
    PUSH EBX                            ; 005fab73
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005fab74
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005fab79
    PUSH EAX                            ; 005fab7c
    LEA EAX,[EBP + 0xfffffe72]          ; 005fab7d
    PUSH EAX                            ; 005fab83
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005fab84
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 005fab89
    FABS                                ; 005fab8c
    ADD ESP,0x8                         ; 005fab8e
    FCOMP double ptr [0x006587b5]       ; 005fab91 | DOUBLE_006587b5
    FNSTSW AX                           ; 005fab97
    SAHF                                ; 005fab99
    JNC 0x005fa18b                      ; 005fab9a
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    TEST EDI,EDI                        ; 005faba0
    JL 0x005fa18b                       ; 005faba2
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EDX,dword ptr [EBX + 0xbed0]    ; 005faba8
    CMP EDX,0x2                         ; 005fabae
    JC 0x005fa18b                       ; 005fabb1
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EAX,EDI                         ; 005fabb7
    SHL EAX,0x4                         ; 005fabb9
    ADD EAX,EDI                         ; 005fabbc
    SHL EAX,0x2                         ; 005fabbe
    ADD EAX,EBX                         ; 005fabc1
    CMP EDX,0x2                         ; 005fabc3
    JA 0x005fac2f                       ; 005fabc6
        ;   XREF to: 005fac2f (CONDITIONAL_JUMP)  ; LAB_005fac2f
    CMP dword ptr [EAX + 0x24b4],0x0    ; 005fabc8
    JZ 0x005fa18b                       ; 005fabcf
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH EBX                            ; 005fabd5
    PUSH 0x658744                       ; 005fabd6 | = "%s lugging\n"
    MOV EAX,[0x0066e8e0]                ; 005fabdb | g_CConsolePtr
    PUSH EAX                            ; 005fabe0 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fabe1
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005fabe6
    PUSH 0x1                            ; 005fabe9
    PUSH 0xd                            ; 005fabeb
    PUSH ESI                            ; 005fabed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fabee
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fabf3
    JMP 0x005fa18b                      ; 005fabf6
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    CMP dword ptr [EAX + 0x24b4],0x0    ; 005fabfb
        ;   Label: LAB_005fabfb
    JZ 0x005fa18b                       ; 005fac02
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH EBX                            ; 005fac08
    PUSH 0x658738                       ; 005fac09 | = "%s tossing\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005fac0e | g_CConsolePtr
    PUSH ECX                            ; 005fac14 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fac15
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005fac1a
    PUSH 0x1                            ; 005fac1d
    PUSH 0xb                            ; 005fac1f
    PUSH ESI                            ; 005fac21
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fac22
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fac27
    JMP 0x005fa18b                      ; 005fac2a
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    CMP EDX,0x3                         ; 005fac2f
        ;   Label: LAB_005fac2f
    JZ 0x005fabfb                       ; 005fac32
        ;   XREF to: 005fabfb (CONDITIONAL_JUMP)  ; LAB_005fabfb
    JMP 0x005fa18b                      ; 005fac34
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005fac39
        ;   Label: LAB_005fac39
    TEST ECX,ECX                        ; 005fac3f
    JZ 0x005fa85e                       ; 005fac41
        ;   XREF to: 005fa85e (CONDITIONAL_JUMP)  ; LAB_005fa85e
    PUSH ECX                            ; 005fac47
    MOV EDX,dword ptr [ECX + 0x154]     ; 005fac48
    CALL dword ptr [EDX + 0x120]        ; 005fac4e
    ADD ESP,0x4                         ; 005fac54
    TEST EAX,EAX                        ; 005fac57
    JG 0x005fa85e                       ; 005fac59
        ;   XREF to: 005fa85e (CONDITIONAL_JUMP)  ; LAB_005fa85e
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fac5f
    PUSH EAX                            ; 005fac65
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fac66
    CALL dword ptr [EDX + 0x108]        ; 005fac6c
    ADD ESP,0x4                         ; 005fac72
    TEST EAX,EAX                        ; 005fac75
    JNZ 0x005fac8e                      ; 005fac77
        ;   XREF to: 005fac8e (CONDITIONAL_JUMP)  ; LAB_005fac8e
    MOV ESI,0x40400000                  ; 005fac79
    MOV EAX,[0x006659c8]                ; 005fac7e | FLOAT_006659c8
    MOV dword ptr [EBP + 0x3e],ESI      ; 005fac83
    MOV dword ptr [EBP + 0x56],EAX      ; 005fac86
    JMP 0x005fa18b                      ; 005fac89
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    CMP EAX,EBX                         ; 005fac8e
        ;   Label: LAB_005fac8e
    JZ 0x005fa18b                       ; 005fac90
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH EBX                            ; 005fac96
        ;   Label: LAB_005fac96
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005fac97
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005fac9c
    JMP 0x005fa18b                      ; 005fac9f
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 005faca4
        ;   Label: LAB_005faca4
    JZ 0x005fac96                       ; 005facab
        ;   XREF to: 005fac96 (CONDITIONAL_JUMP)  ; LAB_005fac96
    PUSH 0x1                            ; 005facad
    PUSH EBX                            ; 005facaf
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00 ; 005facb0
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005facb5
    MOV ESI,EAX                         ; 005facb8
    TEST EAX,EAX                        ; 005facba
    JL 0x005fade4                       ; 005facbc
        ;   XREF to: 005fade4 (CONDITIONAL_JUMP)  ; LAB_005fade4
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005facc2
    PUSH EAX                            ; 005facc8
    MOV EDX,dword ptr [EAX + 0x154]     ; 005facc9
    CALL dword ptr [EDX + 0x120]        ; 005faccf
    ADD ESP,0x4                         ; 005facd5
    TEST EAX,EAX                        ; 005facd8
    JG 0x005fade4                       ; 005facda
        ;   XREF to: 005fade4 (CONDITIONAL_JUMP)  ; LAB_005fade4
    MOV EDX,ESI                         ; 005face0
    MOV EAX,EDX                         ; 005face2
    SHL EAX,0x4                         ; 005face4
    ADD EAX,EDX                         ; 005face7
    CMP dword ptr [EBX + EAX*0x4 + 0x24b4],0x0 ; 005face9
    JZ 0x005fade4                       ; 005facf1
        ;   XREF to: 005fade4 (CONDITIONAL_JUMP)  ; LAB_005fade4
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005facf7
    PUSH EAX                            ; 005facfd
    MOV EDX,dword ptr [EAX + 0x154]     ; 005facfe
    CALL dword ptr [EDX + 0x108]        ; 005fad04
    ADD ESP,0x4                         ; 005fad0a
    TEST EAX,EAX                        ; 005fad0d
    JNZ 0x005fade4                      ; 005fad0f
        ;   XREF to: 005fade4 (CONDITIONAL_JUMP)  ; LAB_005fade4
    MOV EAX,ESI                         ; 005fad15
    SHL EAX,0x4                         ; 005fad17
    ADD EAX,ESI                         ; 005fad1a
    MOV ECX,0x3f800000                  ; 005fad1c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24b4] ; 005fad21
    MOV dword ptr [EBP + 0x4e],ECX      ; 005fad28
    TEST EAX,EAX                        ; 005fad2b
    JZ 0x005fad94                       ; 005fad2d
        ;   XREF to: 005fad94 (CONDITIONAL_JUMP)  ; LAB_005fad94
    LEA EDX,[EBP + 0xfffffd8e]          ; 005fad2f
    PUSH EDX                            ; 005fad35
    MOV ECX,dword ptr [EAX + 0x154]     ; 005fad36
    PUSH EAX                            ; 005fad3c
    CALL dword ptr [ECX + 0x14]         ; 005fad3d
    ADD ESP,0x8                         ; 005fad40
    MOV ESI,EAX                         ; 005fad43
    LEA EAX,[EBP + 0xfffffe96]          ; 005fad45
    PUSH EAX                            ; 005fad4b
    LEA EDI,[ESI + 0xc]                 ; 005fad4c
    MOV dword ptr [EBP + 0x22],EAX      ; 005fad4f
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 005fad52
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [EDI]                 ; 005fad57
    FSUB float ptr [ESI]                ; 005fad59
    FSTP float ptr [EBP + 0xfffffe96]   ; 005fad5b
    FLD float ptr [EDI + 0x4]           ; 005fad61
    FSUB float ptr [ESI + 0x4]          ; 005fad64
    FSTP float ptr [EBP + 0xfffffe9a]   ; 005fad67
    FLD float ptr [EDI + 0x8]           ; 005fad6d
    FSUB float ptr [ESI + 0x8]          ; 005fad70
    MOV EAX,dword ptr [EBP + 0x22]      ; 005fad73
    FSTP float ptr [EBP + 0xfffffe9e]   ; 005fad76
    FLD float ptr [EAX + 0x8]           ; 005fad7c
    FMUL double ptr [0x00658785]        ; 005fad7f | DOUBLE_00658785
    FLD float ptr [EBP + 0x4e]          ; 005fad85
    FXCH                                ; 005fad88
    FADD ST0,ST1                        ; 005fad8a
    ADD ESP,0x4                         ; 005fad8c
    FSTP ST1                            ; 005fad8f
    FSTP float ptr [EBP + 0x4e]         ; 005fad91
    MOV EAX,dword ptr [EBP + 0x4e]      ; 005fad94
        ;   Label: LAB_005fad94
    MOV dword ptr [EBP + 0x56],EAX      ; 005fad97
    LEA EAX,[EBX + 0x158]               ; 005fad9a
    PUSH EAX                            ; 005fada0
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 005fada1
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    FLD1                                ; 005fada6
    MOV dword ptr [EBP + 0x76],EAX      ; 005fada8
    ADD ESP,0x4                         ; 005fadab
    MOV EAX,dword ptr [EBP + 0x76]      ; 005fadae
    MOV dword ptr [EBP + 0x36],EAX      ; 005fadb1
    FLD float ptr [EBP + 0x36]          ; 005fadb4
    FSTP double ptr [EBP + 0x2]         ; 005fadb7
    FCOMP double ptr [EBP + 0x2]        ; 005fadba
    FNSTSW AX                           ; 005fadbd
    SAHF                                ; 005fadbf
    JA 0x005fa18b                       ; 005fadc0
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD double ptr [EBP + 0x2]          ; 005fadc6
    FCOMP double ptr [0x006587a5]       ; 005fadc9 | DOUBLE_006587a5
    FNSTSW AX                           ; 005fadcf
    SAHF                                ; 005fadd1
    JA 0x005fa18b                       ; 005fadd2
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV dword ptr [EBP + 0x42],0x1      ; 005fadd8
    JMP 0x005fa18b                      ; 005faddf
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH EBX                            ; 005fade4
        ;   Label: LAB_005fade4
    PUSH 0x658750                       ; 005fade5 | = "%s gave up swing\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 005fadea | g_CConsolePtr
    PUSH EDI                            ; 005fadf0 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005fadf1
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005fadf6
    PUSH EBX                            ; 005fadf9
    CALL core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10 ; 005fadfa
        ;   XREF to: 005fca10 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_CZombie_resetChaseState_FUN_005fca10(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005fadff
    JMP 0x005fa18b                      ; 005fae02
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH dword ptr [EBP + 0x92]         ; 005fae07
        ;   Label: LAB_005fae07
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fae0d
    PUSH EBX                            ; 005fae13
    CALL dword ptr [EAX + 0x158]        ; 005fae14
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fae1a
    ADD ESP,0x8                         ; 005fae20
    TEST EAX,EAX                        ; 005fae23
    JZ 0x005fa18b                       ; 005fae25
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD float ptr [ESI]                 ; 005fae2b
    FSUB float ptr [EAX + 0x20]         ; 005fae2d
    FMUL ST0                            ; 005fae30
    FLD float ptr [ESI + 0x8]           ; 005fae32
    FSUB float ptr [EAX + 0x28]         ; 005fae35
    FMUL ST0                            ; 005fae38
    MOV EDX,EAX                         ; 005fae3a
    FADDP                               ; 005fae3c
    ADD EAX,0x20                        ; 005fae3e
    FSQRT                               ; 005fae41
    FCOMP double ptr [0x0065879d]       ; 005fae43 | DOUBLE_0065879d
    FNSTSW AX                           ; 005fae49
    SAHF                                ; 005fae4b
    JA 0x005fa18b                       ; 005fae4c
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    FLD float ptr [EBX + 0x24]          ; 005fae52
    FSUB float ptr [EDX + 0x24]         ; 005fae55
    FABS                                ; 005fae58
    FCOMP double ptr [0x006587a5]       ; 005fae5a | DOUBLE_006587a5
    FNSTSW AX                           ; 005fae60
    SAHF                                ; 005fae62
    JA 0x005fa18b                       ; 005fae63
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    PUSH 0x1                            ; 005fae69
    PUSH 0x0                            ; 005fae6b
    PUSH EDI                            ; 005fae6d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fae6e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005fae73
    JMP 0x005fa18b                      ; 005fae76
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    MOV EDX,0xbf800000                  ; 005fae7b
        ;   Label: LAB_005fae7b
    MOV ECX,0x3e99999a                  ; 005fae80
    PUSH EDI                            ; 005fae85
    MOV dword ptr [EBP + 0x56],EDX      ; 005fae86
    MOV dword ptr [EBP + 0x3e],ECX      ; 005fae89
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005fae8c
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005fae91
    ADD ESP,0x4                         ; 005fae94
    CMP EAX,0x8                         ; 005fae97
    JNC 0x005faeae                      ; 005fae9a
        ;   XREF to: 005faeae (CONDITIONAL_JUMP)  ; LAB_005faeae
    CMP EAX,0x1                         ; 005fae9c
    JNC 0x005faef6                      ; 005fae9f
        ;   XREF to: 005faef6 (CONDITIONAL_JUMP)  ; LAB_005faef6
    TEST EAX,EAX                        ; 005faea1
    JZ 0x005fa64e                       ; 005faea3
        ;   XREF to: 005fa64e (CONDITIONAL_JUMP)  ; LAB_005fa64e
    JMP 0x005fa18b                      ; 005faea9
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    JBE 0x005fa5ee                      ; 005faeae
        ;   XREF to: 005fa5ee (CONDITIONAL_JUMP)  ; LAB_005fa5ee
        ;   Label: LAB_005faeae
    LEA ESI,[EBX + 0x20]                ; 005faeb4
    CMP EAX,0x18                        ; 005faeb7
    JNC 0x005faed9                      ; 005faeba
        ;   XREF to: 005faed9 (CONDITIONAL_JUMP)  ; LAB_005faed9
    CMP EAX,0xe                         ; 005faebc
    JC 0x005fa18b                       ; 005faebf
        ;   XREF to: 005fa18b (CONDITIONAL_JUMP)  ; LAB_005fa18b
    JBE 0x005fa4ab                      ; 005faec5
        ;   XREF to: 005fa4ab (CONDITIONAL_JUMP)  ; LAB_005fa4ab
    CMP EAX,0x14                        ; 005faecb
    JZ 0x005fae07                       ; 005faece
        ;   XREF to: 005fae07 (CONDITIONAL_JUMP)  ; LAB_005fae07
    JMP 0x005fa18b                      ; 005faed4
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    JBE 0x005fa167                      ; 005faed9
        ;   XREF to: 005fa167 (CONDITIONAL_JUMP)  ; LAB_005fa167
        ;   Label: LAB_005faed9
    CMP EAX,0x19                        ; 005faedf
    JBE 0x005fa167                      ; 005faee2
        ;   XREF to: 005fa167 (CONDITIONAL_JUMP)  ; LAB_005fa167
    CMP EAX,0x1c                        ; 005faee8
    JZ 0x005fa291                       ; 005faeeb
        ;   XREF to: 005fa291 (CONDITIONAL_JUMP)  ; LAB_005fa291
    JMP 0x005fa18b                      ; 005faef1
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    JBE 0x005fa7ac                      ; 005faef6
        ;   XREF to: 005fa7ac (CONDITIONAL_JUMP)  ; LAB_005fa7ac
        ;   Label: LAB_005faef6
    CMP EAX,0x2                         ; 005faefc
    JBE 0x005faca4                      ; 005faeff
        ;   XREF to: 005faca4 (CONDITIONAL_JUMP)  ; LAB_005faca4
    CMP EAX,0x3                         ; 005faf05
    JZ 0x005fac39                       ; 005faf08
        ;   XREF to: 005fac39 (CONDITIONAL_JUMP)  ; LAB_005fac39
    JMP 0x005fa18b                      ; 005faf0e
        ;   XREF to: 005fa18b (UNCONDITIONAL_JUMP)  ; LAB_005fa18b
    CMP EAX,0xf                         ; 005faf13
        ;   Label: LAB_005faf13
    JNZ 0x005faf52                      ; 005faf16
        ;   XREF to: 005faf52 (CONDITIONAL_JUMP)  ; LAB_005faf52
    PUSH ESI                            ; 005faf18
    LEA EAX,[EBP + 0xffffff1a]          ; 005faf19
    PUSH EAX                            ; 005faf1f
    PUSH EBX                            ; 005faf20
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005faf21
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 005faf26
    LEA EAX,[EBX + 0x20]                ; 005faf28
    FLD float ptr [EDX]                 ; 005faf2b
    FADD float ptr [EAX]                ; 005faf2d
    FSTP float ptr [EAX]                ; 005faf2f
    FLD float ptr [EDX + 0x4]           ; 005faf31
    FADD float ptr [EAX + 0x4]          ; 005faf34
    FSTP float ptr [EAX + 0x4]          ; 005faf37
    FLD float ptr [EDX + 0x8]           ; 005faf3a
    FADD float ptr [EAX + 0x8]          ; 005faf3d
    FSTP float ptr [EAX + 0x8]          ; 005faf40
    MOV dword ptr [ESI + 0x8],0x0       ; 005faf43
    ADD ESP,0xc                         ; 005faf4a
    JMP 0x005f9f17                      ; 005faf4d
        ;   XREF to: 005f9f17 (UNCONDITIONAL_JUMP)  ; LAB_005f9f17
    PUSH EBX                            ; 005faf52
        ;   Label: LAB_005faf52
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 005faf53
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005faf58
    TEST EAX,EAX                        ; 005faf5b
    JZ 0x005f9f22                       ; 005faf5d
        ;   XREF to: 005f9f22 (CONDITIONAL_JUMP)  ; LAB_005f9f22
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005faf63
    TEST EAX,EAX                        ; 005faf69
    JZ 0x005faf97                       ; 005faf6b
        ;   XREF to: 005faf97 (CONDITIONAL_JUMP)  ; LAB_005faf97
    PUSH EAX                            ; 005faf6d
    MOV EDX,dword ptr [EAX + 0x154]     ; 005faf6e
    CALL dword ptr [EDX + 0x108]        ; 005faf74
    ADD ESP,0x4                         ; 005faf7a
    CMP EAX,EBX                         ; 005faf7d
    JNZ 0x005faf97                      ; 005faf7f
        ;   XREF to: 005faf97 (CONDITIONAL_JUMP)  ; LAB_005faf97
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005faf81
    PUSH EDX                            ; 005faf87
    MOV ECX,dword ptr [0x006810c8]      ; 005faf88 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005faf8e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005faf8f
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005faf94
    FLD float ptr [EBP + 0x92]          ; 005faf97
        ;   Label: LAB_005faf97
    FLD ST0                             ; 005faf9d
    FMUL double ptr [0x006587f5]        ; 005faf9f | DOUBLE_006587f5
    FLD float ptr [EBX + 0x242c]        ; 005fafa5
    FXCH                                ; 005fafab
    FSUBR ST0,ST1                       ; 005fafad
    LEA ECX,[EBX + 0x2428]              ; 005fafaf
    FSTP ST1                            ; 005fafb5
    FSTP float ptr [EBX + 0x242c]       ; 005fafb7
    FLD float ptr [ECX]                 ; 005fafbd
    FMUL ST1                            ; 005fafbf
    FSTP float ptr [EBP + 0xfffffe2a]   ; 005fafc1
    FLD float ptr [ECX + 0x4]           ; 005fafc7
    FMUL ST1                            ; 005fafca
    LEA EAX,[EBX + 0x241c]              ; 005fafcc
    FSTP float ptr [EBP + 0xfffffe2e]   ; 005fafd2
    FMUL float ptr [ECX + 0x8]          ; 005fafd8
    LEA EDX,[EBX + 0x23ac]              ; 005fafdb
    FLD float ptr [EBP + 0xfffffe2a]    ; 005fafe1
    FXCH                                ; 005fafe7
    FSTP float ptr [EBP + 0xfffffe32]   ; 005fafe9
    FADD float ptr [EAX]                ; 005fafef
    FLD float ptr [EBP + 0xfffffe2e]    ; 005faff1
    FXCH                                ; 005faff7
    FSTP float ptr [EBP + 0xffffff7a]   ; 005faff9
    FADD float ptr [EAX + 0x4]          ; 005fafff
    FLD float ptr [EBP + 0xfffffe32]    ; 005fb002
    FXCH                                ; 005fb008
    FSTP float ptr [EBP + 0xffffff7e]   ; 005fb00a
    FADD float ptr [EAX + 0x8]          ; 005fb010 | DAT_00002424
    FLD float ptr [EBP + 0xffffff7a]    ; 005fb013
    FXCH                                ; 005fb019
    FSTP float ptr [EBP + -0x7e]        ; 005fb01b
    FADD float ptr [EDX]                ; 005fb01e
    FLD float ptr [EBP + 0xffffff7e]    ; 005fb020
    FXCH                                ; 005fb026
    FSTP float ptr [EBP + 0xfffffe06]   ; 005fb028
    FADD float ptr [EDX + 0x4]          ; 005fb02e
    FLD float ptr [EBP + -0x7e]         ; 005fb031
    FXCH                                ; 005fb034
    FSTP float ptr [EBP + 0xfffffe0a]   ; 005fb036
    FADD float ptr [EDX + 0x8]          ; 005fb03c
    FSTP float ptr [EBP + 0xfffffe0e]   ; 005fb03f
    MOV dword ptr [EAX + 0x8],0x0       ; 005fb045 | DAT_00002424
    MOV ECX,dword ptr [EAX + 0x8]       ; 005fb04c | DAT_00002424
    MOV dword ptr [EAX + 0x4],ECX       ; 005fb04f
    MOV ECX,dword ptr [EAX + 0x4]       ; 005fb052
    MOV dword ptr [EAX],ECX             ; 005fb055
    MOV dword ptr [EDX + 0x8],0x0       ; 005fb057
    LEA EAX,[EBP + 0xfffffe06]          ; 005fb05e
    FLD float ptr [EDX + 0x8]           ; 005fb064
    PUSH EAX                            ; 005fb067
    FST float ptr [EDX + 0x4]           ; 005fb068
    PUSH EBX                            ; 005fb06b
    FSTP float ptr [EDX]                ; 005fb06c
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 005fb06e
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005fb073
    CMP EDI,0x1                         ; 005fb076
    JNZ 0x005f9f22                      ; 005fb079
        ;   XREF to: 005f9f22 (CONDITIONAL_JUMP)  ; LAB_005f9f22
    MOV ESI,dword ptr [0x02c14d14]      ; 005fb07f | g_CDoorClassInfo.name_hash
    PUSH ESI                            ; 005fb085
    MOV EAX,[0x00823c50]                ; 005fb086 | g_LastCollisionActor
    PUSH EAX                            ; 005fb08b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005fb08c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 005fb091
    ADD ESP,0x8                         ; 005fb093
    MOV dword ptr [EBP + 0x32],EAX      ; 005fb096
    TEST EAX,EAX                        ; 005fb099
    JZ 0x005f9f22                       ; 005fb09b
        ;   XREF to: 005f9f22 (CONDITIONAL_JUMP)  ; LAB_005f9f22
    LEA EDX,[EBP + 0xfffffdd6]          ; 005fb0a1
    PUSH EDX                            ; 005fb0a7
    MOV EAX,dword ptr [EAX + 0x154]     ; 005fb0a8
    PUSH ESI                            ; 005fb0ae
    CALL dword ptr [EAX + 0x14]         ; 005fb0af
    LEA EDX,[EAX + 0xc]                 ; 005fb0b2
    FLD float ptr [EAX]                 ; 005fb0b5
    FADD float ptr [EDX]                ; 005fb0b7
    FST float ptr [EBP + -0x32]         ; 005fb0b9
    FLD float ptr [EAX + 0x4]           ; 005fb0bc
    FADD float ptr [EDX + 0x4]          ; 005fb0bf
    FXCH                                ; 005fb0c2
    FLD float ptr [0x006587c5]          ; 005fb0c4 | FLOAT_006587c5
    FXCH                                ; 005fb0ca
    FMUL ST1                            ; 005fb0cc
    FXCH ST2                            ; 005fb0ce
    FST float ptr [EBP + -0x2e]         ; 005fb0d0
    FMUL ST1                            ; 005fb0d3
    ADD ESP,0x8                         ; 005fb0d5
    FLD float ptr [EAX + 0x8]           ; 005fb0d8
    FADD float ptr [EDX + 0x8]          ; 005fb0db
    LEA EAX,[EBP + 0xffffff26]          ; 005fb0de
    FST float ptr [EBP + -0x2a]         ; 005fb0e4
    FMULP ST2                           ; 005fb0e7
    PUSH EAX                            ; 005fb0e9
    LEA EAX,[EBP + 0xffffff0e]          ; 005fb0ea
    FXCH ST2                            ; 005fb0f0
    FSTP float ptr [EBP + 0xffffff26]   ; 005fb0f2
    PUSH EAX                            ; 005fb0f8
    FXCH                                ; 005fb0f9
    FSTP float ptr [EBP + 0xffffff2a]   ; 005fb0fb
    PUSH ESI                            ; 005fb101
    FSTP float ptr [EBP + 0xffffff2e]   ; 005fb102
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005fb108
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005fb10d
    LEA EAX,[EBP + 0xffffff0e]          ; 005fb110
    PUSH EAX                            ; 005fb116
    LEA EAX,[EBP + 0xffffff4a]          ; 005fb117
    PUSH EAX                            ; 005fb11d
    PUSH EBX                            ; 005fb11e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005fb11f
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005fb124
    PUSH EAX                            ; 005fb127
    LEA EAX,[EBP + 0xffffff62]          ; 005fb128
    PUSH EAX                            ; 005fb12e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005fb12f
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 005fb134
    FABS                                ; 005fb137
    ADD ESP,0x8                         ; 005fb139
    FCOMP double ptr [0x006587fd]       ; 005fb13c | DOUBLE_006587fd
    FNSTSW AX                           ; 005fb142
    SAHF                                ; 005fb144
    JNC 0x005f9f22                      ; 005fb145
        ;   XREF to: 005f9f22 (CONDITIONAL_JUMP)  ; LAB_005f9f22
    PUSH 0x3f000000                     ; 005fb14b
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005fb150
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    MOV ESI,0x12                        ; 005fb155
    ADD ESP,0x4                         ; 005fb15a
    TEST EAX,EAX                        ; 005fb15d
    JZ 0x005fb166                       ; 005fb15f
        ;   XREF to: 005fb166 (CONDITIONAL_JUMP)  ; LAB_005fb166
    MOV ESI,0x13                        ; 005fb161
    PUSH 0x1                            ; 005fb166
        ;   Label: LAB_005fb166
    PUSH ESI                            ; 005fb168
    LEA EAX,[EBX + 0x158]               ; 005fb169
    PUSH EAX                            ; 005fb16f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005fb170
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x32]      ; 005fb175
    ADD ESP,0xc                         ; 005fb178
    MOV dword ptr [EBX + 0xbed8],EAX    ; 005fb17b
    JMP 0x005f9f22                      ; 005fb181
        ;   XREF to: 005f9f22 (UNCONDITIONAL_JUMP)  ; LAB_005f9f22
    MOV ESI,dword ptr [EBX + 0xbf74]    ; 005fb186
        ;   Label: LAB_005fb186
    PUSH 0x3f000000                     ; 005fb18c
    PUSH ESI                            ; 005fb191
    PUSH EAX                            ; 005fb192
    JMP 0x005fa014                      ; 005fb193
        ;   XREF to: 005fa014 (UNCONDITIONAL_JUMP)  ; LAB_005fa014
    MOV EAX,dword ptr [EBX + 0xbf8c]    ; 005fb198
        ;   Label: LAB_005fb198
    SHL EAX,0x2                         ; 005fb19e
    ADD EAX,EBX                         ; 005fb1a1
    CMP dword ptr [EAX + 0x2298],0x0    ; 005fb1a3
    JZ 0x005fa02a                       ; 005fb1aa
        ;   XREF to: 005fa02a (CONDITIONAL_JUMP)  ; LAB_005fa02a
    MOV dword ptr [EAX + 0x2298],0x0    ; 005fb1b0
    MOV EDI,dword ptr [EBX + 0xbf74]    ; 005fb1ba
    PUSH 0x3e4ccccd                     ; 005fb1c0
    PUSH EDI                            ; 005fb1c5
    MOV EAX,dword ptr [EBX + 0xbf8c]    ; 005fb1c6
    PUSH EAX                            ; 005fb1cc
    PUSH EBX                            ; 005fb1cd
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 005fb1ce
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbf8c]    ; 005fb1d3
    ADD ESP,0x10                        ; 005fb1d9
    MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x1 ; 005fb1dc
    JMP 0x005fa02a                      ; 005fb1e7
        ;   XREF to: 005fa02a (UNCONDITIONAL_JUMP)  ; LAB_005fa02a

