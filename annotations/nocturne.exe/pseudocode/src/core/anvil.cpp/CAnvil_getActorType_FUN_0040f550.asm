; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_anvil_cpp_CAnvil_getActorType_FUN_0040f550(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAnvilClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x764234                    ; 0040f550 | g_CAnvilClassInfo
        ;   Label: core_anvil.cpp_CAnvil_getActorType_FUN_0040f550
    RET                                 ; 0040f555

