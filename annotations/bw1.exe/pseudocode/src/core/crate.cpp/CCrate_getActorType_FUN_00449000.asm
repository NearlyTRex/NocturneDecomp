; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_crate_cpp_CCrate_getActorType_FUN_00449000(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCrateClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dc6a0                    ; 00449000 | g_CCrateClassInfo
        ;   Label: core_crate.cpp_CCrate_getActorType_FUN_00449000
    RET                                 ; 00449005

