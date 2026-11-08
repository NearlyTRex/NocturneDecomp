; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406c50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5c8
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_004054e0
;   FUN_004057b0
;   FUN_0043a840
;   FUN_0043bac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406c50
        ;   Label: FUN_00406c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00406c51
    CMP dword ptr [0x01c6cee8],0x0      ; 00406c55 | DAT_01c6cee8
    JZ 0x00406d72                       ; 00406c5c
        ;   XREF to: 00406d72 (CONDITIONAL_JUMP)  ; LAB_00406d72
    PUSH ESI                            ; 00406c62
    LEA ESI,[EBX + 0x18]                ; 00406c63
    LEA EAX,[EBX + 0x8]                 ; 00406c66
    PUSH EAX                            ; 00406c69
    CALL FUN_00403920                   ; 00406c6a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00406c6f
    TEST EAX,EAX                        ; 00406c72
    JZ 0x00406cc1                       ; 00406c74
        ;   XREF to: 00406cc1 (CONDITIONAL_JUMP)  ; LAB_00406cc1
    CMP dword ptr [0x01c6b5c8],0x0      ; 00406c76 | DAT_01c6b5c8
    JZ 0x00406cfc                       ; 00406c7d
        ;   XREF to: 00406cfc (CONDITIONAL_JUMP)  ; LAB_00406cfc
    CMP dword ptr [0x01c6e2a0],0x0      ; 00406c83 | DAT_01c6e2a0
    JNZ 0x00406cdb                      ; 00406c8a
        ;   XREF to: 00406cdb (CONDITIONAL_JUMP)  ; LAB_00406cdb
    CMP dword ptr [0x005fba20],0x20     ; 00406c8c | DAT_005fba20
    JNZ 0x00406ccf                      ; 00406c93
        ;   XREF to: 00406ccf (CONDITIONAL_JUMP)  ; LAB_00406ccf
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406c95 | DAT_01c6b5cc
    MOV EAX,0x8d                        ; 00406c9f
        ;   Label: LAB_00406c9f
    PUSH ESI                            ; 00406ca4
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406ca5
    MOV EDX,0x4                         ; 00406ca8
    PUSH ECX                            ; 00406cad
    MOV [0x01c6e2b4],EAX                ; 00406cae | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 00406cb3 | DAT_01c6e2b8
    CALL FUN_0043a840                   ; 00406cb9
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 00406cbe
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406cc1
        ;   Label: LAB_00406cc1
    LEA EAX,[EBX + 0x18]                ; 00406cc4
    SHL ESI,0x2                         ; 00406cc7
    ADD EAX,ESI                         ; 00406cca
    POP ESI                             ; 00406ccc
    POP EBX                             ; 00406ccd
    RET                                 ; 00406cce
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00406ccf | DAT_01c6b5cc
        ;   Label: LAB_00406ccf
    JMP 0x00406c9f                      ; 00406cd9
        ;   XREF to: 00406c9f (UNCONDITIONAL_JUMP)  ; LAB_00406c9f
    CMP dword ptr [0x005fba20],0x20     ; 00406cdb | DAT_005fba20
        ;   Label: LAB_00406cdb
    JNZ 0x00406cf0                      ; 00406ce2
        ;   XREF to: 00406cf0 (CONDITIONAL_JUMP)  ; LAB_00406cf0
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406ce4 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00406c9f                      ; 00406cee
        ;   XREF to: 00406c9f (UNCONDITIONAL_JUMP)  ; LAB_00406c9f
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406cf0 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00406cf0
    JMP 0x00406c9f                      ; 00406cfa
        ;   XREF to: 00406c9f (UNCONDITIONAL_JUMP)  ; LAB_00406c9f
    CMP dword ptr [0x01c6e2a0],0x0      ; 00406cfc | DAT_01c6e2a0
        ;   Label: LAB_00406cfc
    JNZ 0x00406d51                      ; 00406d03
        ;   XREF to: 00406d51 (CONDITIONAL_JUMP)  ; LAB_00406d51
    CMP dword ptr [0x005fba20],0x20     ; 00406d05 | DAT_005fba20
    JNZ 0x00406d45                      ; 00406d0c
        ;   XREF to: 00406d45 (CONDITIONAL_JUMP)  ; LAB_00406d45
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406d0e | DAT_01c6b5cc
    MOV EAX,0x28d                       ; 00406d18
        ;   Label: LAB_00406d18
    PUSH ESI                            ; 00406d1d
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406d1e
    XOR EDX,EDX                         ; 00406d21
    PUSH ECX                            ; 00406d23
    MOV [0x01c6e2b4],EAX                ; 00406d24 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 00406d29 | DAT_01c6e2b8
    CALL FUN_0043bac0                   ; 00406d2f
        ;   XREF to: 0043bac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043bac0()
    ADD ESP,0x8                         ; 00406d34
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406d37
    LEA EAX,[EBX + 0x18]                ; 00406d3a
    SHL ESI,0x2                         ; 00406d3d
    ADD EAX,ESI                         ; 00406d40
    POP ESI                             ; 00406d42
    POP EBX                             ; 00406d43
    RET                                 ; 00406d44
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00406d45 | DAT_01c6b5cc
        ;   Label: LAB_00406d45
    JMP 0x00406d18                      ; 00406d4f
        ;   XREF to: 00406d18 (UNCONDITIONAL_JUMP)  ; LAB_00406d18
    CMP dword ptr [0x005fba20],0x20     ; 00406d51 | DAT_005fba20
        ;   Label: LAB_00406d51
    JNZ 0x00406d66                      ; 00406d58
        ;   XREF to: 00406d66 (CONDITIONAL_JUMP)  ; LAB_00406d66
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406d5a | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00406d18                      ; 00406d64
        ;   XREF to: 00406d18 (UNCONDITIONAL_JUMP)  ; LAB_00406d18
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406d66 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00406d66
    JMP 0x00406d18                      ; 00406d70
        ;   XREF to: 00406d18 (UNCONDITIONAL_JUMP)  ; LAB_00406d18
    PUSH EBX                            ; 00406d72
        ;   Label: LAB_00406d72
    CALL FUN_004057b0                   ; 00406d73
        ;   XREF to: 004057b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004057b0()
    ADD ESP,0x4                         ; 00406d78
    PUSH EBX                            ; 00406d7b
    CALL FUN_004054e0                   ; 00406d7c
        ;   XREF to: 004054e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004054e0()
    ADD ESP,0x4                         ; 00406d81
    POP EBX                             ; 00406d84
    RET                                 ; 00406d85

