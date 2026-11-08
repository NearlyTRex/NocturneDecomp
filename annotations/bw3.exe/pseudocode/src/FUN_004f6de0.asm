; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6de0(int *param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004f70a0 at 004f71e0
;   FUN_004f72a0 at 004f72f7
;   FUN_004f7590 at 004f763c
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d2159c
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_02024a2c
;   undefined4 DAT_02024a30
;
; Called Functions:
;   FUN_004c4870
;   FUN_004f6a80
;   FUN_004f6bf0
;   FUN_004f6f80
;   FUN_00532b80
;   FUN_00556c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6de0
        ;   Label: FUN_004f6de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f6de1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f6de5
    CMP EAX,dword ptr [EBX]             ; 004f6de9
    JNZ 0x004f6def                      ; 004f6deb
        ;   XREF to: 004f6def (CONDITIONAL_JUMP)  ; LAB_004f6def
    POP EBX                             ; 004f6ded
    RET                                 ; 004f6dee
    PUSH ESI                            ; 004f6def
        ;   Label: LAB_004f6def
    LEA EDX,[EBX + 0x8]                 ; 004f6df0
    MOV dword ptr [EBX],EAX             ; 004f6df3
    SHL EAX,0x8                         ; 004f6df5
    ADD EAX,EDX                         ; 004f6df8
    PUSH EAX                            ; 004f6dfa
    MOV ECX,dword ptr [0x00603b28]      ; 004f6dfb | DAT_00603b28
    PUSH ECX                            ; 004f6e01 | DAT_01ed78c8
    CALL FUN_00532b80                   ; 004f6e02
        ;   XREF to: 00532b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00532b80()
    MOV ESI,dword ptr [EBX + 0x1008]    ; 004f6e07
    ADD ESP,0x8                         ; 004f6e0d
    TEST ESI,ESI                        ; 004f6e10
    JZ 0x004f6e54                       ; 004f6e12
        ;   XREF to: 004f6e54 (CONDITIONAL_JUMP)  ; LAB_004f6e54
    PUSH EBX                            ; 004f6e14
    CALL FUN_004f6bf0                   ; 004f6e15
        ;   XREF to: 004f6bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6bf0()
    ADD ESP,0x4                         ; 004f6e1a
        ;   Label: LAB_004f6e1a
    PUSH EDI                            ; 004f6e1d
    MOV EDI,dword ptr [EBX]             ; 004f6e1e
    CMP EDI,dword ptr [EBX + 0x1454]    ; 004f6e20
    JNZ 0x004f6e5c                      ; 004f6e26
        ;   XREF to: 004f6e5c (CONDITIONAL_JUMP)  ; LAB_004f6e5c
    XOR EBX,EBX                         ; 004f6e28
        ;   Label: LAB_004f6e28
    XOR ESI,ESI                         ; 004f6e2a
    POP EDI                             ; 004f6e2c
    MOV EAX,[0x00603b28]                ; 004f6e2d | DAT_00603b28
        ;   Label: LAB_004f6e2d
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 004f6e32 | DAT_02024a2c
    JGE 0x004f6e67                      ; 004f6e38
        ;   XREF to: 004f6e67 (CONDITIONAL_JUMP)  ; LAB_004f6e67
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004f6e3a | DAT_02024a30
    PUSH EAX                            ; 004f6e41
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f6e42
    ADD EBX,0x4                         ; 004f6e48
    INC ESI                             ; 004f6e4b
    CALL dword ptr [EDX + 0x50]         ; 004f6e4c
    ADD ESP,0x4                         ; 004f6e4f
    JMP 0x004f6e2d                      ; 004f6e52
        ;   XREF to: 004f6e2d (UNCONDITIONAL_JUMP)  ; LAB_004f6e2d
    PUSH EBX                            ; 004f6e54
        ;   Label: LAB_004f6e54
    CALL FUN_004f6f80                   ; 004f6e55
        ;   XREF to: 004f6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6f80()
    JMP 0x004f6e1a                      ; 004f6e5a
        ;   XREF to: 004f6e1a (UNCONDITIONAL_JUMP)  ; LAB_004f6e1a
    PUSH EBX                            ; 004f6e5c
        ;   Label: LAB_004f6e5c
    CALL FUN_004f6a80                   ; 004f6e5d
        ;   XREF to: 004f6a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6a80()
    ADD ESP,0x4                         ; 004f6e62
    JMP 0x004f6e28                      ; 004f6e65
        ;   XREF to: 004f6e28 (UNCONDITIONAL_JUMP)  ; LAB_004f6e28
    CALL FUN_00556c60                   ; 004f6e67
        ;   XREF to: 00556c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00556c60()
        ;   Label: LAB_004f6e67
    MOV EAX,[0x005fe9dc]                ; 004f6e6c | DAT_005fe9dc
    PUSH EAX                            ; 004f6e71
    CALL FUN_004c4870                   ; 004f6e72
        ;   XREF to: 004c4870 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4870()
    MOV EAX,[0x005fe9dc]                ; 004f6e77 | DAT_005fe9dc
    ADD ESP,0x4                         ; 004f6e7c
    MOV dword ptr [EAX + 0x290],0x1     ; 004f6e7f | DAT_01d2159c
    POP ESI                             ; 004f6e89
    POP EBX                             ; 004f6e8a
    RET                                 ; 004f6e8b

