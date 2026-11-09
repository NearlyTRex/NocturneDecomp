; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c0840(void)
;
;
; XREF[2]:
;   crt_stdlib.c_rand_FUN_005c084c at 005c084c
;   crt_stdlib.c_srand_FUN_005c0870 at 005c0870
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; Called Functions:
;   crt_unknown.c_FUN_005c50cc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006265fc]         ; 005c0840 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: crt_unknown.c_FUN_005c0840
    ADD EAX,0xc                         ; 005c0846
    RET                                 ; 005c0849

