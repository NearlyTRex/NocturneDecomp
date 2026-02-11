; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_zombie_cpp_CZombie_archive_FUN_005fbfd0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_00658926
;   TerminatedCString s_modelName_0065892c
;   TerminatedCString s_guardDistance_00658936
;   TerminatedCString s_motion_state_00658944
;   TerminatedCString s_partStatus_00658951
;   TerminatedCString s_carriedActor_0065895c
;   TerminatedCString s_riseFromGraveCondition_00658969
;   TerminatedCString s_graveActor_00658980
;   TerminatedCString s_clothList_0065898b
;   TerminatedCString s_isMinerZombie_00658995
;   TerminatedCString s_alwaysChaseFast_006589a3
;   int g_CZombieClassVersion = 0xb
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveClothList_FUN_0040be60
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0
;   core_actor.cpp_archivePartStatus_FUN_0040bae0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_enemy.cpp_CEnemy_archive_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fbfd0
        ;   Label: core_zombie.cpp_CZombie_archive_FUN_005fbfd0
    PUSH EDI                            ; 005fbfd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005fbfd2
    PUSH EBX                            ; 005fbfd6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a9660 ; 005fbfd7
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005fbfdc
    PUSH 0x658926                       ; 005fbfdf | = "speed"
    LEA EAX,[EBX + 0xbe24]              ; 005fbfe4
    PUSH EAX                            ; 005fbfea
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005fbfeb
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005fbff0
    PUSH 0x65892c                       ; 005fbff3 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005fbff8
    PUSH EAX                            ; 005fbffe
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970 ; 005fbfff
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x006849b0]      ; 005fc004 | g_CZombieClassVersion
    ADD ESP,0x8                         ; 005fc00a
    CMP EDX,0x2                         ; 005fc00d
    JL 0x005fc03f                       ; 005fc010
        ;   XREF to: 005fc03f (CONDITIONAL_JUMP)  ; LAB_005fc03f
    CMP EDX,0xb                         ; 005fc012
    JGE 0x005fc02b                      ; 005fc015
        ;   XREF to: 005fc02b (CONDITIONAL_JUMP)  ; LAB_005fc02b
    PUSH 0x658936                       ; 005fc017 | = "guardDistance"
    LEA EAX,[EBX + 0xbe34]              ; 005fc01c
    PUSH EAX                            ; 005fc022
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005fc023
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005fc028
    PUSH 0x658944                       ; 005fc02b | = "motion state"
        ;   Label: LAB_005fc02b
    LEA EAX,[EBX + 0x158]               ; 005fc030
    PUSH EAX                            ; 005fc036
    CALL core_actor.cpp_archiveMotionState_FUN_0040b9f0 ; 005fc037
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005fc03c
    CMP dword ptr [0x006849b0],0x3      ; 005fc03f | g_CZombieClassVersion
        ;   Label: LAB_005fc03f
    JL 0x005fc07b                       ; 005fc046
        ;   XREF to: 005fc07b (CONDITIONAL_JUMP)  ; LAB_005fc07b
    PUSH 0x658951                       ; 005fc048 | = "partStatus"
    LEA EAX,[EBX + 0x158]               ; 005fc04d
    PUSH EAX                            ; 005fc053
    CALL core_actor.cpp_archivePartStatus_FUN_0040bae0 ; 005fc054
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDI,dword ptr [0x006849b0]      ; 005fc059 | g_CZombieClassVersion
    ADD ESP,0x8                         ; 005fc05f
    CMP EDI,0x7                         ; 005fc062
    JGE 0x005fc07b                      ; 005fc065
        ;   XREF to: 005fc07b (CONDITIONAL_JUMP)  ; LAB_005fc07b
    PUSH 0x65895c                       ; 005fc067 | = "carriedActor"
    LEA EAX,[EBX + 0x24f8]              ; 005fc06c
    PUSH EAX                            ; 005fc072
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005fc073
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005fc078
    CMP dword ptr [0x006849b0],0x4      ; 005fc07b | g_CZombieClassVersion
        ;   Label: LAB_005fc07b
    JL 0x005fc098                       ; 005fc082
        ;   XREF to: 005fc098 (CONDITIONAL_JUMP)  ; LAB_005fc098
    PUSH 0x658969                       ; 005fc084 | = "riseFromGraveCondition"
    LEA EAX,[EBX + 0xbedc]              ; 005fc089
    PUSH EAX                            ; 005fc08f
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005fc090
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005fc095
    CMP dword ptr [0x006849b0],0x5      ; 005fc098 | g_CZombieClassVersion
        ;   Label: LAB_005fc098
    JL 0x005fc0b5                       ; 005fc09f
        ;   XREF to: 005fc0b5 (CONDITIONAL_JUMP)  ; LAB_005fc0b5
    PUSH 0x658980                       ; 005fc0a1 | = "graveActor"
    LEA EAX,[EBX + 0xbed4]              ; 005fc0a6
    PUSH EAX                            ; 005fc0ac
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005fc0ad
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005fc0b2
    MOV EDX,dword ptr [0x006849b0]      ; 005fc0b5 | g_CZombieClassVersion
        ;   Label: LAB_005fc0b5
    CMP EDX,0x6                         ; 005fc0bb
    JL 0x005fc0d9                       ; 005fc0be
        ;   XREF to: 005fc0d9 (CONDITIONAL_JUMP)  ; LAB_005fc0d9
    CMP EDX,0x9                         ; 005fc0c0
    JGE 0x005fc0d9                      ; 005fc0c3
        ;   XREF to: 005fc0d9 (CONDITIONAL_JUMP)  ; LAB_005fc0d9
    PUSH 0x65898b                       ; 005fc0c5 | = "clothList"
    LEA EAX,[EBX + 0x2a94]              ; 005fc0ca
    PUSH EAX                            ; 005fc0d0
    CALL core_actor.cpp_archiveClothList_FUN_0040be60 ; 005fc0d1
        ;   XREF to: 0040be60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040be60(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 005fc0d6
    CMP dword ptr [0x006849b0],0x8      ; 005fc0d9 | g_CZombieClassVersion
        ;   Label: LAB_005fc0d9
    JL 0x005fc0f6                       ; 005fc0e0
        ;   XREF to: 005fc0f6 (CONDITIONAL_JUMP)  ; LAB_005fc0f6
    PUSH 0x658995                       ; 005fc0e2 | = "isMinerZombie"
    LEA EAX,[EBX + 0xbf40]              ; 005fc0e7
    PUSH EAX                            ; 005fc0ed
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005fc0ee
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005fc0f3
    CMP dword ptr [0x006849b0],0xa      ; 005fc0f6 | g_CZombieClassVersion
        ;   Label: LAB_005fc0f6
    JGE 0x005fc102                      ; 005fc0fd
        ;   XREF to: 005fc102 (CONDITIONAL_JUMP)  ; LAB_005fc102
    POP EDI                             ; 005fc0ff
    POP EBX                             ; 005fc100
    RET                                 ; 005fc101
    PUSH 0x6589a3                       ; 005fc102 | = "alwaysChaseFast"
        ;   Label: LAB_005fc102
    ADD EBX,0xbf44                      ; 005fc107
    PUSH EBX                            ; 005fc10d
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005fc10e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005fc113
    POP EDI                             ; 005fc116
    POP EBX                             ; 005fc117
    RET                                 ; 005fc118

