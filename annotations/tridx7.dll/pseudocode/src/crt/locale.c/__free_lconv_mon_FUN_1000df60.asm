; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_locale_c___free_lconv_mon_FUN_1000df60(lconv *lc)
;
; Parameters:
; lconv *          Stack[0x4]:4   lc
;
; Referenced Globals:
;   undefined4 DAT_1001821c
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000df60
        ;   Label: crt_locale.c___free_lconv_mon_FUN_1000df60
    MOV ESI,dword ptr [ESP + 0x8]       ; 1000df61
    TEST ESI,ESI                        ; 1000df65
    JZ 0x1000dfc4                       ; 1000df67
        ;   XREF to: 1000dfc4 (CONDITIONAL_JUMP)  ; LAB_1000dfc4
    MOV EAX,dword ptr [ESI + 0xc]       ; 1000df69
    CMP EAX,0x1001821c                  ; 1000df6c | DAT_1001821c
    JZ 0x1000dfc4                       ; 1000df71
        ;   XREF to: 1000dfc4 (CONDITIONAL_JUMP)  ; LAB_1000dfc4
    PUSH EAX                            ; 1000df73
    CALL crt_heap.c_free_FUN_10005b30   ; 1000df74
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000df79
    MOV EAX,dword ptr [ESI + 0x10]      ; 1000df7c
    PUSH EAX                            ; 1000df7f
    CALL crt_heap.c_free_FUN_10005b30   ; 1000df80
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000df85
    MOV EAX,dword ptr [ESI + 0x14]      ; 1000df88
    PUSH EAX                            ; 1000df8b
    CALL crt_heap.c_free_FUN_10005b30   ; 1000df8c
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000df91
    MOV EAX,dword ptr [ESI + 0x18]      ; 1000df94
    PUSH EAX                            ; 1000df97
    CALL crt_heap.c_free_FUN_10005b30   ; 1000df98
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000df9d
    MOV EAX,dword ptr [ESI + 0x1c]      ; 1000dfa0
    PUSH EAX                            ; 1000dfa3
    CALL crt_heap.c_free_FUN_10005b30   ; 1000dfa4
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000dfa9
    MOV EAX,dword ptr [ESI + 0x20]      ; 1000dfac
    PUSH EAX                            ; 1000dfaf
    CALL crt_heap.c_free_FUN_10005b30   ; 1000dfb0
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000dfb5
    MOV EAX,dword ptr [ESI + 0x24]      ; 1000dfb8
    PUSH EAX                            ; 1000dfbb
    CALL crt_heap.c_free_FUN_10005b30   ; 1000dfbc
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000dfc1
    POP ESI                             ; 1000dfc4
        ;   Label: LAB_1000dfc4
    RET                                 ; 1000dfc5

