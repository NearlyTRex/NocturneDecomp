; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CDemonActor_isActiveTarget_FUN_00409f20(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613916
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x530                          ; 00409f20
        ;   Label: core_actor.cpp_CDemonActor_isActiveTarget_FUN_00409f20
    PUSH 0x613916                       ; 00409f25 | = "..\\core\\actor.cpp" | s_core_actor_cpp_00613916 = ..\core\actor.cpp
    MOV EDX,dword ptr [ESP + 0xc]       ; 00409f2a
    PUSH EDX                            ; 00409f2e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409f2f | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00409f34
    XOR EAX,EAX                         ; 00409f37
    RET                                 ; 00409f39

