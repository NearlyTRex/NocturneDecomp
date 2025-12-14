; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_batman.cpp_CBatman_getActorType_FUN_00416440(CBatman * this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatmanClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x8227e8                    ; 00416440 | g_CBatmanClassInfo
        ;   Label: core_batman.cpp_CBatman_getActorType_FUN_00416440
    RET                                 ; 00416445

