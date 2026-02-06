; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_gargoyle_cpp_CGargoyle_getActorType_FUN_004e44d0(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CGargoyleClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d83230                   ; 004e44d0 | g_CGargoyleClassInfo
        ;   Label: core_gargoyle.cpp_CGargoyle_getActorType_FUN_004e44d0
    RET                                 ; 004e44d5

