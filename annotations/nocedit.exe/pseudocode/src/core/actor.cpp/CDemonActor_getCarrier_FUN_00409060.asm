; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * __cdecl core_actor_cpp_CDemonActor_getCarrier_FUN_00409060(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_0061380a
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x353                          ; 00409060
        ;   Label: core_actor.cpp_CDemonActor_getCarrier_FUN_00409060
    PUSH 0x61380a                       ; 00409065 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040906a
    PUSH EDX                            ; 0040906e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040906f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409074
    XOR EAX,EAX                         ; 00409077
    RET                                 ; 00409079

