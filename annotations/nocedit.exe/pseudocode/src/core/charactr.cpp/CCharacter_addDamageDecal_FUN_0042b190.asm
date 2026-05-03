; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x2ec]:48  local_2ec
; CMatrix3x4f      Stack[-0x2bc]:48  local_2bc
; CMatrix3x4f      Stack[-0x28c]:48  local_28c
; CMatrix3x4f      Stack[-0x25c]:48  local_25c
; CMatrix3x4f      Stack[-0x22c]:48  local_22c
; CMatrix3x4f      Stack[-0x1fc]:48  local_1fc
; CMatrix3x4f      Stack[-0x1cc]:48  local_1cc
; CMatrix3x4f      Stack[-0x19c]:48  local_19c
; CMatrix3x4f      Stack[-0x16c]:48  local_16c
; CMatrix3x4f      Stack[-0x13c]:48  local_13c
; CMatrix3x4f      Stack[-0x10c]:48  local_10c
; CMatrix3x4f      Stack[-0xdc]:48  local_dc
; CMatrix3x4f      Stack[-0xac]:48  local_ac
; CMatrix3x4f      Stack[-0x7c]:48  local_7c
; CVector3f        Stack[-0x4c]:12  local_4c
; CVector3f        Stack[-0x40]:12  local_40
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; CVector3f        Stack[-0x28]:12  local_28
; float            Stack[-0x1c]:4  local_1c
; SDamageDecal *   Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 at 0042c521
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   undefined4 g_CDemonSetInstance.ray_origin.y
;   undefined4 g_CDemonSetInstance.ray_origin.z
;   undefined4 g_CDemonSetInstance.ray_target.x
;   undefined4 g_CDemonSetInstance.ray_target.y
;   undefined4 g_CDemonSetInstance.ray_target.z
;   undefined4 g_CDemonSetInstance.collision_impact_position.x
;   undefined4 g_CDemonSetInstance.collision_impact_position.y
;   undefined4 g_CDemonSetInstance.collision_impact_position.z
;   undefined4 g_CDemonSetInstance.collision_part_index
;   undefined4 g_CDemonSetInstance.collision_bone_index
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_buildRotationX_FUN_005f6c40
;   core_xform.cpp_buildRotationY_FUN_005f6cc0
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b190
        ;   Label: core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042b190
    PUSH ESI                            ; 0042b191
    PUSH EDI                            ; 0042b192
    PUSH EBP                            ; 0042b193
    MOV EBP,ESP                         ; 0042b194
    SUB ESP,0x2e0                       ; 0042b196
    AND ESP,0xfffffff8                  ; 0042b19c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b19f
    MOV EDX,dword ptr [EBX + 0x2df4]    ; 0042b1a2
    CMP EDX,0x5                         ; 0042b1a8
    JGE 0x0042b566                      ; 0042b1ab
        ;   XREF to: 0042b566 (CONDITIONAL_JUMP)  ; LAB_0042b566
    MOV ECX,dword ptr [0x006810c8]      ; 0042b1b1 | g_CDemonSetPtr | g_CDemonSetInstance
    CMP dword ptr [ECX + 0x14d148],0x0  ; 0042b1b7 | g_CDemonSetInstance.collision_part_index
    JL 0x0042b566                       ; 0042b1be
        ;   XREF to: 0042b566 (CONDITIONAL_JUMP)  ; LAB_0042b566
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042b1c4
    MOV EDI,dword ptr [EBX + 0x2df4]    ; 0042b1cb
    MOV EDX,EAX                         ; 0042b1d1
    SHL EAX,0x3                         ; 0042b1d3
    INC EDI                             ; 0042b1d6
    SUB EAX,EDX                         ; 0042b1d7
    LEA EDX,[EBX + 0x2df8]              ; 0042b1d9
    MOV dword ptr [EBX + 0x2df4],EDI    ; 0042b1df
    ADD EDX,EAX                         ; 0042b1e5
    MOV EAX,dword ptr [ECX + 0x14d148]  ; 0042b1e7 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [EDX],EAX             ; 0042b1ed
    MOV EAX,dword ptr [ECX + 0x14d14c]  ; 0042b1ef | g_CDemonSetInstance.collision_bone_index
    MOV dword ptr [ESP + 0x2d8],EDX     ; 0042b1f5
    MOV dword ptr [EDX + 0x4],EAX       ; 0042b1fc
    TEST EAX,EAX                        ; 0042b1ff
    JL 0x0042b56d                       ; 0042b201
        ;   XREF to: 0042b56d (CONDITIONAL_JUMP)  ; LAB_0042b56d
    MOV EDX,dword ptr [0x006810c8]      ; 0042b207 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0042b207
    LEA EAX,[EDX + 0x14d11c]            ; 0042b20d | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX]                 ; 0042b213 | g_CDemonSetInstance.ray_target.x
    FSUB float ptr [EDX + 0x14d110]     ; 0042b215 | g_CDemonSetInstance.ray_origin.x
    FSTP float ptr [ESP + 0x2a4]        ; 0042b21b
    FLD float ptr [EAX + 0x4]           ; 0042b222 | g_CDemonSetInstance.ray_target.y
    FSUB float ptr [EDX + 0x14d114]     ; 0042b225 | g_CDemonSetInstance.ray_origin.y
    FSTP float ptr [ESP + 0x2a8]        ; 0042b22b
    FLD float ptr [EAX + 0x8]           ; 0042b232 | g_CDemonSetInstance.ray_target.z
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 0042b235
    FSUB float ptr [EDX + 0x14d118]     ; 0042b23c | g_CDemonSetInstance.ray_origin.z
    MOV dword ptr [ESP + 0x2bc],EAX     ; 0042b242
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 0042b249
    MOV dword ptr [ESP + 0x2c0],EAX     ; 0042b250
    FLD float ptr [ESP + 0x2c0]         ; 0042b257
    FMUL ST0                            ; 0042b25e
    FLD float ptr [ESP + 0x2bc]         ; 0042b260
    FMUL ST0                            ; 0042b267
    FXCH ST2                            ; 0042b269
    FSTP float ptr [ESP + 0x2ac]        ; 0042b26b
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 0042b272
    FADDP                               ; 0042b279
    MOV dword ptr [ESP + 0x2c4],EAX     ; 0042b27b
    FLD float ptr [ESP + 0x2c4]         ; 0042b282
    FMUL ST0                            ; 0042b289
    FADDP                               ; 0042b28b
    FSQRT                               ; 0042b28d
    FST float ptr [ESP]                 ; 0042b28f
    FLDZ                                ; 0042b292
    FCOMPP                              ; 0042b294
    FNSTSW AX                           ; 0042b296
    SAHF                                ; 0042b298
    JNC 0x0042b58f                      ; 0042b299
        ;   XREF to: 0042b58f (CONDITIONAL_JUMP)  ; LAB_0042b58f
    FLD1                                ; 0042b29f
    FLD float ptr [ESP + 0x2bc]         ; 0042b2a1
    FXCH                                ; 0042b2a8
    FDIV float ptr [ESP]                ; 0042b2aa
    FXCH                                ; 0042b2ad
    FMUL ST1                            ; 0042b2af
    FLD float ptr [ESP + 0x2c0]         ; 0042b2b1
    FMUL ST2                            ; 0042b2b8
    FLD float ptr [ESP + 0x2c4]         ; 0042b2ba
    FMULP ST3                           ; 0042b2c1
    FXCH                                ; 0042b2c3
    FSTP float ptr [ESP + 0x2bc]        ; 0042b2c5
    FSTP float ptr [ESP + 0x2c0]        ; 0042b2cc
    FSTP float ptr [ESP + 0x2c4]        ; 0042b2d3
    PUSH 0x3f19999a                     ; 0042b2da
        ;   Label: LAB_0042b2da
    PUSH 0x3e99999a                     ; 0042b2df
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0042b2e4
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2e4],EAX     ; 0042b2e9
    FLD float ptr [ESP + 0x2e4]         ; 0042b2f0
    ADD ESP,0x8                         ; 0042b2f7
    FLD float ptr [ESP + 0x2bc]         ; 0042b2fa
    FXCH                                ; 0042b301
    FSTP float ptr [ESP + 0x2d4]        ; 0042b303
    FMUL float ptr [ESP + 0x2d4]        ; 0042b30a
    FLD float ptr [ESP + 0x2c0]         ; 0042b311
    FMUL float ptr [ESP + 0x2d4]        ; 0042b318
    FLD float ptr [ESP + 0x2c4]         ; 0042b31f
    FMUL float ptr [ESP + 0x2d4]        ; 0042b326
    MOV EAX,[0x006810c8]                ; 0042b32d | g_CDemonSetPtr
    FXCH ST2                            ; 0042b332
    FSTP float ptr [ESP + 0x2bc]        ; 0042b334
    FSTP float ptr [ESP + 0x2c0]        ; 0042b33b
    FSTP float ptr [ESP + 0x2c4]        ; 0042b342
    FLD float ptr [EAX + 0x14d138]      ; 0042b349 | g_CDemonSetInstance.collision_impact_position.x
    FSUB float ptr [ESP + 0x2bc]        ; 0042b34f
    FSTP float ptr [ESP + 0x2c8]        ; 0042b356
    FLD float ptr [EAX + 0x14d13c]      ; 0042b35d | g_CDemonSetInstance.collision_impact_position.y
    FSUB float ptr [ESP + 0x2c0]        ; 0042b363
    FSTP float ptr [ESP + 0x2cc]        ; 0042b36a
    FLD float ptr [EAX + 0x14d140]      ; 0042b371 | g_CDemonSetInstance.collision_impact_position.z
    FSUB float ptr [ESP + 0x2c4]        ; 0042b377
    FSTP float ptr [ESP + 0x2d0]        ; 0042b37e
    LEA EAX,[ESP + 0x2a4]               ; 0042b385
    PUSH EAX                            ; 0042b38c
    LEA EAX,[ESP + 0x2b4]               ; 0042b38d
    PUSH EAX                            ; 0042b394
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0042b395
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0042b39a
    PUSH EAX                            ; 0042b39d
    LEA EAX,[ESP + 0x2cc]               ; 0042b39e
    PUSH EAX                            ; 0042b3a5
    LEA EAX,[ESP + 0x24c]               ; 0042b3a6
    PUSH EAX                            ; 0042b3ad
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0042b3ae
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042b3b3
    LEA EAX,[ESP + 0x244]               ; 0042b3b6
    PUSH EAX                            ; 0042b3bd
    PUSH 0x3d0efa35                     ; 0042b3be
    PUSH 0xbd0efa35                     ; 0042b3c3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0042b3c8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0042b3cd
    FLD float ptr [ESP + 0x2e8]         ; 0042b3d4
    ADD ESP,0x8                         ; 0042b3db
    SUB ESP,0x4                         ; 0042b3de
    LEA ESI,[ESP + 0x9c]                ; 0042b3e1
    FSTP float ptr [ESP]                ; 0042b3e8
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 0042b3eb
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 0042b3f0
    LEA EAX,[ESP + 0x38]                ; 0042b3f3
    PUSH EAX                            ; 0042b3f7
    LEA EDI,[ESP + 0x3c]                ; 0042b3f8
    MOV ECX,0xc                         ; 0042b3fc
    PUSH 0x3d0efa35                     ; 0042b401
    LEA ESI,[ESP + 0xa0]                ; 0042b406
    PUSH 0xbd0efa35                     ; 0042b40d
    MOVSD.REP ES:EDI,ESI                ; 0042b412
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0042b414
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0042b419
    FLD float ptr [ESP + 0x2ec]         ; 0042b420
    ADD ESP,0x8                         ; 0042b427
    LEA ESI,[ESP + 0x18c]               ; 0042b42a
    SUB ESP,0x4                         ; 0042b431
    LEA EDI,[ESP + 0x160]               ; 0042b434
    FSTP float ptr [ESP]                ; 0042b43b
    CALL core_xform.cpp_buildRotationX_FUN_005f6c40 ; 0042b43e
        ;   XREF to: 005f6c40 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationX_FUN_005f6c40(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042b443
    LEA ESI,[ESP + 0x190]               ; 0042b448
    ADD ESP,0x4                         ; 0042b44f
    LEA EAX,[ESP + 0x15c]               ; 0042b452
    MOVSD.REP ES:EDI,ESI                ; 0042b459
    PUSH EAX                            ; 0042b45b
    LEA ESI,[ESP + 0x130]               ; 0042b45c
    LEA EDI,[ESP + 0x1c0]               ; 0042b463
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042b46a
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042b46f
    LEA ESI,[ESP + 0x130]               ; 0042b474
    ADD ESP,0x8                         ; 0042b47b
    LEA EAX,[ESP + 0x1b8]               ; 0042b47e
    MOVSD.REP ES:EDI,ESI                ; 0042b485
    PUSH EAX                            ; 0042b487
    LEA ESI,[ESP + 0x27c]               ; 0042b488
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042b48f
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0042b494
    LEA EAX,[EBX + 0x30]                ; 0042b497
    LEA EDI,[ESP + 0x244]               ; 0042b49a
    PUSH EAX                            ; 0042b4a1
    LEA EAX,[EBX + 0x20]                ; 0042b4a2
    MOV ECX,0xc                         ; 0042b4a5
    PUSH EAX                            ; 0042b4aa
    LEA EAX,[ESP + 0x1ec]               ; 0042b4ab
    LEA ESI,[ESP + 0x27c]               ; 0042b4b2
    PUSH EAX                            ; 0042b4b9
    MOVSD.REP ES:EDI,ESI                ; 0042b4ba
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0042b4bc
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042b4c1
    MOV EDX,dword ptr [ESP + 0x2d8]     ; 0042b4c4
    MOV EDX,dword ptr [EDX + 0x4]       ; 0042b4cb
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042b4ce
    SUB EAX,EDX                         ; 0042b4d5
    ADD EBX,0xfd8                       ; 0042b4d7
    SHL EAX,0x4                         ; 0042b4dd
    ADD EAX,EBX                         ; 0042b4e0
    PUSH EAX                            ; 0042b4e2
    LEA ESI,[ESP + 0x8]                 ; 0042b4e3
    LEA EDI,[ESP + 0xc8]                ; 0042b4e7
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0042b4ee
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 0042b4f3
    LEA EAX,[ESP + 0xc4]                ; 0042b4f6
    MOV ECX,0xc                         ; 0042b4fd
    PUSH EAX                            ; 0042b502
    LEA EAX,[ESP + 0x1e8]               ; 0042b503
    LEA ESI,[ESP + 0x8]                 ; 0042b50a
    PUSH EAX                            ; 0042b50e
    LEA EAX,[ESP + 0x24c]               ; 0042b50f
    MOVSD.REP ES:EDI,ESI                ; 0042b516
    PUSH EAX                            ; 0042b518
    LEA ESI,[ESP + 0x100]               ; 0042b519
    LEA EDI,[ESP + 0x220]               ; 0042b520
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042b527
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042b52c
    LEA ESI,[ESP + 0x100]               ; 0042b531
    ADD ESP,0x8                         ; 0042b538
    LEA EAX,[ESP + 0x218]               ; 0042b53b
    MOVSD.REP ES:EDI,ESI                ; 0042b542
    PUSH EAX                            ; 0042b544
    LEA ESI,[ESP + 0x6c]                ; 0042b545
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042b549
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0042b54e
    MOV EDI,dword ptr [ESP + 0x2d8]     ; 0042b551
    MOV ECX,0xc                         ; 0042b558
    LEA ESI,[ESP + 0x64]                ; 0042b55d
    LEA EDI,[EDI + 0x8]                 ; 0042b561
    MOVSD.REP ES:EDI,ESI                ; 0042b564
    MOV ESP,EBP                         ; 0042b566
        ;   Label: LAB_0042b566
    POP EBP                             ; 0042b568
    POP EDI                             ; 0042b569
    POP ESI                             ; 0042b56a
    POP EBX                             ; 0042b56b
    RET                                 ; 0042b56c
    MOV ECX,dword ptr [EDX]             ; 0042b56d
        ;   Label: LAB_0042b56d
    PUSH ECX                            ; 0042b56f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b570
    PUSH EBX                            ; 0042b576
    CALL dword ptr [EAX + 0x12c]        ; 0042b577
    ADD ESP,0x8                         ; 0042b57d
    MOV EDX,dword ptr [ESP + 0x2d8]     ; 0042b580
    MOV dword ptr [EDX + 0x4],EAX       ; 0042b587
    JMP 0x0042b207                      ; 0042b58a
        ;   XREF to: 0042b207 (UNCONDITIONAL_JUMP)  ; LAB_0042b207
    XOR ESI,ESI                         ; 0042b58f
        ;   Label: LAB_0042b58f
    MOV dword ptr [ESP + 0x2c0],ESI     ; 0042b591
    MOV dword ptr [ESP + 0x2bc],ESI     ; 0042b598
    MOV dword ptr [ESP + 0x2c4],ESI     ; 0042b59f
    JMP 0x0042b2da                      ; 0042b5a6
        ;   XREF to: 0042b2da (UNCONDITIONAL_JUMP)  ; LAB_0042b2da

