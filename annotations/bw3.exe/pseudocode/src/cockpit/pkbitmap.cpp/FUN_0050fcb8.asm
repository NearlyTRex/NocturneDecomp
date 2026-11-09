; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_0050fcb8(void)
;
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90 at 0050fb2d
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050fcb8
        ;   Label: cockpit_pkbitmap.cpp_FUN_0050fcb8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050fcb9
    PUSH EAX                            ; 0050fcbc
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 0050fcbd
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0050fcc2
    MOV dword ptr [EBP + 0x14],EAX      ; 0050fcc5
    ADD ESP,0x144                       ; 0050fcc8
    POP EBP                             ; 0050fcce
    POP EDI                             ; 0050fccf
    POP ESI                             ; 0050fcd0
    POP EBX                             ; 0050fcd1
    RET                                 ; 0050fcd2

