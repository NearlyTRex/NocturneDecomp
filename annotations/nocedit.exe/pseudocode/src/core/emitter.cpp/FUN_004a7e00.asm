; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_emitter_cpp_FUN_004a7e00(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7e00
        ;   Label: core_emitter.cpp_FUN_004a7e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7e01
    PUSH EBX                            ; 004a7e05
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004a7e06
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

