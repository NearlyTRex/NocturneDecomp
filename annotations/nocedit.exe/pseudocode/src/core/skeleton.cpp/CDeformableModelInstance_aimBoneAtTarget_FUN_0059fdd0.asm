; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0(CDeformableModelInstance * this_ptr, CVector3f * target_position, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target_position
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   double DOUBLE_0064ee28 = 0.00100000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059fdd0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
    PUSH ESI                            ; 0059fdd1
    SUB ESP,0xa4                        ; 0059fdd2
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0059fdd8
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0059fddf
    FLD float ptr [ESP + 0xb8]          ; 0059fde6
    FCOMP double ptr [0x0064ee28]       ; 0059fded | DOUBLE_0064ee28
    FNSTSW AX                           ; 0059fdf3
    SAHF                                ; 0059fdf5
    JA 0x0059fe01                       ; 0059fdf6
        ;   XREF to: 0059fe01 (CONDITIONAL_JUMP)  ; LAB_0059fe01
    ADD ESP,0xa4                        ; 0059fdf8
    POP ESI                             ; 0059fdfe
    POP EBX                             ; 0059fdff
    RET                                 ; 0059fe00
    PUSH EDI                            ; 0059fe01
        ;   Label: LAB_0059fe01
    PUSH EBX                            ; 0059fe02
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059fe03
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059fe08
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0059fe0b
    PUSH EDX                            ; 0059fe12
    LEA EAX,[ESP + 0xa0]                ; 0059fe13
    PUSH EAX                            ; 0059fe1a
    PUSH EBX                            ; 0059fe1b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0059fe1c
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    FLD float ptr [ESI]                 ; 0059fe21
    FSUB float ptr [EAX]                ; 0059fe23
    ADD ESP,0xc                         ; 0059fe25
    FSTP float ptr [ESP + 0x84]         ; 0059fe28
    FLD float ptr [ESI + 0x4]           ; 0059fe2f
    FSUB float ptr [EAX + 0x4]          ; 0059fe32
    FSTP float ptr [ESP + 0x88]         ; 0059fe35
    FLD float ptr [ESI + 0x8]           ; 0059fe3c
    FSUB float ptr [EAX + 0x8]          ; 0059fe3f
    LEA EAX,[ESP + 0x84]                ; 0059fe42
    PUSH EAX                            ; 0059fe49
    LEA EAX,[ESP + 0x94]                ; 0059fe4a
    PUSH EAX                            ; 0059fe51
    FSTP float ptr [ESP + 0x94]         ; 0059fe52
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0059fe59
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0059fe5e
    LEA ESI,[ESP + 0x74]                ; 0059fe61
    PUSH dword ptr [ESP + 0x90]         ; 0059fe65
    LEA EDI,[ESP + 0x8]                 ; 0059fe6c
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 0059fe70
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
    ADD ESP,0x4                         ; 0059fe75
    LEA EAX,[ESP + 0x4]                 ; 0059fe78
    LEA ESI,[ESP + 0x74]                ; 0059fe7c
    PUSH EAX                            ; 0059fe80
    MOVSD ES:EDI,ESI                    ; 0059fe81
    MOVSD ES:EDI,ESI                    ; 0059fe82
    MOVSD ES:EDI,ESI                    ; 0059fe83
    MOVSD ES:EDI,ESI                    ; 0059fe84
    PUSH dword ptr [ESP + 0x98]         ; 0059fe85
    LEA ESI,[ESP + 0x4c]                ; 0059fe8c
    LEA EDI,[ESP + 0x2c]                ; 0059fe90
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 0059fe94
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
    LEA ESI,[ESP + 0x4c]                ; 0059fe99
    ADD ESP,0x4                         ; 0059fe9d
    LEA EAX,[ESP + 0x28]                ; 0059fea0
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0059fea4
    PUSH EAX                            ; 0059feab
    MOVSD ES:EDI,ESI                    ; 0059feac
    MOVSD ES:EDI,ESI                    ; 0059fead
    MOVSD ES:EDI,ESI                    ; 0059feae
    MOVSD ES:EDI,ESI                    ; 0059feaf
    PUSH ECX                            ; 0059feb0
    LEA ESI,[ESP + 0x60]                ; 0059feb1
    LEA EDI,[ESP + 0x40]                ; 0059feb5
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059feb9
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
    LEA ESI,[ESP + 0x60]                ; 0059febe
    ADD ESP,0x8                         ; 0059fec2
    LEA EAX,[ESP + 0x38]                ; 0059fec5
    MOVSD ES:EDI,ESI                    ; 0059fec9
    MOVSD ES:EDI,ESI                    ; 0059feca
    MOVSD ES:EDI,ESI                    ; 0059fecb
    MOVSD ES:EDI,ESI                    ; 0059fecc
    PUSH EAX                            ; 0059fecd
    LEA ESI,[ESP + 0x6c]                ; 0059fece
    LEA EDI,[ESP + 0x1c]                ; 0059fed2
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059fed6
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)
    LEA ESI,[ESP + 0x6c]                ; 0059fedb
    ADD ESP,0x8                         ; 0059fedf
    MOVSD ES:EDI,ESI                    ; 0059fee2
    MOVSD ES:EDI,ESI                    ; 0059fee3
    MOVSD ES:EDI,ESI                    ; 0059fee4
    MOVSD ES:EDI,ESI                    ; 0059fee5
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0059fee6
    PUSH ESI                            ; 0059feed
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0059feee
    PUSH EDI                            ; 0059fef5
    LEA EAX,[ESP + 0x1c]                ; 0059fef6
    PUSH dword ptr [ESP + 0xc4]         ; 0059fefa
    PUSH EAX                            ; 0059ff01
    PUSH EBX                            ; 0059ff02
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 0059ff03
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0059ff08
    POP EDI                             ; 0059ff0b
    ADD ESP,0xa4                        ; 0059ff0c
    POP ESI                             ; 0059ff12
    POP EBX                             ; 0059ff13
    RET                                 ; 0059ff14

