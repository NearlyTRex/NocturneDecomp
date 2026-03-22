; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target_position
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CQuaternion4f *  Stack[0x14]:4   base_orientation
; CDeformableModel_MotionBlendWeightFunc * Stack[0x18]:4   blend_callback
; Local Variables:
; float[1521]      Stack[-0x1888]:6084  afStackY_1888
; CQuaternion4f    Stack[-0xac]:16  local_ac
; CQuaternion4f    Stack[-0x9c]:16  local_9c
; CQuaternion4f    Stack[-0x8c]:16  local_8c
; CQuaternion4f    Stack[-0x7c]:16  local_7c
; CQuaternion4f    Stack[-0x6c]:16  local_6c
; CQuaternion4f    Stack[-0x5c]:16  local_5c
; CQuaternion4f    Stack[-0x4c]:16  local_4c
; CQuaternion4f    Stack[-0x3c]:16  local_3c
; CVector3f        Stack[-0x2c]:12  local_2c
; CVector3f        Stack[-0x20]:12  local_20
; CVector3f        Stack[-0x14]:12  local_14
;
; Referenced Globals:
;   double DOUBLE_0064ee28 = 0.00100000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
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
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0059fe59
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0059fe5e
    LEA ESI,[ESP + 0x74]                ; 0059fe61
    PUSH dword ptr [ESP + 0x90]         ; 0059fe65
    LEA EDI,[ESP + 0x8]                 ; 0059fe6c
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 0059fe70
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 0059fe75
    LEA EAX,[ESP + 0x4]                 ; 0059fe78
    LEA ESI,[ESP + 0x74]                ; 0059fe7c
    PUSH EAX                            ; 0059fe80
    JMP 0x0060f345                      ; 0059fe81
        ;   XREF to: 0060f345 (UNCONDITIONAL_JUMP)  ; LAB_0060f345
    LEA ESI,[ESP + 0x4c]                ; 0059fe8c
        ;   Label: LAB_0059fe8c
    LEA EDI,[ESP + 0x2c]                ; 0059fe90
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 0059fe94
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x4c]                ; 0059fe99
    ADD ESP,0x4                         ; 0059fe9d
    LEA EAX,[ESP + 0x28]                ; 0059fea0
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0059fea4
    PUSH EAX                            ; 0059feab
    JMP 0x0060f36d                      ; 0059feac
        ;   XREF to: 0060f36d (UNCONDITIONAL_JUMP)  ; LAB_0060f36d
    LEA ESI,[ESP + 0x60]                ; 0059feb1
        ;   Label: LAB_0059feb1
    LEA EDI,[ESP + 0x40]                ; 0059feb5
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059feb9
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x60]                ; 0059febe
    ADD ESP,0x8                         ; 0059fec2
    JMP 0x00605015                      ; 0059fec5
        ;   XREF to: 00605015 (UNCONDITIONAL_JUMP)  ; LAB_00605015
    PUSH EAX                            ; 0059fecd
        ;   Label: LAB_0059fecd
    LEA ESI,[ESP + 0x6c]                ; 0059fece
    LEA EDI,[ESP + 0x1c]                ; 0059fed2
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059fed6
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x6c]                ; 0059fedb
    ADD ESP,0x8                         ; 0059fedf
    JMP 0x0060503a                      ; 0059fee2
        ;   XREF to: 0060503a (UNCONDITIONAL_JUMP)  ; LAB_0060503a
    PUSH ESI                            ; 0059feed
        ;   Label: LAB_0059feed
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
    LEA EAX,[ESP + 0x38]                ; 00605015
        ;   Label: LAB_00605015
    MOV ECX,dword ptr [ESI]             ; 00605019
    MOV dword ptr [EDI],ECX             ; 0060501b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060501d
    MOV dword ptr [EDI + 0x4],ECX       ; 00605020
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605023
    MOV dword ptr [EDI + 0x8],ECX       ; 00605026
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605029
    MOV dword ptr [EDI + 0xc],ECX       ; 0060502c
    ADD ESI,0x10                        ; 0060502f
    ADD EDI,0x10                        ; 00605032
    JMP 0x0059fecd                      ; 00605035
        ;   XREF to: 0059fecd (UNCONDITIONAL_JUMP)  ; LAB_0059fecd
    MOV ECX,dword ptr [ESI]             ; 0060503a
        ;   Label: LAB_0060503a
    MOV dword ptr [EDI],ECX             ; 0060503c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060503e
    MOV dword ptr [EDI + 0x4],ECX       ; 00605041
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605044
    MOV dword ptr [EDI + 0x8],ECX       ; 00605047
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060504a
    MOV dword ptr [EDI + 0xc],ECX       ; 0060504d
    ADD ESI,0x10                        ; 00605050
    ADD EDI,0x10                        ; 00605053
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00605056
    JMP 0x0059feed                      ; 0060505d
        ;   XREF to: 0059feed (UNCONDITIONAL_JUMP)  ; LAB_0059feed
    MOV ECX,dword ptr [ESI]             ; 0060f345
        ;   Label: LAB_0060f345
    MOV dword ptr [EDI],ECX             ; 0060f347
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f349
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f34c
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f34f
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f352
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f355
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f358
    ADD ESI,0x10                        ; 0060f35b
    ADD EDI,0x10                        ; 0060f35e
    PUSH dword ptr [ESP + 0x98]         ; 0060f361
    JMP 0x0059fe8c                      ; 0060f368
        ;   XREF to: 0059fe8c (UNCONDITIONAL_JUMP)  ; LAB_0059fe8c
    MOV ECX,dword ptr [ESI]             ; 0060f36d
        ;   Label: LAB_0060f36d
    MOV dword ptr [EDI],ECX             ; 0060f36f
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f371
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f374
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f377
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f37a
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f37d
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f380
    ADD ESI,0x10                        ; 0060f383
    ADD EDI,0x10                        ; 0060f386
    PUSH ECX                            ; 0060f389
    JMP 0x0059feb1                      ; 0060f38a
        ;   XREF to: 0059feb1 (UNCONDITIONAL_JUMP)  ; LAB_0059feb1

