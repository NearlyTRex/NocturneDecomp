; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_boxactor_cpp_CBoxActor_getActorType_FUN_0041efd0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBoxActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7e177c                    ; 0041efd0 | g_CBoxActorClassInfo
        ;   Label: core_boxactor.cpp_CBoxActor_getActorType_FUN_0041efd0
    RET                                 ; 0041efd5

