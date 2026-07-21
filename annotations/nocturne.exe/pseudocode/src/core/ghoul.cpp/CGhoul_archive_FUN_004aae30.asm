; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghoul_cpp_CGhoul_archive_FUN_004aae30(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_00584dbc+1
;   string s_modelName_00584dc3
;   string s_guardDistance_00584dcd
;   string s_livesLeft_00584ddb
;   string s_motion_state_00584de5
;   string s_partStatus_00584df2
;   string s_spasmCount_00584dfd
;   string s_livesLeft_00584e08
;   string s_ariseTimer_00584e12
;   undefined4 DAT_005b9650
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;   FUN_0040cb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aae30
        ;   Label: core_ghoul.cpp_CGhoul_archive_FUN_004aae30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004aae31
    PUSH EBX                            ; 004aae35
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 004aae36
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    MOV EDX,dword ptr [0x005b9650]      ; 004aae3b | DAT_005b9650
    ADD ESP,0x4                         ; 004aae41
    CMP EDX,0x4                         ; 004aae44
    JL 0x004aaeca                       ; 004aae47
        ;   XREF to: 004aaeca (CONDITIONAL_JUMP)  ; LAB_004aaeca
    PUSH 0x584dc3                       ; 004aae4d | = "modelName"
        ;   Label: LAB_004aae4d
    LEA EAX,[EBX + 0x150]               ; 004aae52
    PUSH EAX                            ; 004aae58
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004aae59
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    MOV ECX,dword ptr [0x005b9650]      ; 004aae5e | DAT_005b9650
    ADD ESP,0x8                         ; 004aae64
    CMP ECX,0x2                         ; 004aae67
    JL 0x004aae85                       ; 004aae6a
        ;   XREF to: 004aae85 (CONDITIONAL_JUMP)  ; LAB_004aae85
    CMP ECX,0x7                         ; 004aae6c
    JGE 0x004aae85                      ; 004aae6f
        ;   XREF to: 004aae85 (CONDITIONAL_JUMP)  ; LAB_004aae85
    PUSH 0x584dcd                       ; 004aae71 | = "guardDistance"
    LEA EAX,[EBX + 0xbc9c]              ; 004aae76
    PUSH EAX                            ; 004aae7c
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004aae7d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004aae82
    CMP dword ptr [0x005b9650],0x3      ; 004aae85 | DAT_005b9650
        ;   Label: LAB_004aae85
    JL 0x004aaea2                       ; 004aae8c
        ;   XREF to: 004aaea2 (CONDITIONAL_JUMP)  ; LAB_004aaea2
    PUSH 0x584ddb                       ; 004aae8e | = "livesLeft"
    LEA EAX,[EBX + 0xbd40]              ; 004aae93
    PUSH EAX                            ; 004aae99
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004aae9a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004aae9f
    CMP dword ptr [0x005b9650],0x5      ; 004aaea2 | DAT_005b9650
        ;   Label: LAB_004aaea2
    JL 0x004aaebf                       ; 004aaea9
        ;   XREF to: 004aaebf (CONDITIONAL_JUMP)  ; LAB_004aaebf
    PUSH 0x584de5                       ; 004aaeab | = "motion state"
    LEA EAX,[EBX + 0x150]               ; 004aaeb0
    PUSH EAX                            ; 004aaeb6
    CALL FUN_0040cb00                   ; 004aaeb7
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 004aaebc
    CMP dword ptr [0x005b9650],0x6      ; 004aaebf | DAT_005b9650
        ;   Label: LAB_004aaebf
    JGE 0x004aaee3                      ; 004aaec6
        ;   XREF to: 004aaee3 (CONDITIONAL_JUMP)  ; LAB_004aaee3
    POP EBX                             ; 004aaec8
    RET                                 ; 004aaec9
    PUSH 0x584dbd                       ; 004aaeca | s_speed_00584dbc+1
        ;   Label: LAB_004aaeca
    LEA EAX,[EBX + 0xbc8c]              ; 004aaecf
    PUSH EAX                            ; 004aaed5
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004aaed6
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004aaedb
    JMP 0x004aae4d                      ; 004aaede
        ;   XREF to: 004aae4d (UNCONDITIONAL_JUMP)  ; LAB_004aae4d
    PUSH 0x584df2                       ; 004aaee3 | = "partStatus"
        ;   Label: LAB_004aaee3
    LEA EAX,[EBX + 0x150]               ; 004aaee8
    PUSH EAX                            ; 004aaeee
    CALL core_actor.cpp_archivePartStatus_FUN_0040cbf0 ; 004aaeef
        ;   XREF to: 0040cbf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archivePartStatus_FUN_0040cbf0()
    ADD ESP,0x8                         ; 004aaef4
    PUSH 0x584dfd                       ; 004aaef7 | = "spasmCount"
    LEA EAX,[EBX + 0xbd44]              ; 004aaefc
    PUSH EAX                            ; 004aaf02
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004aaf03
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004aaf08
    PUSH 0x584e08                       ; 004aaf0b | = "livesLeft"
    LEA EAX,[EBX + 0xbd40]              ; 004aaf10
    PUSH EAX                            ; 004aaf16
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004aaf17
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004aaf1c
    PUSH 0x584e12                       ; 004aaf1f | = "ariseTimer"
    ADD EBX,0xbd30                      ; 004aaf24
    PUSH EBX                            ; 004aaf2a
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004aaf2b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004aaf30
    POP EBX                             ; 004aaf33
    RET                                 ; 004aaf34

