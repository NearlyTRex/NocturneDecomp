; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613898
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x4a5                          ; 00409880
        ;   Label: core_actor.cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880
    PUSH 0x613898                       ; 00409885 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040988a
    PUSH EDX                            ; 0040988e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040988f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409894
    XOR EAX,EAX                         ; 00409897
    RET                                 ; 00409899

