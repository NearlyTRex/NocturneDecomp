; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_004849f0(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_FUN_00483520 at 00483543
;   shape_edittool.cpp_FUN_00483970 at 00483980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004849f0
        ;   Label: shape_edittool.cpp_FUN_004849f0
    PUSH ESI                            ; 004849f1
    PUSH EDI                            ; 004849f2
    PUSH EBP                            ; 004849f3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004849f4
    MOV ECX,dword ptr [EAX]             ; 004849f8
    CMP ECX,dword ptr [EAX + 0x194]     ; 004849fa
    JLE 0x00484a37                      ; 00484a00
        ;   XREF to: 00484a37 (CONDITIONAL_JUMP)  ; LAB_00484a37
    CMP dword ptr [EAX + 0x194],0x0     ; 00484a02
        ;   Label: LAB_00484a02
    JL 0x00484a42                       ; 00484a09
        ;   XREF to: 00484a42 (CONDITIONAL_JUMP)  ; LAB_00484a42
    MOV ESI,dword ptr [EAX + 0x198]     ; 00484a0b
        ;   Label: LAB_00484a0b
    TEST ESI,ESI                        ; 00484a11
    JL 0x00484a4e                       ; 00484a13
        ;   XREF to: 00484a4e (CONDITIONAL_JUMP)  ; LAB_00484a4e
    MOV EBP,dword ptr [EAX]             ; 00484a15
        ;   Label: LAB_00484a15
    MOV EDX,dword ptr [EAX + 0x198]     ; 00484a17
    CMP EDX,EBP                         ; 00484a1d
    JL 0x00484a5f                       ; 00484a1f
        ;   XREF to: 00484a5f (CONDITIONAL_JUMP)  ; LAB_00484a5f
    MOV EBX,dword ptr [EAX + 0x198]     ; 00484a21
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 00484a27
    SUB EBX,EDX                         ; 00484a2d
    MOV dword ptr [EAX + 0x198],EBX     ; 00484a2f
    JMP 0x00484a15                      ; 00484a35
        ;   XREF to: 00484a15 (UNCONDITIONAL_JUMP)  ; LAB_00484a15
    LEA EDX,[ECX + -0x1]                ; 00484a37
        ;   Label: LAB_00484a37
    MOV dword ptr [EAX + 0x194],EDX     ; 00484a3a
    JMP 0x00484a02                      ; 00484a40
        ;   XREF to: 00484a02 (UNCONDITIONAL_JUMP)  ; LAB_00484a02
    MOV dword ptr [EAX + 0x194],0x0     ; 00484a42
        ;   Label: LAB_00484a42
    JMP 0x00484a0b                      ; 00484a4c
        ;   XREF to: 00484a0b (UNCONDITIONAL_JUMP)  ; LAB_00484a0b
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 00484a4e
        ;   Label: LAB_00484a4e
    LEA EDI,[ESI + EDX*0x1]             ; 00484a54
    MOV dword ptr [EAX + 0x198],EDI     ; 00484a57
    JMP 0x00484a0b                      ; 00484a5d
        ;   XREF to: 00484a0b (UNCONDITIONAL_JUMP)  ; LAB_00484a0b
    TEST EDX,EDX                        ; 00484a5f
        ;   Label: LAB_00484a5f
    JL 0x00484ab0                       ; 00484a61
        ;   XREF to: 00484ab0 (CONDITIONAL_JUMP)  ; LAB_00484ab0
    MOV ECX,dword ptr [EAX]             ; 00484a63
        ;   Label: LAB_00484a63
    CMP ECX,dword ptr [EAX + 0x194]     ; 00484a65
    JLE 0x00484b0c                      ; 00484a6b
        ;   XREF to: 00484b0c (CONDITIONAL_JUMP)  ; LAB_00484b0c
    XOR ECX,ECX                         ; 00484a71
    MOV ESI,dword ptr [EAX + 0x198]     ; 00484a73
        ;   Label: LAB_00484a73
    CMP ESI,dword ptr [EAX + 0x194]     ; 00484a79
    JG 0x00484abc                       ; 00484a7f
        ;   XREF to: 00484abc (CONDITIONAL_JUMP)  ; LAB_00484abc
    MOV ESI,dword ptr [EAX + 0x19c]     ; 00484a81
        ;   Label: LAB_00484a81
    MOV EDX,dword ptr [EAX + 0x198]     ; 00484a87
    MOV EDI,dword ptr [EAX + 0x194]     ; 00484a8d
    ADD EDX,ESI                         ; 00484a93
    CMP EDX,EDI                         ; 00484a95
    JG 0x00484b0c                       ; 00484a97
        ;   XREF to: 00484b0c (CONDITIONAL_JUMP)  ; LAB_00484b0c
    MOV EBP,dword ptr [EAX + 0x1a8]     ; 00484a9d
    CMP EBP,0x1                         ; 00484aa3
    JNZ 0x00484af3                      ; 00484aa6
        ;   XREF to: 00484af3 (CONDITIONAL_JUMP)  ; LAB_00484af3
    ADD dword ptr [EAX + 0x198],EBP     ; 00484aa8
    JMP 0x00484a81                      ; 00484aae
        ;   XREF to: 00484a81 (UNCONDITIONAL_JUMP)  ; LAB_00484a81
    MOV dword ptr [EAX + 0x198],0x0     ; 00484ab0
        ;   Label: LAB_00484ab0
    JMP 0x00484a63                      ; 00484aba
        ;   XREF to: 00484a63 (UNCONDITIONAL_JUMP)  ; LAB_00484a63
    MOV EDI,dword ptr [EAX + 0x1a8]     ; 00484abc
        ;   Label: LAB_00484abc
    CMP EDI,0x1                         ; 00484ac2
    JNZ 0x00484ae1                      ; 00484ac5
        ;   XREF to: 00484ae1 (CONDITIONAL_JUMP)  ; LAB_00484ae1
    MOV EDX,ESI                         ; 00484ac7
    SUB EDX,EDI                         ; 00484ac9
    MOV dword ptr [EAX + 0x198],EDX     ; 00484acb
    CMP ECX,dword ptr [EAX + 0x198]     ; 00484ad1
        ;   Label: LAB_00484ad1
    JLE 0x00484a73                      ; 00484ad7
        ;   XREF to: 00484a73 (CONDITIONAL_JUMP)  ; LAB_00484a73
    MOV dword ptr [EAX + 0x198],ECX     ; 00484ad9
    JMP 0x00484a73                      ; 00484adf
        ;   XREF to: 00484a73 (UNCONDITIONAL_JUMP)  ; LAB_00484a73
    MOV EBP,ESI                         ; 00484ae1
        ;   Label: LAB_00484ae1
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 00484ae3
    SUB EBP,EDX                         ; 00484ae9
    MOV dword ptr [EAX + 0x198],EBP     ; 00484aeb
    JMP 0x00484ad1                      ; 00484af1
        ;   XREF to: 00484ad1 (UNCONDITIONAL_JUMP)  ; LAB_00484ad1
    MOV ECX,dword ptr [EAX + 0x198]     ; 00484af3
        ;   Label: LAB_00484af3
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 00484af9
    ADD ECX,EDX                         ; 00484aff
    MOV dword ptr [EAX + 0x198],ECX     ; 00484b01
    JMP 0x00484a81                      ; 00484b07
        ;   XREF to: 00484a81 (UNCONDITIONAL_JUMP)  ; LAB_00484a81
    CMP dword ptr [EAX + 0x1a8],0x1     ; 00484b0c
        ;   Label: LAB_00484b0c
    JNZ 0x00484b2f                      ; 00484b13
        ;   XREF to: 00484b2f (CONDITIONAL_JUMP)  ; LAB_00484b2f
    MOV EDI,dword ptr [EAX + 0x1a0]     ; 00484b15
    MOV EDX,dword ptr [EAX]             ; 00484b1b
    MOV EBP,dword ptr [EAX + 0x198]     ; 00484b1d
    SUB EDX,EDI                         ; 00484b23
    CMP EDX,EBP                         ; 00484b25
    JGE 0x00484b2f                      ; 00484b27
        ;   XREF to: 00484b2f (CONDITIONAL_JUMP)  ; LAB_00484b2f
    MOV dword ptr [EAX + 0x198],EDX     ; 00484b29
    CMP dword ptr [EAX + 0x198],0x0     ; 00484b2f
        ;   Label: LAB_00484b2f
    JL 0x00484b3d                       ; 00484b36
        ;   XREF to: 00484b3d (CONDITIONAL_JUMP)  ; LAB_00484b3d
    POP EBP                             ; 00484b38
    POP EDI                             ; 00484b39
    POP ESI                             ; 00484b3a
    POP EBX                             ; 00484b3b
    RET                                 ; 00484b3c
    MOV dword ptr [EAX + 0x198],0x0     ; 00484b3d
        ;   Label: LAB_00484b3d
    POP EBP                             ; 00484b47
    POP EDI                             ; 00484b48
    POP ESI                             ; 00484b49
    POP EBX                             ; 00484b4a
    RET                                 ; 00484b4b

