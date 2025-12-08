; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_io.c_invalidate_handle_wrapper_FUN_00602448(int handle_index)
;
; Parameters:
; int              Stack[0x4]:4   handle_index
;
; XREF[2]:
;   crt_io.c_close_handle_safe_FUN_0060c2e0 at 0060c324
;   crt_stdio.c_fclose_force_FUN_00601fd0 at 006020ac
;
; Called Functions:
;   crt_io.c_invalidate_handle_FUN_00608af4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00602448
        ;   Label: crt_io.c_invalidate_handle_wrapper_FUN_00602448
    PUSH EDX                            ; 0060244c
    CALL crt_io.c_invalidate_handle_FUN_00608af4 ; 0060244d | void crt_io.c_invalidate_handle_FUN_00608af4(int handle_index)
        ;   XREF to: 00608af4 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00602452
    LEA EAX,[EAX]                       ; 00602455

