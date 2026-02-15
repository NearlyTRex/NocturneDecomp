; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c_register_handler_wrapper_FUN_00602438(HANDLE file_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   file_handle
;
; XREF[1]:
;   crt_stdio.c_CreateFileImpl_FUN_006090a0 at 00609141
;
; Called Functions:
;   crt_io.c_register_handle_FUN_00608990
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00602438
        ;   Label: crt_io.c_register_handler_wrapper_FUN_00602438
    PUSH EDX                            ; 0060243c
    CALL crt_io.c_register_handle_FUN_00608990 ; 0060243d
        ;   XREF to: 00608990 (UNCONDITIONAL_CALL)  ; int crt_io.c_register_handle_FUN_00608990(HANDLE handle)
    ADD ESP,0x4                         ; 00602442
    RET                                 ; 00602445

