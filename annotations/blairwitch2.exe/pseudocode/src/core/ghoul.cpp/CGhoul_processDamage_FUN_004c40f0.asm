; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004c40f0(CGhoul *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_go_berzerk_005d91fe+1
;   TerminatedCString s_ghoul_die_wav_1_6_005d920b
;   TerminatedCString s_guul_flinch_d_005d9222
;   TerminatedCString s_ghoul_mad_wav_005d9230
;   undefined4 DAT_005d9247
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_charactr.cpp_CCharacter_shatter_FUN_00427210
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c3e30
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_motion.cpp_FUN_005035c0
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_console.cpp_FUN_00436710
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c40f0
        ;   Label: core_ghoul.cpp_CGhoul_processDamage_FUN_004c40f0
    PUSH ESI                            ; 004c40f1
    PUSH EDI                            ; 004c40f2
    PUSH EBP                            ; 004c40f3
    MOV EBP,ESP                         ; 004c40f4
    SUB ESP,0x68                        ; 004c40f6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c40f9
    MOV EDI,dword ptr [EBP + 0x18]      ; 004c40fc
    MOV EDX,dword ptr [EBX + 0x10b48]   ; 004c40ff
    PUSH EDX                            ; 004c4105
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004c4106
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0x10b58]   ; 004c410b
    ADD ESP,0x4                         ; 004c4111
    TEST ECX,ECX                        ; 004c4114
    JNZ 0x004c42ca                      ; 004c4116
        ;   XREF to: 004c42ca (CONDITIONAL_JUMP)  ; LAB_004c42ca
    CMP dword ptr [EDI + 0x30],0x6c     ; 004c411c
        ;   Label: LAB_004c411c
    JNZ 0x004c412c                      ; 004c4120
        ;   XREF to: 004c412c (CONDITIONAL_JUMP)  ; LAB_004c412c
    MOV dword ptr [EBX + 0x10b54],0x40800000 ; 004c4122
    PUSH EDI                            ; 004c412c
        ;   Label: LAB_004c412c
    PUSH EBX                            ; 004c412d
    CALL core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c3e30 ; 004c412e
        ;   XREF to: 004c3e30 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c3e30(CGhoul * this_ptr, SDamageInfo * damage_info)
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004c4133
    ADD ESP,0x8                         ; 004c4139
    TEST EDX,EDX                        ; 004c413c
    JZ 0x004c416c                       ; 004c413e
        ;   XREF to: 004c416c (CONDITIONAL_JUMP)  ; LAB_004c416c
    MOV EAX,EDX                         ; 004c4140
    PUSH EAX                            ; 004c4142
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 004c4143
    CALL dword ptr [EDX + 0xfc]         ; 004c4149
    ADD ESP,0x4                         ; 004c414f
    CMP EAX,EBX                         ; 004c4152
    JNZ 0x004c416c                      ; 004c4154
        ;   XREF to: 004c416c (CONDITIONAL_JUMP)  ; LAB_004c416c
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004c4156
    PUSH EAX                            ; 004c415c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004c415d
    CALL dword ptr [EDX + 0xf8]         ; 004c4163
    ADD ESP,0x4                         ; 004c4169
    FLD float ptr [EDI + 0x4]           ; 004c416c
        ;   Label: LAB_004c416c
    FSUBR float ptr [EBX + 0x25a8]      ; 004c416f
    MOV EAX,dword ptr [EBX + 0x10b44]   ; 004c4175
    FSTP float ptr [EBX + 0x25a8]       ; 004c417b
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c4181
    TEST ECX,ECX                        ; 004c4188
    JZ 0x004c433e                       ; 004c418a
        ;   XREF to: 004c433e (CONDITIONAL_JUMP)  ; LAB_004c433e
    FLD float ptr [EBX + 0x25a8]        ; 004c4190
        ;   Label: LAB_004c4190
    FLDZ                                ; 004c4196
    LEA EDX,[EBX + 0x2b4]               ; 004c4198
    FCOMPP                              ; 004c419e
    FNSTSW AX                           ; 004c41a0
    SAHF                                ; 004c41a2
    JC 0x004c43aa                       ; 004c41a3
        ;   XREF to: 004c43aa (CONDITIONAL_JUMP)  ; LAB_004c43aa
    MOV EAX,dword ptr [EBX + 0x10ae8]   ; 004c41a9
    MOV dword ptr [EBX + 0x25a8],0x0    ; 004c41af
    TEST EAX,EAX                        ; 004c41b9
    JNZ 0x004c4349                      ; 004c41bb
        ;   XREF to: 004c4349 (CONDITIONAL_JUMP)  ; LAB_004c4349
    PUSH EDX                            ; 004c41c1
    CALL core_motion.cpp_FUN_005035c0   ; 004c41c2
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c41c7
    ADD ESP,0x4                         ; 004c41ca
    CMP EAX,0xa                         ; 004c41cd
    JZ 0x004c42b9                       ; 004c41d0
        ;   XREF to: 004c42b9 (CONDITIONAL_JUMP)  ; LAB_004c42b9
    CMP EAX,0x9                         ; 004c41d6
    JZ 0x004c42b9                       ; 004c41d9
        ;   XREF to: 004c42b9 (CONDITIONAL_JUMP)  ; LAB_004c42b9
    MOV EAX,dword ptr [EBX + 0x10b44]   ; 004c41df
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c41e5
    TEST EDX,EDX                        ; 004c41ec
    JZ 0x004c4363                       ; 004c41ee
        ;   XREF to: 004c4363 (CONDITIONAL_JUMP)  ; LAB_004c4363
    DEC dword ptr [EBX + 0x10b14]       ; 004c41f4
    MOV EAX,dword ptr [EBX + 0x3448]    ; 004c41fa
        ;   Label: LAB_004c41fa
    MOV ESI,0x6                         ; 004c4200
    TEST EAX,EAX                        ; 004c4205
    JLE 0x004c438b                      ; 004c4207
        ;   XREF to: 004c438b (CONDITIONAL_JUMP)  ; LAB_004c438b
    MOV EDX,dword ptr [EBX + 0x3448]    ; 004c420d
    XOR EAX,EAX                         ; 004c4213
    TEST EDX,EDX                        ; 004c4215
    JLE 0x004c4232                      ; 004c4217
        ;   XREF to: 004c4232 (CONDITIONAL_JUMP)  ; LAB_004c4232
    MOV EDX,EBX                         ; 004c4219
    MOV ECX,dword ptr [EDX + 0x344c]    ; 004c421b
        ;   Label: LAB_004c421b
    CMP ECX,dword ptr [EBX + 0x10b40]   ; 004c4221
    JNZ 0x004c436e                      ; 004c4227
        ;   XREF to: 004c436e (CONDITIONAL_JUMP)  ; LAB_004c436e
    MOV ESI,0x8                         ; 004c422d
        ;   Label: LAB_004c422d
    PUSH 0x1                            ; 004c4232
        ;   Label: LAB_004c4232
    PUSH ESI                            ; 004c4234
    LEA EAX,[EBX + 0x2b4]               ; 004c4235
    PUSH EAX                            ; 004c423b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c423c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c4241
    MOV ESI,dword ptr [EBX + 0x10b50]   ; 004c4244
    PUSH ESI                            ; 004c424a
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004c424b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004c4250
    TEST EAX,EAX                        ; 004c4253
    JNZ 0x004c426f                      ; 004c4255
        ;   XREF to: 004c426f (CONDITIONAL_JUMP)  ; LAB_004c426f
    PUSH 0x5d920b                       ; 004c4257 | = "ghoul-die-!-?.wav @1.6"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c425c
    PUSH EBX                            ; 004c4262
    CALL dword ptr [EAX + 0x34]         ; 004c4263
    ADD ESP,0x8                         ; 004c4266
    MOV dword ptr [EBX + 0x10b50],EAX   ; 004c4269
    PUSH 0x41200000                     ; 004c426f
        ;   Label: LAB_004c426f
    PUSH 0x40800000                     ; 004c4274
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004c4279
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004c427e
    FLD float ptr [EBP + -0x4]          ; 004c4281
    FMUL double ptr [0x005d9247]        ; 004c4284 | DAT_005d9247
    ADD ESP,0x8                         ; 004c428a
    MOV dword ptr [EBX + 0x10b04],0xa0000 ; 004c428d
    PUSH 0x41c80000                     ; 004c4297
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c429c
    PUSH 0x32                           ; 004c42a2
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c42a4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EBX                            ; 004c42a9
    FISTP dword ptr [EBX + 0x10b00]     ; 004c42aa
    CALL dword ptr [EAX + 0xb0]         ; 004c42b0
    ADD ESP,0xc                         ; 004c42b6
    PUSH EDI                            ; 004c42b9
        ;   Label: LAB_004c42b9
    PUSH EBX                            ; 004c42ba
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 004c42bb
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004c42c0
    MOV ESP,EBP                         ; 004c42c3
    POP EBP                             ; 004c42c5
    POP EDI                             ; 004c42c6
    POP ESI                             ; 004c42c7
    POP EBX                             ; 004c42c8
    RET                                 ; 004c42c9
    LEA EAX,[EBX + 0x2b4]               ; 004c42ca
        ;   Label: LAB_004c42ca
    PUSH EAX                            ; 004c42d0
    CALL core_motion.cpp_FUN_005035c0   ; 004c42d1
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c42d6
    ADD ESP,0x4                         ; 004c42d9
    TEST EAX,EAX                        ; 004c42dc
    JNZ 0x004c411c                      ; 004c42de
        ;   XREF to: 004c411c (CONDITIONAL_JUMP)  ; LAB_004c411c
    MOV dword ptr [EBX + 0x10b5c],0x41f00000 ; 004c42e4
    MOV dword ptr [EBX + 0x10b58],EAX   ; 004c42ee
    LEA EAX,[EBX + 0x10b68]             ; 004c42f4
    MOV dword ptr [EBX + 0x10b60],0x1   ; 004c42fa
    LEA EDX,[EBX + 0x20]                ; 004c4304
    MOV dword ptr [EBX + 0x10b64],0x3f800000 ; 004c4307
    CMP EAX,EDX                         ; 004c4311
    JZ 0x004c4325                       ; 004c4313
        ;   XREF to: 004c4325 (CONDITIONAL_JUMP)  ; LAB_004c4325
    MOV ECX,dword ptr [EDX]             ; 004c4315
    MOV dword ptr [EAX],ECX             ; 004c4317
    MOV ECX,dword ptr [EDX + 0x4]       ; 004c4319
    MOV dword ptr [EAX + 0x4],ECX       ; 004c431c
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c431f
    MOV dword ptr [EAX + 0x8],ECX       ; 004c4322
    PUSH 0x5d91ff                       ; 004c4325 | s_go_berzerk_005d91fe+1
        ;   Label: LAB_004c4325
    MOV ESI,dword ptr [0x00609ed0]      ; 004c432a | g_CConsolePtr
    PUSH ESI                            ; 004c4330 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004c4331
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 004c4336
    JMP 0x004c411c                      ; 004c4339
        ;   XREF to: 004c411c (UNCONDITIONAL_JUMP)  ; LAB_004c411c
    MOV dword ptr [EBX + 0x25a8],ECX    ; 004c433e
        ;   Label: LAB_004c433e
    JMP 0x004c4190                      ; 004c4344
        ;   XREF to: 004c4190 (UNCONDITIONAL_JUMP)  ; LAB_004c4190
    PUSH EBX                            ; 004c4349
        ;   Label: LAB_004c4349
    CALL core_charactr.cpp_CCharacter_shatter_FUN_00427210 ; 004c434a
        ;   XREF to: 00427210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_shatter_FUN_00427210(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c434f
    PUSH EDI                            ; 004c4352
    PUSH EBX                            ; 004c4353
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 004c4354
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004c4359
    MOV ESP,EBP                         ; 004c435c
    POP EBP                             ; 004c435e
    POP EDI                             ; 004c435f
    POP ESI                             ; 004c4360
    POP EBX                             ; 004c4361
    RET                                 ; 004c4362
    MOV dword ptr [EBX + 0x10b14],EDX   ; 004c4363
        ;   Label: LAB_004c4363
    JMP 0x004c41fa                      ; 004c4369
        ;   XREF to: 004c41fa (UNCONDITIONAL_JUMP)  ; LAB_004c41fa
    JZ 0x004c422d                       ; 004c436e
        ;   XREF to: 004c422d (CONDITIONAL_JUMP)  ; LAB_004c422d
        ;   Label: LAB_004c436e
    INC EAX                             ; 004c4374
    MOV ECX,dword ptr [EBX + 0x3448]    ; 004c4375
    ADD EDX,0x38                        ; 004c437b
    CMP EAX,ECX                         ; 004c437e
    JL 0x004c421b                       ; 004c4380
        ;   XREF to: 004c421b (CONDITIONAL_JUMP)  ; LAB_004c421b
    JMP 0x004c4232                      ; 004c4386
        ;   XREF to: 004c4232 (UNCONDITIONAL_JUMP)  ; LAB_004c4232
    PUSH 0x3f000000                     ; 004c438b
        ;   Label: LAB_004c438b
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004c4390
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c4395
    TEST EAX,EAX                        ; 004c4398
    JZ 0x004c4232                       ; 004c439a
        ;   XREF to: 004c4232 (CONDITIONAL_JUMP)  ; LAB_004c4232
    MOV ESI,0x7                         ; 004c43a0
    JMP 0x004c4232                      ; 004c43a5
        ;   XREF to: 004c4232 (UNCONDITIONAL_JUMP)  ; LAB_004c4232
    PUSH EDX                            ; 004c43aa
        ;   Label: LAB_004c43aa
    CALL core_motion.cpp_FUN_005035c0   ; 004c43ab
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV ECX,dword ptr [EAX + 0x24]      ; 004c43b0
    ADD ESP,0x4                         ; 004c43b3
    MOV EDX,ECX                         ; 004c43b6
    XOR EAX,EAX                         ; 004c43b8
    CMP ECX,0x2                         ; 004c43ba
    JNZ 0x004c43c4                      ; 004c43bd
        ;   XREF to: 004c43c4 (CONDITIONAL_JUMP)  ; LAB_004c43c4
    MOV EAX,0x1                         ; 004c43bf
    CMP EDX,0xc                         ; 004c43c4
        ;   Label: LAB_004c43c4
    JNZ 0x004c43ce                      ; 004c43c7
        ;   XREF to: 004c43ce (CONDITIONAL_JUMP)  ; LAB_004c43ce
    MOV EAX,0x1                         ; 004c43c9
    CMP EDX,0xb                         ; 004c43ce
        ;   Label: LAB_004c43ce
    JNZ 0x004c43d8                      ; 004c43d1
        ;   XREF to: 004c43d8 (CONDITIONAL_JUMP)  ; LAB_004c43d8
    MOV EAX,0x1                         ; 004c43d3
    TEST EDX,EDX                        ; 004c43d8
        ;   Label: LAB_004c43d8
    JNZ 0x004c4448                      ; 004c43da
        ;   XREF to: 004c4448 (CONDITIONAL_JUMP)  ; LAB_004c4448
    PUSH 0x1                            ; 004c43dc
        ;   Label: LAB_004c43dc
    PUSH 0x3f000000                     ; 004c43de
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004c43e3
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c43e8
    TEST EAX,EAX                        ; 004c43eb
    SETZ AL                             ; 004c43ed
    AND EAX,0xff                        ; 004c43f0
    ADD EAX,0x3                         ; 004c43f5
    PUSH EAX                            ; 004c43f8
    LEA EAX,[EBX + 0x2b4]               ; 004c43f9
    PUSH EAX                            ; 004c43ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004c4400
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c4405
    MOV ESI,dword ptr [EBX + 0x10b4c]   ; 004c4408
        ;   Label: LAB_004c4408
    PUSH ESI                            ; 004c440e
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004c440f
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004c4414
    TEST EAX,EAX                        ; 004c4417
    JNZ 0x004c42b9                      ; 004c4419
        ;   XREF to: 004c42b9 (CONDITIONAL_JUMP)  ; LAB_004c42b9
    PUSH 0x5d9230                       ; 004c441f | = "ghoul-mad-!-?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c4424
    PUSH EBX                            ; 004c442a
    CALL dword ptr [EAX + 0x34]         ; 004c442b
    ADD ESP,0x8                         ; 004c442e
    MOV dword ptr [EBX + 0x10b4c],EAX   ; 004c4431
    PUSH EDI                            ; 004c4437
    PUSH EBX                            ; 004c4438
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 004c4439
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004c443e
    MOV ESP,EBP                         ; 004c4441
    POP EBP                             ; 004c4443
    POP EDI                             ; 004c4444
    POP ESI                             ; 004c4445
    POP EBX                             ; 004c4446
    RET                                 ; 004c4447
    TEST EAX,EAX                        ; 004c4448
        ;   Label: LAB_004c4448
    JNZ 0x004c43dc                      ; 004c444a
        ;   XREF to: 004c43dc (CONDITIONAL_JUMP)  ; LAB_004c43dc
    PUSH 0x3e800000                     ; 004c444c
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004c4451
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c4456
    TEST EAX,EAX                        ; 004c4459
    JNZ 0x004c43dc                      ; 004c445b
        ;   XREF to: 004c43dc (CONDITIONAL_JUMP)  ; LAB_004c43dc
    PUSH 0x2                            ; 004c4461
    PUSH 0x1                            ; 004c4463
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004c4465
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c446a
    PUSH EAX                            ; 004c446d
    PUSH 0x5d9222                       ; 004c446e | = "guul flinch%d"
    LEA EAX,[EBP + -0x68]               ; 004c4473
    PUSH EAX                            ; 004c4476
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004c4477
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004c447c
    PUSH 0x1                            ; 004c447f
    LEA EAX,[EBP + -0x68]               ; 004c4481
    PUSH EAX                            ; 004c4484
    LEA EAX,[EBX + 0x2b4]               ; 004c4485
    PUSH EAX                            ; 004c448b
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004c448c
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004c4491
    PUSH EAX                            ; 004c4494
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 004c4495
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [EBX + 0x10b0c],0x3f800000 ; 004c449a
    ADD ESP,0xc                         ; 004c44a4
    MOV dword ptr [EBX + 0x10b10],EAX   ; 004c44a7
    JMP 0x004c4408                      ; 004c44ad
        ;   XREF to: 004c4408 (UNCONDITIONAL_JUMP)  ; LAB_004c4408

