; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00570f50(ulong param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00570f60 at 00570fa9
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00570f50
        ;   Label: crt_unknown.c_FUN_00570f50
    PUSH EDX                            ; 00570f54
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00570f55
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00570f5a
    RET                                 ; 00570f5d

