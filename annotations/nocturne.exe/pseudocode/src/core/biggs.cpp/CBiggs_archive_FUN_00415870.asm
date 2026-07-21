; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_biggs_cpp_CBiggs_archive_FUN_00415870(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_00578e2c+2
;   string s_modelName_00578e34
;   string s_motion_state_00578e3e
;   string s_morphing_00578e4b
;   string s_morphTimer_00578e54
;   string s_morphEvent_00578e5f
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;   FUN_0040cb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415870
        ;   Label: core_biggs.cpp_CBiggs_archive_FUN_00415870
    PUSH ESI                            ; 00415871
    MOV EBX,dword ptr [ESP + 0xc]       ; 00415872
    PUSH EBX                            ; 00415876
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00415877
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 0041587c
    PUSH 0x578e2e                       ; 0041587f | s_speed_00578e2c+2
    LEA ESI,[EBX + 0xbc8c]              ; 00415884
    PUSH ESI                            ; 0041588a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0041588b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00415890
    PUSH 0x578e34                       ; 00415893 | = "modelName"
    LEA ESI,[EBX + 0x150]               ; 00415898
    PUSH ESI                            ; 0041589e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0041589f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 004158a4
    PUSH 0x578e3e                       ; 004158a7 | = "motion state"
    PUSH ESI                            ; 004158ac
    CALL FUN_0040cb00                   ; 004158ad
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 004158b2
    PUSH 0x578e4b                       ; 004158b5 | = "morphing"
    LEA ESI,[EBX + 0xbea0]              ; 004158ba
    PUSH ESI                            ; 004158c0
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004158c1
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004158c6
    PUSH 0x578e54                       ; 004158c9 | = "morphTimer"
    LEA ESI,[EBX + 0xbea4]              ; 004158ce
    PUSH ESI                            ; 004158d4
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004158d5
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004158da
    PUSH 0x578e5f                       ; 004158dd | = "morphEvent"
    ADD EBX,0xcad4                      ; 004158e2
    PUSH EBX                            ; 004158e8
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004158e9
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004158ee
    POP ESI                             ; 004158f1
    POP EBX                             ; 004158f2
    RET                                 ; 004158f3

