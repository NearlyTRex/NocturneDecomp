; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00416d70(CBodyPart *this_ptr,CVector3f *euler_angles)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; Local Variables:
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417270 at 004175e9
;
; Referenced Globals:
;   undefined4 DAT_005cbf6a
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408d70
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_004495a0
;   core_xform.cpp_FUN_00591ad0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_matrixToEulerAngles_FUN_00591de0
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_00592280
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416d70
        ;   Label: core_bodypart.cpp_CBodyPart_applyRotation_FUN_00416d70
    PUSH ESI                            ; 00416d71
    PUSH EDI                            ; 00416d72
    PUSH EBP                            ; 00416d73
    SUB ESP,0x1f0                       ; 00416d74
    MOV EDX,dword ptr [ESP + 0x208]     ; 00416d7a
    PUSH EDX                            ; 00416d81
    LEA EAX,[ESP + 0x124]               ; 00416d82
    PUSH EAX                            ; 00416d89
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 00416d8a
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00416d8f
    FLD float ptr [ESP + 0x120]         ; 00416d92
    FMUL float ptr [0x005cbf6a]         ; 00416d99 | DAT_005cbf6a
    FLD float ptr [ESP + 0x124]         ; 00416d9f
    FMUL float ptr [0x005cbf6a]         ; 00416da6 | DAT_005cbf6a
    FLD float ptr [ESP + 0x128]         ; 00416dac
    FMUL float ptr [0x005cbf6a]         ; 00416db3 | DAT_005cbf6a
    FLD float ptr [ESP + 0x12c]         ; 00416db9
    FMUL float ptr [0x005cbf6a]         ; 00416dc0 | DAT_005cbf6a
    FLD float ptr [ESP + 0x130]         ; 00416dc6
    FMUL float ptr [0x005cbf6a]         ; 00416dcd | DAT_005cbf6a
    FLD float ptr [ESP + 0x134]         ; 00416dd3
    FMUL float ptr [0x005cbf6a]         ; 00416dda | DAT_005cbf6a
    FLD float ptr [ESP + 0x138]         ; 00416de0
    FMUL float ptr [0x005cbf6a]         ; 00416de7 | DAT_005cbf6a
    FXCH ST6                            ; 00416ded
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416def
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1d0]       ; 00416df4
    FLD float ptr [ESP + 0x13c]         ; 00416dfb
    FMUL float ptr [0x005cbf6a]         ; 00416e02 | DAT_005cbf6a
    FXCH ST5                            ; 00416e08
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416e0a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1c4]       ; 00416e0f
    FLD float ptr [ESP + 0x140]         ; 00416e16
    FMUL float ptr [0x005cbf6a]         ; 00416e1d | DAT_005cbf6a
    MOV EAX,dword ptr [ESP + 0x204]     ; 00416e23
    XOR EDI,EDI                         ; 00416e2a
    MOV ECX,dword ptr [EAX + 0x2d0]     ; 00416e2c
    FXCH ST4                            ; 00416e32
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416e34
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 00416e39
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416e3b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 00416e40
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416e42
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00416e47
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416e49
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST6                            ; 00416e4e
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416e50
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST5                            ; 00416e55
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416e57
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST4                            ; 00416e5c
    CALL crt_math.c_round_FUN_005b7ff0  ; 00416e5e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 00416e63
    FISTP dword ptr [ESP + 0x1c8]       ; 00416e65
    FXCH                                ; 00416e6c
    FISTP dword ptr [ESP + 0x1cc]       ; 00416e6e
    FISTP dword ptr [ESP + 0x1dc]       ; 00416e75
    FXCH ST3                            ; 00416e7c
    FISTP dword ptr [ESP + 0x1e0]       ; 00416e7e
    FXCH                                ; 00416e85
    FISTP dword ptr [ESP + 0x1d4]       ; 00416e87
    FISTP dword ptr [ESP + 0x1d8]       ; 00416e8e
    FISTP dword ptr [ESP + 0x1e4]       ; 00416e95
    TEST ECX,ECX                        ; 00416e9c
    JLE 0x00416f90                      ; 00416e9e
        ;   XREF to: 00416f90 (CONDITIONAL_JUMP)  ; LAB_00416f90
    XOR ESI,ESI                         ; 00416ea4
    MOV ECX,dword ptr [ESP + 0x204]     ; 00416ea6
        ;   Label: LAB_00416ea6
    MOV ECX,dword ptr [ECX + 0x2d4]     ; 00416ead
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00416eb3
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 00416eba
    IMUL EDX                            ; 00416ebd
    SHRD EAX,EDX,0x10                   ; 00416ebf
    MOV EBX,EAX                         ; 00416ec3
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 00416ec5
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00416ec9
    IMUL EDX                            ; 00416ed0
    SHRD EAX,EDX,0x10                   ; 00416ed2
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 00416ed6
    ADD EBX,EAX                         ; 00416eda
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00416edc
    IMUL EDX                            ; 00416ee3
    SHRD EAX,EDX,0x10                   ; 00416ee5
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 00416ee9
    LEA EBP,[EBX + EAX*0x1]             ; 00416eec
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00416eef
    IMUL EDX                            ; 00416ef6
    SHRD EAX,EDX,0x10                   ; 00416ef8
    MOV EBX,EAX                         ; 00416efc
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 00416efe
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00416f02
    IMUL EDX                            ; 00416f09
    SHRD EAX,EDX,0x10                   ; 00416f0b
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 00416f0f
    ADD EBX,EAX                         ; 00416f13
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00416f15
    IMUL EDX                            ; 00416f1c
    SHRD EAX,EDX,0x10                   ; 00416f1e
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 00416f22
    ADD EBX,EAX                         ; 00416f25
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00416f27
    MOV dword ptr [ESP + 0x1c0],EBX     ; 00416f2e
    IMUL EDX                            ; 00416f35
    SHRD EAX,EDX,0x10                   ; 00416f37
    MOV EBX,EAX                         ; 00416f3b
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 00416f3d
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 00416f41
    IMUL EDX                            ; 00416f48
    SHRD EAX,EDX,0x10                   ; 00416f4a
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 00416f4e
    ADD EBX,EAX                         ; 00416f52
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 00416f54
    IMUL EDX                            ; 00416f5b
    SHRD EAX,EDX,0x10                   ; 00416f5d
    ADD EAX,EBX                         ; 00416f61
    MOV dword ptr [ECX + ESI*0x1],EBP   ; 00416f63
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 00416f66
    MOV dword ptr [ECX + ESI*0x1 + 0x8],EAX ; 00416f6d
    MOV EAX,dword ptr [ESP + 0x204]     ; 00416f71
    MOV dword ptr [ECX + ESI*0x1 + 0x4],EDX ; 00416f78
    INC EDI                             ; 00416f7c
    MOV EBX,dword ptr [EAX + 0x2d0]     ; 00416f7d
    ADD ESI,0xc                         ; 00416f83
    CMP EDI,EBX                         ; 00416f86
    JL 0x00416ea6                       ; 00416f88
        ;   XREF to: 00416ea6 (CONDITIONAL_JUMP)  ; LAB_00416ea6
    MOV EAX,EAX                         ; 00416f8e
    MOV EBX,dword ptr [ESP + 0x204]     ; 00416f90
        ;   Label: LAB_00416f90
    ADD EBX,0x30                        ; 00416f97
    PUSH EBX                            ; 00416f9a
    PUSH 0x265370c                      ; 00416f9b | DAT_0265370c
    LEA EAX,[ESP + 0xc8]                ; 00416fa0
    PUSH EAX                            ; 00416fa7
    CALL core_xform.cpp_FUN_00591ad0    ; 00416fa8
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00416fad
    MOV ESI,dword ptr [ESP + 0x208]     ; 00416fb0
    PUSH ESI                            ; 00416fb7
    PUSH 0x265370c                      ; 00416fb8 | DAT_0265370c
    LEA EAX,[ESP + 0x98]                ; 00416fbd
    PUSH EAX                            ; 00416fc4
    CALL core_xform.cpp_FUN_00591ad0    ; 00416fc5
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00416fca
    LEA EAX,[ESP + 0x90]                ; 00416fcd
    PUSH EAX                            ; 00416fd4
    LEA EAX,[ESP + 0xc4]                ; 00416fd5
    PUSH EAX                            ; 00416fdc
    LEA ESI,[ESP + 0xf8]                ; 00416fdd
    LEA EDI,[ESP + 0x38]                ; 00416fe4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00416fe8
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00416fed
    LEA ESI,[ESP + 0xf8]                ; 00416ff2
    ADD ESP,0x8                         ; 00416ff9
    LEA EAX,[ESP + 0x30]                ; 00416ffc
    MOVSD.REP ES:EDI,ESI                ; 00417000
    PUSH EAX                            ; 00417002
    LEA ESI,[ESP + 0x170]               ; 00417003
    LEA EDI,[ESP + 0x194]               ; 0041700a
    CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_00592280 ; 00417011
        ;   XREF to: 00592280 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAnglesZYX_FUN_00592280()
    LEA ESI,[ESP + 0x170]               ; 00417016
    ADD ESP,0x4                         ; 0041701d
    LEA EAX,[ESP + 0x190]               ; 00417020
    MOVSD ES:EDI,ESI                    ; 00417027
    MOVSD ES:EDI,ESI                    ; 00417028
    MOVSD ES:EDI,ESI                    ; 00417029
    CMP EBX,EAX                         ; 0041702a
    JZ 0x0041704b                       ; 0041702c
        ;   XREF to: 0041704b (CONDITIONAL_JUMP)  ; LAB_0041704b
    MOV EAX,dword ptr [ESP + 0x190]     ; 0041702e
    MOV dword ptr [EBX],EAX             ; 00417035
    MOV EAX,dword ptr [ESP + 0x194]     ; 00417037
    MOV dword ptr [EBX + 0x4],EAX       ; 0041703e
    MOV EAX,dword ptr [ESP + 0x198]     ; 00417041
    MOV dword ptr [EBX + 0x8],EAX       ; 00417048
    MOV EDI,dword ptr [ESP + 0x204]     ; 0041704b
        ;   Label: LAB_0041704b
    PUSH EDI                            ; 00417052
    XOR EBP,EBP                         ; 00417053
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00417055
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EDI + 0x8a8]     ; 0041705a
    ADD ESP,0x4                         ; 00417060
    TEST EDX,EDX                        ; 00417063
    JLE 0x0041713a                      ; 00417065
        ;   XREF to: 0041713a (CONDITIONAL_JUMP)  ; LAB_0041713a
    LEA EBX,[EDI + 0x8ac]               ; 0041706b
    PUSH EBX                            ; 00417071
        ;   Label: LAB_00417071
    LEA EAX,[ESP + 0x124]               ; 00417072
    LEA ESI,[ESP + 0x1ac]               ; 00417079
    PUSH EAX                            ; 00417080
    LEA EDI,[ESP + 0x168]               ; 00417081
    MOV dword ptr [ESP + 0x1f0],EBX     ; 00417088
    CALL core_dirmat.cpp_FUN_004495a0   ; 0041708f
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x1b0]               ; 00417094
    ADD ESP,0x8                         ; 0041709b
    LEA EAX,[ESP + 0x160]               ; 0041709e
    MOVSD ES:EDI,ESI                    ; 004170a5
    MOVSD ES:EDI,ESI                    ; 004170a6
    MOVSD ES:EDI,ESI                    ; 004170a7
    CMP EBX,EAX                         ; 004170a8
    JZ 0x004170c9                       ; 004170aa
        ;   XREF to: 004170c9 (CONDITIONAL_JUMP)  ; LAB_004170c9
    MOV EAX,dword ptr [ESP + 0x160]     ; 004170ac
    MOV dword ptr [EBX],EAX             ; 004170b3
    MOV EAX,dword ptr [ESP + 0x164]     ; 004170b5
    MOV dword ptr [EBX + 0x4],EAX       ; 004170bc
    MOV EAX,dword ptr [ESP + 0x168]     ; 004170bf
    MOV dword ptr [EBX + 0x8],EAX       ; 004170c6
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 004170c9
        ;   Label: LAB_004170c9
    PUSH ECX                            ; 004170d0
    MOV ESI,dword ptr [ESP + 0x208]     ; 004170d1
    PUSH ESI                            ; 004170d8
    LEA ESI,[ESP + 0x1a4]               ; 004170d9
    LEA EDI,[ESP + 0x18c]               ; 004170e0
    CALL core_actor.cpp_FUN_00408d70    ; 004170e7
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x1a4]               ; 004170ec
    ADD ESP,0x8                         ; 004170f3
    MOVSD ES:EDI,ESI                    ; 004170f6
    MOVSD ES:EDI,ESI                    ; 004170f7
    MOVSD ES:EDI,ESI                    ; 004170f8
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 004170f9
    MOV EAX,dword ptr [ESP + 0x184]     ; 00417100
    MOV dword ptr [ECX + 0x2c],EAX      ; 00417107
    MOV EAX,dword ptr [ESP + 0x188]     ; 0041710a
    MOV dword ptr [ECX + 0x30],EAX      ; 00417111
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00417114
    MOV dword ptr [ECX + 0x34],EAX      ; 0041711b
    MOV EAX,dword ptr [ESP + 0x204]     ; 0041711e
    INC EBP                             ; 00417125
    MOV EDI,dword ptr [EAX + 0x8a8]     ; 00417126
    ADD EBX,0x40c                       ; 0041712c
    CMP EBP,EDI                         ; 00417132
    JL 0x00417071                       ; 00417134
        ;   XREF to: 00417071 (CONDITIONAL_JUMP)  ; LAB_00417071
    MOV EAX,dword ptr [ESP + 0x204]     ; 0041713a
        ;   Label: LAB_0041713a
    XOR EBP,EBP                         ; 00417141
    MOV EDX,dword ptr [EAX + 0x3e8]     ; 00417143
    MOV dword ptr [ESP + 0x1ec],EBP     ; 00417149
    TEST EDX,EDX                        ; 00417150
    JLE 0x0041725b                      ; 00417152
        ;   XREF to: 0041725b (CONDITIONAL_JUMP)  ; LAB_0041725b
    LEA EBX,[EAX + 0x3ec]               ; 00417158
    PUSH EBX                            ; 0041715e
        ;   Label: LAB_0041715e
    LEA EAX,[ESP + 0x124]               ; 0041715f
    LEA ESI,[ESP + 0x1b8]               ; 00417166
    PUSH EAX                            ; 0041716d
    LEA EDI,[ESP + 0x180]               ; 0041716e
    MOV EBP,EBX                         ; 00417175
    CALL core_dirmat.cpp_FUN_004495a0   ; 00417177
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x1bc]               ; 0041717c
    ADD ESP,0x8                         ; 00417183
    LEA EAX,[ESP + 0x178]               ; 00417186
    MOVSD ES:EDI,ESI                    ; 0041718d
    MOVSD ES:EDI,ESI                    ; 0041718e
    MOVSD ES:EDI,ESI                    ; 0041718f
    CMP EBX,EAX                         ; 00417190
    JZ 0x004171b1                       ; 00417192
        ;   XREF to: 004171b1 (CONDITIONAL_JUMP)  ; LAB_004171b1
    MOV EAX,dword ptr [ESP + 0x178]     ; 00417194
    MOV dword ptr [EBX],EAX             ; 0041719b
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0041719d
    MOV dword ptr [EBX + 0x4],EAX       ; 004171a4
    MOV EAX,dword ptr [ESP + 0x180]     ; 004171a7
    MOV dword ptr [EBX + 0x8],EAX       ; 004171ae
    ADD EBP,0xc                         ; 004171b1
        ;   Label: LAB_004171b1
    PUSH EBP                            ; 004171b4
    PUSH 0x265370c                      ; 004171b5 | DAT_0265370c
    LEA EAX,[ESP + 0x68]                ; 004171ba
    PUSH EAX                            ; 004171be
    CALL core_xform.cpp_FUN_00591c10    ; 004171bf
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004171c4
    LEA EAX,[ESP + 0x90]                ; 004171c7
    PUSH EAX                            ; 004171ce
    LEA EAX,[ESP + 0x64]                ; 004171cf
    PUSH EAX                            ; 004171d3
    LEA ESI,[ESP + 0x8]                 ; 004171d4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004171d8
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    ADD ESP,0x8                         ; 004171dd
    LEA EAX,[ESP + 0x90]                ; 004171e0
    PUSH EAX                            ; 004171e7
    LEA ESI,[ESP + 0x14c]               ; 004171e8
    LEA EDI,[ESP + 0x158]               ; 004171ef
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 004171f6
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    LEA ESI,[ESP + 0x14c]               ; 004171fb
    ADD ESP,0x4                         ; 00417202
    LEA EAX,[ESP + 0x154]               ; 00417205
    MOVSD ES:EDI,ESI                    ; 0041720c
    MOVSD ES:EDI,ESI                    ; 0041720d
    MOVSD ES:EDI,ESI                    ; 0041720e
    CMP EBP,EAX                         ; 0041720f
    JZ 0x00417231                       ; 00417211
        ;   XREF to: 00417231 (CONDITIONAL_JUMP)  ; LAB_00417231
    MOV EAX,dword ptr [ESP + 0x154]     ; 00417213
    MOV dword ptr [EBP],EAX             ; 0041721a
    MOV EAX,dword ptr [ESP + 0x158]     ; 0041721d
    MOV dword ptr [EBP + 0x4],EAX       ; 00417224
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00417227
    MOV dword ptr [EBP + 0x8],EAX       ; 0041722e
    MOV ECX,dword ptr [ESP + 0x1ec]     ; 00417231
        ;   Label: LAB_00417231
    MOV EDX,dword ptr [ESP + 0x204]     ; 00417238
    ADD EBX,0x194                       ; 0041723f
    INC ECX                             ; 00417245
    MOV ESI,dword ptr [EDX + 0x3e8]     ; 00417246
    MOV dword ptr [ESP + 0x1ec],ECX     ; 0041724c
    CMP ECX,ESI                         ; 00417253
    JL 0x0041715e                       ; 00417255
        ;   XREF to: 0041715e (CONDITIONAL_JUMP)  ; LAB_0041715e
    ADD ESP,0x1f0                       ; 0041725b
        ;   Label: LAB_0041725b
    POP EBP                             ; 00417261
    POP EDI                             ; 00417262
    POP ESI                             ; 00417263
    POP EBX                             ; 00417264
    RET                                 ; 00417265

