; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)
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
;   TerminatedCString s_CHero_CNPC_00654ddc
;   TerminatedCString s_CEnemy_CHero_CNPC_00654de7
;   double DOUBLE_00654dfc = 1.04719755116667
;   double DOUBLE_00654e04 = 25
;   double DOUBLE_00654e0c = 0.785398163375000
;   double DOUBLE_00654e14 = 5
;   double DOUBLE_00654e1c = 0.174532925194444
;   double DOUBLE_00654e24 = 4
;   double DOUBLE_00654e2c = 7
;   double DOUBLE_00654e34 = 12
;   double DOUBLE_00654e3c = 6
;   double DOUBLE_00654e44 = 16
;   float FLOAT_00664468 = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_grave.cpp_FUN_004ee790
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;   core_tentacle.cpp_FUN_005db900
;   core_tentacle.cpp_FUN_005dbb70
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005db050
        ;   Label: core_tentacle.cpp_CTentacle_process_FUN_005db050
    PUSH ESI                            ; 005db051
    PUSH EDI                            ; 005db052
    PUSH EBP                            ; 005db053
    MOV EBP,ESP                         ; 005db054
    SUB ESP,0x24c                       ; 005db056
    AND ESP,0xfffffff8                  ; 005db05c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005db05f
    PUSH dword ptr [EBP + 0x18]         ; 005db062
    PUSH EBX                            ; 005db065
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 005db066
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005db06b
    TEST EAX,EAX                        ; 005db06e
    JZ 0x005db1bb                       ; 005db070
        ;   XREF to: 005db1bb (CONDITIONAL_JUMP)  ; LAB_005db1bb
    FLD float ptr [EBP + 0x18]          ; 005db076
    LEA EAX,[EBX + 0x30]                ; 005db079
    FMUL float ptr [EBX + 0xbe24]       ; 005db07c
    MOV dword ptr [ESP + 0x23c],EAX     ; 005db082
    LEA EAX,[EBX + 0xbefc]              ; 005db089
    MOV dword ptr [ESP + 0x238],EAX     ; 005db08f
    LEA EAX,[EBX + 0x20]                ; 005db096
    MOV dword ptr [ESP + 0x240],EAX     ; 005db099
    LEA EAX,[EBX + 0x158]               ; 005db0a0
    FSTP float ptr [ESP + 0x8]          ; 005db0a6
    MOV dword ptr [ESP + 0x244],EAX     ; 005db0aa
    FLD float ptr [ESP + 0x8]           ; 005db0b1
        ;   Label: LAB_005db0b1
    FLDZ                                ; 005db0b5
    FCOMPP                              ; 005db0b7
    FNSTSW AX                           ; 005db0b9
    SAHF                                ; 005db0bb
    JC 0x005db4b3                       ; 005db0bc
        ;   XREF to: 005db4b3 (CONDITIONAL_JUMP)  ; LAB_005db4b3
    MOV EDX,dword ptr [ESP + 0x244]     ; 005db0c2
    PUSH EDX                            ; 005db0c9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005db0ca
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005db0cf
    ADD ESP,0x4                         ; 005db0d2
    CMP EAX,0x2                         ; 005db0d5
    JNC 0x005db829                      ; 005db0d8
        ;   XREF to: 005db829 (CONDITIONAL_JUMP)  ; LAB_005db829
    TEST EAX,EAX                        ; 005db0de
    JNZ 0x005db16f                      ; 005db0e0
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    FLD float ptr [EBX + 0xbebc]        ; 005db0e6
    FLDZ                                ; 005db0ec
    MOV dword ptr [EBX + 0xbec0],EAX    ; 005db0ee
    FCOMPP                              ; 005db0f4
    FNSTSW AX                           ; 005db0f6
    SAHF                                ; 005db0f8
    JNC 0x005db10a                      ; 005db0f9
        ;   XREF to: 005db10a (CONDITIONAL_JUMP)  ; LAB_005db10a
    FLD float ptr [EBX + 0xbebc]        ; 005db0fb
    FSUB float ptr [EBP + 0x18]         ; 005db101
    FSTP float ptr [EBX + 0xbebc]       ; 005db104
    FLD float ptr [EBX + 0xbebc]        ; 005db10a
        ;   Label: LAB_005db10a
    FLDZ                                ; 005db110
    FCOMPP                              ; 005db112
    FNSTSW AX                           ; 005db114
    SAHF                                ; 005db116
    JC 0x005db16f                       ; 005db117
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    MOV EAX,dword ptr [EBX + 0xbec4]    ; 005db119
    LEA ESI,[EBX + 0x158]               ; 005db11f
    TEST EAX,EAX                        ; 005db125
    JZ 0x005db4e1                       ; 005db127
        ;   XREF to: 005db4e1 (CONDITIONAL_JUMP)  ; LAB_005db4e1
    PUSH 0x654ddc                       ; 005db12d | = "CHero CNPC"
    PUSH EBX                            ; 005db132
    CALL core_tentacle.cpp_FUN_005db900 ; 005db133
        ;   XREF to: 005db900 (UNCONDITIONAL_CALL)  ; undefined core_tentacle.cpp_FUN_005db900()
    ADD ESP,0x8                         ; 005db138
    TEST EAX,EAX                        ; 005db13b
    JZ 0x005db16f                       ; 005db13d
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    PUSH 0x1                            ; 005db13f
    PUSH 0x2                            ; 005db141
    PUSH ESI                            ; 005db143
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005db144
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005db149
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 005db14c
    PUSH EDX                            ; 005db152
    MOV dword ptr [EBX + 0xbebc],0x0    ; 005db153
    CALL core_grave.cpp_FUN_004ee790    ; 005db15d
        ;   XREF to: 004ee790 (UNCONDITIONAL_CALL)  ; undefined core_grave.cpp_FUN_004ee790()
    ADD ESP,0x4                         ; 005db162
    MOV dword ptr [EBX + 0xbec4],0x0    ; 005db165
    FLD float ptr [EBP + 0x18]          ; 005db16f
        ;   Label: LAB_005db16f
    FDIV float ptr [0x00664468]         ; 005db172 | FLOAT_00664468
    FADD float ptr [EBX + 0xbec8]       ; 005db178
    FST float ptr [EBX + 0xbec8]        ; 005db17e
    FLD1                                ; 005db184
    FCOMPP                              ; 005db186
    FNSTSW AX                           ; 005db188
    SAHF                                ; 005db18a
    JNC 0x005db197                      ; 005db18b
        ;   XREF to: 005db197 (CONDITIONAL_JUMP)  ; LAB_005db197
    MOV dword ptr [EBX + 0xbec8],0x3f800000 ; 005db18d
    PUSH EBX                            ; 005db197
        ;   Label: LAB_005db197
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 005db198
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005db19d
    LEA EAX,[EBX + 0x158]               ; 005db1a0
    PUSH EAX                            ; 005db1a6
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005db1a7
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005db1ac
    PUSH dword ptr [EBP + 0x18]         ; 005db1af
    PUSH EBX                            ; 005db1b2
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005db1b3
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005db1b8
    MOV ESP,EBP                         ; 005db1bb
        ;   Label: LAB_005db1bb
    POP EBP                             ; 005db1bd
    POP EDI                             ; 005db1be
    POP ESI                             ; 005db1bf
    POP EBX                             ; 005db1c0
    RET                                 ; 005db1c1
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 005db1c2
        ;   Label: LAB_005db1c2
    TEST EDI,EDI                        ; 005db1c8
    JZ 0x005db0b1                       ; 005db1ca
        ;   XREF to: 005db0b1 (CONDITIONAL_JUMP)  ; LAB_005db0b1
    PUSH EDI                            ; 005db1d0
    MOV ESI,dword ptr [EDI + 0x154]     ; 005db1d1
    CALL dword ptr [ESI + 0x108]        ; 005db1d7
    ADD ESP,0x4                         ; 005db1dd
    TEST EAX,EAX                        ; 005db1e0
    JNZ 0x005db0b1                      ; 005db1e2
        ;   XREF to: 005db0b1 (CONDITIONAL_JUMP)  ; LAB_005db0b1
    MOV EAX,dword ptr [ESP + 0x244]     ; 005db1e8
    PUSH EAX                            ; 005db1ef
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 005db1f0
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005db1f5
    PUSH EBX                            ; 005db1f8
    LEA ESI,[ESP + 0xa4]                ; 005db1f9
    LEA EDI,[ESP + 0x74]                ; 005db200
    CALL core_tentacle.cpp_FUN_005dbb70 ; 005db204
        ;   XREF to: 005dbb70 (UNCONDITIONAL_CALL)  ; undefined core_tentacle.cpp_FUN_005dbb70()
    ADD ESP,0x4                         ; 005db209
    LEA EAX,[ESP + 0x1cc]               ; 005db20c
    MOV ECX,0xc                         ; 005db213
    PUSH EAX                            ; 005db218
    LEA EAX,[ESP + 0x74]                ; 005db219
    LEA ESI,[ESP + 0xa4]                ; 005db21d
    PUSH EAX                            ; 005db224
    MOVSD.REP ES:EDI,ESI                ; 005db225
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005db227
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 005db22c
    PUSH EAX                            ; 005db22f
    LEA EAX,[ESP + 0x1c4]               ; 005db230
    PUSH EAX                            ; 005db237
    PUSH EBX                            ; 005db238
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005db239
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005db23e
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005db241
    FLD float ptr [ESP + 0x1c0]         ; 005db247
    FSUB float ptr [EAX + 0x20]         ; 005db24e
    FLD float ptr [ESP + 0x1c4]         ; 005db251
    FXCH                                ; 005db258
    FSTP float ptr [ESP + 0x214]        ; 005db25a
    FSUB float ptr [EAX + 0x24]         ; 005db261
    FLD float ptr [ESP + 0x1c8]         ; 005db264
    FXCH                                ; 005db26b
    FST float ptr [ESP + 0x218]         ; 005db26d
    FXCH                                ; 005db274
    FSUB float ptr [EAX + 0x28]         ; 005db276
    FXCH                                ; 005db279
    FABS                                ; 005db27b
    FXCH                                ; 005db27d
    FSTP float ptr [ESP + 0x21c]        ; 005db27f
    FCOMP double ptr [0x00654e3c]       ; 005db286 | DOUBLE_00654e3c
    FNSTSW AX                           ; 005db28c
    SAHF                                ; 005db28e
    JA 0x005db0b1                       ; 005db28f
        ;   XREF to: 005db0b1 (CONDITIONAL_JUMP)  ; LAB_005db0b1
    FLD float ptr [ESP + 0x21c]         ; 005db295
    FMUL ST0                            ; 005db29c
    FLD float ptr [ESP + 0x214]         ; 005db29e
    FMUL ST0                            ; 005db2a5
    FADDP                               ; 005db2a7
    FCOMP double ptr [0x00654e44]       ; 005db2a9 | DOUBLE_00654e44
    FNSTSW AX                           ; 005db2af
    SAHF                                ; 005db2b1
    JA 0x005db0b1                       ; 005db2b2
        ;   XREF to: 005db0b1 (CONDITIONAL_JUMP)  ; LAB_005db0b1
    PUSH 0x1                            ; 005db2b8
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005db2ba
    PUSH EBX                            ; 005db2c0
    MOV ESI,dword ptr [EAX + 0x154]     ; 005db2c1
    PUSH EAX                            ; 005db2c7
    CALL dword ptr [ESI + 0x100]        ; 005db2c8
    ADD ESP,0xc                         ; 005db2ce
    TEST EAX,EAX                        ; 005db2d1
    JZ 0x005db0b1                       ; 005db2d3
        ;   XREF to: 005db0b1 (CONDITIONAL_JUMP)  ; LAB_005db0b1
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005db2d9
    LEA ESI,[EAX + 0x30]                ; 005db2df
    PUSH ESI                            ; 005db2e2
    ADD EAX,0x20                        ; 005db2e3
    PUSH EAX                            ; 005db2e6
    LEA EAX,[ESP + 0x108]               ; 005db2e7
    PUSH EAX                            ; 005db2ee
    MOV dword ptr [EBX + 0xbec8],0x0    ; 005db2ef
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005db2f9
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005db2fe
    MOV EDX,dword ptr [ESP + 0x23c]     ; 005db301
    PUSH EDX                            ; 005db308
    MOV ECX,dword ptr [ESP + 0x244]     ; 005db309
    PUSH ECX                            ; 005db310
    LEA EAX,[ESP + 0xd8]                ; 005db311
    PUSH EAX                            ; 005db318
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 005db319
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005db31e
    LEA EAX,[ESP + 0x70]                ; 005db321
    PUSH EAX                            ; 005db325
    LEA ESI,[ESP + 0x44]                ; 005db326
    LEA EDI,[ESP + 0x14]                ; 005db32a
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 005db32e
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 005db333
    LEA EAX,[ESP + 0x10]                ; 005db336
    MOV ECX,0xc                         ; 005db33a
    PUSH EAX                            ; 005db33f
    LEA EAX,[ESP + 0xd4]                ; 005db340
    LEA ESI,[ESP + 0x44]                ; 005db347
    PUSH EAX                            ; 005db34b
    LEA EAX,[ESP + 0x108]               ; 005db34c
    MOVSD.REP ES:EDI,ESI                ; 005db353
    PUSH EAX                            ; 005db355
    LEA ESI,[ESP + 0x19c]               ; 005db356
    LEA EDI,[ESP + 0x13c]               ; 005db35d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005db364
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005db369
    LEA ESI,[ESP + 0x19c]               ; 005db36e
    ADD ESP,0x8                         ; 005db375
    LEA EAX,[ESP + 0x134]               ; 005db378
    MOVSD.REP ES:EDI,ESI                ; 005db37f
    PUSH EAX                            ; 005db381
    LEA ESI,[ESP + 0x168]               ; 005db382
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005db389
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005db38e
    LEA ESI,[ESP + 0x168]               ; 005db393
    LEA EDI,[EBX + 0xbecc]              ; 005db39a
    ADD ESP,0x8                         ; 005db3a0
    MOVSD.REP ES:EDI,ESI                ; 005db3a3
    MOV ECX,0xc                         ; 005db3a5
    LEA EDI,[EBX + 0xbefc]              ; 005db3aa
    LEA ESI,[EBX + 0xbecc]              ; 005db3b0
    MOVSD.REP ES:EDI,ESI                ; 005db3b6
    MOV ESI,dword ptr [ESP + 0x238]     ; 005db3b8
    PUSH ESI                            ; 005db3bf
    CALL core_xform.cpp_clearTranslation_FUN_005f5370 ; 005db3c0
        ;   XREF to: 005f5370 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clearTranslation_FUN_005f5370(CMatrix3x4f * matrix)
    ADD ESP,0x4                         ; 005db3c5
    XOR ESI,ESI                         ; 005db3c8
    PUSH 0x40e00000                     ; 005db3ca
        ;   Label: LAB_005db3ca
    PUSH 0xc0e00000                     ; 005db3cf
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005db3d4
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005db479
        ;   Label: LAB_005db479
    TEST ESI,ESI                        ; 005db47f
    JZ 0x005db0b1                       ; 005db481
        ;   XREF to: 005db0b1 (CONDITIONAL_JUMP)  ; LAB_005db0b1
    MOV EAX,ESI                         ; 005db487
    PUSH EAX                            ; 005db489
    MOV ESI,dword ptr [ESI + 0x154]     ; 005db48a
    CALL dword ptr [ESI + 0x108]        ; 005db490
    ADD ESP,0x4                         ; 005db496
    CMP EAX,EBX                         ; 005db499
    JNZ 0x005db0b1                      ; 005db49b
        ;   XREF to: 005db0b1 (CONDITIONAL_JUMP)  ; LAB_005db0b1
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005db4a1
    MOV dword ptr [EAX + 0x70],0x2      ; 005db4a7
    JMP 0x005db0b1                      ; 005db4ae
        ;   XREF to: 005db0b1 (UNCONDITIONAL_JUMP)  ; LAB_005db0b1
    LEA EAX,[ESP + 0x8]                 ; 005db4b3
        ;   Label: LAB_005db4b3
    PUSH EAX                            ; 005db4b7
    MOV ECX,dword ptr [ESP + 0x248]     ; 005db4b8
    PUSH ECX                            ; 005db4bf
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005db4c0
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005db4c5
    CMP EAX,0x64                        ; 005db4c8
    JC 0x005db0b1                       ; 005db4cb
        ;   XREF to: 005db0b1 (CONDITIONAL_JUMP)  ; LAB_005db0b1
    JBE 0x005db1c2                      ; 005db4d1
        ;   XREF to: 005db1c2 (CONDITIONAL_JUMP)  ; LAB_005db1c2
    CMP EAX,0x65                        ; 005db4d7
    JZ 0x005db479                       ; 005db4da
        ;   XREF to: 005db479 (CONDITIONAL_JUMP)  ; LAB_005db479
    JMP 0x005db0b1                      ; 005db4dc
        ;   XREF to: 005db0b1 (UNCONDITIONAL_JUMP)  ; LAB_005db0b1
    PUSH 0x654de7                       ; 005db4e1 | = "CEnemy CHero CNPC"
        ;   Label: LAB_005db4e1
    PUSH EBX                            ; 005db4e6
    CALL core_tentacle.cpp_FUN_005db900 ; 005db4e7
        ;   XREF to: 005db900 (UNCONDITIONAL_CALL)  ; undefined core_tentacle.cpp_FUN_005db900()
    ADD ESP,0x8                         ; 005db4ec
    TEST EAX,EAX                        ; 005db4ef
    JZ 0x005db16f                       ; 005db4f1
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    PUSH 0x1                            ; 005db4f7
    PUSH 0x2                            ; 005db4f9
    PUSH ESI                            ; 005db4fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005db4fc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005db501
    MOV dword ptr [EBX + 0xbebc],0x0    ; 005db504
    JMP 0x005db16f                      ; 005db50e
        ;   XREF to: 005db16f (UNCONDITIONAL_JUMP)  ; LAB_005db16f
    FLD float ptr [EBX + 0xbec0]        ; 005db513
        ;   Label: LAB_005db513
    FADD float ptr [EBP + 0x18]         ; 005db519
    FST float ptr [EBX + 0xbec0]        ; 005db51c
    FCOMP double ptr [0x00654e04]       ; 005db522 | DOUBLE_00654e04
    FNSTSW AX                           ; 005db528
    SAHF                                ; 005db52a
    JC 0x005db550                       ; 005db52b
        ;   XREF to: 005db550 (CONDITIONAL_JUMP)  ; LAB_005db550
    PUSH 0x1                            ; 005db52d
    PUSH 0x0                            ; 005db52f
    MOV EDI,dword ptr [ESP + 0x24c]     ; 005db531
    PUSH EDI                            ; 005db538
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005db539
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005db53e
    MOV dword ptr [EBX + 0xbebc],0x41c80000 ; 005db541
    JMP 0x005db16f                      ; 005db54b
        ;   XREF to: 005db16f (UNCONDITIONAL_JUMP)  ; LAB_005db16f
    PUSH dword ptr [EBP + 0x18]         ; 005db550
        ;   Label: LAB_005db550
    MOV EAX,dword ptr [EBX + 0x154]     ; 005db553
    PUSH EBX                            ; 005db559
    CALL dword ptr [EAX + 0x158]        ; 005db55a
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005db560
    ADD ESP,0x8                         ; 005db566
    TEST ESI,ESI                        ; 005db569
    JZ 0x005db16f                       ; 005db56b
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    MOV EAX,ESI                         ; 005db571
    MOV EDX,dword ptr [ESP + 0x240]     ; 005db573
    FLD float ptr [EAX + 0x20]          ; 005db57a
    FSUB float ptr [EDX]                ; 005db57d
    FSTP float ptr [ESP + 0x1d8]        ; 005db57f
    FLD float ptr [EAX + 0x24]          ; 005db586
    FSUB float ptr [EDX + 0x4]          ; 005db589
    FSTP float ptr [ESP + 0x1dc]        ; 005db58c
    FLD float ptr [EAX + 0x28]          ; 005db593
    LEA EAX,[ESP + 0x1d8]               ; 005db596
    PUSH EAX                            ; 005db59d
    LEA EAX,[ESP + 0x1f4]               ; 005db59e
    FSUB float ptr [EDX + 0x8]          ; 005db5a5
    PUSH EAX                            ; 005db5a8
    FSTP float ptr [ESP + 0x1e8]        ; 005db5a9
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005db5b0
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 005db5b5
    ADD ESP,0x8                         ; 005db5b8
    FSUB float ptr [EBX + 0x34]         ; 005db5bb
    SUB ESP,0x4                         ; 005db5be
    FSTP float ptr [ESP]                ; 005db5c1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005db5c4
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x24c],EAX     ; 005db5c9
    FLD float ptr [ESP + 0x24c]         ; 005db5d0
    ADD ESP,0x4                         ; 005db5d7
    FLD float ptr [EBP + 0x18]          ; 005db5da
    FMUL double ptr [0x00654e0c]        ; 005db5dd | DOUBLE_00654e0c
    FXCH                                ; 005db5e3
    FSTP float ptr [ESP + 0xc]          ; 005db5e5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005db5e9
    FSTP float ptr [ESP + 0x234]        ; 005db5ed
    MOV dword ptr [EBX + 0x2418],EAX    ; 005db5f4
    FLD float ptr [EBX + 0x2418]        ; 005db5fa
    FLD float ptr [ESP + 0x234]         ; 005db600
    FCHS                                ; 005db607
    FSTP float ptr [ESP + 0x228]        ; 005db609
    FCOMP float ptr [ESP + 0x228]       ; 005db610
    FNSTSW AX                           ; 005db617
    SAHF                                ; 005db619
    JC 0x005db6f8                       ; 005db61a
        ;   XREF to: 005db6f8 (CONDITIONAL_JUMP)  ; LAB_005db6f8
    FLD float ptr [EBX + 0x2418]        ; 005db620
        ;   Label: LAB_005db620
    FCOMP float ptr [ESP + 0x234]       ; 005db626
    FNSTSW AX                           ; 005db62d
    SAHF                                ; 005db62f
    JBE 0x005db63f                      ; 005db630
        ;   XREF to: 005db63f (CONDITIONAL_JUMP)  ; LAB_005db63f
    MOV EAX,dword ptr [ESP + 0x234]     ; 005db632
    MOV dword ptr [EBX + 0x2418],EAX    ; 005db639
    FLD float ptr [EBX + 0xbec0]        ; 005db63f
        ;   Label: LAB_005db63f
    FCOMP double ptr [0x00654e14]       ; 005db645 | DOUBLE_00654e14
    FNSTSW AX                           ; 005db64b
    SAHF                                ; 005db64d
    JBE 0x005db16f                      ; 005db64e
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005db654
    LEA EAX,[EBX + 0x20]                ; 005db65a
    LEA ESI,[EDX + 0x20]                ; 005db65d
    FLD float ptr [EAX]                 ; 005db660
    FSUB float ptr [ESI]                ; 005db662
    FMUL ST0                            ; 005db664
    FLD float ptr [EAX + 0x8]           ; 005db666
    FSUB float ptr [ESI + 0x8]          ; 005db669
    FMUL ST0                            ; 005db66c
    FADDP                               ; 005db66e
    FSQRT                               ; 005db670
    FSTP float ptr [ESP + 0x4]          ; 005db672
    MOV EAX,dword ptr [ESP + 0x4]       ; 005db676
    FLD float ptr [ESP + 0xc]           ; 005db67a
    MOV dword ptr [ESP],EAX             ; 005db67e
    FCOMP double ptr [0x00654e1c]       ; 005db681 | DOUBLE_00654e1c
    FNSTSW AX                           ; 005db687
    SAHF                                ; 005db689
    JNC 0x005db16f                      ; 005db68a
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    FLD float ptr [EBX + 0x24]          ; 005db690
    FSUB float ptr [EDX + 0x24]         ; 005db693
    FABS                                ; 005db696
    FCOMP double ptr [0x00654e24]       ; 005db698 | DOUBLE_00654e24
    FNSTSW AX                           ; 005db69e
    SAHF                                ; 005db6a0
    JNC 0x005db16f                      ; 005db6a1
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    FLD float ptr [ESP + 0x4]           ; 005db6a7
    FCOMP double ptr [0x00654e2c]       ; 005db6ab | DOUBLE_00654e2c
    FNSTSW AX                           ; 005db6b1
    SAHF                                ; 005db6b3
    JBE 0x005db70a                      ; 005db6b4
        ;   XREF to: 005db70a (CONDITIONAL_JUMP)  ; LAB_005db70a
    MOV EDX,0x1                         ; 005db6b6
    FLD float ptr [ESP]                 ; 005db6bb
        ;   Label: LAB_005db6bb
    FCOMP double ptr [0x00654e34]       ; 005db6be | DOUBLE_00654e34
    FNSTSW AX                           ; 005db6c4
    SAHF                                ; 005db6c6
    JNC 0x005db70e                      ; 005db6c7
        ;   XREF to: 005db70e (CONDITIONAL_JUMP)  ; LAB_005db70e
    MOV EAX,0x1                         ; 005db6c9
    TEST EDX,EAX                        ; 005db6ce
        ;   Label: LAB_005db6ce
    JZ 0x005db16f                       ; 005db6d0
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    PUSH 0x1                            ; 005db6d6
    PUSH 0x6                            ; 005db6d8
    LEA EAX,[EBX + 0x158]               ; 005db6da
    PUSH EAX                            ; 005db6e0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005db6e1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005db6e6
    MOV dword ptr [EBX + 0xbebc],0x41c80000 ; 005db6e9
    JMP 0x005db16f                      ; 005db6f3
        ;   XREF to: 005db16f (UNCONDITIONAL_JUMP)  ; LAB_005db16f
    MOV EAX,dword ptr [ESP + 0x228]     ; 005db6f8
        ;   Label: LAB_005db6f8
    MOV dword ptr [EBX + 0x2418],EAX    ; 005db6ff
    JMP 0x005db620                      ; 005db705
        ;   XREF to: 005db620 (UNCONDITIONAL_JUMP)  ; LAB_005db620
    XOR EDX,EDX                         ; 005db70a
        ;   Label: LAB_005db70a
    JMP 0x005db6bb                      ; 005db70c
        ;   XREF to: 005db6bb (UNCONDITIONAL_JUMP)  ; LAB_005db6bb
    XOR EAX,EAX                         ; 005db70e
        ;   Label: LAB_005db70e
    JMP 0x005db6ce                      ; 005db710
        ;   XREF to: 005db6ce (UNCONDITIONAL_JUMP)  ; LAB_005db6ce
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005db712
        ;   Label: LAB_005db712
    TEST ECX,ECX                        ; 005db718
    JZ 0x005db16f                       ; 005db71a
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    PUSH ECX                            ; 005db720
    MOV EDX,dword ptr [ECX + 0x154]     ; 005db721
    CALL dword ptr [EDX + 0x120]        ; 005db727
    ADD ESP,0x4                         ; 005db72d
    TEST EAX,EAX                        ; 005db730
    JG 0x005db16f                       ; 005db732
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005db738
    PUSH EAX                            ; 005db73e
    MOV EDX,dword ptr [EAX + 0x154]     ; 005db73f
    CALL dword ptr [EDX + 0x108]        ; 005db745
    ADD ESP,0x4                         ; 005db74b
    TEST EAX,EAX                        ; 005db74e
    JNZ 0x005db16f                      ; 005db750
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005db756
    MOV EDX,dword ptr [ESP + 0x240]     ; 005db75c
    FLD float ptr [EAX + 0x20]          ; 005db763
    FSUB float ptr [EDX]                ; 005db766
    FSTP float ptr [ESP + 0x1fc]        ; 005db768
    FLD float ptr [EAX + 0x24]          ; 005db76f
    FSUB float ptr [EDX + 0x4]          ; 005db772
    FSTP float ptr [ESP + 0x200]        ; 005db775
    FLD float ptr [EAX + 0x28]          ; 005db77c
    LEA EAX,[ESP + 0x1fc]               ; 005db77f
    PUSH EAX                            ; 005db786
    LEA EAX,[ESP + 0x20c]               ; 005db787
    FSUB float ptr [EDX + 0x8]          ; 005db78e
    PUSH EAX                            ; 005db791
    FSTP float ptr [ESP + 0x20c]        ; 005db792
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005db799
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 005db79e
    ADD ESP,0x8                         ; 005db7a1
    FSUB float ptr [EBX + 0x34]         ; 005db7a4
    SUB ESP,0x4                         ; 005db7a7
    FSTP float ptr [ESP]                ; 005db7aa
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005db7ad
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x24c],EAX     ; 005db7b2
    FLD float ptr [ESP + 0x24c]         ; 005db7b9
    ADD ESP,0x4                         ; 005db7c0
    FLD float ptr [EBP + 0x18]          ; 005db7c3
    FMUL double ptr [0x00654dfc]        ; 005db7c6 | DOUBLE_00654dfc
    FXCH                                ; 005db7cc
    FST float ptr [EBX + 0x2418]        ; 005db7ce
    FXCH                                ; 005db7d4
    FST float ptr [ESP + 0x230]         ; 005db7d6
    FCHS                                ; 005db7dd
    FSTP float ptr [ESP + 0x22c]        ; 005db7df
    FCOMP float ptr [ESP + 0x22c]       ; 005db7e6
    FNSTSW AX                           ; 005db7ed
    SAHF                                ; 005db7ef
    JC 0x005db81a                       ; 005db7f0
        ;   XREF to: 005db81a (CONDITIONAL_JUMP)  ; LAB_005db81a
    FLD float ptr [EBX + 0x2418]        ; 005db7f2
        ;   Label: LAB_005db7f2
    FCOMP float ptr [ESP + 0x230]       ; 005db7f8
    FNSTSW AX                           ; 005db7ff
    SAHF                                ; 005db801
    JBE 0x005db16f                      ; 005db802
        ;   XREF to: 005db16f (CONDITIONAL_JUMP)  ; LAB_005db16f
    MOV EAX,dword ptr [ESP + 0x230]     ; 005db808
    MOV dword ptr [EBX + 0x2418],EAX    ; 005db80f
    JMP 0x005db16f                      ; 005db815
        ;   XREF to: 005db16f (UNCONDITIONAL_JUMP)  ; LAB_005db16f
    MOV EAX,dword ptr [ESP + 0x22c]     ; 005db81a
        ;   Label: LAB_005db81a
    MOV dword ptr [EBX + 0x2418],EAX    ; 005db821
    JMP 0x005db7f2                      ; 005db827
        ;   XREF to: 005db7f2 (UNCONDITIONAL_JUMP)  ; LAB_005db7f2
    JBE 0x005db513                      ; 005db829
        ;   XREF to: 005db513 (CONDITIONAL_JUMP)  ; LAB_005db513
        ;   Label: LAB_005db829
    CMP EAX,0x6                         ; 005db82f
    JZ 0x005db712                       ; 005db832
        ;   XREF to: 005db712 (CONDITIONAL_JUMP)  ; LAB_005db712
    JMP 0x005db16f                      ; 005db838
        ;   XREF to: 005db16f (UNCONDITIONAL_JUMP)  ; LAB_005db16f

