; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_drone_cpp_CDrone_processDamage_FUN_0048f360(CDrone *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_drone_die_wav_00622437
;   TerminatedCString s_drone_hurt_wav_00622446
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f360
        ;   Label: core_drone.cpp_CDrone_processDamage_FUN_0048f360
    PUSH ESI                            ; 0048f361
    PUSH EDI                            ; 0048f362
    PUSH EBP                            ; 0048f363
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048f364
    MOV EDX,dword ptr [EBX + 0xbed0]    ; 0048f368
    PUSH EDX                            ; 0048f36e
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0048f36f
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0048f374
    MOV ECX,dword ptr [EBX + 0xbecc]    ; 0048f377
    PUSH ECX                            ; 0048f37d
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0048f37e
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0048f383
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048f386
    FLD float ptr [EAX + 0x4]           ; 0048f38a
    FSUBR float ptr [EBX + 0x243c]      ; 0048f38d
    FST float ptr [EBX + 0x243c]        ; 0048f393
    FLDZ                                ; 0048f399
    FCOMPP                              ; 0048f39b
    FNSTSW AX                           ; 0048f39d
    SAHF                                ; 0048f39f
    JC 0x0048f422                       ; 0048f3a0
        ;   XREF to: 0048f422 (CONDITIONAL_JUMP)  ; LAB_0048f422
    LEA ESI,[EBX + 0x158]               ; 0048f3a6
    PUSH ESI                            ; 0048f3ac
    MOV dword ptr [EBX + 0x243c],0x0    ; 0048f3ad
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0048f3b7
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0048f3bc
    ADD ESP,0x4                         ; 0048f3bf
    CMP EAX,0x8                         ; 0048f3c2
    JZ 0x0048f3d9                       ; 0048f3c5
        ;   XREF to: 0048f3d9 (CONDITIONAL_JUMP)  ; LAB_0048f3d9
    CMP EAX,0x7                         ; 0048f3c7
    JZ 0x0048f3d9                       ; 0048f3ca
        ;   XREF to: 0048f3d9 (CONDITIONAL_JUMP)  ; LAB_0048f3d9
    PUSH 0x1                            ; 0048f3cc
    PUSH 0x7                            ; 0048f3ce
    PUSH ESI                            ; 0048f3d0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f3d1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f3d6
    MOV EBP,dword ptr [EBX + 0xbec8]    ; 0048f3d9
        ;   Label: LAB_0048f3d9
    PUSH EBP                            ; 0048f3df
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0048f3e0
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0048f3e5
    MOV EAX,dword ptr [EBX + 0xbecc]    ; 0048f3e8
    PUSH EAX                            ; 0048f3ee
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0048f3ef
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0048f3f4
    PUSH 0x622437                       ; 0048f3f7 | = "drone-die?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048f3fc
    PUSH EBX                            ; 0048f402
    CALL dword ptr [EAX + 0x24]         ; 0048f403
    ADD ESP,0x8                         ; 0048f406
    MOV dword ptr [EBX + 0xbec8],EAX    ; 0048f409
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048f40f
        ;   Label: LAB_0048f40f
    PUSH EDX                            ; 0048f413
    PUSH EBX                            ; 0048f414
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 0048f415
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0048f41a
    POP EBP                             ; 0048f41d
    POP EDI                             ; 0048f41e
    POP ESI                             ; 0048f41f
    POP EBX                             ; 0048f420
    RET                                 ; 0048f421
    MOV ESI,dword ptr [EBX + 0xbecc]    ; 0048f422
        ;   Label: LAB_0048f422
    PUSH ESI                            ; 0048f428
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0048f429
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0048f42e
    MOV EDI,dword ptr [EBX + 0xbec8]    ; 0048f431
    PUSH EDI                            ; 0048f437
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0048f438
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0048f43d
    TEST EAX,EAX                        ; 0048f440
    JZ 0x0048f4ab                       ; 0048f442
        ;   XREF to: 0048f4ab (CONDITIONAL_JUMP)  ; LAB_0048f4ab
    PUSH 0x2                            ; 0048f444
        ;   Label: LAB_0048f444
    PUSH 0x0                            ; 0048f446
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 0048f448
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 0048f44d
    MOV ESI,EAX                         ; 0048f450
    TEST EAX,EAX                        ; 0048f452
    JNZ 0x0048f469                      ; 0048f454
        ;   XREF to: 0048f469 (CONDITIONAL_JUMP)  ; LAB_0048f469
    PUSH 0x1                            ; 0048f456
    PUSH 0x3                            ; 0048f458
    LEA EAX,[EBX + 0x158]               ; 0048f45a
    PUSH EAX                            ; 0048f460
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f461
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f466
    CMP ESI,0x1                         ; 0048f469
        ;   Label: LAB_0048f469
    JNZ 0x0048f480                      ; 0048f46c
        ;   XREF to: 0048f480 (CONDITIONAL_JUMP)  ; LAB_0048f480
    PUSH ESI                            ; 0048f46e
    PUSH 0x4                            ; 0048f46f
    LEA EAX,[EBX + 0x158]               ; 0048f471
    PUSH EAX                            ; 0048f477
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f478
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f47d
    CMP ESI,0x2                         ; 0048f480
        ;   Label: LAB_0048f480
    JNZ 0x0048f40f                      ; 0048f483
        ;   XREF to: 0048f40f (CONDITIONAL_JUMP)  ; LAB_0048f40f
    PUSH 0x1                            ; 0048f485
    PUSH 0x5                            ; 0048f487
    LEA EAX,[EBX + 0x158]               ; 0048f489
    PUSH EAX                            ; 0048f48f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f490
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f495
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048f498
    PUSH EDX                            ; 0048f49c
    PUSH EBX                            ; 0048f49d
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 0048f49e
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0048f4a3
    POP EBP                             ; 0048f4a6
    POP EDI                             ; 0048f4a7
    POP ESI                             ; 0048f4a8
    POP EBX                             ; 0048f4a9
    RET                                 ; 0048f4aa
    PUSH 0x622446                       ; 0048f4ab | = "drone-hurt?.wav"
        ;   Label: LAB_0048f4ab
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048f4b0
    PUSH EBX                            ; 0048f4b6
    CALL dword ptr [EAX + 0x24]         ; 0048f4b7
    ADD ESP,0x8                         ; 0048f4ba
    MOV dword ptr [EBX + 0xbec8],EAX    ; 0048f4bd
    JMP 0x0048f444                      ; 0048f4c3
        ;   XREF to: 0048f444 (UNCONDITIONAL_JUMP)  ; LAB_0048f444

