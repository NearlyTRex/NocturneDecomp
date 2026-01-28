; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_barrier_cpp_CBarrier_FUN_00414210(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414210
        ;   Label: core_barrier.cpp_CBarrier_FUN_00414210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414211
    PUSH EBX                            ; 00414215
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00414216
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

