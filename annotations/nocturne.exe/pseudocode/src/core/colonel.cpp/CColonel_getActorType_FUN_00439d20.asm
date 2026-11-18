; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_colonel_cpp_CColonel_getActorType_FUN_00439d20(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CColonelClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x77acd0                    ; 00439d20 | g_CColonelClassInfo
        ;   Label: core_colonel.cpp_CColonel_getActorType_FUN_00439d20
    RET                                 ; 00439d25

