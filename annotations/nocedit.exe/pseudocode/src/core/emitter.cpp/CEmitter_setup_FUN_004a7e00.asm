; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004a7e00(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7e00
        ;   Label: core_emitter.cpp_CEmitter_setup_FUN_004a7e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7e01
    PUSH EBX                            ; 004a7e05
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004a7e06
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

