; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00513d30(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00513ea0 at 00513ea5
;
; Referenced Globals:
;   undefined4 DAT_005faac0
;   undefined4 DAT_0061b2e8
;   undefined4 DAT_0061b2f8
;   undefined4 DAT_0061b2fc
;   undefined4 DAT_01e4fed0
;   undefined4 DAT_01fc9c68
;
; Called Functions:
;   FUN_00476a50
;   FUN_005121a0
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513d30
        ;   Label: FUN_00513d30
    PUSH ESI                            ; 00513d31
    PUSH EDI                            ; 00513d32
    PUSH EBP                            ; 00513d33
    SUB ESP,0x24                        ; 00513d34
    MOV AH,byte ptr [0x01e4fed0]        ; 00513d37 | DAT_01e4fed0
    TEST AH,0x1                         ; 00513d3d
    JZ 0x00513e1f                       ; 00513d40
        ;   XREF to: 00513e1f (CONDITIONAL_JUMP)  ; LAB_00513e1f
    CMP dword ptr [0x0061b2f8],0x0      ; 00513d46 | DAT_0061b2f8
        ;   Label: LAB_00513d46
    JL 0x00513e50                       ; 00513d4d
        ;   XREF to: 00513e50 (CONDITIONAL_JUMP)  ; LAB_00513e50
    LEA EAX,[EAX]                       ; 00513d53
    LEA EDX,[EDX]                       ; 00513d59
    NOP                                 ; 00513d5f
    MOV ECX,dword ptr [ESP + 0x38]      ; 00513d60
        ;   Label: LAB_00513d60
    PUSH ECX                            ; 00513d64
    LEA ESI,[ESP + 0x4]                 ; 00513d65
    LEA EDI,[ESP + 0x1c]                ; 00513d69
    PUSH 0x1fc9c68                      ; 00513d6d | DAT_01fc9c68
    XOR EBP,EBP                         ; 00513d72
    XOR EBX,EBX                         ; 00513d74
    CALL FUN_00476a50                   ; 00513d76
        ;   XREF to: 00476a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00476a50()
    LEA ESI,[ESP + 0x8]                 ; 00513d7b
    ADD ESP,0x8                         ; 00513d7f
    XOR ECX,ECX                         ; 00513d82
    XOR EDX,EDX                         ; 00513d84
    MOVSD ES:EDI,ESI                    ; 00513d86
    MOVSD ES:EDI,ESI                    ; 00513d87
    MOVSD ES:EDI,ESI                    ; 00513d88
    MOV ESI,dword ptr [ESP + 0x18]      ; 00513d89
        ;   Label: LAB_00513d89
    CMP ESI,dword ptr [EDX + 0x1d78d30] ; 00513d8d
    JNZ 0x00513e68                      ; 00513d93
        ;   XREF to: 00513e68 (CONDITIONAL_JUMP)  ; LAB_00513e68
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00513d99
    CMP EDI,dword ptr [EDX + 0x1d78d34] ; 00513d9d
    JNZ 0x00513e68                      ; 00513da3
        ;   XREF to: 00513e68 (CONDITIONAL_JUMP)  ; LAB_00513e68
    MOV ESI,dword ptr [ESP + 0x20]      ; 00513da9
    CMP ESI,dword ptr [EDX + 0x1d78d38] ; 00513dad
    JNZ 0x00513e68                      ; 00513db3
        ;   XREF to: 00513e68 (CONDITIONAL_JUMP)  ; LAB_00513e68
    MOV EBP,ECX                         ; 00513db9
    LEA ECX,[EBP*0x4 + 0x0]             ; 00513dbb
        ;   Label: LAB_00513dbb
    XOR EAX,EAX                         ; 00513dc2
    MOV EBX,dword ptr [ECX + 0x61b2f8]  ; 00513dc4 | DAT_0061b2f8 | DAT_0061b2fc
        ;   Label: LAB_00513dc4
    MOV EDX,dword ptr [EAX + 0x61b2f8]  ; 00513dca | DAT_0061b2f8 | DAT_0061b2fc
    CMP EDX,EBX                         ; 00513dd0
    JGE 0x00513ddd                      ; 00513dd2
        ;   XREF to: 00513ddd (CONDITIONAL_JUMP)  ; LAB_00513ddd
    LEA ESI,[EDX + 0x1]                 ; 00513dd4
    MOV dword ptr [EAX + 0x61b2f8],ESI  ; 00513dd7 | DAT_0061b2fc | DAT_0061b2f8
    ADD EAX,0x4                         ; 00513ddd
        ;   Label: LAB_00513ddd
    CMP EAX,0x30                        ; 00513de0
    JNZ 0x00513dc4                      ; 00513de3
        ;   XREF to: 00513dc4 (CONDITIONAL_JUMP)  ; LAB_00513dc4
    IMUL EBX,EBP,0x138dc                ; 00513de5
    MOV ESI,dword ptr [ESP + 0x38]      ; 00513deb
    PUSH 0x1                            ; 00513def
    LEA EAX,[ESP + 0x10]                ; 00513df1
    XOR EDI,EDI                         ; 00513df5
    PUSH EAX                            ; 00513df7
    MOV dword ptr [EBP*0x4 + 0x61b2f8],EDI ; 00513df8 | DAT_0061b2f8
    ADD EBX,0x1d65480                   ; 00513dff
    LEA EDI,[ESP + 0x14]                ; 00513e05
    PUSH EBX                            ; 00513e09
    MOVSD ES:EDI,ESI                    ; 00513e0a
    MOVSD ES:EDI,ESI                    ; 00513e0b
    MOVSD ES:EDI,ESI                    ; 00513e0c
    CALL FUN_005121a0                   ; 00513e0d
        ;   XREF to: 005121a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005121a0()
    ADD ESP,0xc                         ; 00513e12
    MOV EAX,EBX                         ; 00513e15
    ADD ESP,0x24                        ; 00513e17
    POP EBP                             ; 00513e1a
    POP EDI                             ; 00513e1b
    POP ESI                             ; 00513e1c
    POP EBX                             ; 00513e1d
    RET                                 ; 00513e1e
    PUSH 0x5faac0                       ; 00513e1f | DAT_005faac0
        ;   Label: LAB_00513e1f
    MOV DL,AH                           ; 00513e24
    PUSH 0xc                            ; 00513e26
    OR DL,0x1                           ; 00513e28
    PUSH 0x1d65480                      ; 00513e2b
    MOV byte ptr [0x01e4fed0],DL        ; 00513e30 | DAT_01e4fed0
    CALL FUN_005b7f5f                   ; 00513e36
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00513e3b
    PUSH 0x61b2e8                       ; 00513e3e | DAT_0061b2e8
    CALL FUN_005b8d8c                   ; 00513e43
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00513e48
    JMP 0x00513d46                      ; 00513e4b
        ;   XREF to: 00513d46 (UNCONDITIONAL_JUMP)  ; LAB_00513d46
    XOR EDX,EDX                         ; 00513e50
        ;   Label: LAB_00513e50
    XOR EAX,EAX                         ; 00513e52
    MOV dword ptr [EDX + 0x61b2f8],EAX  ; 00513e54 | DAT_0061b2f8 | DAT_0061b2fc
        ;   Label: LAB_00513e54
    INC EAX                             ; 00513e5a
    ADD EDX,0x4                         ; 00513e5b
    CMP EAX,0xc                         ; 00513e5e
    JL 0x00513e54                       ; 00513e61
        ;   XREF to: 00513e54 (CONDITIONAL_JUMP)  ; LAB_00513e54
    JMP 0x00513d60                      ; 00513e63
        ;   XREF to: 00513d60 (UNCONDITIONAL_JUMP)  ; LAB_00513d60
    MOV EAX,dword ptr [EBX + 0x61b2f8]  ; 00513e68 | DAT_0061b2f8 | DAT_0061b2fc
        ;   Label: LAB_00513e68
    CMP EAX,dword ptr [EBP*0x4 + 0x61b2f8] ; 00513e6e | DAT_0061b2f8
    JLE 0x00513e79                      ; 00513e75
        ;   XREF to: 00513e79 (CONDITIONAL_JUMP)  ; LAB_00513e79
    MOV EBP,ECX                         ; 00513e77
    ADD EBX,0x4                         ; 00513e79
        ;   Label: LAB_00513e79
    INC ECX                             ; 00513e7c
    ADD EDX,0x138dc                     ; 00513e7d
    CMP ECX,0xc                         ; 00513e83
    JL 0x00513d89                       ; 00513e86
        ;   XREF to: 00513d89 (CONDITIONAL_JUMP)  ; LAB_00513d89
    JMP 0x00513dbb                      ; 00513e8c
        ;   XREF to: 00513dbb (UNCONDITIONAL_JUMP)  ; LAB_00513dbb

