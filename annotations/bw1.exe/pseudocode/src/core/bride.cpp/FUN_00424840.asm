; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bride_cpp_FUN_00424840(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d4f77+1
;   TerminatedCString s_modelName_005d4f7e
;   TerminatedCString s_guardDistance_005d4f88
;   TerminatedCString s_state_005d4f96
;   int g_CBrideClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424840
        ;   Label: core_bride.cpp_FUN_00424840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00424841
    PUSH EBX                            ; 00424845
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00424846
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    MOV EDX,dword ptr [0x00610ba0]      ; 0042484b | g_CBrideClassVersion
    ADD ESP,0x4                         ; 00424851
    CMP EDX,0x2                         ; 00424854
    JL 0x0042489c                       ; 00424857
        ;   XREF to: 0042489c (CONDITIONAL_JUMP)  ; LAB_0042489c
    PUSH 0x5d4f7e                       ; 00424859 | = "modelName"
        ;   Label: LAB_00424859
    LEA EAX,[EBX + 0x158]               ; 0042485e
    PUSH EAX                            ; 00424864
    CALL core_actor.cpp_FUN_0040b7f0    ; 00424865
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x00610ba0]      ; 0042486a | g_CBrideClassVersion
    ADD ESP,0x8                         ; 00424870
    CMP ECX,0x2                         ; 00424873
    JL 0x00424891                       ; 00424876
        ;   XREF to: 00424891 (CONDITIONAL_JUMP)  ; LAB_00424891
    CMP ECX,0x4                         ; 00424878
    JGE 0x00424891                      ; 0042487b
        ;   XREF to: 00424891 (CONDITIONAL_JUMP)  ; LAB_00424891
    PUSH 0x5d4f88                       ; 0042487d | = "guardDistance"
    LEA EAX,[EBX + 0xc1e0]              ; 00424882
    PUSH EAX                            ; 00424888
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00424889
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042488e
    CMP dword ptr [0x00610ba0],0x3      ; 00424891 | g_CBrideClassVersion
        ;   Label: LAB_00424891
    JGE 0x004248b2                      ; 00424898
        ;   XREF to: 004248b2 (CONDITIONAL_JUMP)  ; LAB_004248b2
    POP EBX                             ; 0042489a
    RET                                 ; 0042489b
    PUSH 0x5d4f78                       ; 0042489c | s_speed_005d4f77+1
        ;   Label: LAB_0042489c
    LEA EAX,[EBX + 0xc1d0]              ; 004248a1
    PUSH EAX                            ; 004248a7
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004248a8
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004248ad
    JMP 0x00424859                      ; 004248b0
        ;   XREF to: 00424859 (UNCONDITIONAL_JUMP)  ; LAB_00424859
    PUSH 0x5d4f96                       ; 004248b2 | = "state"
        ;   Label: LAB_004248b2
    ADD EBX,0x158                       ; 004248b7
    PUSH EBX                            ; 004248bd
    CALL core_actor.cpp_FUN_0040b870    ; 004248be
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004248c3
    POP EBX                             ; 004248c6
    RET                                 ; 004248c7

