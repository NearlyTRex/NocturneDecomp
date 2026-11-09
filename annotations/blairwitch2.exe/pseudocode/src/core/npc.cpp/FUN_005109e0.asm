; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_FUN_005109e0(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_hiram.cpp_CHiram_archive_FUN_004d11b0 at 004d11b5
;   core_hostage.cpp_CHostage_archive_FUN_004d2df0 at 004d2df7
;   core_hpriest.cpp_FUN_004d47e0 at 004d47e5
;   core_passngr.cpp_FUN_00511a70 at 00511a77
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_005e153f
;   TerminatedCString s_modelName_005e1549
;   TerminatedCString s_motion_state_005e1553
;   TerminatedCString s_shootMe_005e1560
;   TerminatedCString s_poolMe_005e1568
;   TerminatedCString s_speed_005e156f
;   int g_CNPCClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;   core_charactr.cpp_CCharacter_archive_FUN_00422c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005109e0
        ;   Label: core_npc.cpp_FUN_005109e0
    PUSH ESI                            ; 005109e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005109e2
    CMP dword ptr [0x0061b2b4],0x2      ; 005109e6 | g_CNPCClassVersion
    JL 0x00510a6f                       ; 005109ed
        ;   XREF to: 00510a6f (CONDITIONAL_JUMP)  ; LAB_00510a6f
    PUSH EBX                            ; 005109f3
    CALL core_charactr.cpp_CCharacter_archive_FUN_00422c30 ; 005109f4
        ;   XREF to: 00422c30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_00422c30(CCharacter * this_ptr)
    MOV ECX,dword ptr [0x0061b2b4]      ; 005109f9 | g_CNPCClassVersion
    ADD ESP,0x4                         ; 005109ff
    CMP ECX,0x3                         ; 00510a02
    JL 0x00510a29                       ; 00510a05
        ;   XREF to: 00510a29 (CONDITIONAL_JUMP)  ; LAB_00510a29
    PUSH 0x5e1549                       ; 00510a07 | = "modelName"
    LEA ESI,[EBX + 0x2b4]               ; 00510a0c
    PUSH ESI                            ; 00510a12
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 00510a13
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 00510a18
    PUSH 0x5e1553                       ; 00510a1b | = "motion state"
    PUSH ESI                            ; 00510a20
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 00510a21
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 00510a26
    CMP dword ptr [0x0061b2b4],0x4      ; 00510a29 | g_CNPCClassVersion
        ;   Label: LAB_00510a29
    JL 0x00510a46                       ; 00510a30
        ;   XREF to: 00510a46 (CONDITIONAL_JUMP)  ; LAB_00510a46
    PUSH 0x5e1560                       ; 00510a32 | = "shootMe"
    LEA ESI,[EBX + 0x2433c]             ; 00510a37
    PUSH ESI                            ; 00510a3d
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00510a3e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00510a43
    CMP dword ptr [0x0061b2b4],0x5      ; 00510a46 | g_CNPCClassVersion
        ;   Label: LAB_00510a46
    JL 0x00510a63                       ; 00510a4d
        ;   XREF to: 00510a63 (CONDITIONAL_JUMP)  ; LAB_00510a63
    PUSH 0x5e1568                       ; 00510a4f | = "poolMe"
    LEA ESI,[EBX + 0x24340]             ; 00510a54
    PUSH ESI                            ; 00510a5a
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00510a5b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00510a60
    CMP dword ptr [0x0061b2b4],0x6      ; 00510a63 | g_CNPCClassVersion
        ;   Label: LAB_00510a63
    JGE 0x00510a8f                      ; 00510a6a
        ;   XREF to: 00510a8f (CONDITIONAL_JUMP)  ; LAB_00510a8f
    POP ESI                             ; 00510a6c
    POP EBX                             ; 00510a6d
    RET                                 ; 00510a6e
    PUSH EBX                            ; 00510a6f
        ;   Label: LAB_00510a6f
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00510a70
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00510a75
    PUSH 0x5e153f                       ; 00510a78 | = "hitPoints"
    ADD EBX,0x25a8                      ; 00510a7d
    PUSH EBX                            ; 00510a83
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00510a84
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00510a89
    POP ESI                             ; 00510a8c
    POP EBX                             ; 00510a8d
    RET                                 ; 00510a8e
    PUSH 0x5e156f                       ; 00510a8f | = "speed"
        ;   Label: LAB_00510a8f
    ADD EBX,0x24344                     ; 00510a94
    PUSH EBX                            ; 00510a9a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00510a9b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00510aa0
    POP ESI                             ; 00510aa3
    POP EBX                             ; 00510aa4
    RET                                 ; 00510aa5

