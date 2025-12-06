; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl FILE * crt_stdio.c_get_standard_file_handle_FUN_0060b7a0(int fd)
;
; Parameters:
; int              Stack[0x4]:4   fd
;
; XREF[2]:
;   crt_math.c_print_error_message_FUN_0060e298 at 0060e29e
;   crt_stdio.c_prepare_stream_for_write_FUN_00606055 at 006060a8
;
; Referenced Globals:
;   FILE* g_StaticFilePoolStart = 00000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060b7a0
        ;   Label: crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
    CMP EDX,0x3                         ; 0060b7a4
    JBE 0x0060b7ac                      ; 0060b7a7 | LAB_0060b7ac
        ;   XREF to: 0060b7ac (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0060b7a9
    RET                                 ; 0060b7ab
    LEA EAX,[EDX*0x4 + 0x0]             ; 0060b7ac
        ;   Label: LAB_0060b7ac
    SUB EAX,EDX                         ; 0060b7b3
    SHL EAX,0x2                         ; 0060b7b5
    ADD EAX,EDX                         ; 0060b7b8
    ADD EAX,EAX                         ; 0060b7ba
    ADD EAX,0x684cc4                    ; 0060b7bc | FILE * g_StaticFilePoolStart
    RET                                 ; 0060b7c1

