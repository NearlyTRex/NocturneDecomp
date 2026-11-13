; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_beast_cpp_CBeast_getActorType_FUN_004146e0(CBeast *this_ptr)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBeastClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c3860                    ; 004146e0 | g_CBeastClassInfo
        ;   Label: core_beast.cpp_CBeast_getActorType_FUN_004146e0
    RET                                 ; 004146e5

