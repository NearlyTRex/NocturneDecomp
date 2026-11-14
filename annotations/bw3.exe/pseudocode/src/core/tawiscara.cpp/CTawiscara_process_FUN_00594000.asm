; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tawiscara_cpp_CTawiscara_process_FUN_00594000(CTawiscara *this_ptr,float param_2)
;
; Parameters:
; CTawiscara *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   param_2
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005d92a2
;   TerminatedCString s_core_tawiscara_cpp_005d92cc
;   TerminatedCString s_Alpha_werewolf_requires_005d92e2
;   TerminatedCString s_Phase_d_Timer_f_005d9306
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d931c
;   TerminatedCString s_werewolf_eat_wav_005d933d
;   undefined4 DAT_005d9351
;   undefined4 DAT_005d9359
;   undefined4 DAT_005d9361
;   undefined4 DAT_005d9369
;   undefined4 DAT_005d9371
;   undefined4 DAT_005d9379
;   undefined4 DAT_005d9381
;   undefined4 DAT_005d9385
;   undefined4 DAT_005d9389
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_00434850
;   ... and 21 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594000
        ;   Label: core_tawiscara.cpp_CTawiscara_process_FUN_00594000
    PUSH ESI                            ; 00594001
    PUSH EDI                            ; 00594002
    PUSH EBP                            ; 00594003
    MOV EBP,ESP                         ; 00594004
    SUB ESP,0x4c4                       ; 00594006
    SUB EBP,0x7a                        ; 0059400c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0059400f
    PUSH dword ptr [EBP + 0x92]         ; 00594015
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059401b
    PUSH EBX                            ; 00594021
    CALL dword ptr [EAX + 0x148]        ; 00594022
    ADD ESP,0x8                         ; 00594028
    TEST EAX,EAX                        ; 0059402b
    JZ 0x005940a3                       ; 0059402d
        ;   XREF to: 005940a3 (CONDITIONAL_JUMP)  ; LAB_005940a3
    CMP dword ptr [EBX + 0xd054],0x2    ; 0059402f
    JZ 0x005940ba                       ; 00594036
        ;   XREF to: 005940ba (CONDITIONAL_JUMP)  ; LAB_005940ba
    LEA EAX,[EBX + 0x249c]              ; 0059403c
        ;   Label: LAB_0059403c
    MOV dword ptr [EAX + 0x8],0x0       ; 00594042
    FLD float ptr [EBP + 0x92]          ; 00594049
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059404f
    MOV dword ptr [EAX + 0x4],EDX       ; 00594052
    MOV EDX,dword ptr [EAX + 0x4]       ; 00594055
    MOV dword ptr [EAX],EDX             ; 00594058
    FMUL float ptr [EBX + 0xcdcc]       ; 0059405a
    LEA EAX,[EBX + 0x158]               ; 00594060
    FSTP float ptr [EBP + 0x3a]         ; 00594066
    MOV dword ptr [EBP + 0x72],EAX      ; 00594069
    FLD float ptr [EBP + 0x3a]          ; 0059406c
        ;   Label: LAB_0059406c
    FLDZ                                ; 0059406f
    FCOMPP                              ; 00594071
    FNSTSW AX                           ; 00594073
    SAHF                                ; 00594075
    JNC 0x005941a9                      ; 00594076
        ;   XREF to: 005941a9 (CONDITIONAL_JUMP)  ; LAB_005941a9
    LEA EAX,[EBP + 0x3a]                ; 0059407c
    PUSH EAX                            ; 0059407f
    MOV EDI,dword ptr [EBP + 0x72]      ; 00594080
    PUSH EDI                            ; 00594083
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00594084
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00594089
    MOV ESI,EAX                         ; 0059408c
    CMP EAX,0xa                         ; 0059408e
    JNC 0x0059418d                      ; 00594091
        ;   XREF to: 0059418d (CONDITIONAL_JUMP)  ; LAB_0059418d
    PUSH ESI                            ; 00594097
    PUSH EBX                            ; 00594098
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 00594099
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0059409e
    JMP 0x0059406c                      ; 005940a1
        ;   XREF to: 0059406c (UNCONDITIONAL_JUMP)  ; LAB_0059406c
    MOV ECX,dword ptr [EBX + 0xd07c]    ; 005940a3
        ;   Label: LAB_005940a3
    PUSH ECX                            ; 005940a9
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 005940aa
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 005940af
    LEA ESP,[EBP + 0x7a]                ; 005940b2
    POP EBP                             ; 005940b5
    POP EDI                             ; 005940b6
    POP ESI                             ; 005940b7
    POP EBX                             ; 005940b8
    RET                                 ; 005940b9
    FLD float ptr [EBX + 0xd094]        ; 005940ba
        ;   Label: LAB_005940ba
    FLDZ                                ; 005940c0
    FCOMPP                              ; 005940c2
    FNSTSW AX                           ; 005940c4
    SAHF                                ; 005940c6
    JA 0x0059403c                       ; 005940c7
        ;   XREF to: 0059403c (CONDITIONAL_JUMP)  ; LAB_0059403c
    FLD float ptr [EBX + 0xd094]        ; 005940cd
    FSUB float ptr [EBP + 0x92]         ; 005940d3
    FSTP float ptr [EBX + 0xd094]       ; 005940d9
    JMP 0x0059403c                      ; 005940df
        ;   XREF to: 0059403c (UNCONDITIONAL_JUMP)  ; LAB_0059403c
    MOV EDX,dword ptr [EBX + 0xd064]    ; 005940e4
        ;   Label: LAB_005940e4
    PUSH EDX                            ; 005940ea
    PUSH EDI                            ; 005940eb
    LEA ESI,[EBP + 0xfffffda2]          ; 005940ec
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 005940f2
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EDI,[EBP + 0xfffffd8a]          ; 005940f7
    ADD ESP,0x8                         ; 005940fd
    LEA EAX,[EBP + 0xfffffd8a]          ; 00594100
    LEA ESI,[EBP + 0xfffffda2]          ; 00594106
    PUSH EAX                            ; 0059410c
    MOVSD ES:EDI,ESI                    ; 0059410d
    MOVSD ES:EDI,ESI                    ; 0059410e
    MOVSD ES:EDI,ESI                    ; 0059410f
    PUSH EBX                            ; 00594110
    LEA ESI,[EBP + 0xfffffdae]          ; 00594111
    CALL core_actor.cpp_FUN_00408b80    ; 00594117
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0059411c
    LEA EDI,[EBP + 0xfffffece]          ; 0059411f
    PUSH 0x41400000                     ; 00594125
    LEA ESI,[EBP + 0xfffffdae]          ; 0059412a
    PUSH 0x41000000                     ; 00594130
    MOVSD ES:EDI,ESI                    ; 00594135
    MOVSD ES:EDI,ESI                    ; 00594136
    MOVSD ES:EDI,ESI                    ; 00594137
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00594138
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059413d
    ADD ESP,0x8                         ; 00594140
    FLD float ptr [EBP + 0x76]          ; 00594143
    FMUL double ptr [0x005d9379]        ; 00594146 | DAT_005d9379
    PUSH 0x0                            ; 0059414c
    CALL crt_math.c_round_FUN_005a3120  ; 0059414e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x32]        ; 00594153
    MOV ESI,dword ptr [EBP + 0x32]      ; 00594156
    PUSH ESI                            ; 00594159
    PUSH 0x0                            ; 0059415a
    LEA EAX,[EBP + 0xfffffece]          ; 0059415c
    PUSH EAX                            ; 00594162
    MOV EDI,dword ptr [0x005fed24]      ; 00594163 | g_CGorePtr
    PUSH EDI                            ; 00594169
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 0059416a
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0059416f
    JMP 0x0059406c                      ; 00594172
        ;   XREF to: 0059406c (UNCONDITIONAL_JUMP)  ; LAB_0059406c
    PUSH 0x1                            ; 00594177
        ;   Label: LAB_00594177
    PUSH EBX                            ; 00594179
    MOV EAX,[0x00600530]                ; 0059417a | DAT_00600530
    PUSH EAX                            ; 0059417f | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 00594180
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 00594185
    JMP 0x0059406c                      ; 00594188
        ;   XREF to: 0059406c (UNCONDITIONAL_JUMP)  ; LAB_0059406c
    JBE 0x005940e4                      ; 0059418d
        ;   XREF to: 005940e4 (CONDITIONAL_JUMP)  ; LAB_005940e4
        ;   Label: LAB_0059418d
    CMP EAX,0x29a                       ; 00594193
    JZ 0x00594177                       ; 00594198
        ;   XREF to: 00594177 (CONDITIONAL_JUMP)  ; LAB_00594177
    PUSH ESI                            ; 0059419a
    PUSH EBX                            ; 0059419b
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0059419c
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005941a1
    JMP 0x0059406c                      ; 005941a4
        ;   XREF to: 0059406c (UNCONDITIONAL_JUMP)  ; LAB_0059406c
    FLD float ptr [EBP + 0x92]          ; 005941a9
        ;   Label: LAB_005941a9
    FMUL float ptr [EBX + 0xcdcc]       ; 005941af
    SUB ESP,0x4                         ; 005941b5
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 005941b8
    MOV dword ptr [EBX + 0x2524],EAX    ; 005941be
    FSTP float ptr [ESP]                ; 005941c4
    PUSH EBX                            ; 005941c7
    CALL core_charactr.cpp_FUN_00434850 ; 005941c8
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    MOV ESI,dword ptr [EBX + 0xd054]    ; 005941cd
    ADD ESP,0x8                         ; 005941d3
    CMP ESI,0x2                         ; 005941d6
    JNZ 0x005941f1                      ; 005941d9
        ;   XREF to: 005941f1 (CONDITIONAL_JUMP)  ; LAB_005941f1
    FLD float ptr [EBX + 0x2528]        ; 005941db
    FLD ST0                             ; 005941e1
    FMUL double ptr [0x005d9351]        ; 005941e3 | DAT_005d9351
    FSTP ST1                            ; 005941e9
    FSTP float ptr [EBX + 0x2528]       ; 005941eb
    LEA EDI,[EBX + 0x158]               ; 005941f1
        ;   Label: LAB_005941f1
    PUSH EDI                            ; 005941f7
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005941f8
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005941fd
    PUSH dword ptr [EBP + 0x92]         ; 00594200
    MOV ESI,dword ptr [EAX + 0x24]      ; 00594206
    PUSH EBX                            ; 00594209
    MOV dword ptr [EBP + 0x6e],ESI      ; 0059420a
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 0059420d
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00594212
    TEST EAX,EAX                        ; 00594215
    JZ 0x00594532                       ; 00594217
        ;   XREF to: 00594532 (CONDITIONAL_JUMP)  ; LAB_00594532
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0059421d
    CMP EAX,0x2                         ; 00594223
    JNC 0x00594522                      ; 00594226
        ;   XREF to: 00594522 (CONDITIONAL_JUMP)  ; LAB_00594522
    CMP EAX,0x1                         ; 0059422c
    JNZ 0x00594529                      ; 0059422f
        ;   XREF to: 00594529 (CONDITIONAL_JUMP)  ; LAB_00594529
    CMP ESI,0xe                         ; 00594235
    JNZ 0x005944d6                      ; 00594238
        ;   XREF to: 005944d6 (CONDITIONAL_JUMP)  ; LAB_005944d6
    PUSH 0x1                            ; 0059423e
        ;   Label: LAB_0059423e
    PUSH 0xf                            ; 00594240
    LEA EAX,[EBX + 0x158]               ; 00594242
        ;   Label: LAB_00594242
    PUSH EAX                            ; 00594248
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594249
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00594249
    ADD ESP,0xc                         ; 0059424e
        ;   Label: LAB_0059424e
    LEA EAX,[EBX + 0x249c]              ; 00594251
        ;   Label: LAB_00594251
    MOV dword ptr [EAX + 0x8],0x0       ; 00594257
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059425e
    MOV dword ptr [EAX + 0x4],EDX       ; 00594261
    MOV EDX,dword ptr [EAX + 0x4]       ; 00594264
    MOV dword ptr [EAX],EDX             ; 00594267
    CMP dword ptr [EBP + 0x6e],0x13     ; 00594269
        ;   Label: LAB_00594269
    JNZ 0x00595692                      ; 0059426d
        ;   XREF to: 00595692 (CONDITIONAL_JUMP)  ; LAB_00595692
    CMP dword ptr [EBX + 0x27bc],0x0    ; 00594273
    JZ 0x00595692                       ; 0059427a
        ;   XREF to: 00595692 (CONDITIONAL_JUMP)  ; LAB_00595692
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 00594280
    PUSH EAX                            ; 00594286
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00594287
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059428c
    TEST EAX,EAX                        ; 0059428f
    JZ 0x00595675                       ; 00594291
        ;   XREF to: 00595675 (CONDITIONAL_JUMP)  ; LAB_00595675
    MOV EDX,0x3f800000                  ; 00594297
        ;   Label: LAB_00594297
    MOV ECX,dword ptr [EBX + 0xd054]    ; 0059429c
    MOV dword ptr [EBP + 0x5a],EDX      ; 005942a2
    TEST ECX,ECX                        ; 005942a5
    JNZ 0x005942b0                      ; 005942a7
        ;   XREF to: 005942b0 (CONDITIONAL_JUMP)  ; LAB_005942b0
    MOV dword ptr [EBP + 0x5a],0x3f400000 ; 005942a9
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005942b0
        ;   Label: LAB_005942b0
    CMP EDI,0xe                         ; 005942b3
    JNZ 0x005956a6                      ; 005942b6
        ;   XREF to: 005956a6 (CONDITIONAL_JUMP)  ; LAB_005956a6
    FLD float ptr [EBP + 0x5a]          ; 005942bc
        ;   Label: LAB_005942bc
    FMUL double ptr [0x005d9391]        ; 005942bf | DAT_005d9391
    FSTP float ptr [EBX + 0x3270]       ; 005942c5
        ;   Label: LAB_005942c5
    FLD float ptr [EBX + 0xcde0]        ; 005942cb
    FLDZ                                ; 005942d1
    FCOMPP                              ; 005942d3
    FNSTSW AX                           ; 005942d5
    SAHF                                ; 005942d7
    JNC 0x005942ec                      ; 005942d8
        ;   XREF to: 005942ec (CONDITIONAL_JUMP)  ; LAB_005942ec
    FLD float ptr [EBX + 0xcde0]        ; 005942da
    FSUB float ptr [EBP + 0x92]         ; 005942e0
    FSTP float ptr [EBX + 0xcde0]       ; 005942e6
    LEA EAX,[EBX + 0x158]               ; 005942ec
        ;   Label: LAB_005942ec
    PUSH EAX                            ; 005942f2
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005942f3
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005942f8
    ADD ESP,0x4                         ; 005942fb
    CMP EAX,0xd                         ; 005942fe
    JZ 0x005956bd                       ; 00594301
        ;   XREF to: 005956bd (CONDITIONAL_JUMP)  ; LAB_005956bd
    TEST EAX,EAX                        ; 00594307
    JZ 0x005956bd                       ; 00594309
        ;   XREF to: 005956bd (CONDITIONAL_JUMP)  ; LAB_005956bd
    CMP EAX,0xe                         ; 0059430f
    JZ 0x005956bd                       ; 00594312
        ;   XREF to: 005956bd (CONDITIONAL_JUMP)  ; LAB_005956bd
    CMP EAX,0x14                        ; 00594318
    JZ 0x005956bd                       ; 0059431b
        ;   XREF to: 005956bd (CONDITIONAL_JUMP)  ; LAB_005956bd
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00594321
        ;   Label: LAB_00594321
    TEST ECX,ECX                        ; 00594327
    JZ 0x00594355                       ; 00594329
        ;   XREF to: 00594355 (CONDITIONAL_JUMP)  ; LAB_00594355
    PUSH ECX                            ; 0059432b
    MOV EDX,dword ptr [ECX + 0x154]     ; 0059432c
    CALL dword ptr [EDX + 0xf4]         ; 00594332
    ADD ESP,0x4                         ; 00594338
    CMP EAX,EBX                         ; 0059433b
    JNZ 0x00594355                      ; 0059433d
        ;   XREF to: 00594355 (CONDITIONAL_JUMP)  ; LAB_00594355
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0059433f
    PUSH ESI                            ; 00594345
    MOV EDI,dword ptr [0x00603b28]      ; 00594346 | g_CDemonSetPtr
    PUSH EDI                            ; 0059434c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0059434d
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00594352
    PUSH dword ptr [EBP + 0x92]         ; 00594355
        ;   Label: LAB_00594355
    PUSH EBX                            ; 0059435b
    LEA ESI,[EBX + 0x2518]              ; 0059435c
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00594362
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 00594367
    FMUL float ptr [EBP + 0x92]         ; 00594369
    FLD float ptr [ESI + 0x4]           ; 0059436f
    FMUL float ptr [EBP + 0x92]         ; 00594372
    FLD float ptr [ESI + 0x8]           ; 00594378
    FMUL float ptr [EBP + 0x92]         ; 0059437b
    LEA EDI,[EBP + -0x72]               ; 00594381
    LEA ESI,[EBP + 0xffffff5e]          ; 00594384
    FXCH ST2                            ; 0059438a
    FSTP float ptr [EBP + 0xffffff5e]   ; 0059438c
    FSTP float ptr [EBP + 0xffffff62]   ; 00594392
    FSTP float ptr [EBP + 0xffffff66]   ; 00594398
    MOVSD ES:EDI,ESI                    ; 0059439e
    MOVSD ES:EDI,ESI                    ; 0059439f
    MOVSD ES:EDI,ESI                    ; 005943a0
    LEA EAX,[EBX + 0x249c]              ; 005943a1
    FLD float ptr [EBP + -0x72]         ; 005943a7
    FLD float ptr [EBP + -0x6e]         ; 005943aa
    FLD float ptr [EBP + -0x6a]         ; 005943ad
    LEA EDI,[EBP + 0xfffffe0e]          ; 005943b0
    LEA ESI,[EBP + 0xffffff3a]          ; 005943b6
    FXCH ST2                            ; 005943bc
    FADD float ptr [EAX]                ; 005943be
    FXCH                                ; 005943c0
    FADD float ptr [EAX + 0x4]          ; 005943c2
    FXCH ST2                            ; 005943c5
    FADD float ptr [EAX + 0x8]          ; 005943c7
    FXCH                                ; 005943ca
    FSTP float ptr [EBP + 0xffffff3a]   ; 005943cc
    FXCH                                ; 005943d2
    FSTP float ptr [EBP + 0xffffff3e]   ; 005943d4
    FSTP float ptr [EBP + 0xffffff42]   ; 005943da
    MOVSD ES:EDI,ESI                    ; 005943e0
    MOVSD ES:EDI,ESI                    ; 005943e1
    MOVSD ES:EDI,ESI                    ; 005943e2
    LEA EDX,[EBX + 0x250c]              ; 005943e3
    FLD float ptr [EBP + 0xfffffe0e]    ; 005943e9
    FLD float ptr [EBP + 0xfffffe12]    ; 005943ef
    FLD float ptr [EBP + 0xfffffe16]    ; 005943f5
    LEA EDI,[EBP + -0x12]               ; 005943fb
    LEA ESI,[EBP + 0xffffff22]          ; 005943fe
    FXCH ST2                            ; 00594404
    FADD float ptr [EDX]                ; 00594406
    FXCH                                ; 00594408
    FADD float ptr [EDX + 0x4]          ; 0059440a
    FXCH ST2                            ; 0059440d
    FADD float ptr [EDX + 0x8]          ; 0059440f
    FXCH                                ; 00594412
    FSTP float ptr [EBP + 0xffffff22]   ; 00594414
    FXCH                                ; 0059441a
    FSTP float ptr [EBP + 0xffffff26]   ; 0059441c
    FSTP float ptr [EBP + 0xffffff2a]   ; 00594422
    MOVSD ES:EDI,ESI                    ; 00594428
    MOVSD ES:EDI,ESI                    ; 00594429
    MOVSD ES:EDI,ESI                    ; 0059442a
    MOV dword ptr [EAX + 0x8],0x0       ; 0059442b
    ADD ESP,0x8                         ; 00594432
    MOV ECX,dword ptr [EAX + 0x8]       ; 00594435
    MOV dword ptr [EAX + 0x4],ECX       ; 00594438
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059443b
    MOV dword ptr [EAX],ECX             ; 0059443e
    MOV dword ptr [EDX + 0x8],0x0       ; 00594440
    LEA EAX,[EBP + -0x12]               ; 00594447
    FLD float ptr [EDX + 0x8]           ; 0059444a
    PUSH EAX                            ; 0059444d
    FST float ptr [EDX + 0x4]           ; 0059444e
    PUSH EBX                            ; 00594451
    FSTP float ptr [EDX]                ; 00594452
    CALL core_charactr.cpp_FUN_0042c230 ; 00594454
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00594459
    PUSH EBX                            ; 0059445c
        ;   Label: LAB_0059445c
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 0059445d
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00594462
    LEA EAX,[EBX + 0x158]               ; 00594465
    PUSH EAX                            ; 0059446b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0059446c
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00594471
    PUSH dword ptr [EBP + 0x92]         ; 00594474
    PUSH EBX                            ; 0059447a
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0059447b
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00594480
    PUSH EBX                            ; 00594483
    CALL core_tawiscara.cpp_FUN_00596380 ; 00594484
        ;   XREF to: 00596380 (UNCONDITIONAL_CALL)  ; undefined core_tawiscara.cpp_FUN_00596380()
    FLD float ptr [EBP + 0x92]          ; 00594489
    FMUL double ptr [0x005d9399]        ; 0059448f | DAT_005d9399
    FLD float ptr [EBX + 0xd098]        ; 00594495
    FXCH                                ; 0059449b
    FADD ST0,ST1                        ; 0059449d
    ADD ESP,0x4                         ; 0059449f
    FSTP ST1                            ; 005944a2
    FSTP float ptr [EBX + 0xd098]       ; 005944a4
    LEA ESP,[EBP + 0x7a]                ; 005944aa
    POP EBP                             ; 005944ad
    POP EDI                             ; 005944ae
    POP ESI                             ; 005944af
    POP EBX                             ; 005944b0
    RET                                 ; 005944b1
    PUSH 0x1                            ; 005944b2
        ;   Label: LAB_005944b2
    PUSH 0x0                            ; 005944b4
    PUSH EDI                            ; 005944b6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005944b7
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005944bc
    PUSH EBX                            ; 005944bf
    PUSH 0x5d92a2                       ; 005944c0 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005f1690]      ; 005944c5 | g_CConsolePtr
    PUSH ESI                            ; 005944cb | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005944cc
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x0059424e                      ; 005944d1
        ;   XREF to: 0059424e (UNCONDITIONAL_JUMP)  ; LAB_0059424e
    CMP ESI,0xf                         ; 005944d6
        ;   Label: LAB_005944d6
    JZ 0x0059423e                       ; 005944d9
        ;   XREF to: 0059423e (CONDITIONAL_JUMP)  ; LAB_0059423e
    PUSH EAX                            ; 005944df
    PUSH EAX                            ; 005944e0
    PUSH EDI                            ; 005944e1
    JMP 0x00594249                      ; 005944e2
        ;   XREF to: 00594249 (UNCONDITIONAL_JUMP)  ; LAB_00594249
    CMP ESI,0xe                         ; 005944e7
        ;   Label: LAB_005944e7
    JZ 0x0059423e                       ; 005944ea
        ;   XREF to: 0059423e (CONDITIONAL_JUMP)  ; LAB_0059423e
    CMP ESI,0xf                         ; 005944f0
    JZ 0x0059423e                       ; 005944f3
        ;   XREF to: 0059423e (CONDITIONAL_JUMP)  ; LAB_0059423e
    FLD float ptr [EBX + 0x2508]        ; 005944f9
    FABS                                ; 005944ff
    FLD float ptr [EBX + 0x2528]        ; 00594501
    FCOMPP                              ; 00594507
    FNSTSW AX                           ; 00594509
    SAHF                                ; 0059450b
    JBE 0x00594518                      ; 0059450c
        ;   XREF to: 00594518 (CONDITIONAL_JUMP)  ; LAB_00594518
    PUSH 0x1                            ; 0059450e
    PUSH 0x8                            ; 00594510
    PUSH EDI                            ; 00594512
    JMP 0x00594249                      ; 00594513
        ;   XREF to: 00594249 (UNCONDITIONAL_JUMP)  ; LAB_00594249
    PUSH 0x1                            ; 00594518
        ;   Label: LAB_00594518
    PUSH 0x1                            ; 0059451a
    PUSH EDI                            ; 0059451c
    JMP 0x00594249                      ; 0059451d
        ;   XREF to: 00594249 (UNCONDITIONAL_JUMP)  ; LAB_00594249
    JBE 0x005944e7                      ; 00594522
        ;   XREF to: 005944e7 (CONDITIONAL_JUMP)  ; LAB_005944e7
        ;   Label: LAB_00594522
    CMP EAX,0x3                         ; 00594524
    JZ 0x005944b2                       ; 00594527
        ;   XREF to: 005944b2 (CONDITIONAL_JUMP)  ; LAB_005944b2
    PUSH 0x1                            ; 00594529
        ;   Label: LAB_00594529
    PUSH 0x0                            ; 0059452b
    JMP 0x00594242                      ; 0059452d
        ;   XREF to: 00594242 (UNCONDITIONAL_JUMP)  ; LAB_00594242
    PUSH EBX                            ; 00594532
        ;   Label: LAB_00594532
    MOV EAX,dword ptr [EBX + 0x154]     ; 00594533
    CALL dword ptr [EAX + 0x10c]        ; 00594539
    ADD ESP,0x4                         ; 0059453f
    TEST EAX,EAX                        ; 00594542
    JNZ 0x00594775                      ; 00594544
        ;   XREF to: 00594775 (CONDITIONAL_JUMP)  ; LAB_00594775
    MOV EAX,[0x01d5ba14]                ; 0059454a | DAT_01d5ba14
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0059454f
    CMP EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00594555
    JNZ 0x00594775                      ; 0059455c
        ;   XREF to: 00594775 (CONDITIONAL_JUMP)  ; LAB_00594775
    LEA EAX,[EBP + 0xfffffbb6]          ; 00594562
    PUSH EAX                            ; 00594568
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00594569
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0059456e
    PUSH 0x41700000                     ; 00594571
    PUSH 0x40e00000                     ; 00594576
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0059457b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00594580
    ADD ESP,0x8                         ; 00594583
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 00594586
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 0059458c
    LEA EAX,[EBP + 0xfffffbb6]          ; 00594592
    FLD float ptr [EBP + 0x76]          ; 00594598
    PUSH EAX                            ; 0059459b
    FSTP float ptr [EBP + 0xfffffbba]   ; 0059459c
    SUB ESP,0x4                         ; 005945a2
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 005945a5
    MOV dword ptr [ESP],EAX             ; 005945ab
    MOV EDX,dword ptr [EBX + 0xd064]    ; 005945ae
    LEA EAX,[EDX*0x4 + 0x0]             ; 005945b4
    SUB EAX,EDX                         ; 005945bb
    SHL EAX,0x4                         ; 005945bd
    LEA EDX,[EBX + 0xfd8]               ; 005945c0
    ADD EAX,EDX                         ; 005945c6
    PUSH EAX                            ; 005945c8
    LEA ESI,[EBP + 0xfffffd4e]          ; 005945c9
    PUSH 0x2cfd900                      ; 005945cf | DAT_02cfd900
    LEA EDI,[EBP + 0xfffffeb6]          ; 005945d4
    MOV dword ptr [EBP + 0x62],EDX      ; 005945da
    CALL core_xform.cpp_FUN_00583260    ; 005945dd
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 005945e2
    LEA EAX,[EBP + 0xfffffeb6]          ; 005945e5
    LEA ESI,[EBP + 0xfffffd4e]          ; 005945eb
    PUSH EAX                            ; 005945f1
    MOVSD ES:EDI,ESI                    ; 005945f2
    MOVSD ES:EDI,ESI                    ; 005945f3
    MOVSD ES:EDI,ESI                    ; 005945f4
    PUSH EBX                            ; 005945f5
    LEA ESI,[EBP + 0xffffff2e]          ; 005945f6
    CALL core_actor.cpp_FUN_00408b80    ; 005945fc
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00594601
    LEA EAX,[EBP + 0xfffffec2]          ; 00594604
    PUSH EAX                            ; 0059460a
    LEA EDI,[EBP + 0xfffffec2]          ; 0059460b
    LEA ESI,[EBP + 0xffffff2e]          ; 00594611
    PUSH EBX                            ; 00594617
    MOVSD ES:EDI,ESI                    ; 00594618
    MOVSD ES:EDI,ESI                    ; 00594619
    MOVSD ES:EDI,ESI                    ; 0059461a
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 0059461b
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00594620
    PUSH 0x41700000                     ; 00594623
    PUSH 0x40e00000                     ; 00594628
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0059462d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00594632
    ADD ESP,0x8                         ; 00594635
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 00594638
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 0059463e
    LEA EAX,[EBP + 0xfffffbb6]          ; 00594644
    FLD float ptr [EBP + 0x76]          ; 0059464a
    PUSH EAX                            ; 0059464d
    FSTP float ptr [EBP + 0xfffffbba]   ; 0059464e
    SUB ESP,0x4                         ; 00594654
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 00594657
    MOV dword ptr [ESP],EAX             ; 0059465d
    MOV EDX,dword ptr [EBX + 0xd060]    ; 00594660
    LEA EAX,[EDX*0x4 + 0x0]             ; 00594666
    SUB EAX,EDX                         ; 0059466d
    MOV ECX,dword ptr [EBP + 0x62]      ; 0059466f
    SHL EAX,0x4                         ; 00594672
    ADD EAX,ECX                         ; 00594675
    PUSH EAX                            ; 00594677
    PUSH 0x2cfd900                      ; 00594678 | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffd96]          ; 0059467d
    LEA EDI,[EBP + 0xfffffd7e]          ; 00594683
    CALL core_xform.cpp_FUN_00583260    ; 00594689
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0059468e
    LEA EAX,[EBP + 0xfffffd7e]          ; 00594691
    LEA ESI,[EBP + 0xfffffd96]          ; 00594697
    PUSH EAX                            ; 0059469d
    MOVSD ES:EDI,ESI                    ; 0059469e
    MOVSD ES:EDI,ESI                    ; 0059469f
    MOVSD ES:EDI,ESI                    ; 005946a0
    PUSH EBX                            ; 005946a1
    LEA ESI,[EBP + 0xfffffefe]          ; 005946a2
    CALL core_actor.cpp_FUN_00408b80    ; 005946a8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005946ad
    LEA EAX,[EBP + 0xfffffeda]          ; 005946b0
    PUSH EAX                            ; 005946b6
    LEA EDI,[EBP + 0xfffffeda]          ; 005946b7
    LEA ESI,[EBP + 0xfffffefe]          ; 005946bd
    PUSH EBX                            ; 005946c3
    MOVSD ES:EDI,ESI                    ; 005946c4
    MOVSD ES:EDI,ESI                    ; 005946c5
    MOVSD ES:EDI,ESI                    ; 005946c6
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 005946c7
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005946cc
    PUSH 0x41700000                     ; 005946cf
    PUSH 0x40e00000                     ; 005946d4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 005946d9
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005946de
    ADD ESP,0x8                         ; 005946e1
    MOV EAX,dword ptr [EBP + 0x76]      ; 005946e4
    MOV dword ptr [EBP + 0xfffffbba],EAX ; 005946e7
    LEA EAX,[EBP + 0xfffffbb6]          ; 005946ed
    PUSH EAX                            ; 005946f3
    MOV dword ptr [EBP + 0xfffffbea],EBX ; 005946f4
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 005946fa
    SUB ESP,0x4                         ; 00594700
    MOV EAX,dword ptr [EBX + 0x27b8]    ; 00594703
    MOV dword ptr [ESP],EAX             ; 00594709
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 0059470c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00594712
    SUB EAX,EDX                         ; 00594719
    MOV ESI,dword ptr [EBP + 0x62]      ; 0059471b
    SHL EAX,0x4                         ; 0059471e
    ADD EAX,ESI                         ; 00594721
    PUSH EAX                            ; 00594723
    PUSH 0x2cfd900                      ; 00594724 | DAT_02cfd900
    LEA ESI,[EBP + -0x5a]               ; 00594729
    LEA EDI,[EBP + 0xfffffd42]          ; 0059472c
    CALL core_xform.cpp_FUN_00583260    ; 00594732
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00594737
    LEA EAX,[EBP + 0xfffffd42]          ; 0059473a
    LEA ESI,[EBP + -0x5a]               ; 00594740
    PUSH EAX                            ; 00594743
    MOVSD ES:EDI,ESI                    ; 00594744
    MOVSD ES:EDI,ESI                    ; 00594745
    MOVSD ES:EDI,ESI                    ; 00594746
    PUSH EBX                            ; 00594747
    LEA ESI,[EBP + 0xffffff46]          ; 00594748
    CALL core_actor.cpp_FUN_00408b80    ; 0059474e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00594753
    LEA EAX,[EBP + 0xfffffef2]          ; 00594756
    PUSH EAX                            ; 0059475c
    LEA EDI,[EBP + 0xfffffef2]          ; 0059475d
    LEA ESI,[EBP + 0xffffff46]          ; 00594763
    PUSH EBX                            ; 00594769
    MOVSD ES:EDI,ESI                    ; 0059476a
    MOVSD ES:EDI,ESI                    ; 0059476b
    MOVSD ES:EDI,ESI                    ; 0059476c
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 0059476d
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00594772
    LEA EAX,[EBX + 0xfd8]               ; 00594775
        ;   Label: LAB_00594775
    MOV dword ptr [EBP + 0x66],EAX      ; 0059477b
    MOV EAX,[0x01d5ba14]                ; 0059477e | DAT_01d5ba14
    MOV EDI,dword ptr [EBP + 0x6e]      ; 00594783
    SHL EAX,0x2                         ; 00594786
    CMP EDI,0x4                         ; 00594789
    JNC 0x00595520                      ; 0059478c
        ;   XREF to: 00595520 (CONDITIONAL_JUMP)  ; LAB_00595520
    CMP EDI,0x1                         ; 00594792
    JNC 0x0059556e                      ; 00594795
        ;   XREF to: 0059556e (CONDITIONAL_JUMP)  ; LAB_0059556e
    TEST EDI,EDI                        ; 0059479b
    JNZ 0x00594269                      ; 0059479d
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH dword ptr [EBP + 0x92]         ; 005947a3
        ;   Label: LAB_005947a3
    PUSH EBX                            ; 005947a9
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 005947aa
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005947af
    TEST EAX,EAX                        ; 005947b2
    JZ 0x00594c43                       ; 005947b4
        ;   XREF to: 00594c43 (CONDITIONAL_JUMP)  ; LAB_00594c43
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005947ba
    LEA EAX,[EBX + 0x158]               ; 005947bd
    CMP ECX,0xe                         ; 005947c3
    JNZ 0x00594c31                      ; 005947c6
        ;   XREF to: 00594c31 (CONDITIONAL_JUMP)  ; LAB_00594c31
    PUSH 0x1                            ; 005947cc
    PUSH 0xf                            ; 005947ce
    PUSH EAX                            ; 005947d0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005947d1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005947d6
    JMP 0x00594269                      ; 005947d9
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    MOV ESI,dword ptr [EAX + 0x1d5ba04] ; 005947de
        ;   Label: LAB_005947de
    CMP ESI,dword ptr [EBX + 0xcde4]    ; 005947e4
    JNZ 0x00594931                      ; 005947ea
        ;   XREF to: 00594931 (CONDITIONAL_JUMP)  ; LAB_00594931
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 005947f0
        ;   Label: LAB_005947f0
    TEST ESI,ESI                        ; 005947f6
    JZ 0x00594821                       ; 005947f8
        ;   XREF to: 00594821 (CONDITIONAL_JUMP)  ; LAB_00594821
    PUSH ESI                            ; 005947fa
    MOV EDX,dword ptr [ESI + 0x154]     ; 005947fb
    CALL dword ptr [EDX + 0x10c]        ; 00594801
    ADD ESP,0x4                         ; 00594807
    TEST EAX,EAX                        ; 0059480a
    JZ 0x00594821                       ; 0059480c
        ;   XREF to: 00594821 (CONDITIONAL_JUMP)  ; LAB_00594821
    PUSH 0x1                            ; 0059480e
    PUSH 0x7                            ; 00594810
    LEA EAX,[EBX + 0x158]               ; 00594812
    PUSH EAX                            ; 00594818
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594819
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059481e
    MOV EDX,dword ptr [0x01d5ba14]      ; 00594821 | DAT_01d5ba14
        ;   Label: LAB_00594821
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00594827
    CMP EAX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 0059482d
    JZ 0x005948f3                       ; 00594834
        ;   XREF to: 005948f3 (CONDITIONAL_JUMP)  ; LAB_005948f3
    LEA EAX,[EBP + 0xfffffc2e]          ; 0059483a
    PUSH EAX                            ; 00594840
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00594841
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00594846
    PUSH 0x41700000                     ; 00594849
    PUSH 0x40e00000                     ; 0059484e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00594853
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00594858
    MOV dword ptr [EBP + 0xfffffc62],EBX ; 0059485b
    MOV dword ptr [EBP + 0xfffffc66],EBX ; 00594861
    ADD ESP,0x8                         ; 00594867
    FLD float ptr [EBP + 0x76]          ; 0059486a
    LEA EAX,[EBP + 0xfffffc2e]          ; 0059486d
    FSTP float ptr [EBP + 0xfffffc32]   ; 00594873
    MOV EDX,dword ptr [EBX + 0xd064]    ; 00594879
    PUSH EAX                            ; 0059487f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00594880
    SUB EAX,EDX                         ; 00594887
    MOV EDX,EAX                         ; 00594889
    SHL EDX,0x4                         ; 0059488b
    LEA EAX,[EBX + 0xfd8]               ; 0059488e
    ADD EAX,EDX                         ; 00594894
    PUSH 0x3ecccccd                     ; 00594896
    PUSH EAX                            ; 0059489b
    PUSH 0x2cfd900                      ; 0059489c | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff0a]          ; 005948a1
    LEA EDI,[EBP + 0xfffffdea]          ; 005948a7
    CALL core_xform.cpp_FUN_00583260    ; 005948ad
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 005948b2
    LEA EAX,[EBP + 0xfffffdea]          ; 005948b5
    LEA ESI,[EBP + 0xffffff0a]          ; 005948bb
    PUSH EAX                            ; 005948c1
    MOVSD ES:EDI,ESI                    ; 005948c2
    MOVSD ES:EDI,ESI                    ; 005948c3
    MOVSD ES:EDI,ESI                    ; 005948c4
    PUSH EBX                            ; 005948c5
    LEA ESI,[EBP + 0xffffff76]          ; 005948c6
    CALL core_actor.cpp_FUN_00408b80    ; 005948cc
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005948d1
    LEA EAX,[EBP + 0xfffffdf6]          ; 005948d4
    PUSH EAX                            ; 005948da
    LEA EDI,[EBP + 0xfffffdf6]          ; 005948db
    LEA ESI,[EBP + 0xffffff76]          ; 005948e1
    PUSH EBX                            ; 005948e7
    MOVSD ES:EDI,ESI                    ; 005948e8
    MOVSD ES:EDI,ESI                    ; 005948e9
    MOVSD ES:EDI,ESI                    ; 005948ea
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 005948eb
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005948f0
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 005948f3
        ;   Label: LAB_005948f3
    TEST ESI,ESI                        ; 005948f9
    JZ 0x00594269                       ; 005948fb
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH ESI                            ; 00594901
    MOV EDX,dword ptr [ESI + 0x154]     ; 00594902
    CALL dword ptr [EDX + 0x10c]        ; 00594908
    ADD ESP,0x4                         ; 0059490e
    TEST EAX,EAX                        ; 00594911
    JZ 0x00594269                       ; 00594913
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH 0x1                            ; 00594919
    PUSH 0x7                            ; 0059491b
    LEA EAX,[EBX + 0x158]               ; 0059491d
    PUSH EAX                            ; 00594923
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594924
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00594929
    JMP 0x00594269                      ; 0059492c
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    LEA EAX,[EBP + 0xfffffbf2]          ; 00594931
        ;   Label: LAB_00594931
    PUSH EAX                            ; 00594937
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00594938
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0059493d
    PUSH 0x41700000                     ; 00594940
    PUSH 0x40e00000                     ; 00594945
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0059494a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059494f
    MOV dword ptr [EBP + 0xfffffc26],EBX ; 00594952
    MOV dword ptr [EBP + 0xfffffc2a],EBX ; 00594958
    ADD ESP,0x8                         ; 0059495e
    FLD float ptr [EBP + 0x76]          ; 00594961
    LEA EAX,[EBP + 0xfffffbf2]          ; 00594964
    FSTP float ptr [EBP + 0xfffffbf6]   ; 0059496a
    MOV EDX,dword ptr [EBX + 0xd064]    ; 00594970
    PUSH EAX                            ; 00594976
    LEA EAX,[EDX*0x4 + 0x0]             ; 00594977
    SUB EAX,EDX                         ; 0059497e
    MOV EDI,dword ptr [EBP + 0x66]      ; 00594980
    SHL EAX,0x4                         ; 00594983
    ADD EAX,EDI                         ; 00594986
    PUSH 0x3f800000                     ; 00594988
    PUSH EAX                            ; 0059498d
    PUSH 0x2cfd900                      ; 0059498e | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffdde]          ; 00594993
    LEA EDI,[EBP + 0xfffffe4a]          ; 00594999
    CALL core_xform.cpp_FUN_00583260    ; 0059499f
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 005949a4
    LEA EAX,[EBP + 0xfffffe4a]          ; 005949a7
    LEA ESI,[EBP + 0xfffffdde]          ; 005949ad
    PUSH EAX                            ; 005949b3
    MOVSD ES:EDI,ESI                    ; 005949b4
    MOVSD ES:EDI,ESI                    ; 005949b5
    MOVSD ES:EDI,ESI                    ; 005949b6
    PUSH EBX                            ; 005949b7
    LEA ESI,[EBP + 0xfffffd12]          ; 005949b8
    CALL core_actor.cpp_FUN_00408b80    ; 005949be
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 005949c3
    LEA EAX,[EBP + 0xfffffd06]          ; 005949c6
    PUSH EAX                            ; 005949cc
    LEA EDI,[EBP + 0xfffffd06]          ; 005949cd
    LEA ESI,[EBP + 0xfffffd12]          ; 005949d3
    PUSH EBX                            ; 005949d9
    MOVSD ES:EDI,ESI                    ; 005949da
    MOVSD ES:EDI,ESI                    ; 005949db
    MOVSD ES:EDI,ESI                    ; 005949dc
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 005949dd
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005949e2
    LEA EAX,[EBP + 0xfffffbf2]          ; 005949e5
    MOV EDX,dword ptr [EBX + 0xd060]    ; 005949eb
    PUSH EAX                            ; 005949f1
    LEA EAX,[EDX*0x4 + 0x0]             ; 005949f2
    SUB EAX,EDX                         ; 005949f9
    MOV EDX,dword ptr [EBP + 0x66]      ; 005949fb
    SHL EAX,0x4                         ; 005949fe
    ADD EAX,EDX                         ; 00594a01
    PUSH 0x3f800000                     ; 00594a03
    PUSH EAX                            ; 00594a08
    PUSH 0x2cfd900                      ; 00594a09 | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffd2a]          ; 00594a0e
    LEA EDI,[EBP + -0x4e]               ; 00594a14
    CALL core_xform.cpp_FUN_00583260    ; 00594a17
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00594a1c
    LEA EAX,[EBP + -0x4e]               ; 00594a1f
    LEA ESI,[EBP + 0xfffffd2a]          ; 00594a22
    PUSH EAX                            ; 00594a28
    MOVSD ES:EDI,ESI                    ; 00594a29
    MOVSD ES:EDI,ESI                    ; 00594a2a
    MOVSD ES:EDI,ESI                    ; 00594a2b
    PUSH EBX                            ; 00594a2c
    LEA ESI,[EBP + 0xfffffe26]          ; 00594a2d
    CALL core_actor.cpp_FUN_00408b80    ; 00594a33
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00594a38
    LEA EAX,[EBP + -0x42]               ; 00594a3b
    PUSH EAX                            ; 00594a3e
    LEA EDI,[EBP + -0x42]               ; 00594a3f
    LEA ESI,[EBP + 0xfffffe26]          ; 00594a42
    PUSH EBX                            ; 00594a48
    MOVSD ES:EDI,ESI                    ; 00594a49
    MOVSD ES:EDI,ESI                    ; 00594a4a
    MOVSD ES:EDI,ESI                    ; 00594a4b
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 00594a4c
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00594a51
    LEA EAX,[EBP + 0xfffffbf2]          ; 00594a54
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 00594a5a
    PUSH EAX                            ; 00594a60
    LEA EAX,[EDX*0x4 + 0x0]             ; 00594a61
    SUB EAX,EDX                         ; 00594a68
    MOV ECX,dword ptr [EBP + 0x66]      ; 00594a6a
    SHL EAX,0x4                         ; 00594a6d
    ADD EAX,ECX                         ; 00594a70
    PUSH 0x3f800000                     ; 00594a72
    PUSH EAX                            ; 00594a77
    PUSH 0x2cfd900                      ; 00594a78 | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffd5a]          ; 00594a7d
    LEA EDI,[EBP + 0xfffffe92]          ; 00594a83
    CALL core_xform.cpp_FUN_00583260    ; 00594a89
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00594a8e
    LEA EAX,[EBP + 0xfffffe92]          ; 00594a91
    LEA ESI,[EBP + 0xfffffd5a]          ; 00594a97
    PUSH EAX                            ; 00594a9d
    MOVSD ES:EDI,ESI                    ; 00594a9e
    MOVSD ES:EDI,ESI                    ; 00594a9f
    MOVSD ES:EDI,ESI                    ; 00594aa0
    PUSH EBX                            ; 00594aa1
    LEA ESI,[EBP + 0xfffffd72]          ; 00594aa2
    CALL core_actor.cpp_FUN_00408b80    ; 00594aa8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00594aad
    LEA EAX,[EBP + 0xfffffcfa]          ; 00594ab0
    PUSH EAX                            ; 00594ab6
    LEA EDI,[EBP + 0xfffffcfa]          ; 00594ab7
    LEA ESI,[EBP + 0xfffffd72]          ; 00594abd
    PUSH EBX                            ; 00594ac3
    MOVSD ES:EDI,ESI                    ; 00594ac4
    MOVSD ES:EDI,ESI                    ; 00594ac5
    MOVSD ES:EDI,ESI                    ; 00594ac6
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 00594ac7
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00594acc
    JMP 0x005947f0                      ; 00594acf
        ;   XREF to: 005947f0 (UNCONDITIONAL_JUMP)  ; LAB_005947f0
    LEA EAX,[EBP + 0xfffffca6]          ; 00594ad4
        ;   Label: LAB_00594ad4
    PUSH EAX                            ; 00594ada
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00594adb
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00594ae0
    PUSH 0x41700000                     ; 00594ae3
    PUSH 0x40e00000                     ; 00594ae8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00594aed
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00594af2
    MOV dword ptr [EBP + 0xfffffcda],EBX ; 00594af5
    MOV dword ptr [EBP + 0xfffffcde],EBX ; 00594afb
    ADD ESP,0x8                         ; 00594b01
    FLD float ptr [EBP + 0x76]          ; 00594b04
    LEA EAX,[EBP + 0xfffffca6]          ; 00594b07
    FSTP float ptr [EBP + 0xfffffcaa]   ; 00594b0d
    MOV EDX,dword ptr [EBX + 0xd060]    ; 00594b13
    PUSH EAX                            ; 00594b19
    LEA EAX,[EDX*0x4 + 0x0]             ; 00594b1a
    SUB EAX,EDX                         ; 00594b21
    MOV EDI,dword ptr [EBP + 0x66]      ; 00594b23
    SHL EAX,0x4                         ; 00594b26
    ADD EAX,EDI                         ; 00594b29
    PUSH 0x3ecccccd                     ; 00594b2b
    PUSH EAX                            ; 00594b30
    PUSH 0x2cfd900                      ; 00594b31 | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff16]          ; 00594b36
    LEA EDI,[EBP + 0xffffff52]          ; 00594b3c
    CALL core_xform.cpp_FUN_00583260    ; 00594b42
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00594b47
    LEA EAX,[EBP + 0xffffff52]          ; 00594b4a
    LEA ESI,[EBP + 0xffffff16]          ; 00594b50
    PUSH EAX                            ; 00594b56
    MOVSD ES:EDI,ESI                    ; 00594b57
    MOVSD ES:EDI,ESI                    ; 00594b58
    MOVSD ES:EDI,ESI                    ; 00594b59
    PUSH EBX                            ; 00594b5a
    LEA ESI,[EBP + -0x6]                ; 00594b5b
    CALL core_actor.cpp_FUN_00408b80    ; 00594b5e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00594b63
    LEA EAX,[EBP + -0x1e]               ; 00594b66
    PUSH EAX                            ; 00594b69
    LEA EDI,[EBP + -0x1e]               ; 00594b6a
    LEA ESI,[EBP + -0x6]                ; 00594b6d
    PUSH EBX                            ; 00594b70
    MOVSD ES:EDI,ESI                    ; 00594b71
    MOVSD ES:EDI,ESI                    ; 00594b72
    MOVSD ES:EDI,ESI                    ; 00594b73
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 00594b74
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00594b79
    ADD ESP,0x10                        ; 00594b7f
    TEST EAX,EAX                        ; 00594b82
    JZ 0x00594269                       ; 00594b84
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH EAX                            ; 00594b8a
    MOV EDX,dword ptr [EAX + 0x154]     ; 00594b8b
    CALL dword ptr [EDX + 0x10c]        ; 00594b91
    ADD ESP,0x4                         ; 00594b97
    TEST EAX,EAX                        ; 00594b9a
    JZ 0x00594269                       ; 00594b9c
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH 0x1                            ; 00594ba2
    PUSH 0x7                            ; 00594ba4
    MOV EDX,dword ptr [EBP + 0x52]      ; 00594ba6
    PUSH EDX                            ; 00594ba9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594baa
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00594baf
    JMP 0x00594269                      ; 00594bb2
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    MOV EDI,dword ptr [EBX + 0xcdd0]    ; 00594bb7
        ;   Label: LAB_00594bb7
    TEST EDI,EDI                        ; 00594bbd
    JNZ 0x00594269                      ; 00594bbf
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    CMP dword ptr [EBX + 0xdc],0x0      ; 00594bc5
    JNZ 0x00594269                      ; 00594bcc
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH EDI                            ; 00594bd2
    PUSH EDX                            ; 00594bd3
    LEA ESI,[EBP + -0x36]               ; 00594bd4
    LEA EDI,[EBP + 0xfffffe1a]          ; 00594bd7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 00594bdd
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00594be2
    LEA EAX,[EBP + 0xfffffe1a]          ; 00594be5
    LEA ESI,[EBP + -0x36]               ; 00594beb
    PUSH EAX                            ; 00594bee
    MOVSD ES:EDI,ESI                    ; 00594bef
    MOVSD ES:EDI,ESI                    ; 00594bf0
    MOVSD ES:EDI,ESI                    ; 00594bf1
    PUSH EBX                            ; 00594bf2
    LEA ESI,[EBP + 0xfffffe32]          ; 00594bf3
    CALL core_actor.cpp_FUN_00408b80    ; 00594bf9
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00594bfe
    PUSH 0x0                            ; 00594c01
    LEA EAX,[EBP + -0x2a]               ; 00594c03
    LEA EDI,[EBP + -0x2a]               ; 00594c06
    PUSH EAX                            ; 00594c09
    MOV ECX,dword ptr [0x005fed24]      ; 00594c0a | g_CGorePtr
    LEA ESI,[EBP + 0xfffffe32]          ; 00594c10
    PUSH ECX                            ; 00594c16
    MOVSD ES:EDI,ESI                    ; 00594c17
    MOVSD ES:EDI,ESI                    ; 00594c18
    MOVSD ES:EDI,ESI                    ; 00594c19
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 00594c1a
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00594c1f
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00594c22
    JMP 0x00594269                      ; 00594c2c
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    PUSH 0x1                            ; 00594c31
        ;   Label: LAB_00594c31
    PUSH 0x1                            ; 00594c33
    PUSH EAX                            ; 00594c35
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594c36
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00594c3b
    JMP 0x00594269                      ; 00594c3e
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    PUSH dword ptr [EBP + 0x92]         ; 00594c43
        ;   Label: LAB_00594c43
    MOV EAX,dword ptr [EBX + 0x154]     ; 00594c49
    PUSH EBX                            ; 00594c4f
    CALL dword ptr [EAX + 0x144]        ; 00594c50
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00594c56
    ADD ESP,0x8                         ; 00594c5c
    TEST EDI,EDI                        ; 00594c5f
    JZ 0x00594269                       ; 00594c61
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    JZ 0x00594d04                       ; 00594c67
        ;   XREF to: 00594d04 (CONDITIONAL_JUMP)  ; LAB_00594d04
    CMP dword ptr [EBX + 0xd080],0x0    ; 00594c6d
    JZ 0x00594d04                       ; 00594c74
        ;   XREF to: 00594d04 (CONDITIONAL_JUMP)  ; LAB_00594d04
    MOV EAX,EDI                         ; 00594c7a
    LEA ESI,[EBP + 0xfffffe7a]          ; 00594c7c
    LEA EDX,[EBX + 0x20]                ; 00594c82
    FLD float ptr [EAX + 0x20]          ; 00594c85
    FLD float ptr [EAX + 0x24]          ; 00594c88
    FLD float ptr [EAX + 0x28]          ; 00594c8b
    LEA EDI,[EBP + 0xfffffce2]          ; 00594c8e
    FXCH ST2                            ; 00594c94
    FSUB float ptr [EDX]                ; 00594c96
    FXCH                                ; 00594c98
    FSUB float ptr [EDX + 0x4]          ; 00594c9a
    FXCH ST2                            ; 00594c9d
    FSUB float ptr [EDX + 0x8]          ; 00594c9f
    FXCH                                ; 00594ca2
    FSTP float ptr [EBP + 0xfffffe7a]   ; 00594ca4
    FXCH                                ; 00594caa
    FSTP float ptr [EBP + 0xfffffe7e]   ; 00594cac
    FSTP float ptr [EBP + 0xfffffe82]   ; 00594cb2
    MOVSD ES:EDI,ESI                    ; 00594cb8
    MOVSD ES:EDI,ESI                    ; 00594cb9
    MOVSD ES:EDI,ESI                    ; 00594cba
    FLD float ptr [EBP + 0xfffffce6]    ; 00594cbb
    FMUL ST0                            ; 00594cc1
    FLD float ptr [EBP + 0xfffffce2]    ; 00594cc3
    FMUL ST0                            ; 00594cc9
    FADDP                               ; 00594ccb
    FLD float ptr [EBP + 0xfffffcea]    ; 00594ccd
    FMUL ST0                            ; 00594cd3
    FADDP                               ; 00594cd5
    FSQRT                               ; 00594cd7
    FST float ptr [EBP + 0x46]          ; 00594cd9
    FCOMP float ptr [EBX + 0xcddc]      ; 00594cdc
    FNSTSW AX                           ; 00594ce2
    SAHF                                ; 00594ce4
    JBE 0x00594cf6                      ; 00594ce5
        ;   XREF to: 00594cf6 (CONDITIONAL_JUMP)  ; LAB_00594cf6
    MOV dword ptr [EBX + 0xcde4],0x0    ; 00594ce7
        ;   Label: LAB_00594ce7
    JMP 0x00594269                      ; 00594cf1
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    FLD float ptr [EBP + 0x46]          ; 00594cf6
        ;   Label: LAB_00594cf6
    FCOMP double ptr [0x005d9359]       ; 00594cf9 | DAT_005d9359
    FNSTSW AX                           ; 00594cff
    SAHF                                ; 00594d01
    JA 0x00594ce7                       ; 00594d02
        ;   XREF to: 00594ce7 (CONDITIONAL_JUMP)  ; LAB_00594ce7
    MOV ECX,dword ptr [0x02cfd81c]      ; 00594d04 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_00594d04
    PUSH ECX                            ; 00594d0a
    MOV ESI,dword ptr [EBX + 0xd080]    ; 00594d0b
    PUSH ESI                            ; 00594d11
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00594d12
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00594d17
    TEST EAX,EAX                        ; 00594d1a
    JZ 0x00594d24                       ; 00594d1c
        ;   XREF to: 00594d24 (CONDITIONAL_JUMP)  ; LAB_00594d24
    CMP dword ptr [EBP + 0x6e],0xe      ; 00594d1e
    JZ 0x00594d66                       ; 00594d22
        ;   XREF to: 00594d66 (CONDITIONAL_JUMP)  ; LAB_00594d66
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00594d24
        ;   Label: LAB_00594d24
    JZ 0x00594269                       ; 00594d2b
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH 0x3ecccccd                     ; 00594d31
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00594d36
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00594d3b
    TEST EAX,EAX                        ; 00594d3e
    JNZ 0x00594d7e                      ; 00594d40
        ;   XREF to: 00594d7e (CONDITIONAL_JUMP)  ; LAB_00594d7e
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00594d42
        ;   Label: LAB_00594d42
    LEA EAX,[EBX + 0x158]               ; 00594d45
    CMP EDX,0xe                         ; 00594d4b
    JNZ 0x00594c31                      ; 00594d4e
        ;   XREF to: 00594c31 (CONDITIONAL_JUMP)  ; LAB_00594c31
    PUSH 0x1                            ; 00594d54
    PUSH 0xf                            ; 00594d56
    PUSH EAX                            ; 00594d58
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594d59
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00594d5e
    JMP 0x00594269                      ; 00594d61
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    PUSH 0x1                            ; 00594d66
        ;   Label: LAB_00594d66
    PUSH 0x0                            ; 00594d68
    LEA EAX,[EBX + 0x158]               ; 00594d6a
    PUSH EAX                            ; 00594d70
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594d71
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00594d76
    JMP 0x00594269                      ; 00594d79
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    PUSH EBX                            ; 00594d7e
        ;   Label: LAB_00594d7e
    CALL core_tawiscara.cpp_FUN_00595710 ; 00594d7f
        ;   XREF to: 00595710 (UNCONDITIONAL_CALL)  ; undefined core_tawiscara.cpp_FUN_00595710()
    ADD ESP,0x4                         ; 00594d84
    JMP 0x00594d42                      ; 00594d87
        ;   XREF to: 00594d42 (UNCONDITIONAL_JUMP)  ; LAB_00594d42
    PUSH dword ptr [EBP + 0x92]         ; 00594d89
        ;   Label: LAB_00594d89
    MOV EAX,dword ptr [EBX + 0x154]     ; 00594d8f
    PUSH EBX                            ; 00594d95
    CALL dword ptr [EAX + 0x144]        ; 00594d96
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00594d9c
    ADD ESP,0x8                         ; 00594da2
    TEST EDI,EDI                        ; 00594da5
    JZ 0x00594e4b                       ; 00594da7
        ;   XREF to: 00594e4b (CONDITIONAL_JUMP)  ; LAB_00594e4b
    CMP dword ptr [EBX + 0xd080],0x0    ; 00594dad
    JZ 0x00594e79                       ; 00594db4
        ;   XREF to: 00594e79 (CONDITIONAL_JUMP)  ; LAB_00594e79
    MOV EAX,EDI                         ; 00594dba
    LEA ESI,[EBP + -0x66]               ; 00594dbc
    LEA EDX,[EBX + 0x20]                ; 00594dbf
    FLD float ptr [EAX + 0x20]          ; 00594dc2
    FLD float ptr [EAX + 0x24]          ; 00594dc5
    FLD float ptr [EAX + 0x28]          ; 00594dc8
    LEA EDI,[EBP + 0xfffffe56]          ; 00594dcb
    FXCH ST2                            ; 00594dd1
    FSUB float ptr [EDX]                ; 00594dd3
    FXCH                                ; 00594dd5
    FSUB float ptr [EDX + 0x4]          ; 00594dd7
    FXCH ST2                            ; 00594dda
    FSUB float ptr [EDX + 0x8]          ; 00594ddc
    FXCH                                ; 00594ddf
    FSTP float ptr [EBP + -0x66]        ; 00594de1
    FXCH                                ; 00594de4
    FSTP float ptr [EBP + -0x62]        ; 00594de6
    FSTP float ptr [EBP + -0x5e]        ; 00594de9
    MOVSD ES:EDI,ESI                    ; 00594dec
    MOVSD ES:EDI,ESI                    ; 00594ded
    MOVSD ES:EDI,ESI                    ; 00594dee
    FLD float ptr [EBP + 0xfffffe5a]    ; 00594def
    FMUL ST0                            ; 00594df5
    FLD float ptr [EBP + 0xfffffe56]    ; 00594df7
    FMUL ST0                            ; 00594dfd
    FADDP                               ; 00594dff
    FLD float ptr [EBP + 0xfffffe5e]    ; 00594e01
    FMUL ST0                            ; 00594e07
    FADDP                               ; 00594e09
    FSQRT                               ; 00594e0b
    FST float ptr [EBP + 0x56]          ; 00594e0d
    FCOMP float ptr [EBX + 0xcddc]      ; 00594e10
    FNSTSW AX                           ; 00594e16
    SAHF                                ; 00594e18
    JA 0x00594e29                       ; 00594e19
        ;   XREF to: 00594e29 (CONDITIONAL_JUMP)  ; LAB_00594e29
    FLD float ptr [EBP + 0x56]          ; 00594e1b
    FCOMP double ptr [0x005d9359]       ; 00594e1e | DAT_005d9359
    FNSTSW AX                           ; 00594e24
    SAHF                                ; 00594e26
    JBE 0x00594e79                      ; 00594e27
        ;   XREF to: 00594e79 (CONDITIONAL_JUMP)  ; LAB_00594e79
    PUSH 0x1                            ; 00594e29
        ;   Label: LAB_00594e29
    PUSH 0x0                            ; 00594e2b
    LEA EAX,[EBX + 0x158]               ; 00594e2d
    PUSH EAX                            ; 00594e33
    MOV dword ptr [EBX + 0xcde4],0x0    ; 00594e34
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594e3e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00594e43
    JMP 0x00594269                      ; 00594e46
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    PUSH dword ptr [EBP + 0x92]         ; 00594e4b
        ;   Label: LAB_00594e4b
    PUSH EBX                            ; 00594e51
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00594e52
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00594e57
    TEST EAX,EAX                        ; 00594e5a
    JNZ 0x00594269                      ; 00594e5c
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH 0x1                            ; 00594e62
    PUSH EDI                            ; 00594e64
    LEA EAX,[EBX + 0x158]               ; 00594e65
    PUSH EAX                            ; 00594e6b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00594e6c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00594e71
    JMP 0x00594269                      ; 00594e74
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    MOV EDX,dword ptr [0x02cfd81c]      ; 00594e79 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_00594e79
    PUSH EDX                            ; 00594e7f
    MOV ECX,dword ptr [EBX + 0xd080]    ; 00594e80
    PUSH ECX                            ; 00594e86
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00594e87
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00594e8c
    TEST EAX,EAX                        ; 00594e8f
    JZ 0x00594e9d                       ; 00594e91
        ;   XREF to: 00594e9d (CONDITIONAL_JUMP)  ; LAB_00594e9d
    CMP dword ptr [EBP + 0x6e],0xf      ; 00594e93
    JZ 0x00594d66                       ; 00594e97
        ;   XREF to: 00594d66 (CONDITIONAL_JUMP)  ; LAB_00594d66
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00594e9d
        ;   Label: LAB_00594e9d
    MOV EDI,dword ptr [EBX + 0xd054]    ; 00594ea3
    MOV dword ptr [EBP + 0x6a],EAX      ; 00594ea9
    CMP EDI,0x2                         ; 00594eac
    JNZ 0x00594ff9                      ; 00594eaf
        ;   XREF to: 00594ff9 (CONDITIONAL_JUMP)  ; LAB_00594ff9
    CMP dword ptr [EBX + 0xd088],0x0    ; 00594eb5
    JNZ 0x0059514c                      ; 00594ebc
        ;   XREF to: 0059514c (CONDITIONAL_JUMP)  ; LAB_0059514c
    MOV ECX,0x5d92cc                    ; 00594ec2 | = "..\\core\\tawiscara.cpp"
        ;   Label: LAB_00594ec2
    MOV ESI,0x1ac                       ; 00594ec7
    PUSH 0x5d92e2                       ; 00594ecc | = "Alpha werewolf requires 2 waypoints"
    MOV dword ptr [0x01d71de0],ECX      ; 00594ed1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00594ed7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00594edd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00594ee2
    SUB ESP,0x8                         ; 00594ee5
        ;   Label: LAB_00594ee5
    FLD float ptr [EBX + 0xd094]        ; 00594ee8
    FSTP double ptr [ESP]               ; 00594eee
    MOV EDI,dword ptr [EBX + 0xd090]    ; 00594ef1
    PUSH EDI                            ; 00594ef7
    PUSH 0x5d9306                       ; 00594ef8 | = "Phase: %d, Timer: %f\n"
    MOV EAX,[0x005f1690]                ; 00594efd | g_CConsolePtr
    PUSH EAX                            ; 00594f02 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00594f03
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV EDX,dword ptr [EBX + 0xd090]    ; 00594f08
    ADD ESP,0x14                        ; 00594f0e
    CMP EDX,0x1                         ; 00594f11
    JNZ 0x0059515e                      ; 00594f14
        ;   XREF to: 0059515e (CONDITIONAL_JUMP)  ; LAB_0059515e
    MOV EAX,dword ptr [EBX + 0xd088]    ; 00594f1a
        ;   Label: LAB_00594f1a
    ADD EAX,0x20                        ; 00594f20
    PUSH EAX                            ; 00594f23
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00594f24
    PUSH ESI                            ; 00594f2a
    LEA ESI,[EBP + 0xfffffe6e]          ; 00594f2b
    LEA EDI,[EBP + 0xfffffe3e]          ; 00594f31
    CALL core_actor.cpp_FUN_00408bf0    ; 00594f37
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + 0xfffffe6e]          ; 00594f3c
    MOVSD ES:EDI,ESI                    ; 00594f42
    MOVSD ES:EDI,ESI                    ; 00594f43
    MOVSD ES:EDI,ESI                    ; 00594f44
    ADD ESP,0x8                         ; 00594f45
    FLD float ptr [EBP + 0xfffffe46]    ; 00594f48
    FLDZ                                ; 00594f4e
    FCOMPP                              ; 00594f50
    FNSTSW AX                           ; 00594f52
    SAHF                                ; 00594f54
    JBE 0x0059516c                      ; 00594f55
        ;   XREF to: 0059516c (CONDITIONAL_JUMP)  ; LAB_0059516c
    MOV EAX,dword ptr [EBX + 0xd088]    ; 00594f5b
    MOV dword ptr [EBP + 0x6a],EAX      ; 00594f61
        ;   Label: LAB_00594f61
    MOV EAX,dword ptr [EBX + 0xd090]    ; 00594f64
        ;   Label: LAB_00594f64
    CMP EAX,0x1                         ; 00594f6a
    JNZ 0x00595298                      ; 00594f6d
        ;   XREF to: 00595298 (CONDITIONAL_JUMP)  ; LAB_00595298
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00594f73
        ;   Label: LAB_00594f73
    LEA EDI,[EBP + -0x7e]               ; 00594f76
    LEA ESI,[EBP + 0xfffffdc6]          ; 00594f79
    LEA EDX,[EBX + 0x20]                ; 00594f7f
    FLD float ptr [EAX + 0x20]          ; 00594f82
    FLD float ptr [EAX + 0x24]          ; 00594f85
    FLD float ptr [EAX + 0x28]          ; 00594f88
    FXCH ST2                            ; 00594f8b
    FSUB float ptr [EDX]                ; 00594f8d
    FXCH                                ; 00594f8f
    FSUB float ptr [EDX + 0x4]          ; 00594f91
    FXCH ST2                            ; 00594f94
    FSUB float ptr [EDX + 0x8]          ; 00594f96
    FXCH                                ; 00594f99
    FSTP float ptr [EBP + 0xfffffdc6]   ; 00594f9b
    FXCH                                ; 00594fa1
    FSTP float ptr [EBP + 0xfffffdca]   ; 00594fa3
    FSTP float ptr [EBP + 0xfffffdce]   ; 00594fa9
    MOVSD ES:EDI,ESI                    ; 00594faf
    MOVSD ES:EDI,ESI                    ; 00594fb0
    MOVSD ES:EDI,ESI                    ; 00594fb1
    FLD float ptr [EBP + -0x7a]         ; 00594fb2
    FMUL ST0                            ; 00594fb5
    FLD float ptr [EBP + -0x7e]         ; 00594fb7
    FMUL ST0                            ; 00594fba
    FADDP                               ; 00594fbc
    FLD float ptr [EBP + -0x76]         ; 00594fbe
    FMUL ST0                            ; 00594fc1
    FADDP                               ; 00594fc3
    FSQRT                               ; 00594fc5
    FCOMP double ptr [0x005d9361]       ; 00594fc7 | DAT_005d9361
    FNSTSW AX                           ; 00594fcd
    SAHF                                ; 00594fcf
    JNC 0x00594ff9                      ; 00594fd0
        ;   XREF to: 00594ff9 (CONDITIONAL_JUMP)  ; LAB_00594ff9
    MOV EDI,dword ptr [EBX + 0xd090]    ; 00594fd2
    INC EDI                             ; 00594fd8
    MOV dword ptr [EBX + 0xd090],EDI    ; 00594fd9
    CMP EDI,0x3                         ; 00594fdf
    JLE 0x00594fee                      ; 00594fe2
        ;   XREF to: 00594fee (CONDITIONAL_JUMP)  ; LAB_00594fee
    MOV dword ptr [EBX + 0xd090],0x0    ; 00594fe4
    MOV EAX,[0x005e7528]                ; 00594fee | DAT_005e7528
        ;   Label: LAB_00594fee
    MOV dword ptr [EBX + 0xd094],EAX    ; 00594ff3
    MOV EAX,[0x005e751c]                ; 00594ff9 | DAT_005e751c
        ;   Label: LAB_00594ff9
    PUSH 0x3e32b8c2                     ; 00594ffe
    MOV dword ptr [EBP + 0x36],EAX      ; 00595003
    LEA EAX,[EBX + 0x249c]              ; 00595006
    PUSH 0x3f000000                     ; 0059500c
    MOV dword ptr [EAX + 0x8],0x0       ; 00595011
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00595018
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059501b
    MOV dword ptr [EAX + 0x4],EDX       ; 0059501e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00595021
    MOV dword ptr [EAX],EDX             ; 00595024
    MOV EAX,dword ptr [EBP + 0x36]      ; 00595026
    XOR EDX,EDX                         ; 00595029
    MOV dword ptr [EBP + 0xfffffd6e],EAX ; 0059502b
    LEA EAX,[EBP + 0xfffffd66]          ; 00595031
    MOV dword ptr [EBP + 0xfffffd66],EDX ; 00595037
    PUSH EAX                            ; 0059503d
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0059503e
    MOV dword ptr [EBP + 0xfffffd6a],EDX ; 00595041
    PUSH ESI                            ; 00595047
    MOV EAX,dword ptr [EAX + 0x154]     ; 00595048
    CALL dword ptr [EAX + 0xc4]         ; 0059504e
    ADD ESP,0x4                         ; 00595054
    PUSH EAX                            ; 00595057
    ADD ESI,0x20                        ; 00595058
    PUSH ESI                            ; 0059505b
    PUSH EBX                            ; 0059505c
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0059505d
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00595062
    TEST EAX,EAX                        ; 00595065
    JL 0x005952d9                       ; 00595067
        ;   XREF to: 005952d9 (CONDITIONAL_JUMP)  ; LAB_005952d9
    JLE 0x00595306                      ; 0059506d
        ;   XREF to: 00595306 (CONDITIONAL_JUMP)  ; LAB_00595306
    CMP dword ptr [EBX + 0xd054],0x2    ; 00595073
    JNZ 0x00595094                      ; 0059507a
        ;   XREF to: 00595094 (CONDITIONAL_JUMP)  ; LAB_00595094
    MOV EAX,dword ptr [EBX + 0xd090]    ; 0059507c
    CMP EAX,0x1                         ; 00595082
    JZ 0x00594269                       ; 00595085
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    CMP EAX,0x3                         ; 0059508b
    JZ 0x00594269                       ; 0059508e
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    FLD float ptr [EBX + 0xcde0]        ; 00595094
        ;   Label: LAB_00595094
    FLDZ                                ; 0059509a
    FCOMPP                              ; 0059509c
    FNSTSW AX                           ; 0059509e
    SAHF                                ; 005950a0
    JC 0x0059511f                       ; 005950a1
        ;   XREF to: 0059511f (CONDITIONAL_JUMP)  ; LAB_0059511f
    PUSH 0x2                            ; 005950a7
    PUSH 0x0                            ; 005950a9
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005950ab
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005950b0
    MOV ESI,EAX                         ; 005950b3
    TEST EAX,EAX                        ; 005950b5
    JNZ 0x005950cc                      ; 005950b7
        ;   XREF to: 005950cc (CONDITIONAL_JUMP)  ; LAB_005950cc
    PUSH 0x1                            ; 005950b9
    PUSH 0x2                            ; 005950bb
    LEA EAX,[EBX + 0x158]               ; 005950bd
    PUSH EAX                            ; 005950c3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005950c4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005950c9
    CMP ESI,0x1                         ; 005950cc
        ;   Label: LAB_005950cc
    JNZ 0x005950e3                      ; 005950cf
        ;   XREF to: 005950e3 (CONDITIONAL_JUMP)  ; LAB_005950e3
    PUSH ESI                            ; 005950d1
    PUSH 0x3                            ; 005950d2
    LEA EAX,[EBX + 0x158]               ; 005950d4
    PUSH EAX                            ; 005950da
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005950db
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005950e0
    CMP ESI,0x2                         ; 005950e3
        ;   Label: LAB_005950e3
    JNZ 0x005950fb                      ; 005950e6
        ;   XREF to: 005950fb (CONDITIONAL_JUMP)  ; LAB_005950fb
    PUSH 0x1                            ; 005950e8
    PUSH 0x4                            ; 005950ea
    LEA EAX,[EBX + 0x158]               ; 005950ec
    PUSH EAX                            ; 005950f2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005950f3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005950f8
    PUSH 0x3f19999a                     ; 005950fb
        ;   Label: LAB_005950fb
    MOV dword ptr [EBX + 0xcde0],0x3f800000 ; 00595100
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0059510a
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0059510f
    TEST EAX,EAX                        ; 00595112
    JZ 0x0059511f                       ; 00595114
        ;   XREF to: 0059511f (CONDITIONAL_JUMP)  ; LAB_0059511f
    PUSH EBX                            ; 00595116
    CALL core_tawiscara.cpp_FUN_00595710 ; 00595117
        ;   XREF to: 00595710 (UNCONDITIONAL_CALL)  ; undefined core_tawiscara.cpp_FUN_00595710()
    ADD ESP,0x4                         ; 0059511c
    FLD float ptr [EBX + 0xd074]        ; 0059511f
        ;   Label: LAB_0059511f
    FSUB float ptr [EBP + 0x92]         ; 00595125
    FST float ptr [EBX + 0xd074]        ; 0059512b
    FLDZ                                ; 00595131
    FCOMPP                              ; 00595133
    FNSTSW AX                           ; 00595135
    SAHF                                ; 00595137
    JBE 0x00594269                      ; 00595138
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH EBX                            ; 0059513e
    CALL core_tawiscara.cpp_FUN_00595710 ; 0059513f
        ;   XREF to: 00595710 (UNCONDITIONAL_CALL)  ; undefined core_tawiscara.cpp_FUN_00595710()
    ADD ESP,0x4                         ; 00595144
    JMP 0x00594269                      ; 00595147
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    CMP dword ptr [EBX + 0xd08c],0x0    ; 0059514c
        ;   Label: LAB_0059514c
    JZ 0x00594ec2                       ; 00595153
        ;   XREF to: 00594ec2 (CONDITIONAL_JUMP)  ; LAB_00594ec2
    JMP 0x00594ee5                      ; 00595159
        ;   XREF to: 00594ee5 (UNCONDITIONAL_JUMP)  ; LAB_00594ee5
    CMP EDX,0x3                         ; 0059515e
        ;   Label: LAB_0059515e
    JZ 0x00594f1a                       ; 00595161
        ;   XREF to: 00594f1a (CONDITIONAL_JUMP)  ; LAB_00594f1a
    JMP 0x00594f64                      ; 00595167
        ;   XREF to: 00594f64 (UNCONDITIONAL_JUMP)  ; LAB_00594f64
    MOV EAX,dword ptr [EBX + 0xd08c]    ; 0059516c
        ;   Label: LAB_0059516c
    ADD EAX,0x20                        ; 00595172
    PUSH EAX                            ; 00595175
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00595176
    PUSH EDI                            ; 0059517c
    LEA ESI,[EBP + 0xfffffeaa]          ; 0059517d
    LEA EDI,[EBP + 0xfffffe86]          ; 00595183
    CALL core_actor.cpp_FUN_00408bf0    ; 00595189
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + 0xfffffeaa]          ; 0059518e
    MOVSD ES:EDI,ESI                    ; 00595194
    MOVSD ES:EDI,ESI                    ; 00595195
    MOVSD ES:EDI,ESI                    ; 00595196
    ADD ESP,0x8                         ; 00595197
    FLD float ptr [EBP + 0xfffffe8e]    ; 0059519a
    FLDZ                                ; 005951a0
    FCOMPP                              ; 005951a2
    FNSTSW AX                           ; 005951a4
    SAHF                                ; 005951a6
    JBE 0x005951b4                      ; 005951a7
        ;   XREF to: 005951b4 (CONDITIONAL_JUMP)  ; LAB_005951b4
    MOV EAX,dword ptr [EBX + 0xd08c]    ; 005951a9
    JMP 0x00594f61                      ; 005951af
        ;   XREF to: 00594f61 (UNCONDITIONAL_JUMP)  ; LAB_00594f61
    LEA EDI,[EBP + 0xfffffcee]          ; 005951b4
        ;   Label: LAB_005951b4
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 005951ba
    LEA ESI,[EBP + 0xfffffd36]          ; 005951c0
    MOV EAX,dword ptr [EBX + 0xd088]    ; 005951c6
    FLD float ptr [EDX + 0x20]          ; 005951cc
    FLD float ptr [EDX + 0x24]          ; 005951cf
    FLD float ptr [EDX + 0x28]          ; 005951d2
    FXCH ST2                            ; 005951d5
    FSUB float ptr [EAX + 0x20]         ; 005951d7
    FXCH                                ; 005951da
    FSUB float ptr [EAX + 0x24]         ; 005951dc
    FXCH ST2                            ; 005951df
    FSUB float ptr [EAX + 0x28]         ; 005951e1
    FXCH                                ; 005951e4
    FSTP float ptr [EBP + 0xfffffd36]   ; 005951e6
    FXCH                                ; 005951ec
    FSTP float ptr [EBP + 0xfffffd3a]   ; 005951ee
    FSTP float ptr [EBP + 0xfffffd3e]   ; 005951f4
    MOVSD ES:EDI,ESI                    ; 005951fa
    MOVSD ES:EDI,ESI                    ; 005951fb
    MOVSD ES:EDI,ESI                    ; 005951fc
    FLD float ptr [EBP + 0xfffffcf2]    ; 005951fd
    FMUL ST0                            ; 00595203
    FLD float ptr [EBP + 0xfffffcee]    ; 00595205
    FMUL ST0                            ; 0059520b
    FADDP                               ; 0059520d
    FLD float ptr [EBP + 0xfffffcf6]    ; 0059520f
    FMUL ST0                            ; 00595215
    FADDP                               ; 00595217
    MOV dword ptr [EBP + 0x42],EAX      ; 00595219
    FSQRT                               ; 0059521c
    FLD float ptr [EDX + 0x20]          ; 0059521e
    FLD float ptr [EDX + 0x24]          ; 00595221
    MOV ECX,dword ptr [EBX + 0xd08c]    ; 00595224
    FLD float ptr [EDX + 0x28]          ; 0059522a
    LEA EAX,[ECX + 0x20]                ; 0059522d
    LEA EDI,[EBP + 0xfffffd1e]          ; 00595230
    LEA ESI,[EBP + 0xfffffdd2]          ; 00595236
    FXCH ST2                            ; 0059523c
    FSUB float ptr [EAX]                ; 0059523e
    FXCH                                ; 00595240
    FSUB float ptr [EAX + 0x4]          ; 00595242
    FXCH ST2                            ; 00595245
    FSUB float ptr [EAX + 0x8]          ; 00595247
    FXCH                                ; 0059524a
    FSTP float ptr [EBP + 0xfffffdd2]   ; 0059524c
    FXCH                                ; 00595252
    FSTP float ptr [EBP + 0xfffffdd6]   ; 00595254
    FSTP float ptr [EBP + 0xfffffdda]   ; 0059525a
    MOVSD ES:EDI,ESI                    ; 00595260
    MOVSD ES:EDI,ESI                    ; 00595261
    MOVSD ES:EDI,ESI                    ; 00595262
    FLD float ptr [EBP + 0xfffffd22]    ; 00595263
    FMUL ST0                            ; 00595269
    FLD float ptr [EBP + 0xfffffd1e]    ; 0059526b
    FMUL ST0                            ; 00595271
    FADDP                               ; 00595273
    FLD float ptr [EBP + 0xfffffd26]    ; 00595275
    FMUL ST0                            ; 0059527b
    FADDP                               ; 0059527d
    FSQRT                               ; 0059527f
    FCOMPP                              ; 00595281
    FNSTSW AX                           ; 00595283
    SAHF                                ; 00595285
    JNC 0x00595290                      ; 00595286
        ;   XREF to: 00595290 (CONDITIONAL_JUMP)  ; LAB_00595290
    MOV EAX,dword ptr [EBP + 0x42]      ; 00595288
    JMP 0x00594f61                      ; 0059528b
        ;   XREF to: 00594f61 (UNCONDITIONAL_JUMP)  ; LAB_00594f61
    MOV dword ptr [EBP + 0x6a],ECX      ; 00595290
        ;   Label: LAB_00595290
    JMP 0x00594f64                      ; 00595293
        ;   XREF to: 00594f64 (UNCONDITIONAL_JUMP)  ; LAB_00594f64
    CMP EAX,0x3                         ; 00595298
        ;   Label: LAB_00595298
    JZ 0x00594f73                       ; 0059529b
        ;   XREF to: 00594f73 (CONDITIONAL_JUMP)  ; LAB_00594f73
    FLD float ptr [EBX + 0xd094]        ; 005952a1
    FLDZ                                ; 005952a7
    FCOMPP                              ; 005952a9
    FNSTSW AX                           ; 005952ab
    SAHF                                ; 005952ad
    JC 0x00594ff9                       ; 005952ae
        ;   XREF to: 00594ff9 (CONDITIONAL_JUMP)  ; LAB_00594ff9
    MOV ECX,dword ptr [EBX + 0xd090]    ; 005952b4
    INC ECX                             ; 005952ba
    MOV dword ptr [EBX + 0xd090],ECX    ; 005952bb
    CMP ECX,0x3                         ; 005952c1
    JLE 0x00594ff9                      ; 005952c4
        ;   XREF to: 00594ff9 (CONDITIONAL_JUMP)  ; LAB_00594ff9
    MOV dword ptr [EBX + 0xd090],0x0    ; 005952ca
    JMP 0x00594ff9                      ; 005952d4
        ;   XREF to: 00594ff9 (UNCONDITIONAL_JUMP)  ; LAB_00594ff9
    PUSH EBX                            ; 005952d9
        ;   Label: LAB_005952d9
    PUSH 0x5d931c                       ; 005952da | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x005f1690]      ; 005952df | g_CConsolePtr
    PUSH ECX                            ; 005952e5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005952e6
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005952eb
    PUSH 0x1                            ; 005952ee
    PUSH 0x0                            ; 005952f0
    LEA EAX,[EBX + 0x158]               ; 005952f2
    PUSH EAX                            ; 005952f8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005952f9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005952fe
    JMP 0x0059511f                      ; 00595301
        ;   XREF to: 0059511f (UNCONDITIONAL_JUMP)  ; LAB_0059511f
    MOV EDI,dword ptr [0x02cfd81c]      ; 00595306 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_00595306
    PUSH EDI                            ; 0059530c
    MOV EAX,dword ptr [EBX + 0xd080]    ; 0059530d
    PUSH EAX                            ; 00595313
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00595314
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00595319
    TEST EAX,EAX                        ; 0059531c
    JNZ 0x0059511f                      ; 0059531e
        ;   XREF to: 0059511f (CONDITIONAL_JUMP)  ; LAB_0059511f
    FLD float ptr [ESI + 0x4]           ; 00595324
    FLD float ptr [ESI + 0x8]           ; 00595327
    FLD float ptr [ESI]                 ; 0059532a
    LEA EDI,[EBP + 0x12]                ; 0059532c
    LEA EAX,[EBX + 0x20]                ; 0059532f
    LEA EDX,[EBP + 0x12]                ; 00595332
    LEA ESI,[EBP + 0xfffffe62]          ; 00595335
    FSUB float ptr [EAX]                ; 0059533b
    FXCH ST2                            ; 0059533d
    FSUB float ptr [EAX + 0x4]          ; 0059533f
    FXCH                                ; 00595342
    FSUB float ptr [EAX + 0x8]          ; 00595344
    FXCH ST2                            ; 00595347
    FSTP float ptr [EBP + 0xfffffe62]   ; 00595349
    FSTP float ptr [EBP + 0xfffffe66]   ; 0059534f
    FSTP float ptr [EBP + 0xfffffe6a]   ; 00595355
    LEA EAX,[EBP + 0xfffffe9e]          ; 0059535b
    MOVSD ES:EDI,ESI                    ; 00595361
    MOVSD ES:EDI,ESI                    ; 00595362
    MOVSD ES:EDI,ESI                    ; 00595363
    CMP EAX,EDX                         ; 00595364
    JZ 0x00595383                       ; 00595366
        ;   XREF to: 00595383 (CONDITIONAL_JUMP)  ; LAB_00595383
    MOV EAX,dword ptr [EBP + 0x12]      ; 00595368
    MOV dword ptr [EBP + 0xfffffe9e],EAX ; 0059536b
    MOV EAX,dword ptr [EBP + 0x16]      ; 00595371
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 00595374
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0059537a
    MOV dword ptr [EBP + 0xfffffea6],EAX ; 0059537d
    FLD float ptr [EBP + 0xfffffea2]    ; 00595383
        ;   Label: LAB_00595383
    FMUL ST0                            ; 00595389
    FLD float ptr [EBP + 0xfffffe9e]    ; 0059538b
    FMUL ST0                            ; 00595391
    FADDP                               ; 00595393
    FLD float ptr [EBP + 0xfffffea6]    ; 00595395
    FMUL ST0                            ; 0059539b
    FADDP                               ; 0059539d
    FSQRT                               ; 0059539f
    MOV EDX,0x41a00000                  ; 005953a1
    MOV ECX,dword ptr [EBX + 0xd054]    ; 005953a6
    MOV dword ptr [EBP + 0x5e],EDX      ; 005953ac
    FSTP float ptr [EBP + 0x4e]         ; 005953af
    CMP ECX,0x1                         ; 005953b2
    JNZ 0x005953be                      ; 005953b5
        ;   XREF to: 005953be (CONDITIONAL_JUMP)  ; LAB_005953be
    MOV dword ptr [EBP + 0x5e],0x41200000 ; 005953b7
    CMP dword ptr [EBX + 0xd054],0x2    ; 005953be
        ;   Label: LAB_005953be
    JNZ 0x005953ce                      ; 005953c5
        ;   XREF to: 005953ce (CONDITIONAL_JUMP)  ; LAB_005953ce
    MOV dword ptr [EBP + 0x5e],0x41200000 ; 005953c7
    LEA EAX,[EBX + 0x158]               ; 005953ce
        ;   Label: LAB_005953ce
    FLD float ptr [EBP + 0x4e]          ; 005953d4
    MOV dword ptr [EBP + 0x4a],EAX      ; 005953d7
    FCOMP float ptr [EBP + 0x5e]        ; 005953da
    FNSTSW AX                           ; 005953dd
    SAHF                                ; 005953df
    JA 0x00595419                       ; 005953e0
        ;   XREF to: 00595419 (CONDITIONAL_JUMP)  ; LAB_00595419
    FLD float ptr [0x005e751c]          ; 005953e2 | DAT_005e751c
    FMUL float ptr [0x005d9369]         ; 005953e8 | DAT_005d9369
    FCOMP float ptr [EBP + 0x4e]        ; 005953ee
    FNSTSW AX                           ; 005953f1
    SAHF                                ; 005953f3
    JBE 0x0059511f                      ; 005953f4
        ;   XREF to: 0059511f (CONDITIONAL_JUMP)  ; LAB_0059511f
    CMP dword ptr [EBP + 0x6e],0xf      ; 005953fa
    JNZ 0x0059511f                      ; 005953fe
        ;   XREF to: 0059511f (CONDITIONAL_JUMP)  ; LAB_0059511f
    PUSH 0x1                            ; 00595404
    PUSH 0x0                            ; 00595406
    MOV ECX,dword ptr [EBP + 0x4a]      ; 00595408
    PUSH ECX                            ; 0059540b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059540c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00595411
    JMP 0x0059511f                      ; 00595414
        ;   XREF to: 0059511f (UNCONDITIONAL_JUMP)  ; LAB_0059511f
    LEA EAX,[EBP + 0xfffffe9e]          ; 00595419
        ;   Label: LAB_00595419
    PUSH EAX                            ; 0059541f
    LEA ESI,[EBP + 0xfffffee6]          ; 00595420
    LEA EDI,[EBP + 0xfffffe02]          ; 00595426
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0059542c
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffee6]          ; 00595431
    MOVSD ES:EDI,ESI                    ; 00595437
    MOVSD ES:EDI,ESI                    ; 00595438
    MOVSD ES:EDI,ESI                    ; 00595439
    ADD ESP,0x4                         ; 0059543a
    FLD float ptr [EBP + 0xfffffe06]    ; 0059543d
    FSUB float ptr [EBX + 0x34]         ; 00595443
    SUB ESP,0x4                         ; 00595446
    FSTP float ptr [ESP]                ; 00595449
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0059544c
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00595451
    FLD float ptr [EBP + 0x76]          ; 00595454
    FABS                                ; 00595457
    ADD ESP,0x4                         ; 00595459
    FCOMP double ptr [0x005d9371]       ; 0059545c | DAT_005d9371
    FNSTSW AX                           ; 00595462
    SAHF                                ; 00595464
    JNC 0x0059511f                      ; 00595465
        ;   XREF to: 0059511f (CONDITIONAL_JUMP)  ; LAB_0059511f
    PUSH 0x1                            ; 0059546b
    PUSH 0x8                            ; 0059546d
    MOV ESI,dword ptr [EBP + 0x4a]      ; 0059546f
    PUSH ESI                            ; 00595472
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00595473
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00595478
    PUSH 0x3f59999a                     ; 0059547b
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00595480
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00595485
    TEST EAX,EAX                        ; 00595488
    JNZ 0x005954c2                      ; 0059548a
        ;   XREF to: 005954c2 (CONDITIONAL_JUMP)  ; LAB_005954c2
    XOR EDI,EDI                         ; 0059548c
        ;   Label: LAB_0059548c
    XOR ESI,ESI                         ; 0059548e
    MOV EAX,[0x00603b28]                ; 00595490 | g_CDemonSetPtr
        ;   Label: LAB_00595490
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 00595495 | g_CDemonSetInstance.enemy_count
    JGE 0x0059511f                      ; 0059549b
        ;   XREF to: 0059511f (CONDITIONAL_JUMP)  ; LAB_0059511f
    MOV ECX,dword ptr [0x02d24aa4]      ; 005954a1 | g_CTawiscaraClassInfo.name_hash
    PUSH ECX                            ; 005954a7
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 005954a8
    PUSH EDX                            ; 005954af
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005954b0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005954b5
    TEST EAX,EAX                        ; 005954b8
    JNZ 0x005954cd                      ; 005954ba
        ;   XREF to: 005954cd (CONDITIONAL_JUMP)  ; LAB_005954cd
    INC ESI                             ; 005954bc
        ;   Label: LAB_005954bc
    ADD EDI,0x4                         ; 005954bd
    JMP 0x00595490                      ; 005954c0
        ;   XREF to: 00595490 (UNCONDITIONAL_JUMP)  ; LAB_00595490
    PUSH EBX                            ; 005954c2
        ;   Label: LAB_005954c2
    CALL core_tawiscara.cpp_FUN_00595710 ; 005954c3
        ;   XREF to: 00595710 (UNCONDITIONAL_CALL)  ; undefined core_tawiscara.cpp_FUN_00595710()
    ADD ESP,0x4                         ; 005954c8
    JMP 0x0059548c                      ; 005954cb
        ;   XREF to: 0059548c (UNCONDITIONAL_JUMP)  ; LAB_0059548c
    CMP EAX,EBX                         ; 005954cd
        ;   Label: LAB_005954cd
    JZ 0x005954bc                       ; 005954cf
        ;   XREF to: 005954bc (CONDITIONAL_JUMP)  ; LAB_005954bc
    ADD EAX,0x158                       ; 005954d1
    PUSH EAX                            ; 005954d6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005954d7
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005954dc
    ADD ESP,0x4                         ; 005954df
    CMP EAX,0x8                         ; 005954e2
    JNZ 0x005954bc                      ; 005954e5
        ;   XREF to: 005954bc (CONDITIONAL_JUMP)  ; LAB_005954bc
    PUSH 0x2                            ; 005954e7
    PUSH 0x0                            ; 005954e9
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005954eb
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005954f0
    MOV EDX,EAX                         ; 005954f3
    CMP EAX,0x1                         ; 005954f5
    JNZ 0x00595506                      ; 005954f8
        ;   XREF to: 00595506 (CONDITIONAL_JUMP)  ; LAB_00595506
    FLD float ptr [EBX + 0x34]          ; 005954fa
    FADD float ptr [0x005d9381]         ; 005954fd | DAT_005d9381
    FSTP float ptr [EBX + 0x34]         ; 00595503
    CMP EDX,0x2                         ; 00595506
        ;   Label: LAB_00595506
    JNZ 0x0059511f                      ; 00595509
        ;   XREF to: 0059511f (CONDITIONAL_JUMP)  ; LAB_0059511f
    FLD float ptr [EBX + 0x34]          ; 0059550f
    FADD float ptr [0x005d9385]         ; 00595512 | DAT_005d9385
    FSTP float ptr [EBX + 0x34]         ; 00595518
    JMP 0x0059511f                      ; 0059551b
        ;   XREF to: 0059511f (UNCONDITIONAL_JUMP)  ; LAB_0059511f
    LEA EDX,[EBX + 0x158]               ; 00595520
        ;   Label: LAB_00595520
    MOV dword ptr [EBP + 0x52],EDX      ; 00595526
    JBE 0x00594ad4                      ; 00595529
        ;   XREF to: 00594ad4 (CONDITIONAL_JUMP)  ; LAB_00594ad4
    CMP EDI,0xe                         ; 0059552f
    JNC 0x00595551                      ; 00595532
        ;   XREF to: 00595551 (CONDITIONAL_JUMP)  ; LAB_00595551
    CMP EDI,0x8                         ; 00595534
    JC 0x00594269                       ; 00595537
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    JBE 0x005947de                      ; 0059553d
        ;   XREF to: 005947de (CONDITIONAL_JUMP)  ; LAB_005947de
    CMP EDI,0xd                         ; 00595543
    JZ 0x00594bb7                       ; 00595546
        ;   XREF to: 00594bb7 (CONDITIONAL_JUMP)  ; LAB_00594bb7
    JMP 0x00594269                      ; 0059554c
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    JBE 0x005947a3                      ; 00595551
        ;   XREF to: 005947a3 (CONDITIONAL_JUMP)  ; LAB_005947a3
        ;   Label: LAB_00595551
    CMP EDI,0xf                         ; 00595557
    JBE 0x00594d89                      ; 0059555a
        ;   XREF to: 00594d89 (CONDITIONAL_JUMP)  ; LAB_00594d89
    CMP EDI,0x13                        ; 00595560
    JZ 0x00594251                       ; 00595563
        ;   XREF to: 00594251 (CONDITIONAL_JUMP)  ; LAB_00594251
    JMP 0x00594269                      ; 00595569
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    JBE 0x00594d89                      ; 0059556e
        ;   XREF to: 00594d89 (CONDITIONAL_JUMP)  ; LAB_00594d89
        ;   Label: LAB_0059556e
    CMP EDI,0x2                         ; 00595574
    JBE 0x00594821                      ; 00595577
        ;   XREF to: 00594821 (CONDITIONAL_JUMP)  ; LAB_00594821
    MOV ECX,dword ptr [EAX + 0x1d5ba04] ; 0059557d
    CMP ECX,dword ptr [EBX + 0xcde4]    ; 00595583
    JZ 0x00595637                       ; 00595589
        ;   XREF to: 00595637 (CONDITIONAL_JUMP)  ; LAB_00595637
    LEA EAX,[EBP + 0xfffffc6a]          ; 0059558f
    PUSH EAX                            ; 00595595
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00595596
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0059559b
    PUSH 0x41700000                     ; 0059559e
    PUSH 0x40e00000                     ; 005955a3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 005955a8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005955ad
    MOV dword ptr [EBP + 0xfffffc9e],EBX ; 005955b0
    MOV dword ptr [EBP + 0xfffffca2],EBX ; 005955b6
    ADD ESP,0x8                         ; 005955bc
    FLD float ptr [EBP + 0x76]          ; 005955bf
    LEA EAX,[EBP + 0xfffffc6a]          ; 005955c2
    FSTP float ptr [EBP + 0xfffffc6e]   ; 005955c8
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 005955ce
    PUSH EAX                            ; 005955d4
    LEA EAX,[EDX*0x4 + 0x0]             ; 005955d5
    SUB EAX,EDX                         ; 005955dc
    MOV ESI,dword ptr [EBP + 0x66]      ; 005955de
    SHL EAX,0x4                         ; 005955e1
    ADD EAX,ESI                         ; 005955e4
    PUSH 0x3ecccccd                     ; 005955e6
    PUSH EAX                            ; 005955eb
    PUSH 0x2cfd900                      ; 005955ec | DAT_02cfd900
    LEA ESI,[EBP + 0x1e]                ; 005955f1
    LEA EDI,[EBP + 0xffffff6a]          ; 005955f4
    CALL core_xform.cpp_FUN_00583260    ; 005955fa
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 005955ff
    LEA EAX,[EBP + 0xffffff6a]          ; 00595602
    LEA ESI,[EBP + 0x1e]                ; 00595608
    PUSH EAX                            ; 0059560b
    MOVSD ES:EDI,ESI                    ; 0059560c
    MOVSD ES:EDI,ESI                    ; 0059560d
    MOVSD ES:EDI,ESI                    ; 0059560e
    PUSH EBX                            ; 0059560f
    LEA ESI,[EBP + 0x6]                 ; 00595610
    CALL core_actor.cpp_FUN_00408b80    ; 00595613
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00595618
    LEA EAX,[EBP + 0xfffffdba]          ; 0059561b
    PUSH EAX                            ; 00595621
    LEA EDI,[EBP + 0xfffffdba]          ; 00595622
    LEA ESI,[EBP + 0x6]                 ; 00595628
    PUSH EBX                            ; 0059562b
    MOVSD ES:EDI,ESI                    ; 0059562c
    MOVSD ES:EDI,ESI                    ; 0059562d
    MOVSD ES:EDI,ESI                    ; 0059562e
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 0059562f
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00595634
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00595637
        ;   Label: LAB_00595637
    TEST EDI,EDI                        ; 0059563d
    JZ 0x00594269                       ; 0059563f
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH EDI                            ; 00595645
    MOV EDX,dword ptr [EDI + 0x154]     ; 00595646
    CALL dword ptr [EDX + 0x10c]        ; 0059564c
    ADD ESP,0x4                         ; 00595652
    TEST EAX,EAX                        ; 00595655
    JZ 0x00594269                       ; 00595657
        ;   XREF to: 00594269 (CONDITIONAL_JUMP)  ; LAB_00594269
    PUSH 0x1                            ; 0059565d
    PUSH 0x7                            ; 0059565f
    LEA EAX,[EBX + 0x158]               ; 00595661
    PUSH EAX                            ; 00595667
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00595668
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059566d
    JMP 0x00594269                      ; 00595670
        ;   XREF to: 00594269 (UNCONDITIONAL_JUMP)  ; LAB_00594269
    PUSH 0x5d933d                       ; 00595675 | = "werewolf-eat.wav"
        ;   Label: LAB_00595675
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059567a
    PUSH EBX                            ; 00595680
    CALL dword ptr [EAX + 0x2c]         ; 00595681
    ADD ESP,0x8                         ; 00595684
    MOV dword ptr [EBX + 0xd07c],EAX    ; 00595687
    JMP 0x00594297                      ; 0059568d
        ;   XREF to: 00594297 (UNCONDITIONAL_JUMP)  ; LAB_00594297
    MOV EDI,dword ptr [EBX + 0xd07c]    ; 00595692
        ;   Label: LAB_00595692
    PUSH EDI                            ; 00595698
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00595699
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0059569e
    JMP 0x00594297                      ; 005956a1
        ;   XREF to: 00594297 (UNCONDITIONAL_JUMP)  ; LAB_00594297
    CMP EDI,0xf                         ; 005956a6
        ;   Label: LAB_005956a6
    JZ 0x005942bc                       ; 005956a9
        ;   XREF to: 005942bc (CONDITIONAL_JUMP)  ; LAB_005942bc
    FLD float ptr [EBP + 0x5a]          ; 005956af
    FMUL double ptr [0x005d9389]        ; 005956b2 | DAT_005d9389
    JMP 0x005942c5                      ; 005956b8
        ;   XREF to: 005942c5 (UNCONDITIONAL_JUMP)  ; LAB_005942c5
    CMP dword ptr [EBX + 0xdc],0x0      ; 005956bd
        ;   Label: LAB_005956bd
    JNZ 0x00594321                      ; 005956c4
        ;   XREF to: 00594321 (CONDITIONAL_JUMP)  ; LAB_00594321
    JMP 0x0059445c                      ; 005956ca
        ;   XREF to: 0059445c (UNCONDITIONAL_JUMP)  ; LAB_0059445c

