; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_onDropped_FUN_00409040(CDemonActor *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006137f8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x348                          ; 00409040
        ;   Label: core_actor.cpp_CDemonActor_onDropped_FUN_00409040
    PUSH 0x6137f8                       ; 00409045 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040904a
    PUSH EDX                            ; 0040904e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040904f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409054
    RET                                 ; 00409057

