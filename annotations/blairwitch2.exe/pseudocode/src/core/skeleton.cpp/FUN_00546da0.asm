; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00546da0(CDeformableModelInstance *param_1,float *param_2,float param_3,int param_4,undefined4 param_5,CDeformableModel_MotionBlendWeightFunc *param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_005e732f
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_FUN_005466c0
;   core_skeleton.cpp_FUN_005469a0
;   core_vecdir.cpp_FUN_005838f0
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546da0
        ;   Label: core_skeleton.cpp_FUN_00546da0
    PUSH EBP                            ; 00546da1
    SUB ESP,0xc8                        ; 00546da2
    MOV EBP,dword ptr [ESP + 0xd4]      ; 00546da8
    MOV EBX,dword ptr [ESP + 0xd8]      ; 00546daf
    FLD float ptr [ESP + 0xdc]          ; 00546db6
    FCOMP double ptr [0x005e732f]       ; 00546dbd | DAT_005e732f
    FNSTSW AX                           ; 00546dc3
    SAHF                                ; 00546dc5
    JA 0x00546dd1                       ; 00546dc6
        ;   XREF to: 00546dd1 (CONDITIONAL_JUMP)  ; LAB_00546dd1
    ADD ESP,0xc8                        ; 00546dc8
    POP EBP                             ; 00546dce
    POP EBX                             ; 00546dcf
    RET                                 ; 00546dd0
    PUSH EDI                            ; 00546dd1
        ;   Label: LAB_00546dd1
    PUSH ESI                            ; 00546dd2
    PUSH EBP                            ; 00546dd3
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00546dd4
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00546dd9
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00546ddc
    PUSH EDX                            ; 00546de3
    PUSH EBP                            ; 00546de4
    LEA ESI,[ESP + 0xb4]                ; 00546de5
    LEA EDI,[ESP + 0xc0]                ; 00546dec
    CALL core_skeleton.cpp_FUN_005469a0 ; 00546df3
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[ESP + 0xb4]                ; 00546df8
    ADD ESP,0x8                         ; 00546dff
    MOVSD ES:EDI,ESI                    ; 00546e02
    MOVSD ES:EDI,ESI                    ; 00546e03
    MOVSD ES:EDI,ESI                    ; 00546e04
    FLD float ptr [EBX]                 ; 00546e05
    FLD float ptr [EBX + 0x4]           ; 00546e07
    FLD float ptr [EBX + 0x8]           ; 00546e0a
    LEA EDI,[ESP + 0x94]                ; 00546e0d
    LEA ESI,[ESP + 0xc4]                ; 00546e14
    FXCH ST2                            ; 00546e1b
    FSUB float ptr [ESP + 0xb8]         ; 00546e1d
    FXCH                                ; 00546e24
    FSUB float ptr [ESP + 0xbc]         ; 00546e26
    FXCH ST2                            ; 00546e2d
    FSUB float ptr [ESP + 0xc0]         ; 00546e2f
    FXCH                                ; 00546e36
    FSTP float ptr [ESP + 0xc4]         ; 00546e38
    FXCH                                ; 00546e3f
    FSTP float ptr [ESP + 0xc8]         ; 00546e41
    FSTP float ptr [ESP + 0xcc]         ; 00546e48
    MOVSD ES:EDI,ESI                    ; 00546e4f
    MOVSD ES:EDI,ESI                    ; 00546e50
    MOVSD ES:EDI,ESI                    ; 00546e51
    LEA ESI,[ESP + 0x94]                ; 00546e52
    PUSH ESI                            ; 00546e59
    LEA ESI,[ESP + 0xa4]                ; 00546e5a
    LEA EDI,[ESP + 0x8c]                ; 00546e61
    CALL core_vecdir.cpp_FUN_005838f0   ; 00546e68
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0xa4]                ; 00546e6d
    ADD ESP,0x4                         ; 00546e74
    MOVSD ES:EDI,ESI                    ; 00546e77
    MOVSD ES:EDI,ESI                    ; 00546e78
    MOVSD ES:EDI,ESI                    ; 00546e79
    PUSH dword ptr [ESP + 0x88]         ; 00546e7a
    LEA ESI,[ESP + 0x5c]                ; 00546e81
    LEA EDI,[ESP + 0x1c]                ; 00546e85
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00546e89
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    LEA ESI,[ESP + 0x5c]                ; 00546e8e
    ADD ESP,0x4                         ; 00546e92
    MOVSD ES:EDI,ESI                    ; 00546e95
    MOVSD ES:EDI,ESI                    ; 00546e96
    MOVSD ES:EDI,ESI                    ; 00546e97
    MOVSD ES:EDI,ESI                    ; 00546e98
    LEA ESI,[ESP + 0x18]                ; 00546e99
    PUSH ESI                            ; 00546e9d
    PUSH dword ptr [ESP + 0x90]         ; 00546e9e
    LEA ESI,[ESP + 0x70]                ; 00546ea5
    LEA EDI,[ESP + 0x80]                ; 00546ea9
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00546eb0
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0x70]                ; 00546eb5
    ADD ESP,0x4                         ; 00546eb9
    MOVSD ES:EDI,ESI                    ; 00546ebc
    MOVSD ES:EDI,ESI                    ; 00546ebd
    MOVSD ES:EDI,ESI                    ; 00546ebe
    MOVSD ES:EDI,ESI                    ; 00546ebf
    LEA ESI,[ESP + 0x7c]                ; 00546ec0
    PUSH ESI                            ; 00546ec4
    MOV ECX,dword ptr [ESP + 0xf4]      ; 00546ec5
    PUSH ECX                            ; 00546ecc
    LEA ESI,[ESP + 0x44]                ; 00546ecd
    LEA EDI,[ESP + 0x14]                ; 00546ed1
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00546ed5
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x44]                ; 00546eda
    ADD ESP,0x8                         ; 00546ede
    MOVSD ES:EDI,ESI                    ; 00546ee1
    MOVSD ES:EDI,ESI                    ; 00546ee2
    MOVSD ES:EDI,ESI                    ; 00546ee3
    MOVSD ES:EDI,ESI                    ; 00546ee4
    LEA ESI,[ESP + 0xc]                 ; 00546ee5
    PUSH ESI                            ; 00546ee9
    LEA ESI,[ESP + 0x30]                ; 00546eea
    LEA EDI,[ESP + 0x50]                ; 00546eee
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00546ef2
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 00546ef7
    LEA ESI,[ESP + 0x28]                ; 00546efa
    MOV EBX,dword ptr [ESP + 0xf0]      ; 00546efe
    MOVSD ES:EDI,ESI                    ; 00546f05
    MOVSD ES:EDI,ESI                    ; 00546f06
    MOVSD ES:EDI,ESI                    ; 00546f07
    MOVSD ES:EDI,ESI                    ; 00546f08
    PUSH EBX                            ; 00546f09
    MOV ESI,dword ptr [ESP + 0xec]      ; 00546f0a
    PUSH ESI                            ; 00546f11
    LEA ESI,[ESP + 0x50]                ; 00546f12
    PUSH dword ptr [ESP + 0xec]         ; 00546f16
    PUSH ESI                            ; 00546f1d
    PUSH EBP                            ; 00546f1e
    CALL core_skeleton.cpp_FUN_005466c0 ; 00546f1f
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00546f24
    POP ESI                             ; 00546f27
    POP EDI                             ; 00546f28
    ADD ESP,0xc8                        ; 00546f29
    POP EBP                             ; 00546f2f
    POP EBX                             ; 00546f30
    RET                                 ; 00546f31

