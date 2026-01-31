; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ladder_cpp_CLadder_setup_FUN_005025f0(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005025f0
        ;   Label: core_ladder.cpp_CLadder_setup_FUN_005025f0
    PUSH EDX                            ; 005025f4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005025f5
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

