; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_hostage_cpp_CHostage_getActorType_FUN_004f4830(CHostage *this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CHostageClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db888c                   ; 004f4830 | g_CHostageClassInfo
        ;   Label: core_hostage.cpp_CHostage_getActorType_FUN_004f4830
    RET                                 ; 004f4835

