; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_spike.cpp_CSpike_FUN_005b9020(CSpike * this_ptr)
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
        ;   Label: core_spike.cpp_CSpike_FUN_005b9020
    PUSH EDX                            ; 005b9024
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005b9025 | void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b902a
    RET                                 ; 005b902d

