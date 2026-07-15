; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_heap_c__heap_term_FUN_10007910(void)
;
;
; XREF[2]:
;   crt_startup.c__DllMainCRTStartup_FUN_100057f0 at 10005881
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 10005742
;
; Referenced Globals:
;   undefined4 DAT_10241974
;   void* PTR_HeapDestroy_102421f8 = 002424d8
;
; Called Functions:
;   HeapDestroy
;
; *****************************************************************************

section .text

    MOV EAX,[0x10241974]                ; 10007910 | DAT_10241974
        ;   Label: crt_heap.c__heap_term_FUN_10007910
    PUSH EAX                            ; 10007915
    CALL dword ptr [0x102421f8]         ; 10007916 | PTR_HeapDestroy_102421f8
    RET                                 ; 1000791c

