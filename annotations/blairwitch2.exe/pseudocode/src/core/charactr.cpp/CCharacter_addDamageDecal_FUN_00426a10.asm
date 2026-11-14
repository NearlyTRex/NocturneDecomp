; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00426a10(CCharacter *this_ptr)
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
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 at 00428176
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
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
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   core_xform.cpp_buildRotationX_FUN_00593240
;   core_xform.cpp_buildRotationY_FUN_005932c0
;   core_xform.cpp_FUN_00591ad0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_inverse_FUN_00592830
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426a10
        ;   Label: core_charactr.cpp_CCharacter_addDamageDecal_FUN_00426a10
    PUSH ESI                            ; 00426a11
    PUSH EDI                            ; 00426a12
    PUSH EBP                            ; 00426a13
    MOV EBP,ESP                         ; 00426a14
    SUB ESP,0x308                       ; 00426a16
    AND ESP,0xfffffff8                  ; 00426a1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00426a1f
    MOV EDX,dword ptr [EBX + 0x3448]    ; 00426a22
    CMP EDX,0x5                         ; 00426a28
    JGE 0x00426e23                      ; 00426a2b
        ;   XREF to: 00426e23 (CONDITIONAL_JUMP)  ; LAB_00426e23
    MOV ECX,dword ptr [0x0061b5a8]      ; 00426a31 | g_CDemonSetPtr
    CMP dword ptr [ECX + 0x14d148],0x0  ; 00426a37 | g_CDemonSetInstance.collision_part_index
    JL 0x00426e23                       ; 00426a3e
        ;   XREF to: 00426e23 (CONDITIONAL_JUMP)  ; LAB_00426e23
    LEA EAX,[EDX*0x8 + 0x0]             ; 00426a44
    MOV EDI,dword ptr [EBX + 0x3448]    ; 00426a4b
    MOV EDX,EAX                         ; 00426a51
    SHL EAX,0x3                         ; 00426a53
    INC EDI                             ; 00426a56
    SUB EAX,EDX                         ; 00426a57
    LEA EDX,[EBX + 0x344c]              ; 00426a59
    MOV dword ptr [EBX + 0x3448],EDI    ; 00426a5f
    ADD EDX,EAX                         ; 00426a65
    MOV EAX,dword ptr [ECX + 0x14d148]  ; 00426a67 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [EDX],EAX             ; 00426a6d
    MOV EAX,dword ptr [ECX + 0x14d14c]  ; 00426a6f | g_CDemonSetInstance.collision_bone_index
    MOV dword ptr [ESP + 0x300],EDX     ; 00426a75
    MOV dword ptr [EDX + 0x4],EAX       ; 00426a7c
    TEST EAX,EAX                        ; 00426a7f
    JL 0x00426e2a                       ; 00426a81
        ;   XREF to: 00426e2a (CONDITIONAL_JUMP)  ; LAB_00426e2a
    MOV EDX,dword ptr [0x0061b5a8]      ; 00426a87 | g_CDemonSetPtr
        ;   Label: LAB_00426a87
    LEA EAX,[EDX + 0x14d11c]            ; 00426a8d
    LEA EDI,[ESP + 0x2a0]               ; 00426a93
    LEA ESI,[ESP + 0x2d0]               ; 00426a9a
    FLD float ptr [EAX]                 ; 00426aa1 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 00426aa3 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 00426aa6 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 00426aa9
    FSUB float ptr [EDX + 0x14d110]     ; 00426aab | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 00426ab1
    FSUB float ptr [EDX + 0x14d114]     ; 00426ab3 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 00426ab9
    FSUB float ptr [EDX + 0x14d118]     ; 00426abb | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 00426ac1
    FSTP float ptr [ESP + 0x2d0]        ; 00426ac3
    FXCH                                ; 00426aca
    FSTP float ptr [ESP + 0x2d4]        ; 00426acc
    FSTP float ptr [ESP + 0x2d8]        ; 00426ad3
    MOVSD ES:EDI,ESI                    ; 00426ada
    MOVSD ES:EDI,ESI                    ; 00426adb
    MOVSD ES:EDI,ESI                    ; 00426adc
    LEA EDI,[ESP + 0x2dc]               ; 00426add
    LEA ESI,[ESP + 0x2d0]               ; 00426ae4
    MOVSD ES:EDI,ESI                    ; 00426aeb
    MOVSD ES:EDI,ESI                    ; 00426aec
    MOVSD ES:EDI,ESI                    ; 00426aed
    FLD float ptr [ESP + 0x2e0]         ; 00426aee
    FMUL ST0                            ; 00426af5
    FLD float ptr [ESP + 0x2dc]         ; 00426af7
    FMUL ST0                            ; 00426afe
    FADDP                               ; 00426b00
    FLD float ptr [ESP + 0x2e4]         ; 00426b02
    FMUL ST0                            ; 00426b09
    FADDP                               ; 00426b0b
    FSQRT                               ; 00426b0d
    FLDZ                                ; 00426b0f
    FXCH                                ; 00426b11
    FSTP float ptr [ESP + 0x2f8]        ; 00426b13
    FCOMP float ptr [ESP + 0x2f8]       ; 00426b1a
    FNSTSW AX                           ; 00426b21
    SAHF                                ; 00426b23
    JNC 0x00426e4c                      ; 00426b24
        ;   XREF to: 00426e4c (CONDITIONAL_JUMP)  ; LAB_00426e4c
    FLD1                                ; 00426b2a
    FLD float ptr [ESP + 0x2dc]         ; 00426b2c
    FXCH                                ; 00426b33
    FDIV float ptr [ESP + 0x2f8]        ; 00426b35
    FXCH                                ; 00426b3c
    FMUL ST1                            ; 00426b3e
    FLD float ptr [ESP + 0x2e0]         ; 00426b40
    FMUL ST2                            ; 00426b47
    FLD float ptr [ESP + 0x2e4]         ; 00426b49
    FMULP ST3                           ; 00426b50
    FXCH                                ; 00426b52
    FSTP float ptr [ESP + 0x2dc]        ; 00426b54
    FSTP float ptr [ESP + 0x2e0]        ; 00426b5b
    FSTP float ptr [ESP + 0x2e4]        ; 00426b62
    PUSH 0x3f19999a                     ; 00426b69
        ;   Label: LAB_00426b69
    PUSH 0x3e99999a                     ; 00426b6e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00426b73
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x30c],EAX     ; 00426b78
    FLD float ptr [ESP + 0x30c]         ; 00426b7f
    ADD ESP,0x8                         ; 00426b86
    FLD float ptr [ESP + 0x2dc]         ; 00426b89
    FXCH                                ; 00426b90
    FSTP float ptr [ESP + 0x2fc]        ; 00426b92
    FMUL float ptr [ESP + 0x2fc]        ; 00426b99
    FLD float ptr [ESP + 0x2e0]         ; 00426ba0
    FMUL float ptr [ESP + 0x2fc]        ; 00426ba7
    MOV EAX,[0x0061b5a8]                ; 00426bae | g_CDemonSetPtr
    FLD float ptr [ESP + 0x2e4]         ; 00426bb3
    FMUL float ptr [ESP + 0x2fc]        ; 00426bba
    FLD float ptr [EAX + 0x14d138]      ; 00426bc1 | g_CDemonSetInstance.collision_impact_position.x
    FLD float ptr [EAX + 0x14d13c]      ; 00426bc7 | g_CDemonSetInstance.collision_impact_position.y
    FLD float ptr [EAX + 0x14d140]      ; 00426bcd | g_CDemonSetInstance.collision_impact_position.z
    FXCH ST5                            ; 00426bd3
    FSTP float ptr [ESP + 0x2dc]        ; 00426bd5
    FXCH ST3                            ; 00426bdc
    FSTP float ptr [ESP + 0x2e0]        ; 00426bde
    FXCH                                ; 00426be5
    FSTP float ptr [ESP + 0x2e4]        ; 00426be7
    FSUB float ptr [ESP + 0x2dc]        ; 00426bee
    FXCH                                ; 00426bf5
    FSUB float ptr [ESP + 0x2e0]        ; 00426bf7
    FXCH ST2                            ; 00426bfe
    FSUB float ptr [ESP + 0x2e4]        ; 00426c00
    FXCH                                ; 00426c07
    FSTP float ptr [ESP + 0x2b8]        ; 00426c09
    FXCH                                ; 00426c10
    FSTP float ptr [ESP + 0x2bc]        ; 00426c12
    FSTP float ptr [ESP + 0x2c0]        ; 00426c19
    LEA EDI,[ESP + 0x2ac]               ; 00426c20
    LEA ESI,[ESP + 0x2b8]               ; 00426c27
    LEA EAX,[ESP + 0x2a0]               ; 00426c2e
    MOVSD ES:EDI,ESI                    ; 00426c35
    MOVSD ES:EDI,ESI                    ; 00426c36
    MOVSD ES:EDI,ESI                    ; 00426c37
    PUSH EAX                            ; 00426c38
    LEA ESI,[ESP + 0x2ec]               ; 00426c39
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00426c40
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 00426c45
    LEA EAX,[ESP + 0x2c4]               ; 00426c48
    PUSH EAX                            ; 00426c4f
    LEA EAX,[ESP + 0x2b0]               ; 00426c50
    LEA EDI,[ESP + 0x2c8]               ; 00426c57
    PUSH EAX                            ; 00426c5e
    LEA EAX,[ESP + 0x68]                ; 00426c5f
    LEA ESI,[ESP + 0x2f0]               ; 00426c63
    PUSH EAX                            ; 00426c6a
    MOVSD ES:EDI,ESI                    ; 00426c6b
    MOVSD ES:EDI,ESI                    ; 00426c6c
    MOVSD ES:EDI,ESI                    ; 00426c6d
    CALL core_xform.cpp_FUN_00591c10    ; 00426c6e
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 00426c73
    LEA EAX,[ESP + 0x60]                ; 00426c76
    PUSH EAX                            ; 00426c7a
    PUSH 0x3d0efa35                     ; 00426c7b
    PUSH 0xbd0efa35                     ; 00426c80
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00426c85
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x310],EAX     ; 00426c8a
    FLD float ptr [ESP + 0x310]         ; 00426c91
    ADD ESP,0x8                         ; 00426c98
    SUB ESP,0x4                         ; 00426c9b
    LEA ESI,[ESP + 0x38]                ; 00426c9e
    FSTP float ptr [ESP]                ; 00426ca2
    CALL core_xform.cpp_buildRotationY_FUN_005932c0 ; 00426ca5
        ;   XREF to: 005932c0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005932c0(float angle_radians, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 00426caa
    LEA EAX,[ESP + 0xf4]                ; 00426cad
    PUSH EAX                            ; 00426cb4
    LEA EDI,[ESP + 0xf8]                ; 00426cb5
    MOV ECX,0xc                         ; 00426cbc
    PUSH 0x3d0efa35                     ; 00426cc1
    LEA ESI,[ESP + 0x3c]                ; 00426cc6
    PUSH 0xbd0efa35                     ; 00426cca
    MOVSD.REP ES:EDI,ESI                ; 00426ccf
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00426cd1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x314],EAX     ; 00426cd6
    FLD float ptr [ESP + 0x314]         ; 00426cdd
    ADD ESP,0x8                         ; 00426ce4
    LEA ESI,[ESP + 0x98]                ; 00426ce7
    SUB ESP,0x4                         ; 00426cee
    LEA EDI,[ESP + 0xcc]                ; 00426cf1
    FSTP float ptr [ESP]                ; 00426cf8
    CALL core_xform.cpp_buildRotationX_FUN_00593240 ; 00426cfb
        ;   XREF to: 00593240 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationX_FUN_00593240(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00426d00
    LEA ESI,[ESP + 0x9c]                ; 00426d05
    ADD ESP,0x4                         ; 00426d0c
    LEA EAX,[ESP + 0xc8]                ; 00426d0f
    MOVSD.REP ES:EDI,ESI                ; 00426d16
    PUSH EAX                            ; 00426d18
    LEA ESI,[ESP + 0x27c]               ; 00426d19
    LEA EDI,[ESP + 0x12c]               ; 00426d20
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00426d27
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00426d2c
    LEA ESI,[ESP + 0x27c]               ; 00426d31
    ADD ESP,0x8                         ; 00426d38
    LEA EAX,[ESP + 0x124]               ; 00426d3b
    MOVSD.REP ES:EDI,ESI                ; 00426d42
    PUSH EAX                            ; 00426d44
    LEA ESI,[ESP + 0x218]               ; 00426d45
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00426d4c
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 00426d51
    LEA EAX,[EBX + 0x30]                ; 00426d54
    LEA EDI,[ESP + 0x60]                ; 00426d57
    PUSH EAX                            ; 00426d5b
    LEA EAX,[EBX + 0x20]                ; 00426d5c
    MOV ECX,0xc                         ; 00426d5f
    PUSH EAX                            ; 00426d64
    LEA EAX,[ESP + 0x158]               ; 00426d65
    LEA ESI,[ESP + 0x218]               ; 00426d6c
    PUSH EAX                            ; 00426d73
    MOVSD.REP ES:EDI,ESI                ; 00426d74
    CALL core_xform.cpp_FUN_00591ad0    ; 00426d76
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00426d7b
    MOV EDX,dword ptr [ESP + 0x300]     ; 00426d7e
    MOV EDX,dword ptr [EDX + 0x4]       ; 00426d85
    LEA EAX,[EDX*0x4 + 0x0]             ; 00426d88
    SUB EAX,EDX                         ; 00426d8f
    ADD EBX,0x1134                      ; 00426d91
    SHL EAX,0x4                         ; 00426d97
    ADD EAX,EBX                         ; 00426d9a
    PUSH EAX                            ; 00426d9c
    LEA ESI,[ESP + 0x1e4]               ; 00426d9d
    LEA EDI,[ESP + 0x1b4]               ; 00426da4
    CALL core_xform.cpp_inverse_FUN_00592830 ; 00426dab
        ;   XREF to: 00592830 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_00592830()
    ADD ESP,0x4                         ; 00426db0
    LEA EAX,[ESP + 0x1b0]               ; 00426db3
    MOV ECX,0xc                         ; 00426dba
    PUSH EAX                            ; 00426dbf
    LEA EAX,[ESP + 0x154]               ; 00426dc0
    LEA ESI,[ESP + 0x1e4]               ; 00426dc7
    PUSH EAX                            ; 00426dce
    LEA EAX,[ESP + 0x68]                ; 00426dcf
    MOVSD.REP ES:EDI,ESI                ; 00426dd3
    PUSH EAX                            ; 00426dd5
    LEA ESI,[ESP + 0x18c]               ; 00426dd6
    LEA EDI,[ESP + 0xc]                 ; 00426ddd
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00426de1
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00426de6
    LEA ESI,[ESP + 0x18c]               ; 00426deb
    ADD ESP,0x8                         ; 00426df2
    LEA EAX,[ESP + 0x4]                 ; 00426df5
    MOVSD.REP ES:EDI,ESI                ; 00426df9
    PUSH EAX                            ; 00426dfb
    LEA ESI,[ESP + 0x248]               ; 00426dfc
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00426e03
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 00426e08
    MOV EDI,dword ptr [ESP + 0x300]     ; 00426e0b
    MOV ECX,0xc                         ; 00426e12
    LEA ESI,[ESP + 0x240]               ; 00426e17
    LEA EDI,[EDI + 0x8]                 ; 00426e1e
    MOVSD.REP ES:EDI,ESI                ; 00426e21
    MOV ESP,EBP                         ; 00426e23
        ;   Label: LAB_00426e23
    POP EBP                             ; 00426e25
    POP EDI                             ; 00426e26
    POP ESI                             ; 00426e27
    POP EBX                             ; 00426e28
    RET                                 ; 00426e29
    MOV ECX,dword ptr [EDX]             ; 00426e2a
        ;   Label: LAB_00426e2a
    PUSH ECX                            ; 00426e2c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00426e2d
    PUSH EBX                            ; 00426e33
    CALL dword ptr [EAX + 0x120]        ; 00426e34
    ADD ESP,0x8                         ; 00426e3a
    MOV EDX,dword ptr [ESP + 0x300]     ; 00426e3d
    MOV dword ptr [EDX + 0x4],EAX       ; 00426e44
    JMP 0x00426a87                      ; 00426e47
        ;   XREF to: 00426a87 (UNCONDITIONAL_JUMP)  ; LAB_00426a87
    XOR ESI,ESI                         ; 00426e4c
        ;   Label: LAB_00426e4c
    MOV dword ptr [ESP + 0x2e0],ESI     ; 00426e4e
    MOV dword ptr [ESP + 0x2dc],ESI     ; 00426e55
    MOV dword ptr [ESP + 0x2e4],ESI     ; 00426e5c
    JMP 0x00426b69                      ; 00426e63
        ;   XREF to: 00426b69 (UNCONDITIONAL_JUMP)  ; LAB_00426b69

