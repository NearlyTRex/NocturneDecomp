; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setutil_cpp_C3DSCamera_getProjectionScale_FUN_005851f0(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005851f0
        ;   Label: core_setutil.cpp_C3DSCamera_getProjectionScale_FUN_005851f0
    MOV EAX,dword ptr [EAX + 0x144]     ; 005851f4
    RET                                 ; 005851fa

