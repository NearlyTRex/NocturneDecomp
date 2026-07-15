; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fpu_c__install_fp_handlers_FUN_100055b0(void)
;
;
; XREF[1]:
;   crt_fpu.c__fpmath_FUN_10005580 at 10005580
;
; Referenced Globals:
;   void* PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d48 = 10009ab0
;   void* PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d4c = 10009ab0
;   void* PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d50 = 10009ab0
;   void* PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d54 = 10009ab0
;   void* PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d58 = 10009ab0
;   void* PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d5c = 10009ab0
;
; *****************************************************************************

section .text

    MOV dword ptr [0x10016d4c],0x10006f60 ; 100055b0 | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d4c
        ;   Label: crt_fpu.c__install_fp_handlers_FUN_100055b0
    MOV dword ptr [0x10016d50],0x10006fe0 ; 100055ba | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d50
    MOV dword ptr [0x10016d54],0x10006ef0 ; 100055c4 | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d54
    MOV dword ptr [0x10016d58],0x10006fc0 ; 100055ce | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d58
    MOV EAX,0x10007380                  ; 100055d8
    MOV [0x10016d48],EAX                ; 100055dd | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d48
    MOV [0x10016d5c],EAX                ; 100055e2 | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d5c
    RET                                 ; 100055e7

