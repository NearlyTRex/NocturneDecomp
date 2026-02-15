; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_glass_cpp_CGlass_getActorType_FUN_004e9030(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CGlassClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d83328                   ; 004e9030 | g_CGlassClassInfo
        ;   Label: core_glass.cpp_CGlass_getActorType_FUN_004e9030
    RET                                 ; 004e9035

