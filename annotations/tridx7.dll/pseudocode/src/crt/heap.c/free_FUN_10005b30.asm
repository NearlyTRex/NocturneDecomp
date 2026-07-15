; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_heap_c_free_FUN_10005b30(void *block)
;
; Parameters:
; void *           Stack[0x4]:4   block
;
; XREF[28]:
;   crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0 at 100084bb
;   crt_env.c___crtGetEnvironmentStringsW_FUN_100081e0 at 100083c4
;   crt_env.c___crtsetenv_FUN_10011360 at 1001149d
;   crt_env.c__setenvp_FUN_10007b60 at 10007c26
;   crt_heap.c_realloc_FUN_10011680 at 100116a1
;   crt_locale.c___crtCompareStringA_FUN_10011040 at 1001130c
;   crt_locale.c___crtCompareStringA_v2_FUN_10010dc0 at 10010f99
;   crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0 at 1000fbd5
;   crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0 at 1000fa97
;   crt_locale.c___crtGetStringTypeW_FUN_1000be00 at 1000bf97
;   ... and 18 more
;
; Referenced Globals:
;   undefined4 DAT_10241974
;   void* PTR_HeapFree_102421c4 = 0024240c
;
; Called Functions:
;   HeapFree
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10005b30
        ;   Label: crt_heap.c_free_FUN_10005b30
    TEST EAX,EAX                        ; 10005b34
    JZ 0x10005b47                       ; 10005b36
        ;   XREF to: 10005b47 (CONDITIONAL_JUMP)  ; LAB_10005b47
    PUSH EAX                            ; 10005b38
    PUSH 0x0                            ; 10005b39
    MOV EAX,[0x10241974]                ; 10005b3b | DAT_10241974
    PUSH EAX                            ; 10005b40
    CALL dword ptr [0x102421c4]         ; 10005b41 | PTR_HeapFree_102421c4
    RET                                 ; 10005b47
        ;   Label: LAB_10005b47

