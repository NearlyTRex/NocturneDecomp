; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c0]:1  local_1c0
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[5]:
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 at 0042dff4
;   core_charactr.cpp_CCharacter_FUN_0042f3e0 at 0042f717
;   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800 at 0042f825
;   core_gabriela.cpp_FUN_004d5550 at 004d556c
;   core_mobster.cpp_FUN_00525840 at 00525889
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
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042d090
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
    MOV ECX,0xc                         ; 0042d128
    LEA EDI,[ESP + 0x68]                ; 0042d12d
    LEA ESI,[ESP + 0xc8]                ; 0042d131
    ADD ESP,0x8                         ; 0042d138
    MOVSD.REP ES:EDI,ESI                ; 0042d13b
    FLD float ptr [EBX + 0x40]          ; 0042d13d
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
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    ADD ESP,0x8                         ; 0042d1a6
    LEA EAX,[ESP + 0x24c]               ; 0042d1a9
    MOV ECX,0xc                         ; 0042d1b0
    PUSH EAX                            ; 0042d1b5
    LEA EAX,[ESP + 0x4]                 ; 0042d1b6
    LEA ESI,[ESP + 0x184]               ; 0042d1ba
    PUSH EAX                            ; 0042d1c1
    MOVSD.REP ES:EDI,ESI                ; 0042d1c2
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 0042d1c4
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_getTranslation_FUN_005f6110(CVector3f * output_vector, CMatrix3x4f * input_matrix)
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
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CVector3f * euler_out, CMatrix3x3f * matrix_ptr)
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
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * output_matrix, CMatrix3x4f * input_matrix)
    MOV ECX,0xc                         ; 0042d250
    ADD ESP,0x4                         ; 0042d255
    LEA EAX,[ESP + 0x210]               ; 0042d258
    LEA ESI,[ESP + 0x30]                ; 0042d25f
    PUSH EAX                            ; 0042d263
    LEA EAX,[ESP + 0x64]                ; 0042d264
    MOVSD.REP ES:EDI,ESI                ; 0042d268
    PUSH EAX                            ; 0042d26a
    LEA ESI,[ESP + 0x98]                ; 0042d26b
    LEA EDI,[ESP + 0x1e8]               ; 0042d272
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042d279
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    MOV ECX,0xc                         ; 0042d27e
    LEA ESI,[ESP + 0x98]                ; 0042d283
    ADD ESP,0x8                         ; 0042d28a
    MOVSD.REP ES:EDI,ESI                ; 0042d28d
    LEA EAX,[ESP + 0x1e0]               ; 0042d28f
    PUSH dword ptr [EBX + 0x40]         ; 0042d296
    PUSH EAX                            ; 0042d299
    LEA EAX,[EBX + 0xc]                 ; 0042d29a
    PUSH EAX                            ; 0042d29d
    LEA ESI,[ESP + 0x12c]               ; 0042d29e
    LEA EDI,[ESP + 0xfc]                ; 0042d2a5
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 0042d2ac
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t)
    MOV ECX,0xc                         ; 0042d2b1
    LEA ESI,[ESP + 0x12c]               ; 0042d2b6
    ADD ESP,0xc                         ; 0042d2bd
    MOVSD.REP ES:EDI,ESI                ; 0042d2c0
    IMUL EAX,dword ptr [EBX],0x30       ; 0042d2c2
    ADD EAX,dword ptr [ESP + 0x260]     ; 0042d2c5
    PUSH EAX                            ; 0042d2cc
    LEA EAX,[ESP + 0xf4]                ; 0042d2cd
    PUSH EAX                            ; 0042d2d4
    LEA ESI,[ESP + 0x158]               ; 0042d2d5
    LEA EDI,[ESP + 0x68]                ; 0042d2dc
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042d2e0
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    MOV ECX,0xc                         ; 0042d2e5
    LEA ESI,[ESP + 0x158]               ; 0042d2ea
    ADD ESP,0x8                         ; 0042d2f1
    MOVSD.REP ES:EDI,ESI                ; 0042d2f4
    JMP 0x0042d169                      ; 0042d2f6
        ;   XREF to: 0042d169 (UNCONDITIONAL_JUMP)  ; LAB_0042d169

