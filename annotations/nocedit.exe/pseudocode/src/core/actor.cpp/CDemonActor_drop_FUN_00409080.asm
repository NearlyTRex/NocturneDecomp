; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_drop_FUN_00409080 (CDemonActor *this_ptr,CDemonActor *carrier,CVector3f *drop_position)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
; CVector3f *      Stack[0xc]:4   drop_position
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_0061381c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x360                          ; 00409080
        ;   Label: core_actor.cpp_CDemonActor_drop_FUN_00409080
    PUSH 0x61381c                       ; 00409085 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040908a
    PUSH EDX                            ; 0040908e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040908f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409094
    RET                                 ; 00409097

