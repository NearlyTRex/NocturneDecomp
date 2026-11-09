; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_005be5b0(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005be628 at 005be6a0
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be5b0
        ;   Label: crt_unknown.c_FUN_005be5b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005be5b1
    MOV EAX,[0x0061eea0]                ; 005be5b5 | DAT_0061eea0
    XOR EBX,EBX                         ; 005be5ba
    TEST EAX,EAX                        ; 005be5bc
    JZ 0x005be5cd                       ; 005be5be
        ;   XREF to: 005be5cd (CONDITIONAL_JUMP)  ; LAB_005be5cd
    CMP EDX,EAX                         ; 005be5c0
        ;   Label: LAB_005be5c0
    JC 0x005be5cd                       ; 005be5c2
        ;   XREF to: 005be5cd (CONDITIONAL_JUMP)  ; LAB_005be5cd
    MOV EBX,EAX                         ; 005be5c4
    MOV EAX,dword ptr [EAX + 0x8]       ; 005be5c6
    TEST EAX,EAX                        ; 005be5c9
    JNZ 0x005be5c0                      ; 005be5cb
        ;   XREF to: 005be5c0 (CONDITIONAL_JUMP)  ; LAB_005be5c0
    MOV dword ptr [EDX + 0x4],EBX       ; 005be5cd
        ;   Label: LAB_005be5cd
    MOV dword ptr [EDX + 0x8],EAX       ; 005be5d0
    TEST EBX,EBX                        ; 005be5d3
    JZ 0x005be5dc                       ; 005be5d5
        ;   XREF to: 005be5dc (CONDITIONAL_JUMP)  ; LAB_005be5dc
    MOV dword ptr [EBX + 0x8],EDX       ; 005be5d7
    JMP 0x005be5e2                      ; 005be5da
        ;   XREF to: 005be5e2 (UNCONDITIONAL_JUMP)  ; LAB_005be5e2
    MOV dword ptr [0x0061eea0],EDX      ; 005be5dc | DAT_0061eea0
        ;   Label: LAB_005be5dc
    TEST EAX,EAX                        ; 005be5e2
        ;   Label: LAB_005be5e2
    JZ 0x005be5e9                       ; 005be5e4
        ;   XREF to: 005be5e9 (CONDITIONAL_JUMP)  ; LAB_005be5e9
    MOV dword ptr [EAX + 0x4],EDX       ; 005be5e6
    LEA EBX,[EDX + 0x20]                ; 005be5e9
        ;   Label: LAB_005be5e9
    ADD EDX,0x2c                        ; 005be5ec
    MOV dword ptr [EDX + -0xc],0x0      ; 005be5ef
    MOV dword ptr [EDX + -0x1c],0x0     ; 005be5f6
    MOV dword ptr [EDX + -0x14],0x0     ; 005be5fd
    MOV dword ptr [EDX + -0x10],0x0     ; 005be604
    MOV dword ptr [EDX + -0x8],EBX      ; 005be60b
    MOV EAX,dword ptr [EDX + -0x2c]     ; 005be60e
    MOV dword ptr [EDX + -0x4],EBX      ; 005be611
    SUB EAX,0x2c                        ; 005be614
    MOV dword ptr [EDX + -0x20],EBX     ; 005be617
    MOV dword ptr [EDX],EAX             ; 005be61a
    MOV dword ptr [EDX + EAX*0x1],0xffffffff ; 005be61c
    MOV EAX,EDX                         ; 005be623
    POP EBX                             ; 005be625
    RET                                 ; 005be626

