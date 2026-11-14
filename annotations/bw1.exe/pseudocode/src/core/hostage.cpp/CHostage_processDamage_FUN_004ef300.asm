; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004ef300(CHostage *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_007c2ff4
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_npc.cpp_CNPC_processDamage_FUN_00531da0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef300
        ;   Label: core_hostage.cpp_CHostage_processDamage_FUN_004ef300
    PUSH ESI                            ; 004ef301
    PUSH EDI                            ; 004ef302
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ef303
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ef307
    MOV EDX,dword ptr [EBX + 0x1fe68]   ; 004ef30b
    TEST EDX,EDX                        ; 004ef311
    JZ 0x004ef38f                       ; 004ef313
        ;   XREF to: 004ef38f (CONDITIONAL_JUMP)  ; LAB_004ef38f
    FLD float ptr [ESI + 0x4]           ; 004ef319
        ;   Label: LAB_004ef319
    FSUBR float ptr [EBX + 0x2538]      ; 004ef31c
    LEA EDX,[EBX + 0x158]               ; 004ef322
    FST float ptr [EBX + 0x2538]        ; 004ef328
    FLDZ                                ; 004ef32e
    FCOMPP                              ; 004ef330
    FNSTSW AX                           ; 004ef332
    SAHF                                ; 004ef334
    JNC 0x004ef394                      ; 004ef335
        ;   XREF to: 004ef394 (CONDITIONAL_JUMP)  ; LAB_004ef394
    FLD float ptr [ESI + 0x4]           ; 004ef337
    FLDZ                                ; 004ef33a
    FCOMPP                              ; 004ef33c
    FNSTSW AX                           ; 004ef33e
    SAHF                                ; 004ef340
    JNC 0x004ef381                      ; 004ef341
        ;   XREF to: 004ef381 (CONDITIONAL_JUMP)  ; LAB_004ef381
    CMP dword ptr [EBX + 0x26fc],0x0    ; 004ef343
    JNZ 0x004ef36e                      ; 004ef34a
        ;   XREF to: 004ef36e (CONDITIONAL_JUMP)  ; LAB_004ef36e
    PUSH 0x1                            ; 004ef34c
    PUSH 0x4                            ; 004ef34e
    PUSH EDX                            ; 004ef350
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ef351
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,[0x007c2ff4]                ; 004ef356 | DAT_007c2ff4
    MOV dword ptr [EBX + 0x1fe9c],0x40400000 ; 004ef35b
    ADD ESP,0xc                         ; 004ef365
    MOV dword ptr [EBX + 0x1fe98],EAX   ; 004ef368
    MOV EDI,dword ptr [EBX + 0x1fe60]   ; 004ef36e
        ;   Label: LAB_004ef36e
    PUSH EDI                            ; 004ef374
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004ef375
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004ef37a
    TEST EAX,EAX                        ; 004ef37d
    JZ 0x004ef3d8                       ; 004ef37f
        ;   XREF to: 004ef3d8 (CONDITIONAL_JUMP)  ; LAB_004ef3d8
    PUSH ESI                            ; 004ef381
        ;   Label: LAB_004ef381
    PUSH EBX                            ; 004ef382
    CALL core_npc.cpp_CNPC_processDamage_FUN_00531da0 ; 004ef383
        ;   XREF to: 00531da0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_processDamage_FUN_00531da0(CNPC * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004ef388
    POP EDI                             ; 004ef38b
    POP ESI                             ; 004ef38c
    POP EBX                             ; 004ef38d
    RET                                 ; 004ef38e
    MOV dword ptr [ESI + 0x4],EDX       ; 004ef38f
        ;   Label: LAB_004ef38f
    JMP 0x004ef319                      ; 004ef392
        ;   XREF to: 004ef319 (UNCONDITIONAL_JUMP)  ; LAB_004ef319
    PUSH 0x1                            ; 004ef394
        ;   Label: LAB_004ef394
    PUSH 0x6                            ; 004ef396
    PUSH EDX                            ; 004ef398
    MOV dword ptr [EBX + 0x2538],0x0    ; 004ef399
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ef3a3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ef3a8
    PUSH 0x41c80000                     ; 004ef3ab
    PUSH 0x32                           ; 004ef3b0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ef3b2
    PUSH EBX                            ; 004ef3b8
    CALL dword ptr [EAX + 0xa8]         ; 004ef3b9
    ADD ESP,0xc                         ; 004ef3bf
    LEA EAX,[EBX + 0x1fdfc]             ; 004ef3c2
    PUSH EAX                            ; 004ef3c8
    MOV EDX,dword ptr [EBX + 0x154]     ; 004ef3c9
    PUSH EBX                            ; 004ef3cf
    CALL dword ptr [EDX + 0x2c]         ; 004ef3d0
    ADD ESP,0x8                         ; 004ef3d3
    JMP 0x004ef381                      ; 004ef3d6
        ;   XREF to: 004ef381 (UNCONDITIONAL_JUMP)  ; LAB_004ef381
    LEA EAX,[EBX + 0x1fd98]             ; 004ef3d8
        ;   Label: LAB_004ef3d8
    PUSH EAX                            ; 004ef3de
    MOV EDX,dword ptr [EBX + 0x154]     ; 004ef3df
    PUSH EBX                            ; 004ef3e5
    CALL dword ptr [EDX + 0x2c]         ; 004ef3e6
    ADD ESP,0x8                         ; 004ef3e9
    MOV dword ptr [EBX + 0x1fe60],EAX   ; 004ef3ec
    PUSH ESI                            ; 004ef3f2
    PUSH EBX                            ; 004ef3f3
    CALL core_npc.cpp_CNPC_processDamage_FUN_00531da0 ; 004ef3f4
        ;   XREF to: 00531da0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_processDamage_FUN_00531da0(CNPC * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004ef3f9
    POP EDI                             ; 004ef3fc
    POP ESI                             ; 004ef3fd
    POP EBX                             ; 004ef3fe
    RET                                 ; 004ef3ff

