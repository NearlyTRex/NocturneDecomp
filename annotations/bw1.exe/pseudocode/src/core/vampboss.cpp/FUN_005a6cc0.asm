; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vampboss_cpp_FUN_005a6cc0(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_human_model_motion_state_005f8e27+1
;   TerminatedCString s_bat_model_motion_state_005f8e41
;   TerminatedCString s_wayPoint0_005f8e58
;   TerminatedCString s_wayPoint1_005f8e62
;   TerminatedCString s_wayPoint2_005f8e6c
;   TerminatedCString s_wayPoint3_005f8e76
;   undefined4 DAT_005f8e80
;   TerminatedCString s_morphT_005f8e85
;   int g_CVampireBossClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6cc0
        ;   Label: core_vampboss.cpp_FUN_005a6cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a6cc1
    PUSH EBX                            ; 005a6cc5
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 005a6cc6
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    MOV EDX,dword ptr [0x00625c2c]      ; 005a6ccb | g_CVampireBossClassVersion
    ADD ESP,0x4                         ; 005a6cd1
    CMP EDX,0x2                         ; 005a6cd4
    JGE 0x005a6d3d                      ; 005a6cd7
        ;   XREF to: 005a6d3d (CONDITIONAL_JUMP)  ; LAB_005a6d3d
    CMP dword ptr [0x00625c2c],0x3      ; 005a6cd9 | g_CVampireBossClassVersion
        ;   Label: LAB_005a6cd9
    JL 0x005a6d32                       ; 005a6ce0
        ;   XREF to: 005a6d32 (CONDITIONAL_JUMP)  ; LAB_005a6d32
    PUSH 0x5f8e58                       ; 005a6ce2 | = "wayPoint0"
    LEA EAX,[EBX + 0xbf3e8]             ; 005a6ce7
    PUSH EAX                            ; 005a6ced
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005a6cee
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a6cf3
    PUSH 0x5f8e62                       ; 005a6cf6 | = "wayPoint1"
    LEA EAX,[EBX + 0xbf3ec]             ; 005a6cfb
    PUSH EAX                            ; 005a6d01
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005a6d02
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a6d07
    PUSH 0x5f8e6c                       ; 005a6d0a | = "wayPoint2"
    LEA EAX,[EBX + 0xbf3f0]             ; 005a6d0f
    PUSH EAX                            ; 005a6d15
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005a6d16
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a6d1b
    PUSH 0x5f8e76                       ; 005a6d1e | = "wayPoint3"
    LEA EAX,[EBX + 0xbf3f4]             ; 005a6d23
    PUSH EAX                            ; 005a6d29
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005a6d2a
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a6d2f
    CMP dword ptr [0x00625c2c],0x4      ; 005a6d32 | g_CVampireBossClassVersion
        ;   Label: LAB_005a6d32
    JGE 0x005a6d6a                      ; 005a6d39
        ;   XREF to: 005a6d6a (CONDITIONAL_JUMP)  ; LAB_005a6d6a
    POP EBX                             ; 005a6d3b
    RET                                 ; 005a6d3c
    PUSH 0x5f8e28                       ; 005a6d3d | s_human_model_motion_state_005f8e27+1
        ;   Label: LAB_005a6d3d
    LEA EAX,[EBX + 0x158]               ; 005a6d42
    PUSH EAX                            ; 005a6d48
    CALL core_actor.cpp_FUN_0040b870    ; 005a6d49
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005a6d4e
    PUSH 0x5f8e41                       ; 005a6d51 | = "bat model motion state"
    LEA EAX,[EBX + 0xc268]              ; 005a6d56
    PUSH EAX                            ; 005a6d5c
    CALL core_actor.cpp_FUN_0040b870    ; 005a6d5d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005a6d62
    JMP 0x005a6cd9                      ; 005a6d65
        ;   XREF to: 005a6cd9 (UNCONDITIONAL_JUMP)  ; LAB_005a6cd9
    PUSH 0x5f8e80                       ; 005a6d6a | DAT_005f8e80
        ;   Label: LAB_005a6d6a
    LEA EAX,[EBX + 0xbe79c]             ; 005a6d6f
    PUSH EAX                            ; 005a6d75
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005a6d76
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a6d7b
    PUSH 0x5f8e85                       ; 005a6d7e | = "morphT"
    ADD EBX,0xbf3cc                     ; 005a6d83
    PUSH EBX                            ; 005a6d89
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005a6d8a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a6d8f
    POP EBX                             ; 005a6d92
    RET                                 ; 005a6d93

