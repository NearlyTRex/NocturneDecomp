; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte engine_2d_c_FUN_00402c60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   engine_2d.c_FUN_00402cf0 at 00402d15
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402c60
        ;   Label: engine_2d.c_FUN_00402c60
    MOV ECX,dword ptr [ESP + 0x8]       ; 00402c61
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402c65
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00402c69
    XOR EAX,EAX                         ; 00402c6d
    CMP EDX,EBX                         ; 00402c6f
    JLE 0x00402c78                      ; 00402c71
        ;   XREF to: 00402c78 (CONDITIONAL_JUMP)  ; LAB_00402c78
    MOV EAX,0x1                         ; 00402c73
    CMP EDX,dword ptr [ESP + 0x14]      ; 00402c78
        ;   Label: LAB_00402c78
    JGE 0x00402c80                      ; 00402c7c
        ;   XREF to: 00402c80 (CONDITIONAL_JUMP)  ; LAB_00402c80
    OR AL,0x2                           ; 00402c7e
    CMP ECX,dword ptr [ESP + 0x18]      ; 00402c80
        ;   Label: LAB_00402c80
    JLE 0x00402c88                      ; 00402c84
        ;   XREF to: 00402c88 (CONDITIONAL_JUMP)  ; LAB_00402c88
    OR AL,0x4                           ; 00402c86
    CMP ECX,dword ptr [ESP + 0x10]      ; 00402c88
        ;   Label: LAB_00402c88
    JGE 0x00402c90                      ; 00402c8c
        ;   XREF to: 00402c90 (CONDITIONAL_JUMP)  ; LAB_00402c90
    OR AL,0x8                           ; 00402c8e
    POP EBX                             ; 00402c90
        ;   Label: LAB_00402c90
    RET                                 ; 00402c91

