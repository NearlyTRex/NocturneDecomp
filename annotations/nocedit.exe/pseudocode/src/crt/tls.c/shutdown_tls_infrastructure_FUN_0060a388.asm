; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl BOOL crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388(void)
;
;
; XREF[1]:
;   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 at 0060a45f
;
; Called Functions:
;   crt_tls.c_cleanup_thread_tls_data_FUN_0060a334
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0060a388
        ;   Label: crt_tls.c_shutdown_tls_infrastructure_FUN_0060a388
    CALL crt_tls.c_cleanup_thread_tls_data_FUN_0060a334 ; 0060a38a
        ;   XREF to: 0060a334 (UNCONDITIONAL_CALL)  ; void crt_tls.c_cleanup_thread_tls_data_FUN_0060a334(int shutdownMode)
    ADD ESP,0x4                         ; 0060a38f
    MOV EAX,EAX                         ; 0060a392

