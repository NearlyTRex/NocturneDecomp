; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_setActorXPos_FUN_00435500(CDemonActor *actor,float x)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
; float            Stack[0x8]:4   x
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00435500
        ;   Label: core_charactr.cpp_setActorXPos_FUN_00435500
    MOV EAX,dword ptr [ESP + 0x8]       ; 00435504
    MOV dword ptr [EDX + 0x20],EAX      ; 00435508
    RET                                 ; 0043550b

