; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_keyactor.cpp_CKeyActor_getActorType_FUN_00501680(CKeyActor * this_ptr)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CKeyActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2dcd798                   ; 00501680 | g_CKeyActorClassInfo
        ;   Label: core_keyactor.cpp_CKeyActor_getActorType_FUN_00501680
    RET                                 ; 00501685

