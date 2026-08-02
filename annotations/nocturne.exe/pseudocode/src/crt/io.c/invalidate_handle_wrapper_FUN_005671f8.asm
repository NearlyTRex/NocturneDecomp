; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_io_c_invalidate_handle_wrapper_FUN_005671f8(int handle_index)
;
; Parameters:
; int              Stack[0x4]:4   handle_index
;
; XREF[2]:
;   crt_unknown.c_FUN_00570a70 at 00570ab4
;   crt_unknown.c_fclose_FUN_005634b0 at 0056358c
;
; Called Functions:
;   crt_unknown.c_FUN_0056e174
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005671f8
        ;   Label: crt_io.c_invalidate_handle_wrapper_FUN_005671f8
    PUSH EDX                            ; 005671fc
    CALL crt_unknown.c_FUN_0056e174     ; 005671fd
        ;   XREF to: 0056e174 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e174()
    ADD ESP,0x4                         ; 00567202
    LEA EAX,[EAX]                       ; 00567205

