; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004d4390(CHotDemon *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_die_wav_005da686
;   TerminatedCString s_hotdemon_hurt_wav_005da697
;   undefined4 DAT_005da6b1
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4390
        ;   Label: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004d4390
    PUSH EBP                            ; 004d4391
    SUB ESP,0x20                        ; 004d4392
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004d4395
    MOV EDX,dword ptr [EBP + 0x10af8]   ; 004d4399
    PUSH EDX                            ; 004d439f
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004d43a0
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004d43a5
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d43a8
    CMP dword ptr [EAX + 0x28],0x8      ; 004d43ac
    JZ 0x004d442b                       ; 004d43b0
        ;   XREF to: 004d442b (CONDITIONAL_JUMP)  ; LAB_004d442b
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d43b2
        ;   Label: LAB_004d43b2
    FLD float ptr [EAX + 0x4]           ; 004d43b6
    FSUBR float ptr [EBP + 0x25a8]      ; 004d43b9
    LEA EBX,[EBP + 0x2b4]               ; 004d43bf
    FST float ptr [EBP + 0x25a8]        ; 004d43c5
    FLDZ                                ; 004d43cb
    FCOMPP                              ; 004d43cd
    FNSTSW AX                           ; 004d43cf
    SAHF                                ; 004d43d1
    JNC 0x004d448c                      ; 004d43d2
        ;   XREF to: 004d448c (CONDITIONAL_JUMP)  ; LAB_004d448c
    PUSH EBX                            ; 004d43d8
    CALL core_motion.cpp_FUN_005035c0   ; 004d43d9
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d43de
    ADD ESP,0x4                         ; 004d43e1
    CMP EAX,0x6                         ; 004d43e4
    JGE 0x004d4519                      ; 004d43e7
        ;   XREF to: 004d4519 (CONDITIONAL_JUMP)  ; LAB_004d4519
    PUSH 0x1                            ; 004d43ed
        ;   Label: LAB_004d43ed
    PUSH 0x3                            ; 004d43ef
    LEA EAX,[EBP + 0x2b4]               ; 004d43f1
    PUSH EAX                            ; 004d43f7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d43f8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004d43f8
    ADD ESP,0xc                         ; 004d43fd
    MOV EAX,dword ptr [EBP + 0x10afc]   ; 004d4400
    PUSH EAX                            ; 004d4406
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004d4407
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004d440c
    TEST EAX,EAX                        ; 004d440f
    JZ 0x004d452c                       ; 004d4411
        ;   XREF to: 004d452c (CONDITIONAL_JUMP)  ; LAB_004d452c
    MOV ECX,dword ptr [ESP + 0x30]      ; 004d4417
        ;   Label: LAB_004d4417
    PUSH ECX                            ; 004d441b
    PUSH EBP                            ; 004d441c
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 004d441d
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d4422
    ADD ESP,0x20                        ; 004d4425
    POP EBP                             ; 004d4428
    POP EBX                             ; 004d4429
    RET                                 ; 004d442a
    PUSH EDI                            ; 004d442b
        ;   Label: LAB_004d442b
    PUSH ESI                            ; 004d442c
    FLD float ptr [EAX + 0x4]           ; 004d442d
    ADD EAX,0x1c                        ; 004d4430
    FLD ST0                             ; 004d4433
    FMUL double ptr [0x005da6b1]        ; 004d4435 | DAT_005da6b1
    PUSH EAX                            ; 004d443b
    LEA ESI,[ESP + 0x18]                ; 004d443c
    LEA EDI,[ESP + 0xc]                 ; 004d4440
    PUSH EBP                            ; 004d4444
    FSTP ST1                            ; 004d4445
    FSTP float ptr [EAX + -0x18]        ; 004d4447
    CALL core_actor.cpp_FUN_00408d70    ; 004d444a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x1c]                ; 004d444f
    ADD ESP,0x8                         ; 004d4453
    XOR EBX,EBX                         ; 004d4456
    MOVSD ES:EDI,ESI                    ; 004d4458
    MOVSD ES:EDI,ESI                    ; 004d4459
    MOVSD ES:EDI,ESI                    ; 004d445a
    MOV ESI,0x4000                      ; 004d445b
    PUSH 0xffff                         ; 004d4460
        ;   Label: LAB_004d4460
    PUSH 0x0                            ; 004d4465
    PUSH ESI                            ; 004d4467
    PUSH ESI                            ; 004d4468
    PUSH 0x0                            ; 004d4469
    LEA EAX,[ESP + 0x1c]                ; 004d446b
    PUSH EAX                            ; 004d446f
    MOV EDI,dword ptr [0x00614d30]      ; 004d4470 | DAT_00614d30
    PUSH EDI                            ; 004d4476
    INC EBX                             ; 004d4477
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 004d4478
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004d447d
    CMP EBX,0x5                         ; 004d4480
    JL 0x004d4460                       ; 004d4483
        ;   XREF to: 004d4460 (CONDITIONAL_JUMP)  ; LAB_004d4460
    POP ESI                             ; 004d4485
    POP EDI                             ; 004d4486
    JMP 0x004d43b2                      ; 004d4487
        ;   XREF to: 004d43b2 (UNCONDITIONAL_JUMP)  ; LAB_004d43b2
    PUSH EBX                            ; 004d448c
        ;   Label: LAB_004d448c
    MOV dword ptr [EBP + 0x25a8],0x0    ; 004d448d
    CALL core_motion.cpp_FUN_005035c0   ; 004d4497
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d449c
    ADD ESP,0x4                         ; 004d449f
    CMP EAX,0x4                         ; 004d44a2
    JZ 0x004d4417                       ; 004d44a5
        ;   XREF to: 004d4417 (CONDITIONAL_JUMP)  ; LAB_004d4417
    CMP EAX,0x5                         ; 004d44ab
    JZ 0x004d4417                       ; 004d44ae
        ;   XREF to: 004d4417 (CONDITIONAL_JUMP)  ; LAB_004d4417
    CMP EAX,0xa                         ; 004d44b4
    JZ 0x004d4417                       ; 004d44b7
        ;   XREF to: 004d4417 (CONDITIONAL_JUMP)  ; LAB_004d4417
    CMP EAX,0xb                         ; 004d44bd
    JZ 0x004d4417                       ; 004d44c0
        ;   XREF to: 004d4417 (CONDITIONAL_JUMP)  ; LAB_004d4417
    CMP EAX,0x6                         ; 004d44c6
    JL 0x004d4513                       ; 004d44c9
        ;   XREF to: 004d4513 (CONDITIONAL_JUMP)  ; LAB_004d4513
    PUSH 0x1                            ; 004d44cb
    PUSH 0xa                            ; 004d44cd
    PUSH EBX                            ; 004d44cf
        ;   Label: LAB_004d44cf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d44d0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d44d5
    MOV EDX,dword ptr [EBP + 0x10afc]   ; 004d44d8
    PUSH EDX                            ; 004d44de
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004d44df
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004d44e4
    PUSH 0x5da686                       ; 004d44e7 | = "hotdemon-die.wav"
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004d44ec
    PUSH EBP                            ; 004d44f2
    CALL dword ptr [EAX + 0x34]         ; 004d44f3
    ADD ESP,0x8                         ; 004d44f6
    MOV dword ptr [EBP + 0x10afc],EAX   ; 004d44f9
    MOV ECX,dword ptr [ESP + 0x30]      ; 004d44ff
    PUSH ECX                            ; 004d4503
    PUSH EBP                            ; 004d4504
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 004d4505
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d450a
    ADD ESP,0x20                        ; 004d450d
    POP EBP                             ; 004d4510
    POP EBX                             ; 004d4511
    RET                                 ; 004d4512
    PUSH 0x1                            ; 004d4513
        ;   Label: LAB_004d4513
    PUSH 0x4                            ; 004d4515
    JMP 0x004d44cf                      ; 004d4517
        ;   XREF to: 004d44cf (UNCONDITIONAL_JUMP)  ; LAB_004d44cf
    CMP EAX,0xf                         ; 004d4519
        ;   Label: LAB_004d4519
    JZ 0x004d43ed                       ; 004d451c
        ;   XREF to: 004d43ed (CONDITIONAL_JUMP)  ; LAB_004d43ed
    PUSH 0x1                            ; 004d4522
    PUSH 0x9                            ; 004d4524
    PUSH EBX                            ; 004d4526
    JMP 0x004d43f8                      ; 004d4527
        ;   XREF to: 004d43f8 (UNCONDITIONAL_JUMP)  ; LAB_004d43f8
    PUSH 0x5da697                       ; 004d452c | = "hotdemon-hurt?.wav"
        ;   Label: LAB_004d452c
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004d4531
    PUSH EBP                            ; 004d4537
    CALL dword ptr [EAX + 0x34]         ; 004d4538
    ADD ESP,0x8                         ; 004d453b
    MOV dword ptr [EBP + 0x10afc],EAX   ; 004d453e
    MOV ECX,dword ptr [ESP + 0x30]      ; 004d4544
    PUSH ECX                            ; 004d4548
    PUSH EBP                            ; 004d4549
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 004d454a
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d454f
    ADD ESP,0x20                        ; 004d4552
    POP EBP                             ; 004d4555
    POP EBX                             ; 004d4556
    RET                                 ; 004d4557

