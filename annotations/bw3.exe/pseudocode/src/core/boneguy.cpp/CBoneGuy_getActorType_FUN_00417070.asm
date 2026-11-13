; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_boneguy_cpp_CBoneGuy_getActorType_FUN_00417070(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBoneGuyClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7e164c                    ; 00417070 | g_CBoneGuyClassInfo
        ;   Label: core_boneguy.cpp_CBoneGuy_getActorType_FUN_00417070
    RET                                 ; 00417075

