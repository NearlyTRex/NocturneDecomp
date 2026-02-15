; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_scat_cpp_CScat_getActorType_FUN_00556ec0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CScatClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x31061a4                   ; 00556ec0 | g_CScatClassInfo
        ;   Label: core_scat.cpp_CScat_getActorType_FUN_00556ec0
    RET                                 ; 00556ec5

