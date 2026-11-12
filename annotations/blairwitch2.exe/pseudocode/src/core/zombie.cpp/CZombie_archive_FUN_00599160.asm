; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_archive_FUN_00599160(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005ef2cb
;   TerminatedCString s_modelName_005ef2d1
;   TerminatedCString s_guardDistance_005ef2db
;   TerminatedCString s_motion_state_005ef2e9
;   TerminatedCString s_partStatus_005ef2f6
;   TerminatedCString s_carriedActor_005ef301
;   TerminatedCString s_riseFromGraveCondition_005ef30e
;   TerminatedCString s_graveActor_005ef325
;   TerminatedCString s_clothList_005ef330
;   TerminatedCString s_isMinerZombie_005ef33a
;   TerminatedCString s_alwaysChaseFast_005ef348
;   int g_CZombieClassVersion = 0xb
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveClothList_FUN_0040bfd0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archivePartStatus_FUN_0040bc50
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599160
        ;   Label: core_zombie.cpp_CZombie_archive_FUN_00599160
    PUSH EDI                            ; 00599161
    MOV EBX,dword ptr [ESP + 0xc]       ; 00599162
    PUSH EBX                            ; 00599166
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 00599167
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059916c
    PUSH 0x5ef2cb                       ; 0059916f | = "speed"
    LEA EAX,[EBX + 0x10a60]             ; 00599174
    PUSH EAX                            ; 0059917a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0059917b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599180
    PUSH 0x5ef2d1                       ; 00599183 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 00599188
    PUSH EAX                            ; 0059918e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0059918f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061e998]      ; 00599194 | g_CZombieClassVersion
    ADD ESP,0x8                         ; 0059919a
    CMP EDX,0x2                         ; 0059919d
    JL 0x005991cf                       ; 005991a0
        ;   XREF to: 005991cf (CONDITIONAL_JUMP)  ; LAB_005991cf
    CMP EDX,0xb                         ; 005991a2
    JGE 0x005991bb                      ; 005991a5
        ;   XREF to: 005991bb (CONDITIONAL_JUMP)  ; LAB_005991bb
    PUSH 0x5ef2db                       ; 005991a7 | = "guardDistance"
    LEA EAX,[EBX + 0x10a70]             ; 005991ac
    PUSH EAX                            ; 005991b2
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005991b3
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005991b8
    PUSH 0x5ef2e9                       ; 005991bb | = "motion state"
        ;   Label: LAB_005991bb
    LEA EAX,[EBX + 0x2b4]               ; 005991c0
    PUSH EAX                            ; 005991c6
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 005991c7
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005991cc
    CMP dword ptr [0x0061e998],0x3      ; 005991cf | g_CZombieClassVersion
        ;   Label: LAB_005991cf
    JL 0x0059920b                       ; 005991d6
        ;   XREF to: 0059920b (CONDITIONAL_JUMP)  ; LAB_0059920b
    PUSH 0x5ef2f6                       ; 005991d8 | = "partStatus"
    LEA EAX,[EBX + 0x2b4]               ; 005991dd
    PUSH EAX                            ; 005991e3
    CALL core_actor.cpp_archivePartStatus_FUN_0040bc50 ; 005991e4
        ;   XREF to: 0040bc50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDI,dword ptr [0x0061e998]      ; 005991e9 | g_CZombieClassVersion
    ADD ESP,0x8                         ; 005991ef
    CMP EDI,0x7                         ; 005991f2
    JGE 0x0059920b                      ; 005991f5
        ;   XREF to: 0059920b (CONDITIONAL_JUMP)  ; LAB_0059920b
    PUSH 0x5ef301                       ; 005991f7 | = "carriedActor"
    LEA EAX,[EBX + 0x2698]              ; 005991fc
    PUSH EAX                            ; 00599202
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00599203
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599208
    CMP dword ptr [0x0061e998],0x4      ; 0059920b | g_CZombieClassVersion
        ;   Label: LAB_0059920b
    JL 0x00599228                       ; 00599212
        ;   XREF to: 00599228 (CONDITIONAL_JUMP)  ; LAB_00599228
    PUSH 0x5ef30e                       ; 00599214 | = "riseFromGraveCondition"
    LEA EAX,[EBX + 0x10b18]             ; 00599219
    PUSH EAX                            ; 0059921f
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00599220
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00599225
    CMP dword ptr [0x0061e998],0x5      ; 00599228 | g_CZombieClassVersion
        ;   Label: LAB_00599228
    JL 0x00599245                       ; 0059922f
        ;   XREF to: 00599245 (CONDITIONAL_JUMP)  ; LAB_00599245
    PUSH 0x5ef325                       ; 00599231 | = "graveActor"
    LEA EAX,[EBX + 0x10b10]             ; 00599236
    PUSH EAX                            ; 0059923c
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0059923d
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599242
    MOV EDX,dword ptr [0x0061e998]      ; 00599245 | g_CZombieClassVersion
        ;   Label: LAB_00599245
    CMP EDX,0x6                         ; 0059924b
    JL 0x00599269                       ; 0059924e
        ;   XREF to: 00599269 (CONDITIONAL_JUMP)  ; LAB_00599269
    CMP EDX,0x9                         ; 00599250
    JGE 0x00599269                      ; 00599253
        ;   XREF to: 00599269 (CONDITIONAL_JUMP)  ; LAB_00599269
    PUSH 0x5ef330                       ; 00599255 | = "clothList"
    LEA EAX,[EBX + 0x2d0c]              ; 0059925a
    PUSH EAX                            ; 00599260
    CALL core_actor.cpp_archiveClothList_FUN_0040bfd0 ; 00599261
        ;   XREF to: 0040bfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040bfd0(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 00599266
    CMP dword ptr [0x0061e998],0x8      ; 00599269 | g_CZombieClassVersion
        ;   Label: LAB_00599269
    JL 0x00599286                       ; 00599270
        ;   XREF to: 00599286 (CONDITIONAL_JUMP)  ; LAB_00599286
    PUSH 0x5ef33a                       ; 00599272 | = "isMinerZombie"
    LEA EAX,[EBX + 0x10b7c]             ; 00599277
    PUSH EAX                            ; 0059927d
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0059927e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599283
    CMP dword ptr [0x0061e998],0xa      ; 00599286 | g_CZombieClassVersion
        ;   Label: LAB_00599286
    JGE 0x00599292                      ; 0059928d
        ;   XREF to: 00599292 (CONDITIONAL_JUMP)  ; LAB_00599292
    POP EDI                             ; 0059928f
    POP EBX                             ; 00599290
    RET                                 ; 00599291
    PUSH 0x5ef348                       ; 00599292 | = "alwaysChaseFast"
        ;   Label: LAB_00599292
    ADD EBX,0x10b80                     ; 00599297
    PUSH EBX                            ; 0059929d
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0059929e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005992a3
    POP EDI                             ; 005992a6
    POP EBX                             ; 005992a7
    RET                                 ; 005992a8

