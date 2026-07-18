; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_getScaleY_FUN_005c6960(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c6960
        ;   Label: core_stranger.cpp_getScaleY_FUN_005c6960
    MOV EAX,dword ptr [EAX + 0x10c]     ; 005c6964
    RET                                 ; 005c696a

