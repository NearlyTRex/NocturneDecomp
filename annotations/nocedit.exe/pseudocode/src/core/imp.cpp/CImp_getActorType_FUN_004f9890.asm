; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_imp_cpp_CImp_getActorType_FUN_004f9890(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CImpClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db8a24                   ; 004f9890 | g_CImpClassInfo
        ;   Label: core_imp.cpp_CImp_getActorType_FUN_004f9890
    RET                                 ; 004f9895

