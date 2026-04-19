; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_io_c_invalidate_handle_wrapper_FUN_00602448(int handle_index)
;
; Parameters:
; int              Stack[0x4]:4   handle_index
;
; XREF[1]:
;   crt_stdio.c_fclose_FUN_00601fd0 at 006020ac
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00602448
        ;   Label: crt_io.c_invalidate_handle_wrapper_FUN_00602448
    PUSH EDX                            ; 0060244c
    CALL 0x00608af4                     ; 0060244d
        ;   XREF to: 00608af4 (UNCONDITIONAL_CALL)  ; LAB_00608af2+2
    ADD ESP,0x4                         ; 00602452
    LEA EAX,[EAX]                       ; 00602455

