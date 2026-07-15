; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c_strncnt_FUN_10011330(char *str,int count)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int              Stack[0x8]:4   count
;
; XREF[1]:
;   crt_locale.c___crtCompareStringA_FUN_10011040 at 10011084
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 10011330
        ;   Label: crt_string.c_strncnt_FUN_10011330
    PUSH ESI                            ; 10011334
    MOV EAX,dword ptr [ESP + 0xc]       ; 10011335
    PUSH EDI                            ; 10011339
    MOV EDI,EDX                         ; 1001133a
    TEST EAX,EAX                        ; 1001133c
    LEA ESI,[EAX + -0x1]                ; 1001133e
    JZ 0x10011350                       ; 10011341
        ;   XREF to: 10011350 (CONDITIONAL_JUMP)  ; LAB_10011350
    CMP byte ptr [EDI],0x0              ; 10011343
        ;   Label: LAB_10011343
    JZ 0x10011355                       ; 10011346
        ;   XREF to: 10011355 (CONDITIONAL_JUMP)  ; LAB_10011355
    INC EDI                             ; 10011348
    MOV ECX,ESI                         ; 10011349
    DEC ESI                             ; 1001134b
    TEST ECX,ECX                        ; 1001134c
    JNZ 0x10011343                      ; 1001134e
        ;   XREF to: 10011343 (CONDITIONAL_JUMP)  ; LAB_10011343
    CMP byte ptr [EDI],0x0              ; 10011350
        ;   Label: LAB_10011350
    JNZ 0x10011359                      ; 10011353
        ;   XREF to: 10011359 (CONDITIONAL_JUMP)  ; LAB_10011359
    SUB EDI,EDX                         ; 10011355
        ;   Label: LAB_10011355
    MOV EAX,EDI                         ; 10011357
    POP EDI                             ; 10011359
        ;   Label: LAB_10011359
    POP ESI                             ; 1001135a
    RET                                 ; 1001135b

