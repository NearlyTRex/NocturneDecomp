; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_archive_FUN_00415780(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d3d28
;   TerminatedCString s_motion_state_005d3d32
;   TerminatedCString s_hitPoints_005d3d3f
;   TerminatedCString s_shootMe_005d3d49
;   TerminatedCString s_poolMe_005d3d51
;   TerminatedCString s_speed_005d3d58
;   int g_CBirdClassVersion = 0x1
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;   core_charactr.cpp_CCharacter_archive_FUN_0042c7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415780
        ;   Label: core_bird.cpp_CBird_archive_FUN_00415780
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415781
    CMP dword ptr [0x006109e0],0x2      ; 00415785 | g_CBirdClassVersion
    JL 0x00415799                       ; 0041578c
        ;   XREF to: 00415799 (CONDITIONAL_JUMP)  ; LAB_00415799
    PUSH EBX                            ; 0041578e
    CALL core_charactr.cpp_CCharacter_archive_FUN_0042c7f0 ; 0041578f
        ;   XREF to: 0042c7f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_0042c7f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00415794
    POP EBX                             ; 00415797
    RET                                 ; 00415798
    PUSH ESI                            ; 00415799
        ;   Label: LAB_00415799
    PUSH EBX                            ; 0041579a
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0041579b
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004157a0
    PUSH 0x5d3d28                       ; 004157a3 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 004157a8
    PUSH ESI                            ; 004157ae
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 004157af
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004157b4
    PUSH 0x5d3d32                       ; 004157b7 | = "motion state"
    PUSH ESI                            ; 004157bc
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 004157bd
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004157c2
    PUSH 0x5d3d3f                       ; 004157c5 | = "hitPoints"
    LEA ESI,[EBX + 0x2538]              ; 004157ca
    PUSH ESI                            ; 004157d0
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004157d1
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004157d6
    PUSH 0x5d3d49                       ; 004157d9 | = "shootMe"
    LEA ESI,[EBX + 0x1faac]             ; 004157de
    PUSH ESI                            ; 004157e4
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004157e5
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004157ea
    PUSH 0x5d3d51                       ; 004157ed | = "poolMe"
    LEA ESI,[EBX + 0x1fab0]             ; 004157f2
    PUSH ESI                            ; 004157f8
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004157f9
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004157fe
    PUSH 0x5d3d58                       ; 00415801 | = "speed"
    LEA ESI,[EBX + 0x1fab4]             ; 00415806
    PUSH ESI                            ; 0041580c
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0041580d
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00415812
    POP ESI                             ; 00415815
    PUSH EBX                            ; 00415816
    CALL core_charactr.cpp_CCharacter_archive_FUN_0042c7f0 ; 00415817
        ;   XREF to: 0042c7f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_0042c7f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041581c
    POP EBX                             ; 0041581f
    RET                                 ; 00415820

