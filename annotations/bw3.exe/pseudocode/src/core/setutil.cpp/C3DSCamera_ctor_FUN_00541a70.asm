; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_00541a70(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00541a70
        ;   Label: core_setutil.cpp_C3DSCamera_ctor_FUN_00541a70
    MOV dword ptr [EAX + 0x194],0x0     ; 00541a74
    MOV dword ptr [EAX + 0x198],0x0     ; 00541a7e
    MOV dword ptr [EAX + 0x150],0x1     ; 00541a88
    RET                                 ; 00541a92

