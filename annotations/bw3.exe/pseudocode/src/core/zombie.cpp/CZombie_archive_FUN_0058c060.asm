; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_archive_FUN_0058c060(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005d8848
;   TerminatedCString s_modelName_005d884e
;   TerminatedCString s_guardDistance_005d8858
;   TerminatedCString s_motion_state_005d8866
;   TerminatedCString s_partStatus_005d8873
;   TerminatedCString s_carriedActor_005d887e
;   TerminatedCString s_riseFromGraveCondition_005d888b
;   TerminatedCString s_graveActor_005d88a2
;   TerminatedCString s_clothList_005d88ad
;   TerminatedCString s_isMinerZombie_005d88b7
;   TerminatedCString s_alwaysChaseFast_005d88c5
;   TerminatedCString s_startGuardDist_005d88d5
;   TerminatedCString s_guardDistance_005d88e4
;   int g_CZombieClassVersion = 0xc
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveClothList_FUN_0040bf20
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_archivePartStatus_FUN_0040bba0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058c060
        ;   Label: core_zombie.cpp_CZombie_archive_FUN_0058c060
    PUSH EDI                            ; 0058c061
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058c062
    PUSH EBX                            ; 0058c066
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 0058c067
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0058c06c
    PUSH 0x5d8848                       ; 0058c06f | = "speed"
    LEA EAX,[EBX + 0xcdcc]              ; 0058c074
    PUSH EAX                            ; 0058c07a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0058c07b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0058c080
    PUSH 0x5d884e                       ; 0058c083 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0058c088
    PUSH EAX                            ; 0058c08e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 0058c08f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x006072a4]      ; 0058c094 | g_CZombieClassVersion
    ADD ESP,0x8                         ; 0058c09a
    CMP EDX,0x2                         ; 0058c09d
    JL 0x0058c0cf                       ; 0058c0a0
        ;   XREF to: 0058c0cf (CONDITIONAL_JUMP)  ; LAB_0058c0cf
    CMP EDX,0xb                         ; 0058c0a2
    JGE 0x0058c0bb                      ; 0058c0a5
        ;   XREF to: 0058c0bb (CONDITIONAL_JUMP)  ; LAB_0058c0bb
    PUSH 0x5d8858                       ; 0058c0a7 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 0058c0ac
    PUSH EAX                            ; 0058c0b2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0058c0b3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0058c0b8
    PUSH 0x5d8866                       ; 0058c0bb | = "motion state"
        ;   Label: LAB_0058c0bb
    LEA EAX,[EBX + 0x158]               ; 0058c0c0
    PUSH EAX                            ; 0058c0c6
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 0058c0c7
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0058c0cc
    CMP dword ptr [0x006072a4],0x3      ; 0058c0cf | g_CZombieClassVersion
        ;   Label: LAB_0058c0cf
    JL 0x0058c10b                       ; 0058c0d6
        ;   XREF to: 0058c10b (CONDITIONAL_JUMP)  ; LAB_0058c10b
    PUSH 0x5d8873                       ; 0058c0d8 | = "partStatus"
    LEA EAX,[EBX + 0x158]               ; 0058c0dd
    PUSH EAX                            ; 0058c0e3
    CALL core_actor.cpp_archivePartStatus_FUN_0040bba0 ; 0058c0e4
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDI,dword ptr [0x006072a4]      ; 0058c0e9 | g_CZombieClassVersion
    ADD ESP,0x8                         ; 0058c0ef
    CMP EDI,0x7                         ; 0058c0f2
    JGE 0x0058c10b                      ; 0058c0f5
        ;   XREF to: 0058c10b (CONDITIONAL_JUMP)  ; LAB_0058c10b
    PUSH 0x5d887e                       ; 0058c0f7 | = "carriedActor"
    LEA EAX,[EBX + 0x2628]              ; 0058c0fc
    PUSH EAX                            ; 0058c102
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0058c103
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0058c108
    CMP dword ptr [0x006072a4],0x4      ; 0058c10b | g_CZombieClassVersion
        ;   Label: LAB_0058c10b
    JL 0x0058c128                       ; 0058c112
        ;   XREF to: 0058c128 (CONDITIONAL_JUMP)  ; LAB_0058c128
    PUSH 0x5d888b                       ; 0058c114 | = "riseFromGraveCondition"
    LEA EAX,[EBX + 0xd074]              ; 0058c119
    PUSH EAX                            ; 0058c11f
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0058c120
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0058c125
    CMP dword ptr [0x006072a4],0x5      ; 0058c128 | g_CZombieClassVersion
        ;   Label: LAB_0058c128
    JL 0x0058c145                       ; 0058c12f
        ;   XREF to: 0058c145 (CONDITIONAL_JUMP)  ; LAB_0058c145
    PUSH 0x5d88a2                       ; 0058c131 | = "graveActor"
    LEA EAX,[EBX + 0xd06c]              ; 0058c136
    PUSH EAX                            ; 0058c13c
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0058c13d
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0058c142
    MOV EDX,dword ptr [0x006072a4]      ; 0058c145 | g_CZombieClassVersion
        ;   Label: LAB_0058c145
    CMP EDX,0x6                         ; 0058c14b
    JL 0x0058c169                       ; 0058c14e
        ;   XREF to: 0058c169 (CONDITIONAL_JUMP)  ; LAB_0058c169
    CMP EDX,0x9                         ; 0058c150
    JGE 0x0058c169                      ; 0058c153
        ;   XREF to: 0058c169 (CONDITIONAL_JUMP)  ; LAB_0058c169
    PUSH 0x5d88ad                       ; 0058c155 | = "clothList"
    LEA EAX,[EBX + 0x2f08]              ; 0058c15a
    PUSH EAX                            ; 0058c160
    CALL core_actor.cpp_archiveClothList_FUN_0040bf20 ; 0058c161
        ;   XREF to: 0040bf20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040bf20()
    ADD ESP,0x8                         ; 0058c166
    CMP dword ptr [0x006072a4],0x8      ; 0058c169 | g_CZombieClassVersion
        ;   Label: LAB_0058c169
    JL 0x0058c186                       ; 0058c170
        ;   XREF to: 0058c186 (CONDITIONAL_JUMP)  ; LAB_0058c186
    PUSH 0x5d88b7                       ; 0058c172 | = "isMinerZombie"
    LEA EAX,[EBX + 0xd0d8]              ; 0058c177
    PUSH EAX                            ; 0058c17d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0058c17e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058c183
    CMP dword ptr [0x006072a4],0xa      ; 0058c186 | g_CZombieClassVersion
        ;   Label: LAB_0058c186
    JL 0x0058c1a3                       ; 0058c18d
        ;   XREF to: 0058c1a3 (CONDITIONAL_JUMP)  ; LAB_0058c1a3
    PUSH 0x5d88c5                       ; 0058c18f | = "alwaysChaseFast"
    LEA EAX,[EBX + 0xd0dc]              ; 0058c194
    PUSH EAX                            ; 0058c19a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0058c19b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058c1a0
    CMP dword ptr [0x006072a4],0xc      ; 0058c1a3 | g_CZombieClassVersion
        ;   Label: LAB_0058c1a3
    JGE 0x0058c1af                      ; 0058c1aa
        ;   XREF to: 0058c1af (CONDITIONAL_JUMP)  ; LAB_0058c1af
    POP EDI                             ; 0058c1ac
    POP EBX                             ; 0058c1ad
    RET                                 ; 0058c1ae
    PUSH 0x5d88d5                       ; 0058c1af | = "startGuardDist"
        ;   Label: LAB_0058c1af
    LEA EAX,[EBX + 0xd0e4]              ; 0058c1b4
    PUSH EAX                            ; 0058c1ba
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0058c1bb
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0058c1c0
    PUSH 0x5d88e4                       ; 0058c1c3 | = "guardDistance"
    ADD EBX,0xcddc                      ; 0058c1c8
    PUSH EBX                            ; 0058c1ce
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0058c1cf
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0058c1d4
    POP EDI                             ; 0058c1d7
    POP EBX                             ; 0058c1d8
    RET                                 ; 0058c1d9

