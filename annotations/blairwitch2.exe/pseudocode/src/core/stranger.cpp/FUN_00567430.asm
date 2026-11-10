; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_00567430(CStranger *this_ptr,SPose *out_pose)
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
;   core_stranger.cpp_FUN_00565ff0 at 005660a1
;
; Referenced Globals:
;   undefined4 DAT_005eb865
;   undefined4 DAT_0264be30
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
;   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620
;   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0
;   core_skeleton.cpp_FUN_00544f80
;   core_xform.cpp_FUN_005940b0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567430
        ;   Label: core_stranger.cpp_FUN_00567430
    PUSH ESI                            ; 00567431
    PUSH EDI                            ; 00567432
    SUB ESP,0x1ad8                      ; 00567433
    MOV ESI,dword ptr [ESP + 0x1ae8]    ; 00567439
    MOV EAX,ESP                         ; 00567440
    PUSH EAX                            ; 00567442
    LEA EBX,[ESI + 0x2b4]               ; 00567443
    PUSH EBX                            ; 00567449
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620 ; 0056744a
        ;   XREF to: 00548620 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0056744f
    FLD float ptr [ESI + 0x256c0]       ; 00567452
    PUSH -0x1                           ; 00567458
    FMUL double ptr [0x005eb865]        ; 0056745a | DAT_005eb865
    SUB ESP,0x4                         ; 00567460
    FSTP float ptr [ESP]                ; 00567463
    MOV EDX,dword ptr [ESI + 0x256f0]   ; 00567466
    PUSH EDX                            ; 0056746c
    PUSH EBX                            ; 0056746d
    CALL core_skeleton.cpp_FUN_00544f80 ; 0056746e
        ;   XREF to: 00544f80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00544f80()
    MOV EAX,[0x0264be30]                ; 00567473 | DAT_0264be30
    ADD ESI,0x964                       ; 00567478
    SHL EAX,0x4                         ; 0056747e
    ADD ESP,0x10                        ; 00567481
    ADD EAX,ESI                         ; 00567484
    PUSH EAX                            ; 00567486
    LEA ESI,[ESP + 0x1ac0]              ; 00567487
    LEA EDI,[ESP + 0x1acc]              ; 0056748e
    CALL core_xform.cpp_FUN_005940b0    ; 00567495
        ;   XREF to: 005940b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005940b0()
    LEA ESI,[ESP + 0x1ac0]              ; 0056749a
    ADD ESP,0x4                         ; 005674a1
    MOVSD ES:EDI,ESI                    ; 005674a4
    MOVSD ES:EDI,ESI                    ; 005674a5
    MOVSD ES:EDI,ESI                    ; 005674a6
    PUSH 0x544cc0                       ; 005674a7
    FLD float ptr [ESP + 0x1ad0]        ; 005674ac
    PUSH -0x1                           ; 005674b3
    LEA ESI,[ESP + 0x1ab4]              ; 005674b5
    FCHS                                ; 005674bc
    PUSH 0x3f800000                     ; 005674be
    FSTP float ptr [ESP + 0x1ae0]       ; 005674c3
    PUSH dword ptr [ESP + 0x1ae0]       ; 005674ca
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 005674d1
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 005674d6
    LEA EAX,[ESP + 0x1aa8]              ; 005674d9
    PUSH EAX                            ; 005674e0
    LEA EDI,[ESP + 0x1aac]              ; 005674e1
    LEA ESI,[ESP + 0x1abc]              ; 005674e8
    PUSH EBX                            ; 005674ef
    MOVSD ES:EDI,ESI                    ; 005674f0
    MOVSD ES:EDI,ESI                    ; 005674f1
    MOVSD ES:EDI,ESI                    ; 005674f2
    MOVSD ES:EDI,ESI                    ; 005674f3
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 005674f4
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005674f9
    MOV ECX,dword ptr [ESP + 0x1aec]    ; 005674fc
    PUSH ECX                            ; 00567503
    PUSH EBX                            ; 00567504
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620 ; 00567505
        ;   XREF to: 00548620 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_00548620(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 0056750a
    MOV EAX,ESP                         ; 0056750d
    PUSH EAX                            ; 0056750f
    PUSH EBX                            ; 00567510
    CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0 ; 00567511
        ;   XREF to: 005486f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005486f0(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 00567516
    ADD ESP,0x1ad8                      ; 00567519
    POP EDI                             ; 0056751f
    POP ESI                             ; 00567520
    POP EBX                             ; 00567521
    RET                                 ; 00567522

