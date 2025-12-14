; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void * crt_stdlib.c_median_of_3_FUN_005fdea0(void * a, void * b, void * c, QSORT_COMPARATOR compar)
;
; Parameters:
; void *           Stack[0x4]:4   a
; void *           Stack[0x8]:4   b
; void *           Stack[0xc]:4   c
; typedef QSORT_COMPARATOR QSORT_COMPARATOR_FUNC * Stack[0x10]:4   compar
;
; XREF[1]:
;   crt_stdlib.c_qsort_FUN_005fdf38 at 005fe202
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fdea0
        ;   Label: crt_stdlib.c_median_of_3_FUN_005fdea0
    PUSH ESI                            ; 005fdea1
    PUSH EDI                            ; 005fdea2
    PUSH ES                             ; 005fdea3
    PUSH FS                             ; 005fdea4
    PUSH GS                             ; 005fdea6
    PUSH EBP                            ; 005fdea8
    MOV EBP,dword ptr [ESP + 0x20]      ; 005fdea9
    MOV ESI,dword ptr [ESP + 0x28]      ; 005fdead
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005fdeb1
    MOV EDX,dword ptr [ESP + 0x24]      ; 005fdeb5
    PUSH EDX                            ; 005fdeb9
    PUSH EBP                            ; 005fdeba
    CALL EDI                            ; 005fdebb
    ADD ESP,0x8                         ; 005fdebd
    TEST EAX,EAX                        ; 005fdec0
    JLE 0x005fdee0                      ; 005fdec2
        ;   XREF to: 005fdee0 (CONDITIONAL_JUMP)  ; LAB_005fdee0
    PUSH ESI                            ; 005fdec4
    PUSH EBP                            ; 005fdec5
    CALL EDI                            ; 005fdec6
    ADD ESP,0x8                         ; 005fdec8
    TEST EAX,EAX                        ; 005fdecb
    JLE 0x005fdeeb                      ; 005fdecd
        ;   XREF to: 005fdeeb (CONDITIONAL_JUMP)  ; LAB_005fdeeb
    PUSH ESI                            ; 005fdecf
    MOV ECX,dword ptr [ESP + 0x28]      ; 005fded0
    PUSH ECX                            ; 005fded4
    CALL EDI                            ; 005fded5
    ADD ESP,0x8                         ; 005fded7
    TEST EAX,EAX                        ; 005fdeda
    JLE 0x005fdefe                      ; 005fdedc
        ;   XREF to: 005fdefe (CONDITIONAL_JUMP)  ; LAB_005fdefe
    JMP 0x005fdf02                      ; 005fdede
        ;   XREF to: 005fdf02 (UNCONDITIONAL_JUMP)  ; LAB_005fdf02
    PUSH ESI                            ; 005fdee0
        ;   Label: LAB_005fdee0
    PUSH EBP                            ; 005fdee1
    CALL EDI                            ; 005fdee2
    ADD ESP,0x8                         ; 005fdee4
    TEST EAX,EAX                        ; 005fdee7
    JL 0x005fdeef                       ; 005fdee9
        ;   XREF to: 005fdeef (CONDITIONAL_JUMP)  ; LAB_005fdeef
    MOV EAX,EBP                         ; 005fdeeb
        ;   Label: LAB_005fdeeb
    JMP 0x005fdf06                      ; 005fdeed
        ;   XREF to: 005fdf06 (UNCONDITIONAL_JUMP)  ; LAB_005fdf06
    PUSH ESI                            ; 005fdeef
        ;   Label: LAB_005fdeef
    MOV EBX,dword ptr [ESP + 0x28]      ; 005fdef0
    PUSH EBX                            ; 005fdef4
    CALL EDI                            ; 005fdef5
    ADD ESP,0x8                         ; 005fdef7
    TEST EAX,EAX                        ; 005fdefa
    JLE 0x005fdf02                      ; 005fdefc
        ;   XREF to: 005fdf02 (CONDITIONAL_JUMP)  ; LAB_005fdf02
    MOV EAX,ESI                         ; 005fdefe
        ;   Label: LAB_005fdefe
    JMP 0x005fdf06                      ; 005fdf00
        ;   XREF to: 005fdf06 (UNCONDITIONAL_JUMP)  ; LAB_005fdf06
    MOV EAX,dword ptr [ESP + 0x24]      ; 005fdf02
        ;   Label: LAB_005fdf02
    POP EBP                             ; 005fdf06
        ;   Label: LAB_005fdf06
    POP GS                              ; 005fdf07
    POP FS                              ; 005fdf09
    POP ES                              ; 005fdf0b
    POP EDI                             ; 005fdf0c
    POP ESI                             ; 005fdf0d
    POP EBX                             ; 005fdf0e
    RET                                 ; 005fdf0f

