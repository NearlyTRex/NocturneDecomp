; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setutil_cpp_FUN_00514a50(undefined4 param_1)
;
;
; Called Functions:
;   core_setutil.cpp_C3DSLight_reset_FUN_00515800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514a50
        ;   Label: core_setutil.cpp_FUN_00514a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514a51
    PUSH EBX                            ; 00514a55
    CALL core_setutil.cpp_C3DSLight_reset_FUN_00515800 ; 00514a56
        ;   XREF to: 00515800 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSLight_reset_FUN_00515800()
    ADD ESP,0x4                         ; 00514a5b
    MOV EAX,EBX                         ; 00514a5e
    POP EBX                             ; 00514a60
    RET                                 ; 00514a61

