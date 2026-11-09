; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_dosio_cpp_FUN_00479950(char *param_1)
;
;
; XREF[1]:
;   engine_console.cpp_CConsole_reset_FUN_004455d0 at 00445601
;
; Called Functions:
;   crt_unknown.c_FUN_005c25c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00479950
        ;   Label: unkafter_dosio.cpp_FUN_00479950
    PUSH EDX                            ; 00479954
    CALL crt_unknown.c_FUN_005c25c0     ; 00479955
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005c25c0(char * filename)
    ADD ESP,0x4                         ; 0047995a
    TEST EAX,EAX                        ; 0047995d
    SETZ AL                             ; 0047995f
    AND EAX,0xff                        ; 00479962
    RET                                 ; 00479967

