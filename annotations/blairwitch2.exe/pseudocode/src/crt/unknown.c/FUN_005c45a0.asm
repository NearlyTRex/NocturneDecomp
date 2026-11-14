; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c45a0(ulong param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c45b0 at 005c45f9
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005b8580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c45a0
        ;   Label: crt_unknown.c_FUN_005c45a0
    PUSH EDX                            ; 005c45a4
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005c45a5
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005c45aa
    RET                                 ; 005c45ad

