; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_isProcessDisabled_FUN_005c6950(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c6950
        ;   Label: core_stranger.cpp_isProcessDisabled_FUN_005c6950
    MOV EAX,dword ptr [EAX + 0x104]     ; 005c6954
    RET                                 ; 005c695a

