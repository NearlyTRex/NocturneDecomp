; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_npc_cpp_CNPC_serialize_FUN_00544ba0(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_hiram.cpp_CHiram_serialize_FUN_004f4690 at 004f4695
;   core_hostage.cpp_CHostage_serialize_FUN_004f6170 at 004f6177
;   core_hpriest.cpp_CHighPriestOfGardath_serialize_FUN_004f7bd0 at 004f7bd5
;   core_passngr.cpp_CPassenger_load_FUN_00546190 at 00546197
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_0063e37c
;   TerminatedCString s_modelName_0063e386
;   TerminatedCString s_motion_state_0063e390
;   TerminatedCString s_shootMe_0063e39d
;   TerminatedCString s_poolMe_0063e3a5
;   int g_CNPCClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_charactr.cpp_CCharacter_serialize_FUN_004283a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544ba0
        ;   Label: core_npc.cpp_CNPC_serialize_FUN_00544ba0
    PUSH ESI                            ; 00544ba1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00544ba2
    CMP dword ptr [0x00680b94],0x2      ; 00544ba6 | g_CNPCClassVersion
    JL 0x00544c0e                       ; 00544bad
        ;   XREF to: 00544c0e (CONDITIONAL_JUMP)  ; LAB_00544c0e
    PUSH EBX                            ; 00544baf
    CALL core_charactr.cpp_CCharacter_serialize_FUN_004283a0 ; 00544bb0
        ;   XREF to: 004283a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_serialize_FUN_004283a0(CCharacter * this_ptr)
    MOV ECX,dword ptr [0x00680b94]      ; 00544bb5 | g_CNPCClassVersion
    ADD ESP,0x4                         ; 00544bbb
    CMP ECX,0x3                         ; 00544bbe
    JL 0x00544be5                       ; 00544bc1
        ;   XREF to: 00544be5 (CONDITIONAL_JUMP)  ; LAB_00544be5
    PUSH 0x63e386                       ; 00544bc3 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00544bc8
    PUSH ESI                            ; 00544bce
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 00544bcf
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00544bd4
    PUSH 0x63e390                       ; 00544bd7 | = "motion state"
    PUSH ESI                            ; 00544bdc
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 00544bdd
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00544be2
    CMP dword ptr [0x00680b94],0x4      ; 00544be5 | g_CNPCClassVersion
        ;   Label: LAB_00544be5
    JL 0x00544c02                       ; 00544bec
        ;   XREF to: 00544c02 (CONDITIONAL_JUMP)  ; LAB_00544c02
    PUSH 0x63e39d                       ; 00544bee | = "shootMe"
    LEA ESI,[EBX + 0x1f700]             ; 00544bf3
    PUSH ESI                            ; 00544bf9
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00544bfa
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00544bff
    CMP dword ptr [0x00680b94],0x5      ; 00544c02 | g_CNPCClassVersion
        ;   Label: LAB_00544c02
    JGE 0x00544c2e                      ; 00544c09
        ;   XREF to: 00544c2e (CONDITIONAL_JUMP)  ; LAB_00544c2e
    POP ESI                             ; 00544c0b
    POP EBX                             ; 00544c0c
    RET                                 ; 00544c0d
    PUSH EBX                            ; 00544c0e
        ;   Label: LAB_00544c0e
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00544c0f
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00544c14
    PUSH 0x63e37c                       ; 00544c17 | = "hitPoints"
    ADD EBX,0x243c                      ; 00544c1c
    PUSH EBX                            ; 00544c22
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00544c23
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00544c28
    POP ESI                             ; 00544c2b
    POP EBX                             ; 00544c2c
    RET                                 ; 00544c2d
    PUSH 0x63e3a5                       ; 00544c2e | = "poolMe"
        ;   Label: LAB_00544c2e
    ADD EBX,0x1f704                     ; 00544c33
    PUSH EBX                            ; 00544c39
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00544c3a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00544c3f
    POP ESI                             ; 00544c42
    POP EBX                             ; 00544c43
    RET                                 ; 00544c44

