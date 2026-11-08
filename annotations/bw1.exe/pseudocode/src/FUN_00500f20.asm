; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00500f20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6ef6
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf460
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 00500f20
        ;   Label: FUN_00500f20
    MOV EAX,dword ptr [ESP + 0x10]      ; 00500f23
    CMP dword ptr [EAX + 0x56c],0x6     ; 00500f27
    JNZ 0x00500f3f                      ; 00500f2e
        ;   XREF to: 00500f3f (CONDITIONAL_JUMP)  ; LAB_00500f3f
    PUSH EBX                            ; 00500f30
    XOR EBX,EBX                         ; 00500f31
    MOV dword ptr [ESP + 0x4],EBX       ; 00500f33
    POP EBX                             ; 00500f37
    MOV EAX,dword ptr [ESP]             ; 00500f38
    ADD ESP,0xc                         ; 00500f3b
    RET                                 ; 00500f3e
    PUSH 0x42480000                     ; 00500f3f
        ;   Label: LAB_00500f3f
    PUSH 0x41a00000                     ; 00500f44
    CALL FUN_0040cc00                   ; 00500f49
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x10],EAX      ; 00500f4e
    MOV EAX,[0x0061d95c]                ; 00500f52 | DAT_0061d95c
    FLD float ptr [ESP + 0x10]          ; 00500f57
    ADD ESP,0x8                         ; 00500f5b
    MOV ECX,dword ptr [EAX + 0xd0]      ; 00500f5e | DAT_01ccf460
    FSTP float ptr [ESP + 0x4]          ; 00500f64
    CMP ECX,0x3                         ; 00500f68
    JNZ 0x00500f7b                      ; 00500f6b
        ;   XREF to: 00500f7b (CONDITIONAL_JUMP)  ; LAB_00500f7b
    FLD float ptr [ESP + 0x4]           ; 00500f6d
    FMUL float ptr [0x005e6ef6]         ; 00500f71 | DAT_005e6ef6
    FSTP float ptr [ESP + 0x4]          ; 00500f77
    MOV EAX,dword ptr [ESP + 0x4]       ; 00500f7b
        ;   Label: LAB_00500f7b
    MOV dword ptr [ESP],EAX             ; 00500f7f
    MOV EAX,dword ptr [ESP]             ; 00500f82
    ADD ESP,0xc                         ; 00500f85
    RET                                 ; 00500f88

