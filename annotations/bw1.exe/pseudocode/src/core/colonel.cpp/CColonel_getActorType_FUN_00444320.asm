; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_colonel_cpp_CColonel_getActorType_FUN_00444320(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CColonelClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7db5b4                    ; 00444320 | g_CColonelClassInfo
        ;   Label: core_colonel.cpp_CColonel_getActorType_FUN_00444320
    RET                                 ; 00444325

