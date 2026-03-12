; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_process_FUN_004f9c30(CImp *this_ptr,float delta_time)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; SDamageInfo      Stack[-0x1a0]:60  local_1a0
; SDamageInfo      Stack[-0x164]:60  local_164
; float            Stack[-0x128]:4  local_128
; float            Stack[-0x124]:4  local_124
; float            Stack[-0x120]:4  local_120
; CVector3f        Stack[-0x11c]:12  local_11c
; CVector3f        Stack[-0x110]:12  local_110
; CVector3f        Stack[-0x104]:12  local_104
; CVector3f        Stack[-0xf8]:12  local_f8
; CVector3f        Stack[-0xec]:12  local_ec
; CVector3f        Stack[-0xe0]:12  local_e0
; CVector3f        Stack[-0xd4]:12  local_d4
; CVector3f        Stack[-0xc8]:12  local_c8
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; CVector3f        Stack[-0xb0]:12  local_b0
; float            Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; CVector3f        Stack[-0x98]:12  local_98
; CVector3f        Stack[-0x8c]:12  local_8c
; CVector3f        Stack[-0x80]:12  local_80
; CVector3f        Stack[-0x74]:12  local_74
; CVector3f        Stack[-0x68]:12  local_68
; CVector3f        Stack[-0x5c]:12  local_5c
; CVector3f        Stack[-0x50]:12  local_50
; int              Stack[-0x3c]:4  local_3c
; float[2]         Stack[-0x34]:8  local_34
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_004f9c08 = 004fa327
;   TerminatedCString s_ghoul_eat_wav_0062f97d
;   TerminatedCString s_s_confused_while_walking_0062f98d
;   TerminatedCString s_imp_jump_wav_0062f9b7
;   TerminatedCString s_imp_laugh_wav_0062f9c5
;   TerminatedCString s_imp_laugh_wav_0062f9d4
;   double DOUBLE_0062f9e6 = 3.14159265350000
;   double DOUBLE_0062f9ee = 0.75
;   float FLOAT_0062f9f6 = 4
;   double DOUBLE_0062f9fe = 0.523598775583333
;   double DOUBLE_0062fa06 = 2.5
;   double DOUBLE_0062fa0e = 0.25
;   double DOUBLE_0062fa16 = 32
;   double DOUBLE_0062fa1e = 0.800000000000000
;   ... and 19 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9c30
        ;   Label: core_imp.cpp_CImp_process_FUN_004f9c30
    PUSH ESI                            ; 004f9c31
    PUSH EDI                            ; 004f9c32
    PUSH EBP                            ; 004f9c33
    MOV EBP,ESP                         ; 004f9c34
    SUB ESP,0x190                       ; 004f9c36
    SUB EBP,0x7a                        ; 004f9c3c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004f9c3f
    PUSH dword ptr [EBP + 0x92]         ; 004f9c45
    PUSH EBX                            ; 004f9c4b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004f9c4c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f9c51
    TEST EAX,EAX                        ; 004f9c54
    JZ 0x004fa125                       ; 004f9c56
        ;   XREF to: 004fa125 (CONDITIONAL_JUMP)  ; LAB_004fa125
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004f9c5c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004f9c62
    JZ 0x004f9ccf                       ; 004f9c6a
        ;   XREF to: 004f9ccf (CONDITIONAL_JUMP)  ; LAB_004f9ccf
    LEA EAX,[EBX + 0x23ac]              ; 004f9c6c
        ;   Label: LAB_004f9c6c
    MOV dword ptr [EAX + 0x8],0x0       ; 004f9c72
    FLD float ptr [EBP + 0x92]          ; 004f9c79
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f9c7f
    MOV dword ptr [EAX + 0x4],EDX       ; 004f9c82
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f9c85
    MOV dword ptr [EAX],EDX             ; 004f9c88
    FMUL float ptr [EBX + 0xbe24]       ; 004f9c8a
    LEA EDI,[EBX + 0x158]               ; 004f9c90
    FSTP float ptr [EBP + 0x56]         ; 004f9c96
    FLD float ptr [EBP + 0x56]          ; 004f9c99
        ;   Label: LAB_004f9c99
    FLDZ                                ; 004f9c9c
    FCOMPP                              ; 004f9c9e
    FNSTSW AX                           ; 004f9ca0
    SAHF                                ; 004f9ca2
    JNC 0x004f9f5a                      ; 004f9ca3
        ;   XREF to: 004f9f5a (CONDITIONAL_JUMP)  ; LAB_004f9f5a
    LEA EAX,[EBP + 0x56]                ; 004f9ca9
    PUSH EAX                            ; 004f9cac
    PUSH EDI                            ; 004f9cad
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004f9cae
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004f9cb3
    MOV ESI,EAX                         ; 004f9cb6
    CMP EAX,0x29a                       ; 004f9cb8
    JNC 0x004f9f3a                      ; 004f9cbd
        ;   XREF to: 004f9f3a (CONDITIONAL_JUMP)  ; LAB_004f9f3a
    PUSH ESI                            ; 004f9cc3
    PUSH EBX                            ; 004f9cc4
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 004f9cc5
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f9cca
    JMP 0x004f9c99                      ; 004f9ccd
        ;   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)  ; LAB_004f9c99
    PUSH EBX                            ; 004f9ccf
        ;   Label: LAB_004f9ccf
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f9cd0
    CALL dword ptr [EAX + 0x120]        ; 004f9cd6
    ADD ESP,0x4                         ; 004f9cdc
    TEST EAX,EAX                        ; 004f9cdf
    JNZ 0x004f9c6c                      ; 004f9ce1
        ;   XREF to: 004f9c6c (CONDITIONAL_JUMP)  ; LAB_004f9c6c
    PUSH 0x1                            ; 004f9ce3
    PUSH 0x6                            ; 004f9ce5
    LEA EAX,[EBX + 0x158]               ; 004f9ce7
    PUSH EAX                            ; 004f9ced
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f9cee
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f9cf3
    JMP 0x004f9c6c                      ; 004f9cf6
        ;   XREF to: 004f9c6c (UNCONDITIONAL_JUMP)  ; LAB_004f9c6c
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9cfb
        ;   Label: LAB_004f9cfb
    MOV ESI,0x1                         ; 004f9d01
    TEST EAX,EAX                        ; 004f9d06
    JNZ 0x004f9d19                      ; 004f9d08
        ;   XREF to: 004f9d19 (CONDITIONAL_JUMP)  ; LAB_004f9d19
    PUSH 0x1                            ; 004f9d0a
        ;   Label: LAB_004f9d0a
    PUSH 0x0                            ; 004f9d0c
    PUSH EDI                            ; 004f9d0e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f9d0f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f9d14
    JMP 0x004f9c99                      ; 004f9d17
        ;   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)  ; LAB_004f9c99
    TEST ESI,ESI                        ; 004f9d19
        ;   Label: LAB_004f9d19
    JZ 0x004f9d31                       ; 004f9d1b
        ;   XREF to: 004f9d31 (CONDITIONAL_JUMP)  ; LAB_004f9d31
    PUSH EAX                            ; 004f9d1d
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f9d1e
    CALL dword ptr [EDX + 0x120]        ; 004f9d24
    ADD ESP,0x4                         ; 004f9d2a
    TEST EAX,EAX                        ; 004f9d2d
    JNZ 0x004f9d0a                      ; 004f9d2f
        ;   XREF to: 004f9d0a (CONDITIONAL_JUMP)  ; LAB_004f9d0a
    TEST ESI,ESI                        ; 004f9d31
        ;   Label: LAB_004f9d31
    JZ 0x004f9d4f                       ; 004f9d33
        ;   XREF to: 004f9d4f (CONDITIONAL_JUMP)  ; LAB_004f9d4f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9d35
    PUSH EAX                            ; 004f9d3b
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f9d3c
    CALL dword ptr [EDX + 0x108]        ; 004f9d42
    ADD ESP,0x4                         ; 004f9d48
    TEST EAX,EAX                        ; 004f9d4b
    JNZ 0x004f9d0a                      ; 004f9d4d
        ;   XREF to: 004f9d0a (CONDITIONAL_JUMP)  ; LAB_004f9d0a
    TEST ESI,ESI                        ; 004f9d4f
        ;   Label: LAB_004f9d4f
    JZ 0x004f9d70                       ; 004f9d51
        ;   XREF to: 004f9d70 (CONDITIONAL_JUMP)  ; LAB_004f9d70
    PUSH 0x0                            ; 004f9d53
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9d55
    PUSH EBX                            ; 004f9d5b
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f9d5c
    PUSH EAX                            ; 004f9d62
    CALL dword ptr [EDX + 0xfc]         ; 004f9d63
    ADD ESP,0xc                         ; 004f9d69
    TEST EAX,EAX                        ; 004f9d6c
    JZ 0x004f9d0a                       ; 004f9d6e
        ;   XREF to: 004f9d0a (CONDITIONAL_JUMP)  ; LAB_004f9d0a
    TEST ESI,ESI                        ; 004f9d70
        ;   Label: LAB_004f9d70
    JZ 0x004f9dd9                       ; 004f9d72
        ;   XREF to: 004f9dd9 (CONDITIONAL_JUMP)  ; LAB_004f9dd9
    MOV EAX,[0x006601dc]                ; 004f9d74 | FLOAT_006601dc
    MOV dword ptr [EBP + 0x42],EAX      ; 004f9d79
    LEA EAX,[EBP + 0x3a]                ; 004f9d7c
    PUSH EAX                            ; 004f9d7f
    LEA EAX,[EBP + 0x22]                ; 004f9d80
    PUSH EAX                            ; 004f9d83
    XOR EDX,EDX                         ; 004f9d84
    PUSH EBX                            ; 004f9d86
    MOV dword ptr [EBP + 0x3a],EDX      ; 004f9d87
    MOV dword ptr [EBP + 0x3e],EDX      ; 004f9d8a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f9d8d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9d92
    FLD float ptr [EBP + 0x22]          ; 004f9d98
    FSUB float ptr [EAX + 0x20]         ; 004f9d9b
    FMUL ST0                            ; 004f9d9e
    FLD float ptr [EBP + 0x2a]          ; 004f9da0
    FSUB float ptr [EAX + 0x28]         ; 004f9da3
    FMUL ST0                            ; 004f9da6
    FADDP                               ; 004f9da8
    FSQRT                               ; 004f9daa
    ADD ESP,0xc                         ; 004f9dac
    FCOMP double ptr [0x0062fa1e]       ; 004f9daf | DOUBLE_0062fa1e
    FNSTSW AX                           ; 004f9db5
    SAHF                                ; 004f9db7
    JBE 0x004f9dbc                      ; 004f9db8
        ;   XREF to: 004f9dbc (CONDITIONAL_JUMP)  ; LAB_004f9dbc
    XOR ESI,ESI                         ; 004f9dba
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9dbc
        ;   Label: LAB_004f9dbc
    FLD float ptr [EBP + 0x26]          ; 004f9dc2
    FSUB float ptr [EAX + 0x24]         ; 004f9dc5
    FABS                                ; 004f9dc8
    FCOMP double ptr [0x0062fa26]       ; 004f9dca | DOUBLE_0062fa26
    FNSTSW AX                           ; 004f9dd0
    SAHF                                ; 004f9dd2
    JA 0x004f9d0a                       ; 004f9dd3
        ;   XREF to: 004f9d0a (CONDITIONAL_JUMP)  ; LAB_004f9d0a
    TEST ESI,ESI                        ; 004f9dd9
        ;   Label: LAB_004f9dd9
    JZ 0x004f9dfe                       ; 004f9ddb
        ;   XREF to: 004f9dfe (CONDITIONAL_JUMP)  ; LAB_004f9dfe
    PUSH 0x0                            ; 004f9ddd
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9ddf
    PUSH EBX                            ; 004f9de5
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f9de6
    PUSH EAX                            ; 004f9dec
    CALL dword ptr [EDX + 0x100]        ; 004f9ded
    ADD ESP,0xc                         ; 004f9df3
    TEST EAX,EAX                        ; 004f9df6
    JZ 0x004f9d0a                       ; 004f9df8
        ;   XREF to: 004f9d0a (CONDITIONAL_JUMP)  ; LAB_004f9d0a
    TEST ESI,ESI                        ; 004f9dfe
        ;   Label: LAB_004f9dfe
    JZ 0x004f9d0a                       ; 004f9e00
        ;   XREF to: 004f9d0a (CONDITIONAL_JUMP)  ; LAB_004f9d0a
    PUSH 0x1                            ; 004f9e06
    PUSH 0x9                            ; 004f9e08
    PUSH EDI                            ; 004f9e0a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f9e0b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f9e10
    JMP 0x004f9c99                      ; 004f9e13
        ;   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)  ; LAB_004f9c99
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9e18
        ;   Label: LAB_004f9e18
    TEST EAX,EAX                        ; 004f9e1e
    JNZ 0x004f9e33                      ; 004f9e20
        ;   XREF to: 004f9e33 (CONDITIONAL_JUMP)  ; LAB_004f9e33
    PUSH 0x1                            ; 004f9e22
    PUSH EAX                            ; 004f9e24
    PUSH EDI                            ; 004f9e25
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f9e26
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f9e2b
    JMP 0x004f9c99                      ; 004f9e2e
        ;   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)  ; LAB_004f9c99
    MOV EDX,dword ptr [0x02db89f4]      ; 004f9e33 | INT_02db89f4
        ;   Label: LAB_004f9e33
    PUSH EDX                            ; 004f9e39
    LEA EAX,[EBP + -0x7a]               ; 004f9e3a
    PUSH EAX                            ; 004f9e3d
    PUSH EDI                            ; 004f9e3e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004f9e3f
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f9e44
    PUSH EAX                            ; 004f9e47
    LEA EAX,[EBP + -0x2]                ; 004f9e48
    PUSH EAX                            ; 004f9e4b
    PUSH EBX                            ; 004f9e4c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f9e4d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f9e52
    LEA EAX,[EBP + 0xffffff26]          ; 004f9e55
    PUSH EAX                            ; 004f9e5b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004f9e5c
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004f9e61
    PUSH 0x41200000                     ; 004f9e64
    PUSH 0x40a00000                     ; 004f9e69
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004f9e6e
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    LEA EDX,[EBP + 0xffffff26]          ; 004f9e73
    MOV dword ptr [EBP + 0x76],EAX      ; 004f9e79
    ADD ESP,0x8                         ; 004f9e7c
    MOV dword ptr [EBP + 0xffffff5a],EBX ; 004f9e7f
    MOV dword ptr [EBP + 0xffffff5e],EBX ; 004f9e85
    FLD float ptr [EBP + 0x76]          ; 004f9e8b
    PUSH EDX                            ; 004f9e8e
    FSTP float ptr [EBP + 0xffffff2a]   ; 004f9e8f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9e95
    PUSH EAX                            ; 004f9e9b
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f9e9c
    CALL dword ptr [ESI + 0x11c]        ; 004f9ea2
    FLD float ptr [EBP + 0xffffff2a]    ; 004f9ea8
    FMUL double ptr [0x0062fa06]        ; 004f9eae | DOUBLE_0062fa06
    ADD ESP,0x8                         ; 004f9eb4
    FMUL double ptr [0x0062fa0e]        ; 004f9eb7 | DOUBLE_0062fa0e
    PUSH 0x0                            ; 004f9ebd
    CALL crt_math.c_round_FUN_005fe6b0  ; 004f9ebf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x4e]        ; 004f9ec4
    MOV ECX,dword ptr [EBP + 0x4e]      ; 004f9ec7
    PUSH ECX                            ; 004f9eca
    PUSH 0x0                            ; 004f9ecb
    LEA EAX,[EBP + -0x2]                ; 004f9ecd
    PUSH EAX                            ; 004f9ed0
    MOV ESI,dword ptr [0x0067b9a0]      ; 004f9ed1 | g_CGorePtr
    PUSH ESI                            ; 004f9ed7 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 004f9ed8
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004f9edd
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9ee0
    PUSH EAX                            ; 004f9ee6
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f9ee7
    CALL dword ptr [ESI + 0x120]        ; 004f9eed
    ADD ESP,0x4                         ; 004f9ef3
    TEST EAX,EAX                        ; 004f9ef6
    JLE 0x004f9f22                      ; 004f9ef8
        ;   XREF to: 004f9f22 (CONDITIONAL_JUMP)  ; LAB_004f9f22
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004f9efa
    PUSH EAX                            ; 004f9f00
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f9f01
    CALL dword ptr [EDX + 0x104]        ; 004f9f07
    ADD ESP,0x4                         ; 004f9f0d
    PUSH 0x1                            ; 004f9f10
    PUSH 0x0                            ; 004f9f12
    PUSH EDI                            ; 004f9f14
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f9f15
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f9f1a
    JMP 0x004f9c99                      ; 004f9f1d
        ;   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)  ; LAB_004f9c99
    MOV ESI,0x62f97d                    ; 004f9f22 | = "ghoul-eat-?.wav"
        ;   Label: LAB_004f9f22
    PUSH ESI                            ; 004f9f27 | = "ghoul-eat-?.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 004f9f28
    PUSH EBX                            ; 004f9f2e
    CALL dword ptr [EDX + 0x24]         ; 004f9f2f
    ADD ESP,0x8                         ; 004f9f32
    JMP 0x004f9c99                      ; 004f9f35
        ;   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)  ; LAB_004f9c99
    JBE 0x004f9cfb                      ; 004f9f3a
        ;   XREF to: 004f9cfb (CONDITIONAL_JUMP)  ; LAB_004f9cfb
        ;   Label: LAB_004f9f3a
    CMP EAX,0x29b                       ; 004f9f40
    JZ 0x004f9e18                       ; 004f9f45
        ;   XREF to: 004f9e18 (CONDITIONAL_JUMP)  ; LAB_004f9e18
    PUSH ESI                            ; 004f9f4b
    PUSH EBX                            ; 004f9f4c
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 004f9f4d
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f9f52
    JMP 0x004f9c99                      ; 004f9f55
        ;   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)  ; LAB_004f9c99
    FLD float ptr [EBX + 0xbe24]        ; 004f9f5a
        ;   Label: LAB_004f9f5a
    FLD float ptr [EBP + 0x92]          ; 004f9f60
    FMUL double ptr [0x0062f9e6]        ; 004f9f66 | DOUBLE_0062f9e6
    FMULP                               ; 004f9f6c
    FLD float ptr [EBX + 0x23b4]        ; 004f9f6e
    LEA ESI,[EBX + 0x158]               ; 004f9f74
    FSTP float ptr [EBX + 0x2434]       ; 004f9f7a
    PUSH ESI                            ; 004f9f80
    FSTP float ptr [EBX + 0x2438]       ; 004f9f81
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f9f87
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004f9f8c
    PUSH dword ptr [EBP + 0x92]         ; 004f9f8f
    MOV EDI,dword ptr [EAX + 0x24]      ; 004f9f95
    PUSH EBX                            ; 004f9f98
    MOV dword ptr [EBP + 0x66],EDI      ; 004f9f99
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 004f9f9c
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f9fa1
    TEST EAX,EAX                        ; 004f9fa4
    JZ 0x004fa8e4                       ; 004f9fa6
        ;   XREF to: 004fa8e4 (CONDITIONAL_JUMP)  ; LAB_004fa8e4
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004f9fac
    CMP EAX,0x2                         ; 004f9fb2
    JNC 0x004fa158                      ; 004f9fb5
        ;   XREF to: 004fa158 (CONDITIONAL_JUMP)  ; LAB_004fa158
    CMP EAX,0x1                         ; 004f9fbb
    JNZ 0x004fa163                      ; 004f9fbe
        ;   XREF to: 004fa163 (CONDITIONAL_JUMP)  ; LAB_004fa163
    PUSH 0x1                            ; 004f9fc4
        ;   Label: LAB_004f9fc4
    PUSH 0x1                            ; 004f9fc6
    LEA EAX,[EBX + 0x158]               ; 004f9fc8
        ;   Label: LAB_004f9fc8
    PUSH EAX                            ; 004f9fce
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f9fcf
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f9fd4
        ;   Label: LAB_004f9fd4
    LEA EAX,[EBX + 0x23ac]              ; 004f9fd7
    MOV dword ptr [EAX + 0x8],0x0       ; 004f9fdd
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f9fe4
    MOV dword ptr [EAX + 0x4],EDX       ; 004f9fe7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f9fea
    MOV dword ptr [EAX],EDX             ; 004f9fed
    FLD float ptr [EBX + 0xbe38]        ; 004f9fef
        ;   Label: caseD_8
    FLDZ                                ; 004f9ff5
    FCOMPP                              ; 004f9ff7
    FNSTSW AX                           ; 004f9ff9
    SAHF                                ; 004f9ffb
    JNC 0x004fa010                      ; 004f9ffc
        ;   XREF to: 004fa010 (CONDITIONAL_JUMP)  ; LAB_004fa010
    FLD float ptr [EBX + 0xbe38]        ; 004f9ffe
    FSUB float ptr [EBP + 0x92]         ; 004fa004
    FSTP float ptr [EBX + 0xbe38]       ; 004fa00a
    PUSH EBX                            ; 004fa010
        ;   Label: LAB_004fa010
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 004fa011
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004fa016
    TEST EAX,EAX                        ; 004fa019
    JZ 0x004fa0fe                       ; 004fa01b
        ;   XREF to: 004fa0fe (CONDITIONAL_JUMP)  ; LAB_004fa0fe
    CMP dword ptr [EBP + 0x66],0x9      ; 004fa021
    JZ 0x004fa0fe                       ; 004fa025
        ;   XREF to: 004fa0fe (CONDITIONAL_JUMP)  ; LAB_004fa0fe
    FLD float ptr [EBP + 0x92]          ; 004fa02b
    FLD ST0                             ; 004fa031
    FMUL double ptr [0x0062fa16]        ; 004fa033 | DOUBLE_0062fa16
    FLD float ptr [EBX + 0x242c]        ; 004fa039
    FXCH                                ; 004fa03f
    FSUBR ST0,ST1                       ; 004fa041
    LEA ESI,[EBX + 0x2428]              ; 004fa043
    FSTP ST1                            ; 004fa049
    FSTP float ptr [EBX + 0x242c]       ; 004fa04b
    FLD float ptr [ESI]                 ; 004fa051
    FMUL ST1                            ; 004fa053
    FSTP float ptr [EBP + -0x32]        ; 004fa055
    FLD float ptr [ESI + 0x4]           ; 004fa058
    FMUL ST1                            ; 004fa05b
    LEA EDX,[EBX + 0x241c]              ; 004fa05d
    FSTP float ptr [EBP + -0x2e]        ; 004fa063
    FMUL float ptr [ESI + 0x8]          ; 004fa066
    LEA EAX,[EBX + 0x23ac]              ; 004fa069
    FLD float ptr [EBP + -0x32]         ; 004fa06f
    FXCH                                ; 004fa072
    FSTP float ptr [EBP + -0x2a]        ; 004fa074
    FADD float ptr [EDX]                ; 004fa077
    FLD float ptr [EBP + -0x2e]         ; 004fa079
    FXCH                                ; 004fa07c
    FSTP float ptr [EBP + 0xffffff62]   ; 004fa07e
    FADD float ptr [EDX + 0x4]          ; 004fa084
    FLD float ptr [EBP + -0x2a]         ; 004fa087
    FXCH                                ; 004fa08a
    FSTP float ptr [EBP + 0xffffff66]   ; 004fa08c
    FADD float ptr [EDX + 0x8]          ; 004fa092 | DAT_00002424
    FLD float ptr [EBP + 0xffffff62]    ; 004fa095
    FXCH                                ; 004fa09b
    FSTP float ptr [EBP + 0xffffff6a]   ; 004fa09d
    FADD float ptr [EAX]                ; 004fa0a3
    FLD float ptr [EBP + 0xffffff66]    ; 004fa0a5
    FXCH                                ; 004fa0ab
    FSTP float ptr [EBP + 0xffffff7a]   ; 004fa0ad
    FADD float ptr [EAX + 0x4]          ; 004fa0b3
    FLD float ptr [EBP + 0xffffff6a]    ; 004fa0b6
    FXCH                                ; 004fa0bc
    FSTP float ptr [EBP + 0xffffff7e]   ; 004fa0be
    FADD float ptr [EAX + 0x8]          ; 004fa0c4
    FSTP float ptr [EBP + -0x7e]        ; 004fa0c7
    MOV dword ptr [EDX + 0x8],0x0       ; 004fa0ca | DAT_00002424
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fa0d1 | DAT_00002424
    MOV dword ptr [EDX + 0x4],ECX       ; 004fa0d4
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fa0d7
    MOV dword ptr [EDX],ECX             ; 004fa0da
    MOV dword ptr [EAX + 0x8],0x0       ; 004fa0dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fa0e3
    MOV dword ptr [EAX + 0x4],EDX       ; 004fa0e6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fa0e9
    MOV dword ptr [EAX],EDX             ; 004fa0ec
    LEA EAX,[EBP + 0xffffff7a]          ; 004fa0ee
    PUSH EAX                            ; 004fa0f4
    PUSH EBX                            ; 004fa0f5
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 004fa0f6
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004fa0fb
    PUSH EBX                            ; 004fa0fe
        ;   Label: LAB_004fa0fe
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 004fa0ff
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004fa104
    LEA EAX,[EBX + 0x158]               ; 004fa107
    PUSH EAX                            ; 004fa10d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004fa10e
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fa113
    PUSH dword ptr [EBP + 0x92]         ; 004fa116
    PUSH EBX                            ; 004fa11c
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004fa11d
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fa122
    LEA ESP,[EBP + 0x7a]                ; 004fa125
        ;   Label: LAB_004fa125
    POP EBP                             ; 004fa128
    POP EDI                             ; 004fa129
    POP ESI                             ; 004fa12a
    POP EBX                             ; 004fa12b
    RET                                 ; 004fa12c
    PUSH 0x1                            ; 004fa12d
        ;   Label: LAB_004fa12d
    PUSH 0x0                            ; 004fa12f
    LEA EAX,[EBX + 0x158]               ; 004fa131
    PUSH EAX                            ; 004fa137
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa138
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa13d
    PUSH EBX                            ; 004fa140
    MOV EAX,0x62f98d                    ; 004fa141 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004fa146 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x0066e8e0]      ; 004fa147 | g_CConsolePtr
    PUSH ESI                            ; 004fa14d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004fa14e
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004f9fd4                      ; 004fa153
        ;   XREF to: 004f9fd4 (UNCONDITIONAL_JUMP)  ; LAB_004f9fd4
    JBE 0x004f9fc4                      ; 004fa158
        ;   XREF to: 004f9fc4 (CONDITIONAL_JUMP)  ; LAB_004f9fc4
        ;   Label: LAB_004fa158
    CMP EAX,0x3                         ; 004fa15e
    JZ 0x004fa12d                       ; 004fa161
        ;   XREF to: 004fa12d (CONDITIONAL_JUMP)  ; LAB_004fa12d
    PUSH 0x1                            ; 004fa163
        ;   Label: LAB_004fa163
    PUSH 0x0                            ; 004fa165
    JMP 0x004f9fc8                      ; 004fa167
        ;   XREF to: 004f9fc8 (UNCONDITIONAL_JUMP)  ; LAB_004f9fc8
    MOV EAX,dword ptr [EBX + 0xbe28]    ; 004fa16c
        ;   Label: caseD_7
    TEST EAX,EAX                        ; 004fa172
    JNZ 0x004f9fef                      ; 004fa174
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xdc],0x0      ; 004fa17a
    JNZ 0x004f9fef                      ; 004fa181
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EAX                            ; 004fa187
    LEA EAX,[EBP + -0x6e]               ; 004fa188
    PUSH EAX                            ; 004fa18b
    PUSH ESI                            ; 004fa18c
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004fa18d
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004fa192
    PUSH EAX                            ; 004fa195
    LEA EAX,[EBP + -0x3e]               ; 004fa196
    PUSH EAX                            ; 004fa199
    PUSH EBX                            ; 004fa19a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004fa19b
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004fa1a0
    PUSH 0x0                            ; 004fa1a3
    LEA EAX,[EBP + -0x3e]               ; 004fa1a5
    PUSH EAX                            ; 004fa1a8
    MOV ECX,dword ptr [0x0067b9a0]      ; 004fa1a9 | g_CGorePtr | g_CGoreInstance
    PUSH ECX                            ; 004fa1af | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 004fa1b0
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 004fa1b5
    MOV dword ptr [EBX + 0xbe28],0x1    ; 004fa1b8
    JMP 0x004f9fef                      ; 004fa1c2
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 004fa1c7
        ;   Label: caseD_9
    TEST ECX,ECX                        ; 004fa1cd
    JNZ 0x004fa1e3                      ; 004fa1cf
        ;   XREF to: 004fa1e3 (CONDITIONAL_JUMP)  ; LAB_004fa1e3
    PUSH 0x1                            ; 004fa1d1
        ;   Label: LAB_004fa1d1
    PUSH 0x5                            ; 004fa1d3
    PUSH ESI                            ; 004fa1d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa1d6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa1db
    JMP 0x004f9fef                      ; 004fa1de
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH ECX                            ; 004fa1e3
        ;   Label: LAB_004fa1e3
    MOV EDX,dword ptr [ECX + 0x154]     ; 004fa1e4
    CALL dword ptr [EDX + 0x120]        ; 004fa1ea
    ADD ESP,0x4                         ; 004fa1f0
    TEST EAX,EAX                        ; 004fa1f3
    JNZ 0x004fa1d1                      ; 004fa1f5
        ;   XREF to: 004fa1d1 (CONDITIONAL_JUMP)  ; LAB_004fa1d1
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004fa1f7
    MOV EDI,dword ptr [EAX + 0x2598]    ; 004fa1fd
    CMP EBX,EDI                         ; 004fa203
    JNZ 0x004fa1d1                      ; 004fa205
        ;   XREF to: 004fa1d1 (CONDITIONAL_JUMP)  ; LAB_004fa1d1
    FLD float ptr [EAX + 0x20]          ; 004fa207
    FLD double ptr [0x0062f9ee]         ; 004fa20a | DOUBLE_0062f9ee
    FLD float ptr [EDI + 0x44]          ; 004fa210
    FMUL ST1                            ; 004fa213
    FSUBP ST2,ST0                       ; 004fa215
    MOV EAX,dword ptr [EDI + 0xbe3c]    ; 004fa217
    FXCH                                ; 004fa21d
    FSTP float ptr [EDI + 0x20]         ; 004fa21f
    FLD float ptr [EAX + 0x28]          ; 004fa222
    FLD float ptr [EDI + 0x5c]          ; 004fa225
    FMULP ST2                           ; 004fa228
    FSUBRP                              ; 004fa22a
    FSTP float ptr [EDI + 0x28]         ; 004fa22c
    JMP 0x004f9fef                      ; 004fa22f
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xfffffeea]          ; 004fa234
        ;   Label: caseD_4
    PUSH EAX                            ; 004fa23a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004fa23b
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004fa240
    PUSH 0x40a00000                     ; 004fa243
    PUSH 0x40400000                     ; 004fa248
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004fa24d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fa252
    ADD ESP,0x8                         ; 004fa255
    LEA EAX,[EBP + 0xfffffeea]          ; 004fa258
    MOV EDX,dword ptr [0x02db89fc]      ; 004fa25e | INT_02db89fc
    PUSH EAX                            ; 004fa264
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fa265
    SUB EAX,EDX                         ; 004fa26c
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 004fa26e
    MOV EDX,EAX                         ; 004fa274
    MOV dword ptr [EBP + 0xffffff22],EBX ; 004fa276
    SHL EDX,0x4                         ; 004fa27c
    LEA EAX,[EBX + 0xfd8]               ; 004fa27f
    ADD EAX,EDX                         ; 004fa285
    PUSH 0x3ecccccd                     ; 004fa287
    PUSH EAX                            ; 004fa28c
    PUSH 0x3f87558                      ; 004fa28d | g_ZeroVector
    LEA EAX,[EBP + -0x26]               ; 004fa292
    FLD float ptr [EBP + 0x76]          ; 004fa295
    PUSH EAX                            ; 004fa298
    FSTP float ptr [EBP + 0xfffffeee]   ; 004fa299
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004fa29f
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004fa2a4
    PUSH EAX                            ; 004fa2a7
    LEA EAX,[EBP + 0x2e]                ; 004fa2a8
    PUSH EAX                            ; 004fa2ab
    PUSH EBX                            ; 004fa2ac
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004fa2ad
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004fa2b2
    PUSH EAX                            ; 004fa2b5
    PUSH EBX                            ; 004fa2b6
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880 ; 004fa2b7
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004fa2bc
    TEST EAX,EAX                        ; 004fa2bf
    JZ 0x004f9fef                       ; 004fa2c1
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    XOR EDI,EDI                         ; 004fa2c7
    XOR ESI,ESI                         ; 004fa2c9
    MOV EAX,[0x006810c8]                ; 004fa2cb | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004fa2cb
    CMP ESI,dword ptr [EAX + 0x150fdc]  ; 004fa2d0 | g_CDemonSetInstance.enemy_count
    JGE 0x004f9fef                      ; 004fa2d6
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    MOV ECX,dword ptr [0x02db8a5c]      ; 004fa2dc | g_CImpClassInfo.name_hash
    PUSH ECX                            ; 004fa2e2
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150fe0] ; 004fa2e3 | DAT_03265258 | DAT_0326525c
    PUSH EDX                            ; 004fa2ea
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fa2eb
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fa2f0
    TEST EAX,EAX                        ; 004fa2f3
    JNZ 0x004fa2fd                      ; 004fa2f5
        ;   XREF to: 004fa2fd (CONDITIONAL_JUMP)  ; LAB_004fa2fd
    INC ESI                             ; 004fa2f7
        ;   Label: LAB_004fa2f7
    ADD EDI,0x4                         ; 004fa2f8
    JMP 0x004fa2cb                      ; 004fa2fb
        ;   XREF to: 004fa2cb (UNCONDITIONAL_JUMP)  ; LAB_004fa2cb
    CMP EAX,EBX                         ; 004fa2fd
        ;   Label: LAB_004fa2fd
    JZ 0x004fa2f7                       ; 004fa2ff
        ;   XREF to: 004fa2f7 (CONDITIONAL_JUMP)  ; LAB_004fa2f7
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 004fa301
    CMP ECX,dword ptr [EAX + 0xbe3c]    ; 004fa307
    JNZ 0x004fa2f7                      ; 004fa30d
        ;   XREF to: 004fa2f7 (CONDITIONAL_JUMP)  ; LAB_004fa2f7
    PUSH 0x1                            ; 004fa30f
    PUSH 0x3                            ; 004fa311
    ADD EAX,0x158                       ; 004fa313
    PUSH EAX                            ; 004fa318
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa319
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa31e
    INC ESI                             ; 004fa321
    ADD EDI,0x4                         ; 004fa322
    JMP 0x004fa2cb                      ; 004fa325
        ;   XREF to: 004fa2cb (UNCONDITIONAL_JUMP)  ; LAB_004fa2cb
    MOV EAX,[0x02db87d0]                ; 004fa327 | g_LocalHeroIndex
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004fa32c | g_HeroActors
    PUSH EAX                            ; 004fa333
    MOV EDX,dword ptr [EAX + 0x154]     ; 004fa334
    CALL dword ptr [EDX + 0x120]        ; 004fa33a
    ADD ESP,0x4                         ; 004fa340
    TEST EAX,EAX                        ; 004fa343
    JZ 0x004fa374                       ; 004fa345
        ;   XREF to: 004fa374 (CONDITIONAL_JUMP)  ; LAB_004fa374
    PUSH 0x3dcccccd                     ; 004fa347
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004fa34c
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004fa351
    TEST EAX,EAX                        ; 004fa354
    JZ 0x004f9fef                       ; 004fa356
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 004fa35c
    PUSH 0x3                            ; 004fa35e
    LEA EAX,[EBX + 0x158]               ; 004fa360
    PUSH EAX                            ; 004fa366
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa367
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa36c
    JMP 0x004f9fef                      ; 004fa36f
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 004fa374
        ;   Label: LAB_004fa374
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fa37a
    PUSH EBX                            ; 004fa380
    CALL dword ptr [EAX + 0x158]        ; 004fa381
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004fa387
    ADD ESP,0x8                         ; 004fa38d
    TEST EDX,EDX                        ; 004fa390
    JZ 0x004fa495                       ; 004fa392
        ;   XREF to: 004fa495 (CONDITIONAL_JUMP)  ; LAB_004fa495
    CMP dword ptr [EDX + 0x2598],0x0    ; 004fa398
    JNZ 0x004fa424                      ; 004fa39f
        ;   XREF to: 004fa424 (CONDITIONAL_JUMP)  ; LAB_004fa424
    LEA EAX,[EBX + 0x20]                ; 004fa3a5
    FLD float ptr [EDX + 0x20]          ; 004fa3a8
    FSUB float ptr [EAX]                ; 004fa3ab
    FSTP float ptr [EBP + 0xa]          ; 004fa3ad
    FLD float ptr [EDX + 0x24]          ; 004fa3b0
    FSUB float ptr [EAX + 0x4]          ; 004fa3b3
    FST float ptr [EBP + 0xe]           ; 004fa3b6
    FMUL float ptr [EBP + 0xe]          ; 004fa3b9
    FLD float ptr [EBP + 0xa]           ; 004fa3bc
    FMUL ST0                            ; 004fa3bf
    FLD float ptr [EDX + 0x28]          ; 004fa3c1
    FSUB float ptr [EAX + 0x8]          ; 004fa3c4
    FXCH                                ; 004fa3c7
    FADDP ST2,ST0                       ; 004fa3c9
    FST float ptr [EBP + 0x12]          ; 004fa3cb
    FMUL float ptr [EBP + 0x12]         ; 004fa3ce
    FADDP                               ; 004fa3d1
    FSQRT                               ; 004fa3d3
    FSTP float ptr [EBP + 0x72]         ; 004fa3d5
    MOV EAX,dword ptr [EBP + 0x72]      ; 004fa3d8
    FLD float ptr [EBP + 0x72]          ; 004fa3db
    MOV dword ptr [EBP + 0x6a],EAX      ; 004fa3de
    FCOMP float ptr [0x006601dc]        ; 004fa3e1 | FLOAT_006601dc
    FNSTSW AX                           ; 004fa3e7
    SAHF                                ; 004fa3e9
    JC 0x004fa436                       ; 004fa3ea
        ;   XREF to: 004fa436 (CONDITIONAL_JUMP)  ; LAB_004fa436
    FLD float ptr [EBP + 0x6a]          ; 004fa3ec
        ;   Label: LAB_004fa3ec
    FCOMP float ptr [EBX + 0xbe34]      ; 004fa3ef
    FNSTSW AX                           ; 004fa3f5
    SAHF                                ; 004fa3f7
    JNC 0x004f9fef                      ; 004fa3f8
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBP + 0x6a]          ; 004fa3fe
    LEA EDX,[EBX + 0x158]               ; 004fa401
    FCOMP float ptr [0x006601e8]        ; 004fa407 | FLOAT_006601e8
    FNSTSW AX                           ; 004fa40d
    SAHF                                ; 004fa40f
    JNC 0x004fa483                      ; 004fa410
        ;   XREF to: 004fa483 (CONDITIONAL_JUMP)  ; LAB_004fa483
    PUSH 0x1                            ; 004fa412
    PUSH 0x1                            ; 004fa414
    PUSH EDX                            ; 004fa416
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa417
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa41c
    JMP 0x004f9fef                      ; 004fa41f
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 004fa424
        ;   Label: LAB_004fa424
    PUSH 0x3                            ; 004fa426
    PUSH ESI                            ; 004fa428
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa429
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa42e
    JMP 0x004f9fef                      ; 004fa431
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBP + 0xa]                 ; 004fa436
        ;   Label: LAB_004fa436
    PUSH EAX                            ; 004fa439
    LEA EAX,[EBP + -0x56]               ; 004fa43a
    PUSH EAX                            ; 004fa43d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004fa43e
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x52]         ; 004fa443
    ADD ESP,0x8                         ; 004fa446
    FSUB float ptr [EBX + 0x34]         ; 004fa449
    SUB ESP,0x4                         ; 004fa44c
    FSTP float ptr [ESP]                ; 004fa44f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004fa452
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fa457
    FLD float ptr [EBP + 0x76]          ; 004fa45a
    FABS                                ; 004fa45d
    ADD ESP,0x4                         ; 004fa45f
    FCOMP double ptr [0x0062f9fe]       ; 004fa462 | DOUBLE_0062f9fe
    FNSTSW AX                           ; 004fa468
    SAHF                                ; 004fa46a
    JNC 0x004fa3ec                      ; 004fa46b
        ;   XREF to: 004fa3ec (CONDITIONAL_JUMP)  ; LAB_004fa3ec
    PUSH 0x1                            ; 004fa471
    PUSH 0x4                            ; 004fa473
    PUSH ESI                            ; 004fa475
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa476
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa47b
    JMP 0x004fa3ec                      ; 004fa47e
        ;   XREF to: 004fa3ec (UNCONDITIONAL_JUMP)  ; LAB_004fa3ec
    PUSH 0x1                            ; 004fa483
        ;   Label: LAB_004fa483
    PUSH 0x2                            ; 004fa485
    PUSH EDX                            ; 004fa487
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa488
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa48d
    JMP 0x004f9fef                      ; 004fa490
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 004fa495
        ;   Label: LAB_004fa495
    PUSH EBX                            ; 004fa49b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 004fa49c
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fa4a1
    TEST EAX,EAX                        ; 004fa4a4
    JZ 0x004f9fef                       ; 004fa4a6
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 004fa4ac
    PUSH 0x1                            ; 004fa4ae
    PUSH ESI                            ; 004fa4b0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa4b1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa4b6
    JMP 0x004f9fef                      ; 004fa4b9
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 004fa4be
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fa4c4
    PUSH EBX                            ; 004fa4ca
    CALL dword ptr [EAX + 0x158]        ; 004fa4cb
    ADD ESP,0x8                         ; 004fa4d1
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004fa4d4
    LEA ESI,[EBX + 0x158]               ; 004fa4da
    TEST EAX,EAX                        ; 004fa4e0
    JZ 0x004fa500                       ; 004fa4e2
        ;   XREF to: 004fa500 (CONDITIONAL_JUMP)  ; LAB_004fa500
    MOV EDX,dword ptr [EAX + 0x2598]    ; 004fa4e4
    TEST EDX,EDX                        ; 004fa4ea
    JZ 0x004fa536                       ; 004fa4ec
        ;   XREF to: 004fa536 (CONDITIONAL_JUMP)  ; LAB_004fa536
    PUSH 0x1                            ; 004fa4ee
    PUSH 0x3                            ; 004fa4f0
    PUSH ESI                            ; 004fa4f2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa4f3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa4f8
    JMP 0x004f9fef                      ; 004fa4fb
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 004fa500
        ;   Label: LAB_004fa500
    PUSH EBX                            ; 004fa506
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 004fa507
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fa50c
    TEST EAX,EAX                        ; 004fa50f
    JZ 0x004fa525                       ; 004fa511
        ;   XREF to: 004fa525 (CONDITIONAL_JUMP)  ; LAB_004fa525
    PUSH 0x1                            ; 004fa513
    PUSH 0x1                            ; 004fa515
    PUSH ESI                            ; 004fa517
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa518
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa51d
    JMP 0x004f9fef                      ; 004fa520
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 004fa525
        ;   Label: LAB_004fa525
    PUSH EAX                            ; 004fa527
    PUSH ESI                            ; 004fa528
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa529
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa52e
    JMP 0x004f9fef                      ; 004fa531
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,[0x006601dc]                ; 004fa536 | FLOAT_006601dc
        ;   Label: LAB_004fa536
    MOV dword ptr [EBP + 0x62],EAX      ; 004fa53b
    LEA EAX,[EBX + 0x23ac]              ; 004fa53e
    PUSH 0x3e32b8c2                     ; 004fa544
    MOV dword ptr [EAX + 0x8],EDX       ; 004fa549
    PUSH 0x3f000000                     ; 004fa54c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004fa551
    MOV dword ptr [EAX + 0x4],ECX       ; 004fa554
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fa557
    MOV dword ptr [EAX],ECX             ; 004fa55a
    MOV EAX,dword ptr [EBP + 0x62]      ; 004fa55c
    MOV dword ptr [EBP + -0xe],EDX      ; 004fa55f
    MOV dword ptr [EBP + -0x6],EAX      ; 004fa562
    LEA EAX,[EBP + -0xe]                ; 004fa565
    MOV dword ptr [EBP + -0xa],EDX      ; 004fa568
    PUSH EAX                            ; 004fa56b
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004fa56c
    PUSH EAX                            ; 004fa572
    MOV EDX,dword ptr [EAX + 0x154]     ; 004fa573
    CALL dword ptr [EDX + 0xbc]         ; 004fa579
    ADD ESP,0x4                         ; 004fa57f
    PUSH EAX                            ; 004fa582
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004fa583
    ADD EAX,0x20                        ; 004fa589
    PUSH EAX                            ; 004fa58c
    PUSH EBX                            ; 004fa58d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004fa58e
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004fa593
    TEST EAX,EAX                        ; 004fa596
    JL 0x004f9fef                       ; 004fa598
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBX + 0x20]                ; 004fa59e
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004fa5a1
    FLD float ptr [EAX]                 ; 004fa5a7
    FSUB float ptr [EDX + 0x20]         ; 004fa5a9
    FSTP float ptr [EBP + -0x1a]        ; 004fa5ac
    FLD float ptr [EAX + 0x4]           ; 004fa5af
    FSUB float ptr [EDX + 0x24]         ; 004fa5b2
    FLD float ptr [EBP + -0x1a]         ; 004fa5b5
    FXCH                                ; 004fa5b8
    FSTP float ptr [EBP + -0x16]        ; 004fa5ba
    FLD float ptr [EAX + 0x8]           ; 004fa5bd
    FSUB float ptr [EDX + 0x28]         ; 004fa5c0
    FXCH                                ; 004fa5c3
    FMUL float ptr [EBP + -0x1a]        ; 004fa5c5
    FXCH                                ; 004fa5c8
    FST float ptr [EBP + -0x12]         ; 004fa5ca
    FMUL float ptr [EBP + -0x12]        ; 004fa5cd
    XOR EAX,EAX                         ; 004fa5d0
    FADDP                               ; 004fa5d2
    MOV dword ptr [EBP + -0x16],EAX     ; 004fa5d4
    FSQRT                               ; 004fa5d7
    FSTP float ptr [EBP + 0x5e]         ; 004fa5d9
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004fa5dc
    FLD float ptr [EBP + 0x5e]          ; 004fa5df
    MOV dword ptr [EBP + 0x6e],EAX      ; 004fa5e2
    FCOMP float ptr [0x006601e8]        ; 004fa5e5 | FLOAT_006601e8
    FNSTSW AX                           ; 004fa5eb
    SAHF                                ; 004fa5ed
    JBE 0x004fa604                      ; 004fa5ee
        ;   XREF to: 004fa604 (CONDITIONAL_JUMP)  ; LAB_004fa604
    MOV EDX,dword ptr [EBP + 0x66]      ; 004fa5f0
    CMP EDX,0x1                         ; 004fa5f3
    JNZ 0x004fa604                      ; 004fa5f6
        ;   XREF to: 004fa604 (CONDITIONAL_JUMP)  ; LAB_004fa604
    PUSH EDX                            ; 004fa5f8
    PUSH 0x2                            ; 004fa5f9
    PUSH ESI                            ; 004fa5fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa5fc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa601
    FLD float ptr [EBP + 0x6e]          ; 004fa604
        ;   Label: LAB_004fa604
    FCOMP float ptr [0x006601ec]        ; 004fa607 | FLOAT_006601ec
    FNSTSW AX                           ; 004fa60d
    SAHF                                ; 004fa60f
    JNC 0x004fa6dd                      ; 004fa610
        ;   XREF to: 004fa6dd (CONDITIONAL_JUMP)  ; LAB_004fa6dd
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004fa616
    PUSH EAX                            ; 004fa61c
    MOV EDX,dword ptr [EAX + 0x154]     ; 004fa61d
    CALL dword ptr [EDX + 0x108]        ; 004fa623
    ADD ESP,0x4                         ; 004fa629
    TEST EAX,EAX                        ; 004fa62c
    JNZ 0x004fa6dd                      ; 004fa62e
        ;   XREF to: 004fa6dd (CONDITIONAL_JUMP)  ; LAB_004fa6dd
    MOV EAX,dword ptr [EBX + 0xbef0]    ; 004fa634
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004fa63a
    JZ 0x004fa6dd                       ; 004fa642
        ;   XREF to: 004fa6dd (CONDITIONAL_JUMP)  ; LAB_004fa6dd
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004fa648
    LEA EDX,[EBX + 0x20]                ; 004fa64e
    FLD float ptr [EAX + 0x20]          ; 004fa651
    FSUB float ptr [EDX]                ; 004fa654
    FSTP float ptr [EBP + 0x16]         ; 004fa656
    FLD float ptr [EAX + 0x24]          ; 004fa659
    FSUB float ptr [EDX + 0x4]          ; 004fa65c
    FSTP float ptr [EBP + 0x1a]         ; 004fa65f
    FLD float ptr [EAX + 0x28]          ; 004fa662
    LEA EAX,[EBP + 0x16]                ; 004fa665
    PUSH EAX                            ; 004fa668
    LEA EAX,[EBP + -0x62]               ; 004fa669
    FSUB float ptr [EDX + 0x8]          ; 004fa66c
    PUSH EAX                            ; 004fa66f
    FSTP float ptr [EBP + 0x1e]         ; 004fa670
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004fa673
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x5e]         ; 004fa678
    ADD ESP,0x8                         ; 004fa67b
    FSUB float ptr [EBX + 0x34]         ; 004fa67e
    SUB ESP,0x4                         ; 004fa681
    FSTP float ptr [ESP]                ; 004fa684
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004fa687
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fa68c
    FLD float ptr [EBP + 0x76]          ; 004fa68f
    FABS                                ; 004fa692
    ADD ESP,0x4                         ; 004fa694
    FCOMP double ptr [0x0062f9fe]       ; 004fa697 | DOUBLE_0062f9fe
    FNSTSW AX                           ; 004fa69d
    SAHF                                ; 004fa69f
    JNC 0x004fa6dd                      ; 004fa6a0
        ;   XREF to: 004fa6dd (CONDITIONAL_JUMP)  ; LAB_004fa6dd
    PUSH 0x3dcccccd                     ; 004fa6a2
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004fa6a7
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004fa6ac
    TEST EAX,EAX                        ; 004fa6af
    JZ 0x004fa6dd                       ; 004fa6b1
        ;   XREF to: 004fa6dd (CONDITIONAL_JUMP)  ; LAB_004fa6dd
    PUSH 0x1                            ; 004fa6b3
    PUSH 0x8                            ; 004fa6b5
    LEA EAX,[EBX + 0x158]               ; 004fa6b7
    PUSH EAX                            ; 004fa6bd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa6be
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa6c3
    MOV ESI,dword ptr [EBX + 0xbebc]    ; 004fa6c6
    PUSH ESI                            ; 004fa6cc
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004fa6cd
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004fa6d2
    TEST EAX,EAX                        ; 004fa6d5
    JZ 0x004fa82f                       ; 004fa6d7
        ;   XREF to: 004fa82f (CONDITIONAL_JUMP)  ; LAB_004fa82f
    FLD float ptr [EBP + 0x6e]          ; 004fa6dd
        ;   Label: LAB_004fa6dd
    FCOMP float ptr [EBP + 0x62]        ; 004fa6e0
    FNSTSW AX                           ; 004fa6e3
    SAHF                                ; 004fa6e5
    JA 0x004fa77c                       ; 004fa6e6
        ;   XREF to: 004fa77c (CONDITIONAL_JUMP)  ; LAB_004fa77c
    FLD float ptr [EBX + 0xbe38]        ; 004fa6ec
    FLDZ                                ; 004fa6f2
    FCOMPP                              ; 004fa6f4
    FNSTSW AX                           ; 004fa6f6
    SAHF                                ; 004fa6f8
    JC 0x004fa77c                       ; 004fa6f9
        ;   XREF to: 004fa77c (CONDITIONAL_JUMP)  ; LAB_004fa77c
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004fa6ff
    LEA EDX,[EBX + 0x20]                ; 004fa705
    FLD float ptr [EAX + 0x20]          ; 004fa708
    FSUB float ptr [EDX]                ; 004fa70b
    FSTP float ptr [EBP + -0x4a]        ; 004fa70d
    FLD float ptr [EAX + 0x24]          ; 004fa710
    FSUB float ptr [EDX + 0x4]          ; 004fa713
    FSTP float ptr [EBP + -0x46]        ; 004fa716
    FLD float ptr [EAX + 0x28]          ; 004fa719
    LEA EAX,[EBP + -0x4a]               ; 004fa71c
    PUSH EAX                            ; 004fa71f
    LEA EAX,[EBP + 0xffffff6e]          ; 004fa720
    FSUB float ptr [EDX + 0x8]          ; 004fa726
    PUSH EAX                            ; 004fa729
    FSTP float ptr [EBP + -0x42]        ; 004fa72a
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004fa72d
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0xffffff72]    ; 004fa732
    ADD ESP,0x8                         ; 004fa738
    FSUB float ptr [EBX + 0x34]         ; 004fa73b
    SUB ESP,0x4                         ; 004fa73e
    FSTP float ptr [ESP]                ; 004fa741
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004fa744
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fa749
    FLD float ptr [EBP + 0x76]          ; 004fa74c
    FABS                                ; 004fa74f
    ADD ESP,0x4                         ; 004fa751
    FCOMP double ptr [0x0062f9fe]       ; 004fa754 | DOUBLE_0062f9fe
    FNSTSW AX                           ; 004fa75a
    SAHF                                ; 004fa75c
    JNC 0x004fa77c                      ; 004fa75d
        ;   XREF to: 004fa77c (CONDITIONAL_JUMP)  ; LAB_004fa77c
    PUSH 0x1                            ; 004fa75f
    PUSH 0x4                            ; 004fa761
    LEA EAX,[EBX + 0x158]               ; 004fa763
    PUSH EAX                            ; 004fa769
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa76a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa76f
    MOV dword ptr [EBX + 0xbe38],0x40800000 ; 004fa772
    FLD float ptr [EBP + 0x6e]          ; 004fa77c
        ;   Label: LAB_004fa77c
    FCOMP float ptr [EBX + 0xbe34]      ; 004fa77f
    FNSTSW AX                           ; 004fa785
    SAHF                                ; 004fa787
    JBE 0x004fa79d                      ; 004fa788
        ;   XREF to: 004fa79d (CONDITIONAL_JUMP)  ; LAB_004fa79d
    PUSH 0x1                            ; 004fa78a
    PUSH 0x0                            ; 004fa78c
    LEA EAX,[EBX + 0x158]               ; 004fa78e
    PUSH EAX                            ; 004fa794
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004fa795
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fa79a
    FLD float ptr [EBX + 0xbec4]        ; 004fa79d
        ;   Label: LAB_004fa79d
    FSUB float ptr [EBP + 0x92]         ; 004fa7a3
    FST float ptr [EBX + 0xbec4]        ; 004fa7a9
    FLDZ                                ; 004fa7af
    FCOMPP                              ; 004fa7b1
    FNSTSW AX                           ; 004fa7b3
    SAHF                                ; 004fa7b5
    JBE 0x004f9fef                      ; 004fa7b6
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    MOV EDI,dword ptr [EBX + 0xbebc]    ; 004fa7bc
    PUSH EDI                            ; 004fa7c2
    MOV dword ptr [EBX + 0xbec4],0x0    ; 004fa7c3
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004fa7cd
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004fa7d2
    TEST EAX,EAX                        ; 004fa7d5
    JNZ 0x004f9fef                      ; 004fa7d7
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,dword ptr [EBX + 0xbec0]    ; 004fa7dd
    PUSH EAX                            ; 004fa7e3
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004fa7e4
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004fa7e9
    TEST EAX,EAX                        ; 004fa7ec
    JNZ 0x004f9fef                      ; 004fa7ee
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x62f9c5                       ; 004fa7f4 | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fa7f9
    PUSH EBX                            ; 004fa7ff
    CALL dword ptr [EAX + 0x24]         ; 004fa800
    ADD ESP,0x8                         ; 004fa803
    PUSH 0x41a00000                     ; 004fa806
    PUSH 0x41200000                     ; 004fa80b
    MOV dword ptr [EBX + 0xbebc],EAX    ; 004fa810
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004fa816
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fa81b
    ADD ESP,0x8                         ; 004fa81e
    MOV EAX,dword ptr [EBP + 0x76]      ; 004fa821
    MOV dword ptr [EBX + 0xbec4],EAX    ; 004fa824
    JMP 0x004f9fef                      ; 004fa82a
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x62f9b7                       ; 004fa82f | = "imp-jump?.wav"
        ;   Label: LAB_004fa82f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fa834
    PUSH EBX                            ; 004fa83a
    CALL dword ptr [EAX + 0x24]         ; 004fa83b
    ADD ESP,0x8                         ; 004fa83e
    MOV dword ptr [EBX + 0xbebc],EAX    ; 004fa841
    JMP 0x004fa6dd                      ; 004fa847
        ;   XREF to: 004fa6dd (UNCONDITIONAL_JUMP)  ; LAB_004fa6dd
    FLD float ptr [EBP + 0x92]          ; 004fa84c
        ;   Label: caseD_3
    FMUL float ptr [0x0062f9f6]         ; 004fa852 | FLOAT_0062f9f6
    FSUBR float ptr [EBX + 0xbec4]      ; 004fa858
    FST float ptr [EBX + 0xbec4]        ; 004fa85e
    FLDZ                                ; 004fa864
    FCOMPP                              ; 004fa866
    FNSTSW AX                           ; 004fa868
    SAHF                                ; 004fa86a
    JBE 0x004f9fef                      ; 004fa86b
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    MOV ESI,dword ptr [EBX + 0xbebc]    ; 004fa871
    PUSH ESI                            ; 004fa877
    MOV dword ptr [EBX + 0xbec4],0x0    ; 004fa878
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004fa882
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004fa887
    TEST EAX,EAX                        ; 004fa88a
    JNZ 0x004f9fef                      ; 004fa88c
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    MOV EDI,dword ptr [EBX + 0xbec0]    ; 004fa892
    PUSH EDI                            ; 004fa898
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004fa899
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004fa89e
    TEST EAX,EAX                        ; 004fa8a1
    JNZ 0x004f9fef                      ; 004fa8a3
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x62f9d4                       ; 004fa8a9 | = "imp-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fa8ae
    PUSH EBX                            ; 004fa8b4
    CALL dword ptr [EAX + 0x24]         ; 004fa8b5
    ADD ESP,0x8                         ; 004fa8b8
    PUSH 0x41a00000                     ; 004fa8bb
    PUSH 0x41200000                     ; 004fa8c0
    MOV dword ptr [EBX + 0xbebc],EAX    ; 004fa8c5
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004fa8cb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fa8d0
    ADD ESP,0x8                         ; 004fa8d3
    MOV EAX,dword ptr [EBP + 0x76]      ; 004fa8d6
    MOV dword ptr [EBX + 0xbec4],EAX    ; 004fa8d9
    JMP 0x004f9fef                      ; 004fa8df
        ;   XREF to: 004f9fef (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP EDI,0x9                         ; 004fa8e4
        ;   Label: LAB_004fa8e4
    JA 0x004f9fef                       ; 004fa8e7
        ;   XREF to: 004f9fef (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EDI*0x4 + 0x4f9c08]  ; 004fa8ed | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD

