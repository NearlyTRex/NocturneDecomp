; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_setActorXPos_FUN_0042bf20(CDemonActor *actor,float x)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
; float            Stack[0x8]:4   x
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042bf20
        ;   Label: core_charactr.cpp_setActorXPos_FUN_0042bf20
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042bf24
    MOV dword ptr [EDX + 0x20],EAX      ; 0042bf28
    RET                                 ; 0042bf2b

