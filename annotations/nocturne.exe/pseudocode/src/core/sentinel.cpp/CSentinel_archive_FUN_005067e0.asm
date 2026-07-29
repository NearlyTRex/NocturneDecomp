; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sentinel_cpp_CSentinel_archive_FUN_005067e0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005900a1
;   TerminatedCString s_guardDistance_005900ab
;   TerminatedCString s_motion_state_005900b9
;   int INT_005be310 = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005067e0
        ;   Label: core_sentinel.cpp_CSentinel_archive_FUN_005067e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005067e1
    PUSH EBX                            ; 005067e5
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 005067e6
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005067eb
    PUSH 0x5900a1                       ; 005067ee | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 005067f3
    PUSH EAX                            ; 005067f9
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 005067fa
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x005be310]      ; 005067ff | INT_005be310
    ADD ESP,0x8                         ; 00506805
    CMP EDX,0x2                         ; 00506808
    JL 0x00506823                       ; 0050680b
        ;   XREF to: 00506823 (CONDITIONAL_JUMP)  ; LAB_00506823
    PUSH 0x5900b9                       ; 0050680d | = "motion state"
        ;   Label: LAB_0050680d
    ADD EBX,0x150                       ; 00506812
    PUSH EBX                            ; 00506818
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 00506819
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0050681e
    POP EBX                             ; 00506821
    RET                                 ; 00506822
    PUSH 0x5900ab                       ; 00506823 | = "guardDistance"
        ;   Label: LAB_00506823
    LEA EAX,[EBX + 0xbc9c]              ; 00506828
    PUSH EAX                            ; 0050682e
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0050682f
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00506834
    JMP 0x0050680d                      ; 00506837
        ;   XREF to: 0050680d (UNCONDITIONAL_JUMP)  ; LAB_0050680d

