; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005b7820(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)
;
;
; XREF[1]:
;   crt_stdlib.c__qsort_FUN_005b78b8 at 005b7b25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7820
        ;   Label: crt_unknown.c_FUN_005b7820
    PUSH ESI                            ; 005b7821
    PUSH EDI                            ; 005b7822
    PUSH ES                             ; 005b7823
    PUSH FS                             ; 005b7824
    PUSH GS                             ; 005b7826
    PUSH EBP                            ; 005b7828
    MOV EBP,dword ptr [ESP + 0x20]      ; 005b7829
    MOV ESI,dword ptr [ESP + 0x28]      ; 005b782d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005b7831
    MOV EDX,dword ptr [ESP + 0x24]      ; 005b7835
    PUSH EDX                            ; 005b7839
    PUSH EBP                            ; 005b783a
    CALL EDI                            ; 005b783b
    ADD ESP,0x8                         ; 005b783d
    TEST EAX,EAX                        ; 005b7840
    JLE 0x005b7860                      ; 005b7842
        ;   XREF to: 005b7860 (CONDITIONAL_JUMP)  ; LAB_005b7860
    PUSH ESI                            ; 005b7844
    PUSH EBP                            ; 005b7845
    CALL EDI                            ; 005b7846
    ADD ESP,0x8                         ; 005b7848
    TEST EAX,EAX                        ; 005b784b
    JLE 0x005b786b                      ; 005b784d
        ;   XREF to: 005b786b (CONDITIONAL_JUMP)  ; LAB_005b786b
    PUSH ESI                            ; 005b784f
    MOV ECX,dword ptr [ESP + 0x28]      ; 005b7850
    PUSH ECX                            ; 005b7854
    CALL EDI                            ; 005b7855
    ADD ESP,0x8                         ; 005b7857
    TEST EAX,EAX                        ; 005b785a
    JLE 0x005b787e                      ; 005b785c
        ;   XREF to: 005b787e (CONDITIONAL_JUMP)  ; LAB_005b787e
    JMP 0x005b7882                      ; 005b785e
        ;   XREF to: 005b7882 (UNCONDITIONAL_JUMP)  ; LAB_005b7882
    PUSH ESI                            ; 005b7860
        ;   Label: LAB_005b7860
    PUSH EBP                            ; 005b7861
    CALL EDI                            ; 005b7862
    ADD ESP,0x8                         ; 005b7864
    TEST EAX,EAX                        ; 005b7867
    JL 0x005b786f                       ; 005b7869
        ;   XREF to: 005b786f (CONDITIONAL_JUMP)  ; LAB_005b786f
    MOV EAX,EBP                         ; 005b786b
        ;   Label: LAB_005b786b
    JMP 0x005b7886                      ; 005b786d
        ;   XREF to: 005b7886 (UNCONDITIONAL_JUMP)  ; LAB_005b7886
    PUSH ESI                            ; 005b786f
        ;   Label: LAB_005b786f
    MOV EBX,dword ptr [ESP + 0x28]      ; 005b7870
    PUSH EBX                            ; 005b7874
    CALL EDI                            ; 005b7875
    ADD ESP,0x8                         ; 005b7877
    TEST EAX,EAX                        ; 005b787a
    JLE 0x005b7882                      ; 005b787c
        ;   XREF to: 005b7882 (CONDITIONAL_JUMP)  ; LAB_005b7882
    MOV EAX,ESI                         ; 005b787e
        ;   Label: LAB_005b787e
    JMP 0x005b7886                      ; 005b7880
        ;   XREF to: 005b7886 (UNCONDITIONAL_JUMP)  ; LAB_005b7886
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b7882
        ;   Label: LAB_005b7882
    POP EBP                             ; 005b7886
        ;   Label: LAB_005b7886
    POP GS                              ; 005b7887
    POP FS                              ; 005b7889
    POP ES                              ; 005b788b
    POP EDI                             ; 005b788c
    POP ESI                             ; 005b788d
    POP EBX                             ; 005b788e
    RET                                 ; 005b788f

