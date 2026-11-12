; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_construc_cpp_CConstruct_getActorType_FUN_00436af0(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CConstructClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c2584                    ; 00436af0 | g_CConstructClassInfo
        ;   Label: core_construc.cpp_CConstruct_getActorType_FUN_00436af0
    RET                                 ; 00436af5

