; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_anvil_cpp_CAnvil_getActorType_FUN_0040ea20(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAnvilClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc3e4                    ; 0040ea20 | g_CAnvilClassInfo
        ;   Label: core_anvil.cpp_CAnvil_getActorType_FUN_0040ea20
    RET                                 ; 0040ea25

