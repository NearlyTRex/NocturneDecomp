; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00427310(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2fc]:4  local_2fc
; undefined4       Stack[-0x2f8]:4  local_2f8
; undefined4       Stack[-0x2f0]:4  local_2f0
; undefined        Stack[-0x2ec]:1  local_2ec
; undefined        Stack[-0x2bc]:1  local_2bc
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x25c]:1  local_25c
; undefined        Stack[-0x22c]:1  local_22c
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 00428671
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CDemonSet_01e57284.ray_origin.x
;   undefined4 g_CDemonSet_01e57284.ray_origin.y
;   undefined4 g_CDemonSet_01e57284.ray_origin.z
;   undefined4 g_CDemonSet_01e57284.ray_target.x
;   undefined4 g_CDemonSet_01e57284.ray_target.y
;   undefined4 g_CDemonSet_01e57284.ray_target.z
;   undefined4 g_CDemonSet_01e57284.collision_impact_position.x
;   undefined4 g_CDemonSet_01e57284.collision_impact_position.y
;   undefined4 g_CDemonSet_01e57284.collision_impact_position.z
;   undefined4 g_CDemonSet_01e57284.collision_part_index
;   undefined4 g_CDemonSet_01e57284.collision_bone_index
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_buildRotationX_FUN_0055c730
;   core_xform.cpp_buildRotationY_FUN_0055c7b0
;   core_xform.cpp_inverse_FUN_0055bd00
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427310
        ;   Label: core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310
    PUSH ESI                            ; 00427311
    PUSH EDI                            ; 00427312
    PUSH EBP                            ; 00427313
    MOV EBP,ESP                         ; 00427314
    SUB ESP,0x2e0                       ; 00427316
    AND ESP,0xfffffff8                  ; 0042731c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042731f
    MOV EDX,dword ptr [EBX + 0x2dec]    ; 00427322
    CMP EDX,0x5                         ; 00427328
    JGE 0x004276e6                      ; 0042732b
        ;   XREF to: 004276e6 (CONDITIONAL_JUMP)  ; LAB_004276e6
    MOV ECX,dword ptr [0x005be368]      ; 00427331 | g_CDemonSet_PTR_005be368
    CMP dword ptr [ECX + 0x14cd60],0x0  ; 00427337 | g_CDemonSet_01e57284.collision_part_index
    JL 0x004276e6                       ; 0042733e
        ;   XREF to: 004276e6 (CONDITIONAL_JUMP)  ; LAB_004276e6
    LEA EAX,[EDX*0x8 + 0x0]             ; 00427344
    MOV EDI,dword ptr [EBX + 0x2dec]    ; 0042734b
    MOV EDX,EAX                         ; 00427351
    SHL EAX,0x3                         ; 00427353
    INC EDI                             ; 00427356
    SUB EAX,EDX                         ; 00427357
    LEA EDX,[EBX + 0x2df0]              ; 00427359
    MOV dword ptr [EBX + 0x2dec],EDI    ; 0042735f
    ADD EDX,EAX                         ; 00427365
    MOV EAX,dword ptr [ECX + 0x14cd60]  ; 00427367 | g_CDemonSet_01e57284.collision_part_index
    MOV dword ptr [EDX],EAX             ; 0042736d
    MOV EAX,dword ptr [ECX + 0x14cd64]  ; 0042736f | g_CDemonSet_01e57284.collision_bone_index
    MOV dword ptr [ESP + 0x2d8],EDX     ; 00427375
    MOV dword ptr [EDX + 0x4],EAX       ; 0042737c
    TEST EAX,EAX                        ; 0042737f
    JL 0x004276ed                       ; 00427381
        ;   XREF to: 004276ed (CONDITIONAL_JUMP)  ; LAB_004276ed
    MOV EDX,dword ptr [0x005be368]      ; 00427387 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_00427387
    LEA EAX,[EDX + 0x14cd34]            ; 0042738d
    FLD float ptr [EAX]                 ; 00427393 | g_CDemonSet_01e57284.ray_target.x
    FSUB float ptr [EDX + 0x14cd28]     ; 00427395 | g_CDemonSet_01e57284.ray_origin.x
    FSTP float ptr [ESP + 0x2a4]        ; 0042739b
    FLD float ptr [EAX + 0x4]           ; 004273a2 | g_CDemonSet_01e57284.ray_target.y
    FSUB float ptr [EDX + 0x14cd2c]     ; 004273a5 | g_CDemonSet_01e57284.ray_origin.y
    FSTP float ptr [ESP + 0x2a8]        ; 004273ab
    FLD float ptr [EAX + 0x8]           ; 004273b2 | g_CDemonSet_01e57284.ray_target.z
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 004273b5
    FSUB float ptr [EDX + 0x14cd30]     ; 004273bc | g_CDemonSet_01e57284.ray_origin.z
    MOV dword ptr [ESP + 0x2bc],EAX     ; 004273c2
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 004273c9
    MOV dword ptr [ESP + 0x2c0],EAX     ; 004273d0
    FLD float ptr [ESP + 0x2c0]         ; 004273d7
    FMUL ST0                            ; 004273de
    FLD float ptr [ESP + 0x2bc]         ; 004273e0
    FMUL ST0                            ; 004273e7
    FXCH ST2                            ; 004273e9
    FSTP float ptr [ESP + 0x2ac]        ; 004273eb
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 004273f2
    FADDP                               ; 004273f9
    MOV dword ptr [ESP + 0x2c4],EAX     ; 004273fb
    FLD float ptr [ESP + 0x2c4]         ; 00427402
    FMUL ST0                            ; 00427409
    FADDP                               ; 0042740b
    FSQRT                               ; 0042740d
    FST float ptr [ESP]                 ; 0042740f
    FLDZ                                ; 00427412
    FCOMPP                              ; 00427414
    FNSTSW AX                           ; 00427416
    SAHF                                ; 00427418
    JNC 0x0042770f                      ; 00427419
        ;   XREF to: 0042770f (CONDITIONAL_JUMP)  ; LAB_0042770f
    FLD1                                ; 0042741f
    FLD float ptr [ESP + 0x2bc]         ; 00427421
    FXCH                                ; 00427428
    FDIV float ptr [ESP]                ; 0042742a
    FXCH                                ; 0042742d
    FMUL ST1                            ; 0042742f
    FLD float ptr [ESP + 0x2c0]         ; 00427431
    FMUL ST2                            ; 00427438
    FLD float ptr [ESP + 0x2c4]         ; 0042743a
    FMULP ST3                           ; 00427441
    FXCH                                ; 00427443
    FSTP float ptr [ESP + 0x2bc]        ; 00427445
    FSTP float ptr [ESP + 0x2c0]        ; 0042744c
    FSTP float ptr [ESP + 0x2c4]        ; 00427453
    PUSH 0x3f19999a                     ; 0042745a
        ;   Label: LAB_0042745a
    PUSH 0x3e99999a                     ; 0042745f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00427464
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2e4],EAX     ; 00427469
    FLD float ptr [ESP + 0x2e4]         ; 00427470
    ADD ESP,0x8                         ; 00427477
    FLD float ptr [ESP + 0x2bc]         ; 0042747a
    FXCH                                ; 00427481
    FSTP float ptr [ESP + 0x2d4]        ; 00427483
    FMUL float ptr [ESP + 0x2d4]        ; 0042748a
    FLD float ptr [ESP + 0x2c0]         ; 00427491
    FMUL float ptr [ESP + 0x2d4]        ; 00427498
    FLD float ptr [ESP + 0x2c4]         ; 0042749f
    FMUL float ptr [ESP + 0x2d4]        ; 004274a6
    MOV EAX,[0x005be368]                ; 004274ad | g_CDemonSet_PTR_005be368
    FXCH ST2                            ; 004274b2
    FSTP float ptr [ESP + 0x2bc]        ; 004274b4
    FSTP float ptr [ESP + 0x2c0]        ; 004274bb
    FSTP float ptr [ESP + 0x2c4]        ; 004274c2
    FLD float ptr [EAX + 0x14cd50]      ; 004274c9 | g_CDemonSet_01e57284.collision_impact_position.x
    FSUB float ptr [ESP + 0x2bc]        ; 004274cf
    FSTP float ptr [ESP + 0x2c8]        ; 004274d6
    FLD float ptr [EAX + 0x14cd54]      ; 004274dd | g_CDemonSet_01e57284.collision_impact_position.y
    FSUB float ptr [ESP + 0x2c0]        ; 004274e3
    FSTP float ptr [ESP + 0x2cc]        ; 004274ea
    FLD float ptr [EAX + 0x14cd58]      ; 004274f1 | g_CDemonSet_01e57284.collision_impact_position.z
    FSUB float ptr [ESP + 0x2c4]        ; 004274f7
    FSTP float ptr [ESP + 0x2d0]        ; 004274fe
    LEA EAX,[ESP + 0x2a4]               ; 00427505
    PUSH EAX                            ; 0042750c
    LEA EAX,[ESP + 0x2b4]               ; 0042750d
    PUSH EAX                            ; 00427514
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00427515
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0042751a
    PUSH EAX                            ; 0042751d
    LEA EAX,[ESP + 0x2cc]               ; 0042751e
    PUSH EAX                            ; 00427525
    LEA EAX,[ESP + 0x24c]               ; 00427526
    PUSH EAX                            ; 0042752d
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0042752e
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00427533
    LEA EAX,[ESP + 0x244]               ; 00427536
    PUSH EAX                            ; 0042753d
    PUSH 0x3d0efa35                     ; 0042753e
    PUSH 0xbd0efa35                     ; 00427543
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00427548
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0042754d
    FLD float ptr [ESP + 0x2e8]         ; 00427554
    ADD ESP,0x8                         ; 0042755b
    SUB ESP,0x4                         ; 0042755e
    LEA ESI,[ESP + 0x9c]                ; 00427561
    FSTP float ptr [ESP]                ; 00427568
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 0042756b
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_0055c7b0(float angle_radians, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 00427570
    LEA EAX,[ESP + 0x38]                ; 00427573
    PUSH EAX                            ; 00427577
    LEA EDI,[ESP + 0x3c]                ; 00427578
    MOV ECX,0xc                         ; 0042757c
    PUSH 0x3d0efa35                     ; 00427581
    LEA ESI,[ESP + 0xa0]                ; 00427586
    PUSH 0xbd0efa35                     ; 0042758d
    MOVSD.REP ES:EDI,ESI                ; 00427592
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00427594
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00427599
    FLD float ptr [ESP + 0x2ec]         ; 004275a0
    ADD ESP,0x8                         ; 004275a7
    LEA ESI,[ESP + 0x18c]               ; 004275aa
    SUB ESP,0x4                         ; 004275b1
    LEA EDI,[ESP + 0x160]               ; 004275b4
    FSTP float ptr [ESP]                ; 004275bb
    CALL core_xform.cpp_buildRotationX_FUN_0055c730 ; 004275be
        ;   XREF to: 0055c730 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationX_FUN_0055c730(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004275c3
    LEA ESI,[ESP + 0x190]               ; 004275c8
    ADD ESP,0x4                         ; 004275cf
    LEA EAX,[ESP + 0x15c]               ; 004275d2
    MOVSD.REP ES:EDI,ESI                ; 004275d9
    PUSH EAX                            ; 004275db
    LEA ESI,[ESP + 0x130]               ; 004275dc
    LEA EDI,[ESP + 0x1c0]               ; 004275e3
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004275ea
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004275ef
    LEA ESI,[ESP + 0x130]               ; 004275f4
    ADD ESP,0x8                         ; 004275fb
    LEA EAX,[ESP + 0x1b8]               ; 004275fe
    MOVSD.REP ES:EDI,ESI                ; 00427605
    PUSH EAX                            ; 00427607
    LEA ESI,[ESP + 0x27c]               ; 00427608
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0042760f
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 00427614
    LEA EAX,[EBX + 0x30]                ; 00427617
    LEA EDI,[ESP + 0x244]               ; 0042761a
    PUSH EAX                            ; 00427621
    LEA EAX,[EBX + 0x20]                ; 00427622
    MOV ECX,0xc                         ; 00427625
    PUSH EAX                            ; 0042762a
    LEA EAX,[ESP + 0x1ec]               ; 0042762b
    LEA ESI,[ESP + 0x27c]               ; 00427632
    PUSH EAX                            ; 00427639
    MOVSD.REP ES:EDI,ESI                ; 0042763a
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 0042763c
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00427641
    MOV EDX,dword ptr [ESP + 0x2d8]     ; 00427644
    MOV EDX,dword ptr [EDX + 0x4]       ; 0042764b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042764e
    SUB EAX,EDX                         ; 00427655
    ADD EBX,0xfd0                       ; 00427657
    SHL EAX,0x4                         ; 0042765d
    ADD EAX,EBX                         ; 00427660
    PUSH EAX                            ; 00427662
    LEA ESI,[ESP + 0x8]                 ; 00427663
    LEA EDI,[ESP + 0xc8]                ; 00427667
    CALL core_xform.cpp_inverse_FUN_0055bd00 ; 0042766e
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_0055bd00(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 00427673
    LEA EAX,[ESP + 0xc4]                ; 00427676
    MOV ECX,0xc                         ; 0042767d
    PUSH EAX                            ; 00427682
    LEA EAX,[ESP + 0x1e8]               ; 00427683
    LEA ESI,[ESP + 0x8]                 ; 0042768a
    PUSH EAX                            ; 0042768e
    LEA EAX,[ESP + 0x24c]               ; 0042768f
    MOVSD.REP ES:EDI,ESI                ; 00427696
    PUSH EAX                            ; 00427698
    LEA ESI,[ESP + 0x100]               ; 00427699
    LEA EDI,[ESP + 0x220]               ; 004276a0
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004276a7
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004276ac
    LEA ESI,[ESP + 0x100]               ; 004276b1
    ADD ESP,0x8                         ; 004276b8
    LEA EAX,[ESP + 0x218]               ; 004276bb
    MOVSD.REP ES:EDI,ESI                ; 004276c2
    PUSH EAX                            ; 004276c4
    LEA ESI,[ESP + 0x6c]                ; 004276c5
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004276c9
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 004276ce
    MOV EDI,dword ptr [ESP + 0x2d8]     ; 004276d1
    MOV ECX,0xc                         ; 004276d8
    LEA ESI,[ESP + 0x64]                ; 004276dd
    LEA EDI,[EDI + 0x8]                 ; 004276e1
    MOVSD.REP ES:EDI,ESI                ; 004276e4
    MOV ESP,EBP                         ; 004276e6
        ;   Label: LAB_004276e6
    POP EBP                             ; 004276e8
    POP EDI                             ; 004276e9
    POP ESI                             ; 004276ea
    POP EBX                             ; 004276eb
    RET                                 ; 004276ec
    MOV ECX,dword ptr [EDX]             ; 004276ed
        ;   Label: LAB_004276ed
    PUSH ECX                            ; 004276ef
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004276f0
    PUSH EBX                            ; 004276f6
    CALL dword ptr [EAX + 0x110]        ; 004276f7
    ADD ESP,0x8                         ; 004276fd
    MOV EDX,dword ptr [ESP + 0x2d8]     ; 00427700
    MOV dword ptr [EDX + 0x4],EAX       ; 00427707
    JMP 0x00427387                      ; 0042770a
        ;   XREF to: 00427387 (UNCONDITIONAL_JUMP)  ; LAB_00427387
    XOR ESI,ESI                         ; 0042770f
        ;   Label: LAB_0042770f
    MOV dword ptr [ESP + 0x2c0],ESI     ; 00427711
    MOV dword ptr [ESP + 0x2bc],ESI     ; 00427718
    MOV dword ptr [ESP + 0x2c4],ESI     ; 0042771f
    JMP 0x0042745a                      ; 00427726
        ;   XREF to: 0042745a (UNCONDITIONAL_JUMP)  ; LAB_0042745a

