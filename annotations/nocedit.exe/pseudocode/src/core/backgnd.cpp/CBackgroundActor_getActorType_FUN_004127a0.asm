; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_backgnd_cpp_CBackgroundActor_getActorType_FUN_004127a0(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBackgroundActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x82245c                    ; 004127a0 | g_CBackgroundActorClassInfo
        ;   Label: core_backgnd.cpp_CBackgroundActor_getActorType_FUN_004127a0
    RET                                 ; 004127a5

