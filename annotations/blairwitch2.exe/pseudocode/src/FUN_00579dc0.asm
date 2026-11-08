; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00579dc0(int *param_1,undefined1 *param_2,int param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00579e40 at 00579e81
;
; Called Functions:
;   FUN_00579cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579dc0
        ;   Label: FUN_00579dc0
    PUSH ESI                            ; 00579dc1
    PUSH EDI                            ; 00579dc2
    PUSH EBP                            ; 00579dc3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00579dc4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00579dc8
    MOV ESI,dword ptr [ESP + 0x18]      ; 00579dcc
    XOR EBX,EBX                         ; 00579dd0
    DEC EDI                             ; 00579dd2
    MOV EDX,dword ptr [ESP + 0x24]      ; 00579dd3
        ;   Label: LAB_00579dd3
    PUSH EDX                            ; 00579dd7
    MOV ECX,dword ptr [ESP + 0x24]      ; 00579dd8
    PUSH ECX                            ; 00579ddc
    PUSH EBP                            ; 00579ddd
    CALL FUN_00579cf0                   ; 00579dde
        ;   XREF to: 00579cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00579cf0()
    ADD ESP,0xc                         ; 00579de3
    MOV EDX,EAX                         ; 00579de6
    TEST EAX,EAX                        ; 00579de8
    JL 0x00579e16                       ; 00579dea
        ;   XREF to: 00579e16 (CONDITIONAL_JUMP)  ; LAB_00579e16
    CMP EAX,0xd                         ; 00579dec
    JZ 0x00579dd3                       ; 00579def
        ;   XREF to: 00579dd3 (CONDITIONAL_JUMP)  ; LAB_00579dd3
    CMP EAX,0xa                         ; 00579df1
    JZ 0x00579e23                       ; 00579df4
        ;   XREF to: 00579e23 (CONDITIONAL_JUMP)  ; LAB_00579e23
    INC AL                              ; 00579df6
    AND EAX,0xff                        ; 00579df8
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00579dfd
    JZ 0x00579e0b                       ; 00579e04
        ;   XREF to: 00579e0b (CONDITIONAL_JUMP)  ; LAB_00579e0b
    MOV EDX,0x20                        ; 00579e06
    CMP EBX,EDI                         ; 00579e0b
        ;   Label: LAB_00579e0b
    JGE 0x00579dd3                      ; 00579e0d
        ;   XREF to: 00579dd3 (CONDITIONAL_JUMP)  ; LAB_00579dd3
    INC ESI                             ; 00579e0f
    INC EBX                             ; 00579e10
    MOV byte ptr [ESI + -0x1],DL        ; 00579e11
    JMP 0x00579dd3                      ; 00579e14
        ;   XREF to: 00579dd3 (UNCONDITIONAL_JUMP)  ; LAB_00579dd3
    CMP dword ptr [EBP],0x0             ; 00579e16
        ;   Label: LAB_00579e16
    JNZ 0x00579e23                      ; 00579e1a
        ;   XREF to: 00579e23 (CONDITIONAL_JUMP)  ; LAB_00579e23
    XOR EAX,EAX                         ; 00579e1c
    POP EBP                             ; 00579e1e
    POP EDI                             ; 00579e1f
    POP ESI                             ; 00579e20
    POP EBX                             ; 00579e21
    RET                                 ; 00579e22
    ADD EBX,dword ptr [ESP + 0x18]      ; 00579e23
        ;   Label: LAB_00579e23
    MOV EAX,0x1                         ; 00579e27
    MOV byte ptr [EBX],0x0              ; 00579e2c
    POP EBP                             ; 00579e2f
    POP EDI                             ; 00579e30
    POP ESI                             ; 00579e31
    POP EBX                             ; 00579e32
    RET                                 ; 00579e33

