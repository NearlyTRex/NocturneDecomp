; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * crt_unknown_c_FUN_005c66a0(void)
;
;
; XREF[1]:
;   crt_unknown.c_InternalHeapAlloc_FUN_005c08e0 at 005c097b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c66a0
        ;   Label: crt_unknown.c_FUN_005c66a0
    PUSH EDI                            ; 005c66a1
    PUSH EBP                            ; 005c66a2
    XOR EBP,EBP                         ; 005c66a3
    TEST EAX,EAX                        ; 005c66a5
    JZ 0x005c6747                       ; 005c66a7
        ;   XREF to: 005c6747 (CONDITIONAL_JUMP)  ; LAB_005c6747
    LEA ECX,[EAX + 0xb]                 ; 005c66ad
    CMP ECX,EAX                         ; 005c66b0
    JC 0x005c6747                       ; 005c66b2
        ;   XREF to: 005c6747 (CONDITIONAL_JUMP)  ; LAB_005c6747
    MOV EDI,EBX                         ; 005c66b8
    AND CL,0xf8                         ; 005c66ba
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c66bd
    CMP ECX,0x10                        ; 005c66c0
    JNC 0x005c66ca                      ; 005c66c3
        ;   XREF to: 005c66ca (CONDITIONAL_JUMP)  ; LAB_005c66ca
    MOV ECX,0x10                        ; 005c66c5
    CMP ECX,EAX                         ; 005c66ca
        ;   Label: LAB_005c66ca
    JA 0x005c6747                       ; 005c66cc
        ;   XREF to: 005c6747 (CONDITIONAL_JUMP)  ; LAB_005c6747
    MOV EBX,dword ptr [EDI + 0x10]      ; 005c66d2
    MOV EAX,dword ptr [EDI + 0xc]       ; 005c66d5
    CMP ECX,EBX                         ; 005c66d8
    JA 0x005c66e1                       ; 005c66da
        ;   XREF to: 005c66e1 (CONDITIONAL_JUMP)  ; LAB_005c66e1
    MOV EAX,dword ptr [EDI + 0x28]      ; 005c66dc
    XOR EBX,EBX                         ; 005c66df
    LEA ESI,[EDI + 0x20]                ; 005c66e1
        ;   Label: LAB_005c66e1
    MOV EDX,dword ptr [EAX]             ; 005c66e4
        ;   Label: LAB_005c66e4
    CMP ECX,EDX                         ; 005c66e6
    JBE 0x005c66fc                      ; 005c66e8
        ;   XREF to: 005c66fc (CONDITIONAL_JUMP)  ; LAB_005c66fc
    CMP EDX,EBX                         ; 005c66ea
    JBE 0x005c66f0                      ; 005c66ec
        ;   XREF to: 005c66f0 (CONDITIONAL_JUMP)  ; LAB_005c66f0
    MOV EBX,EDX                         ; 005c66ee
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c66f0
        ;   Label: LAB_005c66f0
    CMP EAX,ESI                         ; 005c66f3
    JNZ 0x005c66e4                      ; 005c66f5
        ;   XREF to: 005c66e4 (CONDITIONAL_JUMP)  ; LAB_005c66e4
    MOV dword ptr [EDI + 0x14],EBX      ; 005c66f7
    JMP 0x005c6747                      ; 005c66fa
        ;   XREF to: 005c6747 (UNCONDITIONAL_JUMP)  ; LAB_005c6747
    MOV dword ptr [EDI + 0x10],EBX      ; 005c66fc
        ;   Label: LAB_005c66fc
    MOV EBX,dword ptr [EDI + 0x18]      ; 005c66ff
    INC EBX                             ; 005c6702
    SUB EDX,ECX                         ; 005c6703
    MOV dword ptr [EDI + 0x18],EBX      ; 005c6705
    CMP EDX,0x10                        ; 005c6708
    JC 0x005c672b                       ; 005c670b
        ;   XREF to: 005c672b (CONDITIONAL_JUMP)  ; LAB_005c672b
    LEA EBX,[EAX + ECX*0x1]             ; 005c670d
    MOV dword ptr [EDI + 0xc],EBX       ; 005c6710
    MOV dword ptr [EBX],EDX             ; 005c6713
    MOV dword ptr [EAX],ECX             ; 005c6715
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c6717
    MOV dword ptr [EBX + 0x4],ECX       ; 005c671a
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c671d
    MOV dword ptr [EBX + 0x8],EDX       ; 005c6720
    MOV dword ptr [ECX + 0x8],EBX       ; 005c6723
    MOV dword ptr [EDX + 0x4],EBX       ; 005c6726
    JMP 0x005c673d                      ; 005c6729
        ;   XREF to: 005c673d (UNCONDITIONAL_JUMP)  ; LAB_005c673d
    DEC dword ptr [EDI + 0x1c]          ; 005c672b
        ;   Label: LAB_005c672b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c672e
    MOV dword ptr [EDI + 0xc],EDX       ; 005c6731
    MOV EBX,dword ptr [EAX + 0x8]       ; 005c6734
    MOV dword ptr [EDX + 0x8],EBX       ; 005c6737
    MOV dword ptr [EBX + 0x4],EDX       ; 005c673a
    MOV DL,byte ptr [EAX]               ; 005c673d
        ;   Label: LAB_005c673d
    OR DL,0x1                           ; 005c673f
    LEA EBP,[EAX + 0x4]                 ; 005c6742
    MOV byte ptr [EAX],DL               ; 005c6745
    MOV EAX,EBP                         ; 005c6747
        ;   Label: LAB_005c6747
    POP EBP                             ; 005c6749
    POP EDI                             ; 005c674a
    POP ESI                             ; 005c674b
    RET                                 ; 005c674c

