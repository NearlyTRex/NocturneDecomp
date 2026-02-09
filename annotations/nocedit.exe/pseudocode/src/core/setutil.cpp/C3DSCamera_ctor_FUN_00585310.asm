; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_00585310(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_FUN_0057e7c0 at 0057f77e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00585310
        ;   Label: core_setutil.cpp_C3DSCamera_ctor_FUN_00585310
    MOV dword ptr [EAX + 0x194],0x0     ; 00585314
    MOV dword ptr [EAX + 0x198],0x0     ; 0058531e
    MOV dword ptr [EAX + 0x150],0x1     ; 00585328
    RET                                 ; 00585332

