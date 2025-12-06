; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_process_FUN_00408a80(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613581
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x1dc                          ; 00408a80
        ;   Label: core_actor.cpp_CDemonActor_process_FUN_00408a80
    PUSH 0x613581                       ; 00408a85 | = "..\\core\\actor.cpp" | s_core_actor_cpp_00613581 = ..\core\actor.cpp
    MOV EDX,dword ptr [ESP + 0xc]       ; 00408a8a
    PUSH EDX                            ; 00408a8e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408a8f | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00408a94
    RET                                 ; 00408a97

