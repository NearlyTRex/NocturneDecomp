; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_CWerewolf_processDamage_FUN_00557940(CWerewolf *param_1,SDamageInfo *param_2)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined        Stack[-0x28]:1  local_28
;
; Referenced Globals:
;   TerminatedCString s_werewolf_die_wav_00597eb4
;   TerminatedCString s_werewolf_hurt_wav_00597ec6
;   double DOUBLE_00597ed9 = 2
;   double DOUBLE_00597ee1 = 5
;   double DOUBLE_00597ee9 = -5
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 DAT_01fb1ce4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557940
        ;   Label: core_werewolf.cpp_CWerewolf_processDamage_FUN_00557940
    PUSH ESI                            ; 00557941
    PUSH EDI                            ; 00557942
    PUSH EBP                            ; 00557943
    MOV EBP,ESP                         ; 00557944
    SUB ESP,0x1c                        ; 00557946
    AND ESP,0xfffffff8                  ; 00557949
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055794c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0055794f
    MOV EDX,dword ptr [ESI + 0xbd40]    ; 00557952
    PUSH EDX                            ; 00557958
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00557959
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    MOV ECX,dword ptr [EDI + 0x30]      ; 0055795e
    ADD ESP,0x4                         ; 00557961
    CMP ECX,0x6c                        ; 00557964
    JZ 0x00557a5a                       ; 00557967
        ;   XREF to: 00557a5a (CONDITIONAL_JUMP)  ; LAB_00557a5a
    CMP dword ptr [EDI + 0x28],0x3      ; 0055796d
    JZ 0x00557a87                       ; 00557971
        ;   XREF to: 00557a87 (CONDITIONAL_JUMP)  ; LAB_00557a87
    LEA EAX,[EAX]                       ; 00557977
    LEA EDX,[EDX]                       ; 0055797d
    FLD float ptr [EDI + 0x4]           ; 00557980
        ;   Label: LAB_00557980
    FSUBR float ptr [ESI + 0x2434]      ; 00557983
    LEA EBX,[ESI + 0x150]               ; 00557989
    FST float ptr [ESI + 0x2434]        ; 0055798f
    FLDZ                                ; 00557995
    FCOMPP                              ; 00557997
    FNSTSW AX                           ; 00557999
    SAHF                                ; 0055799b
    JC 0x00557afa                       ; 0055799c
        ;   XREF to: 00557afa (CONDITIONAL_JUMP)  ; LAB_00557afa
    PUSH EBX                            ; 005579a2
    MOV dword ptr [ESI + 0x2434],0x0    ; 005579a3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 005579ad
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005579b2
    ADD ESP,0x4                         ; 005579b5
    CMP EAX,0xd                         ; 005579b8
    JZ 0x00557a49                       ; 005579bb
        ;   XREF to: 00557a49 (CONDITIONAL_JUMP)  ; LAB_00557a49
    CMP EAX,0xc                         ; 005579c1
    JZ 0x00557a49                       ; 005579c4
        ;   XREF to: 00557a49 (CONDITIONAL_JUMP)  ; LAB_00557a49
    PUSH 0x1                            ; 005579ca
    PUSH 0xc                            ; 005579cc
    PUSH EBX                            ; 005579ce
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005579cf
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EBX,dword ptr [ESI + 0xbd24]    ; 005579d4
    ADD ESP,0xc                         ; 005579da
    TEST EBX,EBX                        ; 005579dd
    JNZ 0x00557a0b                      ; 005579df
        ;   XREF to: 00557a0b (CONDITIONAL_JUMP)  ; LAB_00557a0b
    MOV EAX,[0x005be368]                ; 005579e1 | DAT_005be368
    CMP dword ptr [EAX + 0x15aa60],0x0  ; 005579e6 | DAT_01fb1ce4
    JZ 0x00557a0b                       ; 005579ed
        ;   XREF to: 00557a0b (CONDITIONAL_JUMP)  ; LAB_00557a0b
    FLD float ptr [ESI + 0x20]          ; 005579ef
    FST double ptr [ESP]                ; 005579f2
    FCOMP double ptr [0x00597ee1]       ; 005579f5 | DOUBLE_00597ee1
    FNSTSW AX                           ; 005579fb
    SAHF                                ; 005579fd
    JBE 0x00557adc                      ; 005579fe
        ;   XREF to: 00557adc (CONDITIONAL_JUMP)  ; LAB_00557adc
    MOV dword ptr [ESI + 0x34],0xbfc90fdb ; 00557a04
    MOV ECX,dword ptr [ESI + 0xbd48]    ; 00557a0b
        ;   Label: LAB_00557a0b
    PUSH ECX                            ; 00557a11
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00557a12
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 00557a17
    PUSH 0x597eb4                       ; 00557a1a | = "werewolf-die?.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00557a1f
    PUSH ESI                            ; 00557a25
    CALL dword ptr [EAX + 0x24]         ; 00557a26
    ADD ESP,0x8                         ; 00557a29
    PUSH 0x41c80000                     ; 00557a2c
    MOV dword ptr [ESI + 0xbd48],EAX    ; 00557a31
    PUSH 0x32                           ; 00557a37
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00557a39
    PUSH ESI                            ; 00557a3f
    CALL dword ptr [EAX + 0xa0]         ; 00557a40
    ADD ESP,0xc                         ; 00557a46
    PUSH EDI                            ; 00557a49
        ;   Label: LAB_00557a49
    PUSH ESI                            ; 00557a4a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00557a4b
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00557a50
    MOV ESP,EBP                         ; 00557a53
    POP EBP                             ; 00557a55
    POP EDI                             ; 00557a56
    POP ESI                             ; 00557a57
    POP EBX                             ; 00557a58
    RET                                 ; 00557a59
    PUSH ESI                            ; 00557a5a
        ;   Label: LAB_00557a5a
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060 ; 00557a5b
        ;   XREF to: 00557060 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 00557a60
    PUSH 0x1                            ; 00557a63
    PUSH 0x16                           ; 00557a65
    LEA EAX,[ESI + 0x150]               ; 00557a67
    PUSH EAX                            ; 00557a6d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00557a6e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00557a73
    PUSH EDI                            ; 00557a76
    PUSH ESI                            ; 00557a77
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00557a78
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00557a7d
    MOV ESP,EBP                         ; 00557a80
    POP EBP                             ; 00557a82
    POP EDI                             ; 00557a83
    POP ESI                             ; 00557a84
    POP EBX                             ; 00557a85
    RET                                 ; 00557a86
    FLD float ptr [EDI + 0x4]           ; 00557a87
        ;   Label: LAB_00557a87
    LEA EAX,[EDI + 0x1c]                ; 00557a8a
    FLD ST0                             ; 00557a8d
    FMUL double ptr [0x00597ed9]        ; 00557a8f | DOUBLE_00597ed9
    PUSH EAX                            ; 00557a95
    LEA EAX,[ESP + 0xc]                 ; 00557a96
    XOR EBX,EBX                         ; 00557a9a
    PUSH EAX                            ; 00557a9c
    FSTP ST1                            ; 00557a9d
    PUSH ESI                            ; 00557a9f
    FSTP float ptr [EDI + 0x4]          ; 00557aa0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00557aa3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00557aa8
    PUSH 0xffff                         ; 00557aab
        ;   Label: LAB_00557aab
    PUSH 0x0                            ; 00557ab0
    PUSH 0x4000                         ; 00557ab2
    PUSH 0x4000                         ; 00557ab7
    PUSH 0x0                            ; 00557abc
    LEA EAX,[ESP + 0x1c]                ; 00557abe
    PUSH EAX                            ; 00557ac2
    MOV EAX,[0x005b80f0]                ; 00557ac3 | DAT_005b80f0
    PUSH EAX                            ; 00557ac8
    INC EBX                             ; 00557ac9
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00557aca
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00557acf
    CMP EBX,0x5                         ; 00557ad2
    JL 0x00557aab                       ; 00557ad5
        ;   XREF to: 00557aab (CONDITIONAL_JUMP)  ; LAB_00557aab
    JMP 0x00557980                      ; 00557ad7
        ;   XREF to: 00557980 (UNCONDITIONAL_JUMP)  ; LAB_00557980
    FLD double ptr [ESP]                ; 00557adc
        ;   Label: LAB_00557adc
    FCOMP double ptr [0x00597ee9]       ; 00557adf | DOUBLE_00597ee9
    FNSTSW AX                           ; 00557ae5
    SAHF                                ; 00557ae7
    JNC 0x00557a0b                      ; 00557ae8
        ;   XREF to: 00557a0b (CONDITIONAL_JUMP)  ; LAB_00557a0b
    MOV dword ptr [ESI + 0x34],0x3fc90fdb ; 00557aee
    JMP 0x00557a0b                      ; 00557af5
        ;   XREF to: 00557a0b (UNCONDITIONAL_JUMP)  ; LAB_00557a0b
    CMP dword ptr [ESI + 0xbd24],0x2    ; 00557afa
        ;   Label: LAB_00557afa
    JZ 0x00557b6c                       ; 00557b01
        ;   XREF to: 00557b6c (CONDITIONAL_JUMP)  ; LAB_00557b6c
    PUSH EBX                            ; 00557b03
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00557b04
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00557b09
    ADD ESP,0x4                         ; 00557b0c
    CMP EAX,0xe                         ; 00557b0f
    JNZ 0x00557bac                      ; 00557b12
        ;   XREF to: 00557bac (CONDITIONAL_JUMP)  ; LAB_00557bac
    PUSH 0x2                            ; 00557b18
        ;   Label: LAB_00557b18
    PUSH 0x0                            ; 00557b1a
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00557b1c
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 00557b21
    MOV EBX,EAX                         ; 00557b24
    TEST EAX,EAX                        ; 00557b26
    JNZ 0x00557b3d                      ; 00557b28
        ;   XREF to: 00557b3d (CONDITIONAL_JUMP)  ; LAB_00557b3d
    PUSH 0x1                            ; 00557b2a
    PUSH 0x9                            ; 00557b2c
    LEA EAX,[ESI + 0x150]               ; 00557b2e
    PUSH EAX                            ; 00557b34
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00557b35
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00557b3a
    CMP EBX,0x1                         ; 00557b3d
        ;   Label: LAB_00557b3d
    JNZ 0x00557b54                      ; 00557b40
        ;   XREF to: 00557b54 (CONDITIONAL_JUMP)  ; LAB_00557b54
    PUSH EBX                            ; 00557b42
    PUSH 0xa                            ; 00557b43
    LEA EAX,[ESI + 0x150]               ; 00557b45
    PUSH EAX                            ; 00557b4b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00557b4c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00557b51
    CMP EBX,0x2                         ; 00557b54
        ;   Label: LAB_00557b54
    JNZ 0x00557b6c                      ; 00557b57
        ;   XREF to: 00557b6c (CONDITIONAL_JUMP)  ; LAB_00557b6c
    PUSH 0x1                            ; 00557b59
    PUSH 0xb                            ; 00557b5b
    LEA EAX,[ESI + 0x150]               ; 00557b5d
        ;   Label: LAB_00557b5d
    PUSH EAX                            ; 00557b63
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00557b64
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00557b69
    MOV ECX,dword ptr [ESI + 0xbd48]    ; 00557b6c
        ;   Label: LAB_00557b6c
    PUSH ECX                            ; 00557b72
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00557b73
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00557b78
    TEST EAX,EAX                        ; 00557b7b
    JNZ 0x00557a49                      ; 00557b7d
        ;   XREF to: 00557a49 (CONDITIONAL_JUMP)  ; LAB_00557a49
    PUSH 0x597ec6                       ; 00557b83 | = "werewolf-hurt?.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00557b88
    PUSH ESI                            ; 00557b8e
    CALL dword ptr [EAX + 0x24]         ; 00557b8f
    ADD ESP,0x8                         ; 00557b92
    MOV dword ptr [ESI + 0xbd48],EAX    ; 00557b95
    PUSH EDI                            ; 00557b9b
    PUSH ESI                            ; 00557b9c
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00557b9d
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00557ba2
    MOV ESP,EBP                         ; 00557ba5
    POP EBP                             ; 00557ba7
    POP EDI                             ; 00557ba8
    POP ESI                             ; 00557ba9
    POP EBX                             ; 00557baa
    RET                                 ; 00557bab
    CMP EAX,0xf                         ; 00557bac
        ;   Label: LAB_00557bac
    JZ 0x00557b18                       ; 00557baf
        ;   XREF to: 00557b18 (CONDITIONAL_JUMP)  ; LAB_00557b18
    TEST EAX,EAX                        ; 00557bb5
    JNZ 0x00557c07                      ; 00557bb7
        ;   XREF to: 00557c07 (CONDITIONAL_JUMP)  ; LAB_00557c07
    PUSH 0x2                            ; 00557bb9
        ;   Label: LAB_00557bb9
    PUSH 0x0                            ; 00557bbb
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00557bbd
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 00557bc2
    MOV EBX,EAX                         ; 00557bc5
    TEST EAX,EAX                        ; 00557bc7
    JNZ 0x00557bde                      ; 00557bc9
        ;   XREF to: 00557bde (CONDITIONAL_JUMP)  ; LAB_00557bde
    PUSH 0x1                            ; 00557bcb
    PUSH 0x10                           ; 00557bcd
    LEA EAX,[ESI + 0x150]               ; 00557bcf
    PUSH EAX                            ; 00557bd5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00557bd6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00557bdb
    CMP EBX,0x1                         ; 00557bde
        ;   Label: LAB_00557bde
    JNZ 0x00557bf5                      ; 00557be1
        ;   XREF to: 00557bf5 (CONDITIONAL_JUMP)  ; LAB_00557bf5
    PUSH EBX                            ; 00557be3
    PUSH 0x11                           ; 00557be4
    LEA EAX,[ESI + 0x150]               ; 00557be6
    PUSH EAX                            ; 00557bec
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00557bed
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00557bf2
    CMP EBX,0x2                         ; 00557bf5
        ;   Label: LAB_00557bf5
    JNZ 0x00557b6c                      ; 00557bf8
        ;   XREF to: 00557b6c (CONDITIONAL_JUMP)  ; LAB_00557b6c
    PUSH 0x1                            ; 00557bfe
    PUSH 0x12                           ; 00557c00
    JMP 0x00557b5d                      ; 00557c02
        ;   XREF to: 00557b5d (UNCONDITIONAL_JUMP)  ; LAB_00557b5d
    CMP EAX,0x1                         ; 00557c07
        ;   Label: LAB_00557c07
    JZ 0x00557bb9                       ; 00557c0a
        ;   XREF to: 00557bb9 (CONDITIONAL_JUMP)  ; LAB_00557bb9
    CMP EAX,0x2                         ; 00557c0c
    JZ 0x00557bb9                       ; 00557c0f
        ;   XREF to: 00557bb9 (CONDITIONAL_JUMP)  ; LAB_00557bb9
    CMP EAX,0x13                        ; 00557c11
    JZ 0x00557bb9                       ; 00557c14
        ;   XREF to: 00557bb9 (CONDITIONAL_JUMP)  ; LAB_00557bb9
    CMP EAX,0x3                         ; 00557c16
    JZ 0x00557bb9                       ; 00557c19
        ;   XREF to: 00557bb9 (CONDITIONAL_JUMP)  ; LAB_00557bb9
    CMP EAX,0x4                         ; 00557c1b
    JZ 0x00557bb9                       ; 00557c1e
        ;   XREF to: 00557bb9 (CONDITIONAL_JUMP)  ; LAB_00557bb9
    JMP 0x00557b6c                      ; 00557c20
        ;   XREF to: 00557b6c (UNCONDITIONAL_JUMP)  ; LAB_00557b6c

