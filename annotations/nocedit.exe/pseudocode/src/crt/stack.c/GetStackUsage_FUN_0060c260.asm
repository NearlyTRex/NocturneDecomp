; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stack.c_GetStackUsage_FUN_0060c260(void)
;
;
; XREF[3]:
;   crt_io.c_write_FUN_006084ec at 00608660
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f50b
;   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 at 00609ec5
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c260
        ;   Label: crt_stack.c_GetStackUsage_FUN_0060c260
    CALL dword ptr [0x00684ee4]         ; 0060c261 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV EBX,EAX                         ; 0060c267
    MOV EAX,ESP                         ; 0060c269
    SUB EAX,dword ptr [EBX]             ; 0060c26b
    POP EBX                             ; 0060c26d
    RET                                 ; 0060c26e

