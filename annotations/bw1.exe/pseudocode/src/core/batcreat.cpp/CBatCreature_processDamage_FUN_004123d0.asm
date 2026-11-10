; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_004123d0(CBatCreature *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_batman_die_wav_005d38a8+1
;   TerminatedCString s_batman_hurt_wav_005d38b8
;   undefined4 DAT_005d38c9
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412170
;   core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_skeleton.cpp_FUN_00569130
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004123d0
        ;   Label: core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0
    PUSH ESI                            ; 004123d1
    PUSH EDI                            ; 004123d2
    PUSH EBP                            ; 004123d3
    SUB ESP,0x50                        ; 004123d4
    MOV EBP,dword ptr [ESP + 0x64]      ; 004123d7
    MOV EDX,dword ptr [EBP + 0xc2ac]    ; 004123db
    PUSH EDX                            ; 004123e1
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004123e2
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004123e7
    MOV ECX,dword ptr [EBP + 0xc2a4]    ; 004123ea
    PUSH ECX                            ; 004123f0
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004123f1
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004123f6
    MOV EAX,dword ptr [ESP + 0x68]      ; 004123f9
    CMP dword ptr [EAX + 0x28],0x7      ; 004123fd
    JZ 0x0041251f                       ; 00412401
        ;   XREF to: 0041251f (CONDITIONAL_JUMP)  ; LAB_0041251f
    LEA EAX,[EAX]                       ; 00412407
    LEA EDX,[EDX]                       ; 0041240d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00412410
        ;   Label: LAB_00412410
    CMP dword ptr [EAX + 0x30],0x6c     ; 00412414
    JNZ 0x00412470                      ; 00412418
        ;   XREF to: 00412470 (CONDITIONAL_JUMP)  ; LAB_00412470
    PUSH 0x0                            ; 0041241a
    LEA EAX,[EBP + 0x158]               ; 0041241c
    PUSH EAX                            ; 00412422
    LEA ESI,[ESP + 0x14]                ; 00412423
    LEA EDI,[ESP + 0x44]                ; 00412427
    CALL core_skeleton.cpp_FUN_00569130 ; 0041242b
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00412430
    LEA EAX,[ESP + 0x3c]                ; 00412433
    LEA ESI,[ESP + 0xc]                 ; 00412437
    PUSH EAX                            ; 0041243b
    MOVSD ES:EDI,ESI                    ; 0041243c
    MOVSD ES:EDI,ESI                    ; 0041243d
    MOVSD ES:EDI,ESI                    ; 0041243e
    PUSH EBP                            ; 0041243f
    LEA ESI,[ESP + 0x20]                ; 00412440
    CALL core_actor.cpp_FUN_00408b40    ; 00412444
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00412449
    PUSH 0x0                            ; 0041244c
    PUSH 0x41200000                     ; 0041244e
    PUSH 0x0                            ; 00412453
    PUSH 0x0                            ; 00412455
    LEA EAX,[ESP + 0x40]                ; 00412457
    PUSH EAX                            ; 0041245b
    LEA EDI,[ESP + 0x44]                ; 0041245c
    LEA ESI,[ESP + 0x2c]                ; 00412460
    PUSH EBP                            ; 00412464
    MOVSD ES:EDI,ESI                    ; 00412465
    MOVSD ES:EDI,ESI                    ; 00412466
    MOVSD ES:EDI,ESI                    ; 00412467
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0 ; 00412468
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0041246d
    MOV ECX,dword ptr [ESP + 0x68]      ; 00412470
        ;   Label: LAB_00412470
    PUSH ECX                            ; 00412474
    PUSH EBP                            ; 00412475
    CALL core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412170 ; 00412476
        ;   XREF to: 00412170 (UNCONDITIONAL_CALL)  ; void core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412170(CBatCreature * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041247b
    MOV EAX,dword ptr [ESP + 0x68]      ; 0041247e
    FLD float ptr [EAX + 0x4]           ; 00412482
    FSUBR float ptr [EBP + 0x2538]      ; 00412485
    LEA EBX,[EBP + 0x158]               ; 0041248b
    FST float ptr [EBP + 0x2538]        ; 00412491
    FLDZ                                ; 00412497
    FCOMPP                              ; 00412499
    FNSTSW AX                           ; 0041249b
    SAHF                                ; 0041249d
    JNC 0x0041257f                      ; 0041249e
        ;   XREF to: 0041257f (CONDITIONAL_JUMP)  ; LAB_0041257f
    PUSH 0x2                            ; 004124a4
    PUSH 0x0                            ; 004124a6
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004124a8
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 004124ad
    MOV ESI,EAX                         ; 004124b0
    TEST EAX,EAX                        ; 004124b2
    JNZ 0x004124c3                      ; 004124b4
        ;   XREF to: 004124c3 (CONDITIONAL_JUMP)  ; LAB_004124c3
    PUSH 0x1                            ; 004124b6
    PUSH 0x4                            ; 004124b8
    PUSH EBX                            ; 004124ba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004124bb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004124c0
    CMP ESI,0x1                         ; 004124c3
        ;   Label: LAB_004124c3
    JNZ 0x004124da                      ; 004124c6
        ;   XREF to: 004124da (CONDITIONAL_JUMP)  ; LAB_004124da
    PUSH ESI                            ; 004124c8
    PUSH 0x5                            ; 004124c9
    LEA EAX,[EBP + 0x158]               ; 004124cb
    PUSH EAX                            ; 004124d1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004124d2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004124d7
    CMP ESI,0x2                         ; 004124da
        ;   Label: LAB_004124da
    JNZ 0x004124f2                      ; 004124dd
        ;   XREF to: 004124f2 (CONDITIONAL_JUMP)  ; LAB_004124f2
    PUSH 0x1                            ; 004124df
    PUSH 0x6                            ; 004124e1
    LEA EAX,[EBP + 0x158]               ; 004124e3
    PUSH EAX                            ; 004124e9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004124ea
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004124ef
    MOV EBX,dword ptr [EBP + 0xc2a8]    ; 004124f2
        ;   Label: LAB_004124f2
    PUSH EBX                            ; 004124f8
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004124f9
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004124fe
    TEST EAX,EAX                        ; 00412501
    JZ 0x004125e0                       ; 00412503
        ;   XREF to: 004125e0 (CONDITIONAL_JUMP)  ; LAB_004125e0
    MOV EDI,dword ptr [ESP + 0x68]      ; 00412509
        ;   Label: LAB_00412509
    PUSH EDI                            ; 0041250d
    PUSH EBP                            ; 0041250e
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0041250f
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00412514
    ADD ESP,0x50                        ; 00412517
    POP EBP                             ; 0041251a
    POP EDI                             ; 0041251b
    POP ESI                             ; 0041251c
    POP EBX                             ; 0041251d
    RET                                 ; 0041251e
    FLD float ptr [EAX + 0x4]           ; 0041251f
        ;   Label: LAB_0041251f
    ADD EAX,0x1c                        ; 00412522
    FLD ST0                             ; 00412525
    FMUL double ptr [0x005d38c9]        ; 00412527 | DAT_005d38c9
    PUSH EAX                            ; 0041252d
    LEA ESI,[ESP + 0x28]                ; 0041252e
    LEA EDI,[ESP + 0x4]                 ; 00412532
    PUSH EBP                            ; 00412536
    FSTP ST1                            ; 00412537
    FSTP float ptr [EAX + -0x18]        ; 00412539
    CALL core_actor.cpp_FUN_00408b40    ; 0041253c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x2c]                ; 00412541
    ADD ESP,0x8                         ; 00412545
    XOR EBX,EBX                         ; 00412548
    MOVSD ES:EDI,ESI                    ; 0041254a
    MOVSD ES:EDI,ESI                    ; 0041254b
    MOVSD ES:EDI,ESI                    ; 0041254c
    XOR ESI,ESI                         ; 0041254d
    PUSH 0xffff                         ; 0041254f
        ;   Label: LAB_0041254f
    PUSH ESI                            ; 00412554
    PUSH 0x4000                         ; 00412555
    PUSH 0x4000                         ; 0041255a
    PUSH ESI                            ; 0041255f
    LEA EAX,[ESP + 0x14]                ; 00412560
    PUSH EAX                            ; 00412564
    MOV EDI,dword ptr [0x0061c010]      ; 00412565 | DAT_0061c010
    PUSH EDI                            ; 0041256b
    INC EBX                             ; 0041256c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 0041256d
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00412572
    CMP EBX,0x5                         ; 00412575
    JL 0x0041254f                       ; 00412578
        ;   XREF to: 0041254f (CONDITIONAL_JUMP)  ; LAB_0041254f
    JMP 0x00412410                      ; 0041257a
        ;   XREF to: 00412410 (UNCONDITIONAL_JUMP)  ; LAB_00412410
    PUSH EBX                            ; 0041257f
        ;   Label: LAB_0041257f
    MOV dword ptr [EBP + 0x2538],0x0    ; 00412580
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0041258a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041258f
    ADD ESP,0x4                         ; 00412592
    CMP EAX,0x7                         ; 00412595
    JZ 0x00412509                       ; 00412598
        ;   XREF to: 00412509 (CONDITIONAL_JUMP)  ; LAB_00412509
    CMP EAX,0x8                         ; 0041259e
    JZ 0x00412509                       ; 004125a1
        ;   XREF to: 00412509 (CONDITIONAL_JUMP)  ; LAB_00412509
    PUSH 0x1                            ; 004125a7
    PUSH 0x7                            ; 004125a9
    PUSH EBX                            ; 004125ab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004125ac
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004125b1
    MOV ESI,dword ptr [EBP + 0xc2a8]    ; 004125b4
    PUSH ESI                            ; 004125ba
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004125bb
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004125c0
    PUSH 0x5d38a9                       ; 004125c3 | s_batman_die_wav_005d38a8+1
    MOV EAX,dword ptr [EBP + 0x154]     ; 004125c8
    PUSH EBP                            ; 004125ce
    CALL dword ptr [EAX + 0x2c]         ; 004125cf
    ADD ESP,0x8                         ; 004125d2
    MOV dword ptr [EBP + 0xc2a8],EAX    ; 004125d5
    JMP 0x00412509                      ; 004125db
        ;   XREF to: 00412509 (UNCONDITIONAL_JUMP)  ; LAB_00412509
    PUSH 0x5d38b8                       ; 004125e0 | = "batman-hurt?.wav"
        ;   Label: LAB_004125e0
    MOV EAX,dword ptr [EBP + 0x154]     ; 004125e5
    PUSH EBP                            ; 004125eb
    CALL dword ptr [EAX + 0x2c]         ; 004125ec
    ADD ESP,0x8                         ; 004125ef
    MOV dword ptr [EBP + 0xc2a8],EAX    ; 004125f2
    JMP 0x00412509                      ; 004125f8
        ;   XREF to: 00412509 (UNCONDITIONAL_JUMP)  ; LAB_00412509

