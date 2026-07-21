; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batman_cpp_CBatman_archive_FUN_00414510(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_00578ca6+1
;   string s_modelName_00578cad
;   string s_motion_state_00578cb7
;   string s_fallEvent_00578cc4
;   string s_mistState_00578cce
;   string s_vanishTimer_00578cd8
;   string s_newPos_00578ce4
;   undefined4 DAT_005acfbc
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;   FUN_0040cb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414510
        ;   Label: core_batman.cpp_CBatman_archive_FUN_00414510
    PUSH ESI                            ; 00414511
    MOV EBX,dword ptr [ESP + 0xc]       ; 00414512
    PUSH EBX                            ; 00414516
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00414517
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 0041451c
    PUSH 0x578ca7                       ; 0041451f | s_speed_00578ca6+1
    LEA ESI,[EBX + 0xbc8c]              ; 00414524
    PUSH ESI                            ; 0041452a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0041452b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00414530
    PUSH 0x578cad                       ; 00414533 | = "modelName"
    LEA ESI,[EBX + 0x150]               ; 00414538
    PUSH ESI                            ; 0041453e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0041453f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 00414544
    PUSH 0x578cb7                       ; 00414547 | = "motion state"
    PUSH ESI                            ; 0041454c
    CALL FUN_0040cb00                   ; 0041454d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    MOV EDX,dword ptr [0x005acfbc]      ; 00414552 | DAT_005acfbc
    ADD ESP,0x8                         ; 00414558
    CMP EDX,0x2                         ; 0041455b
    JGE 0x0041456c                      ; 0041455e
        ;   XREF to: 0041456c (CONDITIONAL_JUMP)  ; LAB_0041456c
    CMP dword ptr [0x005acfbc],0x3      ; 00414560 | DAT_005acfbc
    JGE 0x0041458c                      ; 00414567
        ;   XREF to: 0041458c (CONDITIONAL_JUMP)  ; LAB_0041458c
    POP ESI                             ; 00414569
    POP EBX                             ; 0041456a
    RET                                 ; 0041456b
    PUSH 0x578cc4                       ; 0041456c | = "fallEvent"
        ;   Label: LAB_0041456c
    LEA ESI,[EBX + 0xbd24]              ; 00414571
    PUSH ESI                            ; 00414577
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00414578
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0041457d
    CMP dword ptr [0x005acfbc],0x3      ; 00414580 | DAT_005acfbc
    JGE 0x0041458c                      ; 00414587
        ;   XREF to: 0041458c (CONDITIONAL_JUMP)  ; LAB_0041458c
    POP ESI                             ; 00414589
    POP EBX                             ; 0041458a
    RET                                 ; 0041458b
    PUSH 0x578cce                       ; 0041458c | = "mistState"
        ;   Label: LAB_0041458c
    LEA ESI,[EBX + 0xbdc0]              ; 00414591
    PUSH ESI                            ; 00414597
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00414598
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0041459d
    PUSH 0x578cd8                       ; 004145a0 | = "vanishTimer"
    LEA ESI,[EBX + 0xbdc4]              ; 004145a5
    PUSH ESI                            ; 004145ab
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004145ac
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004145b1
    PUSH 0x578ce4                       ; 004145b4 | = "newPos"
    ADD EBX,0xbdc8                      ; 004145b9
    PUSH EBX                            ; 004145bf
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 004145c0
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 004145c5
    POP ESI                             ; 004145c8
    POP EBX                             ; 004145c9
    RET                                 ; 004145ca

