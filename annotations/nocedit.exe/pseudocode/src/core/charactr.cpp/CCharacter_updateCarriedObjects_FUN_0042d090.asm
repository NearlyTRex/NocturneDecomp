; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CMatrix3x4f      Stack[-0x274]:48  CStack_274
; CMatrix3x4f      Stack[-0x244]:48  CStack_244
; CMatrix3x4f      Stack[-0x214]:48  CStack_214
; CMatrix3x4f      Stack[-0x1e4]:48  CStack_1e4
; float[12]        Stack[-0x1b4]:48  afStack_1b4
; CMatrix3x4f      Stack[-0x184]:48  CStack_184
; CMatrix3x4f      Stack[-0x154]:48  CStack_154
; CMatrix3x4f      Stack[-0x124]:48  CStack_124
; CMatrix3x4f      Stack[-0xf4]:48  CStack_f4
; CMatrix3x4f      Stack[-0xc4]:48  CStack_c4
; CMatrix3x4f      Stack[-0x94]:48  CStack_94
; CMatrix3x4f      Stack[-0x64]:48  CStack_64
; CVector3f        Stack[-0x34]:12  CStack_34
; CVector3f        Stack[-0x28]:12  local_28
; CVector3f *      Stack[-0x1c]:4  local_1c
; CVector3f *      Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  iStack_14
;
; XREF[5]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 at 0042dff4
;   core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800 at 0042f825
;   core_charactr.cpp_CCharacter_propertyActionCallback_FUN_0042f3e0 at 0042f717
;   core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004d5550 at 004d556c
;   core_mobster.cpp_CMobster_process_FUN_00525840 at 00525889
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d090
        ;   Label: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090
    PUSH ESI                            ; 0042d091
    PUSH EDI                            ; 0042d092
    PUSH EBP                            ; 0042d093
    MOV EBP,ESP                         ; 0042d094
    SUB ESP,0x26c                       ; 0042d096
    AND ESP,0xfffffff8                  ; 0042d09c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042d09f
    ADD EAX,0x30                        ; 0042d0a2
    MOV dword ptr [ESP + 0x258],EAX     ; 0042d0a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042d0ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042d0af
    ADD EAX,0x20                        ; 0042d0b2
    XOR EDX,EDX                         ; 0042d0b5
    MOV dword ptr [ESP + 0x25c],EAX     ; 0042d0b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042d0be
    MOV dword ptr [ESP + 0x268],EDX     ; 0042d0c1
    ADD EAX,0xfd8                       ; 0042d0c8
    ADD EBX,0x24ac                      ; 0042d0cd
    MOV dword ptr [ESP + 0x260],EAX     ; 0042d0d3
    MOV ECX,dword ptr [EBX + 0x8]       ; 0042d0da
        ;   Label: LAB_0042d0da
    MOV dword ptr [ESP + 0x264],EBX     ; 0042d0dd
    TEST ECX,ECX                        ; 0042d0e4
    JNZ 0x0042d106                      ; 0042d0e6
        ;   XREF to: 0042d106 (CONDITIONAL_JUMP)  ; LAB_0042d106
    MOV ESI,dword ptr [ESP + 0x268]     ; 0042d0e8
        ;   Label: LAB_0042d0e8
    INC ESI                             ; 0042d0ef
    ADD EBX,0x44                        ; 0042d0f0
    MOV dword ptr [ESP + 0x268],ESI     ; 0042d0f3
    CMP ESI,0x2                         ; 0042d0fa
    JL 0x0042d0da                       ; 0042d0fd
        ;   XREF to: 0042d0da (CONDITIONAL_JUMP)  ; LAB_0042d0da
    MOV ESP,EBP                         ; 0042d0ff
    POP EBP                             ; 0042d101
    POP EDI                             ; 0042d102
    POP ESI                             ; 0042d103
    POP EBX                             ; 0042d104
    RET                                 ; 0042d105
    MOV ESI,dword ptr [ESP + 0x268]     ; 0042d106
        ;   Label: LAB_0042d106
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042d10d
    PUSH ESI                            ; 0042d110
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042d111
    MOV EAX,dword ptr [EAX + 0x154]     ; 0042d114
    PUSH EDI                            ; 0042d11a
    LEA ESI,[ESP + 0xc8]                ; 0042d11b
    CALL dword ptr [EAX + 0x140]        ; 0042d122
    JMP 0x03fc1e11                      ; 0042d128
        ;   XREF to: 03fc1e11 (UNCONDITIONAL_JUMP)  ; LAB_03fc1e11
    FLD float ptr [EBX + 0x40]          ; 0042d13d
        ;   Label: LAB_0042d13d
    FLD1                                ; 0042d140
    FCOMPP                              ; 0042d142
    FNSTSW AX                           ; 0042d144
    SAHF                                ; 0042d146
    JBE 0x0042d169                      ; 0042d147
        ;   XREF to: 0042d169 (CONDITIONAL_JUMP)  ; LAB_0042d169
    FLD float ptr [EBX + 0x3c]          ; 0042d149
    FMUL float ptr [EBP + 0x18]         ; 0042d14c
    FADD float ptr [EBX + 0x40]         ; 0042d14f
    FST float ptr [EBX + 0x40]          ; 0042d152
    FLD1                                ; 0042d155
    FCOMPP                              ; 0042d157
    FNSTSW AX                           ; 0042d159
    SAHF                                ; 0042d15b
    JNC 0x0042d235                      ; 0042d15c
        ;   XREF to: 0042d235 (CONDITIONAL_JUMP)  ; LAB_0042d235
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 0042d162
    MOV EAX,dword ptr [ESP + 0x258]     ; 0042d169
        ;   Label: LAB_0042d169
    PUSH EAX                            ; 0042d170
    MOV EDX,dword ptr [ESP + 0x260]     ; 0042d171
    PUSH EDX                            ; 0042d178
    LEA EAX,[ESP + 0x1b8]               ; 0042d179
    PUSH EAX                            ; 0042d180
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0042d181
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042d186
    LEA EAX,[ESP + 0x1b0]               ; 0042d189
    PUSH EAX                            ; 0042d190
    LEA EAX,[ESP + 0x64]                ; 0042d191
    PUSH EAX                            ; 0042d195
    LEA ESI,[ESP + 0x188]               ; 0042d196
    LEA EDI,[ESP + 0x8]                 ; 0042d19d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042d1a1
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0042d1a6
    LEA EAX,[ESP + 0x24c]               ; 0042d1a9
    JMP 0x03fc1e77                      ; 0042d1b0
        ;   XREF to: 03fc1e77 (UNCONDITIONAL_JUMP)  ; LAB_03fc1e77
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 0042d1c4
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
        ;   Label: LAB_0042d1c4
    ADD ESP,0x8                         ; 0042d1c9
    MOV EDX,dword ptr [ESP + 0x264]     ; 0042d1cc
    MOV EDX,dword ptr [EDX + 0x8]       ; 0042d1d3
    MOV ECX,dword ptr [EAX]             ; 0042d1d6
    MOV dword ptr [EDX + 0x20],ECX      ; 0042d1d8
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042d1db
    MOV dword ptr [EDX + 0x24],ECX      ; 0042d1de
    FLD float ptr [EAX + 0x8]           ; 0042d1e1
    LEA EAX,[ESP + 0x240]               ; 0042d1e4
    PUSH EAX                            ; 0042d1eb
    LEA EAX,[ESP + 0x4]                 ; 0042d1ec
    PUSH EAX                            ; 0042d1f0
    FSTP float ptr [EDX + 0x28]         ; 0042d1f1
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0042d1f4
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0042d1f9
    MOV EDX,dword ptr [ESP + 0x264]     ; 0042d1fc
    MOV EDX,dword ptr [EDX + 0x8]       ; 0042d203
    ADD EDX,0x30                        ; 0042d206
    CMP EDX,EAX                         ; 0042d209
    JZ 0x0042d21d                       ; 0042d20b
        ;   XREF to: 0042d21d (CONDITIONAL_JUMP)  ; LAB_0042d21d
    MOV ECX,dword ptr [EAX]             ; 0042d20d
    MOV dword ptr [EDX],ECX             ; 0042d20f
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042d211
    MOV dword ptr [EDX + 0x4],ECX       ; 0042d214
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042d217
    MOV dword ptr [EDX + 0x8],ECX       ; 0042d21a
    MOV EAX,dword ptr [ESP + 0x264]     ; 0042d21d
        ;   Label: LAB_0042d21d
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042d224
    PUSH ECX                            ; 0042d227
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0042d228
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042d22d
    JMP 0x0042d0e8                      ; 0042d230
        ;   XREF to: 0042d0e8 (UNCONDITIONAL_JUMP)  ; LAB_0042d0e8
    IMUL EAX,dword ptr [EBX],0x30       ; 0042d235
        ;   Label: LAB_0042d235
    ADD EAX,dword ptr [ESP + 0x260]     ; 0042d238
    PUSH EAX                            ; 0042d23f
    LEA ESI,[ESP + 0x34]                ; 0042d240
    LEA EDI,[ESP + 0x214]               ; 0042d244
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0042d24b
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    JMP 0x03fc1edc                      ; 0042d250
        ;   XREF to: 03fc1edc (UNCONDITIONAL_JUMP)  ; LAB_03fc1edc
    PUSH EAX                            ; 0042d26a
        ;   Label: LAB_0042d26a
    LEA ESI,[ESP + 0x98]                ; 0042d26b
    LEA EDI,[ESP + 0x1e8]               ; 0042d272
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042d279
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc1f47                      ; 0042d27e
        ;   XREF to: 03fc1f47 (UNCONDITIONAL_JUMP)  ; LAB_03fc1f47
    LEA EAX,[ESP + 0x1e0]               ; 0042d28f
        ;   Label: LAB_0042d28f
    PUSH dword ptr [EBX + 0x40]         ; 0042d296
    PUSH EAX                            ; 0042d299
    LEA EAX,[EBX + 0xc]                 ; 0042d29a
    PUSH EAX                            ; 0042d29d
    LEA ESI,[ESP + 0x12c]               ; 0042d29e
    LEA EDI,[ESP + 0xfc]                ; 0042d2a5
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 0042d2ac
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    JMP 0x03fc1fa9                      ; 0042d2b1
        ;   XREF to: 03fc1fa9 (UNCONDITIONAL_JUMP)  ; LAB_03fc1fa9
    IMUL EAX,dword ptr [EBX],0x30       ; 0042d2c2
        ;   Label: LAB_0042d2c2
    ADD EAX,dword ptr [ESP + 0x260]     ; 0042d2c5
    PUSH EAX                            ; 0042d2cc
    LEA EAX,[ESP + 0xf4]                ; 0042d2cd
    PUSH EAX                            ; 0042d2d4
    LEA ESI,[ESP + 0x158]               ; 0042d2d5
    LEA EDI,[ESP + 0x68]                ; 0042d2dc
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042d2e0
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc200b                      ; 0042d2e5
        ;   XREF to: 03fc200b (UNCONDITIONAL_JUMP)  ; LAB_03fc200b
    JMP 0x0042d169                      ; 0042d2f6
        ;   XREF to: 0042d169 (UNCONDITIONAL_JUMP)  ; LAB_0042d169
        ;   Label: LAB_0042d2f6
    MOV ECX,0xc                         ; 03fc1e11
        ;   Label: LAB_03fc1e11
    LEA EDI,[ESP + 0x68]                ; 03fc1e16
    LEA ESI,[ESP + 0xc8]                ; 03fc1e1a
    ADD ESP,0x8                         ; 03fc1e21
    MOV ECX,dword ptr [ESI]             ; 03fc1e24
    MOV dword ptr [EDI],ECX             ; 03fc1e26
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1e28
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1e2b
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1e2e
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1e31
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1e34
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1e37
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1e3a
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1e3d
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1e40
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1e43
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1e46
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1e49
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1e4c
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1e4f
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1e52
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1e55
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1e58
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1e5b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1e5e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1e61
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1e64
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1e67
    ADD ESI,0x30                        ; 03fc1e6a
    ADD EDI,0x30                        ; 03fc1e6d
    XOR ECX,ECX                         ; 03fc1e70
    JMP 0x0042d13d                      ; 03fc1e72
        ;   XREF to: 0042d13d (UNCONDITIONAL_JUMP)  ; LAB_0042d13d
    MOV ECX,0xc                         ; 03fc1e77
        ;   Label: LAB_03fc1e77
    PUSH EAX                            ; 03fc1e7c
    LEA EAX,[ESP + 0x4]                 ; 03fc1e7d
    LEA ESI,[ESP + 0x184]               ; 03fc1e81
    PUSH EAX                            ; 03fc1e88
    MOV ECX,dword ptr [ESI]             ; 03fc1e89
    MOV dword ptr [EDI],ECX             ; 03fc1e8b
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1e8d
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1e90
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1e93
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1e96
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1e99
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1e9c
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1e9f
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1ea2
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1ea5
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1ea8
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1eab
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1eae
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1eb1
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1eb4
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1eb7
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1eba
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1ebd
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1ec0
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1ec3
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1ec6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1ec9
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1ecc
    ADD ESI,0x30                        ; 03fc1ecf
    ADD EDI,0x30                        ; 03fc1ed2
    XOR ECX,ECX                         ; 03fc1ed5
    JMP 0x0042d1c4                      ; 03fc1ed7
        ;   XREF to: 0042d1c4 (UNCONDITIONAL_JUMP)  ; LAB_0042d1c4
    MOV ECX,0xc                         ; 03fc1edc
        ;   Label: LAB_03fc1edc
    ADD ESP,0x4                         ; 03fc1ee1
    LEA EAX,[ESP + 0x210]               ; 03fc1ee4
    LEA ESI,[ESP + 0x30]                ; 03fc1eeb
    PUSH EAX                            ; 03fc1eef
    LEA EAX,[ESP + 0x64]                ; 03fc1ef0
    MOV ECX,dword ptr [ESI]             ; 03fc1ef4
    MOV dword ptr [EDI],ECX             ; 03fc1ef6
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1ef8
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1efb
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1efe
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1f01
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1f04
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1f07
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1f0a
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1f0d
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1f10
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1f13
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1f16
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1f19
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1f1c
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1f1f
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1f22
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1f25
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1f28
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1f2b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1f2e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1f31
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1f34
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1f37
    ADD ESI,0x30                        ; 03fc1f3a
    ADD EDI,0x30                        ; 03fc1f3d
    XOR ECX,ECX                         ; 03fc1f40
    JMP 0x0042d26a                      ; 03fc1f42
        ;   XREF to: 0042d26a (UNCONDITIONAL_JUMP)  ; LAB_0042d26a
    MOV ECX,0xc                         ; 03fc1f47
        ;   Label: LAB_03fc1f47
    LEA ESI,[ESP + 0x98]                ; 03fc1f4c
    ADD ESP,0x8                         ; 03fc1f53
    MOV ECX,dword ptr [ESI]             ; 03fc1f56
    MOV dword ptr [EDI],ECX             ; 03fc1f58
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1f5a
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1f5d
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1f60
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1f63
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1f66
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1f69
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1f6c
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1f6f
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1f72
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1f75
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1f78
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1f7b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1f7e
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1f81
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1f84
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1f87
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1f8a
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1f8d
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1f90
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1f93
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1f96
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1f99
    ADD ESI,0x30                        ; 03fc1f9c
    ADD EDI,0x30                        ; 03fc1f9f
    XOR ECX,ECX                         ; 03fc1fa2
    JMP 0x0042d28f                      ; 03fc1fa4
        ;   XREF to: 0042d28f (UNCONDITIONAL_JUMP)  ; LAB_0042d28f
    MOV ECX,0xc                         ; 03fc1fa9
        ;   Label: LAB_03fc1fa9
    LEA ESI,[ESP + 0x12c]               ; 03fc1fae
    ADD ESP,0xc                         ; 03fc1fb5
    MOV ECX,dword ptr [ESI]             ; 03fc1fb8
    MOV dword ptr [EDI],ECX             ; 03fc1fba
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1fbc
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1fbf
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1fc2
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1fc5
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1fc8
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1fcb
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc1fce
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1fd1
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1fd4
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1fd7
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1fda
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1fdd
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1fe0
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1fe3
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1fe6
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1fe9
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1fec
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1fef
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1ff2
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1ff5
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1ff8
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1ffb
    ADD ESI,0x30                        ; 03fc1ffe
    ADD EDI,0x30                        ; 03fc2001
    XOR ECX,ECX                         ; 03fc2004
    JMP 0x0042d2c2                      ; 03fc2006
        ;   XREF to: 0042d2c2 (UNCONDITIONAL_JUMP)  ; LAB_0042d2c2
    MOV ECX,0xc                         ; 03fc200b
        ;   Label: LAB_03fc200b
    LEA ESI,[ESP + 0x158]               ; 03fc2010
    ADD ESP,0x8                         ; 03fc2017
    MOV ECX,dword ptr [ESI]             ; 03fc201a
    MOV dword ptr [EDI],ECX             ; 03fc201c
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc201e
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2021
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2024
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2027
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc202a
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc202d
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2030
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2033
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc2036
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2039
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc203c
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc203f
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2042
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc2045
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc2048
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc204b
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc204e
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2051
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc2054
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc2057
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc205a
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc205d
    ADD ESI,0x30                        ; 03fc2060
    ADD EDI,0x30                        ; 03fc2063
    XOR ECX,ECX                         ; 03fc2066
    JMP 0x0042d2f6                      ; 03fc2068
        ;   XREF to: 0042d2f6 (UNCONDITIONAL_JUMP)  ; LAB_0042d2f6

