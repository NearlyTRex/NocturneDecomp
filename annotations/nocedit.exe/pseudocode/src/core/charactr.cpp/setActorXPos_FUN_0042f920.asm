; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_setActorXPos_FUN_0042f920(CDemonActor *actor,float x)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
; float            Stack[0x8]:4   x
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042f920
        ;   Label: core_charactr.cpp_setActorXPos_FUN_0042f920
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042f924
    MOV dword ptr [EDX + 0x20],EAX      ; 0042f928
    RET                                 ; 0042f92b

