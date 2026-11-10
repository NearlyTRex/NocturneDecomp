; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b9170(CEnemy *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_dog_damage_wav_005fa387
;   TerminatedCString s_dog_damage_wav_005fa397
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_sound.cpp_CSound_killSound_FUN_0057d9d0
;   core_xform.cpp_FUN_005b8eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9170
        ;   Label: core_xform.cpp_FUN_005b9170
    PUSH ESI                            ; 005b9171
    PUSH EDI                            ; 005b9172
    PUSH EBP                            ; 005b9173
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b9174
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b9178
    PUSH EDI                            ; 005b917c
    PUSH EBX                            ; 005b917d
    CALL core_xform.cpp_FUN_005b8eb0    ; 005b917e
        ;   XREF to: 005b8eb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b8eb0()
    FLD float ptr [EDI + 0x4]           ; 005b9183
    ADD ESP,0x8                         ; 005b9186
    FSUBR float ptr [EBX + 0x2538]      ; 005b9189
    LEA ESI,[EBX + 0x158]               ; 005b918f
    FST float ptr [EBX + 0x2538]        ; 005b9195
    FLDZ                                ; 005b919b
    FCOMPP                              ; 005b919d
    FNSTSW AX                           ; 005b919f
    SAHF                                ; 005b91a1
    JC 0x005b9262                       ; 005b91a2
        ;   XREF to: 005b9262 (CONDITIONAL_JUMP)  ; LAB_005b9262
    PUSH ESI                            ; 005b91a8
    MOV dword ptr [EBX + 0x2538],0x0    ; 005b91a9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005b91b3
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005b91b8
    ADD ESP,0x4                         ; 005b91bb
    CMP EAX,0x13                        ; 005b91be
    JZ 0x005b9225                       ; 005b91c1
        ;   XREF to: 005b9225 (CONDITIONAL_JUMP)  ; LAB_005b9225
    CMP EAX,0x10                        ; 005b91c3
    JZ 0x005b9225                       ; 005b91c6
        ;   XREF to: 005b9225 (CONDITIONAL_JUMP)  ; LAB_005b9225
    CMP EAX,0x14                        ; 005b91c8
    JZ 0x005b9225                       ; 005b91cb
        ;   XREF to: 005b9225 (CONDITIONAL_JUMP)  ; LAB_005b9225
    CMP EAX,0x11                        ; 005b91cd
    JZ 0x005b9225                       ; 005b91d0
        ;   XREF to: 005b9225 (CONDITIONAL_JUMP)  ; LAB_005b9225
    CMP EAX,0x15                        ; 005b91d2
    JZ 0x005b9225                       ; 005b91d5
        ;   XREF to: 005b9225 (CONDITIONAL_JUMP)  ; LAB_005b9225
    CMP EAX,0x12                        ; 005b91d7
    JZ 0x005b9225                       ; 005b91da
        ;   XREF to: 005b9225 (CONDITIONAL_JUMP)  ; LAB_005b9225
    PUSH 0x1                            ; 005b91dc
    PUSH 0x2                            ; 005b91de
    PUSH 0x0                            ; 005b91e0
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b91e2
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b91e7
    ADD EAX,0x10                        ; 005b91ea
    PUSH EAX                            ; 005b91ed
    PUSH ESI                            ; 005b91ee
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b91ef
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b91f4
    MOV EDX,dword ptr [EBX + 0xc2b0]    ; 005b91f7
    PUSH EDX                            ; 005b91fd
    MOV ECX,dword ptr [0x006236b8]      ; 005b91fe | DAT_006236b8
    PUSH ECX                            ; 005b9204
    CALL core_sound.cpp_CSound_killSound_FUN_0057d9d0 ; 005b9205
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0057d9d0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b920a
    PUSH 0x5fa387                       ; 005b920d | = "dog-damage?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b9212
    PUSH EBX                            ; 005b9218
    CALL dword ptr [EAX + 0x2c]         ; 005b9219
    ADD ESP,0x8                         ; 005b921c
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 005b921f
    MOV ESI,dword ptr [EBX + 0xc2b0]    ; 005b9225
        ;   Label: LAB_005b9225
    PUSH ESI                            ; 005b922b
    MOV EBP,dword ptr [0x006236b8]      ; 005b922c | DAT_006236b8
    PUSH EBP                            ; 005b9232
    CALL core_sound.cpp_CSound_killSound_FUN_0057d9d0 ; 005b9233
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0057d9d0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 005b9238
    PUSH 0x5fa397                       ; 005b923b | = "dog-damage?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b9240
    PUSH EBX                            ; 005b9246
    CALL dword ptr [EAX + 0x2c]         ; 005b9247
    ADD ESP,0x8                         ; 005b924a
    PUSH EDI                            ; 005b924d
    PUSH EBX                            ; 005b924e
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 005b924f
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 005b9255
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005b925a
    POP EBP                             ; 005b925d
    POP EDI                             ; 005b925e
    POP ESI                             ; 005b925f
    POP EBX                             ; 005b9260
    RET                                 ; 005b9261
    PUSH 0x1                            ; 005b9262
        ;   Label: LAB_005b9262
    PUSH 0x2                            ; 005b9264
    PUSH 0x0                            ; 005b9266
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005b9268
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005b926d
    ADD EAX,0xd                         ; 005b9270
    PUSH EAX                            ; 005b9273
    PUSH ESI                            ; 005b9274
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005b9275
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005b927a
    JMP 0x005b9225                      ; 005b927d
        ;   XREF to: 005b9225 (UNCONDITIONAL_JUMP)  ; LAB_005b9225

