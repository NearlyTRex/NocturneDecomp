; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00428650(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005b7de8
;   TerminatedCString s_modelName_005b7dee
;   TerminatedCString s_motion_state_005b7df8
;   TerminatedCString s_partStatus_005b7e05
;   TerminatedCString s_alwaysChaseFast_005b7e10
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_FUN_0040ba30
;   core_actor.cpp_FUN_0040bab0
;   core_actor.cpp_FUN_0040bba0
;   core_enemy.cpp_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428650
        ;   Label: core_carved.cpp_FUN_00428650
    PUSH ESI                            ; 00428651
    MOV ESI,dword ptr [ESP + 0xc]       ; 00428652
    PUSH ESI                            ; 00428656
    CALL core_enemy.cpp_FUN_00489120    ; 00428657
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489120()
    ADD ESP,0x4                         ; 0042865c
    PUSH 0x5b7de8                       ; 0042865f | = "speed"
    LEA EBX,[ESI + 0xcdcc]              ; 00428664
    PUSH EBX                            ; 0042866a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042866b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00428670
    PUSH 0x5b7dee                       ; 00428673 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 00428678
    PUSH EBX                            ; 0042867e
    CALL core_actor.cpp_FUN_0040ba30    ; 0042867f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00428684
    PUSH 0x5b7df8                       ; 00428687 | = "motion state"
    PUSH EBX                            ; 0042868c
    CALL core_actor.cpp_FUN_0040bab0    ; 0042868d
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00428692
    PUSH 0x5b7e05                       ; 00428695 | = "partStatus"
    PUSH EBX                            ; 0042869a
    CALL core_actor.cpp_FUN_0040bba0    ; 0042869b
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bba0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004286a0
    PUSH 0x5b7e10                       ; 004286a3 | = "alwaysChaseFast"
    ADD ESI,0xd070                      ; 004286a8
    PUSH ESI                            ; 004286ae
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004286af
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004286b4
    POP ESI                             ; 004286b7
    POP EBX                             ; 004286b8
    RET                                 ; 004286b9

