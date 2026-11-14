; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_boneguy_cpp_CBoneGuy_getActorType_FUN_00417f40(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBoneGuyClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc970                    ; 00417f40 | g_CBoneGuyClassInfo
        ;   Label: core_boneguy.cpp_CBoneGuy_getActorType_FUN_00417f40
    RET                                 ; 00417f45

