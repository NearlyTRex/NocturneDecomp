; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c_print_error_message_FUN_0060e298(int errorType,char *errorData)
;
; Parameters:
; int              Stack[0x4]:4   errorType
; char *           Stack[0x8]:4   errorData
;
; XREF[1]:
;   crt_math.c_report_math_error_FUN_0060e2e5 at 0060e305
;
; Referenced Globals:
;   char g_SpaceCharacter =  
;   char*[7] g_MathErrorMessages
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_fputs_FUN_0060ebb0
;   crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060e298
        ;   Label: crt_math.c_print_error_message_FUN_0060e298
    MOV EBP,ESP                         ; 0060e299
    PUSH EBX                            ; 0060e29b
    PUSH 0x2                            ; 0060e29c
    CALL crt_stdio.c_get_standard_file_handle_FUN_0060b7a0 ; 0060e29e
        ;   XREF to: 0060b7a0 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_get_standard_file_handle_FUN_0060b7a0(int fd)
    ADD ESP,0x4                         ; 0060e2a3
    MOV EBX,EAX                         ; 0060e2a6
    PUSH EAX                            ; 0060e2a8
    MOV EAX,dword ptr [EBP + 0x8]       ; 0060e2a9
    MOV EDX,dword ptr [EAX*0x4 + 0x685574] ; 0060e2ac | g_MathErrorMessages
    PUSH EDX                            ; 0060e2b3
    CALL crt_stdio.c_fputs_FUN_0060ebb0 ; 0060e2b4
        ;   XREF to: 0060ebb0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputs_FUN_0060ebb0(char * str, _FILE * file)
    ADD ESP,0x8                         ; 0060e2b9
    PUSH EBX                            ; 0060e2bc
    PUSH 0x65972d                       ; 0060e2bd | g_SpaceCharacter
    CALL crt_stdio.c_fputs_FUN_0060ebb0 ; 0060e2c2
        ;   XREF to: 0060ebb0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputs_FUN_0060ebb0(char * str, _FILE * file)
    ADD ESP,0x8                         ; 0060e2c7
    PUSH EBX                            ; 0060e2ca
    MOV ECX,dword ptr [EBP + 0xc]       ; 0060e2cb
    PUSH ECX                            ; 0060e2ce
    CALL crt_stdio.c_fputs_FUN_0060ebb0 ; 0060e2cf
        ;   XREF to: 0060ebb0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputs_FUN_0060ebb0(char * str, _FILE * file)
    ADD ESP,0x8                         ; 0060e2d4
    PUSH EBX                            ; 0060e2d7
    PUSH 0xa                            ; 0060e2d8
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0060e2da
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0060e2df
    POP EBX                             ; 0060e2e2
    POP EBP                             ; 0060e2e3
    RET                                 ; 0060e2e4

