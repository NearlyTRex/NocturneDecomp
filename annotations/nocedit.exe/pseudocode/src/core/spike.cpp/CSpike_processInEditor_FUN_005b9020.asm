; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_spike_cpp_CSpike_processInEditor_FUN_005b9020(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b9020
        ;   Label: core_spike.cpp_CSpike_processInEditor_FUN_005b9020
    PUSH EDX                            ; 005b9024
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005b9025
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b902a
    RET                                 ; 005b902d

