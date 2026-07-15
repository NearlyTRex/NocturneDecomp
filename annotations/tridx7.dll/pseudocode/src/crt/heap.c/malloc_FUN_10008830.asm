; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_heap_c_malloc_FUN_10008830(size_t size)
;
; Parameters:
; size_t           Stack[0x4]:4   size
;
; XREF[28]:
;   crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0 at 10008496
;   crt_env.c___crtGetEnvironmentStringsW_FUN_100081e0 at 10008276
;   crt_env.c___crtsetenv_FUN_10011360 at 10011410
;   crt_env.c__build_ansi_environ_FUN_10010d30 at 10010d5f
;   crt_env.c__setenvp_FUN_10007b60 at 10007b97
;   crt_env.c_copy_environ_FUN_10011610 at 10011638
;   crt_heap.c_realloc_FUN_10011680 at 10011690
;   crt_io.c__alloc_osfhnd_FUN_10008a40 at 10008b0a
;   crt_io.c__ioinit_FUN_10007920 at 1000792c
;   crt_locale.c___crtCompareStringA_FUN_10011040 at 10011266
;   ... and 18 more
;
; Referenced Globals:
;   undefined4 DAT_10017780
;
; Called Functions:
;   crt_heap.c__nh_malloc_FUN_10008850
;
; *****************************************************************************

section .text

    MOV EAX,[0x10017780]                ; 10008830 | DAT_10017780
        ;   Label: crt_heap.c_malloc_FUN_10008830
    MOV ECX,dword ptr [ESP + 0x4]       ; 10008835
    PUSH EAX                            ; 10008839
    PUSH ECX                            ; 1000883a
    CALL crt_heap.c__nh_malloc_FUN_10008850 ; 1000883b
        ;   XREF to: 10008850 (UNCONDITIONAL_CALL)  ; void * crt_heap.c__nh_malloc_FUN_10008850(size_t size, int nh_flag)
    ADD ESP,0x8                         ; 10008840
    RET                                 ; 10008843

