; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_grave.cpp_CGrave_getActorType_FUN_004ee500(CGrave * this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CGraveClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db862c                   ; 004ee500 | g_CGraveClassInfo
        ;   Label: core_grave.cpp_CGrave_getActorType_FUN_004ee500
    RET                                 ; 004ee505

