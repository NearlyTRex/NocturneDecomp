; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00409f70(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00577586
;   TerminatedCString s_CDemonActor_getActorType_00577598
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577586                    ; 00409f70 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_getActorType_FUN_00409f70
    MOV ECX,0x22c                       ; 00409f75
    PUSH 0x577598                       ; 00409f7a | = "CDemonActor::getActorType called.  Sh..."
    MOV dword ptr [0x01cc4800],EDX      ; 00409f7f | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00409f85 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00409f8b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00409f90
    XOR EAX,EAX                         ; 00409f93
    RET                                 ; 00409f95

