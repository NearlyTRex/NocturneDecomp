; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_process_FUN_0041d020(CLightActor *this_ptr,float delta_time)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_matrixToEulerAngles_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d020
        ;   Label: core_boxactor.cpp_CLightActor_process_FUN_0041d020
    PUSH EBP                            ; 0041d021
    SUB ESP,0xf4                        ; 0041d022
    MOV EBX,dword ptr [ESP + 0x100]     ; 0041d028
    PUSH dword ptr [ESP + 0x104]        ; 0041d02f
    PUSH EBX                            ; 0041d036
    CALL core_boxactor.cpp_CBoxActor_process_FUN_0041c090 ; 0041d037
        ;   XREF to: 0041c090 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_process_FUN_0041c090(CBoxActor * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x7d4]     ; 0041d03c
    ADD ESP,0x8                         ; 0041d042
    CMP EDX,0x2                         ; 0041d045
    JZ 0x0041d06d                       ; 0041d048
        ;   XREF to: 0041d06d (CONDITIONAL_JUMP)  ; LAB_0041d06d
    CMP dword ptr [EBX + 0x7d4],0x3     ; 0041d04a
        ;   Label: LAB_0041d04a
    JZ 0x0041d0e7                       ; 0041d051
        ;   XREF to: 0041d0e7 (CONDITIONAL_JUMP)  ; LAB_0041d0e7
    CMP dword ptr [EBX + 0x248c],0x0    ; 0041d057
    JNZ 0x0041d155                      ; 0041d05e
        ;   XREF to: 0041d155 (CONDITIONAL_JUMP)  ; LAB_0041d155
    ADD ESP,0xf4                        ; 0041d064
    POP EBP                             ; 0041d06a
    POP EBX                             ; 0041d06b
    RET                                 ; 0041d06c
    FLD float ptr [EBX + 0x37a0]        ; 0041d06d
        ;   Label: LAB_0041d06d
    FSUB float ptr [ESP + 0x104]        ; 0041d073
    FST float ptr [EBX + 0x37a0]        ; 0041d07a
    FLDZ                                ; 0041d080
    FCOMPP                              ; 0041d082
    FNSTSW AX                           ; 0041d084
    SAHF                                ; 0041d086
    JC 0x0041d04a                       ; 0041d087
        ;   XREF to: 0041d04a (CONDITIONAL_JUMP)  ; LAB_0041d04a
    PUSH 0x0                            ; 0041d089
    PUSH 0x0                            ; 0041d08b
    PUSH 0x0                            ; 0041d08d
    PUSH 0x7                            ; 0041d08f
    PUSH 0x0                            ; 0041d091
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0041d093
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    MOV EDX,EAX                         ; 0041d098
    SHL EAX,0x2                         ; 0041d09a
    ADD EAX,EDX                         ; 0041d09d
    SHL EAX,0x2                         ; 0041d09f
    SUB EAX,EDX                         ; 0041d0a2
    SHL EAX,0x2                         ; 0041d0a4
    ADD ESP,0x8                         ; 0041d0a7
    ADD EAX,0x7bc9ec                    ; 0041d0aa
    PUSH EAX                            ; 0041d0af
    LEA EAX,[EBX + 0x7d8]               ; 0041d0b0
    PUSH EAX                            ; 0041d0b6
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600 ; 0041d0b7
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0041d0bc
    PUSH 0x3e19999a                     ; 0041d0bf
    PUSH 0x0                            ; 0041d0c4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041d0c6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0041d0cb
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0041d0d2
    MOV dword ptr [EBX + 0x37a0],EAX    ; 0041d0d9
    ADD ESP,0x8                         ; 0041d0df
    JMP 0x0041d04a                      ; 0041d0e2
        ;   XREF to: 0041d04a (UNCONDITIONAL_JUMP)  ; LAB_0041d04a
    LEA EAX,[EBX + 0x20]                ; 0041d0e7
        ;   Label: LAB_0041d0e7
    PUSH EAX                            ; 0041d0ea
    ADD EBX,0x37a4                      ; 0041d0eb
    PUSH EBX                            ; 0041d0f1
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 0041d0f2
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0041d0f7
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0041d0fa
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 0041d0ff
    AND EDX,0x7fff                      ; 0041d101
    MOV EAX,EDX                         ; 0041d107
    MOV dword ptr [EBX + 0x3c],EDX      ; 0041d109
    SAR EDX,0x1f                        ; 0041d10c
    SHL EDX,0x8                         ; 0041d10f
    SBB EAX,EDX                         ; 0041d112
    SAR EAX,0x8                         ; 0041d114
    MOV EDX,EAX                         ; 0041d117
    SAR EDX,0x1f                        ; 0041d119
    SHL EDX,0x2                         ; 0041d11c
    SBB EAX,EDX                         ; 0041d11f
    SAR EAX,0x2                         ; 0041d121
    PUSH 0x40000000                     ; 0041d124
    PUSH EBX                            ; 0041d129
    MOV byte ptr [EBX + 0x1c],AL        ; 0041d12a
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 0041d12d
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0041d132
    PUSH EBX                            ; 0041d135
    MOV EBP,dword ptr [0x0061b5a8]      ; 0041d136 | g_CDemonSetPtr
    PUSH EBP                            ; 0041d13c
    MOV dword ptr [EBX + 0x20],0x0      ; 0041d13d
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0 ; 0041d144
        ;   XREF to: 005306b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 0041d149
    ADD ESP,0xf4                        ; 0041d14c
    POP EBP                             ; 0041d152
    POP EBX                             ; 0041d153
    RET                                 ; 0041d154
    PUSH EDI                            ; 0041d155
        ;   Label: LAB_0041d155
    PUSH ESI                            ; 0041d156
    LEA EAX,[EBX + 0x3788]              ; 0041d157
    PUSH EAX                            ; 0041d15d
    PUSH EBX                            ; 0041d15e
    LEA ESI,[ESP + 0xf4]                ; 0041d15f
    LEA EDI,[ESP + 0xe8]                ; 0041d166
    CALL core_actor.cpp_FUN_00408d70    ; 0041d16d
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xf4]                ; 0041d172
    LEA EAX,[ESP + 0xe8]                ; 0041d179
    ADD ESP,0x8                         ; 0041d180
    LEA EDX,[EBX + 0x7dc]               ; 0041d183
    MOVSD ES:EDI,ESI                    ; 0041d189
    MOVSD ES:EDI,ESI                    ; 0041d18a
    MOVSD ES:EDI,ESI                    ; 0041d18b
    CMP EDX,EAX                         ; 0041d18c
    JZ 0x0041d1ad                       ; 0041d18e
        ;   XREF to: 0041d1ad (CONDITIONAL_JUMP)  ; LAB_0041d1ad
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0041d190
    MOV dword ptr [EDX],EAX             ; 0041d197
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0041d199
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d1a0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0041d1a3
    MOV dword ptr [EDX + 0x8],EAX       ; 0041d1aa
    LEA EAX,[EBX + 0x3794]              ; 0041d1ad
        ;   Label: LAB_0041d1ad
    PUSH EAX                            ; 0041d1b3
    PUSH 0x265370c                      ; 0041d1b4
    LEA EAX,[ESP + 0x70]                ; 0041d1b9
    PUSH EAX                            ; 0041d1bd
    CALL core_xform.cpp_FUN_00591c10    ; 0041d1be
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 0041d1c3
    LEA EAX,[EBX + 0x30]                ; 0041d1c6
    PUSH EAX                            ; 0041d1c9
    PUSH 0x265370c                      ; 0041d1ca
    LEA EAX,[ESP + 0xa0]                ; 0041d1cf
    PUSH EAX                            ; 0041d1d6
    CALL core_xform.cpp_FUN_00591c10    ; 0041d1d7
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 0041d1dc
    LEA EAX,[ESP + 0x98]                ; 0041d1df
    PUSH EAX                            ; 0041d1e6
    LEA EAX,[ESP + 0x6c]                ; 0041d1e7
    PUSH EAX                            ; 0041d1eb
    LEA ESI,[ESP + 0x10]                ; 0041d1ec
    LEA EDI,[ESP + 0x40]                ; 0041d1f0
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 0041d1f4
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0041d1f9
    LEA ESI,[ESP + 0x10]                ; 0041d1fe
    ADD ESP,0x8                         ; 0041d202
    LEA EAX,[ESP + 0x38]                ; 0041d205
    MOVSD.REP ES:EDI,ESI                ; 0041d209
    PUSH EAX                            ; 0041d20b
    LEA ESI,[ESP + 0xcc]                ; 0041d20c
    LEA EDI,[ESP + 0xd8]                ; 0041d213
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 0041d21a
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    LEA ESI,[ESP + 0xcc]                ; 0041d21f
    ADD ESP,0x4                         ; 0041d226
    MOVSD ES:EDI,ESI                    ; 0041d229
    MOVSD ES:EDI,ESI                    ; 0041d22a
    MOVSD ES:EDI,ESI                    ; 0041d22b
    LEA EAX,[ESP + 0xd4]                ; 0041d22c
    LEA ESI,[EBX + 0x7d8]               ; 0041d233
    PUSH EAX                            ; 0041d239
    ADD EBX,0x7e8                       ; 0041d23a
    PUSH EBX                            ; 0041d240
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0041d241
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041d246
    PUSH ESI                            ; 0041d249
    MOV EDI,dword ptr [0x0061b5a8]      ; 0041d24a | g_CDemonSetPtr
    PUSH EDI                            ; 0041d250
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630 ; 0041d251
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 0041d256
    POP ESI                             ; 0041d259
    POP EDI                             ; 0041d25a
    ADD ESP,0xf4                        ; 0041d25b
    POP EBP                             ; 0041d261
    POP EBX                             ; 0041d262
    RET                                 ; 0041d263

