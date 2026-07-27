; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_00409f70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00577586
;   TerminatedCString s_CDemonActor_getActorType_00577598
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577586                    ; 00409f70 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_FUN_00409f70
    MOV ECX,0x22c                       ; 00409f75
    PUSH 0x577598                       ; 00409f7a | = "CDemonActor::getActorType called.  Sh..."
    MOV dword ptr [0x01cc4800],EDX      ; 00409f7f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00409f85 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00409f8b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00409f90
    XOR EAX,EAX                         ; 00409f93
    RET                                 ; 00409f95

