; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_005be1e0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005fa89d
;   TerminatedCString s_modelName_005fa8a3
;   TerminatedCString s_guardDistance_005fa8ad
;   TerminatedCString s_motion_state_005fa8bb
;   TerminatedCString s_partStatus_005fa8c8
;   TerminatedCString s_carriedActor_005fa8d3
;   TerminatedCString s_riseFromGraveCondition_005fa8e0
;   TerminatedCString s_graveActor_005fa8f7
;   TerminatedCString s_clothList_005fa902
;   TerminatedCString s_isMinerZombie_005fa90c
;   TerminatedCString s_alwaysChaseFast_005fa91a
;   int g_CZombieClassVersion = 0xb
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveClothList_FUN_0040bce0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_actor.cpp_FUN_0040b960
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be1e0
        ;   Label: core_zombie.cpp_FUN_005be1e0
    PUSH EDI                            ; 005be1e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005be1e2
    PUSH EBX                            ; 005be1e6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 005be1e7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005be1ec
    PUSH 0x5fa89d                       ; 005be1ef | = "speed"
    LEA EAX,[EBX + 0xc1d0]              ; 005be1f4
    PUSH EAX                            ; 005be1fa
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005be1fb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005be200
    PUSH 0x5fa8a3                       ; 005be203 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005be208
    PUSH EAX                            ; 005be20e
    CALL core_actor.cpp_FUN_0040b7f0    ; 005be20f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x00626100]      ; 005be214 | g_CZombieClassVersion
    ADD ESP,0x8                         ; 005be21a
    CMP EDX,0x2                         ; 005be21d
    JL 0x005be24f                       ; 005be220
        ;   XREF to: 005be24f (CONDITIONAL_JUMP)  ; LAB_005be24f
    CMP EDX,0xb                         ; 005be222
    JGE 0x005be23b                      ; 005be225
        ;   XREF to: 005be23b (CONDITIONAL_JUMP)  ; LAB_005be23b
    PUSH 0x5fa8ad                       ; 005be227 | = "guardDistance"
    LEA EAX,[EBX + 0xc1e0]              ; 005be22c
    PUSH EAX                            ; 005be232
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005be233
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005be238
    PUSH 0x5fa8bb                       ; 005be23b | = "motion state"
        ;   Label: LAB_005be23b
    LEA EAX,[EBX + 0x158]               ; 005be240
    PUSH EAX                            ; 005be246
    CALL core_actor.cpp_FUN_0040b870    ; 005be247
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005be24c
    CMP dword ptr [0x00626100],0x3      ; 005be24f | g_CZombieClassVersion
        ;   Label: LAB_005be24f
    JL 0x005be28b                       ; 005be256
        ;   XREF to: 005be28b (CONDITIONAL_JUMP)  ; LAB_005be28b
    PUSH 0x5fa8c8                       ; 005be258 | = "partStatus"
    LEA EAX,[EBX + 0x158]               ; 005be25d
    PUSH EAX                            ; 005be263
    CALL core_actor.cpp_FUN_0040b960    ; 005be264
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b960(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDI,dword ptr [0x00626100]      ; 005be269 | g_CZombieClassVersion
    ADD ESP,0x8                         ; 005be26f
    CMP EDI,0x7                         ; 005be272
    JGE 0x005be28b                      ; 005be275
        ;   XREF to: 005be28b (CONDITIONAL_JUMP)  ; LAB_005be28b
    PUSH 0x5fa8d3                       ; 005be277 | = "carriedActor"
    LEA EAX,[EBX + 0x2628]              ; 005be27c
    PUSH EAX                            ; 005be282
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005be283
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005be288
    CMP dword ptr [0x00626100],0x4      ; 005be28b | g_CZombieClassVersion
        ;   Label: LAB_005be28b
    JL 0x005be2a8                       ; 005be292
        ;   XREF to: 005be2a8 (CONDITIONAL_JUMP)  ; LAB_005be2a8
    PUSH 0x5fa8e0                       ; 005be294 | = "riseFromGraveCondition"
    LEA EAX,[EBX + 0xc288]              ; 005be299
    PUSH EAX                            ; 005be29f
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005be2a0
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005be2a5
    CMP dword ptr [0x00626100],0x5      ; 005be2a8 | g_CZombieClassVersion
        ;   Label: LAB_005be2a8
    JL 0x005be2c5                       ; 005be2af
        ;   XREF to: 005be2c5 (CONDITIONAL_JUMP)  ; LAB_005be2c5
    PUSH 0x5fa8f7                       ; 005be2b1 | = "graveActor"
    LEA EAX,[EBX + 0xc280]              ; 005be2b6
    PUSH EAX                            ; 005be2bc
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005be2bd
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005be2c2
    MOV EDX,dword ptr [0x00626100]      ; 005be2c5 | g_CZombieClassVersion
        ;   Label: LAB_005be2c5
    CMP EDX,0x6                         ; 005be2cb
    JL 0x005be2e9                       ; 005be2ce
        ;   XREF to: 005be2e9 (CONDITIONAL_JUMP)  ; LAB_005be2e9
    CMP EDX,0x9                         ; 005be2d0
    JGE 0x005be2e9                      ; 005be2d3
        ;   XREF to: 005be2e9 (CONDITIONAL_JUMP)  ; LAB_005be2e9
    PUSH 0x5fa902                       ; 005be2d5 | = "clothList"
    LEA EAX,[EBX + 0x2ca0]              ; 005be2da
    PUSH EAX                            ; 005be2e0
    CALL core_actor.cpp_archiveClothList_FUN_0040bce0 ; 005be2e1
        ;   XREF to: 0040bce0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040bce0()
    ADD ESP,0x8                         ; 005be2e6
    CMP dword ptr [0x00626100],0x8      ; 005be2e9 | g_CZombieClassVersion
        ;   Label: LAB_005be2e9
    JL 0x005be306                       ; 005be2f0
        ;   XREF to: 005be306 (CONDITIONAL_JUMP)  ; LAB_005be306
    PUSH 0x5fa90c                       ; 005be2f2 | = "isMinerZombie"
    LEA EAX,[EBX + 0xc2ec]              ; 005be2f7
    PUSH EAX                            ; 005be2fd
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005be2fe
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005be303
    CMP dword ptr [0x00626100],0xa      ; 005be306 | g_CZombieClassVersion
        ;   Label: LAB_005be306
    JGE 0x005be312                      ; 005be30d
        ;   XREF to: 005be312 (CONDITIONAL_JUMP)  ; LAB_005be312
    POP EDI                             ; 005be30f
    POP EBX                             ; 005be310
    RET                                 ; 005be311
    PUSH 0x5fa91a                       ; 005be312 | = "alwaysChaseFast"
        ;   Label: LAB_005be312
    ADD EBX,0xc2f0                      ; 005be317
    PUSH EBX                            ; 005be31d
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005be31e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005be323
    POP EDI                             ; 005be326
    POP EBX                             ; 005be327
    RET                                 ; 005be328

