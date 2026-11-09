; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_00401b80(int char_code,int x_pos,int y_pos)
;
; Parameters:
; int              Stack[0x4]:4   char_code
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6a26e
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00401b80
        ;   Label: engine_2d.c_drawCharacterHighlighted_FUN_00401b80
    PUSH EDI                            ; 00401b81
    PUSH EBP                            ; 00401b82
    SUB ESP,0x8                         ; 00401b83
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401b86
    MOV EDI,dword ptr [ESP + 0x20]      ; 00401b8a
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401b8e
    SUB EDX,0x20                        ; 00401b92
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401b95
    ADD EAX,EDX                         ; 00401b9c
    SHL EAX,0x4                         ; 00401b9e
    ADD EAX,EDX                         ; 00401ba1
    ADD EAX,0x5e8840                    ; 00401ba3
    MOV EDX,dword ptr [0x01c6b5a8]      ; 00401ba8 | DAT_01c6b5a8
    MOVZX ESI,byte ptr [EAX]            ; 00401bae
    CMP EBP,EDX                         ; 00401bb1
    JL 0x00401c37                       ; 00401bb3
        ;   XREF to: 00401c37 (CONDITIONAL_JUMP)  ; LAB_00401c37
    CMP EDI,dword ptr [0x01c6b5ac]      ; 00401bb9 | DAT_01c6b5ac
    JL 0x00401c37                       ; 00401bbf
        ;   XREF to: 00401c37 (CONDITIONAL_JUMP)  ; LAB_00401c37
    MOV EDX,dword ptr [0x01c6b5b0]      ; 00401bc5 | DAT_01c6b5b0
    INC EDX                             ; 00401bcb
    SUB EDX,ESI                         ; 00401bcc
    CMP EBP,EDX                         ; 00401bce
    JG 0x00401c37                       ; 00401bd0
        ;   XREF to: 00401c37 (CONDITIONAL_JUMP)  ; LAB_00401c37
    MOV EDX,dword ptr [0x01c6b5b4]      ; 00401bd2 | DAT_01c6b5b4
    SUB EDX,0xa                         ; 00401bd8
    CMP EDI,EDX                         ; 00401bdb
    JG 0x00401c37                       ; 00401bdd
        ;   XREF to: 00401c37 (CONDITIONAL_JUMP)  ; LAB_00401c37
    PUSH EBX                            ; 00401bdf
    MOV EBX,dword ptr [0x005fba20]      ; 00401be0 | DAT_005fba20
    SHL EDI,0x2                         ; 00401be6
    INC EAX                             ; 00401be9
    LEA EDX,[EDI + 0x2c]                ; 00401bea
    CMP EBX,0x8                         ; 00401bed
    JZ 0x00401c3b                       ; 00401bf0
        ;   XREF to: 00401c3b (CONDITIONAL_JUMP)  ; LAB_00401c3b
    MOV dword ptr [ESP + 0x4],EDX       ; 00401bf2
    ADD EBP,EBP                         ; 00401bf6
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 00401bf8
        ;   Label: LAB_00401bf8
    XOR ECX,ECX                         ; 00401bfe
    ADD EDX,EBP                         ; 00401c00
    TEST ESI,ESI                        ; 00401c02
    JLE 0x00401c1f                      ; 00401c04
        ;   XREF to: 00401c1f (CONDITIONAL_JUMP)  ; LAB_00401c1f
    MOV BL,byte ptr [EAX]               ; 00401c06
        ;   Label: LAB_00401c06
    TEST BL,BL                          ; 00401c08
    JZ 0x00401c16                       ; 00401c0a
        ;   XREF to: 00401c16 (CONDITIONAL_JUMP)  ; LAB_00401c16
    MOV BX,word ptr [0x01c6a26e]        ; 00401c0c | DAT_01c6a26e
    MOV word ptr [EDX],BX               ; 00401c13
    INC EAX                             ; 00401c16
        ;   Label: LAB_00401c16
    INC ECX                             ; 00401c17
    ADD EDX,0x2                         ; 00401c18
    CMP ECX,ESI                         ; 00401c1b
    JL 0x00401c06                       ; 00401c1d
        ;   XREF to: 00401c06 (CONDITIONAL_JUMP)  ; LAB_00401c06
    MOV EDX,dword ptr [ESP + 0x4]       ; 00401c1f
        ;   Label: LAB_00401c1f
    ADD EDI,0x4                         ; 00401c23
    CMP EDI,EDX                         ; 00401c26
    JNZ 0x00401bf8                      ; 00401c28
        ;   XREF to: 00401bf8 (CONDITIONAL_JUMP)  ; LAB_00401bf8
    LEA EDX,[ESI + 0x1]                 ; 00401c2a
        ;   Label: LAB_00401c2a
    POP EBX                             ; 00401c2d
    MOV EAX,EDX                         ; 00401c2e
        ;   Label: LAB_00401c2e
    ADD ESP,0x8                         ; 00401c30
    POP EBP                             ; 00401c33
    POP EDI                             ; 00401c34
    POP ESI                             ; 00401c35
    RET                                 ; 00401c36
    XOR EDX,EDX                         ; 00401c37
        ;   Label: LAB_00401c37
    JMP 0x00401c2e                      ; 00401c39
        ;   XREF to: 00401c2e (UNCONDITIONAL_JUMP)  ; LAB_00401c2e
    MOV BH,0xff                         ; 00401c3b
        ;   Label: LAB_00401c3b
    MOV dword ptr [ESP + 0x8],EDX       ; 00401c3d
    MOV ECX,dword ptr [EDI + 0x1c5faec] ; 00401c41
        ;   Label: LAB_00401c41
    XOR EDX,EDX                         ; 00401c47
    ADD ECX,EBP                         ; 00401c49
    TEST ESI,ESI                        ; 00401c4b
    JLE 0x00401c5e                      ; 00401c4d
        ;   XREF to: 00401c5e (CONDITIONAL_JUMP)  ; LAB_00401c5e
    MOV BL,byte ptr [EAX]               ; 00401c4f
        ;   Label: LAB_00401c4f
    TEST BL,BL                          ; 00401c51
    JZ 0x00401c57                       ; 00401c53
        ;   XREF to: 00401c57 (CONDITIONAL_JUMP)  ; LAB_00401c57
    MOV byte ptr [ECX],BH               ; 00401c55
    INC EAX                             ; 00401c57
        ;   Label: LAB_00401c57
    INC EDX                             ; 00401c58
    INC ECX                             ; 00401c59
    CMP EDX,ESI                         ; 00401c5a
    JL 0x00401c4f                       ; 00401c5c
        ;   XREF to: 00401c4f (CONDITIONAL_JUMP)  ; LAB_00401c4f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00401c5e
        ;   Label: LAB_00401c5e
    ADD EDI,0x4                         ; 00401c62
    CMP EDI,ECX                         ; 00401c65
    JZ 0x00401c2a                       ; 00401c67
        ;   XREF to: 00401c2a (CONDITIONAL_JUMP)  ; LAB_00401c2a
    JMP 0x00401c41                      ; 00401c69
        ;   XREF to: 00401c41 (UNCONDITIONAL_JUMP)  ; LAB_00401c41

