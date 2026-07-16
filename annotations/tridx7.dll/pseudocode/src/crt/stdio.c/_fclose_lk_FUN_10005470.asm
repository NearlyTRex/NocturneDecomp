; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__fclose_lk_FUN_10005470(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[1]:
;   crt_stdio.c__fclose_FUN_10005430 at 10005457
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   crt_io.c__close_FUN_10005b50
;   crt_stdio.c__flush_FUN_10005d10
;   crt_stdio.c__freebuf_FUN_10005c50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005470
        ;   Label: crt_stdio.c__fclose_lk_FUN_10005470
    PUSH EDI                            ; 10005471
    MOV EDI,0xffffffff                  ; 10005472
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005477
    TEST byte ptr [ESI + 0xc],0x83      ; 1000547b
    JZ 0x100054c3                       ; 1000547f
        ;   XREF to: 100054c3 (CONDITIONAL_JUMP)  ; LAB_100054c3
    PUSH ESI                            ; 10005481
    CALL crt_stdio.c__flush_FUN_10005d10 ; 10005482
        ;   XREF to: 10005d10 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__flush_FUN_10005d10(_FILE * file)
    ADD ESP,0x4                         ; 10005487
    MOV EDI,EAX                         ; 1000548a
    PUSH ESI                            ; 1000548c
    CALL crt_stdio.c__freebuf_FUN_10005c50 ; 1000548d
        ;   XREF to: 10005c50 (UNCONDITIONAL_CALL)  ; void crt_stdio.c__freebuf_FUN_10005c50(_FILE * file)
    ADD ESP,0x4                         ; 10005492
    MOV EAX,dword ptr [ESI + 0x10]      ; 10005495
    PUSH EAX                            ; 10005498
    CALL crt_io.c__close_FUN_10005b50   ; 10005499
        ;   XREF to: 10005b50 (UNCONDITIONAL_CALL)  ; int crt_io.c__close_FUN_10005b50(int file_handle)
    ADD ESP,0x4                         ; 1000549e
    TEST EAX,EAX                        ; 100054a1
    JGE 0x100054ac                      ; 100054a3
        ;   XREF to: 100054ac (CONDITIONAL_JUMP)  ; LAB_100054ac
    MOV EDI,0xffffffff                  ; 100054a5
    JMP 0x100054c3                      ; 100054aa
        ;   XREF to: 100054c3 (UNCONDITIONAL_JUMP)  ; LAB_100054c3
    MOV EAX,dword ptr [ESI + 0x1c]      ; 100054ac
        ;   Label: LAB_100054ac
    TEST EAX,EAX                        ; 100054af
    JZ 0x100054c3                       ; 100054b1
        ;   XREF to: 100054c3 (CONDITIONAL_JUMP)  ; LAB_100054c3
    PUSH EAX                            ; 100054b3
    CALL crt_heap.c_free_FUN_10005b30   ; 100054b4
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    MOV dword ptr [ESI + 0x1c],0x0      ; 100054b9
    ADD ESP,0x4                         ; 100054c0
    MOV dword ptr [ESI + 0xc],0x0       ; 100054c3
        ;   Label: LAB_100054c3
    MOV EAX,EDI                         ; 100054ca
    POP EDI                             ; 100054cc
    POP ESI                             ; 100054cd
    RET                                 ; 100054ce

