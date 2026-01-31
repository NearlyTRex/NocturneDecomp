; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_hotdemon_cpp_CHotDemon_getActorType_FUN_004f6c90(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CHotDemonClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db88f8                   ; 004f6c90 | g_CHotDemonClassInfo
        ;   Label: core_hotdemon.cpp_CHotDemon_getActorType_FUN_004f6c90
    RET                                 ; 004f6c95

