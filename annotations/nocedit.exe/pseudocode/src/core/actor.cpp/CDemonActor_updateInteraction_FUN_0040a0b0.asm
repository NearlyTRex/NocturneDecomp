; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0(CDemonActor *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; COrientation *   Stack[0x8]:4   user_orientation
; SInteractionState * Stack[0xc]:4   interaction_state
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006139f5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x59d                          ; 0040a0b0
        ;   Label: core_actor.cpp_CDemonActor_updateInteraction_FUN_0040a0b0
    PUSH 0x6139f5                       ; 0040a0b5 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040a0ba
    PUSH EDX                            ; 0040a0be
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040a0bf
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 0040a0c4
    XOR EAX,EAX                         ; 0040a0c7
    RET                                 ; 0040a0c9

