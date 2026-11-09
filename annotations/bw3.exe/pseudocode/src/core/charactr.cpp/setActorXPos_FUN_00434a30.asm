; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_setActorXPos_FUN_00434a30(CDemonActor *actor,float x)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
; float            Stack[0x8]:4   x
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434a30
        ;   Label: core_charactr.cpp_setActorXPos_FUN_00434a30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00434a34
    MOV dword ptr [EDX + 0x20],EAX      ; 00434a38
    RET                                 ; 00434a3b

