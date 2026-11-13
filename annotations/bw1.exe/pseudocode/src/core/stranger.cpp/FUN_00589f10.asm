; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_00589f10(CStranger *this_ptr,SPose *out_pose)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; SPose *          Stack[0x8]:4   out_pose
; Local Variables:
; undefined4       Stack[-0x1aec]:4  local_1aec
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_00588ad0 at 00588b81
;
; Referenced Globals:
;   undefined4 DAT_005f6ad9
;   undefined4 DAT_02c83600
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00567620
;   core_xform.cpp_FUN_005b7c00
;   core_xform.cpp_quaternionFromAngleY_FUN_005b7b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589f10
        ;   Label: core_stranger.cpp_FUN_00589f10
    PUSH ESI                            ; 00589f11
    PUSH EDI                            ; 00589f12
    SUB ESP,0x1ad8                      ; 00589f13
    MOV ESI,dword ptr [ESP + 0x1ae8]    ; 00589f19
    MOV EAX,ESP                         ; 00589f20
    PUSH EAX                            ; 00589f22
    LEA EBX,[ESI + 0x158]               ; 00589f23
    PUSH EBX                            ; 00589f29
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0 ; 00589f2a
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00589f2f
    FLD float ptr [ESI + 0x20028]       ; 00589f32
    PUSH -0x1                           ; 00589f38
    FMUL double ptr [0x005f6ad9]        ; 00589f3a | DAT_005f6ad9
    SUB ESP,0x4                         ; 00589f40
    FSTP float ptr [ESP]                ; 00589f43
    MOV EDX,dword ptr [ESI + 0x20058]   ; 00589f46
    PUSH EDX                            ; 00589f4c
    PUSH EBX                            ; 00589f4d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00567620 ; 00589f4e
        ;   XREF to: 00567620 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00567620(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    MOV EAX,[0x02c83600]                ; 00589f53 | DAT_02c83600
    ADD ESI,0x808                       ; 00589f58
    SHL EAX,0x4                         ; 00589f5e
    ADD ESP,0x10                        ; 00589f61
    ADD EAX,ESI                         ; 00589f64
    PUSH EAX                            ; 00589f66
    LEA ESI,[ESP + 0x1ac0]              ; 00589f67
    LEA EDI,[ESP + 0x1acc]              ; 00589f6e
    CALL core_xform.cpp_FUN_005b7c00    ; 00589f75
        ;   XREF to: 005b7c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7c00()
    LEA ESI,[ESP + 0x1ac0]              ; 00589f7a
    ADD ESP,0x4                         ; 00589f81
    MOVSD ES:EDI,ESI                    ; 00589f84
    MOVSD ES:EDI,ESI                    ; 00589f85
    MOVSD ES:EDI,ESI                    ; 00589f86
    PUSH 0x567360                       ; 00589f87
    FLD float ptr [ESP + 0x1ad0]        ; 00589f8c
    PUSH -0x1                           ; 00589f93
    LEA ESI,[ESP + 0x1ab4]              ; 00589f95
    FCHS                                ; 00589f9c
    PUSH 0x3f800000                     ; 00589f9e
    FSTP float ptr [ESP + 0x1ae0]       ; 00589fa3
    PUSH dword ptr [ESP + 0x1ae0]       ; 00589faa
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 00589fb1
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    ADD ESP,0x4                         ; 00589fb6
    LEA EAX,[ESP + 0x1aa8]              ; 00589fb9
    PUSH EAX                            ; 00589fc0
    LEA EDI,[ESP + 0x1aac]              ; 00589fc1
    LEA ESI,[ESP + 0x1abc]              ; 00589fc8
    PUSH EBX                            ; 00589fcf
    MOVSD ES:EDI,ESI                    ; 00589fd0
    MOVSD ES:EDI,ESI                    ; 00589fd1
    MOVSD ES:EDI,ESI                    ; 00589fd2
    MOVSD ES:EDI,ESI                    ; 00589fd3
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 00589fd4
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00589fd9
    MOV ECX,dword ptr [ESP + 0x1aec]    ; 00589fdc
    PUSH ECX                            ; 00589fe3
    PUSH EBX                            ; 00589fe4
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0 ; 00589fe5
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00589fea
    MOV EAX,ESP                         ; 00589fed
    PUSH EAX                            ; 00589fef
    PUSH EBX                            ; 00589ff0
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90 ; 00589ff1
        ;   XREF to: 0056ad90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00589ff6
    ADD ESP,0x1ad8                      ; 00589ff9
    POP EDI                             ; 00589fff
    POP ESI                             ; 0058a000
    POP EBX                             ; 0058a001
    RET                                 ; 0058a002

