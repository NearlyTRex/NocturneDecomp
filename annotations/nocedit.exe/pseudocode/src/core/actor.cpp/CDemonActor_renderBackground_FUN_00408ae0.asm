; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_renderBackground_FUN_00408ae0(CDemonActor * this_ptr, int layer_flag)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006135b7
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x201                          ; 00408ae0
        ;   Label: core_actor.cpp_CDemonActor_renderBackground_FUN_00408ae0
    PUSH 0x6135b7                       ; 00408ae5 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 00408aea
    PUSH EDX                            ; 00408aee
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408aef
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00408af4
    RET                                 ; 00408af7

