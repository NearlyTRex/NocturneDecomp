; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_FUN_00439830(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005ce15b
;   TerminatedCString s_modelName_005ce161
;   TerminatedCString s_guardDistance_005ce16b
;   TerminatedCString s_motion_state_005ce179
;   int g_CZombieCowClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439830
        ;   Label: core_cow.cpp_FUN_00439830
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439831
    PUSH EBX                            ; 00439835
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 00439836
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0043983b
    PUSH 0x5ce15b                       ; 0043983e | = "speed"
    LEA EAX,[EBX + 0x10a60]             ; 00439843
    PUSH EAX                            ; 00439849
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0043984a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0043984f
    PUSH 0x5ce161                       ; 00439852 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 00439857
    PUSH EAX                            ; 0043985d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0043985e
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    MOV EDX,dword ptr [0x00609f44]      ; 00439863 | g_CZombieCowClassVersion
    ADD ESP,0x8                         ; 00439869
    CMP EDX,0x2                         ; 0043986c
    JL 0x00439887                       ; 0043986f
        ;   XREF to: 00439887 (CONDITIONAL_JUMP)  ; LAB_00439887
    PUSH 0x5ce179                       ; 00439871 | = "motion state"
        ;   Label: LAB_00439871
    ADD EBX,0x2b4                       ; 00439876
    PUSH EBX                            ; 0043987c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0043987d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 00439882
    POP EBX                             ; 00439885
    RET                                 ; 00439886
    PUSH 0x5ce16b                       ; 00439887 | = "guardDistance"
        ;   Label: LAB_00439887
    LEA EAX,[EBX + 0x10a70]             ; 0043988c
    PUSH EAX                            ; 00439892
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00439893
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00439898
    JMP 0x00439871                      ; 0043989b
        ;   XREF to: 00439871 (UNCONDITIONAL_JUMP)  ; LAB_00439871

