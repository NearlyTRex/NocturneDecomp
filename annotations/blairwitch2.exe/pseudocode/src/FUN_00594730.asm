; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00594730(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_00594f40 at 0059550f
;
; Referenced Globals:
;   undefined4 DAT_01c38b54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594730
        ;   Label: FUN_00594730
    PUSH ESI                            ; 00594731
    PUSH EDI                            ; 00594732
    PUSH EBP                            ; 00594733
    MOV ECX,dword ptr [ESP + 0x14]      ; 00594734
    MOV EDI,dword ptr [ESP + 0x18]      ; 00594738
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0059473c
    MOV EBX,dword ptr [EDI + 0x4]       ; 00594740
    MOV EDX,dword ptr [ECX + 0x8]       ; 00594743
    MOV EAX,dword ptr [ECX + 0x4]       ; 00594746
    MOV EBP,dword ptr [EDI + 0x8]       ; 00594749
    ADD EBX,EDX                         ; 0059474c
    ADD EAX,EBP                         ; 0059474e
    SUB EBX,EAX                         ; 00594750
    MOV EAX,EDX                         ; 00594752
    MOV EDX,dword ptr [ECX + 0x4]       ; 00594754
    SUB EAX,EDX                         ; 00594757
    MOV EDX,EAX                         ; 00594759
    CMP EDX,EBX                         ; 0059475b
    JGE 0x00594771                      ; 0059475d
        ;   XREF to: 00594771 (CONDITIONAL_JUMP)  ; LAB_00594771
    NEG EBX                             ; 0059475f
    CMP EDX,EBX                         ; 00594761
    JLE 0x00594778                      ; 00594763
        ;   XREF to: 00594778 (CONDITIONAL_JUMP)  ; LAB_00594778
    NEG EBX                             ; 00594765
    XOR EAX,EAX                         ; 00594767
    SAR EDX,0x1                         ; 00594769
    RCR EAX,0x1                         ; 0059476b
    IDIV EBX                            ; 0059476d
    JMP 0x0059477f                      ; 0059476f
        ;   XREF to: 0059477f (UNCONDITIONAL_JUMP)  ; LAB_0059477f
    MOV EAX,0x7fffffff                  ; 00594771
        ;   Label: LAB_00594771
    JMP 0x0059477f                      ; 00594776
        ;   XREF to: 0059477f (UNCONDITIONAL_JUMP)  ; LAB_0059477f
    NEG EBX                             ; 00594778
        ;   Label: LAB_00594778
    MOV EAX,0x80000000                  ; 0059477a
    MOV EBX,EAX                         ; 0059477f
        ;   Label: LAB_0059477f
    MOV EBP,dword ptr [ECX + 0x8]       ; 00594781
    MOV EAX,dword ptr [EDI + 0x8]       ; 00594784
    MOV EDX,EBX                         ; 00594787
    SUB EAX,EBP                         ; 00594789
    IMUL EDX                            ; 0059478b
    ADD EAX,EAX                         ; 0059478d
    ADC EDX,EDX                         ; 0059478f
    MOV EAX,EDX                         ; 00594791
    MOV EDX,dword ptr [ECX + 0x8]       ; 00594793
    ADD EAX,EDX                         ; 00594796
    MOV dword ptr [ESI + 0x8],EAX       ; 00594798
    MOV dword ptr [ESI + 0x4],EAX       ; 0059479b
    MOV EAX,dword ptr [EDI]             ; 0059479e
    SUB EAX,dword ptr [ECX]             ; 005947a0
    MOV EDX,EBX                         ; 005947a2
    IMUL EDX                            ; 005947a4
    ADD EAX,EAX                         ; 005947a6
    ADC EDX,EDX                         ; 005947a8
    MOV EAX,EDX                         ; 005947aa
    MOV EDX,dword ptr [ECX]             ; 005947ac
    ADD EAX,EDX                         ; 005947ae
    MOV dword ptr [ESI],EAX             ; 005947b0
    MOV AH,byte ptr [0x01c38b54]        ; 005947b2 | DAT_01c38b54
    MOV dword ptr [ESI + 0x10],0xffffffff ; 005947b8
    TEST AH,0x4                         ; 005947bf
    JNZ 0x005947c9                      ; 005947c2
        ;   XREF to: 005947c9 (CONDITIONAL_JUMP)  ; LAB_005947c9
    POP EBP                             ; 005947c4
    POP EDI                             ; 005947c5
    POP ESI                             ; 005947c6
    POP EBX                             ; 005947c7
    RET                                 ; 005947c8
    MOV EAX,dword ptr [EDI + 0x20]      ; 005947c9
        ;   Label: LAB_005947c9
    MOV EDI,dword ptr [ECX + 0x20]      ; 005947cc
    MOV EDX,EBX                         ; 005947cf
    SUB EAX,EDI                         ; 005947d1
    IMUL EDX                            ; 005947d3
    ADD EAX,EAX                         ; 005947d5
    ADC EDX,EDX                         ; 005947d7
    MOV EAX,EDX                         ; 005947d9
    MOV EDX,dword ptr [ECX + 0x20]      ; 005947db
    ADD EAX,EDX                         ; 005947de
    MOV dword ptr [ESI + 0x20],EAX      ; 005947e0
    POP EBP                             ; 005947e3
    POP EDI                             ; 005947e4
    POP ESI                             ; 005947e5
    POP EBX                             ; 005947e6
    RET                                 ; 005947e7

