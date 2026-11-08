; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005085c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005085c0
        ;   Label: FUN_005085c0
    SUB ESP,0x14                        ; 005085c1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005085c4
    MOV EDX,dword ptr [ESP + 0x28]      ; 005085c8
    SUB EAX,EDX                         ; 005085cc
    MOV dword ptr [ESP + 0x10],EAX      ; 005085ce
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005085d2
    FILD dword ptr [ESP + 0x10]         ; 005085d6
    MOV EAX,dword ptr [ESP + 0x20]      ; 005085da
    FLD ST0                             ; 005085de
    SUB EAX,ECX                         ; 005085e0
    FMULP                               ; 005085e2
    MOV dword ptr [ESP + 0x10],EAX      ; 005085e4
    MOV EBX,dword ptr [ESP + 0x30]      ; 005085e8
    FILD dword ptr [ESP + 0x10]         ; 005085ec
    MOV EAX,dword ptr [ESP + 0x24]      ; 005085f0
    FLD ST0                             ; 005085f4
    SUB EAX,EBX                         ; 005085f6
    FMULP                               ; 005085f8
    MOV dword ptr [ESP + 0x10],EAX      ; 005085fa
    FADDP                               ; 005085fe
    FILD dword ptr [ESP + 0x10]         ; 00508600
    FMUL ST0                            ; 00508604
    FADDP                               ; 00508606
    FSQRT                               ; 00508608
    CALL FUN_005c03a0                   ; 0050860a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 0050860f
    MOV EAX,dword ptr [ESP]             ; 00508612
    ADD ESP,0x14                        ; 00508615
    POP EBX                             ; 00508618
    RET                                 ; 00508619

