; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_crate_cpp_CCrate_getActorType_FUN_004484c0(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCrateClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x887944                    ; 004484c0 | g_CCrateClassInfo
        ;   Label: core_crate.cpp_CCrate_getActorType_FUN_004484c0
    RET                                 ; 004484c5

