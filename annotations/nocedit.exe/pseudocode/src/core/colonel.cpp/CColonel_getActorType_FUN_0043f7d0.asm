; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_colonel_cpp_CColonel_getActorType_FUN_0043f7d0(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CColonelClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x83b168                    ; 0043f7d0 | g_CColonelClassInfo
        ;   Label: core_colonel.cpp_CColonel_getActorType_FUN_0043f7d0
    RET                                 ; 0043f7d5

