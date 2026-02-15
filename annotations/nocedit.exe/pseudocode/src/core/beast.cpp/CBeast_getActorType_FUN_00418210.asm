; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_beast_cpp_CBeast_getActorType_FUN_00418210(CBeast *this_ptr)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBeastClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822860                    ; 00418210 | g_CBeastClassInfo
        ;   Label: core_beast.cpp_CBeast_getActorType_FUN_00418210
    RET                                 ; 00418215

