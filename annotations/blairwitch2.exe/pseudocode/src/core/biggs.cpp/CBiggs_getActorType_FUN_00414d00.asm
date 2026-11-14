; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_biggs_cpp_CBiggs_getActorType_FUN_00414d00(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBiggsClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc8cc                    ; 00414d00 | g_CBiggsClassInfo
        ;   Label: core_biggs.cpp_CBiggs_getActorType_FUN_00414d00
    RET                                 ; 00414d05

