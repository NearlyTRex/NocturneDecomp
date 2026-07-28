; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool engine_dosio_cpp_copyFileTimestamp_FUN_00456950(char *param_1,time_t param_2)
;
;
; Called Functions:
;   crt_io.c__utime_00600c1e_FUN_00565dc6
;   crt_io.c_getFileStat_FUN_00565dc0
;
; *****************************************************************************

section .text

    SUB ESP,0x50                        ; 00456950
        ;   Label: engine_dosio.cpp_copyFileTimestamp_FUN_00456950
    MOV EAX,dword ptr [ESP + 0x58]      ; 00456953
    MOV dword ptr [ESP + 0x48],EAX      ; 00456957
    MOV dword ptr [ESP + 0x4c],EAX      ; 0045695b
    MOV EAX,ESP                         ; 0045695f
    PUSH EAX                            ; 00456961
    MOV EDX,dword ptr [ESP + 0x58]      ; 00456962
    PUSH EDX                            ; 00456966
    CALL crt_io.c_getFileStat_FUN_00565dc0 ; 00456967
        ;   XREF to: 00565dc0 (UNCONDITIONAL_CALL)  ; int crt_io.c_getFileStat_FUN_00565dc0(char * filename, _stat * file_info)
    ADD ESP,0x8                         ; 0045696c
    TEST EAX,EAX                        ; 0045696f
    JNZ 0x0045697b                      ; 00456971
        ;   XREF to: 0045697b (CONDITIONAL_JUMP)  ; LAB_0045697b
    MOV EAX,dword ptr [ESP + 0x1a]      ; 00456973
    MOV dword ptr [ESP + 0x48],EAX      ; 00456977
    LEA EAX,[ESP + 0x48]                ; 0045697b
        ;   Label: LAB_0045697b
    PUSH EAX                            ; 0045697f
    MOV ECX,dword ptr [ESP + 0x58]      ; 00456980
    PUSH ECX                            ; 00456984
    CALL crt_io.c__utime_00600c1e_FUN_00565dc6 ; 00456985
        ;   XREF to: 00565dc6 (UNCONDITIONAL_CALL)  ; int crt_io.c__utime_00600c1e_FUN_00565dc6(char * filename, _utimbuf * timestamps)
    ADD ESP,0x8                         ; 0045698a
    TEST EAX,EAX                        ; 0045698d
    SETZ AL                             ; 0045698f
    AND EAX,0xff                        ; 00456992
    ADD ESP,0x50                        ; 00456997
    RET                                 ; 0045699a

