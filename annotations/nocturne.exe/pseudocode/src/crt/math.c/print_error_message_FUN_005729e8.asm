; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c_print_error_message_FUN_005729e8(int errorType,char *errorData)
;
; Parameters:
; int              Stack[0x4]:4   errorType
; char *           Stack[0x8]:4   errorData
;
; XREF[1]:
;   crt_math.c_report_math_error_FUN_00572a35 at 00572a55
;
; Referenced Globals:
;   TerminatedCString s_in_00599281
;   undefined4 DAT_005c2148
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_00566cc0
;   crt_stdio.c_fputs_FUN_00573660
;   crt_stdio.c_get_standard_file_handle_FUN_0056fdf0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005729e8
        ;   Label: crt_math.c_print_error_message_FUN_005729e8
    MOV EBP,ESP                         ; 005729e9
    PUSH EBX                            ; 005729eb
    PUSH 0x2                            ; 005729ec
    CALL crt_stdio.c_get_standard_file_handle_FUN_0056fdf0 ; 005729ee
        ;   XREF to: 0056fdf0 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_get_standard_file_handle_FUN_0056fdf0(int fd)
    ADD ESP,0x4                         ; 005729f3
    MOV EBX,EAX                         ; 005729f6
    PUSH EAX                            ; 005729f8
    MOV EAX,dword ptr [EBP + 0x8]       ; 005729f9
    MOV EDX,dword ptr [EAX*0x4 + 0x5c2148] ; 005729fc | DAT_005c2148
    PUSH EDX                            ; 00572a03
    CALL crt_stdio.c_fputs_FUN_00573660 ; 00572a04
        ;   XREF to: 00573660 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputs_FUN_00573660(char * str, _FILE * file)
    ADD ESP,0x8                         ; 00572a09
    PUSH EBX                            ; 00572a0c
    PUSH 0x599281                       ; 00572a0d | = " in "
    CALL crt_stdio.c_fputs_FUN_00573660 ; 00572a12
        ;   XREF to: 00573660 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputs_FUN_00573660(char * str, _FILE * file)
    ADD ESP,0x8                         ; 00572a17
    PUSH EBX                            ; 00572a1a
    MOV ECX,dword ptr [EBP + 0xc]       ; 00572a1b
    PUSH ECX                            ; 00572a1e
    CALL crt_stdio.c_fputs_FUN_00573660 ; 00572a1f
        ;   XREF to: 00573660 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputs_FUN_00573660(char * str, _FILE * file)
    ADD ESP,0x8                         ; 00572a24
    PUSH EBX                            ; 00572a27
    PUSH 0xa                            ; 00572a28
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 00572a2a
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    ADD ESP,0x8                         ; 00572a2f
    POP EBX                             ; 00572a32
    POP EBP                             ; 00572a33
    RET                                 ; 00572a34

