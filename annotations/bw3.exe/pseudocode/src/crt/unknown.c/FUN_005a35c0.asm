; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a35c0(void)
;
;
; XREF[2]:
;   crt_stdlib.c_rand_FUN_005a35cc at 005a35cc
;   crt_stdlib.c_srand_FUN_005a35f0 at 005a35f0
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f3c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079a0]         ; 005a35c0 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: crt_unknown.c_FUN_005a35c0
    ADD EAX,0xc                         ; 005a35c6
    RET                                 ; 005a35c9

