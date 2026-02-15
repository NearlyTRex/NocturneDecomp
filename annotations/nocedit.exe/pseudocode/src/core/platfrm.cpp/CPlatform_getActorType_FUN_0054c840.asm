; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_platfrm_cpp_CPlatform_getActorType_FUN_0054c840(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CPlatformClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x30d5054                   ; 0054c840 | g_CPlatformClassInfo
        ;   Label: core_platfrm.cpp_CPlatform_getActorType_FUN_0054c840
    RET                                 ; 0054c845

