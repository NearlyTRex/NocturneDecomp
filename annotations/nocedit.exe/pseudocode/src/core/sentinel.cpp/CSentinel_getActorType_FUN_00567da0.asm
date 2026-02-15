; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_sentinel_cpp_CSentinel_getActorType_FUN_00567da0(CSentinel *this_ptr)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CSentinelClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x311423c                   ; 00567da0 | g_CSentinelClassInfo
        ;   Label: core_sentinel.cpp_CSentinel_getActorType_FUN_00567da0
    RET                                 ; 00567da5

