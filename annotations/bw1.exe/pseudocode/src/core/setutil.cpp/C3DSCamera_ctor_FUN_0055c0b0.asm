; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_0055c0b0(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055c0b0
        ;   Label: core_setutil.cpp_C3DSCamera_ctor_FUN_0055c0b0
    MOV dword ptr [EAX + 0x194],0x0     ; 0055c0b4
    MOV dword ptr [EAX + 0x198],0x0     ; 0055c0be
    MOV dword ptr [EAX + 0x150],0x1     ; 0055c0c8
    RET                                 ; 0055c0d2

