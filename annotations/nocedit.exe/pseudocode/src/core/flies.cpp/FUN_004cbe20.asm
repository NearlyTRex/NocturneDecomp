; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_flies_cpp_FUN_004cbe20(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbe20
        ;   Label: core_flies.cpp_FUN_004cbe20
    PUSH ESI                            ; 004cbe21
    MOV ESI,dword ptr [ESP + 0xc]       ; 004cbe22
    PUSH ESI                            ; 004cbe26
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004cbe27
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

