; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_styldemo_cpp_CStylerDemon_processDamage_FUN_005a0330(CStylerDemon *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CStylerDemon *   Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_exorcism_death_005da517
;   TerminatedCString s_exorcism_death_005da526
;   undefined4 DAT_005da536
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_event.cpp_FUN_004946f0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   unkafter_enemy.cpp_FUN_0048a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0330
        ;   Label: core_styldemo.cpp_CStylerDemon_processDamage_FUN_005a0330
    PUSH ESI                            ; 005a0331
    PUSH EDI                            ; 005a0332
    PUSH EBP                            ; 005a0333
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a0334
    MOV EBP,dword ptr [ESP + 0x18]      ; 005a0338
    MOV EDX,dword ptr [EBX + 0xd054]    ; 005a033c
    PUSH EDX                            ; 005a0342
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 005a0343
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    FLD float ptr [EBP + 0x4]           ; 005a0348
    FSUBR float ptr [EBX + 0x2538]      ; 005a034b
    ADD ESP,0x4                         ; 005a0351
    FST float ptr [EBX + 0x2538]        ; 005a0354
    FCOMP double ptr [0x005da536]       ; 005a035a | DAT_005da536
    FNSTSW AX                           ; 005a0360
    SAHF                                ; 005a0362
    JA 0x005a03d3                       ; 005a0363
        ;   XREF to: 005a03d3 (CONDITIONAL_JUMP)  ; LAB_005a03d3
    MOV dword ptr [EBX + 0x2538],0x0    ; 005a0369
    MOV dword ptr [EBX + 0x2540],0x0    ; 005a0373
    CMP dword ptr [EBP + 0x30],0x6f     ; 005a037d
    JNZ 0x005a039b                      ; 005a0381
        ;   XREF to: 005a039b (CONDITIONAL_JUMP)  ; LAB_005a039b
    PUSH 0x5da517                       ; 005a0383 | = "exorcism_death"
    MOV ESI,dword ptr [0x005fba60]      ; 005a0388 | DAT_005fba60
    PUSH ESI                            ; 005a038e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 005a038f
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005a0394
    TEST EAX,EAX                        ; 005a0397
    JZ 0x005a03e2                       ; 005a0399
        ;   XREF to: 005a03e2 (CONDITIONAL_JUMP)  ; LAB_005a03e2
    LEA EDI,[EBX + 0x158]               ; 005a039b
        ;   Label: LAB_005a039b
    PUSH EDI                            ; 005a03a1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005a03a2
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV ESI,dword ptr [EAX + 0x24]      ; 005a03a7
    ADD ESP,0x4                         ; 005a03aa
    CMP ESI,0x5                         ; 005a03ad
    JZ 0x005a0400                       ; 005a03b0
        ;   XREF to: 005a0400 (CONDITIONAL_JUMP)  ; LAB_005a0400
    CMP ESI,0x6                         ; 005a03b2
    JZ 0x005a0400                       ; 005a03b5
        ;   XREF to: 005a0400 (CONDITIONAL_JUMP)  ; LAB_005a0400
    CMP ESI,0xe                         ; 005a03b7
    JZ 0x005a0400                       ; 005a03ba
        ;   XREF to: 005a0400 (CONDITIONAL_JUMP)  ; LAB_005a0400
    CMP ESI,0xf                         ; 005a03bc
    JZ 0x005a0400                       ; 005a03bf
        ;   XREF to: 005a0400 (CONDITIONAL_JUMP)  ; LAB_005a0400
    CMP ESI,0x7                         ; 005a03c1
    JGE 0x005a03fa                      ; 005a03c4
        ;   XREF to: 005a03fa (CONDITIONAL_JUMP)  ; LAB_005a03fa
    PUSH 0x1                            ; 005a03c6
    PUSH 0x5                            ; 005a03c8
    PUSH EDI                            ; 005a03ca
        ;   Label: LAB_005a03ca
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005a03cb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005a03cb
    ADD ESP,0xc                         ; 005a03d0
    PUSH EBP                            ; 005a03d3
        ;   Label: LAB_005a03d3
    PUSH EBX                            ; 005a03d4
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 005a03d5
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005a03da
    POP EBP                             ; 005a03dd
    POP EDI                             ; 005a03de
    POP ESI                             ; 005a03df
    POP EBX                             ; 005a03e0
    RET                                 ; 005a03e1
    PUSH 0x1                            ; 005a03e2
        ;   Label: LAB_005a03e2
    PUSH 0x5da526                       ; 005a03e4 | = "exorcism_death"
    MOV EDI,dword ptr [0x005fba60]      ; 005a03e9 | DAT_005fba60
    PUSH EDI                            ; 005a03ef
    CALL core_event.cpp_FUN_004946f0    ; 005a03f0
        ;   XREF to: 004946f0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004946f0()
    ADD ESP,0xc                         ; 005a03f5
    JMP 0x005a039b                      ; 005a03f8
        ;   XREF to: 005a039b (UNCONDITIONAL_JUMP)  ; LAB_005a039b
    PUSH 0x1                            ; 005a03fa
        ;   Label: LAB_005a03fa
    PUSH 0xe                            ; 005a03fc
    JMP 0x005a03ca                      ; 005a03fe
        ;   XREF to: 005a03ca (UNCONDITIONAL_JUMP)  ; LAB_005a03ca
    LEA EDI,[EBX + 0x158]               ; 005a0400
        ;   Label: LAB_005a0400
    PUSH EDI                            ; 005a0406
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005a0407
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV ESI,dword ptr [EAX + 0x24]      ; 005a040c
    ADD ESP,0x4                         ; 005a040f
    CMP ESI,0x12                        ; 005a0412
    JZ 0x005a0450                       ; 005a0415
        ;   XREF to: 005a0450 (CONDITIONAL_JUMP)  ; LAB_005a0450
    CMP ESI,0xb                         ; 005a0417
    JZ 0x005a0450                       ; 005a041a
        ;   XREF to: 005a0450 (CONDITIONAL_JUMP)  ; LAB_005a0450
    CMP ESI,0x14                        ; 005a041c
    JZ 0x005a0450                       ; 005a041f
        ;   XREF to: 005a0450 (CONDITIONAL_JUMP)  ; LAB_005a0450
    CMP ESI,0x16                        ; 005a0421
    JZ 0x005a0450                       ; 005a0424
        ;   XREF to: 005a0450 (CONDITIONAL_JUMP)  ; LAB_005a0450
    PUSH dword ptr [EBP + 0x4]          ; 005a0426
    PUSH EBX                            ; 005a0429
    CALL unkafter_enemy.cpp_FUN_0048a1b0 ; 005a042a
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 005a042f
    TEST EAX,EAX                        ; 005a0432
    JZ 0x005a03d3                       ; 005a0434
        ;   XREF to: 005a03d3 (CONDITIONAL_JUMP)  ; LAB_005a03d3
    CMP ESI,0x7                         ; 005a0436
    JL 0x005a0440                       ; 005a0439
        ;   XREF to: 005a0440 (CONDITIONAL_JUMP)  ; LAB_005a0440
    CMP ESI,0x8                         ; 005a043b
    JNZ 0x005a0460                      ; 005a043e
        ;   XREF to: 005a0460 (CONDITIONAL_JUMP)  ; LAB_005a0460
    PUSH 0x1                            ; 005a0440
        ;   Label: LAB_005a0440
    PUSH 0x4                            ; 005a0442
    LEA EAX,[EBX + 0x158]               ; 005a0444
    PUSH EAX                            ; 005a044a
    JMP 0x005a03cb                      ; 005a044b
        ;   XREF to: 005a03cb (UNCONDITIONAL_JUMP)  ; LAB_005a03cb
    PUSH 0x1                            ; 005a0450
        ;   Label: LAB_005a0450
    PUSH 0xd                            ; 005a0452
    LEA EAX,[EBX + 0x158]               ; 005a0454
    PUSH EAX                            ; 005a045a
    JMP 0x005a03cb                      ; 005a045b
        ;   XREF to: 005a03cb (UNCONDITIONAL_JUMP)  ; LAB_005a03cb
    PUSH 0x1                            ; 005a0460
        ;   Label: LAB_005a0460
    PUSH 0xd                            ; 005a0462
    JMP 0x005a03ca                      ; 005a0464
        ;   XREF to: 005a03ca (UNCONDITIONAL_JUMP)  ; LAB_005a03ca

