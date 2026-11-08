; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00573a60(int *param_1)
;
;
; XREF[1]:
;   FUN_00573b80 at 00573c4c
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_005ec65a
;   TerminatedCString s_CTextureCache_findFreeSl_005ec670
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02652eb4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b77c0
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573a60
        ;   Label: FUN_00573a60
    PUSH ESI                            ; 00573a61
    PUSH EDI                            ; 00573a62
    PUSH EBP                            ; 00573a63
    MOV ESI,dword ptr [ESP + 0x14]      ; 00573a64
    CMP dword ptr [ESI],0x0             ; 00573a68
    JZ 0x00573af4                       ; 00573a6b
        ;   XREF to: 00573af4 (CONDITIONAL_JUMP)  ; LAB_00573af4
    MOV ECX,0xffffffff                  ; 00573a71
    MOV EAX,ESI                         ; 00573a76
    XOR EDX,EDX                         ; 00573a78
    XOR EBX,EBX                         ; 00573a7a
    CMP dword ptr [EAX + 0x5c],0x0      ; 00573a7c
        ;   Label: LAB_00573a7c
    JZ 0x00573b4f                       ; 00573a80
        ;   XREF to: 00573b4f (CONDITIONAL_JUMP)  ; LAB_00573b4f
    INC EDX                             ; 00573a86
        ;   Label: LAB_00573a86
    ADD EAX,0x60                        ; 00573a87
    CMP EDX,0x400                       ; 00573a8a
    JL 0x00573a7c                       ; 00573a90
        ;   XREF to: 00573a7c (CONDITIONAL_JUMP)  ; LAB_00573a7c
    MOV EDI,EBX                         ; 00573a92
    LEA EAX,[EDI*0x4 + 0x0]             ; 00573a94
        ;   Label: LAB_00573a94
    SUB EAX,EDI                         ; 00573a9b
    LEA EBX,[ESI + 0x4]                 ; 00573a9d
    SHL EAX,0x5                         ; 00573aa0
    ADD EBX,EAX                         ; 00573aa3
    MOV EAX,dword ptr [EBX + 0x44]      ; 00573aa5
    TEST EAX,EAX                        ; 00573aa8
    JZ 0x00573ab5                       ; 00573aaa
        ;   XREF to: 00573ab5 (CONDITIONAL_JUMP)  ; LAB_00573ab5
    PUSH EAX                            ; 00573aac
    CALL FUN_005b86a0                   ; 00573aad
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00573ab2
    MOV ECX,dword ptr [EBX + 0x48]      ; 00573ab5
        ;   Label: LAB_00573ab5
    TEST ECX,ECX                        ; 00573ab8
    JZ 0x00573ac5                       ; 00573aba
        ;   XREF to: 00573ac5 (CONDITIONAL_JUMP)  ; LAB_00573ac5
    PUSH ECX                            ; 00573abc
    CALL FUN_005b86a0                   ; 00573abd
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00573ac2
    MOV EBP,dword ptr [EBX + 0x4c]      ; 00573ac5
        ;   Label: LAB_00573ac5
    TEST EBP,EBP                        ; 00573ac8
    JZ 0x00573ad5                       ; 00573aca
        ;   XREF to: 00573ad5 (CONDITIONAL_JUMP)  ; LAB_00573ad5
    PUSH EBP                            ; 00573acc
    CALL FUN_005b86a0                   ; 00573acd
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00573ad2
    MOV EDX,dword ptr [EBX + 0x50]      ; 00573ad5
        ;   Label: LAB_00573ad5
    TEST EDX,EDX                        ; 00573ad8
    JNZ 0x00573b63                      ; 00573ada
        ;   XREF to: 00573b63 (CONDITIONAL_JUMP)  ; LAB_00573b63
    PUSH 0x60                           ; 00573ae0
    PUSH 0x0                            ; 00573ae2
    PUSH EBX                            ; 00573ae4
    CALL FUN_005b77c0                   ; 00573ae5
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00573aea
    MOV EAX,EDI                         ; 00573aed
    POP EBP                             ; 00573aef
    POP EDI                             ; 00573af0
    POP ESI                             ; 00573af1
    POP EBX                             ; 00573af2
    RET                                 ; 00573af3
    MOV EDI,dword ptr [ESI + 0x18004]   ; 00573af4
        ;   Label: LAB_00573af4
    LEA EAX,[EDI + 0x1]                 ; 00573afa
    MOV dword ptr [ESI + 0x18004],EAX   ; 00573afd
    CMP EAX,0x400                       ; 00573b03
    JL 0x00573a94                       ; 00573b08
        ;   XREF to: 00573a94 (CONDITIONAL_JUMP)  ; LAB_00573a94
    MOV dword ptr [ESI],0x1             ; 00573b0a
    MOV EBX,dword ptr [0x02652eb4]      ; 00573b10 | DAT_02652eb4
    MOV dword ptr [ESI + 0x18004],0x400 ; 00573b16
    TEST EBX,EBX                        ; 00573b20
    JZ 0x00573a94                       ; 00573b22
        ;   XREF to: 00573a94 (CONDITIONAL_JUMP)  ; LAB_00573a94
    MOV EBP,0x5ec65a                    ; 00573b28 | = "..\\engine\\texture.cpp"
    MOV EAX,0xbc                        ; 00573b2d
    PUSH 0x5ec670                       ; 00573b32 | = "CTextureCache::findFreeSlot - Cache h..."
    MOV dword ptr [0x01d046a0],EBP      ; 00573b37 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00573b3d | DAT_01d046a4
    CALL FUN_004e4500                   ; 00573b42
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00573b47
    JMP 0x00573a94                      ; 00573b4a
        ;   XREF to: 00573a94 (UNCONDITIONAL_JUMP)  ; LAB_00573a94
    MOV EBP,dword ptr [EAX + 0x58]      ; 00573b4f
        ;   Label: LAB_00573b4f
    CMP ECX,EBP                         ; 00573b52
    JBE 0x00573a86                      ; 00573b54
        ;   XREF to: 00573a86 (CONDITIONAL_JUMP)  ; LAB_00573a86
    MOV EBX,EDX                         ; 00573b5a
    MOV ECX,EBP                         ; 00573b5c
    JMP 0x00573a86                      ; 00573b5e
        ;   XREF to: 00573a86 (UNCONDITIONAL_JUMP)  ; LAB_00573a86
    PUSH EDX                            ; 00573b63
        ;   Label: LAB_00573b63
    CALL FUN_005b86a0                   ; 00573b64
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00573b69
    PUSH 0x60                           ; 00573b6c
    PUSH 0x0                            ; 00573b6e
    PUSH EBX                            ; 00573b70
    CALL FUN_005b77c0                   ; 00573b71
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00573b76
    MOV EAX,EDI                         ; 00573b79
    POP EBP                             ; 00573b7b
    POP EDI                             ; 00573b7c
    POP ESI                             ; 00573b7d
    POP EBX                             ; 00573b7e
    RET                                 ; 00573b7f

