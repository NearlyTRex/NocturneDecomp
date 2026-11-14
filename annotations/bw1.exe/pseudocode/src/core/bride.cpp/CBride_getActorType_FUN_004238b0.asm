; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_bride_cpp_CBride_getActorType_FUN_004238b0(CBride *this_ptr)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBrideClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c534c                    ; 004238b0 | g_CBrideClassInfo
        ;   Label: core_bride.cpp_CBride_getActorType_FUN_004238b0
    RET                                 ; 004238b5

