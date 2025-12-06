; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_0050b160()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050b160
        ;   Label: core_manpuz.cpp_FUN_0050b160
    PUSH EDX                            ; 0050b164
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0050b165 | void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)

