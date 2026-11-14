; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042f770(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x324]:4  local_324
; undefined4       Stack[-0x320]:4  local_320
; undefined        Stack[-0x318]:1  local_318
; undefined        Stack[-0x2e8]:1  local_2e8
; undefined        Stack[-0x2b8]:1  local_2b8
; undefined        Stack[-0x288]:1  local_288
; undefined        Stack[-0x258]:1  local_258
; undefined        Stack[-0x228]:1  local_228
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined        Stack[-0x1c8]:1  local_1c8
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x168]:1  local_168
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00430d60 at 00430f9d
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
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
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   core_xform.cpp_buildRotationX_FUN_00584f70
;   core_xform.cpp_buildRotationY_FUN_00584ff0
;   core_xform.cpp_FUN_00583800
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_inverse_FUN_00584560
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f770
        ;   Label: core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042f770
    PUSH ESI                            ; 0042f771
    PUSH EDI                            ; 0042f772
    PUSH EBP                            ; 0042f773
    MOV EBP,ESP                         ; 0042f774
    SUB ESP,0x308                       ; 0042f776
    AND ESP,0xfffffff8                  ; 0042f77c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042f77f
    MOV EDX,dword ptr [EBX + 0x3284]    ; 0042f782
    CMP EDX,0x5                         ; 0042f788
    JGE 0x0042fb83                      ; 0042f78b
        ;   XREF to: 0042fb83 (CONDITIONAL_JUMP)  ; LAB_0042fb83
    MOV ECX,dword ptr [0x00603b28]      ; 0042f791 | g_CDemonSetPtr
    CMP dword ptr [ECX + 0x14d148],0x0  ; 0042f797 | g_CDemonSetInstance.collision_part_index
    JL 0x0042fb83                       ; 0042f79e
        ;   XREF to: 0042fb83 (CONDITIONAL_JUMP)  ; LAB_0042fb83
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042f7a4
    MOV EDI,dword ptr [EBX + 0x3284]    ; 0042f7ab
    MOV EDX,EAX                         ; 0042f7b1
    SHL EAX,0x3                         ; 0042f7b3
    INC EDI                             ; 0042f7b6
    SUB EAX,EDX                         ; 0042f7b7
    LEA EDX,[EBX + 0x3288]              ; 0042f7b9
    MOV dword ptr [EBX + 0x3284],EDI    ; 0042f7bf
    ADD EDX,EAX                         ; 0042f7c5
    MOV EAX,dword ptr [ECX + 0x14d148]  ; 0042f7c7 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [EDX],EAX             ; 0042f7cd
    MOV EAX,dword ptr [ECX + 0x14d14c]  ; 0042f7cf | g_CDemonSetInstance.collision_bone_index
    MOV dword ptr [ESP + 0x300],EDX     ; 0042f7d5
    MOV dword ptr [EDX + 0x4],EAX       ; 0042f7dc
    TEST EAX,EAX                        ; 0042f7df
    JL 0x0042fb8a                       ; 0042f7e1
        ;   XREF to: 0042fb8a (CONDITIONAL_JUMP)  ; LAB_0042fb8a
    MOV EDX,dword ptr [0x00603b28]      ; 0042f7e7 | g_CDemonSetPtr
        ;   Label: LAB_0042f7e7
    LEA EAX,[EDX + 0x14d11c]            ; 0042f7ed
    LEA EDI,[ESP + 0x2a0]               ; 0042f7f3
    LEA ESI,[ESP + 0x2d0]               ; 0042f7fa
    FLD float ptr [EAX]                 ; 0042f801 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 0042f803 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 0042f806 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 0042f809
    FSUB float ptr [EDX + 0x14d110]     ; 0042f80b | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 0042f811
    FSUB float ptr [EDX + 0x14d114]     ; 0042f813 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 0042f819
    FSUB float ptr [EDX + 0x14d118]     ; 0042f81b | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 0042f821
    FSTP float ptr [ESP + 0x2d0]        ; 0042f823
    FXCH                                ; 0042f82a
    FSTP float ptr [ESP + 0x2d4]        ; 0042f82c
    FSTP float ptr [ESP + 0x2d8]        ; 0042f833
    MOVSD ES:EDI,ESI                    ; 0042f83a
    MOVSD ES:EDI,ESI                    ; 0042f83b
    MOVSD ES:EDI,ESI                    ; 0042f83c
    LEA EDI,[ESP + 0x2dc]               ; 0042f83d
    LEA ESI,[ESP + 0x2d0]               ; 0042f844
    MOVSD ES:EDI,ESI                    ; 0042f84b
    MOVSD ES:EDI,ESI                    ; 0042f84c
    MOVSD ES:EDI,ESI                    ; 0042f84d
    FLD float ptr [ESP + 0x2e0]         ; 0042f84e
    FMUL ST0                            ; 0042f855
    FLD float ptr [ESP + 0x2dc]         ; 0042f857
    FMUL ST0                            ; 0042f85e
    FADDP                               ; 0042f860
    FLD float ptr [ESP + 0x2e4]         ; 0042f862
    FMUL ST0                            ; 0042f869
    FADDP                               ; 0042f86b
    FSQRT                               ; 0042f86d
    FLDZ                                ; 0042f86f
    FXCH                                ; 0042f871
    FSTP float ptr [ESP + 0x2f8]        ; 0042f873
    FCOMP float ptr [ESP + 0x2f8]       ; 0042f87a
    FNSTSW AX                           ; 0042f881
    SAHF                                ; 0042f883
    JNC 0x0042fbac                      ; 0042f884
        ;   XREF to: 0042fbac (CONDITIONAL_JUMP)  ; LAB_0042fbac
    FLD1                                ; 0042f88a
    FLD float ptr [ESP + 0x2dc]         ; 0042f88c
    FXCH                                ; 0042f893
    FDIV float ptr [ESP + 0x2f8]        ; 0042f895
    FXCH                                ; 0042f89c
    FMUL ST1                            ; 0042f89e
    FLD float ptr [ESP + 0x2e0]         ; 0042f8a0
    FMUL ST2                            ; 0042f8a7
    FLD float ptr [ESP + 0x2e4]         ; 0042f8a9
    FMULP ST3                           ; 0042f8b0
    FXCH                                ; 0042f8b2
    FSTP float ptr [ESP + 0x2dc]        ; 0042f8b4
    FSTP float ptr [ESP + 0x2e0]        ; 0042f8bb
    FSTP float ptr [ESP + 0x2e4]        ; 0042f8c2
    PUSH 0x3f19999a                     ; 0042f8c9
        ;   Label: LAB_0042f8c9
    PUSH 0x3e99999a                     ; 0042f8ce
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042f8d3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x30c],EAX     ; 0042f8d8
    FLD float ptr [ESP + 0x30c]         ; 0042f8df
    ADD ESP,0x8                         ; 0042f8e6
    FLD float ptr [ESP + 0x2dc]         ; 0042f8e9
    FXCH                                ; 0042f8f0
    FSTP float ptr [ESP + 0x2fc]        ; 0042f8f2
    FMUL float ptr [ESP + 0x2fc]        ; 0042f8f9
    FLD float ptr [ESP + 0x2e0]         ; 0042f900
    FMUL float ptr [ESP + 0x2fc]        ; 0042f907
    MOV EAX,[0x00603b28]                ; 0042f90e | g_CDemonSetPtr
    FLD float ptr [ESP + 0x2e4]         ; 0042f913
    FMUL float ptr [ESP + 0x2fc]        ; 0042f91a
    FLD float ptr [EAX + 0x14d138]      ; 0042f921 | g_CDemonSetInstance.collision_impact_position.x
    FLD float ptr [EAX + 0x14d13c]      ; 0042f927 | g_CDemonSetInstance.collision_impact_position.y
    FLD float ptr [EAX + 0x14d140]      ; 0042f92d | g_CDemonSetInstance.collision_impact_position.z
    FXCH ST5                            ; 0042f933
    FSTP float ptr [ESP + 0x2dc]        ; 0042f935
    FXCH ST3                            ; 0042f93c
    FSTP float ptr [ESP + 0x2e0]        ; 0042f93e
    FXCH                                ; 0042f945
    FSTP float ptr [ESP + 0x2e4]        ; 0042f947
    FSUB float ptr [ESP + 0x2dc]        ; 0042f94e
    FXCH                                ; 0042f955
    FSUB float ptr [ESP + 0x2e0]        ; 0042f957
    FXCH ST2                            ; 0042f95e
    FSUB float ptr [ESP + 0x2e4]        ; 0042f960
    FXCH                                ; 0042f967
    FSTP float ptr [ESP + 0x2b8]        ; 0042f969
    FXCH                                ; 0042f970
    FSTP float ptr [ESP + 0x2bc]        ; 0042f972
    FSTP float ptr [ESP + 0x2c0]        ; 0042f979
    LEA EDI,[ESP + 0x2ac]               ; 0042f980
    LEA ESI,[ESP + 0x2b8]               ; 0042f987
    LEA EAX,[ESP + 0x2a0]               ; 0042f98e
    MOVSD ES:EDI,ESI                    ; 0042f995
    MOVSD ES:EDI,ESI                    ; 0042f996
    MOVSD ES:EDI,ESI                    ; 0042f997
    PUSH EAX                            ; 0042f998
    LEA ESI,[ESP + 0x2ec]               ; 0042f999
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0042f9a0
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    ADD ESP,0x4                         ; 0042f9a5
    LEA EAX,[ESP + 0x2c4]               ; 0042f9a8
    PUSH EAX                            ; 0042f9af
    LEA EAX,[ESP + 0x2b0]               ; 0042f9b0
    LEA EDI,[ESP + 0x2c8]               ; 0042f9b7
    PUSH EAX                            ; 0042f9be
    LEA EAX,[ESP + 0x68]                ; 0042f9bf
    LEA ESI,[ESP + 0x2f0]               ; 0042f9c3
    PUSH EAX                            ; 0042f9ca
    MOVSD ES:EDI,ESI                    ; 0042f9cb
    MOVSD ES:EDI,ESI                    ; 0042f9cc
    MOVSD ES:EDI,ESI                    ; 0042f9cd
    CALL core_xform.cpp_FUN_00583940    ; 0042f9ce
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0042f9d3
    LEA EAX,[ESP + 0x60]                ; 0042f9d6
    PUSH EAX                            ; 0042f9da
    PUSH 0x3d0efa35                     ; 0042f9db
    PUSH 0xbd0efa35                     ; 0042f9e0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042f9e5
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x310],EAX     ; 0042f9ea
    FLD float ptr [ESP + 0x310]         ; 0042f9f1
    ADD ESP,0x8                         ; 0042f9f8
    SUB ESP,0x4                         ; 0042f9fb
    LEA ESI,[ESP + 0x38]                ; 0042f9fe
    FSTP float ptr [ESP]                ; 0042fa02
    CALL core_xform.cpp_buildRotationY_FUN_00584ff0 ; 0042fa05
        ;   XREF to: 00584ff0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_00584ff0(float angle_radians, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 0042fa0a
    LEA EAX,[ESP + 0xf4]                ; 0042fa0d
    PUSH EAX                            ; 0042fa14
    LEA EDI,[ESP + 0xf8]                ; 0042fa15
    MOV ECX,0xc                         ; 0042fa1c
    PUSH 0x3d0efa35                     ; 0042fa21
    LEA ESI,[ESP + 0x3c]                ; 0042fa26
    PUSH 0xbd0efa35                     ; 0042fa2a
    MOVSD.REP ES:EDI,ESI                ; 0042fa2f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042fa31
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x314],EAX     ; 0042fa36
    FLD float ptr [ESP + 0x314]         ; 0042fa3d
    ADD ESP,0x8                         ; 0042fa44
    LEA ESI,[ESP + 0x98]                ; 0042fa47
    SUB ESP,0x4                         ; 0042fa4e
    LEA EDI,[ESP + 0xcc]                ; 0042fa51
    FSTP float ptr [ESP]                ; 0042fa58
    CALL core_xform.cpp_buildRotationX_FUN_00584f70 ; 0042fa5b
        ;   XREF to: 00584f70 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationX_FUN_00584f70(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042fa60
    LEA ESI,[ESP + 0x9c]                ; 0042fa65
    ADD ESP,0x4                         ; 0042fa6c
    LEA EAX,[ESP + 0xc8]                ; 0042fa6f
    MOVSD.REP ES:EDI,ESI                ; 0042fa76
    PUSH EAX                            ; 0042fa78
    LEA ESI,[ESP + 0x27c]               ; 0042fa79
    LEA EDI,[ESP + 0x12c]               ; 0042fa80
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0042fa87
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042fa8c
    LEA ESI,[ESP + 0x27c]               ; 0042fa91
    ADD ESP,0x8                         ; 0042fa98
    LEA EAX,[ESP + 0x124]               ; 0042fa9b
    MOVSD.REP ES:EDI,ESI                ; 0042faa2
    PUSH EAX                            ; 0042faa4
    LEA ESI,[ESP + 0x218]               ; 0042faa5
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0042faac
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0042fab1
    LEA EAX,[EBX + 0x30]                ; 0042fab4
    LEA EDI,[ESP + 0x60]                ; 0042fab7
    PUSH EAX                            ; 0042fabb
    LEA EAX,[EBX + 0x20]                ; 0042fabc
    MOV ECX,0xc                         ; 0042fabf
    PUSH EAX                            ; 0042fac4
    LEA EAX,[ESP + 0x158]               ; 0042fac5
    LEA ESI,[ESP + 0x218]               ; 0042facc
    PUSH EAX                            ; 0042fad3
    MOVSD.REP ES:EDI,ESI                ; 0042fad4
    CALL core_xform.cpp_FUN_00583800    ; 0042fad6
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00583800(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042fadb
    MOV EDX,dword ptr [ESP + 0x300]     ; 0042fade
    MOV EDX,dword ptr [EDX + 0x4]       ; 0042fae5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042fae8
    SUB EAX,EDX                         ; 0042faef
    ADD EBX,0xfd8                       ; 0042faf1
    SHL EAX,0x4                         ; 0042faf7
    ADD EAX,EBX                         ; 0042fafa
    PUSH EAX                            ; 0042fafc
    LEA ESI,[ESP + 0x1e4]               ; 0042fafd
    LEA EDI,[ESP + 0x1b4]               ; 0042fb04
    CALL core_xform.cpp_inverse_FUN_00584560 ; 0042fb0b
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_00584560()
    ADD ESP,0x4                         ; 0042fb10
    LEA EAX,[ESP + 0x1b0]               ; 0042fb13
    MOV ECX,0xc                         ; 0042fb1a
    PUSH EAX                            ; 0042fb1f
    LEA EAX,[ESP + 0x154]               ; 0042fb20
    LEA ESI,[ESP + 0x1e4]               ; 0042fb27
    PUSH EAX                            ; 0042fb2e
    LEA EAX,[ESP + 0x68]                ; 0042fb2f
    MOVSD.REP ES:EDI,ESI                ; 0042fb33
    PUSH EAX                            ; 0042fb35
    LEA ESI,[ESP + 0x18c]               ; 0042fb36
    LEA EDI,[ESP + 0xc]                 ; 0042fb3d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0042fb41
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042fb46
    LEA ESI,[ESP + 0x18c]               ; 0042fb4b
    ADD ESP,0x8                         ; 0042fb52
    LEA EAX,[ESP + 0x4]                 ; 0042fb55
    MOVSD.REP ES:EDI,ESI                ; 0042fb59
    PUSH EAX                            ; 0042fb5b
    LEA ESI,[ESP + 0x248]               ; 0042fb5c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0042fb63
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0042fb68
    MOV EDI,dword ptr [ESP + 0x300]     ; 0042fb6b
    MOV ECX,0xc                         ; 0042fb72
    LEA ESI,[ESP + 0x240]               ; 0042fb77
    LEA EDI,[EDI + 0x8]                 ; 0042fb7e
    MOVSD.REP ES:EDI,ESI                ; 0042fb81
    MOV ESP,EBP                         ; 0042fb83
        ;   Label: LAB_0042fb83
    POP EBP                             ; 0042fb85
    POP EDI                             ; 0042fb86
    POP ESI                             ; 0042fb87
    POP EBX                             ; 0042fb88
    RET                                 ; 0042fb89
    MOV ECX,dword ptr [EDX]             ; 0042fb8a
        ;   Label: LAB_0042fb8a
    PUSH ECX                            ; 0042fb8c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042fb8d
    PUSH EBX                            ; 0042fb93
    CALL dword ptr [EAX + 0x118]        ; 0042fb94
    ADD ESP,0x8                         ; 0042fb9a
    MOV EDX,dword ptr [ESP + 0x300]     ; 0042fb9d
    MOV dword ptr [EDX + 0x4],EAX       ; 0042fba4
    JMP 0x0042f7e7                      ; 0042fba7
        ;   XREF to: 0042f7e7 (UNCONDITIONAL_JUMP)  ; LAB_0042f7e7
    XOR ESI,ESI                         ; 0042fbac
        ;   Label: LAB_0042fbac
    MOV dword ptr [ESP + 0x2e0],ESI     ; 0042fbae
    MOV dword ptr [ESP + 0x2dc],ESI     ; 0042fbb5
    MOV dword ptr [ESP + 0x2e4],ESI     ; 0042fbbc
    JMP 0x0042f8c9                      ; 0042fbc3
        ;   XREF to: 0042f8c9 (UNCONDITIONAL_JUMP)  ; LAB_0042f8c9

