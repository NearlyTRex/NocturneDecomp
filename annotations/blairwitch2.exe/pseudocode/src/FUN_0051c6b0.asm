; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051c6b0(int param_1,int param_2)
;
;
; XREF[4]:
;   FUN_0051cb20 at 0051cd56
;   FUN_0051da80 at 0051ddc7
;   FUN_0051e130 at 0051e30e
;   FUN_0059a5d0 at 0059a889
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c6b0
        ;   Label: FUN_0051c6b0
    PUSH ESI                            ; 0051c6b1
    PUSH EDI                            ; 0051c6b2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051c6b3
    XOR ESI,ESI                         ; 0051c6b7
    TEST EDI,EDI                        ; 0051c6b9
    JLE 0x0051c70c                      ; 0051c6bb
        ;   XREF to: 0051c70c (CONDITIONAL_JUMP)  ; LAB_0051c70c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051c6bd
    MOV EDX,dword ptr [ECX + 0x8]       ; 0051c6c1
        ;   Label: LAB_0051c6c1
    CMP EDX,0x100                       ; 0051c6c4
    JLE 0x0051c710                      ; 0051c6ca
        ;   XREF to: 0051c710 (CONDITIONAL_JUMP)  ; LAB_0051c710
    MOV EAX,0x7fffffff                  ; 0051c6cc
    MOV EBX,EDX                         ; 0051c6d1
    MOV EDX,EAX                         ; 0051c6d3
    SAR EBX,0x4                         ; 0051c6d5
    SAR EDX,0x1f                        ; 0051c6d8
    IDIV EBX                            ; 0051c6db
    MOV EBX,EAX                         ; 0051c6dd
    MOV EDX,dword ptr [ECX + 0x18]      ; 0051c6df
        ;   Label: LAB_0051c6df
    MOV EAX,EBX                         ; 0051c6e2
    SAR EDX,0x8                         ; 0051c6e4
    IMUL EDX                            ; 0051c6e7
    SHRD EAX,EDX,0x10                   ; 0051c6e9
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0051c6ed
    MOV dword ptr [ECX + 0x18],EAX      ; 0051c6f0
    SAR EDX,0x8                         ; 0051c6f3
    MOV EAX,EBX                         ; 0051c6f6
    ADD ECX,0x30                        ; 0051c6f8
    IMUL EDX                            ; 0051c6fb
    SHRD EAX,EDX,0x10                   ; 0051c6fd
    MOV dword ptr [ECX + -0x14],EAX     ; 0051c701
    INC ESI                             ; 0051c704
    MOV dword ptr [ECX + -0x28],EBX     ; 0051c705
    CMP ESI,EDI                         ; 0051c708
    JL 0x0051c6c1                       ; 0051c70a
        ;   XREF to: 0051c6c1 (CONDITIONAL_JUMP)  ; LAB_0051c6c1
    POP EDI                             ; 0051c70c
        ;   Label: LAB_0051c70c
    POP ESI                             ; 0051c70d
    POP EBX                             ; 0051c70e
    RET                                 ; 0051c70f
    MOV EBX,0x7fffffff                  ; 0051c710
        ;   Label: LAB_0051c710
    JMP 0x0051c6df                      ; 0051c715
        ;   XREF to: 0051c6df (UNCONDITIONAL_JUMP)  ; LAB_0051c6df

