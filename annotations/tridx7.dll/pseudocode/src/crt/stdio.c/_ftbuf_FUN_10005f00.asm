; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__ftbuf_FUN_10005f00(int flag,FILE *file)
;
; Parameters:
; int              Stack[0x4]:4   flag
; FILE *           Stack[0x8]:4   file
;
; XREF[1]:
;   crt_stdio.c_fprintf_FUN_100054d0 at 10005502
;
; Called Functions:
;   crt_stdio.c__flush_FUN_10005d10
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x0       ; 10005f00
        ;   Label: crt_stdio.c__ftbuf_FUN_10005f00
    PUSH ESI                            ; 10005f05
    JZ 0x10005f36                       ; 10005f06
        ;   XREF to: 10005f36 (CONDITIONAL_JUMP)  ; LAB_10005f36
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005f08
    TEST byte ptr [ESI + 0xd],0x10      ; 10005f0c
    JZ 0x10005f36                       ; 10005f10
        ;   XREF to: 10005f36 (CONDITIONAL_JUMP)  ; LAB_10005f36
    PUSH ESI                            ; 10005f12
    CALL crt_stdio.c__flush_FUN_10005d10 ; 10005f13
        ;   XREF to: 10005d10 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__flush_FUN_10005d10(FILE * file)
    AND dword ptr [ESI + 0xc],0xffffeeff ; 10005f18
    MOV dword ptr [ESI + 0x18],0x0      ; 10005f1f
    ADD ESP,0x4                         ; 10005f26
    MOV dword ptr [ESI],0x0             ; 10005f29
    MOV dword ptr [ESI + 0x8],0x0       ; 10005f2f
    POP ESI                             ; 10005f36
        ;   Label: LAB_10005f36
    RET                                 ; 10005f37

