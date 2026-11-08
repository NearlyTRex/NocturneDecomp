; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00515cd0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e1a8a
;   undefined4 DAT_005e1a92
;   undefined4 DAT_006141f0
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01c264e0
;   undefined4 DAT_01cedf50
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_0048e340
;   FUN_00514f40
;   FUN_005156d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515cd0
        ;   Label: FUN_00515cd0
    PUSH ESI                            ; 00515cd1
    PUSH EDI                            ; 00515cd2
    PUSH EBP                            ; 00515cd3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00515cd4
    CMP dword ptr [ESI + 0x4f8],0x0     ; 00515cd8
    JZ 0x00515da4                       ; 00515cdf
        ;   XREF to: 00515da4 (CONDITIONAL_JUMP)  ; LAB_00515da4
    LEA EAX,[ESI + 0x494]               ; 00515ce5
        ;   Label: LAB_00515ce5
    PUSH EAX                            ; 00515ceb
    MOV EBX,dword ptr [0x006141f0]      ; 00515cec | DAT_006141f0
    PUSH EBX                            ; 00515cf2
    CALL FUN_0048e340                   ; 00515cf3
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00515cf8
    TEST EAX,EAX                        ; 00515cfb
    JZ 0x00515d1f                       ; 00515cfd
        ;   XREF to: 00515d1f (CONDITIONAL_JUMP)  ; LAB_00515d1f
    CMP dword ptr [ESI + 0x58c],0x3f800000 ; 00515cff
    JZ 0x00515d1f                       ; 00515d09
        ;   XREF to: 00515d1f (CONDITIONAL_JUMP)  ; LAB_00515d1f
    MOV dword ptr [ESI + 0x590],0x0     ; 00515d0b
    MOV dword ptr [ESI + 0x58c],0x3f800000 ; 00515d15
    PUSH dword ptr [ESP + 0x18]         ; 00515d1f
        ;   Label: LAB_00515d1f
    PUSH ESI                            ; 00515d23
    CALL FUN_005156d0                   ; 00515d24
        ;   XREF to: 005156d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005156d0()
    FLD float ptr [ESI + 0x58c]         ; 00515d29
    FMUL double ptr [0x005e1a8a]        ; 00515d2f | DAT_005e1a8a
    FMUL float ptr [ESI + 0x590]        ; 00515d35
    FLD1                                ; 00515d3b
    FLDL2E                              ; 00515d3d
    FMUL ST2                            ; 00515d3f
    FST ST2                             ; 00515d41
    FPREM                               ; 00515d43
    F2XM1                               ; 00515d45
    FADDP                               ; 00515d47
    FSCALE                              ; 00515d49
    FSTP ST1                            ; 00515d4b
    ADD ESP,0x8                         ; 00515d4d
    FCOMP double ptr [0x005e1a92]       ; 00515d50 | DAT_005e1a92
    FNSTSW AX                           ; 00515d56
    SAHF                                ; 00515d58
    JBE 0x00515e27                      ; 00515d59
        ;   XREF to: 00515e27 (CONDITIONAL_JUMP)  ; LAB_00515e27
    MOV EBP,dword ptr [ESI + 0x584]     ; 00515d5f
    MOV dword ptr [ESI + 0x59c],0x0     ; 00515d65
    TEST EBP,EBP                        ; 00515d6f
    JZ 0x00515dcd                       ; 00515d71
        ;   XREF to: 00515dcd (CONDITIONAL_JUMP)  ; LAB_00515dcd
    XOR EDI,EDI                         ; 00515d73
        ;   Label: LAB_00515d73
    XOR EBP,EBP                         ; 00515d75
    MOV EAX,[0x0061b5a8]                ; 00515d77 | DAT_0061b5a8
        ;   Label: LAB_00515d77
    CMP EBP,dword ptr [EAX + 0x14f0a8]  ; 00515d7c
    JGE 0x00515dd6                      ; 00515d82
        ;   XREF to: 00515dd6 (CONDITIONAL_JUMP)  ; LAB_00515dd6
    MOV ECX,dword ptr [ESI + 0x584]     ; 00515d84
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 00515d8a
    TEST ECX,ECX                        ; 00515d91
    JNZ 0x00515ddb                      ; 00515d93
        ;   XREF to: 00515ddb (CONDITIONAL_JUMP)  ; LAB_00515ddb
    CMP dword ptr [ESI + 0x588],0x0     ; 00515d95
        ;   Label: LAB_00515d95
    JNZ 0x00515dfd                      ; 00515d9c
        ;   XREF to: 00515dfd (CONDITIONAL_JUMP)  ; LAB_00515dfd
    INC EBP                             ; 00515d9e
        ;   Label: LAB_00515d9e
    ADD EDI,0x4                         ; 00515d9f
    JMP 0x00515d77                      ; 00515da2
        ;   XREF to: 00515d77 (UNCONDITIONAL_JUMP)  ; LAB_00515d77
    LEA EAX,[ESI + 0x430]               ; 00515da4
        ;   Label: LAB_00515da4
    PUSH EAX                            ; 00515daa
    MOV ECX,dword ptr [0x006141f0]      ; 00515dab | DAT_006141f0
    PUSH ECX                            ; 00515db1
    CALL FUN_0048e340                   ; 00515db2
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00515db7
    TEST EAX,EAX                        ; 00515dba
    JZ 0x00515dd6                       ; 00515dbc
        ;   XREF to: 00515dd6 (CONDITIONAL_JUMP)  ; LAB_00515dd6
    MOV dword ptr [ESI + 0x4f8],0x1     ; 00515dbe
    JMP 0x00515ce5                      ; 00515dc8
        ;   XREF to: 00515ce5 (UNCONDITIONAL_JUMP)  ; LAB_00515ce5
    CMP dword ptr [ESI + 0x588],0x0     ; 00515dcd
        ;   Label: LAB_00515dcd
    JNZ 0x00515d73                      ; 00515dd4
        ;   XREF to: 00515d73 (CONDITIONAL_JUMP)  ; LAB_00515d73
    POP EBP                             ; 00515dd6
        ;   Label: LAB_00515dd6
    POP EDI                             ; 00515dd7
    POP ESI                             ; 00515dd8
    POP EBX                             ; 00515dd9
    RET                                 ; 00515dda
    MOV EAX,[0x01cedf50]                ; 00515ddb | DAT_01cedf50
        ;   Label: LAB_00515ddb
    PUSH EAX                            ; 00515de0
    PUSH EBX                            ; 00515de1
    CALL FUN_0040c8f0                   ; 00515de2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 00515de7
    TEST EAX,EAX                        ; 00515dea
    JZ 0x00515d95                       ; 00515dec
        ;   XREF to: 00515d95 (CONDITIONAL_JUMP)  ; LAB_00515d95
    PUSH 0x0                            ; 00515dee
    PUSH EAX                            ; 00515df0
    PUSH EBX                            ; 00515df1
    PUSH ESI                            ; 00515df2
    CALL FUN_00514f40                   ; 00515df3
        ;   XREF to: 00514f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00514f40()
    ADD ESP,0x10                        ; 00515df8
    JMP 0x00515d9e                      ; 00515dfb
        ;   XREF to: 00515d9e (UNCONDITIONAL_JUMP)  ; LAB_00515d9e
    MOV ECX,dword ptr [0x01c264e0]      ; 00515dfd | DAT_01c264e0
        ;   Label: LAB_00515dfd
    PUSH ECX                            ; 00515e03
    PUSH EBX                            ; 00515e04
    CALL FUN_0040c8f0                   ; 00515e05
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 00515e0a
    TEST EAX,EAX                        ; 00515e0d
    JZ 0x00515d9e                       ; 00515e0f
        ;   XREF to: 00515d9e (CONDITIONAL_JUMP)  ; LAB_00515d9e
    PUSH EAX                            ; 00515e11
    PUSH 0x0                            ; 00515e12
    PUSH EBX                            ; 00515e14
    PUSH ESI                            ; 00515e15
    CALL FUN_00514f40                   ; 00515e16
        ;   XREF to: 00514f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00514f40()
    ADD ESP,0x10                        ; 00515e1b
    INC EBP                             ; 00515e1e
    ADD EDI,0x4                         ; 00515e1f
    JMP 0x00515d77                      ; 00515e22
        ;   XREF to: 00515d77 (UNCONDITIONAL_JUMP)  ; LAB_00515d77
    MOV dword ptr [ESI + 0x59c],0x1     ; 00515e27
        ;   Label: LAB_00515e27
    POP EBP                             ; 00515e31
    POP EDI                             ; 00515e32
    POP ESI                             ; 00515e33
    POP EBX                             ; 00515e34
    RET                                 ; 00515e35

