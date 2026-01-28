; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_io_c_register_handle_wrapper_FUN_0060a144(HANDLE handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   handle
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a3c2
;
; Called Functions:
;   crt_io.c_register_handle_FUN_00608990
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060a144
        ;   Label: crt_io.c_register_handle_wrapper_FUN_0060a144
    PUSH EDX                            ; 0060a148
    CALL crt_io.c_register_handle_FUN_00608990 ; 0060a149
        ;   XREF to: 00608990 (UNCONDITIONAL_CALL)  ; int crt_io.c_register_handle_FUN_00608990(HANDLE handle)
    ADD ESP,0x4                         ; 0060a14e
    RET                                 ; 0060a151

