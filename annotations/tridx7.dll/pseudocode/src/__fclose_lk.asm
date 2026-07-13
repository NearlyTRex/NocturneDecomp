; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __fclose_lk(FILE *param_1)
;
;
; XREF[1]:
;   _fclose at 10005457
;
; Called Functions:
;   __close
;   __flush
;   __freebuf
;   FUN_10005b30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005470
        ;   Label: __fclose_lk
    PUSH EDI                            ; 10005471
    MOV EDI,0xffffffff                  ; 10005472
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005477
    TEST byte ptr [ESI + 0xc],0x83      ; 1000547b
    JZ 0x100054c3                       ; 1000547f
        ;   XREF to: 100054c3 (CONDITIONAL_JUMP)  ; LAB_100054c3
    PUSH ESI                            ; 10005481
    CALL __flush                        ; 10005482
        ;   XREF to: 10005d10 (UNCONDITIONAL_CALL)  ; int __flush(FILE * _File)
    ADD ESP,0x4                         ; 10005487
    MOV EDI,EAX                         ; 1000548a
    PUSH ESI                            ; 1000548c
    CALL __freebuf                      ; 1000548d
        ;   XREF to: 10005c50 (UNCONDITIONAL_CALL)  ; void __freebuf(FILE * _File)
    ADD ESP,0x4                         ; 10005492
    MOV EAX,dword ptr [ESI + 0x10]      ; 10005495
    PUSH EAX                            ; 10005498
    CALL __close                        ; 10005499
        ;   XREF to: 10005b50 (UNCONDITIONAL_CALL)  ; int __close(int _FileHandle)
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
    CALL FUN_10005b30                   ; 100054b4
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    MOV dword ptr [ESI + 0x1c],0x0      ; 100054b9
    ADD ESP,0x4                         ; 100054c0
    MOV dword ptr [ESI + 0xc],0x0       ; 100054c3
        ;   Label: LAB_100054c3
    MOV EAX,EDI                         ; 100054ca
    POP EDI                             ; 100054cc
    POP ESI                             ; 100054cd
    RET                                 ; 100054ce

