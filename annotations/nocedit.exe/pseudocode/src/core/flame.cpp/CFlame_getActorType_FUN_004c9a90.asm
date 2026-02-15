; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_flame_cpp_CFlame_getActorType_FUN_004c9a90(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CFlameClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d7a6c4                   ; 004c9a90 | g_CFlameClassInfo
        ;   Label: core_flame.cpp_CFlame_getActorType_FUN_004c9a90
    RET                                 ; 004c9a95

