; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004ab450(CGhoul *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_go_berzerk_00584e45
;   TerminatedCString s_ghoul_die_wav_1_6_00584e51
;   TerminatedCString s_guul_flinch_d_00584e68
;   TerminatedCString s_ghoul_mad_wav_00584e76
;   double DOUBLE_00584e8d = 65536
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CConsole g_CConsole_0077ad0c
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_shatter_FUN_00427a60
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab450
        ;   Label: core_ghoul.cpp_CGhoul_processDamage_FUN_004ab450
    PUSH ESI                            ; 004ab451
    PUSH EDI                            ; 004ab452
    PUSH EBP                            ; 004ab453
    MOV EBP,ESP                         ; 004ab454
    SUB ESP,0x68                        ; 004ab456
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ab459
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ab45c
    MOV EDX,dword ptr [EBX + 0xbd74]    ; 004ab45f
    PUSH EDX                            ; 004ab465
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004ab466
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0xbd84]    ; 004ab46b
    ADD ESP,0x4                         ; 004ab471
    TEST ECX,ECX                        ; 004ab474
    JNZ 0x004ab62a                      ; 004ab476
        ;   XREF to: 004ab62a (CONDITIONAL_JUMP)  ; LAB_004ab62a
    CMP dword ptr [EDI + 0x30],0x6c     ; 004ab47c
        ;   Label: LAB_004ab47c
    JNZ 0x004ab48c                      ; 004ab480
        ;   XREF to: 004ab48c (CONDITIONAL_JUMP)  ; LAB_004ab48c
    MOV dword ptr [EBX + 0xbd80],0x40800000 ; 004ab482
    PUSH EDI                            ; 004ab48c
        ;   Label: LAB_004ab48c
    PUSH EBX                            ; 004ab48d
    CALL core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190 ; 004ab48e
        ;   XREF to: 004ab190 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190(CGhoul * this_ptr, SDamageInfo * damage_info)
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004ab493
    ADD ESP,0x8                         ; 004ab499
    TEST EDX,EDX                        ; 004ab49c
    JZ 0x004ab4cc                       ; 004ab49e
        ;   XREF to: 004ab4cc (CONDITIONAL_JUMP)  ; LAB_004ab4cc
    MOV EAX,EDX                         ; 004ab4a0
    PUSH EAX                            ; 004ab4a2
    MOV EDX,dword ptr [EDX + 0x14c]     ; 004ab4a3
    CALL dword ptr [EDX + 0xec]         ; 004ab4a9
    ADD ESP,0x4                         ; 004ab4af
    CMP EAX,EBX                         ; 004ab4b2
    JNZ 0x004ab4cc                      ; 004ab4b4
        ;   XREF to: 004ab4cc (CONDITIONAL_JUMP)  ; LAB_004ab4cc
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004ab4b6
    PUSH EAX                            ; 004ab4bc
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004ab4bd
    CALL dword ptr [EDX + 0xe8]         ; 004ab4c3
    ADD ESP,0x4                         ; 004ab4c9
    FLD float ptr [EDI + 0x4]           ; 004ab4cc
        ;   Label: LAB_004ab4cc
    FSUBR float ptr [EBX + 0x2434]      ; 004ab4cf
    MOV EAX,dword ptr [EBX + 0xbd70]    ; 004ab4d5
    FSTP float ptr [EBX + 0x2434]       ; 004ab4db
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004ab4e1
    TEST ECX,ECX                        ; 004ab4e8
    JZ 0x004ab69e                       ; 004ab4ea
        ;   XREF to: 004ab69e (CONDITIONAL_JUMP)  ; LAB_004ab69e
    FLD float ptr [EBX + 0x2434]        ; 004ab4f0
        ;   Label: LAB_004ab4f0
    FLDZ                                ; 004ab4f6
    LEA EDX,[EBX + 0x150]               ; 004ab4f8
    FCOMPP                              ; 004ab4fe
    FNSTSW AX                           ; 004ab500
    SAHF                                ; 004ab502
    JC 0x004ab70a                       ; 004ab503
        ;   XREF to: 004ab70a (CONDITIONAL_JUMP)  ; LAB_004ab70a
    MOV EAX,dword ptr [EBX + 0xbd14]    ; 004ab509
    MOV dword ptr [EBX + 0x2434],0x0    ; 004ab50f
    TEST EAX,EAX                        ; 004ab519
    JNZ 0x004ab6a9                      ; 004ab51b
        ;   XREF to: 004ab6a9 (CONDITIONAL_JUMP)  ; LAB_004ab6a9
    PUSH EDX                            ; 004ab521
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004ab522
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ab527
    ADD ESP,0x4                         ; 004ab52a
    CMP EAX,0xa                         ; 004ab52d
    JZ 0x004ab619                       ; 004ab530
        ;   XREF to: 004ab619 (CONDITIONAL_JUMP)  ; LAB_004ab619
    CMP EAX,0x9                         ; 004ab536
    JZ 0x004ab619                       ; 004ab539
        ;   XREF to: 004ab619 (CONDITIONAL_JUMP)  ; LAB_004ab619
    MOV EAX,dword ptr [EBX + 0xbd70]    ; 004ab53f
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004ab545
    TEST EDX,EDX                        ; 004ab54c
    JZ 0x004ab6c3                       ; 004ab54e
        ;   XREF to: 004ab6c3 (CONDITIONAL_JUMP)  ; LAB_004ab6c3
    DEC dword ptr [EBX + 0xbd40]        ; 004ab554
    MOV EAX,dword ptr [EBX + 0x2dec]    ; 004ab55a
        ;   Label: LAB_004ab55a
    MOV ESI,0x6                         ; 004ab560
    TEST EAX,EAX                        ; 004ab565
    JLE 0x004ab6eb                      ; 004ab567
        ;   XREF to: 004ab6eb (CONDITIONAL_JUMP)  ; LAB_004ab6eb
    MOV EDX,dword ptr [EBX + 0x2dec]    ; 004ab56d
    XOR EAX,EAX                         ; 004ab573
    TEST EDX,EDX                        ; 004ab575
    JLE 0x004ab592                      ; 004ab577
        ;   XREF to: 004ab592 (CONDITIONAL_JUMP)  ; LAB_004ab592
    MOV EDX,EBX                         ; 004ab579
    MOV ECX,dword ptr [EDX + 0x2df0]    ; 004ab57b
        ;   Label: LAB_004ab57b
    CMP ECX,dword ptr [EBX + 0xbd6c]    ; 004ab581
    JNZ 0x004ab6ce                      ; 004ab587
        ;   XREF to: 004ab6ce (CONDITIONAL_JUMP)  ; LAB_004ab6ce
    MOV ESI,0x8                         ; 004ab58d
        ;   Label: LAB_004ab58d
    PUSH 0x1                            ; 004ab592
        ;   Label: LAB_004ab592
    PUSH ESI                            ; 004ab594
    LEA EAX,[EBX + 0x150]               ; 004ab595
    PUSH EAX                            ; 004ab59b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ab59c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ab5a1
    MOV ESI,dword ptr [EBX + 0xbd7c]    ; 004ab5a4
    PUSH ESI                            ; 004ab5aa
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004ab5ab
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004ab5b0
    TEST EAX,EAX                        ; 004ab5b3
    JNZ 0x004ab5cf                      ; 004ab5b5
        ;   XREF to: 004ab5cf (CONDITIONAL_JUMP)  ; LAB_004ab5cf
    PUSH 0x584e51                       ; 004ab5b7 | = "ghoul-die-!-?.wav @1.6"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004ab5bc
    PUSH EBX                            ; 004ab5c2
    CALL dword ptr [EAX + 0x24]         ; 004ab5c3
    ADD ESP,0x8                         ; 004ab5c6
    MOV dword ptr [EBX + 0xbd7c],EAX    ; 004ab5c9
    PUSH 0x41200000                     ; 004ab5cf
        ;   Label: LAB_004ab5cf
    PUSH 0x40800000                     ; 004ab5d4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004ab5d9
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004ab5de
    FLD float ptr [EBP + -0x4]          ; 004ab5e1
    FMUL double ptr [0x00584e8d]        ; 004ab5e4 | DOUBLE_00584e8d
    ADD ESP,0x8                         ; 004ab5ea
    MOV dword ptr [EBX + 0xbd30],0xa0000 ; 004ab5ed
    PUSH 0x41c80000                     ; 004ab5f7
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004ab5fc
    PUSH 0x32                           ; 004ab602
    CALL crt_math.c_round_FUN_00563a30  ; 004ab604
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EBX                            ; 004ab609
    FISTP dword ptr [EBX + 0xbd2c]      ; 004ab60a
    CALL dword ptr [EAX + 0xa0]         ; 004ab610
    ADD ESP,0xc                         ; 004ab616
    PUSH EDI                            ; 004ab619
        ;   Label: LAB_004ab619
    PUSH EBX                            ; 004ab61a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004ab61b
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004ab620
    MOV ESP,EBP                         ; 004ab623
    POP EBP                             ; 004ab625
    POP EDI                             ; 004ab626
    POP ESI                             ; 004ab627
    POP EBX                             ; 004ab628
    RET                                 ; 004ab629
    LEA EAX,[EBX + 0x150]               ; 004ab62a
        ;   Label: LAB_004ab62a
    PUSH EAX                            ; 004ab630
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004ab631
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ab636
    ADD ESP,0x4                         ; 004ab639
    TEST EAX,EAX                        ; 004ab63c
    JNZ 0x004ab47c                      ; 004ab63e
        ;   XREF to: 004ab47c (CONDITIONAL_JUMP)  ; LAB_004ab47c
    MOV dword ptr [EBX + 0xbd88],0x41f00000 ; 004ab644
    MOV dword ptr [EBX + 0xbd84],EAX    ; 004ab64e
    LEA EAX,[EBX + 0xbd94]              ; 004ab654
    MOV dword ptr [EBX + 0xbd8c],0x1    ; 004ab65a
    LEA EDX,[EBX + 0x20]                ; 004ab664
    MOV dword ptr [EBX + 0xbd90],0x3f800000 ; 004ab667
    CMP EAX,EDX                         ; 004ab671
    JZ 0x004ab685                       ; 004ab673
        ;   XREF to: 004ab685 (CONDITIONAL_JUMP)  ; LAB_004ab685
    MOV ECX,dword ptr [EDX]             ; 004ab675
    MOV dword ptr [EAX],ECX             ; 004ab677
    MOV ECX,dword ptr [EDX + 0x4]       ; 004ab679
    MOV dword ptr [EAX + 0x4],ECX       ; 004ab67c
    MOV ECX,dword ptr [EDX + 0x8]       ; 004ab67f
    MOV dword ptr [EAX + 0x8],ECX       ; 004ab682
    PUSH 0x584e45                       ; 004ab685 | = "go berzerk\n"
        ;   Label: LAB_004ab685
    MOV ESI,dword ptr [0x005ad350]      ; 004ab68a | g_CConsole_PTR_005ad350
    PUSH ESI                            ; 004ab690 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004ab691
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ab696
    JMP 0x004ab47c                      ; 004ab699
        ;   XREF to: 004ab47c (UNCONDITIONAL_JUMP)  ; LAB_004ab47c
    MOV dword ptr [EBX + 0x2434],ECX    ; 004ab69e
        ;   Label: LAB_004ab69e
    JMP 0x004ab4f0                      ; 004ab6a4
        ;   XREF to: 004ab4f0 (UNCONDITIONAL_JUMP)  ; LAB_004ab4f0
    PUSH EBX                            ; 004ab6a9
        ;   Label: LAB_004ab6a9
    CALL core_charactr.cpp_CCharacter_shatter_FUN_00427a60 ; 004ab6aa
        ;   XREF to: 00427a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_shatter_FUN_00427a60(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ab6af
    PUSH EDI                            ; 004ab6b2
    PUSH EBX                            ; 004ab6b3
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004ab6b4
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004ab6b9
    MOV ESP,EBP                         ; 004ab6bc
    POP EBP                             ; 004ab6be
    POP EDI                             ; 004ab6bf
    POP ESI                             ; 004ab6c0
    POP EBX                             ; 004ab6c1
    RET                                 ; 004ab6c2
    MOV dword ptr [EBX + 0xbd40],EDX    ; 004ab6c3
        ;   Label: LAB_004ab6c3
    JMP 0x004ab55a                      ; 004ab6c9
        ;   XREF to: 004ab55a (UNCONDITIONAL_JUMP)  ; LAB_004ab55a
    JZ 0x004ab58d                       ; 004ab6ce
        ;   XREF to: 004ab58d (CONDITIONAL_JUMP)  ; LAB_004ab58d
        ;   Label: LAB_004ab6ce
    INC EAX                             ; 004ab6d4
    MOV ECX,dword ptr [EBX + 0x2dec]    ; 004ab6d5
    ADD EDX,0x38                        ; 004ab6db
    CMP EAX,ECX                         ; 004ab6de
    JL 0x004ab57b                       ; 004ab6e0
        ;   XREF to: 004ab57b (CONDITIONAL_JUMP)  ; LAB_004ab57b
    JMP 0x004ab592                      ; 004ab6e6
        ;   XREF to: 004ab592 (UNCONDITIONAL_JUMP)  ; LAB_004ab592
    PUSH 0x3f000000                     ; 004ab6eb
        ;   Label: LAB_004ab6eb
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004ab6f0
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004ab6f5
    TEST EAX,EAX                        ; 004ab6f8
    JZ 0x004ab592                       ; 004ab6fa
        ;   XREF to: 004ab592 (CONDITIONAL_JUMP)  ; LAB_004ab592
    MOV ESI,0x7                         ; 004ab700
    JMP 0x004ab592                      ; 004ab705
        ;   XREF to: 004ab592 (UNCONDITIONAL_JUMP)  ; LAB_004ab592
    PUSH EDX                            ; 004ab70a
        ;   Label: LAB_004ab70a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004ab70b
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV ECX,dword ptr [EAX + 0x24]      ; 004ab710
    ADD ESP,0x4                         ; 004ab713
    MOV EDX,ECX                         ; 004ab716
    XOR EAX,EAX                         ; 004ab718
    CMP ECX,0x2                         ; 004ab71a
    JNZ 0x004ab724                      ; 004ab71d
        ;   XREF to: 004ab724 (CONDITIONAL_JUMP)  ; LAB_004ab724
    MOV EAX,0x1                         ; 004ab71f
    CMP EDX,0xc                         ; 004ab724
        ;   Label: LAB_004ab724
    JNZ 0x004ab72e                      ; 004ab727
        ;   XREF to: 004ab72e (CONDITIONAL_JUMP)  ; LAB_004ab72e
    MOV EAX,0x1                         ; 004ab729
    CMP EDX,0xb                         ; 004ab72e
        ;   Label: LAB_004ab72e
    JNZ 0x004ab738                      ; 004ab731
        ;   XREF to: 004ab738 (CONDITIONAL_JUMP)  ; LAB_004ab738
    MOV EAX,0x1                         ; 004ab733
    TEST EDX,EDX                        ; 004ab738
        ;   Label: LAB_004ab738
    JNZ 0x004ab7a8                      ; 004ab73a
        ;   XREF to: 004ab7a8 (CONDITIONAL_JUMP)  ; LAB_004ab7a8
    PUSH 0x1                            ; 004ab73c
        ;   Label: LAB_004ab73c
    PUSH 0x3f000000                     ; 004ab73e
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004ab743
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004ab748
    TEST EAX,EAX                        ; 004ab74b
    SETZ AL                             ; 004ab74d
    AND EAX,0xff                        ; 004ab750
    ADD EAX,0x3                         ; 004ab755
    PUSH EAX                            ; 004ab758
    LEA EAX,[EBX + 0x150]               ; 004ab759
    PUSH EAX                            ; 004ab75f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ab760
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ab765
    MOV ESI,dword ptr [EBX + 0xbd78]    ; 004ab768
        ;   Label: LAB_004ab768
    PUSH ESI                            ; 004ab76e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004ab76f
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004ab774
    TEST EAX,EAX                        ; 004ab777
    JNZ 0x004ab619                      ; 004ab779
        ;   XREF to: 004ab619 (CONDITIONAL_JUMP)  ; LAB_004ab619
    PUSH 0x584e76                       ; 004ab77f | = "ghoul-mad-!-?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004ab784
    PUSH EBX                            ; 004ab78a
    CALL dword ptr [EAX + 0x24]         ; 004ab78b
    ADD ESP,0x8                         ; 004ab78e
    MOV dword ptr [EBX + 0xbd78],EAX    ; 004ab791
    PUSH EDI                            ; 004ab797
    PUSH EBX                            ; 004ab798
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004ab799
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004ab79e
    MOV ESP,EBP                         ; 004ab7a1
    POP EBP                             ; 004ab7a3
    POP EDI                             ; 004ab7a4
    POP ESI                             ; 004ab7a5
    POP EBX                             ; 004ab7a6
    RET                                 ; 004ab7a7
    TEST EAX,EAX                        ; 004ab7a8
        ;   Label: LAB_004ab7a8
    JNZ 0x004ab73c                      ; 004ab7aa
        ;   XREF to: 004ab73c (CONDITIONAL_JUMP)  ; LAB_004ab73c
    PUSH 0x3e800000                     ; 004ab7ac
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004ab7b1
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004ab7b6
    TEST EAX,EAX                        ; 004ab7b9
    JNZ 0x004ab73c                      ; 004ab7bb
        ;   XREF to: 004ab73c (CONDITIONAL_JUMP)  ; LAB_004ab73c
    PUSH 0x2                            ; 004ab7c1
    PUSH 0x1                            ; 004ab7c3
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 004ab7c5
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 004ab7ca
    PUSH EAX                            ; 004ab7cd
    PUSH 0x584e68                       ; 004ab7ce | = "guul flinch%d"
    LEA EAX,[EBP + -0x68]               ; 004ab7d3
    PUSH EAX                            ; 004ab7d6
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004ab7d7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ab7dc
    PUSH 0x1                            ; 004ab7df
    LEA EAX,[EBP + -0x68]               ; 004ab7e1
    PUSH EAX                            ; 004ab7e4
    LEA EAX,[EBX + 0x150]               ; 004ab7e5
    PUSH EAX                            ; 004ab7eb
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004ab7ec
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004ab7f1
    PUSH EAX                            ; 004ab7f4
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004ab7f5
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [EBX + 0xbd38],0x3f800000 ; 004ab7fa
    ADD ESP,0xc                         ; 004ab804
    MOV dword ptr [EBX + 0xbd3c],EAX    ; 004ab807
    JMP 0x004ab768                      ; 004ab80d
        ;   XREF to: 004ab768 (UNCONDITIONAL_JUMP)  ; LAB_004ab768

