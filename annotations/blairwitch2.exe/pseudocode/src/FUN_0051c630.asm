; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051c630(int param_1,int param_2)
;
;
; XREF[4]:
;   FUN_0051cb20 at 0051cd3f
;   FUN_0051da80 at 0051ddb0
;   FUN_0051e130 at 0051e2d0
;   FUN_0059a5d0 at 0059a872
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c630
        ;   Label: FUN_0051c630
    PUSH ESI                            ; 0051c631
    PUSH EDI                            ; 0051c632
    PUSH EBP                            ; 0051c633
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051c634
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051c638
    MOV ESI,0x7fffffff                  ; 0051c63c
    XOR EAX,EAX                         ; 0051c641
    TEST EBP,EBP                        ; 0051c643
    JLE 0x0051c65a                      ; 0051c645
        ;   XREF to: 0051c65a (CONDITIONAL_JUMP)  ; LAB_0051c65a
    MOV ECX,EBX                         ; 0051c647
    MOV EDX,dword ptr [ECX + 0x8]       ; 0051c649
        ;   Label: LAB_0051c649
    CMP ESI,EDX                         ; 0051c64c
    JLE 0x0051c652                      ; 0051c64e
        ;   XREF to: 0051c652 (CONDITIONAL_JUMP)  ; LAB_0051c652
    MOV ESI,EDX                         ; 0051c650
    INC EAX                             ; 0051c652
        ;   Label: LAB_0051c652
    ADD ECX,0x30                        ; 0051c653
    CMP EAX,EBP                         ; 0051c656
    JL 0x0051c649                       ; 0051c658
        ;   XREF to: 0051c649 (CONDITIONAL_JUMP)  ; LAB_0051c649
    XOR EDI,EDI                         ; 0051c65a
        ;   Label: LAB_0051c65a
    TEST EBP,EBP                        ; 0051c65c
    JLE 0x0051c671                      ; 0051c65e
        ;   XREF to: 0051c671 (CONDITIONAL_JUMP)  ; LAB_0051c671
    MOV ECX,EBX                         ; 0051c660
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051c662
        ;   Label: LAB_0051c662
    TEST EBX,EBX                        ; 0051c665
    JNZ 0x0051c676                      ; 0051c667
        ;   XREF to: 0051c676 (CONDITIONAL_JUMP)  ; LAB_0051c676
    INC EDI                             ; 0051c669
    ADD ECX,0x30                        ; 0051c66a
    CMP EDI,EBP                         ; 0051c66d
    JL 0x0051c662                       ; 0051c66f
        ;   XREF to: 0051c662 (CONDITIONAL_JUMP)  ; LAB_0051c662
    POP EBP                             ; 0051c671
        ;   Label: LAB_0051c671
    POP EDI                             ; 0051c672
    POP ESI                             ; 0051c673
    POP EBX                             ; 0051c674
    RET                                 ; 0051c675
    MOV EDX,ESI                         ; 0051c676
        ;   Label: LAB_0051c676
    MOV EAX,dword ptr [ECX + 0x18]      ; 0051c678
    IMUL EDX                            ; 0051c67b
    IDIV EBX                            ; 0051c67d
    MOV dword ptr [ECX + 0x18],EAX      ; 0051c67f
    MOV EDX,ESI                         ; 0051c682
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051c684
    MOV EAX,dword ptr [ECX + 0x1c]      ; 0051c687
    IMUL EDX                            ; 0051c68a
    IDIV EBX                            ; 0051c68c
    MOV EDX,0x1000000                   ; 0051c68e
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051c693
    MOV dword ptr [ECX + 0x1c],EAX      ; 0051c696
    MOV EAX,ESI                         ; 0051c699
    IMUL EDX                            ; 0051c69b
    IDIV EBX                            ; 0051c69d
    MOV dword ptr [ECX + 0x8],EAX       ; 0051c69f
    INC EDI                             ; 0051c6a2
    ADD ECX,0x30                        ; 0051c6a3
    CMP EDI,EBP                         ; 0051c6a6
    JL 0x0051c662                       ; 0051c6a8
        ;   XREF to: 0051c662 (CONDITIONAL_JUMP)  ; LAB_0051c662
    POP EBP                             ; 0051c6aa
    POP EDI                             ; 0051c6ab
    POP ESI                             ; 0051c6ac
    POP EBX                             ; 0051c6ad
    RET                                 ; 0051c6ae

