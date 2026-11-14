; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSLight * __cdecl core_setutil_cpp_C3DSLight_ctor_FUN_005421a0(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_setutil.cpp_C3DSLight_reset_FUN_00542f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005421a0
        ;   Label: core_setutil.cpp_C3DSLight_ctor_FUN_005421a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005421a1
    PUSH EBX                            ; 005421a5
    CALL core_setutil.cpp_C3DSLight_reset_FUN_00542f40 ; 005421a6
        ;   XREF to: 00542f40 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_reset_FUN_00542f40(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 005421ab
    MOV EAX,EBX                         ; 005421ae
    POP EBX                             ; 005421b0
    RET                                 ; 005421b1

