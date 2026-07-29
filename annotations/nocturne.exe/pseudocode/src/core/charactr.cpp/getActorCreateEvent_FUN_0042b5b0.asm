; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_charactr_cpp_getActorCreateEvent_FUN_0042b5b0(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b5b0
        ;   Label: core_charactr.cpp_getActorCreateEvent_FUN_0042b5b0
    ADD EAX,0x78                        ; 0042b5b4
    RET                                 ; 0042b5b7

