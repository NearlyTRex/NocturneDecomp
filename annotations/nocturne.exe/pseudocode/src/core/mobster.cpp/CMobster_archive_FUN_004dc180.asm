; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_CMobster_archive_FUN_004dc180(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0058a3e1
;   TerminatedCString s_modelName_0058a3e7
;   TerminatedCString s_guardDistance_0058a3f1
;   TerminatedCString s_motion_state_0058a3ff
;   TerminatedCString s_clothList_0058a40c
;   TerminatedCString s_postMode_0058a416
;   TerminatedCString s_ourPost_0058a41f
;   TerminatedCString s_vehicle_0058a427
;   TerminatedCString s_sideOfCar_0058a42f
;   TerminatedCString s_holdPosFlag_0058a439
;   TerminatedCString s_holdPosCond_0058a445
;   int INT_005bb124 = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveClothList_FUN_0040cf70
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc180
        ;   Label: core_mobster.cpp_CMobster_archive_FUN_004dc180
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dc181
    PUSH EBX                            ; 004dc185
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 004dc186
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004dc18b
    PUSH 0x58a3e1                       ; 004dc18e | = "speed"
    LEA EAX,[EBX + 0xbc8c]              ; 004dc193
    PUSH EAX                            ; 004dc199
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004dc19a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004dc19f
    PUSH 0x58a3e7                       ; 004dc1a2 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 004dc1a7
    PUSH EAX                            ; 004dc1ad
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004dc1ae
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    MOV EDX,dword ptr [0x005bb124]      ; 004dc1b3 | INT_005bb124
    ADD ESP,0x8                         ; 004dc1b9
    CMP EDX,0x4                         ; 004dc1bc
    JL 0x004dc265                       ; 004dc1bf
        ;   XREF to: 004dc265 (CONDITIONAL_JUMP)  ; LAB_004dc265
    PUSH 0x58a3ff                       ; 004dc1c5 | = "motion state"
        ;   Label: LAB_004dc1c5
    LEA EAX,[EBX + 0x150]               ; 004dc1ca
    PUSH EAX                            ; 004dc1d0
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 004dc1d1
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    MOV ECX,dword ptr [0x005bb124]      ; 004dc1d6 | INT_005bb124
    ADD ESP,0x8                         ; 004dc1dc
    CMP ECX,0x2                         ; 004dc1df
    JNZ 0x004dc1f8                      ; 004dc1e2
        ;   XREF to: 004dc1f8 (CONDITIONAL_JUMP)  ; LAB_004dc1f8
    PUSH 0x58a40c                       ; 004dc1e4 | = "clothList"
    LEA EAX,[EBX + 0x2a8c]              ; 004dc1e9
    PUSH EAX                            ; 004dc1ef
    CALL core_actor.cpp_archiveClothList_FUN_0040cf70 ; 004dc1f0
        ;   XREF to: 0040cf70 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040cf70(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 004dc1f5
    CMP dword ptr [0x005bb124],0x5      ; 004dc1f8 | INT_005bb124
        ;   Label: LAB_004dc1f8
    JL 0x004dc229                       ; 004dc1ff
        ;   XREF to: 004dc229 (CONDITIONAL_JUMP)  ; LAB_004dc229
    PUSH 0x58a416                       ; 004dc201 | = "postMode"
    LEA EAX,[EBX + 0xbd40]              ; 004dc206
    PUSH EAX                            ; 004dc20c
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004dc20d
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004dc212
    PUSH 0x58a41f                       ; 004dc215 | = "ourPost"
    LEA EAX,[EBX + 0xbd44]              ; 004dc21a
    PUSH EAX                            ; 004dc220
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004dc221
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004dc226
    CMP dword ptr [0x005bb124],0x6      ; 004dc229 | INT_005bb124
        ;   Label: LAB_004dc229
    JL 0x004dc25a                       ; 004dc230
        ;   XREF to: 004dc25a (CONDITIONAL_JUMP)  ; LAB_004dc25a
    PUSH 0x58a427                       ; 004dc232 | = "vehicle"
    LEA EAX,[EBX + 0xbd48]              ; 004dc237
    PUSH EAX                            ; 004dc23d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004dc23e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004dc243
    PUSH 0x58a42f                       ; 004dc246 | = "sideOfCar"
    LEA EAX,[EBX + 0xbd4c]              ; 004dc24b
    PUSH EAX                            ; 004dc251
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004dc252
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004dc257
    CMP dword ptr [0x005bb124],0x7      ; 004dc25a | INT_005bb124
        ;   Label: LAB_004dc25a
    JGE 0x004dc27e                      ; 004dc261
        ;   XREF to: 004dc27e (CONDITIONAL_JUMP)  ; LAB_004dc27e
    POP EBX                             ; 004dc263
    RET                                 ; 004dc264
    PUSH 0x58a3f1                       ; 004dc265 | = "guardDistance"
        ;   Label: LAB_004dc265
    LEA EAX,[EBX + 0xbc9c]              ; 004dc26a
    PUSH EAX                            ; 004dc270
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004dc271
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004dc276
    JMP 0x004dc1c5                      ; 004dc279
        ;   XREF to: 004dc1c5 (UNCONDITIONAL_JUMP)  ; LAB_004dc1c5
    PUSH 0x58a439                       ; 004dc27e | = "holdPosFlag"
        ;   Label: LAB_004dc27e
    LEA EAX,[EBX + 0xbd50]              ; 004dc283
    PUSH EAX                            ; 004dc289
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004dc28a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004dc28f
    PUSH 0x58a445                       ; 004dc292 | = "holdPosCond"
    ADD EBX,0xbd54                      ; 004dc297
    PUSH EBX                            ; 004dc29d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004dc29e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004dc2a3
    POP EBX                             ; 004dc2a6
    RET                                 ; 004dc2a7

