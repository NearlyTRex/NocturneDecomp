; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00414290(CBatman *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_s_4_batman_die_wav_005cbbec+2
;   TerminatedCString s_batman_hurt_wav_005cbbfd
;   undefined4 DAT_005cbc0e
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413f40
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414290
        ;   Label: core_batman.cpp_CBatman_processDamage_FUN_00414290
    PUSH ESI                            ; 00414291
    PUSH EDI                            ; 00414292
    PUSH EBP                            ; 00414293
    SUB ESP,0x50                        ; 00414294
    MOV EBP,dword ptr [ESP + 0x64]      ; 00414297
    MOV EDX,dword ptr [EBP + 0x10bb0]   ; 0041429b
    PUSH EDX                            ; 004142a1
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004142a2
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004142a7
    MOV ECX,dword ptr [EBP + 0x10ba8]   ; 004142aa
    PUSH ECX                            ; 004142b0
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004142b1
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004142b6
    MOV EAX,dword ptr [ESP + 0x68]      ; 004142b9
    CMP dword ptr [EAX + 0x28],0x7      ; 004142bd
    JZ 0x004143df                       ; 004142c1
        ;   XREF to: 004143df (CONDITIONAL_JUMP)  ; LAB_004143df
    LEA EAX,[EAX]                       ; 004142c7
    LEA EDX,[EDX]                       ; 004142cd
    MOV EAX,dword ptr [ESP + 0x68]      ; 004142d0
        ;   Label: LAB_004142d0
    CMP dword ptr [EAX + 0x30],0x6c     ; 004142d4
    JNZ 0x00414330                      ; 004142d8
        ;   XREF to: 00414330 (CONDITIONAL_JUMP)  ; LAB_00414330
    PUSH 0x0                            ; 004142da
    LEA EAX,[EBP + 0x2b4]               ; 004142dc
    PUSH EAX                            ; 004142e2
    LEA ESI,[ESP + 0x14]                ; 004142e3
    LEA EDI,[ESP + 0x44]                ; 004142e7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004142eb
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004142f0
    LEA EAX,[ESP + 0x3c]                ; 004142f3
    LEA ESI,[ESP + 0xc]                 ; 004142f7
    PUSH EAX                            ; 004142fb
    MOVSD ES:EDI,ESI                    ; 004142fc
    MOVSD ES:EDI,ESI                    ; 004142fd
    MOVSD ES:EDI,ESI                    ; 004142fe
    PUSH EBP                            ; 004142ff
    LEA ESI,[ESP + 0x20]                ; 00414300
    CALL core_actor.cpp_FUN_00408d70    ; 00414304
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00414309
    PUSH 0x0                            ; 0041430c
    PUSH 0x41200000                     ; 0041430e
    PUSH 0x0                            ; 00414313
    PUSH 0x0                            ; 00414315
    LEA EAX,[ESP + 0x40]                ; 00414317
    PUSH EAX                            ; 0041431b
    LEA EDI,[ESP + 0x44]                ; 0041431c
    LEA ESI,[ESP + 0x2c]                ; 00414320
    PUSH EBP                            ; 00414324
    MOVSD ES:EDI,ESI                    ; 00414325
    MOVSD ES:EDI,ESI                    ; 00414326
    MOVSD ES:EDI,ESI                    ; 00414327
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 ; 00414328
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0041432d
    MOV ECX,dword ptr [ESP + 0x68]      ; 00414330
        ;   Label: LAB_00414330
    PUSH ECX                            ; 00414334
    PUSH EBP                            ; 00414335
    CALL core_batman.cpp_CBatman_processDismemberment_FUN_00413f40 ; 00414336
        ;   XREF to: 00413f40 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_processDismemberment_FUN_00413f40(CBatman * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041433b
    MOV EAX,dword ptr [ESP + 0x68]      ; 0041433e
    FLD float ptr [EAX + 0x4]           ; 00414342
    FSUBR float ptr [EBP + 0x25a8]      ; 00414345
    LEA EBX,[EBP + 0x2b4]               ; 0041434b
    FST float ptr [EBP + 0x25a8]        ; 00414351
    FLDZ                                ; 00414357
    FCOMPP                              ; 00414359
    FNSTSW AX                           ; 0041435b
    SAHF                                ; 0041435d
    JNC 0x0041443f                      ; 0041435e
        ;   XREF to: 0041443f (CONDITIONAL_JUMP)  ; LAB_0041443f
    PUSH 0x2                            ; 00414364
    PUSH 0x0                            ; 00414366
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00414368
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041436d
    MOV ESI,EAX                         ; 00414370
    TEST EAX,EAX                        ; 00414372
    JNZ 0x00414383                      ; 00414374
        ;   XREF to: 00414383 (CONDITIONAL_JUMP)  ; LAB_00414383
    PUSH 0x1                            ; 00414376
    PUSH 0x4                            ; 00414378
    PUSH EBX                            ; 0041437a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041437b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414380
    CMP ESI,0x1                         ; 00414383
        ;   Label: LAB_00414383
    JNZ 0x0041439a                      ; 00414386
        ;   XREF to: 0041439a (CONDITIONAL_JUMP)  ; LAB_0041439a
    PUSH ESI                            ; 00414388
    PUSH 0x5                            ; 00414389
    LEA EAX,[EBP + 0x2b4]               ; 0041438b
    PUSH EAX                            ; 00414391
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00414392
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414397
    CMP ESI,0x2                         ; 0041439a
        ;   Label: LAB_0041439a
    JNZ 0x004143b2                      ; 0041439d
        ;   XREF to: 004143b2 (CONDITIONAL_JUMP)  ; LAB_004143b2
    PUSH 0x1                            ; 0041439f
    PUSH 0x6                            ; 004143a1
    LEA EAX,[EBP + 0x2b4]               ; 004143a3
    PUSH EAX                            ; 004143a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004143aa
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004143af
    MOV EBX,dword ptr [EBP + 0x10bac]   ; 004143b2
        ;   Label: LAB_004143b2
    PUSH EBX                            ; 004143b8
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 004143b9
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004143be
    TEST EAX,EAX                        ; 004143c1
    JZ 0x004144a0                       ; 004143c3
        ;   XREF to: 004144a0 (CONDITIONAL_JUMP)  ; LAB_004144a0
    MOV EDI,dword ptr [ESP + 0x68]      ; 004143c9
        ;   Label: LAB_004143c9
    PUSH EDI                            ; 004143cd
    PUSH EBP                            ; 004143ce
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 004143cf
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004143d4
    ADD ESP,0x50                        ; 004143d7
    POP EBP                             ; 004143da
    POP EDI                             ; 004143db
    POP ESI                             ; 004143dc
    POP EBX                             ; 004143dd
    RET                                 ; 004143de
    FLD float ptr [EAX + 0x4]           ; 004143df
        ;   Label: LAB_004143df
    ADD EAX,0x1c                        ; 004143e2
    FLD ST0                             ; 004143e5
    FMUL double ptr [0x005cbc0e]        ; 004143e7 | DAT_005cbc0e
    PUSH EAX                            ; 004143ed
    LEA ESI,[ESP + 0x28]                ; 004143ee
    LEA EDI,[ESP + 0x4]                 ; 004143f2
    PUSH EBP                            ; 004143f6
    FSTP ST1                            ; 004143f7
    FSTP float ptr [EAX + -0x18]        ; 004143f9
    CALL core_actor.cpp_FUN_00408d70    ; 004143fc
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x2c]                ; 00414401
    ADD ESP,0x8                         ; 00414405
    XOR EBX,EBX                         ; 00414408
    MOVSD ES:EDI,ESI                    ; 0041440a
    MOVSD ES:EDI,ESI                    ; 0041440b
    MOVSD ES:EDI,ESI                    ; 0041440c
    XOR ESI,ESI                         ; 0041440d
    PUSH 0xffff                         ; 0041440f
        ;   Label: LAB_0041440f
    PUSH ESI                            ; 00414414
    PUSH 0x4000                         ; 00414415
    PUSH 0x4000                         ; 0041441a
    PUSH ESI                            ; 0041441f
    LEA EAX,[ESP + 0x14]                ; 00414420
    PUSH EAX                            ; 00414424
    MOV EDI,dword ptr [0x00614d30]      ; 00414425 | DAT_00614d30
    PUSH EDI                            ; 0041442b
    INC EBX                             ; 0041442c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 0041442d
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00414432
    CMP EBX,0x5                         ; 00414435
    JL 0x0041440f                       ; 00414438
        ;   XREF to: 0041440f (CONDITIONAL_JUMP)  ; LAB_0041440f
    JMP 0x004142d0                      ; 0041443a
        ;   XREF to: 004142d0 (UNCONDITIONAL_JUMP)  ; LAB_004142d0
    PUSH EBX                            ; 0041443f
        ;   Label: LAB_0041443f
    MOV dword ptr [EBP + 0x25a8],0x0    ; 00414440
    CALL core_motion.cpp_FUN_005035c0   ; 0041444a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041444f
    ADD ESP,0x4                         ; 00414452
    CMP EAX,0x7                         ; 00414455
    JZ 0x004143c9                       ; 00414458
        ;   XREF to: 004143c9 (CONDITIONAL_JUMP)  ; LAB_004143c9
    CMP EAX,0x8                         ; 0041445e
    JZ 0x004143c9                       ; 00414461
        ;   XREF to: 004143c9 (CONDITIONAL_JUMP)  ; LAB_004143c9
    PUSH 0x1                            ; 00414467
    PUSH 0x7                            ; 00414469
    PUSH EBX                            ; 0041446b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041446c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414471
    MOV ESI,dword ptr [EBP + 0x10bac]   ; 00414474
    PUSH ESI                            ; 0041447a
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0041447b
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00414480
    PUSH 0x5cbbee                       ; 00414483 | s_s_4_batman_die_wav_005cbbec+2
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00414488
    PUSH EBP                            ; 0041448e
    CALL dword ptr [EAX + 0x34]         ; 0041448f
    ADD ESP,0x8                         ; 00414492
    MOV dword ptr [EBP + 0x10bac],EAX   ; 00414495
    JMP 0x004143c9                      ; 0041449b
        ;   XREF to: 004143c9 (UNCONDITIONAL_JUMP)  ; LAB_004143c9
    PUSH 0x5cbbfd                       ; 004144a0 | = "batman-hurt?.wav"
        ;   Label: LAB_004144a0
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004144a5
    PUSH EBP                            ; 004144ab
    CALL dword ptr [EAX + 0x34]         ; 004144ac
    ADD ESP,0x8                         ; 004144af
    MOV dword ptr [EBP + 0x10bac],EAX   ; 004144b2
    JMP 0x004143c9                      ; 004144b8
        ;   XREF to: 004143c9 (UNCONDITIONAL_JUMP)  ; LAB_004143c9

