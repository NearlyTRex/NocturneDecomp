; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_backgnd_cpp_CBackgroundActor_getActorType_FUN_0040f320(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBackgroundActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc45c                    ; 0040f320 | g_CBackgroundActorClassInfo
        ;   Label: core_backgnd.cpp_CBackgroundActor_getActorType_FUN_0040f320
    RET                                 ; 0040f325

