; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool engine_prim_c_FUN_004f9bc0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5028
;   undefined4 DAT_006b0280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9bc0
        ;   Label: engine_prim.c_FUN_004f9bc0
    PUSH ESI                            ; 004f9bc1
    PUSH EDI                            ; 004f9bc2
    PUSH EBP                            ; 004f9bc3
    MOV EBP,ESP                         ; 004f9bc4
    SUB ESP,0x14                        ; 004f9bc6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f9bc9
    MOV EDX,dword ptr [EBX + 0x18]      ; 004f9bcc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f9bcf
    SUB EAX,EDX                         ; 004f9bd6
    MOV ECX,0x5c5014                    ; 004f9bd8 | DAT_005c5014
    SHL EAX,0x4                         ; 004f9bdd
    MOV EDX,dword ptr [EBX + 0x24]      ; 004f9be0
    ADD ECX,EAX                         ; 004f9be3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f9be5
    MOV EBX,dword ptr [EBX + 0x30]      ; 004f9bec
    SUB EAX,EDX                         ; 004f9bef
    LEA EDX,[EBX*0x4 + 0x0]             ; 004f9bf1
    SHL EAX,0x4                         ; 004f9bf8
    SUB EDX,EBX                         ; 004f9bfb
    ADD EAX,0x5c5014                    ; 004f9bfd | DAT_005c5014
    SHL EDX,0x4                         ; 004f9c02
    MOV EBX,dword ptr [0x006b0280]      ; 004f9c05 | DAT_006b0280
    ADD EDX,0x5c5014                    ; 004f9c0b | DAT_005c5014
    CMP EBX,0x1                         ; 004f9c11
    JNZ 0x004f9c7e                      ; 004f9c14
        ;   XREF to: 004f9c7e (CONDITIONAL_JUMP)  ; LAB_004f9c7e
    MOV EDI,dword ptr [ECX + 0x10]      ; 004f9c16 | DAT_005c5024
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9c19 | DAT_005c5024
    SUB EBX,EDI                         ; 004f9c1c
    MOV dword ptr [EBP + -0x14],EBX     ; 004f9c1e
    MOV EBX,dword ptr [EAX + 0x14]      ; 004f9c21 | DAT_005c5028
    MOV ESI,dword ptr [ECX + 0x14]      ; 004f9c24 | DAT_005c5028
    SUB EBX,ESI                         ; 004f9c27
    MOV dword ptr [EBP + -0x10],EBX     ; 004f9c29
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f9c2c | DAT_005c5024
    MOV EDI,dword ptr [EAX + 0x10]      ; 004f9c2f | DAT_005c5024
    SUB ECX,EDI                         ; 004f9c32
    MOV dword ptr [EBP + -0xc],ECX      ; 004f9c34
    MOV EDX,dword ptr [EDX + 0x14]      ; 004f9c37 | DAT_005c5028
    MOV ECX,dword ptr [EAX + 0x14]      ; 004f9c3a | DAT_005c5028
    SUB EDX,ECX                         ; 004f9c3d
    MOV dword ptr [EBP + -0x8],EDX      ; 004f9c3f
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 004f9c42
        ;   Label: LAB_004f9c42
    IMUL dword ptr [EBP + 0xfffffff8]   ; 004f9c48
    MOV EBX,EAX                         ; 004f9c4e
    MOV ECX,EDX                         ; 004f9c50
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 004f9c52
    IMUL dword ptr [EBP + 0xfffffff4]   ; 004f9c58
    SUB EAX,EBX                         ; 004f9c5e
    SBB EDX,ECX                         ; 004f9c60
    MOV EAX,0x0                         ; 004f9c62
    JGE 0x004f9c6e                      ; 004f9c67
        ;   XREF to: 004f9c6e (CONDITIONAL_JUMP)  ; LAB_004f9c6e
    MOV EAX,0x1                         ; 004f9c69
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 004f9c6e
        ;   Label: LAB_004f9c6e
    MOV EAX,dword ptr [EBP + -0x4]      ; 004f9c74
    MOV ESP,EBP                         ; 004f9c77
    POP EBP                             ; 004f9c79
    POP EDI                             ; 004f9c7a
    POP ESI                             ; 004f9c7b
    POP EBX                             ; 004f9c7c
    RET                                 ; 004f9c7d
    MOV ESI,dword ptr [ECX + 0x10]      ; 004f9c7e | DAT_005c5024
        ;   Label: LAB_004f9c7e
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9c81 | DAT_005c5024
    SUB EBX,ESI                         ; 004f9c84
    MOV dword ptr [EBP + -0xc],EBX      ; 004f9c86
    MOV EBX,dword ptr [EAX + 0x14]      ; 004f9c89 | DAT_005c5028
    MOV EDI,dword ptr [ECX + 0x14]      ; 004f9c8c | DAT_005c5028
    SUB EBX,EDI                         ; 004f9c8f
    MOV dword ptr [EBP + -0x8],EBX      ; 004f9c91
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f9c94 | DAT_005c5024
    MOV EBX,dword ptr [EAX + 0x10]      ; 004f9c97 | DAT_005c5024
    SUB ECX,EBX                         ; 004f9c9a
    MOV dword ptr [EBP + -0x14],ECX     ; 004f9c9c
    MOV EDX,dword ptr [EDX + 0x14]      ; 004f9c9f | DAT_005c5028
    MOV ESI,dword ptr [EAX + 0x14]      ; 004f9ca2 | DAT_005c5028
    SUB EDX,ESI                         ; 004f9ca5
    MOV dword ptr [EBP + -0x10],EDX     ; 004f9ca7
    JMP 0x004f9c42                      ; 004f9caa
        ;   XREF to: 004f9c42 (UNCONDITIONAL_JUMP)  ; LAB_004f9c42

