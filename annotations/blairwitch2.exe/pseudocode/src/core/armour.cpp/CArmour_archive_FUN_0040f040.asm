; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_armour_cpp_CArmour_archive_FUN_0040f040(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005cb379
;   TerminatedCString s_modelName_005cb37f
;   TerminatedCString s_motion_state_005cb389
;   TerminatedCString s_fallApartEvent_005cb396
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f040
        ;   Label: core_armour.cpp_CArmour_archive_FUN_0040f040
    PUSH ESI                            ; 0040f041
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040f042
    PUSH ESI                            ; 0040f046
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 0040f047
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0040f04c
    PUSH 0x5cb379                       ; 0040f04f | = "speed"
    LEA EBX,[ESI + 0x10a60]             ; 0040f054
    PUSH EBX                            ; 0040f05a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0040f05b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0040f060
    PUSH 0x5cb37f                       ; 0040f063 | = "modelName"
    LEA EBX,[ESI + 0x2b4]               ; 0040f068
    PUSH EBX                            ; 0040f06e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0040f06f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 0040f074
    PUSH 0x5cb389                       ; 0040f077 | = "motion state"
    PUSH EBX                            ; 0040f07c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0040f07d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 0040f082
    PUSH 0x5cb396                       ; 0040f085 | = "fallApartEvent"
    ADD ESI,0x10af8                     ; 0040f08a
    PUSH ESI                            ; 0040f090
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0040f091
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040f096
    POP ESI                             ; 0040f099
    POP EBX                             ; 0040f09a
    RET                                 ; 0040f09b

