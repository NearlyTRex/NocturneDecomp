; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_FUN_004d4f30(CMimic *this_ptr,float delta_time)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x1e4]:1  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x110]:4  local_110
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0x100]:1  local_100
; undefined1       Stack[-0xfd]:1  local_fd
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xc4]:1  local_c4
; undefined1       Stack[-0xc1]:1  local_c1
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xac]:1  local_ac
; undefined1       Stack[-0xa9]:1  local_a9
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_mimic.cpp_CMimic_process_FUN_004d49f0 at 004d4a72
;
; Referenced Globals:
;   TerminatedCString s_gh_alrt_1_4_wav_00589414
;   TerminatedCString s_gh_hits_1_4_wav_00589425
;   double DOUBLE_00589437 = 2
;   float FLOAT_0058943f = 4.242857
;   float FLOAT_00589443 = 12.22222
;   double DOUBLE_00589447 = 1.57079632675000
;   double DOUBLE_0058944f = 0.785398163375000
;   double DOUBLE_00589457 = 15
;   double DOUBLE_0058945f = 0.636619772385777
;   double DOUBLE_00589467 = 25
;   double DOUBLE_0058946f = 30
;   double DOUBLE_00589477 = 3.14159265350000
;   double DOUBLE_0058947f = 32
;   float FLOAT_005a05d8 = 2.5
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_cloth.cpp_CCloth_process_FUN_00436e50
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_gore.cpp_CGore_createBloodPool_FUN_004b0480
;   core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4f30
        ;   Label: core_mimic.cpp_FUN_004d4f30
    PUSH ESI                            ; 004d4f31
    PUSH EDI                            ; 004d4f32
    PUSH EBP                            ; 004d4f33
    MOV EBP,ESP                         ; 004d4f34
    SUB ESP,0x1d4                       ; 004d4f36
    SUB EBP,0x7a                        ; 004d4f3c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004d4f3f
    PUSH 0x0                            ; 004d4f45
    LEA EAX,[EBP + 0xffffff7e]          ; 004d4f47
    PUSH EAX                            ; 004d4f4d
    MOV EAX,[0x01cae0e8]                ; 004d4f4e | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4f53
    ADD EAX,0x150                       ; 004d4f5a
    PUSH EAX                            ; 004d4f5f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004d4f60
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004d4f65
    PUSH EAX                            ; 004d4f68
    LEA EAX,[EBP + -0xa]                ; 004d4f69
    PUSH EAX                            ; 004d4f6c
    MOV EAX,[0x01cae0e8]                ; 004d4f6d | DAT_01cae0e8
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4f72
    PUSH EDX                            ; 004d4f79
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004d4f7a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EAX,[0x01cae0e8]                ; 004d4f7f | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4f84
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d4f8b
    ADD ESP,0xc                         ; 004d4f8e
    MOV dword ptr [EBP + -0x6],EAX      ; 004d4f91
    LEA EAX,[EBP + -0xa]                ; 004d4f94
    PUSH EAX                            ; 004d4f97
    LEA EAX,[EBP + 0x2]                 ; 004d4f98
    PUSH EAX                            ; 004d4f9b
    PUSH EBX                            ; 004d4f9c
    MOV ESI,0xbf800000                  ; 004d4f9d
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004d4fa2
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EAX,dword ptr [EBP + 0x2]       ; 004d4fa7
    MOV dword ptr [EBP + 0x6e],ESI      ; 004d4faa
    MOV dword ptr [EBP + 0x1a],EAX      ; 004d4fad
    MOV EAX,dword ptr [EBP + 0xa]       ; 004d4fb0
    ADD ESP,0xc                         ; 004d4fb3
    MOV dword ptr [EBP + 0x22],EAX      ; 004d4fb6
    LEA EAX,[EBX + 0x150]               ; 004d4fb9
    XOR ECX,ECX                         ; 004d4fbf
    PUSH EAX                            ; 004d4fc1
    MOV dword ptr [EBP + 0x1e],ECX      ; 004d4fc2
    MOV dword ptr [EBP + 0x72],EAX      ; 004d4fc5
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004d4fc8
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV ESI,dword ptr [0x01cae0e8]      ; 004d4fcd | DAT_01cae0e8
    ADD ESP,0x4                         ; 004d4fd3
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d4fd6
    SHL ESI,0x2                         ; 004d4fd9
    CMP EAX,0x2                         ; 004d4fdc
    JNC 0x004d550d                      ; 004d4fdf
        ;   XREF to: 004d550d (CONDITIONAL_JUMP)  ; LAB_004d550d
    TEST EAX,EAX                        ; 004d4fe5
    JBE 0x004d510d                      ; 004d4fe7
        ;   XREF to: 004d510d (CONDITIONAL_JUMP)  ; LAB_004d510d
    MOV EAX,[0x01cae0e8]                ; 004d4fed | DAT_01cae0e8
        ;   Label: LAB_004d4fed
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4ff2
    PUSH EAX                            ; 004d4ff9
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004d4ffa
    CALL dword ptr [EDX + 0x104]        ; 004d5000
    ADD ESP,0x4                         ; 004d5006
    TEST EAX,EAX                        ; 004d5009
    JZ 0x004d5269                       ; 004d500b
        ;   XREF to: 004d5269 (CONDITIONAL_JUMP)  ; LAB_004d5269
    PUSH 0x1                            ; 004d5011
        ;   Label: LAB_004d5011
    PUSH 0x0                            ; 004d5013
    LEA EAX,[EBX + 0x150]               ; 004d5015
        ;   Label: LAB_004d5015
    PUSH EAX                            ; 004d501b
        ;   Label: LAB_004d501b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004d501c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004d501c
    ADD ESP,0xc                         ; 004d5021
    FLD float ptr [EBP + 0x6e]          ; 004d5024
        ;   Label: LAB_004d5024
    FLDZ                                ; 004d5027
    FCOMPP                              ; 004d5029
    FNSTSW AX                           ; 004d502b
    SAHF                                ; 004d502d
    JBE 0x004d5530                      ; 004d502e
        ;   XREF to: 004d5530 (CONDITIONAL_JUMP)  ; LAB_004d5530
    FLD float ptr [EBP + 0x92]          ; 004d5034
        ;   Label: LAB_004d5034
    FMUL float ptr [EBX + 0xbc8c]       ; 004d503a
    LEA ESI,[EBX + 0x150]               ; 004d5040
    FSTP float ptr [EBP + 0x5e]         ; 004d5046
    FLD float ptr [EBP + 0x5e]          ; 004d5049
        ;   Label: LAB_004d5049
    FLDZ                                ; 004d504c
    FCOMPP                              ; 004d504e
    FNSTSW AX                           ; 004d5050
    SAHF                                ; 004d5052
    JNC 0x004d5608                      ; 004d5053
        ;   XREF to: 004d5608 (CONDITIONAL_JUMP)  ; LAB_004d5608
    LEA EAX,[EBP + 0x5e]                ; 004d5059
    PUSH EAX                            ; 004d505c
    PUSH ESI                            ; 004d505d
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004d505e
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004d5063
    CMP EAX,0x1                         ; 004d5066
    JC 0x004d5049                       ; 004d5069
        ;   XREF to: 004d5049 (CONDITIONAL_JUMP)  ; LAB_004d5049
    JA 0x004d55fe                       ; 004d506b
        ;   XREF to: 004d55fe (CONDITIONAL_JUMP)  ; LAB_004d55fe
    CMP dword ptr [EBX + 0x2408],0x0    ; 004d5071
    JZ 0x004d5049                       ; 004d5078
        ;   XREF to: 004d5049 (CONDITIONAL_JUMP)  ; LAB_004d5049
    MOV EDX,dword ptr [0x01cc90b0]      ; 004d507a | DAT_01cc90b0
    PUSH EDX                            ; 004d5080
    LEA EAX,[EBP + -0x3a]               ; 004d5081
    PUSH EAX                            ; 004d5084
    PUSH ESI                            ; 004d5085
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004d5086
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004d508b
    MOV DH,byte ptr [EBP + -0x37]       ; 004d508e
    LEA EAX,[EBP + -0x3a]               ; 004d5091
    PUSH 0x3f800000                     ; 004d5094
    XOR DH,0x80                         ; 004d5099
    PUSH EAX                            ; 004d509c
    MOV byte ptr [EBP + -0x37],DH       ; 004d509d
    PUSH EBX                            ; 004d50a0
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004d50a1
    CALL dword ptr [EDX + 0x1c]         ; 004d50a7
    ADD ESP,0xc                         ; 004d50aa
    JMP 0x004d5049                      ; 004d50ad
        ;   XREF to: 004d5049 (UNCONDITIONAL_JUMP)  ; LAB_004d5049
    MOV EDX,dword ptr [EBX + 0xbc90]    ; 004d50af
        ;   Label: LAB_004d50af
    TEST EDX,EDX                        ; 004d50b5
    JNZ 0x004d5024                      ; 004d50b7
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    CMP dword ptr [EBX + 0xdc],0x0      ; 004d50bd
    JNZ 0x004d5024                      ; 004d50c4
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    PUSH EDX                            ; 004d50ca
    LEA EAX,[EBP + -0x16]               ; 004d50cb
    PUSH EAX                            ; 004d50ce
    MOV ESI,dword ptr [EBP + 0x72]      ; 004d50cf
    PUSH ESI                            ; 004d50d2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004d50d3
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004d50d8
    PUSH EAX                            ; 004d50db
    LEA EAX,[EBP + 0xe]                 ; 004d50dc
    PUSH EAX                            ; 004d50df
    PUSH EBX                            ; 004d50e0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004d50e1
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d50e6
    PUSH 0x0                            ; 004d50e9
    LEA EAX,[EBP + 0xe]                 ; 004d50eb
    PUSH EAX                            ; 004d50ee
    MOV EDI,dword ptr [0x005b96c4]      ; 004d50ef | g_CGore_PTR_005b96c4
    PUSH EDI                            ; 004d50f5
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 004d50f6
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 004d50fb
    MOV dword ptr [EBX + 0xbc90],0x1    ; 004d50fe
    JMP 0x004d5024                      ; 004d5108
        ;   XREF to: 004d5024 (UNCONDITIONAL_JUMP)  ; LAB_004d5024
    MOV EAX,dword ptr [ESI + 0x1cae0d8] ; 004d510d
        ;   Label: LAB_004d510d
    PUSH EAX                            ; 004d5113
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004d5114
    CALL dword ptr [EDX + 0x104]        ; 004d511a
    ADD ESP,0x4                         ; 004d5120
    TEST EAX,EAX                        ; 004d5123
    JNZ 0x004d5024                      ; 004d5125
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    MOV EAX,[0x005b9354]                ; 004d512b | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x1d4],0x0     ; 004d5130 | g_CGame_01c775ec.freeze_enemies_enabled
    JNZ 0x004d5024                      ; 004d5137
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    MOV EAX,[0x01cae0e8]                ; 004d513d | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d5142
    FLD float ptr [EBX + 0x24]          ; 004d5149
    FSUB float ptr [EAX + 0x24]         ; 004d514c
    FABS                                ; 004d514f
    FCOMP double ptr [0x00589457]       ; 004d5151 | DOUBLE_00589457
    FNSTSW AX                           ; 004d5157
    SAHF                                ; 004d5159
    JA 0x004d5024                       ; 004d515a
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    LEA EAX,[EBP + 0x1a]                ; 004d5160
    PUSH EAX                            ; 004d5163
    LEA EAX,[EBP + 0x32]                ; 004d5164
    PUSH EAX                            ; 004d5167
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004d5168
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004d516d
    PUSH dword ptr [EAX + 0x4]          ; 004d5170
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004d5173
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d5178
    FLD float ptr [EBP + 0x76]          ; 004d517b
    FABS                                ; 004d517e
    FLD float ptr [EBP + 0x1e]          ; 004d5180
    FMUL ST0                            ; 004d5183
    FLD float ptr [EBP + 0x1a]          ; 004d5185
    FMUL ST0                            ; 004d5188
    FADDP                               ; 004d518a
    FLD float ptr [EBP + 0x22]          ; 004d518c
    FMUL ST0                            ; 004d518f
    FADDP                               ; 004d5191
    FSQRT                               ; 004d5193
    FXCH                                ; 004d5195
    FMUL double ptr [0x0058945f]        ; 004d5197 | DOUBLE_0058945f
    FLD1                                ; 004d519d
    FSUBRP                              ; 004d519f
    FMUL double ptr [0x00589467]        ; 004d51a1 | DOUBLE_00589467
    FADD double ptr [0x0058946f]        ; 004d51a7 | DOUBLE_0058946f
    ADD ESP,0x4                         ; 004d51ad
    FXCH                                ; 004d51b0
    FCOMPP                              ; 004d51b2
    FNSTSW AX                           ; 004d51b4
    SAHF                                ; 004d51b6
    JNC 0x004d5024                      ; 004d51b7
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    MOV ECX,dword ptr [0x01cc9094]      ; 004d51bd | DAT_01cc9094
    PUSH ECX                            ; 004d51c3
    MOV ESI,dword ptr [EBP + 0x72]      ; 004d51c4
    PUSH ESI                            ; 004d51c7
    LEA ESI,[EBP + 0xfffffee2]          ; 004d51c8
    LEA EDI,[EBP + 0xffffff12]          ; 004d51ce
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 ; 004d51d4
        ;   XREF to: 0051d0a0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 004d51d9
    ADD ESP,0x8                         ; 004d51de
    LEA EAX,[EBP + 0xffffff12]          ; 004d51e1
    LEA ESI,[EBP + 0xfffffee2]          ; 004d51e7
    PUSH EAX                            ; 004d51ed
    MOV EAX,0x3f333333                  ; 004d51ee
    MOV EDX,0x3e99999a                  ; 004d51f3
    MOV dword ptr [EBP + 0x42],EAX      ; 004d51f8
    LEA EAX,[EBP + 0x3e]                ; 004d51fb
    MOVSD.REP ES:EDI,ESI                ; 004d51fe
    PUSH EAX                            ; 004d5200
    LEA EAX,[EBP + -0x2e]               ; 004d5201
    XOR EDI,EDI                         ; 004d5204
    PUSH EAX                            ; 004d5206
    MOV dword ptr [EBP + 0x46],EDX      ; 004d5207
    MOV dword ptr [EBP + 0x3e],EDI      ; 004d520a
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d520d
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004d5212
    PUSH EAX                            ; 004d5215
    LEA EAX,[EBP + -0x6a]               ; 004d5216
    PUSH EAX                            ; 004d5219
    PUSH EBX                            ; 004d521a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004d521b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d5220
    LEA EAX,[EBP + -0xa]                ; 004d5223
    PUSH EAX                            ; 004d5226
    LEA EAX,[EBP + -0x6a]               ; 004d5227
    PUSH EAX                            ; 004d522a
    MOV ECX,dword ptr [0x005be368]      ; 004d522b | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004d5231 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0 ; 004d5232
        ;   XREF to: 0050fae0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004d5237
    TEST EAX,EAX                        ; 004d523a
    JNZ 0x004d5024                      ; 004d523c
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    PUSH 0x1                            ; 004d5242
    PUSH 0x2                            ; 004d5244
    MOV ESI,dword ptr [EBP + 0x72]      ; 004d5246
    PUSH ESI                            ; 004d5249
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004d524a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d524f
    PUSH 0x589414                       ; 004d5252 | = "gh-alrt[1,4].wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004d5257
    PUSH EBX                            ; 004d525d
    CALL dword ptr [EAX + 0x24]         ; 004d525e
    ADD ESP,0x8                         ; 004d5261
    JMP 0x004d5024                      ; 004d5264
        ;   XREF to: 004d5024 (UNCONDITIONAL_JUMP)  ; LAB_004d5024
    MOV EAX,[0x005b9354]                ; 004d5269 | g_CGame_PTR_005b9354
        ;   Label: LAB_004d5269
    CMP dword ptr [EAX + 0x1d4],0x0     ; 004d526e | g_CGame_01c775ec.freeze_enemies_enabled
    JNZ 0x004d5011                      ; 004d5275
        ;   XREF to: 004d5011 (CONDITIONAL_JUMP)  ; LAB_004d5011
    LEA EAX,[EBX + 0x20]                ; 004d527b
    PUSH EAX                            ; 004d527e
    LEA EAX,[EBP + 0xffffff72]          ; 004d527f
    PUSH EAX                            ; 004d5285
    MOV ECX,dword ptr [EBX + 0x46920]   ; 004d5286
    PUSH ECX                            ; 004d528c
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004d528d
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004d5292
    LEA EAX,[EBP + 0xffffff42]          ; 004d5295
    PUSH EAX                            ; 004d529b
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004d529c
    PUSH EBX                            ; 004d52a2
    CALL dword ptr [EDX + 0x14]         ; 004d52a3
    LEA EDX,[EAX + 0xc]                 ; 004d52a6
    FLD float ptr [EDX]                 ; 004d52a9
    FSUB float ptr [EAX]                ; 004d52ab
    FSTP float ptr [EBP + -0x52]        ; 004d52ad
    FLD float ptr [EDX + 0x4]           ; 004d52b0
    FSUB float ptr [EAX + 0x4]          ; 004d52b3
    FLD float ptr [EBP + -0x52]         ; 004d52b6
    FXCH                                ; 004d52b9
    FSTP float ptr [EBP + -0x4e]        ; 004d52bb
    FLD float ptr [EDX + 0x8]           ; 004d52be
    FSUB float ptr [EAX + 0x8]          ; 004d52c1
    FXCH                                ; 004d52c4
    FMUL float ptr [EBP + -0x52]        ; 004d52c6
    FXCH                                ; 004d52c9
    FST float ptr [EBP + -0x4a]         ; 004d52cb
    FMUL float ptr [EBP + -0x4a]        ; 004d52ce
    FADDP                               ; 004d52d1
    FSQRT                               ; 004d52d3
    XOR ESI,ESI                         ; 004d52d5
    FLD float ptr [EBP + 0xffffff7a]    ; 004d52d7
    ADD ESP,0x8                         ; 004d52dd
    FCHS                                ; 004d52e0
    MOV dword ptr [EBP + -0x4e],ESI     ; 004d52e2
    FXCH                                ; 004d52e5
    FCOMPP                              ; 004d52e7
    FNSTSW AX                           ; 004d52e9
    SAHF                                ; 004d52eb
    JNC 0x004d52fc                      ; 004d52ec
        ;   XREF to: 004d52fc (CONDITIONAL_JUMP)  ; LAB_004d52fc
    PUSH EBX                            ; 004d52ee
    CALL core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00 ; 004d52ef
        ;   XREF to: 004d5d00 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00(CMimic * this_ptr)
    ADD ESP,0x4                         ; 004d52f4
    JMP 0x004d5024                      ; 004d52f7
        ;   XREF to: 004d5024 (UNCONDITIONAL_JUMP)  ; LAB_004d5024
    PUSH 0x1                            ; 004d52fc
        ;   Label: LAB_004d52fc
    LEA ESI,[EBX + 0x150]               ; 004d52fe
    PUSH ESI                            ; 004d5304
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004d5305
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d530a
    ADD ESP,0x8                         ; 004d530d
    FLD float ptr [EBP + 0x76]          ; 004d5310
    PUSH 0x2                            ; 004d5313
    FMUL float ptr [0x0058943f]         ; 004d5315 | FLOAT_0058943f
    PUSH ESI                            ; 004d531b
    FSTP float ptr [EBX + 0x242c]       ; 004d531c
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004d5322
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    FLD float ptr [EBX + 0xbc8c]        ; 004d5327
    MOV dword ptr [EBP + 0x76],EAX      ; 004d532d
    FLD float ptr [EBP + 0x92]          ; 004d5330
    FXCH                                ; 004d5336
    FMUL ST1                            ; 004d5338
    FLD float ptr [EBP + 0x76]          ; 004d533a
    FMUL float ptr [0x00589443]         ; 004d533d | FLOAT_00589443
    FLD float ptr [EBX + 0xbc8c]        ; 004d5343
    FXCH ST3                            ; 004d5349
    FMUL double ptr [0x00589447]        ; 004d534b | DOUBLE_00589447
    FXCH                                ; 004d5351
    FADD float ptr [EBX + 0x242c]       ; 004d5353
    FXCH                                ; 004d5359
    FMULP ST3                           ; 004d535b
    FSTP float ptr [EBX + 0x242c]       ; 004d535d
    FMUL float ptr [EBX + 0x242c]       ; 004d5363
    ADD ESP,0x8                         ; 004d5369
    MOV EAX,[0x005a05d8]                ; 004d536c | FLOAT_005a05d8
    PUSH 0x3e32b8c2                     ; 004d5371
    FXCH                                ; 004d5376
    FSTP float ptr [EBX + 0x2430]       ; 004d5378
    FSTP float ptr [EBX + 0x242c]       ; 004d537e
    MOV dword ptr [EBP + -0x56],EAX     ; 004d5384
    LEA EAX,[EBP + -0x5e]               ; 004d5387
    PUSH 0x3f800000                     ; 004d538a
    PUSH EAX                            ; 004d538f
    MOV EAX,[0x01cae0e8]                ; 004d5390 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d5395
    LEA EDX,[EAX + 0xbcc0]              ; 004d539c
    PUSH EDX                            ; 004d53a2
    ADD EAX,0x20                        ; 004d53a3
    PUSH EAX                            ; 004d53a6
    XOR EDI,EDI                         ; 004d53a7
    PUSH EBX                            ; 004d53a9
    MOV dword ptr [EBP + -0x5e],EDI     ; 004d53aa
    MOV dword ptr [EBP + -0x5a],EDI     ; 004d53ad
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004d53b0
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004d53b5
    TEST EAX,EAX                        ; 004d53b8
    JL 0x004d53cc                       ; 004d53ba
        ;   XREF to: 004d53cc (CONDITIONAL_JUMP)  ; LAB_004d53cc
    JLE 0x004d53d5                      ; 004d53bc
        ;   XREF to: 004d53d5 (CONDITIONAL_JUMP)  ; LAB_004d53d5
    PUSH EBX                            ; 004d53be
    CALL core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00 ; 004d53bf
        ;   XREF to: 004d5d00 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00(CMimic * this_ptr)
    ADD ESP,0x4                         ; 004d53c4
    JMP 0x004d5024                      ; 004d53c7
        ;   XREF to: 004d5024 (UNCONDITIONAL_JUMP)  ; LAB_004d5024
    PUSH 0x1                            ; 004d53cc
        ;   Label: LAB_004d53cc
    PUSH EDI                            ; 004d53ce
    PUSH ESI                            ; 004d53cf
    JMP 0x004d501c                      ; 004d53d0
        ;   XREF to: 004d501c (UNCONDITIONAL_JUMP)  ; LAB_004d501c
    FLD float ptr [EBP + 0x92]          ; 004d53d5
        ;   Label: LAB_004d53d5
    FMUL float ptr [EBX + 0xbc8c]       ; 004d53db
    FLD float ptr [EBX + 0x2410]        ; 004d53e1
    FABS                                ; 004d53e7
    FDIVRP                              ; 004d53e9
    FCOMP double ptr [0x0058944f]       ; 004d53eb | DOUBLE_0058944f
    FNSTSW AX                           ; 004d53f1
    SAHF                                ; 004d53f3
    JBE 0x004d5400                      ; 004d53f4
        ;   XREF to: 004d5400 (CONDITIONAL_JUMP)  ; LAB_004d5400
    PUSH 0x1                            ; 004d53f6
    PUSH 0x1                            ; 004d53f8
    PUSH ESI                            ; 004d53fa
    JMP 0x004d501c                      ; 004d53fb
        ;   XREF to: 004d501c (UNCONDITIONAL_JUMP)  ; LAB_004d501c
    PUSH 0x1                            ; 004d5400
        ;   Label: LAB_004d5400
    PUSH 0x2                            ; 004d5402
    PUSH ESI                            ; 004d5404
    JMP 0x004d501c                      ; 004d5405
        ;   XREF to: 004d501c (UNCONDITIONAL_JUMP)  ; LAB_004d501c
    MOV EAX,dword ptr [ESI + 0x1cae0d8] ; 004d540a
        ;   Label: LAB_004d540a
    CMP dword ptr [EAX + 0x2590],0x0    ; 004d5410
    JZ 0x004d5425                       ; 004d5417
        ;   XREF to: 004d5425 (CONDITIONAL_JUMP)  ; LAB_004d5425
    PUSH 0x1                            ; 004d5419
    PUSH 0x0                            ; 004d541b
    MOV EAX,dword ptr [EBP + 0x72]      ; 004d541d
    JMP 0x004d501b                      ; 004d5420
        ;   XREF to: 004d501b (UNCONDITIONAL_JUMP)  ; LAB_004d501b
    MOV ECX,dword ptr [EBP + 0x72]      ; 004d5425
        ;   Label: LAB_004d5425
    PUSH ECX                            ; 004d5428
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60 ; 004d5429
        ;   XREF to: 004e1e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d542e
    ADD ESP,0x4                         ; 004d5431
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d5434
    MOV dword ptr [EBP + 0x6a],EAX      ; 004d5437
    FLD float ptr [EBP + 0x6a]          ; 004d543a
    FST double ptr [EBP + 0x52]         ; 004d543d
    FCOMP double ptr [0x00589437]       ; 004d5440 | DOUBLE_00589437
    FNSTSW AX                           ; 004d5446
    SAHF                                ; 004d5448
    JA 0x004d5024                       ; 004d5449
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    MOV EAX,[0x005a05d8]                ; 004d544f | FLOAT_005a05d8
    FLD1                                ; 004d5454
    MOV dword ptr [EBP + 0x6e],EAX      ; 004d5456
    FCOMP double ptr [EBP + 0x52]       ; 004d5459
    FNSTSW AX                           ; 004d545c
    SAHF                                ; 004d545e
    JA 0x004d5024                       ; 004d545f
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    PUSH 0x41700000                     ; 004d5465
    PUSH 0x40e00000                     ; 004d546a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004d546f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    ADD ESP,0x8                         ; 004d5474
    MOV ESI,dword ptr [0x01cc90b4]      ; 004d5477 | DAT_01cc90b4
    MOV dword ptr [EBP + 0x76],EAX      ; 004d547d
    PUSH ESI                            ; 004d5480
    LEA EAX,[EBP + -0x22]               ; 004d5481
    MOV EDI,dword ptr [EBP + 0x72]      ; 004d5484
    PUSH EAX                            ; 004d5487
    FLD float ptr [EBP + 0x76]          ; 004d5488
    PUSH EDI                            ; 004d548b
    FSTP float ptr [EBP + 0x66]         ; 004d548c
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004d548f
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV AH,byte ptr [EBP + -0x1f]       ; 004d5494
    XOR AH,0x80                         ; 004d5497
    ADD ESP,0xc                         ; 004d549a
    MOV byte ptr [EBP + -0x1f],AH       ; 004d549d
    LEA EAX,[EBP + 0xfffffea6]          ; 004d54a0
    PUSH EAX                            ; 004d54a6
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004d54a7
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBP + 0x66]      ; 004d54ac
    ADD ESP,0x4                         ; 004d54af
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 004d54b2
    LEA EAX,[EBP + 0xfffffea6]          ; 004d54b8
    PUSH EAX                            ; 004d54be
    LEA EAX,[EBP + -0x22]               ; 004d54bf
    PUSH 0x3e4ccccd                     ; 004d54c2
    PUSH EAX                            ; 004d54c7
    LEA EAX,[EBP + 0xffffff5a]          ; 004d54c8
    PUSH EAX                            ; 004d54ce
    PUSH EBX                            ; 004d54cf
    MOV dword ptr [EBP + 0xfffffeda],EBX ; 004d54d0
    MOV dword ptr [EBP + 0xfffffede],EBX ; 004d54d6
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004d54dc
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d54e1
    PUSH EAX                            ; 004d54e4
    PUSH EBX                            ; 004d54e5
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 004d54e6
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004d54eb
    TEST EAX,EAX                        ; 004d54ee
    JZ 0x004d5024                       ; 004d54f0
        ;   XREF to: 004d5024 (CONDITIONAL_JUMP)  ; LAB_004d5024
    PUSH 0x589425                       ; 004d54f6 | = "gh-hits[1,4].wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004d54fb
    PUSH EBX                            ; 004d5501
    CALL dword ptr [EAX + 0x24]         ; 004d5502
    ADD ESP,0x8                         ; 004d5505
    JMP 0x004d5024                      ; 004d5508
        ;   XREF to: 004d5024 (UNCONDITIONAL_JUMP)  ; LAB_004d5024
    JBE 0x004d4fed                      ; 004d550d
        ;   XREF to: 004d4fed (CONDITIONAL_JUMP)  ; LAB_004d4fed
        ;   Label: LAB_004d550d
    CMP EAX,0xc                         ; 004d5513
    JC 0x004d5527                       ; 004d5516
        ;   XREF to: 004d5527 (CONDITIONAL_JUMP)  ; LAB_004d5527
    JBE 0x004d50af                      ; 004d5518
        ;   XREF to: 004d50af (CONDITIONAL_JUMP)  ; LAB_004d50af
    CMP EAX,0x13                        ; 004d551e
    JZ 0x004d540a                       ; 004d5521
        ;   XREF to: 004d540a (CONDITIONAL_JUMP)  ; LAB_004d540a
    PUSH 0x1                            ; 004d5527
        ;   Label: LAB_004d5527
    PUSH 0x2                            ; 004d5529
    JMP 0x004d5015                      ; 004d552b
        ;   XREF to: 004d5015 (UNCONDITIONAL_JUMP)  ; LAB_004d5015
    FLD float ptr [EBX + 0xbc8c]        ; 004d5530
        ;   Label: LAB_004d5530
    FLD ST0                             ; 004d5536
    FLD float ptr [EBP + 0x92]          ; 004d5538
    FLD ST0                             ; 004d553e
    FMUL double ptr [0x00589477]        ; 004d5540 | DOUBLE_00589477
    FXCH ST3                            ; 004d5546
    FMULP                               ; 004d5548
    FXCH ST2                            ; 004d554a
    FMULP                               ; 004d554c
    PUSH 0x3f060a92                     ; 004d554e
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004d5553
    FXCH                                ; 004d5556
    FSTP float ptr [EBX + 0x242c]       ; 004d5558
    FSTP float ptr [EBX + 0x2430]       ; 004d555e
    MOV dword ptr [EBP + 0x2e],EAX      ; 004d5564
    LEA EAX,[EBP + 0x26]                ; 004d5567
    PUSH 0x40400000                     ; 004d556a
    PUSH EAX                            ; 004d556f
    MOV EAX,[0x01cae0e8]                ; 004d5570 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d5575
    LEA EDX,[EAX + 0xbcc0]              ; 004d557c
    PUSH EDX                            ; 004d5582
    ADD EAX,0x20                        ; 004d5583
    PUSH EAX                            ; 004d5586
    XOR EDI,EDI                         ; 004d5587
    PUSH EBX                            ; 004d5589
    MOV dword ptr [EBP + 0x26],EDI      ; 004d558a
    MOV dword ptr [EBP + 0x2a],EDI      ; 004d558d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004d5590
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004d5595
    CMP EAX,0x1                         ; 004d5598
    JZ 0x004d5034                       ; 004d559b
        ;   XREF to: 004d5034 (CONDITIONAL_JUMP)  ; LAB_004d5034
    PUSH 0x1                            ; 004d55a1
    PUSH 0x2                            ; 004d55a3
    LEA EAX,[EBX + 0x150]               ; 004d55a5
    PUSH EAX                            ; 004d55ab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004d55ac
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d55b1
    JMP 0x004d5034                      ; 004d55b4
        ;   XREF to: 004d5034 (UNCONDITIONAL_JUMP)  ; LAB_004d5034
    CMP dword ptr [EBX + 0x2408],0x0    ; 004d55b9
        ;   Label: LAB_004d55b9
    JZ 0x004d5049                       ; 004d55c0
        ;   XREF to: 004d5049 (CONDITIONAL_JUMP)  ; LAB_004d5049
    MOV EDI,dword ptr [0x01cc90b4]      ; 004d55c6 | DAT_01cc90b4
    PUSH EDI                            ; 004d55cc
    LEA EAX,[EBP + -0x76]               ; 004d55cd
    PUSH EAX                            ; 004d55d0
    PUSH ESI                            ; 004d55d1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004d55d2
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV DL,byte ptr [EBP + -0x73]       ; 004d55d7
    XOR DL,0x80                         ; 004d55da
    ADD ESP,0xc                         ; 004d55dd
    MOV byte ptr [EBP + -0x73],DL       ; 004d55e0
    LEA EDX,[EBP + -0x76]               ; 004d55e3
    PUSH 0x3f800000                     ; 004d55e6
    PUSH EDX                            ; 004d55eb
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004d55ec
    PUSH EBX                            ; 004d55f2
    CALL dword ptr [EAX + 0x1c]         ; 004d55f3
    ADD ESP,0xc                         ; 004d55f6
    JMP 0x004d5049                      ; 004d55f9
        ;   XREF to: 004d5049 (UNCONDITIONAL_JUMP)  ; LAB_004d5049
    CMP EAX,0x7                         ; 004d55fe
        ;   Label: LAB_004d55fe
    JZ 0x004d55b9                       ; 004d5601
        ;   XREF to: 004d55b9 (CONDITIONAL_JUMP)  ; LAB_004d55b9
    JMP 0x004d5049                      ; 004d5603
        ;   XREF to: 004d5049 (UNCONDITIONAL_JUMP)  ; LAB_004d5049
    PUSH EBX                            ; 004d5608
        ;   Label: LAB_004d5608
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004d5609
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d560e
    PUSH ESI                            ; 004d5611
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004d5612
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EDX,dword ptr [EAX + 0x24]      ; 004d5617
    ADD ESP,0x4                         ; 004d561a
    MOV EAX,EDX                         ; 004d561d
    CMP EDX,0xc                         ; 004d561f
    JZ 0x004d5736                       ; 004d5622
        ;   XREF to: 004d5736 (CONDITIONAL_JUMP)  ; LAB_004d5736
    TEST EDX,EDX                        ; 004d5628
    JZ 0x004d5736                       ; 004d562a
        ;   XREF to: 004d5736 (CONDITIONAL_JUMP)  ; LAB_004d5736
    FLD float ptr [EBP + 0x92]          ; 004d5630
        ;   Label: LAB_004d5630
    FLD ST0                             ; 004d5636
    FMUL double ptr [0x0058947f]        ; 004d5638 | DOUBLE_0058947f
    FLD float ptr [EBX + 0x2424]        ; 004d563e
    FXCH                                ; 004d5644
    FSUBR ST0,ST1                       ; 004d5646
    LEA EDX,[EBX + 0x2420]              ; 004d5648
    FSTP ST1                            ; 004d564e
    FSTP float ptr [EBX + 0x2424]       ; 004d5650
    FLD float ptr [EDX]                 ; 004d5656
    FMUL ST1                            ; 004d5658
    FSTP float ptr [EBP + -0x46]        ; 004d565a
    FLD float ptr [EDX + 0x4]           ; 004d565d
    FMUL ST1                            ; 004d5660
    FSTP float ptr [EBP + -0x42]        ; 004d5662
    FMUL float ptr [EDX + 0x8]          ; 004d5665
    LEA ESI,[EBX + 0x2414]              ; 004d5668
    FLD float ptr [EBP + -0x46]         ; 004d566e
    FXCH                                ; 004d5671
    FSTP float ptr [EBP + -0x3e]        ; 004d5673
    FADD float ptr [ESI]                ; 004d5676
    FLD float ptr [EBP + -0x42]         ; 004d5678
    FXCH                                ; 004d567b
    FSTP float ptr [EBP + 0xffffff66]   ; 004d567d
    FADD float ptr [ESI + 0x4]          ; 004d5683
    FLD float ptr [EBP + -0x3e]         ; 004d5686
    FXCH                                ; 004d5689
    FSTP float ptr [EBP + 0xffffff6a]   ; 004d568b
    FADD float ptr [ESI + 0x8]          ; 004d5691
    FSTP float ptr [EBP + 0xffffff6e]   ; 004d5694
    CMP EAX,0x3                         ; 004d569a
    JNC 0x004d5745                      ; 004d569d
        ;   XREF to: 004d5745 (CONDITIONAL_JUMP)  ; LAB_004d5745
    CMP EAX,0x1                         ; 004d56a3
    JNC 0x004d56e2                      ; 004d56a6
        ;   XREF to: 004d56e2 (CONDITIONAL_JUMP)  ; LAB_004d56e2
    TEST EAX,EAX                        ; 004d56a8
    JZ 0x004d56e2                       ; 004d56aa
        ;   XREF to: 004d56e2 (CONDITIONAL_JUMP)  ; LAB_004d56e2
        ;   Label: LAB_004d56aa
    LEA EAX,[EBX + 0x23a4]              ; 004d56ac
        ;   Label: LAB_004d56ac
    FLD float ptr [EBP + 0xffffff66]    ; 004d56b2
    FADD float ptr [EAX]                ; 004d56b8
    FLD float ptr [EBP + 0xffffff6a]    ; 004d56ba
    FXCH                                ; 004d56c0
    FSTP float ptr [EBP + 0xffffff66]   ; 004d56c2
    FADD float ptr [EAX + 0x4]          ; 004d56c8
    FLD float ptr [EBP + 0xffffff6e]    ; 004d56cb
    FXCH                                ; 004d56d1
    FSTP float ptr [EBP + 0xffffff6a]   ; 004d56d3
    FADD float ptr [EAX + 0x8]          ; 004d56d9
    FSTP float ptr [EBP + 0xffffff6e]   ; 004d56dc
    LEA EAX,[EBP + 0xffffff66]          ; 004d56e2
        ;   Label: LAB_004d56e2
    PUSH EAX                            ; 004d56e8
    PUSH EBX                            ; 004d56e9
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004d56ea
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004d56ef
    LEA ESI,[EBX + 0x150]               ; 004d56f2
        ;   Label: LAB_004d56f2
    PUSH ESI                            ; 004d56f8
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004d56f9
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d56fe
    PUSH ESI                            ; 004d5701
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 004d5702
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d5707
    PUSH ESI                            ; 004d570a
    PUSH dword ptr [EBX + 0x240c]       ; 004d570b
    LEA EAX,[EBX + 0x30]                ; 004d5711
    PUSH dword ptr [EBP + 0x92]         ; 004d5714
    PUSH EAX                            ; 004d571a
    LEA EAX,[EBX + 0x20]                ; 004d571b
    PUSH EAX                            ; 004d571e
    ADD EBX,0xbdec                      ; 004d571f
    PUSH EBX                            ; 004d5725
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 004d5726
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00436e50(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 004d572b
    LEA ESP,[EBP + 0x7a]                ; 004d572e
    POP EBP                             ; 004d5731
    POP EDI                             ; 004d5732
    POP ESI                             ; 004d5733
    POP EBX                             ; 004d5734
    RET                                 ; 004d5735
    CMP dword ptr [EBX + 0xdc],0x0      ; 004d5736
        ;   Label: LAB_004d5736
    JNZ 0x004d5630                      ; 004d573d
        ;   XREF to: 004d5630 (CONDITIONAL_JUMP)  ; LAB_004d5630
    JMP 0x004d56f2                      ; 004d5743
        ;   XREF to: 004d56f2 (UNCONDITIONAL_JUMP)  ; LAB_004d56f2
    JBE 0x004d56e2                      ; 004d5745
        ;   XREF to: 004d56e2 (CONDITIONAL_JUMP)  ; LAB_004d56e2
        ;   Label: LAB_004d5745
    CMP EAX,0x11                        ; 004d5747
    JNC 0x004d5754                      ; 004d574a
        ;   XREF to: 004d5754 (CONDITIONAL_JUMP)  ; LAB_004d5754
    CMP EAX,0x10                        ; 004d574c
    JMP 0x004d56aa                      ; 004d574f
        ;   XREF to: 004d56aa (UNCONDITIONAL_JUMP)  ; LAB_004d56aa
    JBE 0x004d56e2                      ; 004d5754
        ;   XREF to: 004d56e2 (CONDITIONAL_JUMP)  ; LAB_004d56e2
        ;   Label: LAB_004d5754
    CMP EAX,0x14                        ; 004d5756
    JC 0x004d56ac                       ; 004d5759
        ;   XREF to: 004d56ac (CONDITIONAL_JUMP)  ; LAB_004d56ac
    JBE 0x004d56e2                      ; 004d575f
        ;   XREF to: 004d56e2 (CONDITIONAL_JUMP)  ; LAB_004d56e2
    CMP EAX,0x15                        ; 004d5761
    JMP 0x004d56aa                      ; 004d5764
        ;   XREF to: 004d56aa (UNCONDITIONAL_JUMP)  ; LAB_004d56aa

