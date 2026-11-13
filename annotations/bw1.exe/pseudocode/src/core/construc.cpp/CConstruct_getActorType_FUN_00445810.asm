; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_construc_cpp_CConstruct_getActorType_FUN_00445810(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CConstructClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dc5ec                    ; 00445810 | g_CConstructClassInfo
        ;   Label: core_construc.cpp_CConstruct_getActorType_FUN_00445810
    RET                                 ; 00445815

