; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_larva_cpp_FUN_004fe450(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005e6c63
;   TerminatedCString s_modelName_005e6c69
;   TerminatedCString s_guardDistance_005e6c73
;   TerminatedCString s_motion_state_005e6c81
;   int g_CLarvaClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe450
        ;   Label: core_larva.cpp_FUN_004fe450
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fe451
    PUSH EBX                            ; 004fe455
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 004fe456
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004fe45b
    PUSH 0x5e6c63                       ; 004fe45e | = "speed"
    LEA EAX,[EBX + 0xc1d0]              ; 004fe463
    PUSH EAX                            ; 004fe469
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004fe46a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004fe46f
    PUSH 0x5e6c69                       ; 004fe472 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004fe477
    PUSH EAX                            ; 004fe47d
    CALL core_actor.cpp_FUN_0040b7f0    ; 004fe47e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061f2bc]      ; 004fe483 | g_CLarvaClassVersion
    ADD ESP,0x8                         ; 004fe489
    CMP EDX,0x2                         ; 004fe48c
    JL 0x004fe4a7                       ; 004fe48f
        ;   XREF to: 004fe4a7 (CONDITIONAL_JUMP)  ; LAB_004fe4a7
    PUSH 0x5e6c81                       ; 004fe491 | = "motion state"
        ;   Label: LAB_004fe491
    ADD EBX,0x158                       ; 004fe496
    PUSH EBX                            ; 004fe49c
    CALL core_actor.cpp_FUN_0040b870    ; 004fe49d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004fe4a2
    POP EBX                             ; 004fe4a5
    RET                                 ; 004fe4a6
    PUSH 0x5e6c73                       ; 004fe4a7 | = "guardDistance"
        ;   Label: LAB_004fe4a7
    LEA EAX,[EBX + 0xc1e0]              ; 004fe4ac
    PUSH EAX                            ; 004fe4b2
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004fe4b3
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004fe4b8
    JMP 0x004fe491                      ; 004fe4bb
        ;   XREF to: 004fe491 (UNCONDITIONAL_JUMP)  ; LAB_004fe491

