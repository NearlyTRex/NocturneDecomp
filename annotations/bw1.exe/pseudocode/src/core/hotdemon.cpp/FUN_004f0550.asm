; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_FUN_004f0550(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005e51ca
;   TerminatedCString s_modelName_005e51d0
;   TerminatedCString s_motion_state_005e51da
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0550
        ;   Label: core_hotdemon.cpp_FUN_004f0550
    PUSH ESI                            ; 004f0551
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f0552
    PUSH ESI                            ; 004f0556
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 004f0557
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004f055c
    PUSH 0x5e51ca                       ; 004f055f | = "speed"
    LEA EBX,[ESI + 0xc1d0]              ; 004f0564
    PUSH EBX                            ; 004f056a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004f056b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004f0570
    PUSH 0x5e51d0                       ; 004f0573 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 004f0578
    PUSH EBX                            ; 004f057e
    CALL core_actor.cpp_FUN_0040b7f0    ; 004f057f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f0584
    PUSH 0x5e51da                       ; 004f0587 | = "motion state"
    PUSH EBX                            ; 004f058c
    CALL core_actor.cpp_FUN_0040b870    ; 004f058d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004f0592
    POP ESI                             ; 004f0595
    POP EBX                             ; 004f0596
    LEA EAX,[EAX]                       ; 004f0597
    LEA EDX,[EDX]                       ; 004f059d
    RET                                 ; 004f05a0

