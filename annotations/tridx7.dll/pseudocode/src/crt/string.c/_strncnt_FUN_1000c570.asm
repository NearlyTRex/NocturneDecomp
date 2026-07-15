; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; size_t __cdecl crt_string_c__strncnt_FUN_1000c570(char *str,size_t count)
;
; Parameters:
; char *           Stack[0x4]:4   str
; size_t           Stack[0x8]:4   count
;
; XREF[1]:
;   crt_locale.c___crtLCMapStringA_FUN_1000c340 at 1000c3b5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 1000c570
        ;   Label: crt_string.c__strncnt_FUN_1000c570
    PUSH ESI                            ; 1000c574
    MOV EAX,dword ptr [ESP + 0xc]       ; 1000c575
    PUSH EDI                            ; 1000c579
    MOV EDI,EDX                         ; 1000c57a
    TEST EAX,EAX                        ; 1000c57c
    LEA ESI,[EAX + -0x1]                ; 1000c57e
    JZ 0x1000c590                       ; 1000c581
        ;   XREF to: 1000c590 (CONDITIONAL_JUMP)  ; LAB_1000c590
    CMP byte ptr [EDI],0x0              ; 1000c583
        ;   Label: LAB_1000c583
    JZ 0x1000c595                       ; 1000c586
        ;   XREF to: 1000c595 (CONDITIONAL_JUMP)  ; LAB_1000c595
    INC EDI                             ; 1000c588
    MOV ECX,ESI                         ; 1000c589
    DEC ESI                             ; 1000c58b
    TEST ECX,ECX                        ; 1000c58c
    JNZ 0x1000c583                      ; 1000c58e
        ;   XREF to: 1000c583 (CONDITIONAL_JUMP)  ; LAB_1000c583
    CMP byte ptr [EDI],0x0              ; 1000c590
        ;   Label: LAB_1000c590
    JNZ 0x1000c599                      ; 1000c593
        ;   XREF to: 1000c599 (CONDITIONAL_JUMP)  ; LAB_1000c599
    SUB EDI,EDX                         ; 1000c595
        ;   Label: LAB_1000c595
    MOV EAX,EDI                         ; 1000c597
    POP EDI                             ; 1000c599
        ;   Label: LAB_1000c599
    POP ESI                             ; 1000c59a
    RET                                 ; 1000c59b

