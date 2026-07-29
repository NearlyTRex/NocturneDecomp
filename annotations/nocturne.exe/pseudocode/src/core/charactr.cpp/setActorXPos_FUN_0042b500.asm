; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_setActorXPos_FUN_0042b500(CDemonActor *actor,float x)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
; float            Stack[0x8]:4   x
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b500
        ;   Label: core_charactr.cpp_setActorXPos_FUN_0042b500
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b504
    MOV dword ptr [EDX + 0x20],EAX      ; 0042b508
    RET                                 ; 0042b50b

