; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 crt_unknown_c_FUN_0060b07a(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00603dc8 at 00603e45
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060b07a
        ;   Label: crt_unknown.c_FUN_0060b07a
    MOV DX,word ptr [EAX + 0x8]         ; 0060b07e
    AND DH,0x7f                         ; 0060b082
    CMP DX,0x7fff                       ; 0060b085
    JNZ 0x0060b0a6                      ; 0060b08a
        ;   XREF to: 0060b0a6 (CONDITIONAL_JUMP)  ; LAB_0060b0a6
    CMP dword ptr [EAX + 0x4],0x80000000 ; 0060b08c
    JNZ 0x0060b0a0                      ; 0060b093
        ;   XREF to: 0060b0a0 (CONDITIONAL_JUMP)  ; LAB_0060b0a0
    CMP dword ptr [EAX],0x0             ; 0060b095
    JNZ 0x0060b0a0                      ; 0060b098
        ;   XREF to: 0060b0a0 (CONDITIONAL_JUMP)  ; LAB_0060b0a0
    MOV EAX,0x3                         ; 0060b09a
    RET                                 ; 0060b09f
    MOV EAX,0x2                         ; 0060b0a0
        ;   Label: LAB_0060b0a0
    RET                                 ; 0060b0a5
    TEST word ptr [EAX + 0x8],0x7fff    ; 0060b0a6
        ;   Label: LAB_0060b0a6
    JNZ 0x0060b0c2                      ; 0060b0ac
        ;   XREF to: 0060b0c2 (CONDITIONAL_JUMP)  ; LAB_0060b0c2
    CMP dword ptr [EAX + 0x4],0x0       ; 0060b0ae
    JNZ 0x0060b0bc                      ; 0060b0b2
        ;   XREF to: 0060b0bc (CONDITIONAL_JUMP)  ; LAB_0060b0bc
    CMP dword ptr [EAX],0x0             ; 0060b0b4
    JNZ 0x0060b0bc                      ; 0060b0b7
        ;   XREF to: 0060b0bc (CONDITIONAL_JUMP)  ; LAB_0060b0bc
    XOR EAX,EAX                         ; 0060b0b9
    RET                                 ; 0060b0bb
    MOV EAX,0x4                         ; 0060b0bc
        ;   Label: LAB_0060b0bc
    RET                                 ; 0060b0c1
    MOV EAX,0x1                         ; 0060b0c2
        ;   Label: LAB_0060b0c2
    RET                                 ; 0060b0c7

