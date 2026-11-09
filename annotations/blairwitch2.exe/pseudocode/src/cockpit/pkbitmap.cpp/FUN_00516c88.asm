; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_00516c88(void)
;
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60 at 00516afd
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00516c88
        ;   Label: cockpit_pkbitmap.cpp_FUN_00516c88
    MOV EAX,dword ptr [EBP + 0x14]      ; 00516c89
    PUSH EAX                            ; 00516c8c
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 00516c8d
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00516c92
    MOV dword ptr [EBP + 0x14],EAX      ; 00516c95
    ADD ESP,0x144                       ; 00516c98
    POP EBP                             ; 00516c9e
    POP EDI                             ; 00516c9f
    POP ESI                             ; 00516ca0
    POP EBX                             ; 00516ca1
    RET                                 ; 00516ca2

