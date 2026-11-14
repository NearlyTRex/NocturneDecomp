; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_process_FUN_004b7b90(CFlame *this_ptr,float delta_time)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1[12]   Stack[-0x12c]:12  local_12c
; undefined        Stack[-0x110]:1  local_110
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_processFires_FUN_00419940 at 00419a47
;   core_crossbow.cpp_CCrossbow_process_FUN_00449830 at 004498db
;   core_flamecan.cpp_CFlameCan_process_FUN_004b91d0 at 004b9222
;   core_vessel.cpp_CCryptVessel_process_FUN_005a8e60 at 005a9197
;
; Referenced Globals:
;   TerminatedCString s_torch_wav_f_005df68e
;   undefined4 DAT_005df69f
;   undefined4 DAT_005df6a7
;   undefined4 DAT_005df6af
;   undefined4 DAT_005df6b7
;   undefined4 DAT_005df6bf
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   undefined4 DAT_01d06ab4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.enemy_count
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_flame.cpp_FUN_004b8e40
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0
;   core_sound.cpp_CSound_killSound_FUN_0057d9d0
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7b90
        ;   Label: core_flame.cpp_CFlame_process_FUN_004b7b90
    PUSH ESI                            ; 004b7b91
    PUSH EDI                            ; 004b7b92
    PUSH EBP                            ; 004b7b93
    MOV EBP,ESP                         ; 004b7b94
    SUB ESP,0x110                       ; 004b7b96
    AND ESP,0xfffffff8                  ; 004b7b9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7b9f
    CMP byte ptr [EAX + 0x1b8],0x0      ; 004b7ba2
    JZ 0x004b7c37                       ; 004b7ba9
        ;   XREF to: 004b7c37 (CONDITIONAL_JUMP)  ; LAB_004b7c37
    CMP dword ptr [EAX + 0x1b4],0x0     ; 004b7baf
    JNZ 0x004b7c37                      ; 004b7bb6
        ;   XREF to: 004b7c37 (CONDITIONAL_JUMP)  ; LAB_004b7c37
    ADD EAX,0x1b8                       ; 004b7bbc
    PUSH EAX                            ; 004b7bc1
    MOV ECX,dword ptr [0x0061b4d0]      ; 004b7bc2 | DAT_0061b4d0
    PUSH ECX                            ; 004b7bc8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004b7bc9
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004b7bce
    TEST EAX,EAX                        ; 004b7bd1
    JZ 0x004b7c37                       ; 004b7bd3
        ;   XREF to: 004b7c37 (CONDITIONAL_JUMP)  ; LAB_004b7c37
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7bd5
    MOV EBX,dword ptr [EAX + 0x1a8]     ; 004b7bd8
    CMP EBX,0x1                         ; 004b7bde
    JZ 0x004b7c20                       ; 004b7be1
        ;   XREF to: 004b7c20 (CONDITIONAL_JUMP)  ; LAB_004b7c20
    CMP EBX,0x3                         ; 004b7be3
    JZ 0x004b7c20                       ; 004b7be6
        ;   XREF to: 004b7c20 (CONDITIONAL_JUMP)  ; LAB_004b7c20
    LEA ESI,[EAX + 0x20]                ; 004b7be8
    XOR EBX,EBX                         ; 004b7beb
    PUSH 0xffff                         ; 004b7bed
        ;   Label: LAB_004b7bed
    PUSH 0x1                            ; 004b7bf2
    PUSH 0x10000                        ; 004b7bf4
    PUSH 0x4000                         ; 004b7bf9
    PUSH 0x0                            ; 004b7bfe
    PUSH ESI                            ; 004b7c00
    MOV EDI,dword ptr [0x0061c010]      ; 004b7c01 | DAT_0061c010
    PUSH EDI                            ; 004b7c07
    INC EBX                             ; 004b7c08
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004b7c09
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004b7c0e
    CMP EBX,0xa                         ; 004b7c11
    JL 0x004b7bed                       ; 004b7c14
        ;   XREF to: 004b7bed (CONDITIONAL_JUMP)  ; LAB_004b7bed
    LEA EAX,[EAX]                       ; 004b7c16
    LEA EDX,[EDX]                       ; 004b7c1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7c20
        ;   Label: LAB_004b7c20
    MOV dword ptr [EAX + 0x290],0x1     ; 004b7c23
    MOV dword ptr [EAX + 0x1b4],0x1     ; 004b7c2d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7c37
        ;   Label: LAB_004b7c37
    CMP byte ptr [EAX + 0x21c],0x0      ; 004b7c3a
    JZ 0x004b7ca9                       ; 004b7c41
        ;   XREF to: 004b7ca9 (CONDITIONAL_JUMP)  ; LAB_004b7ca9
    CMP dword ptr [EAX + 0x1b4],0x0     ; 004b7c43
    JZ 0x004b7ca9                       ; 004b7c4a
        ;   XREF to: 004b7ca9 (CONDITIONAL_JUMP)  ; LAB_004b7ca9
    ADD EAX,0x21c                       ; 004b7c4c
    PUSH EAX                            ; 004b7c51
    MOV ECX,dword ptr [0x0061b4d0]      ; 004b7c52 | DAT_0061b4d0
    PUSH ECX                            ; 004b7c58
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004b7c59
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004b7c5e
    TEST EAX,EAX                        ; 004b7c61
    JZ 0x004b7ca9                       ; 004b7c63
        ;   XREF to: 004b7ca9 (CONDITIONAL_JUMP)  ; LAB_004b7ca9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7c65
    MOV EBX,dword ptr [EAX + 0x1a8]     ; 004b7c68
    MOV dword ptr [EAX + 0x1b4],0x0     ; 004b7c6e
    CMP EBX,0x3                         ; 004b7c78
    JZ 0x004b7ca9                       ; 004b7c7b
        ;   XREF to: 004b7ca9 (CONDITIONAL_JUMP)  ; LAB_004b7ca9
    PUSH 0xffff                         ; 004b7c7d
    FLD float ptr [EAX + 0x15c]         ; 004b7c82
    PUSH 0x0                            ; 004b7c88
    FMUL double ptr [0x005df69f]        ; 004b7c8a | DAT_005df69f
    SUB ESP,0x4                         ; 004b7c90
    ADD EAX,0x20                        ; 004b7c93
    FSTP float ptr [ESP]                ; 004b7c96
    PUSH EAX                            ; 004b7c99
    MOV ESI,dword ptr [0x0061c010]      ; 004b7c9a | DAT_0061c010
    PUSH ESI                            ; 004b7ca0
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 004b7ca1
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004b7ca6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7ca9
        ;   Label: LAB_004b7ca9
    CMP dword ptr [EAX + 0x1b4],0x0     ; 004b7cac
    JZ 0x004b7ed1                       ; 004b7cb3
        ;   XREF to: 004b7ed1 (CONDITIONAL_JUMP)  ; LAB_004b7ed1
    FLD float ptr [EBP + 0x18]          ; 004b7cb9
    FMUL double ptr [0x005df6a7]        ; 004b7cbc | DAT_005df6a7
    FADD float ptr [EAX + 0x164]        ; 004b7cc2
    FSTP float ptr [EAX + 0x164]        ; 004b7cc8
    CMP dword ptr [EAX + 0x164],0x41000000 ; 004b7cce
    JL 0x004b7cec                       ; 004b7cd8
        ;   XREF to: 004b7cec (CONDITIONAL_JUMP)  ; LAB_004b7cec
    FLD float ptr [EAX + 0x164]         ; 004b7cda
    FADD float ptr [0x005df6af]         ; 004b7ce0 | DAT_005df6af
    FSTP float ptr [EAX + 0x164]        ; 004b7ce6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7cec
        ;   Label: LAB_004b7cec
    MOV dword ptr [EAX + 0x30],0x0      ; 004b7cef
    MOV dword ptr [EAX + 0x38],0x0      ; 004b7cf6
    PUSH EAX                            ; 004b7cfd
    MOV dword ptr [EAX + 0x34],0x0      ; 004b7cfe
    CALL core_flame.cpp_FUN_004b8e40    ; 004b7d05
        ;   XREF to: 004b8e40 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_FUN_004b8e40(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004b7d0a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7d0d
    MOV EBX,dword ptr [EAX + 0x2a0]     ; 004b7d10
    TEST EBX,EBX                        ; 004b7d16
    JZ 0x004b7f6a                       ; 004b7d18
        ;   XREF to: 004b7f6a (CONDITIONAL_JUMP)  ; LAB_004b7f6a
    MOV EDX,dword ptr [EAX + 0x1b0]     ; 004b7d1e
    PUSH EDX                            ; 004b7d24
    MOV ECX,dword ptr [0x006236b8]      ; 004b7d25 | DAT_006236b8
    PUSH ECX                            ; 004b7d2b
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 004b7d2c
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004b7d31
    TEST EAX,EAX                        ; 004b7d34
    JZ 0x004b7ed8                       ; 004b7d36
        ;   XREF to: 004b7ed8 (CONDITIONAL_JUMP)  ; LAB_004b7ed8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7d3c
        ;   Label: LAB_004b7d3c
    CMP dword ptr [EAX + 0x288],0x0     ; 004b7d3f
    JZ 0x004b7e8c                       ; 004b7d46
        ;   XREF to: 004b7e8c (CONDITIONAL_JUMP)  ; LAB_004b7e8c
    LEA EAX,[ESP + 0x74]                ; 004b7d4c
    PUSH EAX                            ; 004b7d50
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 004b7d51
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 004b7d56
    LEA EDX,[ESP + 0x74]                ; 004b7d59
    MOV EAX,[0x01d06ab4]                ; 004b7d5d | DAT_01d06ab4
    PUSH EDX                            ; 004b7d62
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004b7d63
    PUSH EAX                            ; 004b7d6a
    MOV EBX,dword ptr [EAX + 0x154]     ; 004b7d6b
    CALL dword ptr [EBX + 0x3c]         ; 004b7d71
    ADD ESP,0x8                         ; 004b7d74
    CMP EAX,0x2                         ; 004b7d77
    JNZ 0x004b7e8c                      ; 004b7d7a
        ;   XREF to: 004b7e8c (CONDITIONAL_JUMP)  ; LAB_004b7e8c
    MOV EDX,dword ptr [0x01d06ab4]      ; 004b7d80 | DAT_01d06ab4
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004b7d86
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b7d8d
    LEA EAX,[EDX + 0x20]                ; 004b7d90
    LEA EDI,[ESP + 0xc4]                ; 004b7d93
    LEA ESI,[ESP + 0xd0]                ; 004b7d9a
    FLD float ptr [EAX]                 ; 004b7da1
    FLD float ptr [EAX + 0x4]           ; 004b7da3
    FLD float ptr [EAX + 0x8]           ; 004b7da6
    FXCH ST2                            ; 004b7da9
    FSUB float ptr [EBX + 0x20]         ; 004b7dab
    FXCH                                ; 004b7dae
    FSUB float ptr [EBX + 0x24]         ; 004b7db0
    FXCH ST2                            ; 004b7db3
    FSUB float ptr [EBX + 0x28]         ; 004b7db5
    FXCH                                ; 004b7db8
    FSTP float ptr [ESP + 0xd0]         ; 004b7dba
    FXCH                                ; 004b7dc1
    FSTP float ptr [ESP + 0xd4]         ; 004b7dc3
    FSTP float ptr [ESP + 0xd8]         ; 004b7dca
    MOVSD ES:EDI,ESI                    ; 004b7dd1
    MOVSD ES:EDI,ESI                    ; 004b7dd2
    MOVSD ES:EDI,ESI                    ; 004b7dd3
    ADD EBX,0x20                        ; 004b7dd4
    FLD float ptr [ESP + 0xc8]          ; 004b7dd7
    FCOMP double ptr [0x005df6b7]       ; 004b7dde | DAT_005df6b7
    FNSTSW AX                           ; 004b7de4
    SAHF                                ; 004b7de6
    JBE 0x004b7e8c                      ; 004b7de7
        ;   XREF to: 004b7e8c (CONDITIONAL_JUMP)  ; LAB_004b7e8c
    FLD float ptr [ESP + 0xc8]          ; 004b7ded
    FCOMP float ptr [ESP + 0x8c]        ; 004b7df4
    FNSTSW AX                           ; 004b7dfb
    SAHF                                ; 004b7dfd
    JNC 0x004b7e8c                      ; 004b7dfe
        ;   XREF to: 004b7e8c (CONDITIONAL_JUMP)  ; LAB_004b7e8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7e04
    FLD float ptr [EAX + 0x158]         ; 004b7e07
    FADD float ptr [EAX + 0x160]        ; 004b7e0d
    FMUL double ptr [0x005df6bf]        ; 004b7e13 | DAT_005df6bf
    CALL crt_math.c_round_FUN_005c03a0  ; 004b7e19
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x100]       ; 004b7e1e
    MOV EAX,dword ptr [ESP + 0x100]     ; 004b7e25
    FLD float ptr [ESP + 0xc4]          ; 004b7e2c
    MOV dword ptr [ESP + 0x10c],EAX     ; 004b7e33
    FABS                                ; 004b7e3a
    FLD float ptr [ESP + 0x90]          ; 004b7e3c
    FILD dword ptr [ESP + 0x10c]        ; 004b7e43
    FSTP float ptr [ESP + 0xfc]         ; 004b7e4a
    FADD float ptr [ESP + 0xfc]         ; 004b7e51
    FSTP double ptr [ESP + 0x8]         ; 004b7e58
    FCOMP double ptr [ESP + 0x8]        ; 004b7e5c
    FNSTSW AX                           ; 004b7e60
    SAHF                                ; 004b7e62
    JNC 0x004b7e8c                      ; 004b7e63
        ;   XREF to: 004b7e8c (CONDITIONAL_JUMP)  ; LAB_004b7e8c
    FLD float ptr [ESP + 0xcc]          ; 004b7e65
    FABS                                ; 004b7e6c
    FCOMP double ptr [ESP + 0x8]        ; 004b7e6e
    FNSTSW AX                           ; 004b7e72
    SAHF                                ; 004b7e74
    JNC 0x004b7e8c                      ; 004b7e75
        ;   XREF to: 004b7e8c (CONDITIONAL_JUMP)  ; LAB_004b7e8c
    PUSH 0x1                            ; 004b7e77
    PUSH 0x40000000                     ; 004b7e79
    PUSH 0x0                            ; 004b7e7e
    PUSH 0x0                            ; 004b7e80
    PUSH EBX                            ; 004b7e82
    PUSH EDX                            ; 004b7e83
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0 ; 004b7e84
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 004b7e89
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7e8c
        ;   Label: LAB_004b7e8c
    CMP dword ptr [EAX + 0x28c],0x0     ; 004b7e8f
    JZ 0x004b7ed1                       ; 004b7e96
        ;   XREF to: 004b7ed1 (CONDITIONAL_JUMP)  ; LAB_004b7ed1
    CMP dword ptr [EAX + 0x29c],0x0     ; 004b7e98
    JL 0x004b7f95                       ; 004b7e9f
        ;   XREF to: 004b7f95 (CONDITIONAL_JUMP)  ; LAB_004b7f95
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b7ea5
        ;   Label: LAB_004b7ea5
    MOV EAX,[0x00622c18]                ; 004b7ea8 | g_CDemonSetPtr
    MOV EDX,dword ptr [EDX + 0x29c]     ; 004b7ead
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 004b7eb3 | g_CDemonSetInstance.enemy_count
    JGE 0x004b7fa4                      ; 004b7eb9
        ;   XREF to: 004b7fa4 (CONDITIONAL_JUMP)  ; LAB_004b7fa4
    MOV EAX,[0x00622c18]                ; 004b7ebf | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004b7ebf
    CMP dword ptr [EAX + 0x150fec],0x0  ; 004b7ec4 | g_CDemonSetInstance.enemy_count
    JG 0x004b7fb6                       ; 004b7ecb
        ;   XREF to: 004b7fb6 (CONDITIONAL_JUMP)  ; LAB_004b7fb6
    MOV ESP,EBP                         ; 004b7ed1
        ;   Label: LAB_004b7ed1
    POP EBP                             ; 004b7ed3
    POP EDI                             ; 004b7ed4
    POP ESI                             ; 004b7ed5
    POP EBX                             ; 004b7ed6
    RET                                 ; 004b7ed7
    PUSH 0x3f866666                     ; 004b7ed8
        ;   Label: LAB_004b7ed8
    PUSH 0x3f733333                     ; 004b7edd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b7ee2
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x114],EAX     ; 004b7ee7
    FLD float ptr [ESP + 0x114]         ; 004b7eee
    ADD ESP,0x8                         ; 004b7ef5
    SUB ESP,0x8                         ; 004b7ef8
    FSTP double ptr [ESP]               ; 004b7efb
    PUSH 0x5df68e                       ; 004b7efe | = "torch.wav * %f"
    LEA EAX,[ESP + 0x1c]                ; 004b7f03
    PUSH EAX                            ; 004b7f07
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004b7f08
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b7f0d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 004b7f10
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH 0x2                            ; 004b7f15
    PUSH 0x3f800000                     ; 004b7f17
    PUSH 0x0                            ; 004b7f1c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b7f1e
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x118],EAX     ; 004b7f23
    FLD float ptr [ESP + 0x118]         ; 004b7f2a
    ADD ESP,0x8                         ; 004b7f31
    SUB ESP,0x8                         ; 004b7f34
    FSTP double ptr [ESP]               ; 004b7f37
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50 ; 004b7f3a
        ;   XREF to: 00572a50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 004b7f3f
    LEA EDX,[ESP + 0x10]                ; 004b7f42
    PUSH EDX                            ; 004b7f46
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b7f47
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7f4a
    PUSH EBX                            ; 004b7f4d
    MOV EAX,dword ptr [EAX + 0x154]     ; 004b7f4e
    CALL dword ptr [EAX + 0x2c]         ; 004b7f54
    ADD ESP,0x8                         ; 004b7f57
    MOV dword ptr [EBX + 0x1b0],EAX     ; 004b7f5a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 004b7f60
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    JMP 0x004b7d3c                      ; 004b7f65
        ;   XREF to: 004b7d3c (UNCONDITIONAL_JUMP)  ; LAB_004b7d3c
    MOV ESI,dword ptr [EAX + 0x1b0]     ; 004b7f6a
        ;   Label: LAB_004b7f6a
    TEST ESI,ESI                        ; 004b7f70
    JZ 0x004b7d3c                       ; 004b7f72
        ;   XREF to: 004b7d3c (CONDITIONAL_JUMP)  ; LAB_004b7d3c
    PUSH ESI                            ; 004b7f78
    MOV EAX,[0x006236b8]                ; 004b7f79 | DAT_006236b8
    PUSH EAX                            ; 004b7f7e
    CALL core_sound.cpp_CSound_killSound_FUN_0057d9d0 ; 004b7f7f
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0057d9d0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004b7f84
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7f87
    MOV dword ptr [EAX + 0x1b0],EBX     ; 004b7f8a
    JMP 0x004b7d3c                      ; 004b7f90
        ;   XREF to: 004b7d3c (UNCONDITIONAL_JUMP)  ; LAB_004b7d3c
    MOV dword ptr [EAX + 0x29c],0x0     ; 004b7f95
        ;   Label: LAB_004b7f95
    JMP 0x004b7ea5                      ; 004b7f9f
        ;   XREF to: 004b7ea5 (UNCONDITIONAL_JUMP)  ; LAB_004b7ea5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b7fa4
        ;   Label: LAB_004b7fa4
    MOV dword ptr [EAX + 0x29c],0x0     ; 004b7fa7
    JMP 0x004b7ebf                      ; 004b7fb1
        ;   XREF to: 004b7ebf (UNCONDITIONAL_JUMP)  ; LAB_004b7ebf
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b7fb6
        ;   Label: LAB_004b7fb6
    MOV EDX,dword ptr [EDX + 0x29c]     ; 004b7fb9
    MOV EBX,dword ptr [EAX + EDX*0x4 + 0x150ff0] ; 004b7fbf
    LEA EAX,[ESP + 0x9c]                ; 004b7fc6
    PUSH EAX                            ; 004b7fcd
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 004b7fce
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 004b7fd3
    LEA EAX,[ESP + 0x9c]                ; 004b7fd6
    PUSH EAX                            ; 004b7fdd
    MOV EDX,dword ptr [EBX + 0x154]     ; 004b7fde
    PUSH EBX                            ; 004b7fe4
    CALL dword ptr [EDX + 0x3c]         ; 004b7fe5
    ADD ESP,0x8                         ; 004b7fe8
    CMP EAX,0x2                         ; 004b7feb
    JNZ 0x004b80ea                      ; 004b7fee
        ;   XREF to: 004b80ea (CONDITIONAL_JUMP)  ; LAB_004b80ea
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b7ff4
    LEA EAX,[EBX + 0x20]                ; 004b7ff7
    LEA EDI,[ESP + 0xe8]                ; 004b7ffa
    LEA ESI,[ESP + 0xdc]                ; 004b8001
    FLD float ptr [EAX + 0x4]           ; 004b8008
    FLD float ptr [EAX + 0x8]           ; 004b800b
    FLD float ptr [EAX]                 ; 004b800e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b8010
    FSUB float ptr [EDX + 0x20]         ; 004b8013
    FXCH ST2                            ; 004b8016
    FSUB float ptr [EDX + 0x24]         ; 004b8018
    FXCH                                ; 004b801b
    FSUB float ptr [EDX + 0x28]         ; 004b801d
    FXCH ST2                            ; 004b8020
    FSTP float ptr [ESP + 0xdc]         ; 004b8022
    FSTP float ptr [ESP + 0xe0]         ; 004b8029
    FSTP float ptr [ESP + 0xe4]         ; 004b8030
    MOVSD ES:EDI,ESI                    ; 004b8037
    MOVSD ES:EDI,ESI                    ; 004b8038
    MOVSD ES:EDI,ESI                    ; 004b8039
    FLD float ptr [EAX + 0x158]         ; 004b803a
    FADD float ptr [EAX + 0x160]        ; 004b8040
    FMUL double ptr [0x005df6bf]        ; 004b8046 | DAT_005df6bf
    ADD EDX,0x20                        ; 004b804c
    FLD float ptr [ESP + 0xec]          ; 004b804f
    FXCH                                ; 004b8056
    CALL crt_math.c_round_FUN_005c03a0  ; 004b8058
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x104]       ; 004b805d
    FCOMP double ptr [0x005df6b7]       ; 004b8064 | DAT_005df6b7
    FNSTSW AX                           ; 004b806a
    SAHF                                ; 004b806c
    JBE 0x004b80ea                      ; 004b806d
        ;   XREF to: 004b80ea (CONDITIONAL_JUMP)  ; LAB_004b80ea
    FLD float ptr [ESP + 0xec]          ; 004b8073
    FCOMP float ptr [ESP + 0xb4]        ; 004b807a
    FNSTSW AX                           ; 004b8081
    SAHF                                ; 004b8083
    JNC 0x004b80ea                      ; 004b8084
        ;   XREF to: 004b80ea (CONDITIONAL_JUMP)  ; LAB_004b80ea
    MOV EAX,dword ptr [ESP + 0x104]     ; 004b8086
    FLD float ptr [ESP + 0xe8]          ; 004b808d
    MOV dword ptr [ESP + 0x10c],EAX     ; 004b8094
    FABS                                ; 004b809b
    FLD float ptr [ESP + 0xb8]          ; 004b809d
    FILD dword ptr [ESP + 0x10c]        ; 004b80a4
    FSTP float ptr [ESP + 0x108]        ; 004b80ab
    FADD float ptr [ESP + 0x108]        ; 004b80b2
    FSTP double ptr [ESP]               ; 004b80b9
    FCOMP double ptr [ESP]              ; 004b80bc
    FNSTSW AX                           ; 004b80bf
    SAHF                                ; 004b80c1
    JNC 0x004b80ea                      ; 004b80c2
        ;   XREF to: 004b80ea (CONDITIONAL_JUMP)  ; LAB_004b80ea
    FLD float ptr [ESP + 0xf0]          ; 004b80c4
    FABS                                ; 004b80cb
    FCOMP double ptr [ESP]              ; 004b80cd
    FNSTSW AX                           ; 004b80d0
    SAHF                                ; 004b80d2
    JNC 0x004b80ea                      ; 004b80d3
        ;   XREF to: 004b80ea (CONDITIONAL_JUMP)  ; LAB_004b80ea
    PUSH 0x0                            ; 004b80d5
    PUSH 0x40000000                     ; 004b80d7
    PUSH 0x0                            ; 004b80dc
    PUSH 0x0                            ; 004b80de
    PUSH EDX                            ; 004b80e0
    PUSH EBX                            ; 004b80e1
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0 ; 004b80e2
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 004b80e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b80ea
        ;   Label: LAB_004b80ea
    INC dword ptr [EAX + 0x29c]         ; 004b80ed
    MOV ESP,EBP                         ; 004b80f3
    POP EBP                             ; 004b80f5
    POP EDI                             ; 004b80f6
    POP ESI                             ; 004b80f7
    POP EBX                             ; 004b80f8
    RET                                 ; 004b80f9

