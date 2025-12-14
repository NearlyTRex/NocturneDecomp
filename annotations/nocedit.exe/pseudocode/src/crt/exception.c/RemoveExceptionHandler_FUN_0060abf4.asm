; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_exception.c_RemoveExceptionHandler_FUN_0060abf4(void)
;
;
; XREF[2]:
;   crt_exit.c_ExitProcess_FUN_00602700 at 00602724
;   crt_thread.c_exit_thread_FUN_0060fa58 at 0060fa5e
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 0060abf4 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
    MOV EAX,dword ptr [EAX + 0x54]      ; 0060abfa
    TEST EAX,EAX                        ; 0060abfd
    JZ 0x0060ac08                       ; 0060abff
        ;   XREF to: 0060ac08 (CONDITIONAL_JUMP)  ; LAB_0060ac08
    MOV EAX,dword ptr [EAX]             ; 0060ac01
    XOR EDX,EDX                         ; 0060ac03
    MOV dword ptr FS:[EDX],EAX          ; 0060ac05
    CALL dword ptr [0x00684ee4]         ; 0060ac08 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: LAB_0060ac08
    MOV dword ptr [EAX + 0x54],0x0      ; 0060ac0e
    RET                                 ; 0060ac15

