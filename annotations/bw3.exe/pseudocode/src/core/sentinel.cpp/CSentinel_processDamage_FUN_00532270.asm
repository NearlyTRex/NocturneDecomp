; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_00532270(CSentinel *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_sentinel_die_wav_005d00e3
;   TerminatedCString s_sentinel_hurt_wav_005d00f4
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532270
        ;   Label: core_sentinel.cpp_CSentinel_processDamage_FUN_00532270
    PUSH ESI                            ; 00532271
    PUSH EDI                            ; 00532272
    MOV EBX,dword ptr [ESP + 0x10]      ; 00532273
    MOV EAX,dword ptr [ESP + 0x14]      ; 00532277
    FLD float ptr [EAX + 0x4]           ; 0053227b
    FSUBR float ptr [EBX + 0x2538]      ; 0053227e
    LEA ESI,[EBX + 0x158]               ; 00532284
    FST float ptr [EBX + 0x2538]        ; 0053228a
    FLDZ                                ; 00532290
    FCOMPP                              ; 00532292
    FNSTSW AX                           ; 00532294
    SAHF                                ; 00532296
    JC 0x005322ff                       ; 00532297
        ;   XREF to: 005322ff (CONDITIONAL_JUMP)  ; LAB_005322ff
    PUSH ESI                            ; 00532299
    MOV dword ptr [EBX + 0x2538],0x0    ; 0053229a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005322a4
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005322a9
    ADD ESP,0x4                         ; 005322ac
    CMP EAX,0x8                         ; 005322af
    JZ 0x005322ed                       ; 005322b2
        ;   XREF to: 005322ed (CONDITIONAL_JUMP)  ; LAB_005322ed
    CMP EAX,0x9                         ; 005322b4
    JZ 0x005322ed                       ; 005322b7
        ;   XREF to: 005322ed (CONDITIONAL_JUMP)  ; LAB_005322ed
    PUSH 0x1                            ; 005322b9
    PUSH 0x8                            ; 005322bb
    PUSH ESI                            ; 005322bd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005322be
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005322c3
    MOV ECX,dword ptr [EBX + 0xd054]    ; 005322c6
    PUSH ECX                            ; 005322cc
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 005322cd
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 005322d2
    PUSH 0x5d00e3                       ; 005322d5 | = "sentinel-die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005322da
        ;   Label: LAB_005322da
    PUSH EBX                            ; 005322e0
    CALL dword ptr [EAX + 0x2c]         ; 005322e1
    ADD ESP,0x8                         ; 005322e4
    MOV dword ptr [EBX + 0xd054],EAX    ; 005322e7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005322ed
        ;   Label: LAB_005322ed
    PUSH ESI                            ; 005322f1
    PUSH EBX                            ; 005322f2
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 005322f3
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005322f8
    POP EDI                             ; 005322fb
    POP ESI                             ; 005322fc
    POP EBX                             ; 005322fd
    RET                                 ; 005322fe
    PUSH 0x2                            ; 005322ff
        ;   Label: LAB_005322ff
    PUSH 0x0                            ; 00532301
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00532303
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00532308
    MOV EDI,EAX                         ; 0053230b
    TEST EAX,EAX                        ; 0053230d
    JNZ 0x0053231e                      ; 0053230f
        ;   XREF to: 0053231e (CONDITIONAL_JUMP)  ; LAB_0053231e
    PUSH 0x1                            ; 00532311
    PUSH 0x5                            ; 00532313
    PUSH ESI                            ; 00532315
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00532316
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053231b
    CMP EDI,0x1                         ; 0053231e
        ;   Label: LAB_0053231e
    JNZ 0x00532335                      ; 00532321
        ;   XREF to: 00532335 (CONDITIONAL_JUMP)  ; LAB_00532335
    PUSH EDI                            ; 00532323
    PUSH 0x6                            ; 00532324
    LEA EAX,[EBX + 0x158]               ; 00532326
    PUSH EAX                            ; 0053232c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0053232d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00532332
    CMP EDI,0x2                         ; 00532335
        ;   Label: LAB_00532335
    JNZ 0x0053234d                      ; 00532338
        ;   XREF to: 0053234d (CONDITIONAL_JUMP)  ; LAB_0053234d
    PUSH 0x1                            ; 0053233a
    PUSH 0x7                            ; 0053233c
    LEA EAX,[EBX + 0x158]               ; 0053233e
    PUSH EAX                            ; 00532344
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00532345
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053234a
    MOV EDX,dword ptr [EBX + 0xd054]    ; 0053234d
        ;   Label: LAB_0053234d
    PUSH EDX                            ; 00532353
    CALL sound_sndmain.cpp_FUN_00556700 ; 00532354
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00532359
    TEST EAX,EAX                        ; 0053235c
    JNZ 0x005322ed                      ; 0053235e
        ;   XREF to: 005322ed (CONDITIONAL_JUMP)  ; LAB_005322ed
    PUSH 0x5d00f4                       ; 00532360 | = "sentinel-hurt?.wav"
    JMP 0x005322da                      ; 00532365
        ;   XREF to: 005322da (UNCONDITIONAL_JUMP)  ; LAB_005322da

