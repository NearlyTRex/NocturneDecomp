; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_marquee.cpp_FUN_0050bd60()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bd60
        ;   Label: core_marquee.cpp_FUN_0050bd60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050bd61
    PUSH EBX                            ; 0050bd65
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0050bd66 | void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)

