; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_0051def0(CMobster *this_ptr,float delta_time)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_mobster.cpp_CMobster_process_FUN_0051ce40 at 0051d39b
;
; Referenced Globals:
;   TerminatedCString s_core_mobster_cpp_005e9e1a
;   TerminatedCString s_CMobster_aimTommyGun_I_m_005e9e2e
;   undefined4 DAT_005e9e5e
;   undefined4 DAT_005e9e62
;   undefined4 DAT_005e9e6a
;   undefined4 g_CHeroClassInfo.name_hash
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d33c08
;   undefined4 DAT_01d33c28
;   undefined4 DAT_02c8af28
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_enemy.cpp_FUN_004a0980
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
;   core_skeleton.cpp_FUN_00568100
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_quaternionFromAngleX_FUN_005b7af0
;   core_xform.cpp_quaternionFromAngleY_FUN_005b7b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051def0
        ;   Label: core_mobster.cpp_CMobster_aimTommyGun_FUN_0051def0
    PUSH ESI                            ; 0051def1
    PUSH EDI                            ; 0051def2
    PUSH EBP                            ; 0051def3
    MOV EBP,ESP                         ; 0051def4
    SUB ESP,0xa4                        ; 0051def6
    AND ESP,0xfffffff8                  ; 0051defc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051deff
    MOV EDX,dword ptr [EBX + 0x2628]    ; 0051df02
    TEST EDX,EDX                        ; 0051df08
    JZ 0x0051df23                       ; 0051df0a
        ;   XREF to: 0051df23 (CONDITIONAL_JUMP)  ; LAB_0051df23
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0051df0c
    TEST ECX,ECX                        ; 0051df12
    JNZ 0x0051df2b                      ; 0051df14
        ;   XREF to: 0051df2b (CONDITIONAL_JUMP)  ; LAB_0051df2b
    MOV dword ptr [EBX + 0xc338],ECX    ; 0051df16
    MOV ESP,EBP                         ; 0051df1c
        ;   Label: LAB_0051df1c
    POP EBP                             ; 0051df1e
    POP EDI                             ; 0051df1f
    POP ESI                             ; 0051df20
    POP EBX                             ; 0051df21
    RET                                 ; 0051df22
    MOV dword ptr [EBX + 0xc338],EDX    ; 0051df23
        ;   Label: LAB_0051df23
    JMP 0x0051df1c                      ; 0051df29
        ;   XREF to: 0051df1c (UNCONDITIONAL_JUMP)  ; LAB_0051df1c
    PUSH ECX                            ; 0051df2b
        ;   Label: LAB_0051df2b
    PUSH EBX                            ; 0051df2c
    CALL core_enemy.cpp_FUN_004a0980    ; 0051df2d
        ;   XREF to: 004a0980 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0980()
    ADD ESP,0x8                         ; 0051df32
    TEST EAX,EAX                        ; 0051df35
    JZ 0x0051e245                       ; 0051df37
        ;   XREF to: 0051e245 (CONDITIONAL_JUMP)  ; LAB_0051e245
    MOV EAX,[0x02c99770]                ; 0051df3d | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0051df3d
    PUSH EAX                            ; 0051df42
    MOV EDX,dword ptr [EBX + 0x2628]    ; 0051df43
    PUSH EDX                            ; 0051df49
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051df4a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0051df4f
    TEST EAX,EAX                        ; 0051df52
    JNZ 0x0051df79                      ; 0051df54
        ;   XREF to: 0051df79 (CONDITIONAL_JUMP)  ; LAB_0051df79
    MOV ECX,0x5e9e1a                    ; 0051df56 | = "..\\core\\mobster.cpp"
    MOV ESI,0x323                       ; 0051df5b
    PUSH 0x5e9e2e                       ; 0051df60 | = "CMobster::aimTommyGun - I'm not carry..."
    MOV dword ptr [0x01d1d400],ECX      ; 0051df65 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051df6b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051df71
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051df76
    MOV EDI,0x3f490fdb                  ; 0051df79
        ;   Label: LAB_0051df79
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 0051df7e
    MOV dword ptr [ESP + 0x4],EDI       ; 0051df84
    TEST EAX,EAX                        ; 0051df88
    JZ 0x0051df94                       ; 0051df8a
        ;   XREF to: 0051df94 (CONDITIONAL_JUMP)  ; LAB_0051df94
    MOV dword ptr [ESP + 0x4],0x3fc90fdb ; 0051df8c
    MOV ESI,dword ptr [0x01d33c08]      ; 0051df94 | DAT_01d33c08
        ;   Label: LAB_0051df94
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051df9a
    SUB EAX,ESI                         ; 0051dfa1
    MOV ESI,EAX                         ; 0051dfa3
    SHL ESI,0x4                         ; 0051dfa5
    LEA EAX,[EBX + 0xfd8]               ; 0051dfa8
    ADD EAX,ESI                         ; 0051dfae
    PUSH EAX                            ; 0051dfb0
    PUSH 0x2c8af28                      ; 0051dfb1 | DAT_02c8af28
    LEA ESI,[ESP + 0x7c]                ; 0051dfb6
    LEA EDI,[ESP + 0x58]                ; 0051dfba
    CALL core_xform.cpp_FUN_005b5080    ; 0051dfbe
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0051dfc3
    LEA EAX,[ESP + 0x50]                ; 0051dfc6
    LEA ESI,[ESP + 0x74]                ; 0051dfca
    PUSH EAX                            ; 0051dfce
    MOVSD ES:EDI,ESI                    ; 0051dfcf
    MOVSD ES:EDI,ESI                    ; 0051dfd0
    MOVSD ES:EDI,ESI                    ; 0051dfd1
    PUSH EBX                            ; 0051dfd2
    LEA ESI,[ESP + 0x94]                ; 0051dfd3
    LEA EDI,[ESP + 0x40]                ; 0051dfda
    CALL core_actor.cpp_FUN_00408b40    ; 0051dfde
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x94]                ; 0051dfe3
    ADD ESP,0x8                         ; 0051dfea
    MOVSD ES:EDI,ESI                    ; 0051dfed
    MOVSD ES:EDI,ESI                    ; 0051dfee
    MOVSD ES:EDI,ESI                    ; 0051dfef
    MOV ECX,dword ptr [0x01d06b10]      ; 0051dff0 | g_CHeroClassInfo.name_hash
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0051dff6
    LEA EDI,[ESP + 0x5c]                ; 0051dffc
    LEA ESI,[ESP + 0x68]                ; 0051e000
    FLD float ptr [EAX + 0x20]          ; 0051e004
    FLD float ptr [EAX + 0x24]          ; 0051e007
    FLD float ptr [EAX + 0x28]          ; 0051e00a
    FXCH ST2                            ; 0051e00d
    FSUB float ptr [ESP + 0x38]         ; 0051e00f
    FXCH                                ; 0051e013
    FSUB float ptr [ESP + 0x3c]         ; 0051e015
    FXCH ST2                            ; 0051e019
    FSUB float ptr [ESP + 0x40]         ; 0051e01b
    FXCH                                ; 0051e01f
    FSTP float ptr [ESP + 0x68]         ; 0051e021
    FXCH                                ; 0051e025
    FSTP float ptr [ESP + 0x6c]         ; 0051e027
    FSTP float ptr [ESP + 0x70]         ; 0051e02b
    MOVSD ES:EDI,ESI                    ; 0051e02f
    MOVSD ES:EDI,ESI                    ; 0051e030
    MOVSD ES:EDI,ESI                    ; 0051e031
    PUSH ECX                            ; 0051e032
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0051e033
    PUSH ESI                            ; 0051e039
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051e03a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0051e03f
    TEST EAX,EAX                        ; 0051e042
    JZ 0x0051e25f                       ; 0051e044
        ;   XREF to: 0051e25f (CONDITIONAL_JUMP)  ; LAB_0051e25f
    FLD float ptr [ESP + 0x60]          ; 0051e04a
    FADD float ptr [0x005e9e62]         ; 0051e04e | DAT_005e9e62
    FSTP float ptr [ESP + 0x60]         ; 0051e054
        ;   Label: LAB_0051e054
    LEA EAX,[ESP + 0x5c]                ; 0051e058
    PUSH EAX                            ; 0051e05c
    LEA ESI,[ESP + 0x84]                ; 0051e05d
    LEA EDI,[ESP + 0x48]                ; 0051e064
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0051e068
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x84]                ; 0051e06d
    ADD ESP,0x4                         ; 0051e074
    MOVSD ES:EDI,ESI                    ; 0051e077
    MOVSD ES:EDI,ESI                    ; 0051e078
    MOVSD ES:EDI,ESI                    ; 0051e079
    FLD float ptr [ESP + 0x48]          ; 0051e07a
    FSUB float ptr [EBX + 0x34]         ; 0051e07e
    SUB ESP,0x4                         ; 0051e081
    FSTP float ptr [ESP]                ; 0051e084
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0051e087
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xa4],EAX      ; 0051e08c
    FLD float ptr [ESP + 0xa4]          ; 0051e093
    ADD ESP,0x4                         ; 0051e09a
    FST float ptr [ESP + 0x48]          ; 0051e09d
    FABS                                ; 0051e0a1
    FLD float ptr [ESP + 0x60]          ; 0051e0a3
    FMUL ST0                            ; 0051e0a7
    FLD float ptr [ESP + 0x5c]          ; 0051e0a9
    FMUL ST0                            ; 0051e0ad
    FADDP                               ; 0051e0af
    FLD float ptr [ESP + 0x64]          ; 0051e0b1
    FMUL ST0                            ; 0051e0b5
    FADDP                               ; 0051e0b7
    FSQRT                               ; 0051e0b9
    FLD float ptr [ESP + 0x4]           ; 0051e0bb
    FXCH                                ; 0051e0bf
    FSTP float ptr [ESP]                ; 0051e0c1
    FCOMPP                              ; 0051e0c4
    FNSTSW AX                           ; 0051e0c6
    SAHF                                ; 0051e0c8
    JBE 0x0051e26e                      ; 0051e0c9
        ;   XREF to: 0051e26e (CONDITIONAL_JUMP)  ; LAB_0051e26e
    FLD float ptr [ESP]                 ; 0051e0cf
    FCOMP double ptr [0x005e9e6a]       ; 0051e0d2 | DAT_005e9e6a
    FNSTSW AX                           ; 0051e0d8
    SAHF                                ; 0051e0da
    JBE 0x0051e26e                      ; 0051e0db
        ;   XREF to: 0051e26e (CONDITIONAL_JUMP)  ; LAB_0051e26e
    FLD float ptr [EBX + 0xc338]        ; 0051e0e1
    FADD float ptr [EBP + 0x18]         ; 0051e0e7
    FST float ptr [EBX + 0xc338]        ; 0051e0ea
    FLD1                                ; 0051e0f0
    FCOMPP                              ; 0051e0f2
    FNSTSW AX                           ; 0051e0f4
    SAHF                                ; 0051e0f6
    JNC 0x0051e103                      ; 0051e0f7
        ;   XREF to: 0051e103 (CONDITIONAL_JUMP)  ; LAB_0051e103
    MOV dword ptr [EBX + 0xc338],0x3f800000 ; 0051e0f9
    FLD float ptr [ESP + 0x44]          ; 0051e103
        ;   Label: LAB_0051e103
    FLD float ptr [ESP + 0x4]           ; 0051e107
    FCHS                                ; 0051e10b
    FSTP float ptr [ESP + 0x9c]         ; 0051e10d
    FCOMP float ptr [ESP + 0x9c]        ; 0051e114
    FNSTSW AX                           ; 0051e11b
    SAHF                                ; 0051e11d
    JNC 0x0051e12b                      ; 0051e11e
        ;   XREF to: 0051e12b (CONDITIONAL_JUMP)  ; LAB_0051e12b
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0051e120
    MOV dword ptr [ESP + 0x44],EAX      ; 0051e127
    FLD float ptr [ESP + 0x44]          ; 0051e12b
        ;   Label: LAB_0051e12b
    FCOMP float ptr [ESP + 0x4]         ; 0051e12f
    FNSTSW AX                           ; 0051e133
    SAHF                                ; 0051e135
    JBE 0x0051e140                      ; 0051e136
        ;   XREF to: 0051e140 (CONDITIONAL_JUMP)  ; LAB_0051e140
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051e138
    MOV dword ptr [ESP + 0x44],EAX      ; 0051e13c
    FLD float ptr [ESP + 0x48]          ; 0051e140
        ;   Label: LAB_0051e140
    FLD float ptr [ESP + 0x4]           ; 0051e144
    FCHS                                ; 0051e148
    FSTP float ptr [ESP + 0x98]         ; 0051e14a
    FCOMP float ptr [ESP + 0x98]        ; 0051e151
    FNSTSW AX                           ; 0051e158
    SAHF                                ; 0051e15a
    JNC 0x0051e168                      ; 0051e15b
        ;   XREF to: 0051e168 (CONDITIONAL_JUMP)  ; LAB_0051e168
    MOV EAX,dword ptr [ESP + 0x98]      ; 0051e15d
    MOV dword ptr [ESP + 0x48],EAX      ; 0051e164
    FLD float ptr [ESP + 0x48]          ; 0051e168
        ;   Label: LAB_0051e168
    FCOMP float ptr [ESP + 0x4]         ; 0051e16c
    FNSTSW AX                           ; 0051e170
    SAHF                                ; 0051e172
    JBE 0x0051e17d                      ; 0051e173
        ;   XREF to: 0051e17d (CONDITIONAL_JUMP)  ; LAB_0051e17d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051e175
    MOV dword ptr [ESP + 0x48],EAX      ; 0051e179
    MOV EDI,dword ptr [EBX + 0x25b0]    ; 0051e17d
        ;   Label: LAB_0051e17d
    LEA EAX,[EBX + 0x158]               ; 0051e183
    TEST EDI,EDI                        ; 0051e189
    JZ 0x0051e299                       ; 0051e18b
        ;   XREF to: 0051e299 (CONDITIONAL_JUMP)  ; LAB_0051e299
    PUSH 0x567360                       ; 0051e191
    MOV ECX,dword ptr [0x01d33c28]      ; 0051e196 | DAT_01d33c28
    PUSH ECX                            ; 0051e19c
    PUSH dword ptr [EBX + 0xc338]       ; 0051e19d
    PUSH 0x40c00000                     ; 0051e1a3
    PUSH 0x6                            ; 0051e1a8
    PUSH EAX                            ; 0051e1aa
        ;   Label: LAB_0051e1aa
    CALL core_skeleton.cpp_FUN_00568100 ; 0051e1ab
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    ADD ESP,0x18                        ; 0051e1b0
    PUSH dword ptr [ESP + 0x44]         ; 0051e1b3
    LEA ESI,[ESP + 0x1c]                ; 0051e1b7
    LEA EDI,[ESP + 0xc]                 ; 0051e1bb
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005b7af0 ; 0051e1bf
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_005b7af0()
    LEA ESI,[ESP + 0x1c]                ; 0051e1c4
    ADD ESP,0x4                         ; 0051e1c8
    MOVSD ES:EDI,ESI                    ; 0051e1cb
    MOVSD ES:EDI,ESI                    ; 0051e1cc
    MOVSD ES:EDI,ESI                    ; 0051e1cd
    MOVSD ES:EDI,ESI                    ; 0051e1ce
    PUSH 0x567360                       ; 0051e1cf
    MOV ESI,dword ptr [0x01d33c28]      ; 0051e1d4 | DAT_01d33c28
    PUSH ESI                            ; 0051e1da
    LEA EAX,[ESP + 0x10]                ; 0051e1db
    PUSH dword ptr [EBX + 0xc338]       ; 0051e1df
    PUSH EAX                            ; 0051e1e5
    LEA EAX,[EBX + 0x158]               ; 0051e1e6
    PUSH EAX                            ; 0051e1ec
    MOV dword ptr [ESP + 0xb4],EAX      ; 0051e1ed
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0051e1f4
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0051e1f9
    LEA ESI,[ESP + 0x28]                ; 0051e1fc
    PUSH dword ptr [ESP + 0x48]         ; 0051e200
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0051e204
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    ADD ESP,0x4                         ; 0051e209
    LEA EDI,[ESP + 0x8]                 ; 0051e20c
    PUSH 0x567360                       ; 0051e210
    MOV EAX,[0x01d33c28]                ; 0051e215 | DAT_01d33c28
    LEA ESI,[ESP + 0x2c]                ; 0051e21a
    PUSH EAX                            ; 0051e21e
    MOVSD ES:EDI,ESI                    ; 0051e21f
    MOVSD ES:EDI,ESI                    ; 0051e220
    MOVSD ES:EDI,ESI                    ; 0051e221
    MOVSD ES:EDI,ESI                    ; 0051e222
    LEA EAX,[ESP + 0x10]                ; 0051e223
    PUSH dword ptr [EBX + 0xc338]       ; 0051e227
    PUSH EAX                            ; 0051e22d
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0051e22e
    PUSH EDX                            ; 0051e235
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0051e236
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0051e23b
    MOV ESP,EBP                         ; 0051e23e
    POP EBP                             ; 0051e240
    POP EDI                             ; 0051e241
    POP ESI                             ; 0051e242
    POP EBX                             ; 0051e243
    RET                                 ; 0051e244
    CMP dword ptr [EBX + 0xc294],0x0    ; 0051e245
        ;   Label: LAB_0051e245
    JNZ 0x0051df3d                      ; 0051e24c
        ;   XREF to: 0051df3d (CONDITIONAL_JUMP)  ; LAB_0051df3d
    MOV dword ptr [EBX + 0xc338],EAX    ; 0051e252
    MOV ESP,EBP                         ; 0051e258
    POP EBP                             ; 0051e25a
    POP EDI                             ; 0051e25b
    POP ESI                             ; 0051e25c
    POP EBX                             ; 0051e25d
    RET                                 ; 0051e25e
    FLD float ptr [ESP + 0x60]          ; 0051e25f
        ;   Label: LAB_0051e25f
    FADD float ptr [0x005e9e5e]         ; 0051e263 | DAT_005e9e5e
    JMP 0x0051e054                      ; 0051e269
        ;   XREF to: 0051e054 (UNCONDITIONAL_JUMP)  ; LAB_0051e054
    FLD float ptr [EBX + 0xc338]        ; 0051e26e
        ;   Label: LAB_0051e26e
    FSUB float ptr [EBP + 0x18]         ; 0051e274
    FST float ptr [EBX + 0xc338]        ; 0051e277
    FLDZ                                ; 0051e27d
    FCOMPP                              ; 0051e27f
    FNSTSW AX                           ; 0051e281
    SAHF                                ; 0051e283
    JBE 0x0051e103                      ; 0051e284
        ;   XREF to: 0051e103 (CONDITIONAL_JUMP)  ; LAB_0051e103
    MOV dword ptr [EBX + 0xc338],0x0    ; 0051e28a
    JMP 0x0051e103                      ; 0051e294
        ;   XREF to: 0051e103 (UNCONDITIONAL_JUMP)  ; LAB_0051e103
    PUSH 0x567360                       ; 0051e299
        ;   Label: LAB_0051e299
    MOV EDX,dword ptr [0x01d33c28]      ; 0051e29e | DAT_01d33c28
    PUSH EDX                            ; 0051e2a4
    PUSH dword ptr [EBX + 0xc338]       ; 0051e2a5
    PUSH 0x40c00000                     ; 0051e2ab
    PUSH 0x2                            ; 0051e2b0
    JMP 0x0051e1aa                      ; 0051e2b2
        ;   XREF to: 0051e1aa (UNCONDITIONAL_JUMP)  ; LAB_0051e1aa

