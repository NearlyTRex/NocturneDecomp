; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0(CDemonActor *this_ptr,CDemonActor *user)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   user
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613a07
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x5a2                          ; 0040a0d0
        ;   Label: core_actor.cpp_CDemonActor_stopUsing_FUN_0040a0d0
    PUSH 0x613a07                       ; 0040a0d5 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040a0da
    PUSH EDX                            ; 0040a0de
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040a0df
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 0040a0e4
    RET                                 ; 0040a0e7

