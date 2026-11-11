; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005af550(ulong param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005af560 at 005af5a9
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005a3650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005af550
        ;   Label: crt_unknown.c_FUN_005af550
    PUSH EDX                            ; 005af554
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005af555
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005af55a
    RET                                 ; 005af55d

