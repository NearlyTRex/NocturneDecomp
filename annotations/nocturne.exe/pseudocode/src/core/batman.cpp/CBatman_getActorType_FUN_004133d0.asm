; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_batman_cpp_CBatman_getActorType_FUN_004133d0(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatmanClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x764638                    ; 004133d0 | g_CBatmanClassInfo
        ;   Label: core_batman.cpp_CBatman_getActorType_FUN_004133d0
    RET                                 ; 004133d5

