; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vampboss_cpp_CVampireBoss_archive_FUN_0054dc70(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_human_model_motion_state_00597165
;   TerminatedCString s_bat_model_motion_state_0059717e
;   TerminatedCString s_wayPoint0_00597195
;   TerminatedCString s_wayPoint1_0059719f
;   TerminatedCString s_wayPoint2_005971a9
;   TerminatedCString s_wayPoint3_005971b3
;   TerminatedCString s_form_005971bd
;   TerminatedCString s_morphT_005971c2
;   int INT_005c1188 = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dc70
        ;   Label: core_vampboss.cpp_CVampireBoss_archive_FUN_0054dc70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054dc71
    PUSH EBX                            ; 0054dc75
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 0054dc76
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    MOV EDX,dword ptr [0x005c1188]      ; 0054dc7b | INT_005c1188
    ADD ESP,0x4                         ; 0054dc81
    CMP EDX,0x2                         ; 0054dc84
    JGE 0x0054dced                      ; 0054dc87
        ;   XREF to: 0054dced (CONDITIONAL_JUMP)  ; LAB_0054dced
    CMP dword ptr [0x005c1188],0x3      ; 0054dc89 | INT_005c1188
        ;   Label: LAB_0054dc89
    JL 0x0054dce2                       ; 0054dc90
        ;   XREF to: 0054dce2 (CONDITIONAL_JUMP)  ; LAB_0054dce2
    PUSH 0x597195                       ; 0054dc92 | = "wayPoint0"
    LEA EAX,[EBX + 0xbedb4]             ; 0054dc97
    PUSH EAX                            ; 0054dc9d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0054dc9e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0054dca3
    PUSH 0x59719f                       ; 0054dca6 | = "wayPoint1"
    LEA EAX,[EBX + 0xbedb8]             ; 0054dcab
    PUSH EAX                            ; 0054dcb1
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0054dcb2
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0054dcb7
    PUSH 0x5971a9                       ; 0054dcba | = "wayPoint2"
    LEA EAX,[EBX + 0xbedbc]             ; 0054dcbf
    PUSH EAX                            ; 0054dcc5
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0054dcc6
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0054dccb
    PUSH 0x5971b3                       ; 0054dcce | = "wayPoint3"
    LEA EAX,[EBX + 0xbedc0]             ; 0054dcd3
    PUSH EAX                            ; 0054dcd9
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0054dcda
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0054dcdf
    CMP dword ptr [0x005c1188],0x4      ; 0054dce2 | INT_005c1188
        ;   Label: LAB_0054dce2
    JGE 0x0054dd1a                      ; 0054dce9
        ;   XREF to: 0054dd1a (CONDITIONAL_JUMP)  ; LAB_0054dd1a
    POP EBX                             ; 0054dceb
    RET                                 ; 0054dcec
    PUSH 0x597165                       ; 0054dced | = "human model motion state"
        ;   Label: LAB_0054dced
    LEA EAX,[EBX + 0x150]               ; 0054dcf2
    PUSH EAX                            ; 0054dcf8
    CALL core_actor.cpp_FUN_0040cb00    ; 0054dcf9
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    ADD ESP,0x8                         ; 0054dcfe
    PUSH 0x59717e                       ; 0054dd01 | = "bat model motion state"
    LEA EAX,[EBX + 0xbd24]              ; 0054dd06
    PUSH EAX                            ; 0054dd0c
    CALL core_actor.cpp_FUN_0040cb00    ; 0054dd0d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    ADD ESP,0x8                         ; 0054dd12
    JMP 0x0054dc89                      ; 0054dd15
        ;   XREF to: 0054dc89 (UNCONDITIONAL_JUMP)  ; LAB_0054dc89
    PUSH 0x5971bd                       ; 0054dd1a | = "form"
        ;   Label: LAB_0054dd1a
    LEA EAX,[EBX + 0xbe168]             ; 0054dd1f
    PUSH EAX                            ; 0054dd25
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0054dd26
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0054dd2b
    PUSH 0x5971c2                       ; 0054dd2e | = "morphT"
    ADD EBX,0xbed98                     ; 0054dd33
    PUSH EBX                            ; 0054dd39
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054dd3a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0054dd3f
    POP EBX                             ; 0054dd42
    RET                                 ; 0054dd43

