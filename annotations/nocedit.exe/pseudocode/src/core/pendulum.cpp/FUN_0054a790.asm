; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_pendulum.cpp_FUN_0054a790()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_pendulum.cpp_FUN_00549b90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054a790
        ;   Label: core_pendulum.cpp_FUN_0054a790
    PUSH EDX                            ; 0054a794
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 0054a795 | void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054a79a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0054a79d
    PUSH 0x0                            ; 0054a7a1
    PUSH ECX                            ; 0054a7a3
    CALL core_pendulum.cpp_FUN_00549b90 ; 0054a7a4 | undefined core_pendulum.cpp_FUN_00549b90()
        ;   XREF to: 00549b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a7a9
    RET                                 ; 0054a7ac

