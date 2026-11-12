; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSLight * __cdecl core_setutil_cpp_C3DSLight_ctor_FUN_0055c7e0(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_setutil.cpp_C3DSLight_reset_FUN_0055d580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c7e0
        ;   Label: core_setutil.cpp_C3DSLight_ctor_FUN_0055c7e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055c7e1
    PUSH EBX                            ; 0055c7e5
    CALL core_setutil.cpp_C3DSLight_reset_FUN_0055d580 ; 0055c7e6
        ;   XREF to: 0055d580 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_reset_FUN_0055d580(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 0055c7eb
    MOV EAX,EBX                         ; 0055c7ee
    POP EBX                             ; 0055c7f0
    RET                                 ; 0055c7f1

