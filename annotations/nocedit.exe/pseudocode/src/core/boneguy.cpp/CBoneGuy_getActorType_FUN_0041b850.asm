; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_boneguy_cpp_CBoneGuy_getActorType_FUN_0041b850(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBoneGuyClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822970                    ; 0041b850 | g_CBoneGuyClassInfo
        ;   Label: core_boneguy.cpp_CBoneGuy_getActorType_FUN_0041b850
    RET                                 ; 0041b855

