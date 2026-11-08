; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406d70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f028
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_00405600
;   FUN_004057b0
;   FUN_0043cbf0
;   FUN_0043de60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406d70
        ;   Label: FUN_00406d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00406d71
    CMP dword ptr [0x01c50948],0x0      ; 00406d75 | DAT_01c50948
    JZ 0x00406e95                       ; 00406d7c
        ;   XREF to: 00406e95 (CONDITIONAL_JUMP)  ; LAB_00406e95
    PUSH ESI                            ; 00406d82
    LEA ESI,[EBX + 0x18]                ; 00406d83
    LEA EAX,[EBX + 0x8]                 ; 00406d86
    PUSH EAX                            ; 00406d89
    CALL FUN_00403920                   ; 00406d8a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00406d8f
    TEST EAX,EAX                        ; 00406d92
    JZ 0x00406de1                       ; 00406d94
        ;   XREF to: 00406de1 (CONDITIONAL_JUMP)  ; LAB_00406de1
    CMP dword ptr [0x01c4f028],0x0      ; 00406d96 | DAT_01c4f028
    JZ 0x00406e1c                       ; 00406d9d
        ;   XREF to: 00406e1c (CONDITIONAL_JUMP)  ; LAB_00406e1c
    CMP dword ptr [0x01c51d00],0x0      ; 00406da3 | DAT_01c51d00
    JNZ 0x00406dfb                      ; 00406daa
        ;   XREF to: 00406dfb (CONDITIONAL_JUMP)  ; LAB_00406dfb
    CMP dword ptr [0x0061b4a0],0x20     ; 00406dac | DAT_0061b4a0
    JNZ 0x00406def                      ; 00406db3
        ;   XREF to: 00406def (CONDITIONAL_JUMP)  ; LAB_00406def
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406db5 | DAT_01c4f02c
    MOV EAX,0x8d                        ; 00406dbf
        ;   Label: LAB_00406dbf
    PUSH ESI                            ; 00406dc4
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406dc5
    MOV EDX,0x5                         ; 00406dc8
    PUSH ECX                            ; 00406dcd
    MOV [0x01c51d14],EAX                ; 00406dce | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 00406dd3 | DAT_01c51d18
    CALL FUN_0043cbf0                   ; 00406dd9
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 00406dde
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406de1
        ;   Label: LAB_00406de1
    LEA EAX,[EBX + 0x18]                ; 00406de4
    SHL ESI,0x2                         ; 00406de7
    ADD EAX,ESI                         ; 00406dea
    POP ESI                             ; 00406dec
    POP EBX                             ; 00406ded
    RET                                 ; 00406dee
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406def | DAT_01c4f02c
        ;   Label: LAB_00406def
    JMP 0x00406dbf                      ; 00406df9
        ;   XREF to: 00406dbf (UNCONDITIONAL_JUMP)  ; LAB_00406dbf
    CMP dword ptr [0x0061b4a0],0x20     ; 00406dfb | DAT_0061b4a0
        ;   Label: LAB_00406dfb
    JNZ 0x00406e10                      ; 00406e02
        ;   XREF to: 00406e10 (CONDITIONAL_JUMP)  ; LAB_00406e10
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406e04 | DAT_01c4f02c | LAB_0057de01
    JMP 0x00406dbf                      ; 00406e0e
        ;   XREF to: 00406dbf (UNCONDITIONAL_JUMP)  ; LAB_00406dbf
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406e10 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00406e10
    JMP 0x00406dbf                      ; 00406e1a
        ;   XREF to: 00406dbf (UNCONDITIONAL_JUMP)  ; LAB_00406dbf
    CMP dword ptr [0x01c51d00],0x0      ; 00406e1c | DAT_01c51d00
        ;   Label: LAB_00406e1c
    JNZ 0x00406e74                      ; 00406e23
        ;   XREF to: 00406e74 (CONDITIONAL_JUMP)  ; LAB_00406e74
    CMP dword ptr [0x0061b4a0],0x20     ; 00406e25 | DAT_0061b4a0
    JNZ 0x00406e68                      ; 00406e2c
        ;   XREF to: 00406e68 (CONDITIONAL_JUMP)  ; LAB_00406e68
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406e2e | DAT_01c4f02c
    MOV EAX,0x28d                       ; 00406e38
        ;   Label: LAB_00406e38
    PUSH ESI                            ; 00406e3d
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406e3e
    MOV EDX,0x5                         ; 00406e41
    PUSH ECX                            ; 00406e46
    MOV [0x01c51d14],EAX                ; 00406e47 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 00406e4c | DAT_01c51d18
    CALL FUN_0043de60                   ; 00406e52
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043de60()
    ADD ESP,0x8                         ; 00406e57
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406e5a
    LEA EAX,[EBX + 0x18]                ; 00406e5d
    SHL ESI,0x2                         ; 00406e60
    ADD EAX,ESI                         ; 00406e63
    POP ESI                             ; 00406e65
    POP EBX                             ; 00406e66
    RET                                 ; 00406e67
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406e68 | DAT_01c4f02c
        ;   Label: LAB_00406e68
    JMP 0x00406e38                      ; 00406e72
        ;   XREF to: 00406e38 (UNCONDITIONAL_JUMP)  ; LAB_00406e38
    CMP dword ptr [0x0061b4a0],0x20     ; 00406e74 | DAT_0061b4a0
        ;   Label: LAB_00406e74
    JNZ 0x00406e89                      ; 00406e7b
        ;   XREF to: 00406e89 (CONDITIONAL_JUMP)  ; LAB_00406e89
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406e7d | DAT_01c4f02c | LAB_0057de01
    JMP 0x00406e38                      ; 00406e87
        ;   XREF to: 00406e38 (UNCONDITIONAL_JUMP)  ; LAB_00406e38
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406e89 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00406e89
    JMP 0x00406e38                      ; 00406e93
        ;   XREF to: 00406e38 (UNCONDITIONAL_JUMP)  ; LAB_00406e38
    PUSH EBX                            ; 00406e95
        ;   Label: LAB_00406e95
    CALL FUN_004057b0                   ; 00406e96
        ;   XREF to: 004057b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004057b0()
    ADD ESP,0x4                         ; 00406e9b
    PUSH EBX                            ; 00406e9e
    CALL FUN_00405600                   ; 00406e9f
        ;   XREF to: 00405600 (UNCONDITIONAL_CALL)  ; undefined FUN_00405600()
    ADD ESP,0x4                         ; 00406ea4
    POP EBX                             ; 00406ea7
    RET                                 ; 00406ea8

