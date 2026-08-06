; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(CHotDemon *this_ptr,float delta_time)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_004b8ee0 = 004b9267
;   TerminatedCString s_s_confused_while_walking_00585f0c
;   TerminatedCString s_hotdemon_attack_wav_00585f36
;   TerminatedCString s_hotdemon_attack_wav_00585f4a
;   double DOUBLE_00585f65 = 3.14159265350000
;   double DOUBLE_00585f6d = 0.523598775583333
;   double DOUBLE_00585f75 = 32
;   float FLOAT_0059f0bc = 2
;   float FLOAT_0059f0c8 = 10
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_01cae1e8
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_FUN_004259f0
;   core_charactr.cpp_CCharacter_FUN_00428c00
;   core_charactr.cpp_CCharacter_FUN_0042a150
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   core_gore.cpp_CGore_createBloodPool_FUN_004b0480
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8f20
        ;   Label: core_hotdemon.cpp_CHotDemon_process_FUN_004b8f20
    PUSH ESI                            ; 004b8f21
    PUSH EDI                            ; 004b8f22
    PUSH EBP                            ; 004b8f23
    MOV EBP,ESP                         ; 004b8f24
    SUB ESP,0xfc                        ; 004b8f26
    SUB EBP,0x7a                        ; 004b8f2c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004b8f2f
    PUSH dword ptr [EBP + 0x92]         ; 004b8f35
    PUSH EBX                            ; 004b8f3b
    CALL core_charactr.cpp_CCharacter_FUN_004259f0 ; 004b8f3c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b8f41
    TEST EAX,EAX                        ; 004b8f44
    JZ 0x004b9125                       ; 004b8f46
        ;   XREF to: 004b9125 (CONDITIONAL_JUMP)  ; LAB_004b9125
    LEA EAX,[EBX + 0x23a4]              ; 004b8f4c
    MOV dword ptr [EAX + 0x8],0x0       ; 004b8f52
    FLD float ptr [EBP + 0x92]          ; 004b8f59
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b8f5f
    MOV dword ptr [EAX + 0x4],EDX       ; 004b8f62
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b8f65
    MOV dword ptr [EAX],EDX             ; 004b8f68
    FMUL float ptr [EBX + 0xbc8c]       ; 004b8f6a
    LEA ESI,[EBX + 0x150]               ; 004b8f70
    FSTP float ptr [EBP + 0x5e]         ; 004b8f76
    FLD float ptr [EBP + 0x5e]          ; 004b8f79
        ;   Label: LAB_004b8f79
    FLDZ                                ; 004b8f7c
    FCOMPP                              ; 004b8f7e
    FNSTSW AX                           ; 004b8f80
    SAHF                                ; 004b8f82
    JC 0x004b912d                       ; 004b8f83
        ;   XREF to: 004b912d (CONDITIONAL_JUMP)  ; LAB_004b912d
    FLD float ptr [EBX + 0xbc8c]        ; 004b8f89
    FLD float ptr [EBP + 0x92]          ; 004b8f8f
    FMUL double ptr [0x00585f65]        ; 004b8f95 | DOUBLE_00585f65
    FMULP                               ; 004b8f9b
    FLD float ptr [EBX + 0x23ac]        ; 004b8f9d
    PUSH ESI                            ; 004b8fa3
    FSTP float ptr [EBX + 0x242c]       ; 004b8fa4
    FSTP float ptr [EBX + 0x2430]       ; 004b8faa
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b8fb0
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004b8fb5
    PUSH dword ptr [EBP + 0x92]         ; 004b8fb8
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b8fbe
    PUSH EBX                            ; 004b8fc1
    MOV EDI,EAX                         ; 004b8fc2
    CALL core_charactr.cpp_CCharacter_FUN_00428c00 ; 004b8fc4
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b8fc9
    TEST EAX,EAX                        ; 004b8fcc
    JZ 0x004b9649                       ; 004b8fce
        ;   XREF to: 004b9649 (CONDITIONAL_JUMP)  ; LAB_004b9649
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004b8fd4
    CMP EAX,0x2                         ; 004b8fda
    JNC 0x004b916d                      ; 004b8fdd
        ;   XREF to: 004b916d (CONDITIONAL_JUMP)  ; LAB_004b916d
    CMP EAX,0x1                         ; 004b8fe3
    JNZ 0x004b9178                      ; 004b8fe6
        ;   XREF to: 004b9178 (CONDITIONAL_JUMP)  ; LAB_004b9178
    PUSH 0x1                            ; 004b8fec
        ;   Label: LAB_004b8fec
    PUSH 0x1                            ; 004b8fee
    LEA EAX,[EBX + 0x150]               ; 004b8ff0
        ;   Label: LAB_004b8ff0
    PUSH EAX                            ; 004b8ff6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b8ff7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b8ffc
        ;   Label: LAB_004b8ffc
    LEA EAX,[EBX + 0x23a4]              ; 004b8fff
    MOV dword ptr [EAX + 0x8],0x0       ; 004b9005
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b900c
    MOV dword ptr [EAX + 0x4],EDX       ; 004b900f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b9012
    MOV dword ptr [EAX],EDX             ; 004b9015
    FLD float ptr [EBX + 0xbca0]        ; 004b9017
        ;   Label: caseD_3
    FLDZ                                ; 004b901d
    FCOMPP                              ; 004b901f
    FNSTSW AX                           ; 004b9021
    SAHF                                ; 004b9023
    JNC 0x004b9038                      ; 004b9024
        ;   XREF to: 004b9038 (CONDITIONAL_JUMP)  ; LAB_004b9038
    FLD float ptr [EBX + 0xbca0]        ; 004b9026
    FSUB float ptr [EBP + 0x92]         ; 004b902c
    FSTP float ptr [EBX + 0xbca0]       ; 004b9032
    PUSH EBX                            ; 004b9038
        ;   Label: LAB_004b9038
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 004b9039
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004b903e
    TEST EAX,EAX                        ; 004b9041
    JZ 0x004b90fe                       ; 004b9043
        ;   XREF to: 004b90fe (CONDITIONAL_JUMP)  ; LAB_004b90fe
    FLD float ptr [EBP + 0x92]          ; 004b9049
    FLD ST0                             ; 004b904f
    FMUL double ptr [0x00585f75]        ; 004b9051 | DOUBLE_00585f75
    FLD float ptr [EBX + 0x2424]        ; 004b9057
    FXCH                                ; 004b905d
    FSUBR ST0,ST1                       ; 004b905f
    LEA EDX,[EBX + 0x2420]              ; 004b9061
    FSTP ST1                            ; 004b9067
    FSTP float ptr [EBX + 0x2424]       ; 004b9069
    FLD float ptr [EDX]                 ; 004b906f
    FMUL ST1                            ; 004b9071
    FSTP float ptr [EBP + 0x32]         ; 004b9073
    FLD float ptr [EDX + 0x4]           ; 004b9076
    FMUL ST1                            ; 004b9079
    LEA EAX,[EBX + 0x2414]              ; 004b907b
    FSTP float ptr [EBP + 0x36]         ; 004b9081
    FMUL float ptr [EDX + 0x8]          ; 004b9084
    LEA ESI,[EBX + 0x23a4]              ; 004b9087
    FLD float ptr [EBP + 0x32]          ; 004b908d
    FXCH                                ; 004b9090
    FSTP float ptr [EBP + 0x3a]         ; 004b9092
    FADD float ptr [EAX]                ; 004b9095
    FLD float ptr [EBP + 0x36]          ; 004b9097
    FXCH                                ; 004b909a
    FSTP float ptr [EBP + 0xe]          ; 004b909c
    FADD float ptr [EAX + 0x4]          ; 004b909f
    FLD float ptr [EBP + 0x3a]          ; 004b90a2
    FXCH                                ; 004b90a5
    FSTP float ptr [EBP + 0x12]         ; 004b90a7
    FADD float ptr [EAX + 0x8]          ; 004b90aa
    FLD float ptr [EBP + 0xe]           ; 004b90ad
    FXCH                                ; 004b90b0
    FSTP float ptr [EBP + 0x16]         ; 004b90b2
    FADD float ptr [ESI]                ; 004b90b5
    FLD float ptr [EBP + 0x12]          ; 004b90b7
    FXCH                                ; 004b90ba
    FSTP float ptr [EBP + -0x16]        ; 004b90bc
    FADD float ptr [ESI + 0x4]          ; 004b90bf
    FLD float ptr [EBP + 0x16]          ; 004b90c2
    FXCH                                ; 004b90c5
    FSTP float ptr [EBP + -0x12]        ; 004b90c7
    FADD float ptr [ESI + 0x8]          ; 004b90ca
    FSTP float ptr [EBP + -0xe]         ; 004b90cd
    MOV dword ptr [EAX + 0x8],0x0       ; 004b90d0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b90d7
    MOV dword ptr [EAX + 0x4],EDX       ; 004b90da
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b90dd
    MOV dword ptr [EAX],EDX             ; 004b90e0
    MOV dword ptr [ESI + 0x8],0x0       ; 004b90e2
    LEA EAX,[EBP + -0x16]               ; 004b90e9
    FLD float ptr [ESI + 0x8]           ; 004b90ec
    PUSH EAX                            ; 004b90ef
    FST float ptr [ESI + 0x4]           ; 004b90f0
    PUSH EBX                            ; 004b90f3
    FSTP float ptr [ESI]                ; 004b90f4
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004b90f6
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004b90fb
    PUSH EBX                            ; 004b90fe
        ;   Label: LAB_004b90fe
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004b90ff
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004b9104
    LEA EAX,[EBX + 0x150]               ; 004b9107
    PUSH EAX                            ; 004b910d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004b910e
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b9113
    PUSH dword ptr [EBP + 0x92]         ; 004b9116
    PUSH EBX                            ; 004b911c
    CALL core_charactr.cpp_CCharacter_FUN_0042a150 ; 004b911d
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b9122
    LEA ESP,[EBP + 0x7a]                ; 004b9125
        ;   Label: LAB_004b9125
    POP EBP                             ; 004b9128
    POP EDI                             ; 004b9129
    POP ESI                             ; 004b912a
    POP EBX                             ; 004b912b
    RET                                 ; 004b912c
    LEA EAX,[EBP + 0x5e]                ; 004b912d
        ;   Label: LAB_004b912d
    PUSH EAX                            ; 004b9130
    PUSH ESI                            ; 004b9131
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004b9132
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004b9137
    PUSH EAX                            ; 004b913a
    PUSH EBX                            ; 004b913b
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004b913c
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004b9141
    JMP 0x004b8f79                      ; 004b9144
        ;   XREF to: 004b8f79 (UNCONDITIONAL_JUMP)  ; LAB_004b8f79
    PUSH 0x1                            ; 004b9149
        ;   Label: LAB_004b9149
    PUSH 0x0                            ; 004b914b
    PUSH ESI                            ; 004b914d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b914e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b9153
    PUSH EBX                            ; 004b9156
    PUSH 0x585f0c                       ; 004b9157 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005ad350]      ; 004b915c | g_CConsole_PTR_005ad350
    PUSH EDI                            ; 004b9162 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b9163
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    JMP 0x004b8ffc                      ; 004b9168
        ;   XREF to: 004b8ffc (UNCONDITIONAL_JUMP)  ; LAB_004b8ffc
    JBE 0x004b8fec                      ; 004b916d
        ;   XREF to: 004b8fec (CONDITIONAL_JUMP)  ; LAB_004b8fec
        ;   Label: LAB_004b916d
    CMP EAX,0x3                         ; 004b9173
    JZ 0x004b9149                       ; 004b9176
        ;   XREF to: 004b9149 (CONDITIONAL_JUMP)  ; LAB_004b9149
    PUSH 0x1                            ; 004b9178
        ;   Label: LAB_004b9178
    PUSH 0x0                            ; 004b917a
    JMP 0x004b8ff0                      ; 004b917c
        ;   XREF to: 004b8ff0 (UNCONDITIONAL_JUMP)  ; LAB_004b8ff0
    MOV ECX,dword ptr [EBX + 0xbc90]    ; 004b9181
        ;   Label: caseD_5
    TEST ECX,ECX                        ; 004b9187
    JNZ 0x004b9017                      ; 004b9189
        ;   XREF to: 004b9017 (CONDITIONAL_JUMP)  ; caseD_e
    MOV ESI,dword ptr [EBX + 0xdc]      ; 004b918f
    TEST ESI,ESI                        ; 004b9195
    JNZ 0x004b9017                      ; 004b9197
        ;   XREF to: 004b9017 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH ECX                            ; 004b919d
    LEA EAX,[EBP + -0x22]               ; 004b919e
    PUSH EAX                            ; 004b91a1
    LEA EAX,[EBX + 0x150]               ; 004b91a2
    PUSH EAX                            ; 004b91a8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004b91a9
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004b91ae
    PUSH EAX                            ; 004b91b1
    LEA EAX,[EBP + -0x2e]               ; 004b91b2
    PUSH EAX                            ; 004b91b5
    PUSH EBX                            ; 004b91b6
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b91b7
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004b91bc
    PUSH ESI                            ; 004b91bf
    LEA EAX,[EBP + -0x2e]               ; 004b91c0
    PUSH EAX                            ; 004b91c3
    MOV EDI,dword ptr [0x005b96c4]      ; 004b91c4 | g_CGore_PTR_005b96c4
    PUSH EDI                            ; 004b91ca
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 004b91cb
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 004b91d0
    MOV dword ptr [EBX + 0xbc90],0x1    ; 004b91d3
    JMP 0x004b9017                      ; 004b91dd
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBP + 0xffffff7e]          ; 004b91e2
        ;   Label: caseD_2
    PUSH EAX                            ; 004b91e8
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004b91e9
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004b91ee
    PUSH 0x41700000                     ; 004b91f1
    PUSH 0x40e00000                     ; 004b91f6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004b91fb
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004b9200
    ADD ESP,0x8                         ; 004b9203
    LEA EAX,[EBP + 0xffffff7e]          ; 004b9206
    MOV EDX,dword ptr [0x01cae1e8]      ; 004b920c | DAT_01cae1e8
    PUSH EAX                            ; 004b9212
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b9213
    MOV dword ptr [EBP + -0x4e],EBX     ; 004b921a
    SUB EAX,EDX                         ; 004b921d
    MOV dword ptr [EBP + -0x4a],EBX     ; 004b921f
    SHL EAX,0x4                         ; 004b9222
    LEA EDX,[EBX + 0xfd0]               ; 004b9225
    ADD EAX,EDX                         ; 004b922b
    PUSH 0x3ecccccd                     ; 004b922d
    PUSH EAX                            ; 004b9232
    PUSH 0x2dd1184                      ; 004b9233 | DAT_02dd1184
    LEA EAX,[EBP + 0x3e]                ; 004b9238
    FLD float ptr [EBP + 0x76]          ; 004b923b
    PUSH EAX                            ; 004b923e
    FSTP float ptr [EBP + -0x7e]        ; 004b923f
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004b9242
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004b9247
    PUSH EAX                            ; 004b924a
    LEA EAX,[EBP + -0x46]               ; 004b924b
    PUSH EAX                            ; 004b924e
    PUSH EBX                            ; 004b924f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b9250
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004b9255
    PUSH EAX                            ; 004b9258
    PUSH EBX                            ; 004b9259
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 004b925a
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004b925f
    JMP 0x004b9017                      ; 004b9262
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004b9267
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b926d
    PUSH EBX                            ; 004b9273
    CALL dword ptr [EAX + 0x13c]        ; 004b9274
    ADD ESP,0x8                         ; 004b927a
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 004b927d
    LEA ESI,[EBX + 0x150]               ; 004b9283
    TEST ECX,ECX                        ; 004b9289
    JZ 0x004b93be                       ; 004b928b
        ;   XREF to: 004b93be (CONDITIONAL_JUMP)  ; LAB_004b93be
    MOV EAX,ECX                         ; 004b9291
    LEA EDX,[EBX + 0x20]                ; 004b9293
    FLD float ptr [EAX + 0x20]          ; 004b9296
    FSUB float ptr [EDX]                ; 004b9299
    FSTP float ptr [EBP + -0x3a]        ; 004b929b
    FLD float ptr [EAX + 0x24]          ; 004b929e
    FSUB float ptr [EDX + 0x4]          ; 004b92a1
    FST float ptr [EBP + -0x36]         ; 004b92a4
    FMUL float ptr [EBP + -0x36]        ; 004b92a7
    FLD float ptr [EBP + -0x3a]         ; 004b92aa
    FMUL ST0                            ; 004b92ad
    FLD float ptr [EAX + 0x28]          ; 004b92af
    FSUB float ptr [EDX + 0x8]          ; 004b92b2
    FXCH                                ; 004b92b5
    FADDP ST2,ST0                       ; 004b92b7
    FST float ptr [EBP + -0x32]         ; 004b92b9
    FMUL float ptr [EBP + -0x32]        ; 004b92bc
    FADDP                               ; 004b92bf
    FSQRT                               ; 004b92c1
    FSTP float ptr [EBP + 0x62]         ; 004b92c3
    MOV EAX,dword ptr [EBP + 0x62]      ; 004b92c6
    FLD float ptr [EBP + 0x62]          ; 004b92c9
    MOV dword ptr [EBP + 0x66],EAX      ; 004b92cc
    FCOMP float ptr [0x0059f0bc]        ; 004b92cf | FLOAT_0059f0bc
    FNSTSW AX                           ; 004b92d5
    SAHF                                ; 004b92d7
    JC 0x004b9320                       ; 004b92d8
        ;   XREF to: 004b9320 (CONDITIONAL_JUMP)  ; LAB_004b9320
    FLD float ptr [EBP + 0x66]          ; 004b92da
        ;   Label: LAB_004b92da
    FCOMP float ptr [EBX + 0xbc9c]      ; 004b92dd
    FNSTSW AX                           ; 004b92e3
    SAHF                                ; 004b92e5
    JNC 0x004b9017                      ; 004b92e6
        ;   XREF to: 004b9017 (CONDITIONAL_JUMP)  ; caseD_e
    FLD float ptr [EBP + 0x66]          ; 004b92ec
    LEA EDX,[EBX + 0x150]               ; 004b92ef
    FCOMP float ptr [0x0059f0c8]        ; 004b92f5 | FLOAT_0059f0c8
    FNSTSW AX                           ; 004b92fb
    SAHF                                ; 004b92fd
    JNC 0x004b93a2                      ; 004b92fe
        ;   XREF to: 004b93a2 (CONDITIONAL_JUMP)  ; LAB_004b93a2
    PUSH 0x1                            ; 004b9304
    PUSH 0x1                            ; 004b9306
    PUSH EDX                            ; 004b9308
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b9309
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b930e
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004b9311
    JMP 0x004b9017                      ; 004b931b
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBP + -0x3a]               ; 004b9320
        ;   Label: LAB_004b9320
    PUSH EAX                            ; 004b9323
    LEA EAX,[EBP + 0x4a]                ; 004b9324
    PUSH EAX                            ; 004b9327
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b9328
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x4e]          ; 004b932d
    ADD ESP,0x8                         ; 004b9330
    FSUB float ptr [EBX + 0x34]         ; 004b9333
    SUB ESP,0x4                         ; 004b9336
    FSTP float ptr [ESP]                ; 004b9339
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b933c
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004b9341
    FLD float ptr [EBP + 0x76]          ; 004b9344
    FABS                                ; 004b9347
    ADD ESP,0x4                         ; 004b9349
    FCOMP double ptr [0x00585f6d]       ; 004b934c | DOUBLE_00585f6d
    FNSTSW AX                           ; 004b9352
    SAHF                                ; 004b9354
    JNC 0x004b92da                      ; 004b9355
        ;   XREF to: 004b92da (CONDITIONAL_JUMP)  ; LAB_004b92da
    TEST EDI,EDI                        ; 004b9357
    JZ 0x004b939c                       ; 004b9359
        ;   XREF to: 004b939c (CONDITIONAL_JUMP)  ; LAB_004b939c
    PUSH 0x1                            ; 004b935b
    PUSH 0x8                            ; 004b935d
    PUSH ESI                            ; 004b935f
        ;   Label: LAB_004b935f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b9360
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b9365
    MOV ESI,dword ptr [EBX + 0xbd24]    ; 004b9368
    PUSH ESI                            ; 004b936e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004b936f
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004b9374
    TEST EAX,EAX                        ; 004b9377
    JNZ 0x004b92da                      ; 004b9379
        ;   XREF to: 004b92da (CONDITIONAL_JUMP)  ; LAB_004b92da
    PUSH 0x585f36                       ; 004b937f | = "hotdemon-attack.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b9384
    PUSH EBX                            ; 004b938a
    CALL dword ptr [EAX + 0x24]         ; 004b938b
    ADD ESP,0x8                         ; 004b938e
    MOV dword ptr [EBX + 0xbd24],EAX    ; 004b9391
    JMP 0x004b92da                      ; 004b9397
        ;   XREF to: 004b92da (UNCONDITIONAL_JUMP)  ; LAB_004b92da
    PUSH 0x1                            ; 004b939c
        ;   Label: LAB_004b939c
    PUSH 0x2                            ; 004b939e
    JMP 0x004b935f                      ; 004b93a0
        ;   XREF to: 004b935f (UNCONDITIONAL_JUMP)  ; LAB_004b935f
    PUSH 0x1                            ; 004b93a2
        ;   Label: LAB_004b93a2
    PUSH 0x7                            ; 004b93a4
    PUSH EDX                            ; 004b93a6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b93a7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b93ac
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004b93af
    JMP 0x004b9017                      ; 004b93b9
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004b93be
        ;   Label: LAB_004b93be
    PUSH EBX                            ; 004b93c4
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004b93c5
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b93ca
    TEST EAX,EAX                        ; 004b93cd
    JZ 0x004b9017                       ; 004b93cf
        ;   XREF to: 004b9017 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004b93d5
        ;   Label: LAB_004b93d5
    PUSH 0x1                            ; 004b93d7
    PUSH ESI                            ; 004b93d9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b93da
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b93df
    JMP 0x004b9017                      ; 004b93e2
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004b93e7
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b93ed
    PUSH EBX                            ; 004b93f3
    CALL dword ptr [EAX + 0x13c]        ; 004b93f4
    ADD ESP,0x8                         ; 004b93fa
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004b93fd
    LEA ESI,[EBX + 0x150]               ; 004b9403
    TEST EAX,EAX                        ; 004b9409
    JNZ 0x004b9447                      ; 004b940b
        ;   XREF to: 004b9447 (CONDITIONAL_JUMP)  ; LAB_004b9447
    PUSH dword ptr [EBP + 0x92]         ; 004b940d
    PUSH EBX                            ; 004b9413
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004b9414
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b9419
    TEST EAX,EAX                        ; 004b941c
    JNZ 0x004b93d5                      ; 004b941e
        ;   XREF to: 004b93d5 (CONDITIONAL_JUMP)  ; LAB_004b93d5
    CMP EDI,0x1                         ; 004b9420
    JNZ 0x004b9435                      ; 004b9423
        ;   XREF to: 004b9435 (CONDITIONAL_JUMP)  ; LAB_004b9435
    PUSH EDI                            ; 004b9425
    PUSH EAX                            ; 004b9426
    PUSH ESI                            ; 004b9427
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b9428
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b942d
    JMP 0x004b9017                      ; 004b9430
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004b9435
        ;   Label: LAB_004b9435
    PUSH 0x6                            ; 004b9437
    PUSH ESI                            ; 004b9439
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b943a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b943f
    JMP 0x004b9017                      ; 004b9442
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,[0x0059f0bc]                ; 004b9447 | FLOAT_0059f0bc
        ;   Label: LAB_004b9447
    PUSH 0x3e32b8c2                     ; 004b944c
    MOV dword ptr [EBP + 0x6e],EAX      ; 004b9451
    LEA EAX,[EBX + 0x23a4]              ; 004b9454
    PUSH 0x3f000000                     ; 004b945a
    MOV dword ptr [EAX + 0x8],0x0       ; 004b945f
    XOR EDX,EDX                         ; 004b9466
    MOV ECX,dword ptr [EAX + 0x8]       ; 004b9468
    MOV dword ptr [EAX + 0x4],ECX       ; 004b946b
    MOV ECX,dword ptr [EAX + 0x4]       ; 004b946e
    MOV dword ptr [EAX],ECX             ; 004b9471
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004b9473
    MOV dword ptr [EBP + 0x26],EDX      ; 004b9476
    MOV dword ptr [EBP + 0x2e],EAX      ; 004b9479
    LEA EAX,[EBP + 0x26]                ; 004b947c
    MOV dword ptr [EBP + 0x2a],EDX      ; 004b947f
    PUSH EAX                            ; 004b9482
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004b9483
    PUSH EAX                            ; 004b9489
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004b948a
    CALL dword ptr [EDX + 0xbc]         ; 004b9490
    ADD ESP,0x4                         ; 004b9496
    PUSH EAX                            ; 004b9499
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004b949a
    ADD EAX,0x20                        ; 004b94a0
    PUSH EAX                            ; 004b94a3
    PUSH EBX                            ; 004b94a4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004b94a5
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004b94aa
    TEST EAX,EAX                        ; 004b94ad
    JL 0x004b9017                       ; 004b94af
        ;   XREF to: 004b9017 (CONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBX + 0x20]                ; 004b94b5
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004b94b8
    FLD float ptr [EAX]                 ; 004b94be
    FSUB float ptr [EDX + 0x20]         ; 004b94c0
    FSTP float ptr [EBP + -0xa]         ; 004b94c3
    FLD float ptr [EAX + 0x4]           ; 004b94c6
    FSUB float ptr [EDX + 0x24]         ; 004b94c9
    FLD float ptr [EBP + -0xa]          ; 004b94cc
    FXCH                                ; 004b94cf
    FSTP float ptr [EBP + -0x6]         ; 004b94d1
    FLD float ptr [EAX + 0x8]           ; 004b94d4
    FSUB float ptr [EDX + 0x28]         ; 004b94d7
    FXCH                                ; 004b94da
    FMUL float ptr [EBP + -0xa]         ; 004b94dc
    FXCH                                ; 004b94df
    FST float ptr [EBP + -0x2]          ; 004b94e1
    FMUL float ptr [EBP + -0x2]         ; 004b94e4
    XOR EAX,EAX                         ; 004b94e7
    FADDP                               ; 004b94e9
    MOV dword ptr [EBP + -0x6],EAX      ; 004b94eb
    FSQRT                               ; 004b94ee
    FSTP float ptr [EBP + 0x72]         ; 004b94f0
    MOV EAX,dword ptr [EBP + 0x72]      ; 004b94f3
    FLD float ptr [EBP + 0x72]          ; 004b94f6
    MOV dword ptr [EBP + 0x6a],EAX      ; 004b94f9
    FCOMP float ptr [0x0059f0c8]        ; 004b94fc | FLOAT_0059f0c8
    FNSTSW AX                           ; 004b9502
    SAHF                                ; 004b9504
    JBE 0x004b9523                      ; 004b9505
        ;   XREF to: 004b9523 (CONDITIONAL_JUMP)  ; LAB_004b9523
    CMP EDI,0x7                         ; 004b9507
    JZ 0x004b9523                       ; 004b950a
        ;   XREF to: 004b9523 (CONDITIONAL_JUMP)  ; LAB_004b9523
    PUSH 0x1                            ; 004b950c
    PUSH 0x7                            ; 004b950e
    PUSH ESI                            ; 004b9510
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004b9511
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b951b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b9520
    FLD float ptr [EBP + 0x6a]          ; 004b9523
        ;   Label: LAB_004b9523
    FCOMP float ptr [EBP + 0x6e]        ; 004b9526
    FNSTSW AX                           ; 004b9529
    SAHF                                ; 004b952b
    JA 0x004b95d4                       ; 004b952c
        ;   XREF to: 004b95d4 (CONDITIONAL_JUMP)  ; LAB_004b95d4
    FLD float ptr [EBX + 0xbca0]        ; 004b9532
    FLDZ                                ; 004b9538
    FCOMPP                              ; 004b953a
    FNSTSW AX                           ; 004b953c
    SAHF                                ; 004b953e
    JC 0x004b95d4                       ; 004b953f
        ;   XREF to: 004b95d4 (CONDITIONAL_JUMP)  ; LAB_004b95d4
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004b9545
    LEA EDX,[EBX + 0x20]                ; 004b954b
    FLD float ptr [EAX + 0x20]          ; 004b954e
    FSUB float ptr [EDX]                ; 004b9551
    FSTP float ptr [EBP + 0x1a]         ; 004b9553
    FLD float ptr [EAX + 0x24]          ; 004b9556
    FSUB float ptr [EDX + 0x4]          ; 004b9559
    FSTP float ptr [EBP + 0x1e]         ; 004b955c
    FLD float ptr [EAX + 0x28]          ; 004b955f
    LEA EAX,[EBP + 0x1a]                ; 004b9562
    PUSH EAX                            ; 004b9565
    LEA EAX,[EBP + 0x2]                 ; 004b9566
    FSUB float ptr [EDX + 0x8]          ; 004b9569
    PUSH EAX                            ; 004b956c
    FSTP float ptr [EBP + 0x22]         ; 004b956d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b9570
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x6]           ; 004b9575
    ADD ESP,0x8                         ; 004b9578
    FSUB float ptr [EBX + 0x34]         ; 004b957b
    SUB ESP,0x4                         ; 004b957e
    FSTP float ptr [ESP]                ; 004b9581
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b9584
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004b9589
    FLD float ptr [EBP + 0x76]          ; 004b958c
    FABS                                ; 004b958f
    ADD ESP,0x4                         ; 004b9591
    FCOMP double ptr [0x00585f6d]       ; 004b9594 | DOUBLE_00585f6d
    FNSTSW AX                           ; 004b959a
    SAHF                                ; 004b959c
    JNC 0x004b95d4                      ; 004b959d
        ;   XREF to: 004b95d4 (CONDITIONAL_JUMP)  ; LAB_004b95d4
    LEA EAX,[EBX + 0x150]               ; 004b959f
    CMP EDI,0x7                         ; 004b95a5
    JZ 0x004b960d                       ; 004b95a8
        ;   XREF to: 004b960d (CONDITIONAL_JUMP)  ; LAB_004b960d
    PUSH 0x1                            ; 004b95aa
    PUSH 0x2                            ; 004b95ac
    PUSH EAX                            ; 004b95ae
        ;   Label: LAB_004b95ae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b95af
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b95b4
    MOV EDX,dword ptr [EBX + 0xbd24]    ; 004b95b7
    PUSH EDX                            ; 004b95bd
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004b95be
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004b95c3
    TEST EAX,EAX                        ; 004b95c6
    JZ 0x004b9613                       ; 004b95c8
        ;   XREF to: 004b9613 (CONDITIONAL_JUMP)  ; LAB_004b9613
    MOV dword ptr [EBX + 0xbca0],0x40000000 ; 004b95ca
        ;   Label: LAB_004b95ca
    FLD float ptr [EBP + 0x6a]          ; 004b95d4
        ;   Label: LAB_004b95d4
    FCOMP float ptr [EBX + 0xbc9c]      ; 004b95d7
    FNSTSW AX                           ; 004b95dd
    SAHF                                ; 004b95df
    JBE 0x004b9017                      ; 004b95e0
        ;   XREF to: 004b9017 (CONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBX + 0x150]               ; 004b95e6
    CMP EDI,0x7                         ; 004b95ec
    JZ 0x004b962d                       ; 004b95ef
        ;   XREF to: 004b962d (CONDITIONAL_JUMP)  ; LAB_004b962d
    PUSH 0x1                            ; 004b95f1
    PUSH 0x0                            ; 004b95f3
    PUSH EAX                            ; 004b95f5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b95f6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b95fb
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004b95fe
    JMP 0x004b9017                      ; 004b9608
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004b960d
        ;   Label: LAB_004b960d
    PUSH 0x8                            ; 004b960f
    JMP 0x004b95ae                      ; 004b9611
        ;   XREF to: 004b95ae (UNCONDITIONAL_JUMP)  ; LAB_004b95ae
    PUSH 0x585f4a                       ; 004b9613 | = "hotdemon-attack.wav"
        ;   Label: LAB_004b9613
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b9618
    PUSH EBX                            ; 004b961e
    CALL dword ptr [EAX + 0x24]         ; 004b961f
    ADD ESP,0x8                         ; 004b9622
    MOV dword ptr [EBX + 0xbd24],EAX    ; 004b9625
    JMP 0x004b95ca                      ; 004b962b
        ;   XREF to: 004b95ca (UNCONDITIONAL_JUMP)  ; LAB_004b95ca
    PUSH 0x1                            ; 004b962d
        ;   Label: LAB_004b962d
    PUSH 0x6                            ; 004b962f
    PUSH EAX                            ; 004b9631
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b9632
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b9637
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004b963a
    JMP 0x004b9017                      ; 004b9644
        ;   XREF to: 004b9017 (UNCONDITIONAL_JUMP)  ; caseD_e
    CMP EDI,0xf                         ; 004b9649
        ;   Label: LAB_004b9649
    JA 0x004b9017                       ; 004b964c
        ;   XREF to: 004b9017 (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,EDI                         ; 004b9652
    JMP dword ptr [EAX*0x4 + 0x4b8ee0]  ; 004b9654 | caseD_6 | caseD_f | caseD_8
        ;   Label: switchD

