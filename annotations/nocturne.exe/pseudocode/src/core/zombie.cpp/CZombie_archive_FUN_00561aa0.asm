; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_CZombie_archive_FUN_00561aa0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00598887
;   TerminatedCString s_modelName_0059888d
;   TerminatedCString s_guardDistance_00598897
;   TerminatedCString s_motion_state_005988a5
;   TerminatedCString s_partStatus_005988b2
;   TerminatedCString s_carriedActor_005988bd
;   TerminatedCString s_riseFromGraveCondition_005988ca
;   TerminatedCString s_graveActor_005988e1
;   TerminatedCString s_clothList_005988ec
;   TerminatedCString s_isMinerZombie_005988f6
;   TerminatedCString s_alwaysChaseFast_00598904
;   int INT_005c166c = 0xb
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveClothList_FUN_0040cf70
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561aa0
        ;   Label: core_zombie.cpp_CZombie_archive_FUN_00561aa0
    PUSH EDI                            ; 00561aa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00561aa2
    PUSH EBX                            ; 00561aa6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00561aa7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 00561aac
    PUSH 0x598887                       ; 00561aaf | = "speed"
    LEA EAX,[EBX + 0xbc8c]              ; 00561ab4
    PUSH EAX                            ; 00561aba
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00561abb
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00561ac0
    PUSH 0x59888d                       ; 00561ac3 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00561ac8
    PUSH EAX                            ; 00561ace
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 00561acf
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    MOV EDX,dword ptr [0x005c166c]      ; 00561ad4 | INT_005c166c
    ADD ESP,0x8                         ; 00561ada
    CMP EDX,0x2                         ; 00561add
    JL 0x00561b0f                       ; 00561ae0
        ;   XREF to: 00561b0f (CONDITIONAL_JUMP)  ; LAB_00561b0f
    CMP EDX,0xb                         ; 00561ae2
    JGE 0x00561afb                      ; 00561ae5
        ;   XREF to: 00561afb (CONDITIONAL_JUMP)  ; LAB_00561afb
    PUSH 0x598897                       ; 00561ae7 | = "guardDistance"
    LEA EAX,[EBX + 0xbc9c]              ; 00561aec
    PUSH EAX                            ; 00561af2
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00561af3
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00561af8
    PUSH 0x5988a5                       ; 00561afb | = "motion state"
        ;   Label: LAB_00561afb
    LEA EAX,[EBX + 0x150]               ; 00561b00
    PUSH EAX                            ; 00561b06
    CALL core_actor.cpp_FUN_0040cb00    ; 00561b07
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    ADD ESP,0x8                         ; 00561b0c
    CMP dword ptr [0x005c166c],0x3      ; 00561b0f | INT_005c166c
        ;   Label: LAB_00561b0f
    JL 0x00561b4b                       ; 00561b16
        ;   XREF to: 00561b4b (CONDITIONAL_JUMP)  ; LAB_00561b4b
    PUSH 0x5988b2                       ; 00561b18 | = "partStatus"
    LEA EAX,[EBX + 0x150]               ; 00561b1d
    PUSH EAX                            ; 00561b23
    CALL core_actor.cpp_archivePartStatus_FUN_0040cbf0 ; 00561b24
        ;   XREF to: 0040cbf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archivePartStatus_FUN_0040cbf0()
    MOV EDI,dword ptr [0x005c166c]      ; 00561b29 | INT_005c166c
    ADD ESP,0x8                         ; 00561b2f
    CMP EDI,0x7                         ; 00561b32
    JGE 0x00561b4b                      ; 00561b35
        ;   XREF to: 00561b4b (CONDITIONAL_JUMP)  ; LAB_00561b4b
    PUSH 0x5988bd                       ; 00561b37 | = "carriedActor"
    LEA EAX,[EBX + 0x24f0]              ; 00561b3c
    PUSH EAX                            ; 00561b42
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00561b43
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00561b48
    CMP dword ptr [0x005c166c],0x4      ; 00561b4b | INT_005c166c
        ;   Label: LAB_00561b4b
    JL 0x00561b68                       ; 00561b52
        ;   XREF to: 00561b68 (CONDITIONAL_JUMP)  ; LAB_00561b68
    PUSH 0x5988ca                       ; 00561b54 | = "riseFromGraveCondition"
    LEA EAX,[EBX + 0xbd44]              ; 00561b59
    PUSH EAX                            ; 00561b5f
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00561b60
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00561b65
    CMP dword ptr [0x005c166c],0x5      ; 00561b68 | INT_005c166c
        ;   Label: LAB_00561b68
    JL 0x00561b85                       ; 00561b6f
        ;   XREF to: 00561b85 (CONDITIONAL_JUMP)  ; LAB_00561b85
    PUSH 0x5988e1                       ; 00561b71 | = "graveActor"
    LEA EAX,[EBX + 0xbd3c]              ; 00561b76
    PUSH EAX                            ; 00561b7c
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00561b7d
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00561b82
    MOV EDX,dword ptr [0x005c166c]      ; 00561b85 | INT_005c166c
        ;   Label: LAB_00561b85
    CMP EDX,0x6                         ; 00561b8b
    JL 0x00561ba9                       ; 00561b8e
        ;   XREF to: 00561ba9 (CONDITIONAL_JUMP)  ; LAB_00561ba9
    CMP EDX,0x9                         ; 00561b90
    JGE 0x00561ba9                      ; 00561b93
        ;   XREF to: 00561ba9 (CONDITIONAL_JUMP)  ; LAB_00561ba9
    PUSH 0x5988ec                       ; 00561b95 | = "clothList"
    LEA EAX,[EBX + 0x2a8c]              ; 00561b9a
    PUSH EAX                            ; 00561ba0
    CALL core_actor.cpp_archiveClothList_FUN_0040cf70 ; 00561ba1
        ;   XREF to: 0040cf70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040cf70()
    ADD ESP,0x8                         ; 00561ba6
    CMP dword ptr [0x005c166c],0x8      ; 00561ba9 | INT_005c166c
        ;   Label: LAB_00561ba9
    JL 0x00561bc6                       ; 00561bb0
        ;   XREF to: 00561bc6 (CONDITIONAL_JUMP)  ; LAB_00561bc6
    PUSH 0x5988f6                       ; 00561bb2 | = "isMinerZombie"
    LEA EAX,[EBX + 0xbda8]              ; 00561bb7
    PUSH EAX                            ; 00561bbd
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00561bbe
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00561bc3
    CMP dword ptr [0x005c166c],0xa      ; 00561bc6 | INT_005c166c
        ;   Label: LAB_00561bc6
    JGE 0x00561bd2                      ; 00561bcd
        ;   XREF to: 00561bd2 (CONDITIONAL_JUMP)  ; LAB_00561bd2
    POP EDI                             ; 00561bcf
    POP EBX                             ; 00561bd0
    RET                                 ; 00561bd1
    PUSH 0x598904                       ; 00561bd2 | = "alwaysChaseFast"
        ;   Label: LAB_00561bd2
    ADD EBX,0xbdac                      ; 00561bd7
    PUSH EBX                            ; 00561bdd
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00561bde
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00561be3
    POP EDI                             ; 00561be6
    POP EBX                             ; 00561be7
    RET                                 ; 00561be8

