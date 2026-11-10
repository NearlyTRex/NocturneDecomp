; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00415250(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005cbcd6
;   TerminatedCString s_modelName_005cbcdc
;   TerminatedCString s_motion_state_005cbce6
;   TerminatedCString s_morphing_005cbcf3
;   TerminatedCString s_morphTimer_005cbcfc
;   TerminatedCString s_morphEvent_005cbd07
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415250
        ;   Label: core_biggs.cpp_CBiggs_archive_FUN_00415250
    PUSH ESI                            ; 00415251
    MOV EBX,dword ptr [ESP + 0xc]       ; 00415252
    PUSH EBX                            ; 00415256
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 00415257
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041525c
    PUSH 0x5cbcd6                       ; 0041525f | = "speed"
    LEA ESI,[EBX + 0x10a60]             ; 00415264
    PUSH ESI                            ; 0041526a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0041526b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00415270
    PUSH 0x5cbcdc                       ; 00415273 | = "modelName"
    LEA ESI,[EBX + 0x2b4]               ; 00415278
    PUSH ESI                            ; 0041527e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0041527f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 00415284
    PUSH 0x5cbce6                       ; 00415287 | = "motion state"
    PUSH ESI                            ; 0041528c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0041528d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 00415292
    PUSH 0x5cbcf3                       ; 00415295 | = "morphing"
    LEA ESI,[EBX + 0x10c74]             ; 0041529a
    PUSH ESI                            ; 004152a0
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004152a1
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004152a6
    PUSH 0x5cbcfc                       ; 004152a9 | = "morphTimer"
    LEA ESI,[EBX + 0x10c78]             ; 004152ae
    PUSH ESI                            ; 004152b4
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004152b5
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004152ba
    PUSH 0x5cbd07                       ; 004152bd | = "morphEvent"
    ADD EBX,0x118a8                     ; 004152c2
    PUSH EBX                            ; 004152c8
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004152c9
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004152ce
    POP ESI                             ; 004152d1
    POP EBX                             ; 004152d2
    RET                                 ; 004152d3

