; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004f7720(CHotDemon *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_die_wav_0062f4f5
;   TerminatedCString s_hotdemon_hurt_wav_0062f506
;   double DOUBLE_0062f520 = 2
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7720
        ;   Label: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004f7720
    PUSH ESI                            ; 004f7721
    PUSH EDI                            ; 004f7722
    PUSH EBP                            ; 004f7723
    SUB ESP,0x14                        ; 004f7724
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f7727
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004f772b
    MOV EDX,dword ptr [ESI + 0xbebc]    ; 004f772f
    PUSH EDX                            ; 004f7735
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004f7736
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV ECX,dword ptr [EDI + 0x28]      ; 004f773b
    ADD ESP,0x4                         ; 004f773e
    CMP ECX,0x8                         ; 004f7741
    JZ 0x004f77c3                       ; 004f7744
        ;   XREF to: 004f77c3 (CONDITIONAL_JUMP)  ; LAB_004f77c3
    LEA EAX,[EAX]                       ; 004f774a
    FLD float ptr [EDI + 0x4]           ; 004f7750
        ;   Label: LAB_004f7750
    FSUBR float ptr [ESI + 0x243c]      ; 004f7753
    LEA EBX,[ESI + 0x158]               ; 004f7759
    FST float ptr [ESI + 0x243c]        ; 004f775f
    FLDZ                                ; 004f7765
    FCOMPP                              ; 004f7767
    FNSTSW AX                           ; 004f7769
    SAHF                                ; 004f776b
    JNC 0x004f7819                      ; 004f776c
        ;   XREF to: 004f7819 (CONDITIONAL_JUMP)  ; LAB_004f7819
    PUSH EBX                            ; 004f7772
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f7773
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f7778
    ADD ESP,0x4                         ; 004f777b
    CMP EAX,0x6                         ; 004f777e
    JGE 0x004f78a4                      ; 004f7781
        ;   XREF to: 004f78a4 (CONDITIONAL_JUMP)  ; LAB_004f78a4
    PUSH 0x1                            ; 004f7787
        ;   Label: LAB_004f7787
    PUSH 0x3                            ; 004f7789
    LEA EAX,[ESI + 0x158]               ; 004f778b
    PUSH EAX                            ; 004f7791
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f7792
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f7792
    ADD ESP,0xc                         ; 004f7797
    MOV EAX,dword ptr [ESI + 0xbec0]    ; 004f779a
    PUSH EAX                            ; 004f77a0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004f77a1
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004f77a6
    TEST EAX,EAX                        ; 004f77a9
    JZ 0x004f78b7                       ; 004f77ab
        ;   XREF to: 004f78b7 (CONDITIONAL_JUMP)  ; LAB_004f78b7
    PUSH EDI                            ; 004f77b1
        ;   Label: LAB_004f77b1
    PUSH ESI                            ; 004f77b2
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004f77b3
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004f77b8
    ADD ESP,0x14                        ; 004f77bb
    POP EBP                             ; 004f77be
    POP EDI                             ; 004f77bf
    POP ESI                             ; 004f77c0
    POP EBX                             ; 004f77c1
    RET                                 ; 004f77c2
    FLD float ptr [EDI + 0x4]           ; 004f77c3
        ;   Label: LAB_004f77c3
    LEA EAX,[EDI + 0x1c]                ; 004f77c6
    FLD ST0                             ; 004f77c9
    FMUL double ptr [0x0062f520]        ; 004f77cb | DOUBLE_0062f520
    PUSH EAX                            ; 004f77d1
    LEA EAX,[ESP + 0x4]                 ; 004f77d2
    XOR EBX,EBX                         ; 004f77d6
    PUSH EAX                            ; 004f77d8
    FSTP ST1                            ; 004f77d9
    PUSH ESI                            ; 004f77db
    FSTP float ptr [EDI + 0x4]          ; 004f77dc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f77df
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f77e4
    PUSH 0xffff                         ; 004f77e7
        ;   Label: LAB_004f77e7
    PUSH 0x0                            ; 004f77ec
    PUSH 0x4000                         ; 004f77ee
    PUSH 0x4000                         ; 004f77f3
    PUSH 0x0                            ; 004f77f8
    LEA EAX,[ESP + 0x14]                ; 004f77fa
    PUSH EAX                            ; 004f77fe
    MOV EBP,dword ptr [0x0067a3d0]      ; 004f77ff | g_CFireEffectPtr
    PUSH EBP                            ; 004f7805 | g_CFireEffectInstance
    INC EBX                             ; 004f7806
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004f7807
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004f780c
    CMP EBX,0x5                         ; 004f780f
    JL 0x004f77e7                       ; 004f7812
        ;   XREF to: 004f77e7 (CONDITIONAL_JUMP)  ; LAB_004f77e7
    JMP 0x004f7750                      ; 004f7814
        ;   XREF to: 004f7750 (UNCONDITIONAL_JUMP)  ; LAB_004f7750
    PUSH EBX                            ; 004f7819
        ;   Label: LAB_004f7819
    MOV dword ptr [ESI + 0x243c],0x0    ; 004f781a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f7824
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f7829
    ADD ESP,0x4                         ; 004f782c
    CMP EAX,0x4                         ; 004f782f
    JZ 0x004f77b1                       ; 004f7832
        ;   XREF to: 004f77b1 (CONDITIONAL_JUMP)  ; LAB_004f77b1
    CMP EAX,0x5                         ; 004f7838
    JZ 0x004f77b1                       ; 004f783b
        ;   XREF to: 004f77b1 (CONDITIONAL_JUMP)  ; LAB_004f77b1
    CMP EAX,0xa                         ; 004f7841
    JZ 0x004f77b1                       ; 004f7844
        ;   XREF to: 004f77b1 (CONDITIONAL_JUMP)  ; LAB_004f77b1
    CMP EAX,0xb                         ; 004f784a
    JZ 0x004f77b1                       ; 004f784d
        ;   XREF to: 004f77b1 (CONDITIONAL_JUMP)  ; LAB_004f77b1
    CMP EAX,0x6                         ; 004f7853
    JL 0x004f789e                       ; 004f7856
        ;   XREF to: 004f789e (CONDITIONAL_JUMP)  ; LAB_004f789e
    PUSH 0x1                            ; 004f7858
    PUSH 0xa                            ; 004f785a
    PUSH EBX                            ; 004f785c
        ;   Label: LAB_004f785c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f785d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f7862
    MOV EDX,dword ptr [ESI + 0xbec0]    ; 004f7865
    PUSH EDX                            ; 004f786b
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004f786c
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004f7871
    PUSH 0x62f4f5                       ; 004f7874 | = "hotdemon-die.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f7879
    PUSH ESI                            ; 004f787f
    CALL dword ptr [EAX + 0x24]         ; 004f7880
    ADD ESP,0x8                         ; 004f7883
    MOV dword ptr [ESI + 0xbec0],EAX    ; 004f7886
    PUSH EDI                            ; 004f788c
    PUSH ESI                            ; 004f788d
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004f788e
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004f7893
    ADD ESP,0x14                        ; 004f7896
    POP EBP                             ; 004f7899
    POP EDI                             ; 004f789a
    POP ESI                             ; 004f789b
    POP EBX                             ; 004f789c
    RET                                 ; 004f789d
    PUSH 0x1                            ; 004f789e
        ;   Label: LAB_004f789e
    PUSH 0x4                            ; 004f78a0
    JMP 0x004f785c                      ; 004f78a2
        ;   XREF to: 004f785c (UNCONDITIONAL_JUMP)  ; LAB_004f785c
    CMP EAX,0xf                         ; 004f78a4
        ;   Label: LAB_004f78a4
    JZ 0x004f7787                       ; 004f78a7
        ;   XREF to: 004f7787 (CONDITIONAL_JUMP)  ; LAB_004f7787
    PUSH 0x1                            ; 004f78ad
    PUSH 0x9                            ; 004f78af
    PUSH EBX                            ; 004f78b1
    JMP 0x004f7792                      ; 004f78b2
        ;   XREF to: 004f7792 (UNCONDITIONAL_JUMP)  ; LAB_004f7792
    PUSH 0x62f506                       ; 004f78b7 | = "hotdemon-hurt?.wav"
        ;   Label: LAB_004f78b7
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f78bc
    PUSH ESI                            ; 004f78c2
    CALL dword ptr [EAX + 0x24]         ; 004f78c3
    ADD ESP,0x8                         ; 004f78c6
    MOV dword ptr [ESI + 0xbec0],EAX    ; 004f78c9
    PUSH EDI                            ; 004f78cf
    PUSH ESI                            ; 004f78d0
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004f78d1
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004f78d6
    ADD ESP,0x14                        ; 004f78d9
    POP EBP                             ; 004f78dc
    POP EDI                             ; 004f78dd
    POP ESI                             ; 004f78de
    POP EBX                             ; 004f78df
    RET                                 ; 004f78e0

