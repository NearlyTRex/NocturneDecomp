; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool engine_dosio_cpp_FUN_00466220(char *param_1)
;
;
; XREF[1]:
;   engine_console.cpp_CConsole_reset_FUN_00442190 at 004421c1
;
; Called Functions:
;   crt_unknown.c_FUN_005a54b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00466220
        ;   Label: engine_dosio.cpp_FUN_00466220
    PUSH EDX                            ; 00466224
    CALL crt_unknown.c_FUN_005a54b0     ; 00466225
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005a54b0(char * filename)
    ADD ESP,0x4                         ; 0046622a
    TEST EAX,EAX                        ; 0046622d
    SETZ AL                             ; 0046622f
    AND EAX,0xff                        ; 00466232
    RET                                 ; 00466237

