; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060c640()
;
;
; XREF[1]:
;   crt_environ.c_staticInit_FUN_0060c650 at 0060c699
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060c640
        ;   Label: crt_unknown.c_FUN_0060c640
    PUSH EDX                            ; 0060c644
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060c645 | void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060c64a
    RET                                 ; 0060c64d

