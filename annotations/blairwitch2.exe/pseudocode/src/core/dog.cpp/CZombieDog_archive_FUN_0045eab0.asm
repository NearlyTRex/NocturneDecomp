; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_archive_FUN_0045eab0(CZombieDog *this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d091b+1
;   TerminatedCString s_modelName_005d0922
;   TerminatedCString s_guardDistance_005d092c
;   TerminatedCString s_motion_state_005d093a
;   int g_CZombieDogClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045eab0
        ;   Label: core_dog.cpp_CZombieDog_archive_FUN_0045eab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045eab1
    PUSH EBX                            ; 0045eab5
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 0045eab6
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0045eabb
    PUSH 0x5d091c                       ; 0045eabe | s_speed_005d091b+1
    LEA EAX,[EBX + 0x10a60]             ; 0045eac3
    PUSH EAX                            ; 0045eac9
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0045eaca
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0045eacf
    PUSH 0x5d0922                       ; 0045ead2 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 0045ead7
    PUSH EAX                            ; 0045eadd
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 0045eade
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    MOV EDX,dword ptr [0x0060b1fc]      ; 0045eae3 | g_CZombieDogClassVersion
    ADD ESP,0x8                         ; 0045eae9
    CMP EDX,0x2                         ; 0045eaec
    JL 0x0045eb07                       ; 0045eaef
        ;   XREF to: 0045eb07 (CONDITIONAL_JUMP)  ; LAB_0045eb07
    PUSH 0x5d093a                       ; 0045eaf1 | = "motion state"
        ;   Label: LAB_0045eaf1
    ADD EBX,0x2b4                       ; 0045eaf6
    PUSH EBX                            ; 0045eafc
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0045eafd
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 0045eb02
    POP EBX                             ; 0045eb05
    RET                                 ; 0045eb06
    PUSH 0x5d092c                       ; 0045eb07 | = "guardDistance"
        ;   Label: LAB_0045eb07
    LEA EAX,[EBX + 0x10a70]             ; 0045eb0c
    PUSH EAX                            ; 0045eb12
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0045eb13
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0045eb18
    JMP 0x0045eaf1                      ; 0045eb1b
        ;   XREF to: 0045eaf1 (UNCONDITIONAL_JUMP)  ; LAB_0045eaf1

