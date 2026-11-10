; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_archive_FUN_004d7a50(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005dab18+1
;   TerminatedCString s_modelName_005dab1f
;   TerminatedCString s_motion_state_005dab29
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7a50
        ;   Label: core_imp.cpp_CImp_archive_FUN_004d7a50
    PUSH ESI                            ; 004d7a51
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d7a52
    PUSH ESI                            ; 004d7a56
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 004d7a57
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d7a5c
    PUSH 0x5dab19                       ; 004d7a5f | s_speed_005dab18+1
    LEA EBX,[ESI + 0x10a60]             ; 004d7a64
    PUSH EBX                            ; 004d7a6a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004d7a6b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004d7a70
    PUSH 0x5dab1f                       ; 004d7a73 | = "modelName"
    LEA EBX,[ESI + 0x2b4]               ; 004d7a78
    PUSH EBX                            ; 004d7a7e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 004d7a7f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 004d7a84
    PUSH 0x5dab29                       ; 004d7a87 | = "motion state"
    PUSH EBX                            ; 004d7a8c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004d7a8d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 004d7a92
    POP ESI                             ; 004d7a95
    POP EBX                             ; 004d7a96
    RET                                 ; 004d7a97

