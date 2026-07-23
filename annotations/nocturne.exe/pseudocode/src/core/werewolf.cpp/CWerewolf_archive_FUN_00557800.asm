; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_CWerewolf_archive_FUN_00557800(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00597e41
;   TerminatedCString s_modelName_00597e47
;   TerminatedCString s_guardDistance_00597e51
;   TerminatedCString s_motion_state_00597e5f
;   TerminatedCString s_lightUpEyes_00597e6c
;   TerminatedCString s_chainAnchor_00597e78
;   TerminatedCString s_chainLength_00597e84
;   TerminatedCString s_type_00597e90
;   TerminatedCString s_phase_00597e95
;   TerminatedCString s_phaseTimer_00597e9b
;   TerminatedCString s_alpha1_00597ea6
;   TerminatedCString s_alpha2_00597ead
;   undefined4 DAT_005c1614
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557800
        ;   Label: core_werewolf.cpp_CWerewolf_archive_FUN_00557800
    MOV EBX,dword ptr [ESP + 0x8]       ; 00557801
    PUSH EBX                            ; 00557805
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00557806
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 0055780b
    PUSH 0x597e41                       ; 0055780e | = "speed"
    LEA EAX,[EBX + 0xbc8c]              ; 00557813
    PUSH EAX                            ; 00557819
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0055781a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0055781f
    PUSH 0x597e47                       ; 00557822 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00557827
    PUSH EAX                            ; 0055782d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0055782e
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    MOV EDX,dword ptr [0x005c1614]      ; 00557833 | DAT_005c1614
    ADD ESP,0x8                         ; 00557839
    CMP EDX,0x3                         ; 0055783c
    JL 0x005578d1                       ; 0055783f
        ;   XREF to: 005578d1 (CONDITIONAL_JUMP)  ; LAB_005578d1
    PUSH 0x597e5f                       ; 00557845 | = "motion state"
        ;   Label: LAB_00557845
    LEA EAX,[EBX + 0x150]               ; 0055784a
    PUSH EAX                            ; 00557850
    CALL core_actor.cpp_FUN_0040cb00    ; 00557851
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    MOV ECX,dword ptr [0x005c1614]      ; 00557856 | DAT_005c1614
    ADD ESP,0x8                         ; 0055785c
    CMP ECX,0x2                         ; 0055785f
    JL 0x00557878                       ; 00557862
        ;   XREF to: 00557878 (CONDITIONAL_JUMP)  ; LAB_00557878
    PUSH 0x597e6c                       ; 00557864 | = "lightUpEyes"
    LEA EAX,[EBX + 0xbd3c]              ; 00557869
    PUSH EAX                            ; 0055786f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00557870
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00557875
    CMP dword ptr [0x005c1614],0x4      ; 00557878 | DAT_005c1614
        ;   Label: LAB_00557878
    JL 0x005578a9                       ; 0055787f
        ;   XREF to: 005578a9 (CONDITIONAL_JUMP)  ; LAB_005578a9
    PUSH 0x597e78                       ; 00557881 | = "chainAnchor"
    LEA EAX,[EBX + 0xbd50]              ; 00557886
    PUSH EAX                            ; 0055788c
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0055788d
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00557892
    PUSH 0x597e84                       ; 00557895 | = "chainLength"
    LEA EAX,[EBX + 0xbd54]              ; 0055789a
    PUSH EAX                            ; 005578a0
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 005578a1
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 005578a6
    CMP dword ptr [0x005c1614],0x5      ; 005578a9 | DAT_005c1614
        ;   Label: LAB_005578a9
    JL 0x005578c6                       ; 005578b0
        ;   XREF to: 005578c6 (CONDITIONAL_JUMP)  ; LAB_005578c6
    PUSH 0x597e90                       ; 005578b2 | = "type"
    LEA EAX,[EBX + 0xbd24]              ; 005578b7
    PUSH EAX                            ; 005578bd
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 005578be
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 005578c3
    CMP dword ptr [0x005c1614],0x6      ; 005578c6 | DAT_005c1614
        ;   Label: LAB_005578c6
    JGE 0x005578ea                      ; 005578cd
        ;   XREF to: 005578ea (CONDITIONAL_JUMP)  ; LAB_005578ea
    POP EBX                             ; 005578cf
    RET                                 ; 005578d0
    PUSH 0x597e51                       ; 005578d1 | = "guardDistance"
        ;   Label: LAB_005578d1
    LEA EAX,[EBX + 0xbc9c]              ; 005578d6
    PUSH EAX                            ; 005578dc
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 005578dd
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 005578e2
    JMP 0x00557845                      ; 005578e5
        ;   XREF to: 00557845 (UNCONDITIONAL_JUMP)  ; LAB_00557845
    PUSH 0x597e95                       ; 005578ea | = "phase"
        ;   Label: LAB_005578ea
    LEA EAX,[EBX + 0xbd60]              ; 005578ef
    PUSH EAX                            ; 005578f5
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 005578f6
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 005578fb
    PUSH 0x597e9b                       ; 005578fe | = "phaseTimer"
    LEA EAX,[EBX + 0xbd64]              ; 00557903
    PUSH EAX                            ; 00557909
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0055790a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0055790f
    PUSH 0x597ea6                       ; 00557912 | = "alpha1"
    LEA EAX,[EBX + 0xbd58]              ; 00557917
    PUSH EAX                            ; 0055791d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0055791e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00557923
    PUSH 0x597ead                       ; 00557926 | = "alpha2"
    ADD EBX,0xbd5c                      ; 0055792b
    PUSH EBX                            ; 00557931
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00557932
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00557937
    POP EBX                             ; 0055793a
    RET                                 ; 0055793b

