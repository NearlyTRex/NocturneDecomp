; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c1af8(int *param_1,int *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c1824 at 005c19c7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1af8
        ;   Label: crt_unknown.c_FUN_005c1af8
    PUSH ESI                            ; 005c1af9
    PUSH EBP                            ; 005c1afa
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c1afb
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c1aff
    MOV ECX,dword ptr [EBX + 0x8]       ; 005c1b03
    MOV ESI,dword ptr [EDX + 0x8]       ; 005c1b06
    XOR EAX,EAX                         ; 005c1b09
    CMP ECX,ESI                         ; 005c1b0b
    JL 0x005c1b23                       ; 005c1b0d
        ;   XREF to: 005c1b23 (CONDITIONAL_JUMP)  ; LAB_005c1b23
    JNZ 0x005c1b28                      ; 005c1b0f
        ;   XREF to: 005c1b28 (CONDITIONAL_JUMP)  ; LAB_005c1b28
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c1b11
    MOV EBP,dword ptr [EDX + 0x4]       ; 005c1b14
    CMP ECX,EBP                         ; 005c1b17
    JL 0x005c1b23                       ; 005c1b19
        ;   XREF to: 005c1b23 (CONDITIONAL_JUMP)  ; LAB_005c1b23
    JNZ 0x005c1b28                      ; 005c1b1b
        ;   XREF to: 005c1b28 (CONDITIONAL_JUMP)  ; LAB_005c1b28
    MOV EBX,dword ptr [EBX]             ; 005c1b1d
    CMP EBX,dword ptr [EDX]             ; 005c1b1f
    JGE 0x005c1b28                      ; 005c1b21
        ;   XREF to: 005c1b28 (CONDITIONAL_JUMP)  ; LAB_005c1b28
    MOV EAX,0x1                         ; 005c1b23
        ;   Label: LAB_005c1b23
    POP EBP                             ; 005c1b28
        ;   Label: LAB_005c1b28
    POP ESI                             ; 005c1b29
    POP EBX                             ; 005c1b2a
    RET                                 ; 005c1b2b

