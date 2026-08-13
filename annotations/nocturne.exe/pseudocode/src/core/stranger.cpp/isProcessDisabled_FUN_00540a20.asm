; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_isProcessDisabled_FUN_00540a20(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540a20
        ;   Label: core_stranger.cpp_isProcessDisabled_FUN_00540a20
    MOV EAX,dword ptr [EAX + 0x104]     ; 00540a24
    RET                                 ; 00540a2a

