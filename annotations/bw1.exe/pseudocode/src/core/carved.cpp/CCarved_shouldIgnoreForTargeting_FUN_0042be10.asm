; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_carved_cpp_CCarved_shouldIgnoreForTargeting_FUN_0042be10(CCarved *this_ptr)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042be10
        ;   Label: core_carved.cpp_CCarved_shouldIgnoreForTargeting_FUN_0042be10
    PUSH EDX                            ; 0042be14
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0 ; 0042be15
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042be1a
    RET                                 ; 0042be1d

