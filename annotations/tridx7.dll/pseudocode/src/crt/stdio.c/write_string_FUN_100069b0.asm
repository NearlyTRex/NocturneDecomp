; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_write_string_FUN_100069b0(char *str,int len,FILE *file,int *pnumwritten)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int              Stack[0x8]:4   len
; FILE *           Stack[0xc]:4   file
; int *            Stack[0x10]:4   pnumwritten
;
; XREF[1]:
;   crt_stdio.c__output_FUN_10005f40 at 10006743
;
; Called Functions:
;   crt_stdio.c_write_char_FUN_10006920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 100069b0
        ;   Label: crt_stdio.c_write_string_FUN_100069b0
    PUSH ESI                            ; 100069b1
    MOV ESI,dword ptr [ESP + 0xc]       ; 100069b2
    PUSH EDI                            ; 100069b6
    MOV EDI,dword ptr [ESP + 0x14]      ; 100069b7
    PUSH EBP                            ; 100069bb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 100069bc
    MOV EBP,dword ptr [ESP + 0x20]      ; 100069c0
    MOV EAX,EDI                         ; 100069c4
        ;   Label: LAB_100069c4
    DEC EDI                             ; 100069c6
    TEST EAX,EAX                        ; 100069c7
    JLE 0x100069e2                      ; 100069c9
        ;   XREF to: 100069e2 (CONDITIONAL_JUMP)  ; LAB_100069e2
    MOV EAX,ESI                         ; 100069cb
    PUSH EBP                            ; 100069cd
    INC ESI                             ; 100069ce
    PUSH EBX                            ; 100069cf
    MOVSX ECX,byte ptr [EAX]            ; 100069d0
    PUSH ECX                            ; 100069d3
    CALL crt_stdio.c_write_char_FUN_10006920 ; 100069d4
        ;   XREF to: 10006920 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_char_FUN_10006920(int ch, FILE * file, int * pnumwritten)
    ADD ESP,0xc                         ; 100069d9
    CMP dword ptr [EBP],-0x1            ; 100069dc
    JNZ 0x100069c4                      ; 100069e0
        ;   XREF to: 100069c4 (CONDITIONAL_JUMP)  ; LAB_100069c4
    POP EBP                             ; 100069e2
        ;   Label: LAB_100069e2
    POP EDI                             ; 100069e3
    POP ESI                             ; 100069e4
    POP EBX                             ; 100069e5
    RET                                 ; 100069e6

