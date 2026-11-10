; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004d4330(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005da668+1
;   TerminatedCString s_modelName_005da66f
;   TerminatedCString s_motion_state_005da679
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4330
        ;   Label: core_hotdemon.cpp_CHotDemon_archive_FUN_004d4330
    PUSH ESI                            ; 004d4331
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d4332
    PUSH ESI                            ; 004d4336
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 004d4337
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d433c
    PUSH 0x5da669                       ; 004d433f | s_speed_005da668+1
    LEA EBX,[ESI + 0x10a60]             ; 004d4344
    PUSH EBX                            ; 004d434a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004d434b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004d4350
    PUSH 0x5da66f                       ; 004d4353 | = "modelName"
    LEA EBX,[ESI + 0x2b4]               ; 004d4358
    PUSH EBX                            ; 004d435e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 004d435f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 004d4364
    PUSH 0x5da679                       ; 004d4367 | = "motion state"
    PUSH EBX                            ; 004d436c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004d436d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 004d4372
    POP ESI                             ; 004d4375
    POP EBX                             ; 004d4376
    LEA EAX,[EAX]                       ; 004d4377
    LEA EDX,[EDX]                       ; 004d437d
    RET                                 ; 004d4380

