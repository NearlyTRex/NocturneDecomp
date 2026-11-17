; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_boxactor_cpp_CLightActor_getActorType_FUN_0041cf50(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CLightActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bcc4c                    ; 0041cf50 | g_CLightActorClassInfo
        ;   Label: core_boxactor.cpp_CLightActor_getActorType_FUN_0041cf50
    RET                                 ; 0041cf55

