; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d3b20(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004d3c90 at 004d3de6
;
; Referenced Globals:
;   undefined4 DAT_005c4dcd
;   undefined4 DAT_005c4dd5
;   undefined4 DAT_005c4ddd
;   undefined4 DAT_005c4de5
;   undefined4 DAT_00603b28
;   undefined4 DAT_01548bfc
;   undefined4 DAT_02024a2c
;   undefined4 DAT_02024a30
;
; Called Functions:
;   FUN_00408bf0
;   FUN_0040c840
;   FUN_004594a0
;   FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3b20
        ;   Label: FUN_004d3b20
    PUSH ESI                            ; 004d3b21
    PUSH EDI                            ; 004d3b22
    PUSH EBP                            ; 004d3b23
    MOV EBP,ESP                         ; 004d3b24
    SUB ESP,0x4c                        ; 004d3b26
    AND ESP,0xfffffff8                  ; 004d3b29
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3b2c
    MOV EAX,dword ptr [EAX + 0x20a24]   ; 004d3b2f
    MOV dword ptr [ESP + 0x40],EAX      ; 004d3b35
    TEST EAX,EAX                        ; 004d3b39
    JZ 0x004d3b5b                       ; 004d3b3b
        ;   XREF to: 004d3b5b (CONDITIONAL_JUMP)  ; LAB_004d3b5b
    XOR EDX,EDX                         ; 004d3b3d
    MOV dword ptr [ESP + 0x44],EDX      ; 004d3b3f
    MOV dword ptr [ESP + 0x48],EDX      ; 004d3b43
    MOV EBX,dword ptr [0x00603b28]      ; 004d3b47 | DAT_00603b28
        ;   Label: LAB_004d3b47
    MOV EAX,dword ptr [ESP + 0x44]      ; 004d3b4d
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004d3b51 | DAT_02024a2c
    JL 0x004d3b78                       ; 004d3b57
        ;   XREF to: 004d3b78 (CONDITIONAL_JUMP)  ; LAB_004d3b78
    XOR EAX,EAX                         ; 004d3b59
    MOV ESP,EBP                         ; 004d3b5b
        ;   Label: LAB_004d3b5b
    POP EBP                             ; 004d3b5d
    POP EDI                             ; 004d3b5e
    POP ESI                             ; 004d3b5f
    POP EBX                             ; 004d3b60
    RET                                 ; 004d3b61
    MOV EDI,dword ptr [ESP + 0x44]      ; 004d3b62
        ;   Label: LAB_004d3b62
    MOV ESI,dword ptr [ESP + 0x48]      ; 004d3b66
    INC EDI                             ; 004d3b6a
    ADD ESI,0x4                         ; 004d3b6b
    MOV dword ptr [ESP + 0x44],EDI      ; 004d3b6e
    MOV dword ptr [ESP + 0x48],ESI      ; 004d3b72
    JMP 0x004d3b47                      ; 004d3b76
        ;   XREF to: 004d3b47 (UNCONDITIONAL_JUMP)  ; LAB_004d3b47
    MOV EAX,dword ptr [ESP + 0x48]      ; 004d3b78
        ;   Label: LAB_004d3b78
    MOV EDI,dword ptr [0x01548bfc]      ; 004d3b7c | DAT_01548bfc
    ADD EBX,EAX                         ; 004d3b82
    PUSH EDI                            ; 004d3b84
    MOV EDX,dword ptr [EBX + 0x14d168]  ; 004d3b85 | DAT_02024a30
    PUSH EDX                            ; 004d3b8b
    CALL FUN_0040c840                   ; 004d3b8c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV EBX,EAX                         ; 004d3b91
    ADD ESP,0x8                         ; 004d3b93
    TEST EAX,EAX                        ; 004d3b96
    JZ 0x004d3b62                       ; 004d3b98
        ;   XREF to: 004d3b62 (CONDITIONAL_JUMP)  ; LAB_004d3b62
    MOV ECX,dword ptr [ESP + 0x40]      ; 004d3b9a
    PUSH ECX                            ; 004d3b9e
    PUSH EAX                            ; 004d3b9f
    CALL FUN_004594a0                   ; 004d3ba0
        ;   XREF to: 004594a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004594a0()
    ADD ESP,0x8                         ; 004d3ba5
    TEST EAX,EAX                        ; 004d3ba8
    JZ 0x004d3b62                       ; 004d3baa
        ;   XREF to: 004d3b62 (CONDITIONAL_JUMP)  ; LAB_004d3b62
    ADD EBX,0x20                        ; 004d3bac
    PUSH EBX                            ; 004d3baf
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d3bb0
    PUSH EBX                            ; 004d3bb3
    LEA ESI,[ESP + 0x3c]                ; 004d3bb4
    LEA EDI,[ESP + 0x30]                ; 004d3bb8
    CALL FUN_00408bf0                   ; 004d3bbc
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x3c]                ; 004d3bc1
    ADD ESP,0x8                         ; 004d3bc5
    MOVSD ES:EDI,ESI                    ; 004d3bc8
    MOVSD ES:EDI,ESI                    ; 004d3bc9
    MOVSD ES:EDI,ESI                    ; 004d3bca
    FLD1                                ; 004d3bcb
    FLD float ptr [ESP + 0x2c]          ; 004d3bcd
    FSTP double ptr [ESP + 0x8]         ; 004d3bd1
    FCOMP double ptr [ESP + 0x8]        ; 004d3bd5
    FNSTSW AX                           ; 004d3bd9
    SAHF                                ; 004d3bdb
    JA 0x004d3b62                       ; 004d3bdc
        ;   XREF to: 004d3b62 (CONDITIONAL_JUMP)  ; LAB_004d3b62
    FLD double ptr [ESP + 0x8]          ; 004d3bde
    FCOMP double ptr [0x005c4dcd]       ; 004d3be2 | DAT_005c4dcd
    FNSTSW AX                           ; 004d3be8
    SAHF                                ; 004d3bea
    JA 0x004d3b62                       ; 004d3beb
        ;   XREF to: 004d3b62 (CONDITIONAL_JUMP)  ; LAB_004d3b62
    FLD float ptr [ESP + 0x30]          ; 004d3bf1
    FST double ptr [ESP]                ; 004d3bf5
    FCOMP double ptr [0x005c4dd5]       ; 004d3bf8 | DAT_005c4dd5
    FNSTSW AX                           ; 004d3bfe
    SAHF                                ; 004d3c00
    JC 0x004d3b62                       ; 004d3c01
        ;   XREF to: 004d3b62 (CONDITIONAL_JUMP)  ; LAB_004d3b62
    FLD double ptr [ESP]                ; 004d3c07
    FCOMP double ptr [0x005c4ddd]       ; 004d3c0a | DAT_005c4ddd
    FNSTSW AX                           ; 004d3c10
    SAHF                                ; 004d3c12
    JA 0x004d3b62                       ; 004d3c13
        ;   XREF to: 004d3b62 (CONDITIONAL_JUMP)  ; LAB_004d3b62
    FLD float ptr [ESP + 0x28]          ; 004d3c19
    FABS                                ; 004d3c1d
    FCOMP double ptr [0x005c4ddd]       ; 004d3c1f | DAT_005c4ddd
    FNSTSW AX                           ; 004d3c25
    SAHF                                ; 004d3c27
    JA 0x004d3b62                       ; 004d3c28
        ;   XREF to: 004d3b62 (CONDITIONAL_JUMP)  ; LAB_004d3b62
    LEA EAX,[ESP + 0x28]                ; 004d3c2e
    PUSH EAX                            ; 004d3c32
    LEA ESI,[ESP + 0x14]                ; 004d3c33
    LEA EDI,[ESP + 0x20]                ; 004d3c37
    CALL FUN_00576250                   ; 004d3c3b
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0x14]                ; 004d3c40
    ADD ESP,0x4                         ; 004d3c44
    MOVSD ES:EDI,ESI                    ; 004d3c47
    MOVSD ES:EDI,ESI                    ; 004d3c48
    MOVSD ES:EDI,ESI                    ; 004d3c49
    FLD float ptr [ESP + 0x20]          ; 004d3c4a
    FABS                                ; 004d3c4e
    FCOMP double ptr [0x005c4de5]       ; 004d3c50 | DAT_005c4de5
    FNSTSW AX                           ; 004d3c56
    SAHF                                ; 004d3c58
    JA 0x004d3b62                       ; 004d3c59
        ;   XREF to: 004d3b62 (CONDITIONAL_JUMP)  ; LAB_004d3b62
    MOV dword ptr [EBX + 0x20b7c],0x0   ; 004d3c5f
    MOV EAX,dword ptr [ESP + 0x40]      ; 004d3c69
    MOV dword ptr [EBX + 0x20b68],0x6   ; 004d3c6d
    MOV dword ptr [EBX + 0x20b6c],EAX   ; 004d3c77
    MOV dword ptr [EBX + 0x20b70],EAX   ; 004d3c7d
    MOV EAX,0x1                         ; 004d3c83
    MOV ESP,EBP                         ; 004d3c88
    POP EBP                             ; 004d3c8a
    POP EDI                             ; 004d3c8b
    POP ESI                             ; 004d3c8c
    POP EBX                             ; 004d3c8d
    RET                                 ; 004d3c8e

