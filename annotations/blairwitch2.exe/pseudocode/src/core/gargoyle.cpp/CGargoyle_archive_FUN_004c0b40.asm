; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004c0b40(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d8dd9+1
;   TerminatedCString s_modelName_005d8de0
;   TerminatedCString s_motion_state_005d8dea
;   TerminatedCString s_stoneRed_005d8df7
;   TerminatedCString s_stoneGreen_005d8e00
;   TerminatedCString s_stoneBlue_005d8e0b
;   TerminatedCString s_homeBase_005d8e15
;   int g_CGargoyleClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0b40
        ;   Label: core_gargoyle.cpp_CGargoyle_archive_FUN_004c0b40
    PUSH ESI                            ; 004c0b41
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c0b42
    PUSH EBX                            ; 004c0b46
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 004c0b47
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004c0b4c
    PUSH 0x5d8dda                       ; 004c0b4f | s_speed_005d8dd9+1
    LEA ESI,[EBX + 0x10a60]             ; 004c0b54
    PUSH ESI                            ; 004c0b5a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004c0b5b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004c0b60
    PUSH 0x5d8de0                       ; 004c0b63 | = "modelName"
    LEA ESI,[EBX + 0x2b4]               ; 004c0b68
    PUSH ESI                            ; 004c0b6e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 004c0b6f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 004c0b74
    PUSH 0x5d8dea                       ; 004c0b77 | = "motion state"
    PUSH ESI                            ; 004c0b7c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004c0b7d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    MOV EDX,dword ptr [0x00616750]      ; 004c0b82 | g_CGargoyleClassVersion
    ADD ESP,0x8                         ; 004c0b88
    CMP EDX,0x2                         ; 004c0b8b
    JGE 0x004c0b93                      ; 004c0b8e
        ;   XREF to: 004c0b93 (CONDITIONAL_JUMP)  ; LAB_004c0b93
    POP ESI                             ; 004c0b90
    POP EBX                             ; 004c0b91
    RET                                 ; 004c0b92
    PUSH 0x5d8df7                       ; 004c0b93 | = "stoneRed"
        ;   Label: LAB_004c0b93
    LEA ESI,[EBX + 0x10b28]             ; 004c0b98
    PUSH ESI                            ; 004c0b9e
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c0b9f
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c0ba4
    PUSH 0x5d8e00                       ; 004c0ba7 | = "stoneGreen"
    LEA ESI,[EBX + 0x10b2c]             ; 004c0bac
    PUSH ESI                            ; 004c0bb2
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c0bb3
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c0bb8
    PUSH 0x5d8e0b                       ; 004c0bbb | = "stoneBlue"
    LEA ESI,[EBX + 0x10b30]             ; 004c0bc0
    PUSH ESI                            ; 004c0bc6
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004c0bc7
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004c0bcc
    PUSH 0x5d8e15                       ; 004c0bcf | = "homeBase"
    ADD EBX,0x10b34                     ; 004c0bd4
    PUSH EBX                            ; 004c0bda
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004c0bdb
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 004c0be0
    POP ESI                             ; 004c0be3
    POP EBX                             ; 004c0be4
    RET                                 ; 004c0be5

