; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tentacle_cpp_CTentacle_process_FUN_00543c50(CTentacle *this_ptr,float delta_time)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   TerminatedCString s_CHero_CNPC_0059653b
;   TerminatedCString s_CEnemy_CHero_CNPC_00596546
;   double DOUBLE_00596558 = 1.04719755116667
;   double DOUBLE_00596560 = 25
;   double DOUBLE_00596568 = 0.785398163375000
;   double DOUBLE_00596570 = 5
;   double DOUBLE_00596578 = 0.174532925194444
;   double DOUBLE_00596580 = 4
;   double DOUBLE_00596588 = 7
;   double DOUBLE_00596590 = 12
;   double DOUBLE_00596598 = 6
;   double DOUBLE_005965a0 = 16
;   undefined4 DAT_005a30f8
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042a150
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_process_FUN_004259f0
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
;   core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
;   core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00544760
;   core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_005444f0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543c50
        ;   Label: core_tentacle.cpp_CTentacle_process_FUN_00543c50
    PUSH ESI                            ; 00543c51
    PUSH EDI                            ; 00543c52
    PUSH EBP                            ; 00543c53
    MOV EBP,ESP                         ; 00543c54
    SUB ESP,0x24c                       ; 00543c56
    AND ESP,0xfffffff8                  ; 00543c5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00543c5f
    PUSH dword ptr [EBP + 0x18]         ; 00543c62
    PUSH EBX                            ; 00543c65
    CALL core_charactr.cpp_CCharacter_process_FUN_004259f0 ; 00543c66
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00543c6b
    TEST EAX,EAX                        ; 00543c6e
    JZ 0x00543dbb                       ; 00543c70
        ;   XREF to: 00543dbb (CONDITIONAL_JUMP)  ; LAB_00543dbb
    FLD float ptr [EBP + 0x18]          ; 00543c76
    LEA EAX,[EBX + 0x30]                ; 00543c79
    FMUL float ptr [EBX + 0xbc8c]       ; 00543c7c
    MOV dword ptr [ESP + 0x23c],EAX     ; 00543c82
    LEA EAX,[EBX + 0xbd64]              ; 00543c89
    MOV dword ptr [ESP + 0x238],EAX     ; 00543c8f
    LEA EAX,[EBX + 0x20]                ; 00543c96
    MOV dword ptr [ESP + 0x240],EAX     ; 00543c99
    LEA EAX,[EBX + 0x150]               ; 00543ca0
    FSTP float ptr [ESP + 0x8]          ; 00543ca6
    MOV dword ptr [ESP + 0x244],EAX     ; 00543caa
    FLD float ptr [ESP + 0x8]           ; 00543cb1
        ;   Label: LAB_00543cb1
    FLDZ                                ; 00543cb5
    FCOMPP                              ; 00543cb7
    FNSTSW AX                           ; 00543cb9
    SAHF                                ; 00543cbb
    JC 0x005440b3                       ; 00543cbc
        ;   XREF to: 005440b3 (CONDITIONAL_JUMP)  ; LAB_005440b3
    MOV EDX,dword ptr [ESP + 0x244]     ; 00543cc2
    PUSH EDX                            ; 00543cc9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00543cca
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00543ccf
    ADD ESP,0x4                         ; 00543cd2
    CMP EAX,0x2                         ; 00543cd5
    JNC 0x00544429                      ; 00543cd8
        ;   XREF to: 00544429 (CONDITIONAL_JUMP)  ; LAB_00544429
    TEST EAX,EAX                        ; 00543cde
    JNZ 0x00543d6f                      ; 00543ce0
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    FLD float ptr [EBX + 0xbd24]        ; 00543ce6
    FLDZ                                ; 00543cec
    MOV dword ptr [EBX + 0xbd28],EAX    ; 00543cee
    FCOMPP                              ; 00543cf4
    FNSTSW AX                           ; 00543cf6
    SAHF                                ; 00543cf8
    JNC 0x00543d0a                      ; 00543cf9
        ;   XREF to: 00543d0a (CONDITIONAL_JUMP)  ; LAB_00543d0a
    FLD float ptr [EBX + 0xbd24]        ; 00543cfb
    FSUB float ptr [EBP + 0x18]         ; 00543d01
    FSTP float ptr [EBX + 0xbd24]       ; 00543d04
    FLD float ptr [EBX + 0xbd24]        ; 00543d0a
        ;   Label: LAB_00543d0a
    FLDZ                                ; 00543d10
    FCOMPP                              ; 00543d12
    FNSTSW AX                           ; 00543d14
    SAHF                                ; 00543d16
    JC 0x00543d6f                       ; 00543d17
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    MOV EAX,dword ptr [EBX + 0xbd2c]    ; 00543d19
    LEA ESI,[EBX + 0x150]               ; 00543d1f
    TEST EAX,EAX                        ; 00543d25
    JZ 0x005440e1                       ; 00543d27
        ;   XREF to: 005440e1 (CONDITIONAL_JUMP)  ; LAB_005440e1
    PUSH 0x59653b                       ; 00543d2d | = "CHero CNPC"
    PUSH EBX                            ; 00543d32
    CALL core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_005444f0 ; 00543d33
        ;   XREF to: 005444f0 (UNCONDITIONAL_CALL)  ; int core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_005444f0(CTentacle * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 00543d38
    TEST EAX,EAX                        ; 00543d3b
    JZ 0x00543d6f                       ; 00543d3d
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    PUSH 0x1                            ; 00543d3f
    PUSH 0x2                            ; 00543d41
    PUSH ESI                            ; 00543d43
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00543d44
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00543d49
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 00543d4c
    PUSH EDX                            ; 00543d52
    MOV dword ptr [EBX + 0xbd24],0x0    ; 00543d53
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0 ; 00543d5d
        ;   XREF to: 004b0dc0 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0(CGrave * this_ptr)
    ADD ESP,0x4                         ; 00543d62
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 00543d65
    FLD float ptr [EBP + 0x18]          ; 00543d6f
        ;   Label: LAB_00543d6f
    FDIV float ptr [0x005a30f8]         ; 00543d72 | DAT_005a30f8
    FADD float ptr [EBX + 0xbd30]       ; 00543d78
    FST float ptr [EBX + 0xbd30]        ; 00543d7e
    FLD1                                ; 00543d84
    FCOMPP                              ; 00543d86
    FNSTSW AX                           ; 00543d88
    SAHF                                ; 00543d8a
    JNC 0x00543d97                      ; 00543d8b
        ;   XREF to: 00543d97 (CONDITIONAL_JUMP)  ; LAB_00543d97
    MOV dword ptr [EBX + 0xbd30],0x3f800000 ; 00543d8d
    PUSH EBX                            ; 00543d97
        ;   Label: LAB_00543d97
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00543d98
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00543d9d
    LEA EAX,[EBX + 0x150]               ; 00543da0
    PUSH EAX                            ; 00543da6
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00543da7
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00543dac
    PUSH dword ptr [EBP + 0x18]         ; 00543daf
    PUSH EBX                            ; 00543db2
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042a150 ; 00543db3
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00543db8
    MOV ESP,EBP                         ; 00543dbb
        ;   Label: LAB_00543dbb
    POP EBP                             ; 00543dbd
    POP EDI                             ; 00543dbe
    POP ESI                             ; 00543dbf
    POP EBX                             ; 00543dc0
    RET                                 ; 00543dc1
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 00543dc2
        ;   Label: LAB_00543dc2
    TEST EDI,EDI                        ; 00543dc8
    JZ 0x00543cb1                       ; 00543dca
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    PUSH EDI                            ; 00543dd0
    MOV ESI,dword ptr [EDI + 0x14c]     ; 00543dd1
    CALL dword ptr [ESI + 0xec]         ; 00543dd7
    ADD ESP,0x4                         ; 00543ddd
    TEST EAX,EAX                        ; 00543de0
    JNZ 0x00543cb1                      ; 00543de2
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    MOV EAX,dword ptr [ESP + 0x244]     ; 00543de8
    PUSH EAX                            ; 00543def
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 00543df0
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00543df5
    PUSH EBX                            ; 00543df8
    LEA ESI,[ESP + 0xa4]                ; 00543df9
    LEA EDI,[ESP + 0x74]                ; 00543e00
    CALL core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00544760 ; 00543e04
        ;   XREF to: 00544760 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00544760(CTentacle * this_ptr, CMatrix3x4f * out_matrix)
    ADD ESP,0x4                         ; 00543e09
    LEA EAX,[ESP + 0x1cc]               ; 00543e0c
    MOV ECX,0xc                         ; 00543e13
    PUSH EAX                            ; 00543e18
    LEA EAX,[ESP + 0x74]                ; 00543e19
    LEA ESI,[ESP + 0xa4]                ; 00543e1d
    PUSH EAX                            ; 00543e24
    MOVSD.REP ES:EDI,ESI                ; 00543e25
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 00543e27
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 00543e2c
    PUSH EAX                            ; 00543e2f
    LEA EAX,[ESP + 0x1c4]               ; 00543e30
    PUSH EAX                            ; 00543e37
    PUSH EBX                            ; 00543e38
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00543e39
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00543e3e
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00543e41
    FLD float ptr [ESP + 0x1c0]         ; 00543e47
    FSUB float ptr [EAX + 0x20]         ; 00543e4e
    FLD float ptr [ESP + 0x1c4]         ; 00543e51
    FXCH                                ; 00543e58
    FSTP float ptr [ESP + 0x214]        ; 00543e5a
    FSUB float ptr [EAX + 0x24]         ; 00543e61
    FLD float ptr [ESP + 0x1c8]         ; 00543e64
    FXCH                                ; 00543e6b
    FST float ptr [ESP + 0x218]         ; 00543e6d
    FXCH                                ; 00543e74
    FSUB float ptr [EAX + 0x28]         ; 00543e76
    FXCH                                ; 00543e79
    FABS                                ; 00543e7b
    FXCH                                ; 00543e7d
    FSTP float ptr [ESP + 0x21c]        ; 00543e7f
    FCOMP double ptr [0x00596598]       ; 00543e86 | DOUBLE_00596598
    FNSTSW AX                           ; 00543e8c
    SAHF                                ; 00543e8e
    JA 0x00543cb1                       ; 00543e8f
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    FLD float ptr [ESP + 0x21c]         ; 00543e95
    FMUL ST0                            ; 00543e9c
    FLD float ptr [ESP + 0x214]         ; 00543e9e
    FMUL ST0                            ; 00543ea5
    FADDP                               ; 00543ea7
    FCOMP double ptr [0x005965a0]       ; 00543ea9 | DOUBLE_005965a0
    FNSTSW AX                           ; 00543eaf
    SAHF                                ; 00543eb1
    JA 0x00543cb1                       ; 00543eb2
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    PUSH 0x1                            ; 00543eb8
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00543eba
    PUSH EBX                            ; 00543ec0
    MOV ESI,dword ptr [EAX + 0x14c]     ; 00543ec1
    PUSH EAX                            ; 00543ec7
    CALL dword ptr [ESI + 0xe4]         ; 00543ec8
    ADD ESP,0xc                         ; 00543ece
    TEST EAX,EAX                        ; 00543ed1
    JZ 0x00543cb1                       ; 00543ed3
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00543ed9
    LEA ESI,[EAX + 0x30]                ; 00543edf
    PUSH ESI                            ; 00543ee2
    ADD EAX,0x20                        ; 00543ee3
    PUSH EAX                            ; 00543ee6
    LEA EAX,[ESP + 0x108]               ; 00543ee7
    PUSH EAX                            ; 00543eee
    MOV dword ptr [EBX + 0xbd30],0x0    ; 00543eef
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 00543ef9
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00543efe
    MOV EDX,dword ptr [ESP + 0x23c]     ; 00543f01
    PUSH EDX                            ; 00543f08
    MOV ECX,dword ptr [ESP + 0x244]     ; 00543f09
    PUSH ECX                            ; 00543f10
    LEA EAX,[ESP + 0xd8]                ; 00543f11
    PUSH EAX                            ; 00543f18
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 00543f19
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00543f1e
    LEA EAX,[ESP + 0x70]                ; 00543f21
    PUSH EAX                            ; 00543f25
    LEA ESI,[ESP + 0x44]                ; 00543f26
    LEA EDI,[ESP + 0x14]                ; 00543f2a
    CALL core_xform.cpp_inverse_FUN_0055bd00 ; 00543f2e
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_0055bd00(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 00543f33
    LEA EAX,[ESP + 0x10]                ; 00543f36
    MOV ECX,0xc                         ; 00543f3a
    PUSH EAX                            ; 00543f3f
    LEA EAX,[ESP + 0xd4]                ; 00543f40
    LEA ESI,[ESP + 0x44]                ; 00543f47
    PUSH EAX                            ; 00543f4b
    LEA EAX,[ESP + 0x108]               ; 00543f4c
    MOVSD.REP ES:EDI,ESI                ; 00543f53
    PUSH EAX                            ; 00543f55
    LEA ESI,[ESP + 0x19c]               ; 00543f56
    LEA EDI,[ESP + 0x13c]               ; 00543f5d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00543f64
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00543f69
    LEA ESI,[ESP + 0x19c]               ; 00543f6e
    ADD ESP,0x8                         ; 00543f75
    LEA EAX,[ESP + 0x134]               ; 00543f78
    MOVSD.REP ES:EDI,ESI                ; 00543f7f
    PUSH EAX                            ; 00543f81
    LEA ESI,[ESP + 0x168]               ; 00543f82
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00543f89
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00543f8e
    LEA ESI,[ESP + 0x168]               ; 00543f93
    LEA EDI,[EBX + 0xbd34]              ; 00543f9a
    ADD ESP,0x8                         ; 00543fa0
    MOVSD.REP ES:EDI,ESI                ; 00543fa3
    MOV ECX,0xc                         ; 00543fa5
    LEA EDI,[EBX + 0xbd64]              ; 00543faa
    LEA ESI,[EBX + 0xbd34]              ; 00543fb0
    MOVSD.REP ES:EDI,ESI                ; 00543fb6
    MOV ESI,dword ptr [ESP + 0x238]     ; 00543fb8
    PUSH ESI                            ; 00543fbf
    CALL core_xform.cpp_clearTranslation_FUN_0055ae60 ; 00543fc0
        ;   XREF to: 0055ae60 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clearTranslation_FUN_0055ae60(CMatrix3x4f * matrix)
    ADD ESP,0x4                         ; 00543fc5
    XOR ESI,ESI                         ; 00543fc8
    PUSH 0x40e00000                     ; 00543fca
        ;   Label: LAB_00543fca
    PUSH 0xc0e00000                     ; 00543fcf
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00543fd4
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x250],EAX     ; 00543fd9
    FLD float ptr [ESP + 0x250]         ; 00543fe0
    ADD ESP,0x8                         ; 00543fe7
    PUSH 0x40e00000                     ; 00543fea
    PUSH 0xc0e00000                     ; 00543fef
    FSTP float ptr [ESP + 0x1ec]        ; 00543ff4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00543ffb
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x250],EAX     ; 00544000
    FLD float ptr [ESP + 0x250]         ; 00544007
    ADD ESP,0x8                         ; 0054400e
    PUSH 0x41700000                     ; 00544011
    PUSH 0xbf800000                     ; 00544016
    FSTP float ptr [ESP + 0x1f4]        ; 0054401b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00544022
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x250],EAX     ; 00544027
    FLD float ptr [ESP + 0x250]         ; 0054402e
    ADD ESP,0x8                         ; 00544035
    FSTP float ptr [ESP + 0x1e8]        ; 00544038
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0054403f
    MOV EDI,dword ptr [EAX + 0x2608]    ; 00544045
    PUSH EDI                            ; 0054404b
    LEA EAX,[ESP + 0x1e8]               ; 0054404c
    PUSH EAX                            ; 00544053
    LEA EAX,[ESP + 0x1c8]               ; 00544054
    PUSH EAX                            ; 0054405b
    MOV EAX,[0x005b96c4]                ; 0054405c | g_CGore_PTR_005b96c4
    PUSH EAX                            ; 00544061
    INC ESI                             ; 00544062
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0 ; 00544063
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 00544068
    CMP ESI,0x46                        ; 0054406b
    JGE 0x00543cb1                      ; 0054406e
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    JMP 0x00543fca                      ; 00544074
        ;   XREF to: 00543fca (UNCONDITIONAL_JUMP)  ; LAB_00543fca
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00544079
        ;   Label: LAB_00544079
    TEST ESI,ESI                        ; 0054407f
    JZ 0x00543cb1                       ; 00544081
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    MOV EAX,ESI                         ; 00544087
    PUSH EAX                            ; 00544089
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0054408a
    CALL dword ptr [ESI + 0xec]         ; 00544090
    ADD ESP,0x4                         ; 00544096
    CMP EAX,EBX                         ; 00544099
    JNZ 0x00543cb1                      ; 0054409b
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 005440a1
    MOV dword ptr [EAX + 0x70],0x2      ; 005440a7
    JMP 0x00543cb1                      ; 005440ae
        ;   XREF to: 00543cb1 (UNCONDITIONAL_JUMP)  ; LAB_00543cb1
    LEA EAX,[ESP + 0x8]                 ; 005440b3
        ;   Label: LAB_005440b3
    PUSH EAX                            ; 005440b7
    MOV ECX,dword ptr [ESP + 0x248]     ; 005440b8
    PUSH ECX                            ; 005440bf
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 005440c0
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005440c5
    CMP EAX,0x64                        ; 005440c8
    JC 0x00543cb1                       ; 005440cb
        ;   XREF to: 00543cb1 (CONDITIONAL_JUMP)  ; LAB_00543cb1
    JBE 0x00543dc2                      ; 005440d1
        ;   XREF to: 00543dc2 (CONDITIONAL_JUMP)  ; LAB_00543dc2
    CMP EAX,0x65                        ; 005440d7
    JZ 0x00544079                       ; 005440da
        ;   XREF to: 00544079 (CONDITIONAL_JUMP)  ; LAB_00544079
    JMP 0x00543cb1                      ; 005440dc
        ;   XREF to: 00543cb1 (UNCONDITIONAL_JUMP)  ; LAB_00543cb1
    PUSH 0x596546                       ; 005440e1 | = "CEnemy CHero CNPC"
        ;   Label: LAB_005440e1
    PUSH EBX                            ; 005440e6
    CALL core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_005444f0 ; 005440e7
        ;   XREF to: 005444f0 (UNCONDITIONAL_CALL)  ; int core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_005444f0(CTentacle * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 005440ec
    TEST EAX,EAX                        ; 005440ef
    JZ 0x00543d6f                       ; 005440f1
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    PUSH 0x1                            ; 005440f7
    PUSH 0x2                            ; 005440f9
    PUSH ESI                            ; 005440fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005440fc
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00544101
    MOV dword ptr [EBX + 0xbd24],0x0    ; 00544104
    JMP 0x00543d6f                      ; 0054410e
        ;   XREF to: 00543d6f (UNCONDITIONAL_JUMP)  ; LAB_00543d6f
    FLD float ptr [EBX + 0xbd28]        ; 00544113
        ;   Label: LAB_00544113
    FADD float ptr [EBP + 0x18]         ; 00544119
    FST float ptr [EBX + 0xbd28]        ; 0054411c
    FCOMP double ptr [0x00596560]       ; 00544122 | DOUBLE_00596560
    FNSTSW AX                           ; 00544128
    SAHF                                ; 0054412a
    JC 0x00544150                       ; 0054412b
        ;   XREF to: 00544150 (CONDITIONAL_JUMP)  ; LAB_00544150
    PUSH 0x1                            ; 0054412d
    PUSH 0x0                            ; 0054412f
    MOV EDI,dword ptr [ESP + 0x24c]     ; 00544131
    PUSH EDI                            ; 00544138
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00544139
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054413e
    MOV dword ptr [EBX + 0xbd24],0x41c80000 ; 00544141
    JMP 0x00543d6f                      ; 0054414b
        ;   XREF to: 00543d6f (UNCONDITIONAL_JUMP)  ; LAB_00543d6f
    PUSH dword ptr [EBP + 0x18]         ; 00544150
        ;   Label: LAB_00544150
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00544153
    PUSH EBX                            ; 00544159
    CALL dword ptr [EAX + 0x13c]        ; 0054415a
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00544160
    ADD ESP,0x8                         ; 00544166
    TEST ESI,ESI                        ; 00544169
    JZ 0x00543d6f                       ; 0054416b
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    MOV EAX,ESI                         ; 00544171
    MOV EDX,dword ptr [ESP + 0x240]     ; 00544173
    FLD float ptr [EAX + 0x20]          ; 0054417a
    FSUB float ptr [EDX]                ; 0054417d
    FSTP float ptr [ESP + 0x1d8]        ; 0054417f
    FLD float ptr [EAX + 0x24]          ; 00544186
    FSUB float ptr [EDX + 0x4]          ; 00544189
    FSTP float ptr [ESP + 0x1dc]        ; 0054418c
    FLD float ptr [EAX + 0x28]          ; 00544193
    LEA EAX,[ESP + 0x1d8]               ; 00544196
    PUSH EAX                            ; 0054419d
    LEA EAX,[ESP + 0x1f4]               ; 0054419e
    FSUB float ptr [EDX + 0x8]          ; 005441a5
    PUSH EAX                            ; 005441a8
    FSTP float ptr [ESP + 0x1e8]        ; 005441a9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 005441b0
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 005441b5
    ADD ESP,0x8                         ; 005441b8
    FSUB float ptr [EBX + 0x34]         ; 005441bb
    SUB ESP,0x4                         ; 005441be
    FSTP float ptr [ESP]                ; 005441c1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 005441c4
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x24c],EAX     ; 005441c9
    FLD float ptr [ESP + 0x24c]         ; 005441d0
    ADD ESP,0x4                         ; 005441d7
    FLD float ptr [EBP + 0x18]          ; 005441da
    FMUL double ptr [0x00596568]        ; 005441dd | DOUBLE_00596568
    FXCH                                ; 005441e3
    FSTP float ptr [ESP + 0xc]          ; 005441e5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005441e9
    FSTP float ptr [ESP + 0x234]        ; 005441ed
    MOV dword ptr [EBX + 0x2410],EAX    ; 005441f4
    FLD float ptr [EBX + 0x2410]        ; 005441fa
    FLD float ptr [ESP + 0x234]         ; 00544200
    FCHS                                ; 00544207
    FSTP float ptr [ESP + 0x228]        ; 00544209
    FCOMP float ptr [ESP + 0x228]       ; 00544210
    FNSTSW AX                           ; 00544217
    SAHF                                ; 00544219
    JC 0x005442f8                       ; 0054421a
        ;   XREF to: 005442f8 (CONDITIONAL_JUMP)  ; LAB_005442f8
    FLD float ptr [EBX + 0x2410]        ; 00544220
        ;   Label: LAB_00544220
    FCOMP float ptr [ESP + 0x234]       ; 00544226
    FNSTSW AX                           ; 0054422d
    SAHF                                ; 0054422f
    JBE 0x0054423f                      ; 00544230
        ;   XREF to: 0054423f (CONDITIONAL_JUMP)  ; LAB_0054423f
    MOV EAX,dword ptr [ESP + 0x234]     ; 00544232
    MOV dword ptr [EBX + 0x2410],EAX    ; 00544239
    FLD float ptr [EBX + 0xbd28]        ; 0054423f
        ;   Label: LAB_0054423f
    FCOMP double ptr [0x00596570]       ; 00544245 | DOUBLE_00596570
    FNSTSW AX                           ; 0054424b
    SAHF                                ; 0054424d
    JBE 0x00543d6f                      ; 0054424e
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 00544254
    LEA EAX,[EBX + 0x20]                ; 0054425a
    LEA ESI,[EDX + 0x20]                ; 0054425d
    FLD float ptr [EAX]                 ; 00544260
    FSUB float ptr [ESI]                ; 00544262
    FMUL ST0                            ; 00544264
    FLD float ptr [EAX + 0x8]           ; 00544266
    FSUB float ptr [ESI + 0x8]          ; 00544269
    FMUL ST0                            ; 0054426c
    FADDP                               ; 0054426e
    FSQRT                               ; 00544270
    FSTP float ptr [ESP + 0x4]          ; 00544272
    MOV EAX,dword ptr [ESP + 0x4]       ; 00544276
    FLD float ptr [ESP + 0xc]           ; 0054427a
    MOV dword ptr [ESP],EAX             ; 0054427e
    FCOMP double ptr [0x00596578]       ; 00544281 | DOUBLE_00596578
    FNSTSW AX                           ; 00544287
    SAHF                                ; 00544289
    JNC 0x00543d6f                      ; 0054428a
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    FLD float ptr [EBX + 0x24]          ; 00544290
    FSUB float ptr [EDX + 0x24]         ; 00544293
    FABS                                ; 00544296
    FCOMP double ptr [0x00596580]       ; 00544298 | DOUBLE_00596580
    FNSTSW AX                           ; 0054429e
    SAHF                                ; 005442a0
    JNC 0x00543d6f                      ; 005442a1
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    FLD float ptr [ESP + 0x4]           ; 005442a7
    FCOMP double ptr [0x00596588]       ; 005442ab | DOUBLE_00596588
    FNSTSW AX                           ; 005442b1
    SAHF                                ; 005442b3
    JBE 0x0054430a                      ; 005442b4
        ;   XREF to: 0054430a (CONDITIONAL_JUMP)  ; LAB_0054430a
    MOV EDX,0x1                         ; 005442b6
    FLD float ptr [ESP]                 ; 005442bb
        ;   Label: LAB_005442bb
    FCOMP double ptr [0x00596590]       ; 005442be | DOUBLE_00596590
    FNSTSW AX                           ; 005442c4
    SAHF                                ; 005442c6
    JNC 0x0054430e                      ; 005442c7
        ;   XREF to: 0054430e (CONDITIONAL_JUMP)  ; LAB_0054430e
    MOV EAX,0x1                         ; 005442c9
    TEST EDX,EAX                        ; 005442ce
        ;   Label: LAB_005442ce
    JZ 0x00543d6f                       ; 005442d0
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    PUSH 0x1                            ; 005442d6
    PUSH 0x6                            ; 005442d8
    LEA EAX,[EBX + 0x150]               ; 005442da
    PUSH EAX                            ; 005442e0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005442e1
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005442e6
    MOV dword ptr [EBX + 0xbd24],0x41c80000 ; 005442e9
    JMP 0x00543d6f                      ; 005442f3
        ;   XREF to: 00543d6f (UNCONDITIONAL_JUMP)  ; LAB_00543d6f
    MOV EAX,dword ptr [ESP + 0x228]     ; 005442f8
        ;   Label: LAB_005442f8
    MOV dword ptr [EBX + 0x2410],EAX    ; 005442ff
    JMP 0x00544220                      ; 00544305
        ;   XREF to: 00544220 (UNCONDITIONAL_JUMP)  ; LAB_00544220
    XOR EDX,EDX                         ; 0054430a
        ;   Label: LAB_0054430a
    JMP 0x005442bb                      ; 0054430c
        ;   XREF to: 005442bb (UNCONDITIONAL_JUMP)  ; LAB_005442bb
    XOR EAX,EAX                         ; 0054430e
        ;   Label: LAB_0054430e
    JMP 0x005442ce                      ; 00544310
        ;   XREF to: 005442ce (UNCONDITIONAL_JUMP)  ; LAB_005442ce
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 00544312
        ;   Label: LAB_00544312
    TEST ECX,ECX                        ; 00544318
    JZ 0x00543d6f                       ; 0054431a
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    PUSH ECX                            ; 00544320
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00544321
    CALL dword ptr [EDX + 0x104]        ; 00544327
    ADD ESP,0x4                         ; 0054432d
    TEST EAX,EAX                        ; 00544330
    JG 0x00543d6f                       ; 00544332
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00544338
    PUSH EAX                            ; 0054433e
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0054433f
    CALL dword ptr [EDX + 0xec]         ; 00544345
    ADD ESP,0x4                         ; 0054434b
    TEST EAX,EAX                        ; 0054434e
    JNZ 0x00543d6f                      ; 00544350
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00544356
    MOV EDX,dword ptr [ESP + 0x240]     ; 0054435c
    FLD float ptr [EAX + 0x20]          ; 00544363
    FSUB float ptr [EDX]                ; 00544366
    FSTP float ptr [ESP + 0x1fc]        ; 00544368
    FLD float ptr [EAX + 0x24]          ; 0054436f
    FSUB float ptr [EDX + 0x4]          ; 00544372
    FSTP float ptr [ESP + 0x200]        ; 00544375
    FLD float ptr [EAX + 0x28]          ; 0054437c
    LEA EAX,[ESP + 0x1fc]               ; 0054437f
    PUSH EAX                            ; 00544386
    LEA EAX,[ESP + 0x20c]               ; 00544387
    FSUB float ptr [EDX + 0x8]          ; 0054438e
    PUSH EAX                            ; 00544391
    FSTP float ptr [ESP + 0x20c]        ; 00544392
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00544399
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 0054439e
    ADD ESP,0x8                         ; 005443a1
    FSUB float ptr [EBX + 0x34]         ; 005443a4
    SUB ESP,0x4                         ; 005443a7
    FSTP float ptr [ESP]                ; 005443aa
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 005443ad
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x24c],EAX     ; 005443b2
    FLD float ptr [ESP + 0x24c]         ; 005443b9
    ADD ESP,0x4                         ; 005443c0
    FLD float ptr [EBP + 0x18]          ; 005443c3
    FMUL double ptr [0x00596558]        ; 005443c6 | DOUBLE_00596558
    FXCH                                ; 005443cc
    FST float ptr [EBX + 0x2410]        ; 005443ce
    FXCH                                ; 005443d4
    FST float ptr [ESP + 0x230]         ; 005443d6
    FCHS                                ; 005443dd
    FSTP float ptr [ESP + 0x22c]        ; 005443df
    FCOMP float ptr [ESP + 0x22c]       ; 005443e6
    FNSTSW AX                           ; 005443ed
    SAHF                                ; 005443ef
    JC 0x0054441a                       ; 005443f0
        ;   XREF to: 0054441a (CONDITIONAL_JUMP)  ; LAB_0054441a
    FLD float ptr [EBX + 0x2410]        ; 005443f2
        ;   Label: LAB_005443f2
    FCOMP float ptr [ESP + 0x230]       ; 005443f8
    FNSTSW AX                           ; 005443ff
    SAHF                                ; 00544401
    JBE 0x00543d6f                      ; 00544402
        ;   XREF to: 00543d6f (CONDITIONAL_JUMP)  ; LAB_00543d6f
    MOV EAX,dword ptr [ESP + 0x230]     ; 00544408
    MOV dword ptr [EBX + 0x2410],EAX    ; 0054440f
    JMP 0x00543d6f                      ; 00544415
        ;   XREF to: 00543d6f (UNCONDITIONAL_JUMP)  ; LAB_00543d6f
    MOV EAX,dword ptr [ESP + 0x22c]     ; 0054441a
        ;   Label: LAB_0054441a
    MOV dword ptr [EBX + 0x2410],EAX    ; 00544421
    JMP 0x005443f2                      ; 00544427
        ;   XREF to: 005443f2 (UNCONDITIONAL_JUMP)  ; LAB_005443f2
    JBE 0x00544113                      ; 00544429
        ;   XREF to: 00544113 (CONDITIONAL_JUMP)  ; LAB_00544113
        ;   Label: LAB_00544429
    CMP EAX,0x6                         ; 0054442f
    JZ 0x00544312                       ; 00544432
        ;   XREF to: 00544312 (CONDITIONAL_JUMP)  ; LAB_00544312
    JMP 0x00543d6f                      ; 00544438
        ;   XREF to: 00543d6f (UNCONDITIONAL_JUMP)  ; LAB_00543d6f

