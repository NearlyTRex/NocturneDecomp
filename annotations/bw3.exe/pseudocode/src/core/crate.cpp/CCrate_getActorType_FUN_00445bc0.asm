; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_crate_cpp_CCrate_getActorType_FUN_00445bc0(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCrateClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7f8f90                    ; 00445bc0 | g_CCrateClassInfo
        ;   Label: core_crate.cpp_CCrate_getActorType_FUN_00445bc0
    RET                                 ; 00445bc5

