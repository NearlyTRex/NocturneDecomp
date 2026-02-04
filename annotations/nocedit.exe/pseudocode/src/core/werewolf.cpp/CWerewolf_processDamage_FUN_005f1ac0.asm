; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_005f1ac0(CWerewolf *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined1       Stack[-0x28]:1  local_28
;
; Referenced Globals:
;   TerminatedCString s_werewolf_die_wav_00657e2f
;   TerminatedCString s_werewolf_hurt_wav_00657e41
;   double DOUBLE_00657e54 = 2
;   double DOUBLE_00657e5c = 5
;   double DOUBLE_00657e64 = -5
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CFireEffect g_CFireEffectInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0326f0c0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_werewolf.cpp_CWerewolf_FUN_005f11e0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f1ac0
        ;   Label: core_werewolf.cpp_CWerewolf_processDamage_FUN_005f1ac0
    PUSH ESI                            ; 005f1ac1
    PUSH EDI                            ; 005f1ac2
    PUSH EBP                            ; 005f1ac3
    MOV EBP,ESP                         ; 005f1ac4
    SUB ESP,0x1c                        ; 005f1ac6
    AND ESP,0xfffffff8                  ; 005f1ac9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005f1acc
    MOV EDI,dword ptr [EBP + 0x18]      ; 005f1acf
    MOV EDX,dword ptr [ESI + 0xbed8]    ; 005f1ad2
    PUSH EDX                            ; 005f1ad8
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005f1ad9
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV ECX,dword ptr [EDI + 0x30]      ; 005f1ade
    ADD ESP,0x4                         ; 005f1ae1
    CMP ECX,0x6c                        ; 005f1ae4
    JZ 0x005f1bda                       ; 005f1ae7
        ;   XREF to: 005f1bda (CONDITIONAL_JUMP)  ; LAB_005f1bda
    CMP dword ptr [EDI + 0x28],0x3      ; 005f1aed
    JZ 0x005f1c07                       ; 005f1af1
        ;   XREF to: 005f1c07 (CONDITIONAL_JUMP)  ; LAB_005f1c07
    LEA EAX,[EAX]                       ; 005f1af7
    LEA EDX,[EDX]                       ; 005f1afd
    FLD float ptr [EDI + 0x4]           ; 005f1b00
        ;   Label: LAB_005f1b00
    FSUBR float ptr [ESI + 0x243c]      ; 005f1b03
    LEA EBX,[ESI + 0x158]               ; 005f1b09
    FST float ptr [ESI + 0x243c]        ; 005f1b0f
    FLDZ                                ; 005f1b15
    FCOMPP                              ; 005f1b17
    FNSTSW AX                           ; 005f1b19
    SAHF                                ; 005f1b1b
    JC 0x005f1c7a                       ; 005f1b1c
        ;   XREF to: 005f1c7a (CONDITIONAL_JUMP)  ; LAB_005f1c7a
    PUSH EBX                            ; 005f1b22
    MOV dword ptr [ESI + 0x243c],0x0    ; 005f1b23
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005f1b2d
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005f1b32
    ADD ESP,0x4                         ; 005f1b35
    CMP EAX,0xd                         ; 005f1b38
    JZ 0x005f1bc9                       ; 005f1b3b
        ;   XREF to: 005f1bc9 (CONDITIONAL_JUMP)  ; LAB_005f1bc9
    CMP EAX,0xc                         ; 005f1b41
    JZ 0x005f1bc9                       ; 005f1b44
        ;   XREF to: 005f1bc9 (CONDITIONAL_JUMP)  ; LAB_005f1bc9
    PUSH 0x1                            ; 005f1b4a
    PUSH 0xc                            ; 005f1b4c
    PUSH EBX                            ; 005f1b4e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f1b4f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EBX,dword ptr [ESI + 0xbebc]    ; 005f1b54
    ADD ESP,0xc                         ; 005f1b5a
    TEST EBX,EBX                        ; 005f1b5d
    JNZ 0x005f1b8b                      ; 005f1b5f
        ;   XREF to: 005f1b8b (CONDITIONAL_JUMP)  ; LAB_005f1b8b
    MOV EAX,[0x006810c8]                ; 005f1b61 | g_CDemonSetInstance | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15ae48],0x0  ; 005f1b66 | DAT_0326f0c0
    JZ 0x005f1b8b                       ; 005f1b6d
        ;   XREF to: 005f1b8b (CONDITIONAL_JUMP)  ; LAB_005f1b8b
    FLD float ptr [ESI + 0x20]          ; 005f1b6f
    FST double ptr [ESP]                ; 005f1b72
    FCOMP double ptr [0x00657e5c]       ; 005f1b75 | DOUBLE_00657e5c
    FNSTSW AX                           ; 005f1b7b
    SAHF                                ; 005f1b7d
    JBE 0x005f1c5c                      ; 005f1b7e
        ;   XREF to: 005f1c5c (CONDITIONAL_JUMP)  ; LAB_005f1c5c
    MOV dword ptr [ESI + 0x34],0xbfc90fdb ; 005f1b84
    MOV ECX,dword ptr [ESI + 0xbee0]    ; 005f1b8b
        ;   Label: LAB_005f1b8b
    PUSH ECX                            ; 005f1b91
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005f1b92
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005f1b97
    PUSH 0x657e2f                       ; 005f1b9a | = "werewolf-die?.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 005f1b9f
    PUSH ESI                            ; 005f1ba5
    CALL dword ptr [EAX + 0x24]         ; 005f1ba6
    ADD ESP,0x8                         ; 005f1ba9
    PUSH 0x41c80000                     ; 005f1bac
    MOV dword ptr [ESI + 0xbee0],EAX    ; 005f1bb1
    PUSH 0x32                           ; 005f1bb7
    MOV EAX,dword ptr [ESI + 0x154]     ; 005f1bb9
    PUSH ESI                            ; 005f1bbf
    CALL dword ptr [EAX + 0xa0]         ; 005f1bc0
    ADD ESP,0xc                         ; 005f1bc6
    PUSH EDI                            ; 005f1bc9
        ;   Label: LAB_005f1bc9
    PUSH ESI                            ; 005f1bca
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 005f1bcb
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005f1bd0
    MOV ESP,EBP                         ; 005f1bd3
    POP EBP                             ; 005f1bd5
    POP EDI                             ; 005f1bd6
    POP ESI                             ; 005f1bd7
    POP EBX                             ; 005f1bd8
    RET                                 ; 005f1bd9
    PUSH ESI                            ; 005f1bda
        ;   Label: LAB_005f1bda
    CALL core_werewolf.cpp_CWerewolf_FUN_005f11e0 ; 005f1bdb
        ;   XREF to: 005f11e0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_FUN_005f11e0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005f1be0
    PUSH 0x1                            ; 005f1be3
    PUSH 0x16                           ; 005f1be5
    LEA EAX,[ESI + 0x158]               ; 005f1be7
    PUSH EAX                            ; 005f1bed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f1bee
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f1bf3
    PUSH EDI                            ; 005f1bf6
    PUSH ESI                            ; 005f1bf7
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 005f1bf8
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005f1bfd
    MOV ESP,EBP                         ; 005f1c00
    POP EBP                             ; 005f1c02
    POP EDI                             ; 005f1c03
    POP ESI                             ; 005f1c04
    POP EBX                             ; 005f1c05
    RET                                 ; 005f1c06
    FLD float ptr [EDI + 0x4]           ; 005f1c07
        ;   Label: LAB_005f1c07
    LEA EAX,[EDI + 0x1c]                ; 005f1c0a
    FLD ST0                             ; 005f1c0d
    FMUL double ptr [0x00657e54]        ; 005f1c0f | DOUBLE_00657e54
    PUSH EAX                            ; 005f1c15
    LEA EAX,[ESP + 0xc]                 ; 005f1c16
    XOR EBX,EBX                         ; 005f1c1a
    PUSH EAX                            ; 005f1c1c
    FSTP ST1                            ; 005f1c1d
    PUSH ESI                            ; 005f1c1f
    FSTP float ptr [EDI + 0x4]          ; 005f1c20
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f1c23
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005f1c28
    PUSH 0xffff                         ; 005f1c2b
        ;   Label: LAB_005f1c2b
    PUSH 0x0                            ; 005f1c30
    PUSH 0x4000                         ; 005f1c32
    PUSH 0x4000                         ; 005f1c37
    PUSH 0x0                            ; 005f1c3c
    LEA EAX,[ESP + 0x1c]                ; 005f1c3e
    PUSH EAX                            ; 005f1c42
    MOV EAX,[0x0067a3d0]                ; 005f1c43 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 005f1c48 | g_CFireEffectInstance
    INC EBX                             ; 005f1c49
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 005f1c4a
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 005f1c4f
    CMP EBX,0x5                         ; 005f1c52
    JL 0x005f1c2b                       ; 005f1c55
        ;   XREF to: 005f1c2b (CONDITIONAL_JUMP)  ; LAB_005f1c2b
    JMP 0x005f1b00                      ; 005f1c57
        ;   XREF to: 005f1b00 (UNCONDITIONAL_JUMP)  ; LAB_005f1b00
    FLD double ptr [ESP]                ; 005f1c5c
        ;   Label: LAB_005f1c5c
    FCOMP double ptr [0x00657e64]       ; 005f1c5f | DOUBLE_00657e64
    FNSTSW AX                           ; 005f1c65
    SAHF                                ; 005f1c67
    JNC 0x005f1b8b                      ; 005f1c68
        ;   XREF to: 005f1b8b (CONDITIONAL_JUMP)  ; LAB_005f1b8b
    MOV dword ptr [ESI + 0x34],0x3fc90fdb ; 005f1c6e
    JMP 0x005f1b8b                      ; 005f1c75
        ;   XREF to: 005f1b8b (UNCONDITIONAL_JUMP)  ; LAB_005f1b8b
    CMP dword ptr [ESI + 0xbebc],0x2    ; 005f1c7a
        ;   Label: LAB_005f1c7a
    JZ 0x005f1cec                       ; 005f1c81
        ;   XREF to: 005f1cec (CONDITIONAL_JUMP)  ; LAB_005f1cec
    PUSH EBX                            ; 005f1c83
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005f1c84
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005f1c89
    ADD ESP,0x4                         ; 005f1c8c
    CMP EAX,0xe                         ; 005f1c8f
    JNZ 0x005f1d2c                      ; 005f1c92
        ;   XREF to: 005f1d2c (CONDITIONAL_JUMP)  ; LAB_005f1d2c
    PUSH 0x2                            ; 005f1c98
        ;   Label: LAB_005f1c98
    PUSH 0x0                            ; 005f1c9a
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005f1c9c
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005f1ca1
    MOV EBX,EAX                         ; 005f1ca4
    TEST EAX,EAX                        ; 005f1ca6
    JNZ 0x005f1cbd                      ; 005f1ca8
        ;   XREF to: 005f1cbd (CONDITIONAL_JUMP)  ; LAB_005f1cbd
    PUSH 0x1                            ; 005f1caa
    PUSH 0x9                            ; 005f1cac
    LEA EAX,[ESI + 0x158]               ; 005f1cae
    PUSH EAX                            ; 005f1cb4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f1cb5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f1cba
    CMP EBX,0x1                         ; 005f1cbd
        ;   Label: LAB_005f1cbd
    JNZ 0x005f1cd4                      ; 005f1cc0
        ;   XREF to: 005f1cd4 (CONDITIONAL_JUMP)  ; LAB_005f1cd4
    PUSH EBX                            ; 005f1cc2
    PUSH 0xa                            ; 005f1cc3
    LEA EAX,[ESI + 0x158]               ; 005f1cc5
    PUSH EAX                            ; 005f1ccb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f1ccc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f1cd1
    CMP EBX,0x2                         ; 005f1cd4
        ;   Label: LAB_005f1cd4
    JNZ 0x005f1cec                      ; 005f1cd7
        ;   XREF to: 005f1cec (CONDITIONAL_JUMP)  ; LAB_005f1cec
    PUSH 0x1                            ; 005f1cd9
    PUSH 0xb                            ; 005f1cdb
    LEA EAX,[ESI + 0x158]               ; 005f1cdd
        ;   Label: LAB_005f1cdd
    PUSH EAX                            ; 005f1ce3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f1ce4
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f1ce9
    MOV ECX,dword ptr [ESI + 0xbee0]    ; 005f1cec
        ;   Label: LAB_005f1cec
    PUSH ECX                            ; 005f1cf2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005f1cf3
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005f1cf8
    TEST EAX,EAX                        ; 005f1cfb
    JNZ 0x005f1bc9                      ; 005f1cfd
        ;   XREF to: 005f1bc9 (CONDITIONAL_JUMP)  ; LAB_005f1bc9
    PUSH 0x657e41                       ; 005f1d03 | = "werewolf-hurt?.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 005f1d08
    PUSH ESI                            ; 005f1d0e
    CALL dword ptr [EAX + 0x24]         ; 005f1d0f
    ADD ESP,0x8                         ; 005f1d12
    MOV dword ptr [ESI + 0xbee0],EAX    ; 005f1d15
    PUSH EDI                            ; 005f1d1b
    PUSH ESI                            ; 005f1d1c
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 005f1d1d
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005f1d22
    MOV ESP,EBP                         ; 005f1d25
    POP EBP                             ; 005f1d27
    POP EDI                             ; 005f1d28
    POP ESI                             ; 005f1d29
    POP EBX                             ; 005f1d2a
    RET                                 ; 005f1d2b
    CMP EAX,0xf                         ; 005f1d2c
        ;   Label: LAB_005f1d2c
    JZ 0x005f1c98                       ; 005f1d2f
        ;   XREF to: 005f1c98 (CONDITIONAL_JUMP)  ; LAB_005f1c98
    TEST EAX,EAX                        ; 005f1d35
    JNZ 0x005f1d87                      ; 005f1d37
        ;   XREF to: 005f1d87 (CONDITIONAL_JUMP)  ; LAB_005f1d87
    PUSH 0x2                            ; 005f1d39
        ;   Label: LAB_005f1d39
    PUSH 0x0                            ; 005f1d3b
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005f1d3d
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005f1d42
    MOV EBX,EAX                         ; 005f1d45
    TEST EAX,EAX                        ; 005f1d47
    JNZ 0x005f1d5e                      ; 005f1d49
        ;   XREF to: 005f1d5e (CONDITIONAL_JUMP)  ; LAB_005f1d5e
    PUSH 0x1                            ; 005f1d4b
    PUSH 0x10                           ; 005f1d4d
    LEA EAX,[ESI + 0x158]               ; 005f1d4f
    PUSH EAX                            ; 005f1d55
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f1d56
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f1d5b
    CMP EBX,0x1                         ; 005f1d5e
        ;   Label: LAB_005f1d5e
    JNZ 0x005f1d75                      ; 005f1d61
        ;   XREF to: 005f1d75 (CONDITIONAL_JUMP)  ; LAB_005f1d75
    PUSH EBX                            ; 005f1d63
    PUSH 0x11                           ; 005f1d64
    LEA EAX,[ESI + 0x158]               ; 005f1d66
    PUSH EAX                            ; 005f1d6c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f1d6d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f1d72
    CMP EBX,0x2                         ; 005f1d75
        ;   Label: LAB_005f1d75
    JNZ 0x005f1cec                      ; 005f1d78
        ;   XREF to: 005f1cec (CONDITIONAL_JUMP)  ; LAB_005f1cec
    PUSH 0x1                            ; 005f1d7e
    PUSH 0x12                           ; 005f1d80
    JMP 0x005f1cdd                      ; 005f1d82
        ;   XREF to: 005f1cdd (UNCONDITIONAL_JUMP)  ; LAB_005f1cdd
    CMP EAX,0x1                         ; 005f1d87
        ;   Label: LAB_005f1d87
    JZ 0x005f1d39                       ; 005f1d8a
        ;   XREF to: 005f1d39 (CONDITIONAL_JUMP)  ; LAB_005f1d39
    CMP EAX,0x2                         ; 005f1d8c
    JZ 0x005f1d39                       ; 005f1d8f
        ;   XREF to: 005f1d39 (CONDITIONAL_JUMP)  ; LAB_005f1d39
    CMP EAX,0x13                        ; 005f1d91
    JZ 0x005f1d39                       ; 005f1d94
        ;   XREF to: 005f1d39 (CONDITIONAL_JUMP)  ; LAB_005f1d39
    CMP EAX,0x3                         ; 005f1d96
    JZ 0x005f1d39                       ; 005f1d99
        ;   XREF to: 005f1d39 (CONDITIONAL_JUMP)  ; LAB_005f1d39
    CMP EAX,0x4                         ; 005f1d9b
    JZ 0x005f1d39                       ; 005f1d9e
        ;   XREF to: 005f1d39 (CONDITIONAL_JUMP)  ; LAB_005f1d39
    JMP 0x005f1cec                      ; 005f1da0
        ;   XREF to: 005f1cec (UNCONDITIONAL_JUMP)  ; LAB_005f1cec

