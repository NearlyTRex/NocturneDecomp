; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_biggs_cpp_CBiggs_getActorType_FUN_004149e0(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBiggsClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c38cc                    ; 004149e0 | g_CBiggsClassInfo
        ;   Label: core_biggs.cpp_CBiggs_getActorType_FUN_004149e0
    RET                                 ; 004149e5

