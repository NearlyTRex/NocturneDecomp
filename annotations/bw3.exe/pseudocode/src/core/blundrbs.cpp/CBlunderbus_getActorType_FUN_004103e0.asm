; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_blundrbs_cpp_CBlunderbus_getActorType_FUN_004103e0(CBlunderbus *this_ptr)
;
; Parameters:
; CBlunderbus *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBlunderbusClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dff4c                    ; 004103e0 | g_CBlunderbusClassInfo
        ;   Label: core_blundrbs.cpp_CBlunderbus_getActorType_FUN_004103e0
    RET                                 ; 004103e5

