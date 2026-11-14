; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_actor_cpp_CDemonActor_getActorType_FUN_00408a20(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005ca433
;   TerminatedCString s_CDemonActor_getActorType_005ca445
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca433                    ; 00408a20 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_getActorType_FUN_00408a20
    MOV ECX,0x231                       ; 00408a25
    PUSH 0x5ca445                       ; 00408a2a | = "CDemonActor::getActorType called.  Sh..."
    MOV dword ptr [0x01d046a0],EDX      ; 00408a2f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00408a35 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00408a3b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00408a40
    XOR EAX,EAX                         ; 00408a43
    RET                                 ; 00408a45

