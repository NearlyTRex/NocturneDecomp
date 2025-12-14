; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_pickup_FUN_00409020(CDemonActor * this_ptr, CDemonActor * carrier)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006137e6
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x33d                          ; 00409020
        ;   Label: core_actor.cpp_CDemonActor_pickup_FUN_00409020
    PUSH 0x6137e6                       ; 00409025 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040902a
    PUSH EDX                            ; 0040902e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040902f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409034
    RET                                 ; 00409037

