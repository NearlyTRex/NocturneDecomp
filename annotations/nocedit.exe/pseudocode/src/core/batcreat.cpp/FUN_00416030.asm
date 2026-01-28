; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_batcreat_cpp_FUN_00416030(void)
;
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_batman_die_wav_00615691
;   TerminatedCString s_batman_hurt_wav_006156a0
;   double DOUBLE_006156b1 = 2
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_batcreat.cpp_FUN_00415dd0
;   core_charactr.cpp_CCharacter_FUN_0042b5b0
;   core_enemy.cpp_FUN_004a9f10
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416030
        ;   Label: core_batcreat.cpp_FUN_00416030
    PUSH ESI                            ; 00416031
    PUSH EDI                            ; 00416032
    PUSH EBP                            ; 00416033
    SUB ESP,0x2c                        ; 00416034
    MOV ESI,dword ptr [ESP + 0x40]      ; 00416037
    MOV EDI,dword ptr [ESP + 0x44]      ; 0041603b
    MOV EDX,dword ptr [ESI + 0xbefc]    ; 0041603f
    PUSH EDX                            ; 00416045
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00416046
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0041604b
    MOV ECX,dword ptr [ESI + 0xbef4]    ; 0041604e
    PUSH ECX                            ; 00416054
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00416055
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV EBX,dword ptr [EDI + 0x28]      ; 0041605a
    ADD ESP,0x4                         ; 0041605d
    CMP EBX,0x7                         ; 00416060
    JZ 0x00416157                       ; 00416063
        ;   XREF to: 00416157 (CONDITIONAL_JUMP)  ; LAB_00416157
    LEA EAX,[EAX]                       ; 00416069
    NOP                                 ; 0041606f
    CMP dword ptr [EDI + 0x30],0x6c     ; 00416070
        ;   Label: LAB_00416070
    JNZ 0x004160b4                      ; 00416074
        ;   XREF to: 004160b4 (CONDITIONAL_JUMP)  ; LAB_004160b4
    PUSH 0x0                            ; 00416076
    LEA EAX,[ESP + 0x4]                 ; 00416078
    PUSH EAX                            ; 0041607c
    LEA EAX,[ESI + 0x158]               ; 0041607d
    PUSH EAX                            ; 00416083
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00416084
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00416089
    PUSH EAX                            ; 0041608c
    LEA EAX,[ESP + 0x1c]                ; 0041608d
    PUSH EAX                            ; 00416091
    PUSH ESI                            ; 00416092
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00416093
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00416098
    PUSH 0x0                            ; 0041609b
    PUSH 0x41200000                     ; 0041609d
    PUSH 0x0                            ; 004160a2
    PUSH 0x0                            ; 004160a4
    LEA EAX,[ESP + 0x28]                ; 004160a6
    PUSH EAX                            ; 004160aa
    PUSH ESI                            ; 004160ab
    CALL core_charactr.cpp_CCharacter_FUN_0042b5b0 ; 004160ac
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b5b0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 004160b1
    PUSH EDI                            ; 004160b4
        ;   Label: LAB_004160b4
    PUSH ESI                            ; 004160b5
    CALL core_batcreat.cpp_FUN_00415dd0 ; 004160b6
        ;   XREF to: 00415dd0 (UNCONDITIONAL_CALL)  ; undefined core_batcreat.cpp_FUN_00415dd0()
    FLD float ptr [EDI + 0x4]           ; 004160bb
    ADD ESP,0x8                         ; 004160be
    FSUBR float ptr [ESI + 0x243c]      ; 004160c1
    LEA EBX,[ESI + 0x158]               ; 004160c7
    FST float ptr [ESI + 0x243c]        ; 004160cd
    FLDZ                                ; 004160d3
    FCOMPP                              ; 004160d5
    FNSTSW AX                           ; 004160d7
    SAHF                                ; 004160d9
    JNC 0x004161a9                      ; 004160da
        ;   XREF to: 004161a9 (CONDITIONAL_JUMP)  ; LAB_004161a9
    PUSH 0x2                            ; 004160e0
    PUSH 0x0                            ; 004160e2
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004160e4
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004160e9
    MOV EBP,EAX                         ; 004160ec
    TEST EAX,EAX                        ; 004160ee
    JNZ 0x004160ff                      ; 004160f0
        ;   XREF to: 004160ff (CONDITIONAL_JUMP)  ; LAB_004160ff
    PUSH 0x1                            ; 004160f2
    PUSH 0x4                            ; 004160f4
    PUSH EBX                            ; 004160f6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004160f7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004160fc
    CMP EBP,0x1                         ; 004160ff
        ;   Label: LAB_004160ff
    JNZ 0x00416116                      ; 00416102
        ;   XREF to: 00416116 (CONDITIONAL_JUMP)  ; LAB_00416116
    PUSH EBP                            ; 00416104
    PUSH 0x5                            ; 00416105
    LEA EAX,[ESI + 0x158]               ; 00416107
    PUSH EAX                            ; 0041610d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041610e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00416113
    CMP EBP,0x2                         ; 00416116
        ;   Label: LAB_00416116
    JNZ 0x0041612e                      ; 00416119
        ;   XREF to: 0041612e (CONDITIONAL_JUMP)  ; LAB_0041612e
    PUSH 0x1                            ; 0041611b
    PUSH 0x6                            ; 0041611d
    LEA EAX,[ESI + 0x158]               ; 0041611f
    PUSH EAX                            ; 00416125
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00416126
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041612b
    MOV ECX,dword ptr [ESI + 0xbef8]    ; 0041612e
        ;   Label: LAB_0041612e
    PUSH ECX                            ; 00416134
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00416135
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0041613a
    TEST EAX,EAX                        ; 0041613d
    JZ 0x00416213                       ; 0041613f
        ;   XREF to: 00416213 (CONDITIONAL_JUMP)  ; LAB_00416213
    PUSH EDI                            ; 00416145
        ;   Label: LAB_00416145
    PUSH ESI                            ; 00416146
    CALL core_enemy.cpp_FUN_004a9f10    ; 00416147
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 0041614c
    ADD ESP,0x2c                        ; 0041614f
    POP EBP                             ; 00416152
    POP EDI                             ; 00416153
    POP ESI                             ; 00416154
    POP EBX                             ; 00416155
    RET                                 ; 00416156
    FLD float ptr [EDI + 0x4]           ; 00416157
        ;   Label: LAB_00416157
    LEA EAX,[EDI + 0x1c]                ; 0041615a
    FLD ST0                             ; 0041615d
    FMUL double ptr [0x006156b1]        ; 0041615f | DOUBLE_006156b1
    PUSH EAX                            ; 00416165
    LEA EAX,[ESP + 0x10]                ; 00416166
    XOR EBX,EBX                         ; 0041616a
    PUSH EAX                            ; 0041616c
    FSTP ST1                            ; 0041616d
    PUSH ESI                            ; 0041616f
    FSTP float ptr [EDI + 0x4]          ; 00416170
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00416173
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00416178
    MOV EBP,0x4000                      ; 0041617b
    PUSH 0xffff                         ; 00416180
        ;   Label: LAB_00416180
    PUSH 0x0                            ; 00416185
    PUSH EBP                            ; 00416187
    PUSH EBP                            ; 00416188
    PUSH 0x0                            ; 00416189
    LEA EAX,[ESP + 0x20]                ; 0041618b
    PUSH EAX                            ; 0041618f
    MOV EAX,[0x0067a3d0]                ; 00416190 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 00416195 | g_CFireEffectInstance
    INC EBX                             ; 00416196
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 00416197
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 0041619c
    CMP EBX,0x5                         ; 0041619f
    JL 0x00416180                       ; 004161a2
        ;   XREF to: 00416180 (CONDITIONAL_JUMP)  ; LAB_00416180
    JMP 0x00416070                      ; 004161a4
        ;   XREF to: 00416070 (UNCONDITIONAL_JUMP)  ; LAB_00416070
    PUSH EBX                            ; 004161a9
        ;   Label: LAB_004161a9
    MOV dword ptr [ESI + 0x243c],0x0    ; 004161aa
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004161b4
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004161b9
    ADD ESP,0x4                         ; 004161bc
    CMP EAX,0x7                         ; 004161bf
    JZ 0x00416145                       ; 004161c2
        ;   XREF to: 00416145 (CONDITIONAL_JUMP)  ; LAB_00416145
    CMP EAX,0x8                         ; 004161c4
    JZ 0x00416145                       ; 004161c7
        ;   XREF to: 00416145 (CONDITIONAL_JUMP)  ; LAB_00416145
    PUSH 0x1                            ; 004161cd
    PUSH 0x7                            ; 004161cf
    PUSH EBX                            ; 004161d1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004161d2
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004161d7
    MOV EBX,dword ptr [ESI + 0xbef8]    ; 004161da
    PUSH EBX                            ; 004161e0
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004161e1
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004161e6
    PUSH 0x615691                       ; 004161e9 | = "batman-die.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 004161ee
    PUSH ESI                            ; 004161f4
    CALL dword ptr [EAX + 0x24]         ; 004161f5
    ADD ESP,0x8                         ; 004161f8
    MOV dword ptr [ESI + 0xbef8],EAX    ; 004161fb
    PUSH EDI                            ; 00416201
    PUSH ESI                            ; 00416202
    CALL core_enemy.cpp_FUN_004a9f10    ; 00416203
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 00416208
    ADD ESP,0x2c                        ; 0041620b
    POP EBP                             ; 0041620e
    POP EDI                             ; 0041620f
    POP ESI                             ; 00416210
    POP EBX                             ; 00416211
    RET                                 ; 00416212
    PUSH 0x6156a0                       ; 00416213 | = "batman-hurt?.wav"
        ;   Label: LAB_00416213
    MOV EAX,dword ptr [ESI + 0x154]     ; 00416218
    PUSH ESI                            ; 0041621e
    CALL dword ptr [EAX + 0x24]         ; 0041621f
    ADD ESP,0x8                         ; 00416222
    MOV dword ptr [ESI + 0xbef8],EAX    ; 00416225
    PUSH EDI                            ; 0041622b
    PUSH ESI                            ; 0041622c
    CALL core_enemy.cpp_FUN_004a9f10    ; 0041622d
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 00416232
    ADD ESP,0x2c                        ; 00416235
    POP EBP                             ; 00416238
    POP EDI                             ; 00416239
    POP ESI                             ; 0041623a
    POP EBX                             ; 0041623b
    RET                                 ; 0041623c

