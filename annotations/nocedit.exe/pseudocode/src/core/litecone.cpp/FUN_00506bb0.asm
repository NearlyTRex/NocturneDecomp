; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_litecone.cpp_FUN_00506bb0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00506bb0
        ;   Label: core_litecone.cpp_FUN_00506bb0
    PUSH EDX                            ; 00506bb4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00506bb5 | void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)

