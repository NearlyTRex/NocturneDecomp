; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stairs.cpp_FUN_005b9be0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b9be0
        ;   Label: core_stairs.cpp_FUN_005b9be0
    PUSH EDX                            ; 005b9be4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005b9be5 | void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)

