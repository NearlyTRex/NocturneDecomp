; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006137b0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x2a9                          ; 00408d90
        ;   Label: core_actor.cpp_CDemonActor_getGroundType_FUN_00408d90
    PUSH 0x6137b0                       ; 00408d95 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 00408d9a
    PUSH EDX                            ; 00408d9e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408d9f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00408da4
    XOR EAX,EAX                         ; 00408da7
    RET                                 ; 00408da9

