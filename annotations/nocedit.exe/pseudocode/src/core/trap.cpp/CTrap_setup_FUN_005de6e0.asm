; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trap_cpp_CTrap_setup_FUN_005de6e0(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de6e0
        ;   Label: core_trap.cpp_CTrap_setup_FUN_005de6e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005de6e1
    PUSH EBX                            ; 005de6e5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005de6e6
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

