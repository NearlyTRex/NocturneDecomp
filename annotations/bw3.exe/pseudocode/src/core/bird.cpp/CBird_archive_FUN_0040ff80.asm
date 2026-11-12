; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_archive_FUN_0040ff80(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005b6410
;   TerminatedCString s_motion_state_005b641a
;   TerminatedCString s_hitPoints_005b6427
;   TerminatedCString s_shootMe_005b6431
;   TerminatedCString s_poolMe_005b6439
;   TerminatedCString s_speed_005b6440
;   int g_CBirdClassVersion = 0x1
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ff80
        ;   Label: core_bird.cpp_CBird_archive_FUN_0040ff80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ff81
    CMP dword ptr [0x005f0c18],0x2      ; 0040ff85 | g_CBirdClassVersion
    JL 0x0040ff99                       ; 0040ff8c
        ;   XREF to: 0040ff99 (CONDITIONAL_JUMP)  ; LAB_0040ff99
    PUSH EBX                            ; 0040ff8e
    CALL core_charactr.cpp_CCharacter_archive_FUN_0042b450 ; 0040ff8f
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_0042b450(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0040ff94
    POP EBX                             ; 0040ff97
    RET                                 ; 0040ff98
    PUSH ESI                            ; 0040ff99
        ;   Label: LAB_0040ff99
    PUSH EBX                            ; 0040ff9a
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0040ff9b
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ffa0
    PUSH 0x5b6410                       ; 0040ffa3 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 0040ffa8
    PUSH ESI                            ; 0040ffae
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 0040ffaf
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ffb4
    PUSH 0x5b641a                       ; 0040ffb7 | = "motion state"
    PUSH ESI                            ; 0040ffbc
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 0040ffbd
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0040ffc2
    PUSH 0x5b6427                       ; 0040ffc5 | = "hitPoints"
    LEA ESI,[EBX + 0x2538]              ; 0040ffca
    PUSH ESI                            ; 0040ffd0
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040ffd1
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ffd6
    PUSH 0x5b6431                       ; 0040ffd9 | = "shootMe"
    LEA ESI,[EBX + 0x206a8]             ; 0040ffde
    PUSH ESI                            ; 0040ffe4
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0040ffe5
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040ffea
    PUSH 0x5b6439                       ; 0040ffed | = "poolMe"
    LEA ESI,[EBX + 0x206ac]             ; 0040fff2
    PUSH ESI                            ; 0040fff8
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0040fff9
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040fffe
    PUSH 0x5b6440                       ; 00410001 | = "speed"
    LEA ESI,[EBX + 0x206b0]             ; 00410006
    PUSH ESI                            ; 0041000c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0041000d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00410012
    POP ESI                             ; 00410015
    PUSH EBX                            ; 00410016
    CALL core_charactr.cpp_CCharacter_archive_FUN_0042b450 ; 00410017
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_0042b450(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041001c
    POP EBX                             ; 0041001f
    RET                                 ; 00410020

