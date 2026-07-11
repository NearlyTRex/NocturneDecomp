; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d2b40(uint *param_1)
;
;
; XREF[1]:
;   FUN_004d2d00 at 004d3fa8
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c776a8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d2b40
        ;   Label: FUN_004d2b40
    MOV EAX,[0x005b9354]                ; 004d2b44 | DAT_005b9354
    MOV ECX,dword ptr [EAX + 0xbc]      ; 004d2b49 | DAT_01c776a8
    TEST ECX,ECX                        ; 004d2b4f
    JNZ 0x004d2bba                      ; 004d2b51
        ;   XREF to: 004d2bba (CONDITIONAL_JUMP)  ; LAB_004d2bba
    MOV EAX,dword ptr [EDX]             ; 004d2b57
    CMP EAX,0x209                       ; 004d2b59
    JNC 0x004d2b7b                      ; 004d2b5e
        ;   XREF to: 004d2b7b (CONDITIONAL_JUMP)  ; LAB_004d2b7b
    CMP EAX,0x204                       ; 004d2b60
    JNC 0x004d2b75                      ; 004d2b65
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x201                       ; 004d2b67
    JNC 0x004d2b75                      ; 004d2b6c
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x200                       ; 004d2b6e
    JNZ 0x004d2b9b                      ; 004d2b73
        ;   XREF to: 004d2b9b (CONDITIONAL_JUMP)  ; LAB_004d2b9b
    MOV EAX,0x1                         ; 004d2b75
        ;   Label: LAB_004d2b75
    RET                                 ; 004d2b7a
    JBE 0x004d2b75                      ; 004d2b7b
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
        ;   Label: LAB_004d2b7b
    CMP EAX,0x252                       ; 004d2b7d
    JNC 0x004d2b9e                      ; 004d2b82
        ;   XREF to: 004d2b9e (CONDITIONAL_JUMP)  ; LAB_004d2b9e
    CMP EAX,0x20b                       ; 004d2b84
    JC 0x004d2b75                       ; 004d2b89
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    JBE 0x004d2b75                      ; 004d2b8b
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x20c                       ; 004d2b8d
    JBE 0x004d2b75                      ; 004d2b92
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x251                       ; 004d2b94
    JZ 0x004d2b75                       ; 004d2b99
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    XOR EAX,EAX                         ; 004d2b9b
        ;   Label: LAB_004d2b9b
    RET                                 ; 004d2b9d
    JBE 0x004d2b75                      ; 004d2b9e
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
        ;   Label: LAB_004d2b9e
    CMP EAX,0x254                       ; 004d2ba0
    JC 0x004d2b75                       ; 004d2ba5
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    JBE 0x004d2b75                      ; 004d2ba7
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x255                       ; 004d2ba9
    JBE 0x004d2b75                      ; 004d2bae
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x256                       ; 004d2bb0
    JZ 0x004d2b75                       ; 004d2bb5
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    XOR EAX,EAX                         ; 004d2bb7
    RET                                 ; 004d2bb9
    CMP ECX,0x1                         ; 004d2bba
        ;   Label: LAB_004d2bba
    JNZ 0x004d2c25                      ; 004d2bbd
        ;   XREF to: 004d2c25 (CONDITIONAL_JUMP)  ; LAB_004d2c25
    MOV EAX,dword ptr [EDX]             ; 004d2bc3
    CMP EAX,0x208                       ; 004d2bc5
    JNC 0x004d2be0                      ; 004d2bca
        ;   XREF to: 004d2be0 (CONDITIONAL_JUMP)  ; LAB_004d2be0
    CMP EAX,0x204                       ; 004d2bcc
    JNC 0x004d2b75                      ; 004d2bd1
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x202                       ; 004d2bd3
    JC 0x004d2b9b                       ; 004d2bd8
        ;   XREF to: 004d2b9b (CONDITIONAL_JUMP)  ; LAB_004d2b9b
    MOV EAX,0x1                         ; 004d2bda
    RET                                 ; 004d2bdf
    JBE 0x004d2b75                      ; 004d2be0
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
        ;   Label: LAB_004d2be0
    CMP EAX,0x251                       ; 004d2be2
    JNC 0x004d2c00                      ; 004d2be7
        ;   XREF to: 004d2c00 (CONDITIONAL_JUMP)  ; LAB_004d2c00
    CMP EAX,0x20a                       ; 004d2be9
    JC 0x004d2b75                       ; 004d2bee
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    JBE 0x004d2b75                      ; 004d2bf0
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x20b                       ; 004d2bf2
    JZ 0x004d2b75                       ; 004d2bf7
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    XOR EAX,EAX                         ; 004d2bfd
    RET                                 ; 004d2bff
    JBE 0x004d2b75                      ; 004d2c00
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
        ;   Label: LAB_004d2c00
    CMP EAX,0x253                       ; 004d2c06
    JC 0x004d2b75                       ; 004d2c0b
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    JBE 0x004d2b75                      ; 004d2c11
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x254                       ; 004d2c17
    JZ 0x004d2b75                       ; 004d2c1c
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    XOR EAX,EAX                         ; 004d2c22
    RET                                 ; 004d2c24
    CMP ECX,0x2                         ; 004d2c25
        ;   Label: LAB_004d2c25
    JNZ 0x004d2b9b                      ; 004d2c28
        ;   XREF to: 004d2b9b (CONDITIONAL_JUMP)  ; LAB_004d2b9b
    MOV EAX,dword ptr [EDX]             ; 004d2c2e
    CMP EAX,0x20c                       ; 004d2c30
    JNC 0x004d2c59                      ; 004d2c35
        ;   XREF to: 004d2c59 (CONDITIONAL_JUMP)  ; LAB_004d2c59
    CMP EAX,0x200                       ; 004d2c37
    JC 0x004d2b9b                       ; 004d2c3c
        ;   XREF to: 004d2b9b (CONDITIONAL_JUMP)  ; LAB_004d2b9b
    JBE 0x004d2b75                      ; 004d2c42
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x201                       ; 004d2c48
    JNZ 0x004d2b9b                      ; 004d2c4d
        ;   XREF to: 004d2b9b (CONDITIONAL_JUMP)  ; LAB_004d2b9b
    MOV EAX,0x1                         ; 004d2c53
    RET                                 ; 004d2c58
    JBE 0x004d2b75                      ; 004d2c59
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
        ;   Label: LAB_004d2c59
    CMP EAX,0x255                       ; 004d2c5f
    JC 0x004d2b9b                       ; 004d2c64
        ;   XREF to: 004d2b9b (CONDITIONAL_JUMP)  ; LAB_004d2b9b
    JBE 0x004d2b75                      ; 004d2c6a
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    CMP EAX,0x256                       ; 004d2c70
    JZ 0x004d2b75                       ; 004d2c75
        ;   XREF to: 004d2b75 (CONDITIONAL_JUMP)  ; LAB_004d2b75
    XOR EAX,EAX                         ; 004d2c7b
    RET                                 ; 004d2c7d

