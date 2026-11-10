; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0054dfd0(CDeformableModelInstance *param_1,float *param_2,float param_3,int param_4,undefined4 param_5,CDeformableModel_MotionBlendWeightFunc *param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_005d202c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_0054dbd0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   core_xform.cpp_multiplyQuaternion_FUN_00585990
;   core_xform.cpp_quaternionFromAngleX_FUN_00585cd0
;   core_xform.cpp_quaternionFromAngleY_FUN_00585d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dfd0
        ;   Label: core_skeleton.cpp_FUN_0054dfd0
    PUSH EBP                            ; 0054dfd1
    SUB ESP,0xc8                        ; 0054dfd2
    MOV EBP,dword ptr [ESP + 0xd4]      ; 0054dfd8
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0054dfdf
    FLD float ptr [ESP + 0xdc]          ; 0054dfe6
    FCOMP double ptr [0x005d202c]       ; 0054dfed | DAT_005d202c
    FNSTSW AX                           ; 0054dff3
    SAHF                                ; 0054dff5
    JA 0x0054e001                       ; 0054dff6
        ;   XREF to: 0054e001 (CONDITIONAL_JUMP)  ; LAB_0054e001
    ADD ESP,0xc8                        ; 0054dff8
    POP EBP                             ; 0054dffe
    POP EBX                             ; 0054dfff
    RET                                 ; 0054e000
    PUSH EDI                            ; 0054e001
        ;   Label: LAB_0054e001
    PUSH ESI                            ; 0054e002
    PUSH EBP                            ; 0054e003
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054e004
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e009
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0054e00c
    PUSH EDX                            ; 0054e013
    PUSH EBP                            ; 0054e014
    LEA ESI,[ESP + 0xb4]                ; 0054e015
    LEA EDI,[ESP + 0xc0]                ; 0054e01c
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0054e023
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA ESI,[ESP + 0xb4]                ; 0054e028
    ADD ESP,0x8                         ; 0054e02f
    MOVSD ES:EDI,ESI                    ; 0054e032
    MOVSD ES:EDI,ESI                    ; 0054e033
    MOVSD ES:EDI,ESI                    ; 0054e034
    FLD float ptr [EBX]                 ; 0054e035
    FLD float ptr [EBX + 0x4]           ; 0054e037
    FLD float ptr [EBX + 0x8]           ; 0054e03a
    LEA EDI,[ESP + 0x94]                ; 0054e03d
    LEA ESI,[ESP + 0xc4]                ; 0054e044
    FXCH ST2                            ; 0054e04b
    FSUB float ptr [ESP + 0xb8]         ; 0054e04d
    FXCH                                ; 0054e054
    FSUB float ptr [ESP + 0xbc]         ; 0054e056
    FXCH ST2                            ; 0054e05d
    FSUB float ptr [ESP + 0xc0]         ; 0054e05f
    FXCH                                ; 0054e066
    FSTP float ptr [ESP + 0xc4]         ; 0054e068
    FXCH                                ; 0054e06f
    FSTP float ptr [ESP + 0xc8]         ; 0054e071
    FSTP float ptr [ESP + 0xcc]         ; 0054e078
    MOVSD ES:EDI,ESI                    ; 0054e07f
    MOVSD ES:EDI,ESI                    ; 0054e080
    MOVSD ES:EDI,ESI                    ; 0054e081
    LEA ESI,[ESP + 0x94]                ; 0054e082
    PUSH ESI                            ; 0054e089
    LEA ESI,[ESP + 0xa4]                ; 0054e08a
    LEA EDI,[ESP + 0x8c]                ; 0054e091
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0054e098
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0xa4]                ; 0054e09d
    ADD ESP,0x4                         ; 0054e0a4
    MOVSD ES:EDI,ESI                    ; 0054e0a7
    MOVSD ES:EDI,ESI                    ; 0054e0a8
    MOVSD ES:EDI,ESI                    ; 0054e0a9
    PUSH dword ptr [ESP + 0x88]         ; 0054e0aa
    LEA ESI,[ESP + 0x5c]                ; 0054e0b1
    LEA EDI,[ESP + 0x1c]                ; 0054e0b5
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00585cd0 ; 0054e0b9
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00585cd0()
    LEA ESI,[ESP + 0x5c]                ; 0054e0be
    ADD ESP,0x4                         ; 0054e0c2
    MOVSD ES:EDI,ESI                    ; 0054e0c5
    MOVSD ES:EDI,ESI                    ; 0054e0c6
    MOVSD ES:EDI,ESI                    ; 0054e0c7
    MOVSD ES:EDI,ESI                    ; 0054e0c8
    LEA ESI,[ESP + 0x18]                ; 0054e0c9
    PUSH ESI                            ; 0054e0cd
    PUSH dword ptr [ESP + 0x90]         ; 0054e0ce
    LEA ESI,[ESP + 0x70]                ; 0054e0d5
    LEA EDI,[ESP + 0x80]                ; 0054e0d9
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00585d10 ; 0054e0e0
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00585d10()
    LEA ESI,[ESP + 0x70]                ; 0054e0e5
    ADD ESP,0x4                         ; 0054e0e9
    MOVSD ES:EDI,ESI                    ; 0054e0ec
    MOVSD ES:EDI,ESI                    ; 0054e0ed
    MOVSD ES:EDI,ESI                    ; 0054e0ee
    MOVSD ES:EDI,ESI                    ; 0054e0ef
    LEA ESI,[ESP + 0x7c]                ; 0054e0f0
    PUSH ESI                            ; 0054e0f4
    MOV ECX,dword ptr [ESP + 0xf4]      ; 0054e0f5
    PUSH ECX                            ; 0054e0fc
    LEA ESI,[ESP + 0x44]                ; 0054e0fd
    LEA EDI,[ESP + 0x14]                ; 0054e101
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054e105
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x44]                ; 0054e10a
    ADD ESP,0x8                         ; 0054e10e
    MOVSD ES:EDI,ESI                    ; 0054e111
    MOVSD ES:EDI,ESI                    ; 0054e112
    MOVSD ES:EDI,ESI                    ; 0054e113
    MOVSD ES:EDI,ESI                    ; 0054e114
    LEA ESI,[ESP + 0xc]                 ; 0054e115
    PUSH ESI                            ; 0054e119
    LEA ESI,[ESP + 0x30]                ; 0054e11a
    LEA EDI,[ESP + 0x50]                ; 0054e11e
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0054e122
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0054e127
    LEA ESI,[ESP + 0x28]                ; 0054e12a
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0054e12e
    MOVSD ES:EDI,ESI                    ; 0054e135
    MOVSD ES:EDI,ESI                    ; 0054e136
    MOVSD ES:EDI,ESI                    ; 0054e137
    MOVSD ES:EDI,ESI                    ; 0054e138
    PUSH EBX                            ; 0054e139
    MOV ESI,dword ptr [ESP + 0xec]      ; 0054e13a
    PUSH ESI                            ; 0054e141
    LEA ESI,[ESP + 0x50]                ; 0054e142
    PUSH dword ptr [ESP + 0xec]         ; 0054e146
    PUSH ESI                            ; 0054e14d
    PUSH EBP                            ; 0054e14e
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0 ; 0054e14f
        ;   XREF to: 0054d8f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0054e154
    POP ESI                             ; 0054e157
    POP EDI                             ; 0054e158
    ADD ESP,0xc8                        ; 0054e159
    POP EBP                             ; 0054e15f
    POP EBX                             ; 0054e160
    RET                                 ; 0054e161

