; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_write_multi_char_FUN_10006970(int ch,int count,FILE *file,int *pnumwritten)
;
; Parameters:
; int              Stack[0x4]:4   ch
; int              Stack[0x8]:4   count
; FILE *           Stack[0xc]:4   file
; int *            Stack[0x10]:4   pnumwritten
;
; XREF[1]:
;   crt_stdio.c__output_FUN_10005f40 at 10006724
;
; Called Functions:
;   crt_stdio.c_write_char_FUN_10006920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10006970
        ;   Label: crt_stdio.c_write_multi_char_FUN_10006970
    PUSH ESI                            ; 10006971
    MOV ESI,dword ptr [ESP + 0xc]       ; 10006972
    PUSH EDI                            ; 10006976
    MOV EDI,dword ptr [ESP + 0x14]      ; 10006977
    PUSH EBP                            ; 1000697b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 1000697c
    MOV EBP,dword ptr [ESP + 0x20]      ; 10006980
    MOV EAX,EDI                         ; 10006984
        ;   Label: LAB_10006984
    DEC EDI                             ; 10006986
    TEST EAX,EAX                        ; 10006987
    JLE 0x1000699c                      ; 10006989
        ;   XREF to: 1000699c (CONDITIONAL_JUMP)  ; LAB_1000699c
    PUSH EBP                            ; 1000698b
    PUSH EBX                            ; 1000698c
    PUSH ESI                            ; 1000698d
    CALL crt_stdio.c_write_char_FUN_10006920 ; 1000698e
        ;   XREF to: 10006920 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_char_FUN_10006920(int ch, FILE * file, int * pnumwritten)
    ADD ESP,0xc                         ; 10006993
    CMP dword ptr [EBP],-0x1            ; 10006996
    JNZ 0x10006984                      ; 1000699a
        ;   XREF to: 10006984 (CONDITIONAL_JUMP)  ; LAB_10006984
    POP EBP                             ; 1000699c
        ;   Label: LAB_1000699c
    POP EDI                             ; 1000699d
    POP ESI                             ; 1000699e
    POP EBX                             ; 1000699f
    RET                                 ; 100069a0

