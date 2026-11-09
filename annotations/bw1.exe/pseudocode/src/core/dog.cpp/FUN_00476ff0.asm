; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_FUN_00476ff0(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005da717+1
;   TerminatedCString s_modelName_005da71e
;   TerminatedCString s_guardDistance_005da728
;   TerminatedCString s_motion_state_005da736
;   int g_CZombieDogClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476ff0
        ;   Label: core_dog.cpp_FUN_00476ff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00476ff1
    PUSH EBX                            ; 00476ff5
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00476ff6
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00476ffb
    PUSH 0x5da718                       ; 00476ffe | s_speed_005da717+1
    LEA EAX,[EBX + 0xc1d0]              ; 00477003
    PUSH EAX                            ; 00477009
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0047700a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0047700f
    PUSH 0x5da71e                       ; 00477012 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00477017
    PUSH EAX                            ; 0047701d
    CALL core_actor.cpp_FUN_0040b7f0    ; 0047701e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x006124dc]      ; 00477023 | g_CZombieDogClassVersion
    ADD ESP,0x8                         ; 00477029
    CMP EDX,0x2                         ; 0047702c
    JL 0x00477047                       ; 0047702f
        ;   XREF to: 00477047 (CONDITIONAL_JUMP)  ; LAB_00477047
    PUSH 0x5da736                       ; 00477031 | = "motion state"
        ;   Label: LAB_00477031
    ADD EBX,0x158                       ; 00477036
    PUSH EBX                            ; 0047703c
    CALL core_actor.cpp_FUN_0040b870    ; 0047703d
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00477042
    POP EBX                             ; 00477045
    RET                                 ; 00477046
    PUSH 0x5da728                       ; 00477047 | = "guardDistance"
        ;   Label: LAB_00477047
    LEA EAX,[EBX + 0xc1e0]              ; 0047704c
    PUSH EAX                            ; 00477052
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00477053
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00477058
    JMP 0x00477031                      ; 0047705b
        ;   XREF to: 00477031 (UNCONDITIONAL_JUMP)  ; LAB_00477031

