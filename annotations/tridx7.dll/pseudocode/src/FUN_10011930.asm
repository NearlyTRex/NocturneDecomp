; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * FUN_10011930(uint *param_1,uint *param_2)
;
;
; XREF[1]:
;   FUN_100117b0 at 100117cc
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 10011930
        ;   Label: FUN_10011930
    MOV EDI,dword ptr [ESP + 0x8]       ; 10011931
    JMP 0x100119a1                      ; 10011935
        ;   XREF to: 100119a1 (UNCONDITIONAL_JUMP)  ; LAB_100119a1
    MOV ECX,dword ptr [ESP + 0xc]       ; 100119a1
        ;   Label: LAB_100119a1
    TEST ECX,0x3                        ; 100119a5
    JZ 0x100119c6                       ; 100119ab
        ;   XREF to: 100119c6 (CONDITIONAL_JUMP)  ; LAB_100119c6
    MOV DL,byte ptr [ECX]               ; 100119ad
        ;   Label: LAB_100119ad
    INC ECX                             ; 100119af
    TEST DL,DL                          ; 100119b0
    JZ 0x10011a18                       ; 100119b2
        ;   XREF to: 10011a18 (CONDITIONAL_JUMP)  ; LAB_10011a18
    MOV byte ptr [EDI],DL               ; 100119b4
    INC EDI                             ; 100119b6
    TEST ECX,0x3                        ; 100119b7
    JNZ 0x100119ad                      ; 100119bd
        ;   XREF to: 100119ad (CONDITIONAL_JUMP)  ; LAB_100119ad
    JMP 0x100119c6                      ; 100119bf
        ;   XREF to: 100119c6 (UNCONDITIONAL_JUMP)  ; LAB_100119c6
    MOV dword ptr [EDI],EDX             ; 100119c1
        ;   Label: LAB_100119c1
    ADD EDI,0x4                         ; 100119c3
    MOV EDX,0x7efefeff                  ; 100119c6
        ;   Label: LAB_100119c6
    MOV EAX,dword ptr [ECX]             ; 100119cb
    ADD EDX,EAX                         ; 100119cd
    XOR EAX,0xffffffff                  ; 100119cf
    XOR EAX,EDX                         ; 100119d2
    MOV EDX,dword ptr [ECX]             ; 100119d4
    ADD ECX,0x4                         ; 100119d6
    TEST EAX,0x81010100                 ; 100119d9
    JZ 0x100119c1                       ; 100119de
        ;   XREF to: 100119c1 (CONDITIONAL_JUMP)  ; LAB_100119c1
    TEST DL,DL                          ; 100119e0
    JZ 0x10011a18                       ; 100119e2
        ;   XREF to: 10011a18 (CONDITIONAL_JUMP)  ; LAB_10011a18
    TEST DH,DH                          ; 100119e4
    JZ 0x10011a0f                       ; 100119e6
        ;   XREF to: 10011a0f (CONDITIONAL_JUMP)  ; LAB_10011a0f
    TEST EDX,0xff0000                   ; 100119e8
    JZ 0x10011a02                       ; 100119ee
        ;   XREF to: 10011a02 (CONDITIONAL_JUMP)  ; LAB_10011a02
    TEST EDX,0xff000000                 ; 100119f0
    JZ 0x100119fa                       ; 100119f6
        ;   XREF to: 100119fa (CONDITIONAL_JUMP)  ; LAB_100119fa
    JMP 0x100119c1                      ; 100119f8
        ;   XREF to: 100119c1 (UNCONDITIONAL_JUMP)  ; LAB_100119c1
    MOV dword ptr [EDI],EDX             ; 100119fa
        ;   Label: LAB_100119fa
    MOV EAX,dword ptr [ESP + 0x8]       ; 100119fc
    POP EDI                             ; 10011a00
    RET                                 ; 10011a01
    MOV word ptr [EDI],DX               ; 10011a02
        ;   Label: LAB_10011a02
    MOV EAX,dword ptr [ESP + 0x8]       ; 10011a05
    MOV byte ptr [EDI + 0x2],0x0        ; 10011a09
    POP EDI                             ; 10011a0d
    RET                                 ; 10011a0e
    MOV word ptr [EDI],DX               ; 10011a0f
        ;   Label: LAB_10011a0f
    MOV EAX,dword ptr [ESP + 0x8]       ; 10011a12
    POP EDI                             ; 10011a16
    RET                                 ; 10011a17
    MOV byte ptr [EDI],DL               ; 10011a18
        ;   Label: LAB_10011a18
    MOV EAX,dword ptr [ESP + 0x8]       ; 10011a1a
    POP EDI                             ; 10011a1e
    RET                                 ; 10011a1f

