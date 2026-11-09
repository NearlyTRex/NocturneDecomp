; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b8490(void)
;
;
; XREF[2]:
;   crt_stdlib.c_rand_FUN_005b849c at 005b849c
;   crt_stdlib.c_srand_FUN_005b84c0 at 005b84c0
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; Called Functions:
;   crt_unknown.c_FUN_005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005b8490 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: crt_unknown.c_FUN_005b8490
    ADD EAX,0xc                         ; 005b8496
    RET                                 ; 005b8499

