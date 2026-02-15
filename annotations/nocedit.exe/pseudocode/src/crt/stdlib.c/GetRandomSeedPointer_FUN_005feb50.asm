; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __watcallRegister crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50(void)
;
;
; XREF[2]:
;   crt_stdlib.c_rand_FUN_005feb5c at 005feb5c
;   crt_stdlib.c_srand_FUN_005feb80 at 005feb80
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684ee4]         ; 005feb50 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
    ADD EAX,0xc                         ; 005feb56
    RET                                 ; 005feb59

