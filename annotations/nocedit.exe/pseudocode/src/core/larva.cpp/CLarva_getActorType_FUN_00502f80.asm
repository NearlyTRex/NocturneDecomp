; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_larva_cpp_CLarva_getActorType_FUN_00502f80(CLarva *this_ptr)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CLarvaClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2dcd814                   ; 00502f80 | g_CLarvaClassInfo
        ;   Label: core_larva.cpp_CLarva_getActorType_FUN_00502f80
    RET                                 ; 00502f85

