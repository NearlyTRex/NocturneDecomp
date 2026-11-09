; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSLight * __cdecl core_setutil_cpp_C3DSLight_ctor_FUN_0053af10(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_setutil.cpp_C3DSLight_reset_FUN_0053bcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053af10
        ;   Label: core_setutil.cpp_C3DSLight_ctor_FUN_0053af10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053af11
    PUSH EBX                            ; 0053af15
    CALL core_setutil.cpp_C3DSLight_reset_FUN_0053bcb0 ; 0053af16
        ;   XREF to: 0053bcb0 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSLight_reset_FUN_0053bcb0()
    ADD ESP,0x4                         ; 0053af1b
    MOV EAX,EBX                         ; 0053af1e
    POP EBX                             ; 0053af20
    RET                                 ; 0053af21

