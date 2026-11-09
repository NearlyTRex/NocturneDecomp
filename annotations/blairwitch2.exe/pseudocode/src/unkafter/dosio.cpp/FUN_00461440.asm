; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_dosio_cpp_FUN_00461440(char *param_1)
;
;
; XREF[1]:
;   engine_console.cpp_CConsole_reset_FUN_004368b0 at 004368e1
;
; Called Functions:
;   crt_unknown.c_FUN_005ba1e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00461440
        ;   Label: unkafter_dosio.cpp_FUN_00461440
    PUSH EDX                            ; 00461444
    CALL crt_unknown.c_FUN_005ba1e0     ; 00461445
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005ba1e0(char * filename)
    ADD ESP,0x4                         ; 0046144a
    TEST EAX,EAX                        ; 0046144d
    SETZ AL                             ; 0046144f
    AND EAX,0xff                        ; 00461452
    RET                                 ; 00461457

