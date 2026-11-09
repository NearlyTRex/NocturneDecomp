; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_boxactor_cpp_CBoxActor_getActorType_FUN_00421c90(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBoxActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c505c                    ; 00421c90 | g_CBoxActorClassInfo
        ;   Label: core_boxactor.cpp_CBoxActor_getActorType_FUN_00421c90
    RET                                 ; 00421c95

