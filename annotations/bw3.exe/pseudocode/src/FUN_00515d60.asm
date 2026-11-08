; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00515d60(ushort *param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0046dbd0 at 0046dde4
;   FUN_0046e300 at 0046e42f
;
; Referenced Globals:
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b028
;   undefined4 DAT_007303fc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515d60
        ;   Label: FUN_00515d60
    PUSH ESI                            ; 00515d61
    PUSH EDI                            ; 00515d62
    PUSH EBP                            ; 00515d63
    MOV EBP,ESP                         ; 00515d64
    SUB ESP,0x14                        ; 00515d66
    MOV EBX,dword ptr [EBP + 0x14]      ; 00515d69
    XOR EDX,EDX                         ; 00515d6c
    MOV DX,word ptr [EBX]               ; 00515d6e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00515d71
    MOV ECX,0x60b014                    ; 00515d78 | DAT_0060b014
    SUB EAX,EDX                         ; 00515d7d
    XOR EDX,EDX                         ; 00515d7f
    SHL EAX,0x4                         ; 00515d81
    MOV DX,word ptr [EBX + 0x2]         ; 00515d84
    ADD ECX,EAX                         ; 00515d88
    LEA EAX,[EDX*0x4 + 0x0]             ; 00515d8a
    SUB EAX,EDX                         ; 00515d91
    SHL EAX,0x4                         ; 00515d93
    MOV BX,word ptr [EBX + 0x4]         ; 00515d96
    ADD EAX,0x60b014                    ; 00515d9a | DAT_0060b014
    AND EBX,0xffff                      ; 00515d9f
    LEA EDX,[EBX*0x4 + 0x0]             ; 00515da5
    SUB EDX,EBX                         ; 00515dac
    SHL EDX,0x4                         ; 00515dae
    MOV EBX,dword ptr [0x007303fc]      ; 00515db1 | DAT_007303fc
    ADD EDX,0x60b014                    ; 00515db7 | DAT_0060b014
    CMP EBX,0x1                         ; 00515dbd
    JNZ 0x00515e2a                      ; 00515dc0
        ;   XREF to: 00515e2a (CONDITIONAL_JUMP)  ; LAB_00515e2a
    MOV EDI,dword ptr [ECX + 0x10]      ; 00515dc2 | DAT_0060b024
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515dc5 | DAT_0060b024
    SUB EBX,EDI                         ; 00515dc8
    MOV dword ptr [EBP + -0x14],EBX     ; 00515dca
    MOV EBX,dword ptr [EAX + 0x14]      ; 00515dcd | DAT_0060b028
    MOV ESI,dword ptr [ECX + 0x14]      ; 00515dd0 | DAT_0060b028
    SUB EBX,ESI                         ; 00515dd3
    MOV dword ptr [EBP + -0x10],EBX     ; 00515dd5
    MOV ECX,dword ptr [EDX + 0x10]      ; 00515dd8 | DAT_0060b024
    MOV EDI,dword ptr [EAX + 0x10]      ; 00515ddb | DAT_0060b024
    SUB ECX,EDI                         ; 00515dde
    MOV dword ptr [EBP + -0xc],ECX      ; 00515de0
    MOV EDX,dword ptr [EDX + 0x14]      ; 00515de3 | DAT_0060b028
    MOV ECX,dword ptr [EAX + 0x14]      ; 00515de6 | DAT_0060b028
    SUB EDX,ECX                         ; 00515de9
    MOV dword ptr [EBP + -0x8],EDX      ; 00515deb
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00515dee
        ;   Label: LAB_00515dee
    IMUL dword ptr [EBP + 0xfffffff8]   ; 00515df4
    MOV EBX,EAX                         ; 00515dfa
    MOV ECX,EDX                         ; 00515dfc
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 00515dfe
    IMUL dword ptr [EBP + 0xfffffff4]   ; 00515e04
    SUB EAX,EBX                         ; 00515e0a
    SBB EDX,ECX                         ; 00515e0c
    MOV EAX,0x0                         ; 00515e0e
    JGE 0x00515e1a                      ; 00515e13
        ;   XREF to: 00515e1a (CONDITIONAL_JUMP)  ; LAB_00515e1a
    MOV EAX,0x1                         ; 00515e15
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 00515e1a
        ;   Label: LAB_00515e1a
    MOV EAX,dword ptr [EBP + -0x4]      ; 00515e20
    MOV ESP,EBP                         ; 00515e23
    POP EBP                             ; 00515e25
    POP EDI                             ; 00515e26
    POP ESI                             ; 00515e27
    POP EBX                             ; 00515e28
    RET                                 ; 00515e29
    MOV ESI,dword ptr [ECX + 0x10]      ; 00515e2a | DAT_0060b024
        ;   Label: LAB_00515e2a
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515e2d | DAT_0060b024
    SUB EBX,ESI                         ; 00515e30
    MOV dword ptr [EBP + -0xc],EBX      ; 00515e32
    MOV EBX,dword ptr [EAX + 0x14]      ; 00515e35 | DAT_0060b028
    MOV EDI,dword ptr [ECX + 0x14]      ; 00515e38 | DAT_0060b028
    SUB EBX,EDI                         ; 00515e3b
    MOV dword ptr [EBP + -0x8],EBX      ; 00515e3d
    MOV ECX,dword ptr [EDX + 0x10]      ; 00515e40 | DAT_0060b024
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515e43 | DAT_0060b024
    SUB ECX,EBX                         ; 00515e46
    MOV dword ptr [EBP + -0x14],ECX     ; 00515e48
    MOV EDX,dword ptr [EDX + 0x14]      ; 00515e4b | DAT_0060b028
    MOV ESI,dword ptr [EAX + 0x14]      ; 00515e4e | DAT_0060b028
    SUB EDX,ESI                         ; 00515e51
    MOV dword ptr [EBP + -0x10],EDX     ; 00515e53
    JMP 0x00515dee                      ; 00515e56
        ;   XREF to: 00515dee (UNCONDITIONAL_JUMP)  ; LAB_00515dee

