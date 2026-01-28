; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_shotgun_cpp_CShotgun_getActorType_FUN_00587ed0(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CShotgunClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3659770                   ; 00587ed0 | g_CShotgunClassInfo
        ;   Label: core_shotgun.cpp_CShotgun_getActorType_FUN_00587ed0
    RET                                 ; 00587ed5

