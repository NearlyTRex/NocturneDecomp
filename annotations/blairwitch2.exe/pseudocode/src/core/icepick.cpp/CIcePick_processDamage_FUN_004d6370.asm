; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_processDamage_FUN_004d6370(CIcePick *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_icepick_die01_wav_005da901
;   TerminatedCString s_icepick_injured_wav_005da913
;   undefined4 DAT_005f8b98
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 g_CGameInstance.god_mode_enabled
;   undefined4 g_CGameInstance.allow_damage_flag
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6370
        ;   Label: core_icepick.cpp_CIcePick_processDamage_FUN_004d6370
    PUSH ESI                            ; 004d6371
    PUSH EDI                            ; 004d6372
    PUSH EBP                            ; 004d6373
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d6374
    MOV EDI,dword ptr [ESP + 0x18]      ; 004d6378
    MOV EDX,dword ptr [EBX + 0x25648]   ; 004d637c
    PUSH EDX                            ; 004d6382
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004d6383
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0x10a60]   ; 004d6388
    ADD ESP,0x4                         ; 004d638e
    TEST ECX,0x7fffffff                 ; 004d6391
    JNZ 0x004d643a                      ; 004d6397
        ;   XREF to: 004d643a (CONDITIONAL_JUMP)  ; LAB_004d643a
    MOV EAX,[0x00616494]                ; 004d639d | g_CGamePtr
        ;   Label: LAB_004d639d
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004d63a2 | g_CGameInstance.god_mode_enabled
    JZ 0x004d63b2                       ; 004d63a9
        ;   XREF to: 004d63b2 (CONDITIONAL_JUMP)  ; LAB_004d63b2
    MOV dword ptr [EDI + 0x4],0x0       ; 004d63ab
    MOV EAX,[0x00616494]                ; 004d63b2 | g_CGamePtr
        ;   Label: LAB_004d63b2
    MOV EBP,dword ptr [EAX + 0x248]     ; 004d63b7 | g_CGameInstance.allow_damage_flag
    TEST EBP,EBP                        ; 004d63bd
    JZ 0x004d6446                       ; 004d63bf
        ;   XREF to: 004d6446 (CONDITIONAL_JUMP)  ; LAB_004d6446
    MOV EAX,[0x005f8b98]                ; 004d63c5 | DAT_005f8b98
        ;   Label: LAB_004d63c5
    MOV dword ptr [EBX + 0x10a60],EAX   ; 004d63ca
    FLD float ptr [EDI + 0x4]           ; 004d63d0
    FSUBR float ptr [EBX + 0x25a8]      ; 004d63d3
    LEA ESI,[EBX + 0x2b4]               ; 004d63d9
    FST float ptr [EBX + 0x25a8]        ; 004d63df
    FLDZ                                ; 004d63e5
    FCOMPP                              ; 004d63e7
    FNSTSW AX                           ; 004d63e9
    SAHF                                ; 004d63eb
    JNC 0x004d644e                      ; 004d63ec
        ;   XREF to: 004d644e (CONDITIONAL_JUMP)  ; LAB_004d644e
    FLD float ptr [EDI + 0x4]           ; 004d63ee
    FLDZ                                ; 004d63f1
    FCOMPP                              ; 004d63f3
    FNSTSW AX                           ; 004d63f5
    SAHF                                ; 004d63f7
    JNC 0x004d642b                      ; 004d63f8
        ;   XREF to: 004d642b (CONDITIONAL_JUMP)  ; LAB_004d642b
    CMP dword ptr [EBX + 0x25640],0x0   ; 004d63fa
    JNZ 0x004d64ee                      ; 004d6401
        ;   XREF to: 004d64ee (CONDITIONAL_JUMP)  ; LAB_004d64ee
    PUSH 0x1                            ; 004d6407
    PUSH 0x4                            ; 004d6409
    PUSH ESI                            ; 004d640b
        ;   Label: LAB_004d640b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d640c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6411
    MOV EDX,dword ptr [EBX + 0x2564c]   ; 004d6414
    PUSH EDX                            ; 004d641a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 004d641b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004d6420
    TEST EAX,EAX                        ; 004d6423
    JZ 0x004d64f7                       ; 004d6425
        ;   XREF to: 004d64f7 (CONDITIONAL_JUMP)  ; LAB_004d64f7
    PUSH EDI                            ; 004d642b
        ;   Label: LAB_004d642b
    PUSH EBX                            ; 004d642c
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 004d642d
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d6432
    POP EBP                             ; 004d6435
    POP EDI                             ; 004d6436
    POP ESI                             ; 004d6437
    POP EBX                             ; 004d6438
    RET                                 ; 004d6439
    MOV dword ptr [EDI + 0x4],0x0       ; 004d643a
        ;   Label: LAB_004d643a
    JMP 0x004d639d                      ; 004d6441
        ;   XREF to: 004d639d (UNCONDITIONAL_JUMP)  ; LAB_004d639d
    MOV dword ptr [EDI + 0x4],EBP       ; 004d6446
        ;   Label: LAB_004d6446
    JMP 0x004d63c5                      ; 004d6449
        ;   XREF to: 004d63c5 (UNCONDITIONAL_JUMP)  ; LAB_004d63c5
    PUSH ESI                            ; 004d644e
        ;   Label: LAB_004d644e
    MOV dword ptr [EBX + 0x25a8],0x0    ; 004d644f
    CALL core_motion.cpp_FUN_005035c0   ; 004d6459
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d645e
    ADD ESP,0x4                         ; 004d6461
    CMP EAX,0x9                         ; 004d6464
    JZ 0x004d642b                       ; 004d6467
        ;   XREF to: 004d642b (CONDITIONAL_JUMP)  ; LAB_004d642b
    PUSH ESI                            ; 004d6469
    CALL core_motion.cpp_FUN_005035c0   ; 004d646a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d646f
    ADD ESP,0x4                         ; 004d6472
    CMP EAX,0x8                         ; 004d6475
    JZ 0x004d642b                       ; 004d6478
        ;   XREF to: 004d642b (CONDITIONAL_JUMP)  ; LAB_004d642b
    PUSH 0x1                            ; 004d647a
    PUSH 0x8                            ; 004d647c
    PUSH ESI                            ; 004d647e
    MOV dword ptr [EBX + 0x276c],0x0    ; 004d647f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d6489
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d648e
    PUSH 0x0                            ; 004d6491
    PUSH 0x1                            ; 004d6493
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d6495
    PUSH EBX                            ; 004d649b
    CALL dword ptr [EAX + 0x130]        ; 004d649c
    ADD ESP,0xc                         ; 004d64a2
    PUSH 0x0                            ; 004d64a5
    PUSH 0x42480000                     ; 004d64a7
    PUSH 0x32                           ; 004d64ac
    PUSH EBX                            ; 004d64ae
    MOV ECX,dword ptr [0x006167e0]      ; 004d64af | g_CGorePtr
    PUSH ECX                            ; 004d64b5
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0 ; 004d64b6
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 004d64bb
    MOV ESI,dword ptr [EBX + 0x2564c]   ; 004d64be
    PUSH ESI                            ; 004d64c4
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004d64c5
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004d64ca
    PUSH 0x5da901                       ; 004d64cd | = "icepick_die01.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d64d2
    PUSH EBX                            ; 004d64d8
    CALL dword ptr [EAX + 0x34]         ; 004d64d9
    ADD ESP,0x8                         ; 004d64dc
    PUSH EDI                            ; 004d64df
    PUSH EBX                            ; 004d64e0
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 004d64e1
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d64e6
    POP EBP                             ; 004d64e9
    POP EDI                             ; 004d64ea
    POP ESI                             ; 004d64eb
    POP EBX                             ; 004d64ec
    RET                                 ; 004d64ed
    PUSH 0x1                            ; 004d64ee
        ;   Label: LAB_004d64ee
    PUSH 0xb                            ; 004d64f0
    JMP 0x004d640b                      ; 004d64f2
        ;   XREF to: 004d640b (UNCONDITIONAL_JUMP)  ; LAB_004d640b
    PUSH 0x5da913                       ; 004d64f7 | = "icepick_injured??.wav"
        ;   Label: LAB_004d64f7
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d64fc
    PUSH EBX                            ; 004d6502
    CALL dword ptr [EAX + 0x34]         ; 004d6503
    ADD ESP,0x8                         ; 004d6506
    MOV dword ptr [EBX + 0x2564c],EAX   ; 004d6509
    PUSH EDI                            ; 004d650f
    PUSH EBX                            ; 004d6510
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 004d6511
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d6516
    POP EBP                             ; 004d6519
    POP EDI                             ; 004d651a
    POP ESI                             ; 004d651b
    POP EBX                             ; 004d651c
    RET                                 ; 004d651d

