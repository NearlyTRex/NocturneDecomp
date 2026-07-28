; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c_register_handler_wrapper_FUN_005671e8(HANDLE file_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   file_handle
;
; XREF[1]:
;   crt_stdio.c_CreateFileImpl_FUN_0056b960 at 0056ba01
;
; Called Functions:
;   FUN_0056e010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005671e8
        ;   Label: crt_io.c_register_handler_wrapper_FUN_005671e8
    PUSH EDX                            ; 005671ec
    CALL FUN_0056e010                   ; 005671ed
        ;   XREF to: 0056e010 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e010()
    ADD ESP,0x4                         ; 005671f2
    RET                                 ; 005671f5

