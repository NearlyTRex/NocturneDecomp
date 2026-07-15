; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__freebuf_FUN_10005c50(FILE *file)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
;
; XREF[1]:
;   crt_stdio.c__fclose_lk_FUN_10005470 at 1000548d
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005c50
        ;   Label: crt_stdio.c__freebuf_FUN_10005c50
    MOV ESI,dword ptr [ESP + 0x8]       ; 10005c51
    MOV EAX,dword ptr [ESI + 0xc]       ; 10005c55
    TEST AL,0x83                        ; 10005c58
    JZ 0x10005c87                       ; 10005c5a
        ;   XREF to: 10005c87 (CONDITIONAL_JUMP)  ; LAB_10005c87
    TEST AL,0x8                         ; 10005c5c
    JZ 0x10005c87                       ; 10005c5e
        ;   XREF to: 10005c87 (CONDITIONAL_JUMP)  ; LAB_10005c87
    MOV EAX,dword ptr [ESI + 0x8]       ; 10005c60
    PUSH EAX                            ; 10005c63
    CALL crt_heap.c_free_FUN_10005b30   ; 10005c64
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 10005c69
    MOV dword ptr [ESI],0x0             ; 10005c6c
    AND dword ptr [ESI + 0xc],0xfffffbf7 ; 10005c72
    MOV dword ptr [ESI + 0x8],0x0       ; 10005c79
    MOV dword ptr [ESI + 0x4],0x0       ; 10005c80
    POP ESI                             ; 10005c87
        ;   Label: LAB_10005c87
    RET                                 ; 10005c88

