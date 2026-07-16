; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fflush_FUN_10005c90(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; Called Functions:
;   crt_stdio.c__fflush_lk_FUN_10005cd0
;   crt_stdio.c__flsall_FUN_10005d90
;   crt_thread.c__lock_file_FUN_10005a30
;   crt_thread.c__unlock_file_FUN_10005aa0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005c90
        ;   Label: crt_stdio.c_fflush_FUN_10005c90
    PUSH EDI                            ; 10005c91
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005c92
    TEST ESI,ESI                        ; 10005c96
    JNZ 0x10005ca7                      ; 10005c98
        ;   XREF to: 10005ca7 (CONDITIONAL_JUMP)  ; LAB_10005ca7
    PUSH 0x0                            ; 10005c9a
    CALL crt_stdio.c__flsall_FUN_10005d90 ; 10005c9c
        ;   XREF to: 10005d90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__flsall_FUN_10005d90(int flag)
    ADD ESP,0x4                         ; 10005ca1
    POP EDI                             ; 10005ca4
    POP ESI                             ; 10005ca5
    RET                                 ; 10005ca6
    PUSH ESI                            ; 10005ca7
        ;   Label: LAB_10005ca7
    CALL crt_thread.c__lock_file_FUN_10005a30 ; 10005ca8
        ;   XREF to: 10005a30 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_file_FUN_10005a30(_FILE * file)
    ADD ESP,0x4                         ; 10005cad
    PUSH ESI                            ; 10005cb0
    CALL crt_stdio.c__fflush_lk_FUN_10005cd0 ; 10005cb1
        ;   XREF to: 10005cd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__fflush_lk_FUN_10005cd0(_FILE * file)
    ADD ESP,0x4                         ; 10005cb6
    MOV EDI,EAX                         ; 10005cb9
    PUSH ESI                            ; 10005cbb
    CALL crt_thread.c__unlock_file_FUN_10005aa0 ; 10005cbc
        ;   XREF to: 10005aa0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_file_FUN_10005aa0(_FILE * file)
    ADD ESP,0x4                         ; 10005cc1
    MOV EAX,EDI                         ; 10005cc4
    POP EDI                             ; 10005cc6
    POP ESI                             ; 10005cc7
    RET                                 ; 10005cc8

