; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_anvil_cpp_CAnvil_getActorType_FUN_0040e5c0(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAnvilClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c33e4                    ; 0040e5c0 | g_CAnvilClassInfo
        ;   Label: core_anvil.cpp_CAnvil_getActorType_FUN_0040e5c0
    RET                                 ; 0040e5c5

