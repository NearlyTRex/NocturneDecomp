; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_005143e0(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005143e0
        ;   Label: core_setutil.cpp_C3DSCamera_ctor_FUN_005143e0
    MOV dword ptr [EAX + 0x190],0x0     ; 005143e4
    MOV dword ptr [EAX + 0x194],0x0     ; 005143ee
    MOV dword ptr [EAX + 0x14c],0x1     ; 005143f8
    RET                                 ; 00514402

