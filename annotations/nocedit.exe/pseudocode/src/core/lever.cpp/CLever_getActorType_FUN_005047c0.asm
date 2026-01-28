; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_lever_cpp_CLever_getActorType_FUN_005047c0(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CLeverClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2dd3058                   ; 005047c0 | g_CLeverClassInfo
        ;   Label: core_lever.cpp_CLever_getActorType_FUN_005047c0
    RET                                 ; 005047c5

