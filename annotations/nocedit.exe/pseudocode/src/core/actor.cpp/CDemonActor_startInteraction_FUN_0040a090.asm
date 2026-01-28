; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090(CDemonActor *this_ptr,CDemonActor *user)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   user
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006139e3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x598                          ; 0040a090
        ;   Label: core_actor.cpp_CDemonActor_startInteraction_FUN_0040a090
    PUSH 0x6139e3                       ; 0040a095 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040a09a
    PUSH EDX                            ; 0040a09e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040a09f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 0040a0a4
    XOR EAX,EAX                         ; 0040a0a7
    RET                                 ; 0040a0a9

