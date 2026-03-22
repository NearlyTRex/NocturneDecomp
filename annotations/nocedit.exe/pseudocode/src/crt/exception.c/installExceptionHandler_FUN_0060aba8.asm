; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_exception_c_installExceptionHandler_FUN_0060aba8(ExceptionFrame *pExceptionFrame)
;
;
; XREF[1]:
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8 at 006026db
;
; Referenced Globals:
;   SET_UNHANDLED_EXCEPTION_FILTER_FUNC* g_SetUnhandledExceptionFilterFunc = 0021220a
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;   SetUnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060aba8
        ;   Label: crt_exception.c_installExceptionHandler_FUN_0060aba8
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060aba9
    CALL dword ptr [0x00684ee4]         ; 0060abad | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV dword ptr [EAX + 0x54],EBX      ; 0060abb3
    XOR EAX,EAX                         ; 0060abb6
    MOV EAX,dword ptr FS:[EAX]          ; 0060abb8
    MOV EBX,EAX                         ; 0060abbb
    CALL dword ptr [0x00684ee4]         ; 0060abbd | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV EAX,dword ptr [EAX + 0x54]      ; 0060abc3
    MOV dword ptr [EAX],EBX             ; 0060abc6
    CALL dword ptr [0x00684ee4]         ; 0060abc8 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV EAX,dword ptr [EAX + 0x54]      ; 0060abce
    MOV dword ptr [EAX + 0x4],0x60a9d8  ; 0060abd1
    CALL dword ptr [0x00684ee4]         ; 0060abd8 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV EAX,dword ptr [EAX + 0x54]      ; 0060abde
    XOR EDX,EDX                         ; 0060abe1
    MOV dword ptr FS:[EDX],EAX          ; 0060abe3
    PUSH 0x60a7a4                       ; 0060abe6 | lpTopLevelExceptionFilter_0060a7a4
    CALL dword ptr CS:[0x611640]        ; 0060abeb | g_SetUnhandledExceptionFilterFunc
    POP EBX                             ; 0060abf2
    RET                                 ; 0060abf3

