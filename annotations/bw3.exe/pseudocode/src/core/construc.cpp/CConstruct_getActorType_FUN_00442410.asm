; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_construc_cpp_CConstruct_getActorType_FUN_00442410(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CConstructClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7f8ea0                    ; 00442410 | g_CConstructClassInfo
        ;   Label: core_construc.cpp_CConstruct_getActorType_FUN_00442410
    RET                                 ; 00442415

