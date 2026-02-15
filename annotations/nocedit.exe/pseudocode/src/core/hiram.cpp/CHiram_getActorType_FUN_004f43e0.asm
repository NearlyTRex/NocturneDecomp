; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_hiram_cpp_CHiram_getActorType_FUN_004f43e0(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CHiramClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db884c                   ; 004f43e0 | g_CHiramClassInfo
        ;   Label: core_hiram.cpp_CHiram_getActorType_FUN_004f43e0
    RET                                 ; 004f43e5

