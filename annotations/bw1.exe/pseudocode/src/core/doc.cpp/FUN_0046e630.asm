; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0046e630(int param_1,SPose *param_2)
;
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
;   core_doc.cpp_FUN_0046caa0 at 0046cb4e
;
; Referenced Globals:
;   undefined4 DAT_005d9ff4
;   undefined4 DAT_01b68814
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
;   core_skeleton.cpp_FUN_00567620
;   core_xform.cpp_FUN_005b7c00
;   core_xform.cpp_quaternionFromAngleY_FUN_005b7b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e630
        ;   Label: core_doc.cpp_FUN_0046e630
    PUSH ESI                            ; 0046e631
    PUSH EDI                            ; 0046e632
    SUB ESP,0x1ad8                      ; 0046e633
    MOV ESI,dword ptr [ESP + 0x1ae8]    ; 0046e639
    MOV EAX,ESP                         ; 0046e640
    PUSH EAX                            ; 0046e642
    LEA EBX,[ESI + 0x158]               ; 0046e643
    PUSH EBX                            ; 0046e649
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0 ; 0046e64a
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0046e64f
    FLD float ptr [ESI + 0x20028]       ; 0046e652
    PUSH -0x1                           ; 0046e658
    FMUL double ptr [0x005d9ff4]        ; 0046e65a | DAT_005d9ff4
    SUB ESP,0x4                         ; 0046e660
    FSTP float ptr [ESP]                ; 0046e663
    MOV EDX,dword ptr [ESI + 0x20058]   ; 0046e666
    PUSH EDX                            ; 0046e66c
    PUSH EBX                            ; 0046e66d
    CALL core_skeleton.cpp_FUN_00567620 ; 0046e66e
        ;   XREF to: 00567620 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00567620()
    MOV EAX,[0x01b68814]                ; 0046e673 | DAT_01b68814
    ADD ESI,0x808                       ; 0046e678
    SHL EAX,0x4                         ; 0046e67e
    ADD ESP,0x10                        ; 0046e681
    ADD EAX,ESI                         ; 0046e684
    PUSH EAX                            ; 0046e686
    LEA ESI,[ESP + 0x1ac0]              ; 0046e687
    LEA EDI,[ESP + 0x1acc]              ; 0046e68e
    CALL core_xform.cpp_FUN_005b7c00    ; 0046e695
        ;   XREF to: 005b7c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7c00()
    LEA ESI,[ESP + 0x1ac0]              ; 0046e69a
    ADD ESP,0x4                         ; 0046e6a1
    MOVSD ES:EDI,ESI                    ; 0046e6a4
    MOVSD ES:EDI,ESI                    ; 0046e6a5
    MOVSD ES:EDI,ESI                    ; 0046e6a6
    PUSH 0x567360                       ; 0046e6a7
    FLD float ptr [ESP + 0x1ad0]        ; 0046e6ac
    PUSH -0x1                           ; 0046e6b3
    LEA ESI,[ESP + 0x1ab4]              ; 0046e6b5
    FCHS                                ; 0046e6bc
    PUSH 0x3f800000                     ; 0046e6be
    FSTP float ptr [ESP + 0x1ae0]       ; 0046e6c3
    PUSH dword ptr [ESP + 0x1ae0]       ; 0046e6ca
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0046e6d1
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    ADD ESP,0x4                         ; 0046e6d6
    LEA EAX,[ESP + 0x1aa8]              ; 0046e6d9
    PUSH EAX                            ; 0046e6e0
    LEA EDI,[ESP + 0x1aac]              ; 0046e6e1
    LEA ESI,[ESP + 0x1abc]              ; 0046e6e8
    PUSH EBX                            ; 0046e6ef
    MOVSD ES:EDI,ESI                    ; 0046e6f0
    MOVSD ES:EDI,ESI                    ; 0046e6f1
    MOVSD ES:EDI,ESI                    ; 0046e6f2
    MOVSD ES:EDI,ESI                    ; 0046e6f3
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0046e6f4
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0046e6f9
    MOV ECX,dword ptr [ESP + 0x1aec]    ; 0046e6fc
    PUSH ECX                            ; 0046e703
    PUSH EBX                            ; 0046e704
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0 ; 0046e705
        ;   XREF to: 0056acc0 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0046e70a
    MOV EAX,ESP                         ; 0046e70d
    PUSH EAX                            ; 0046e70f
    PUSH EBX                            ; 0046e710
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90 ; 0046e711
        ;   XREF to: 0056ad90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0046e716
    ADD ESP,0x1ad8                      ; 0046e719
    POP EDI                             ; 0046e71f
    POP ESI                             ; 0046e720
    POP EBX                             ; 0046e721
    RET                                 ; 0046e722

