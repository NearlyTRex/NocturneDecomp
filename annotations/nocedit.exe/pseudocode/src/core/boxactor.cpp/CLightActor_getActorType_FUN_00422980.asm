; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_boxactor_cpp_CLightActor_getActorType_FUN_00422980(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CLightActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822c4c                    ; 00422980 | g_CLightActorClassInfo
        ;   Label: core_boxactor.cpp_CLightActor_getActorType_FUN_00422980
    RET                                 ; 00422985

