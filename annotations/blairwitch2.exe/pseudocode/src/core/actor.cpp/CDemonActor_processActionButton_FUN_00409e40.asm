; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_processActionButton_FUN_00409e40(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005ca608
;   TerminatedCString s_CDemonActor_processActio_005ca61a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca608                    ; 00409e40 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_processActionButton_FUN_00409e40
    MOV ECX,0x5b2                       ; 00409e45
    PUSH 0x5ca61a                       ; 00409e4a | = "CDemonActor::processActionButton - sh..."
    MOV dword ptr [0x01d046a0],EDX      ; 00409e4f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00409e55 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00409e5b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    MOV EAX,0x1                         ; 00409e60
    ADD ESP,0x4                         ; 00409e65
    RET                                 ; 00409e68

