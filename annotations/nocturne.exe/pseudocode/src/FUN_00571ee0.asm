; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00571ee0(ulong param_1)
;
;
; XREF[1]:
;   crt_iostream.cpp_doallocate_FUN_00571dc7 at 00571dcc
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00571ee0
        ;   Label: FUN_00571ee0
    PUSH EDX                            ; 00571ee4
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00571ee5
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00571eea
    RET                                 ; 00571eed

