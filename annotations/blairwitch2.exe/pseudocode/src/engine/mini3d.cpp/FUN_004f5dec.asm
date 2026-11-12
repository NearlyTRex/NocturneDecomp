; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f5dec(int param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d0d2b4
;   undefined4 DAT_01d167f0
;
; Called Functions:
;   engine_mini3d.cpp_setRenderViewport_FUN_004f2ac0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004f5dec
        ;   Label: engine_mini3d.cpp_FUN_004f5dec
    PUSH EBX                            ; 004f5df0
    PUSH EDI                            ; 004f5df1
    SUB ESP,0x4                         ; 004f5df2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f5df5
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f5df9
    CMP dword ptr [ESP + 0x1c],0x0      ; 004f5dfd
    SETNZ AL                            ; 004f5e02
    AND EAX,0xff                        ; 004f5e05
    INC EAX                             ; 004f5e0a
    MOV [0x01d0d2b4],EAX                ; 004f5e0b | DAT_01d0d2b4
    LEA EAX,[EBX + -0x1]                ; 004f5e10
    MOV dword ptr [ESP],EAX             ; 004f5e13
    FILD dword ptr [ESP]                ; 004f5e16
    LEA EAX,[EDI + -0x1]                ; 004f5e19
    SUB ESP,0x4                         ; 004f5e1c
    MOV dword ptr [ESP + 0x4],EAX       ; 004f5e1f
    FSTP float ptr [ESP]                ; 004f5e23
    FILD dword ptr [ESP + 0x4]          ; 004f5e26
    SUB ESP,0x4                         ; 004f5e2a
    FSTP float ptr [ESP]                ; 004f5e2d
    PUSH 0x0                            ; 004f5e30
    PUSH 0x0                            ; 004f5e32
    CALL engine_mini3d.cpp_setRenderViewport_FUN_004f2ac0 ; 004f5e34
        ;   XREF to: 004f2ac0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setRenderViewport_FUN_004f2ac0(float left, float top, float right, float bottom)
    ADD ESP,0x10                        ; 004f5e39
    MOV dword ptr [0x01d167f0],EBX      ; 004f5e3c | DAT_01d167f0
    TEST EBX,EBX                        ; 004f5e42
    JLE 0x004f5e78                      ; 004f5e44
        ;   XREF to: 004f5e78 (CONDITIONAL_JUMP)  ; LAB_004f5e78
    PUSH ESI                            ; 004f5e46
    LEA ESI,[EDI*0x4 + 0x0]             ; 004f5e47
    IMUL EDX,EDI,0x0                    ; 004f5e4e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f5e51
    SHL EBX,0x2                         ; 004f5e55
    XOR EAX,EAX                         ; 004f5e58
    ADD EDX,ECX                         ; 004f5e5a
    ADD EAX,0x4                         ; 004f5e5c
        ;   Label: LAB_004f5e5c
    MOV ECX,dword ptr [EAX + 0x1c2a388] ; 004f5e5f
    MOV dword ptr [EAX + 0x1d167f0],ECX ; 004f5e65
    MOV dword ptr [EAX + 0x1c2a388],EDX ; 004f5e6b
    ADD EDX,ESI                         ; 004f5e71
    CMP EAX,EBX                         ; 004f5e73
    JL 0x004f5e5c                       ; 004f5e75
        ;   XREF to: 004f5e5c (CONDITIONAL_JUMP)  ; LAB_004f5e5c
    POP ESI                             ; 004f5e77
    ADD ESP,0x4                         ; 004f5e78
        ;   Label: LAB_004f5e78
    POP EDI                             ; 004f5e7b
    POP EBX                             ; 004f5e7c
    RET                                 ; 004f5e7d

