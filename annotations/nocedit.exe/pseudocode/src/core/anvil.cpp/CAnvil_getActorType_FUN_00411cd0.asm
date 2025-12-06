; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_anvil.cpp_CAnvil_getActorType_FUN_00411cd0(CAnvil * this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAnvilClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x8223e4                    ; 00411cd0 | CDemonActorType g_CAnvilClassInfo
        ;   Label: core_anvil.cpp_CAnvil_getActorType_FUN_00411cd0
    RET                                 ; 00411cd5

