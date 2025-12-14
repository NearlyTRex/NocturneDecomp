; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPathMap * core_actor.cpp_CDemonActor_getPathMap_FUN_004090a0(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_0061382e
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x36c                          ; 004090a0
        ;   Label: core_actor.cpp_CDemonActor_getPathMap_FUN_004090a0
    PUSH 0x61382e                       ; 004090a5 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 004090aa
    PUSH EDX                            ; 004090ae
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 004090af
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 004090b4
    XOR EAX,EAX                         ; 004090b7
    RET                                 ; 004090b9

