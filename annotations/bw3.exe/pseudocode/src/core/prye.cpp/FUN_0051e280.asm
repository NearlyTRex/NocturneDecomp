; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_0051e280(int param_1,SPose *param_2)
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
;   core_prye.cpp_FUN_0051c1c0 at 0051c27a
;
; Referenced Globals:
;   undefined4 DAT_005cd3c7
;   undefined4 DAT_01ed36dc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920
;   core_skeleton.cpp_FUN_0054c1b0
;   core_xform.cpp_FUN_00585de0
;   core_xform.cpp_quaternionFromAngleY_FUN_00585d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e280
        ;   Label: core_prye.cpp_FUN_0051e280
    PUSH ESI                            ; 0051e281
    PUSH EDI                            ; 0051e282
    SUB ESP,0x1ad8                      ; 0051e283
    MOV ESI,dword ptr [ESP + 0x1ae8]    ; 0051e289
    MOV EAX,ESP                         ; 0051e290
    PUSH EAX                            ; 0051e292
    LEA EBX,[ESI + 0x158]               ; 0051e293
    PUSH EBX                            ; 0051e299
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850 ; 0051e29a
        ;   XREF to: 0054f850 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0051e29f
    FLD float ptr [ESI + 0x20c48]       ; 0051e2a2
    PUSH -0x1                           ; 0051e2a8
    FMUL double ptr [0x005cd3c7]        ; 0051e2aa | DAT_005cd3c7
    SUB ESP,0x4                         ; 0051e2b0
    FSTP float ptr [ESP]                ; 0051e2b3
    MOV EDX,dword ptr [ESI + 0x20c78]   ; 0051e2b6
    PUSH EDX                            ; 0051e2bc
    PUSH EBX                            ; 0051e2bd
    CALL core_skeleton.cpp_FUN_0054c1b0 ; 0051e2be
        ;   XREF to: 0054c1b0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054c1b0()
    MOV EAX,[0x01ed36dc]                ; 0051e2c3 | DAT_01ed36dc
    ADD ESI,0x808                       ; 0051e2c8
    SHL EAX,0x4                         ; 0051e2ce
    ADD ESP,0x10                        ; 0051e2d1
    ADD EAX,ESI                         ; 0051e2d4
    PUSH EAX                            ; 0051e2d6
    LEA ESI,[ESP + 0x1ac0]              ; 0051e2d7
    LEA EDI,[ESP + 0x1acc]              ; 0051e2de
    CALL core_xform.cpp_FUN_00585de0    ; 0051e2e5
        ;   XREF to: 00585de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585de0()
    LEA ESI,[ESP + 0x1ac0]              ; 0051e2ea
    ADD ESP,0x4                         ; 0051e2f1
    MOVSD ES:EDI,ESI                    ; 0051e2f4
    MOVSD ES:EDI,ESI                    ; 0051e2f5
    MOVSD ES:EDI,ESI                    ; 0051e2f6
    PUSH 0x54bef0                       ; 0051e2f7
    FLD float ptr [ESP + 0x1ad0]        ; 0051e2fc
    PUSH -0x1                           ; 0051e303
    LEA ESI,[ESP + 0x1ab4]              ; 0051e305
    FCHS                                ; 0051e30c
    PUSH 0x3f800000                     ; 0051e30e
    FSTP float ptr [ESP + 0x1ae0]       ; 0051e313
    PUSH dword ptr [ESP + 0x1ae0]       ; 0051e31a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00585d10 ; 0051e321
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00585d10()
    ADD ESP,0x4                         ; 0051e326
    LEA EAX,[ESP + 0x1aa8]              ; 0051e329
    PUSH EAX                            ; 0051e330
    LEA EDI,[ESP + 0x1aac]              ; 0051e331
    LEA ESI,[ESP + 0x1abc]              ; 0051e338
    PUSH EBX                            ; 0051e33f
    MOVSD ES:EDI,ESI                    ; 0051e340
    MOVSD ES:EDI,ESI                    ; 0051e341
    MOVSD ES:EDI,ESI                    ; 0051e342
    MOVSD ES:EDI,ESI                    ; 0051e343
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170 ; 0051e344
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0051e349
    MOV ECX,dword ptr [ESP + 0x1aec]    ; 0051e34c
    PUSH ECX                            ; 0051e353
    PUSH EBX                            ; 0051e354
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850 ; 0051e355
        ;   XREF to: 0054f850 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0051e35a
    MOV EAX,ESP                         ; 0051e35d
    PUSH EAX                            ; 0051e35f
    PUSH EBX                            ; 0051e360
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920 ; 0051e361
        ;   XREF to: 0054f920 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0051e366
    ADD ESP,0x1ad8                      ; 0051e369
    POP EDI                             ; 0051e36f
    POP ESI                             ; 0051e370
    POP EBX                             ; 0051e371
    RET                                 ; 0051e372

