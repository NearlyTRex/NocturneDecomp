; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_CDemonActor_canPickup_FUN_00409000(CDemonActor *this_ptr,CDemonActor *picker)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006137d4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x330                          ; 00409000
        ;   Label: core_actor.cpp_CDemonActor_canPickup_FUN_00409000
    PUSH 0x6137d4                       ; 00409005 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040900a
    PUSH EDX                            ; 0040900e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040900f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409014
    XOR EAX,EAX                         ; 00409017
    RET                                 ; 00409019

