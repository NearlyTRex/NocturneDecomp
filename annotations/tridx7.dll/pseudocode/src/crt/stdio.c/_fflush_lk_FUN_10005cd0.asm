; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__fflush_lk_FUN_10005cd0(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[2]:
;   crt_stdio.c__flsall_FUN_10005d90 at 10005dec
;   crt_stdio.c_fflush_FUN_10005c90 at 10005cb1
;
; Called Functions:
;   crt_io.c__commit_FUN_10008e80
;   crt_stdio.c__flush_FUN_10005d10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005cd0
        ;   Label: crt_stdio.c__fflush_lk_FUN_10005cd0
    MOV ESI,dword ptr [ESP + 0x8]       ; 10005cd1
    PUSH ESI                            ; 10005cd5
    CALL crt_stdio.c__flush_FUN_10005d10 ; 10005cd6
        ;   XREF to: 10005d10 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__flush_FUN_10005d10(_FILE * file)
    ADD ESP,0x4                         ; 10005cdb
    TEST EAX,EAX                        ; 10005cde
    JZ 0x10005ce9                       ; 10005ce0
        ;   XREF to: 10005ce9 (CONDITIONAL_JUMP)  ; LAB_10005ce9
    MOV EAX,0xffffffff                  ; 10005ce2
    POP ESI                             ; 10005ce7
    RET                                 ; 10005ce8
    TEST byte ptr [ESI + 0xd],0x40      ; 10005ce9
        ;   Label: LAB_10005ce9
    JZ 0x10005d08                       ; 10005ced
        ;   XREF to: 10005d08 (CONDITIONAL_JUMP)  ; LAB_10005d08
    MOV EAX,dword ptr [ESI + 0x10]      ; 10005cef
    PUSH EAX                            ; 10005cf2
    CALL crt_io.c__commit_FUN_10008e80  ; 10005cf3
        ;   XREF to: 10008e80 (UNCONDITIONAL_CALL)  ; int crt_io.c__commit_FUN_10008e80(int fh)
    ADD ESP,0x4                         ; 10005cf8
    CMP EAX,0x1                         ; 10005cfb
    MOV EAX,0x0                         ; 10005cfe
    POP ESI                             ; 10005d03
    ADC EAX,-0x1                        ; 10005d04
    RET                                 ; 10005d07
    XOR EAX,EAX                         ; 10005d08
        ;   Label: LAB_10005d08
    POP ESI                             ; 10005d0a
    RET                                 ; 10005d0b

