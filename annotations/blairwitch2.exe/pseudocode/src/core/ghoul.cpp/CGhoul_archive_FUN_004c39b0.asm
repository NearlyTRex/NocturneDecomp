; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_archive_FUN_004c39b0(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d9176+1
;   TerminatedCString s_modelName_005d917d
;   TerminatedCString s_guardDistance_005d9187
;   TerminatedCString s_livesLeft_005d9195
;   TerminatedCString s_motion_state_005d919f
;   TerminatedCString s_partStatus_005d91ac
;   TerminatedCString s_spasmCount_005d91b7
;   TerminatedCString s_livesLeft_005d91c2
;   TerminatedCString s_ariseTimer_005d91cc
;   int g_CGhoulClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archivePartStatus_FUN_0040bc50
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c39b0
        ;   Label: core_ghoul.cpp_CGhoul_archive_FUN_004c39b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c39b1
    PUSH EBX                            ; 004c39b5
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 004c39b6
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    MOV EDX,dword ptr [0x0061677c]      ; 004c39bb | g_CGhoulClassVersion
    ADD ESP,0x4                         ; 004c39c1
    CMP EDX,0x4                         ; 004c39c4
    JL 0x004c3a4a                       ; 004c39c7
        ;   XREF to: 004c3a4a (CONDITIONAL_JUMP)  ; LAB_004c3a4a
    PUSH 0x5d917d                       ; 004c39cd | = "modelName"
        ;   Label: LAB_004c39cd
    LEA EAX,[EBX + 0x2b4]               ; 004c39d2
    PUSH EAX                            ; 004c39d8
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 004c39d9
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    MOV ECX,dword ptr [0x0061677c]      ; 004c39de | g_CGhoulClassVersion
    ADD ESP,0x8                         ; 004c39e4
    CMP ECX,0x2                         ; 004c39e7
    JL 0x004c3a05                       ; 004c39ea
        ;   XREF to: 004c3a05 (CONDITIONAL_JUMP)  ; LAB_004c3a05
    CMP ECX,0x7                         ; 004c39ec
    JGE 0x004c3a05                      ; 004c39ef
        ;   XREF to: 004c3a05 (CONDITIONAL_JUMP)  ; LAB_004c3a05
    PUSH 0x5d9187                       ; 004c39f1 | = "guardDistance"
    LEA EAX,[EBX + 0x10a70]             ; 004c39f6
    PUSH EAX                            ; 004c39fc
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004c39fd
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004c3a02
    CMP dword ptr [0x0061677c],0x3      ; 004c3a05 | g_CGhoulClassVersion
        ;   Label: LAB_004c3a05
    JL 0x004c3a22                       ; 004c3a0c
        ;   XREF to: 004c3a22 (CONDITIONAL_JUMP)  ; LAB_004c3a22
    PUSH 0x5d9195                       ; 004c3a0e | = "livesLeft"
    LEA EAX,[EBX + 0x10b14]             ; 004c3a13
    PUSH EAX                            ; 004c3a19
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c3a1a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c3a1f
    CMP dword ptr [0x0061677c],0x5      ; 004c3a22 | g_CGhoulClassVersion
        ;   Label: LAB_004c3a22
    JL 0x004c3a3f                       ; 004c3a29
        ;   XREF to: 004c3a3f (CONDITIONAL_JUMP)  ; LAB_004c3a3f
    PUSH 0x5d919f                       ; 004c3a2b | = "motion state"
    LEA EAX,[EBX + 0x2b4]               ; 004c3a30
    PUSH EAX                            ; 004c3a36
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004c3a37
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 004c3a3c
    CMP dword ptr [0x0061677c],0x6      ; 004c3a3f | g_CGhoulClassVersion
        ;   Label: LAB_004c3a3f
    JGE 0x004c3a63                      ; 004c3a46
        ;   XREF to: 004c3a63 (CONDITIONAL_JUMP)  ; LAB_004c3a63
    POP EBX                             ; 004c3a48
    RET                                 ; 004c3a49
    PUSH 0x5d9177                       ; 004c3a4a | s_speed_005d9176+1
        ;   Label: LAB_004c3a4a
    LEA EAX,[EBX + 0x10a60]             ; 004c3a4f
    PUSH EAX                            ; 004c3a55
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004c3a56
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004c3a5b
    JMP 0x004c39cd                      ; 004c3a5e
        ;   XREF to: 004c39cd (UNCONDITIONAL_JUMP)  ; LAB_004c39cd
    PUSH 0x5d91ac                       ; 004c3a63 | = "partStatus"
        ;   Label: LAB_004c3a63
    LEA EAX,[EBX + 0x2b4]               ; 004c3a68
    PUSH EAX                            ; 004c3a6e
    CALL core_actor.cpp_archivePartStatus_FUN_0040bc50 ; 004c3a6f
        ;   XREF to: 0040bc50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archivePartStatus_FUN_0040bc50()
    ADD ESP,0x8                         ; 004c3a74
    PUSH 0x5d91b7                       ; 004c3a77 | = "spasmCount"
    LEA EAX,[EBX + 0x10b18]             ; 004c3a7c
    PUSH EAX                            ; 004c3a82
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c3a83
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c3a88
    PUSH 0x5d91c2                       ; 004c3a8b | = "livesLeft"
    LEA EAX,[EBX + 0x10b14]             ; 004c3a90
    PUSH EAX                            ; 004c3a96
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c3a97
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c3a9c
    PUSH 0x5d91cc                       ; 004c3a9f | = "ariseTimer"
    ADD EBX,0x10b04                     ; 004c3aa4
    PUSH EBX                            ; 004c3aaa
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c3aab
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c3ab0
    POP EBX                             ; 004c3ab3
    RET                                 ; 004c3ab4

