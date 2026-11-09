; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_crate_cpp_CCrate_getActorType_FUN_00439d50(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCrateClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c2638                    ; 00439d50 | g_CCrateClassInfo
        ;   Label: core_crate.cpp_CCrate_getActorType_FUN_00439d50
    RET                                 ; 00439d55

