; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_boneguy_cpp_CBoneGuy_getActorType_FUN_0041b3c0(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBoneGuyClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c501c                    ; 0041b3c0 | g_CBoneGuyClassInfo
        ;   Label: core_boneguy.cpp_CBoneGuy_getActorType_FUN_0041b3c0
    RET                                 ; 0041b3c5

