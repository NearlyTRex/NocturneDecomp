; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacter_FUN_00401c40(int char_code,int x_pos,int y_pos)
;
; Parameters:
; int              Stack[0x4]:4   char_code
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   engine_2d.c_drawTextMultiline_FUN_00402320 at 0040236a
;   engine_2d.c_drawTextWrapped_FUN_00402290 at 004022e1
;
; Referenced Globals:
;   undefined4 DAT_005a4b80
;   undefined4 DAT_005a4b81
;   undefined4 DAT_005a4b82
;   undefined4 DAT_005a4b83
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401c40
        ;   Label: engine_2d.c_drawCharacter_FUN_00401c40
    PUSH EDI                            ; 00401c41
    PUSH EBP                            ; 00401c42
    SUB ESP,0x10                        ; 00401c43
    MOV EDI,dword ptr [ESP + 0x28]      ; 00401c46
    MOV EDX,dword ptr [ESP + 0x20]      ; 00401c4a
    SUB EDX,0x20                        ; 00401c4e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401c51
    ADD EAX,EDX                         ; 00401c58
    SHL EAX,0x4                         ; 00401c5a
    ADD EAX,EDX                         ; 00401c5d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00401c5f
    ADD EAX,0x5a4b80                    ; 00401c63 | DAT_005a4b80
    XOR EDX,EDX                         ; 00401c68
    MOV EBX,dword ptr [0x01c00c58]      ; 00401c6a | DAT_01c00c58
    MOV DL,byte ptr [EAX]               ; 00401c70 | DAT_005a4b80
    CMP ECX,EBX                         ; 00401c72
    JL 0x00401d1b                       ; 00401c74
        ;   XREF to: 00401d1b (CONDITIONAL_JUMP)  ; LAB_00401d1b
    CMP EDI,dword ptr [0x01c00c5c]      ; 00401c7a | DAT_01c00c5c
    JL 0x00401d1b                       ; 00401c80
        ;   XREF to: 00401d1b (CONDITIONAL_JUMP)  ; LAB_00401d1b
    MOV ECX,dword ptr [0x01c00c60]      ; 00401c86 | DAT_01c00c60
    INC ECX                             ; 00401c8c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00401c8d
    SUB ECX,EDX                         ; 00401c91
    CMP ECX,EBP                         ; 00401c93
    JL 0x00401d1b                       ; 00401c95
        ;   XREF to: 00401d1b (CONDITIONAL_JUMP)  ; LAB_00401d1b
    MOV ECX,dword ptr [0x01c00c64]      ; 00401c9b | DAT_01c00c64
    SUB ECX,0xa                         ; 00401ca1
    CMP EDI,ECX                         ; 00401ca4
    JG 0x00401d1b                       ; 00401ca6
        ;   XREF to: 00401d1b (CONDITIONAL_JUMP)  ; LAB_00401d1b
    PUSH ESI                            ; 00401cac
    MOV ECX,dword ptr [0x005b7624]      ; 00401cad | DAT_005b7624
    SHL EDI,0x2                         ; 00401cb3
    INC EAX                             ; 00401cb6
    LEA EBP,[EDI + 0x2c]                ; 00401cb7
    CMP ECX,0x8                         ; 00401cba
    JZ 0x00401d1f                       ; 00401cbd
        ;   XREF to: 00401d1f (CONDITIONAL_JUMP)  ; LAB_00401d1f
    CMP ECX,0x10                        ; 00401cbf
    JNZ 0x00401d51                      ; 00401cc2
        ;   XREF to: 00401d51 (CONDITIONAL_JUMP)  ; LAB_00401d51
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401cc8
    ADD ECX,ECX                         ; 00401ccc
    MOV dword ptr [ESP + 0x10],ECX      ; 00401cce
    MOV dword ptr [ESP + 0x8],EBP       ; 00401cd2
    MOV EBP,dword ptr [ESP + 0x10]      ; 00401cd6
    MOV ECX,dword ptr [EDI + 0x1bd2fa0] ; 00401cda | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_00401cda
    XOR EBX,EBX                         ; 00401ce0
    ADD ECX,EBP                         ; 00401ce2
    TEST EDX,EDX                        ; 00401ce4
    JLE 0x00401d00                      ; 00401ce6
        ;   XREF to: 00401d00 (CONDITIONAL_JUMP)  ; LAB_00401d00
    MOVZX ESI,byte ptr [EAX]            ; 00401ce8 | DAT_005a4b81 | DAT_005a4b82 | DAT_005a4b83
        ;   Label: LAB_00401ce8
    INC EAX                             ; 00401ceb
    ADD ECX,0x2                         ; 00401cec
    MOV SI,word ptr [ESI*0x2 + 0x1bff720] ; 00401cef
    INC EBX                             ; 00401cf7
    MOV word ptr [ECX + -0x2],SI        ; 00401cf8
    CMP EBX,EDX                         ; 00401cfc
    JL 0x00401ce8                       ; 00401cfe
        ;   XREF to: 00401ce8 (CONDITIONAL_JUMP)  ; LAB_00401ce8
    ADD EDI,0x4                         ; 00401d00
        ;   Label: LAB_00401d00
    MOV word ptr [ECX],0x0              ; 00401d03
    CMP EDI,dword ptr [ESP + 0x8]       ; 00401d08
    JNZ 0x00401cda                      ; 00401d0c
        ;   XREF to: 00401cda (CONDITIONAL_JUMP)  ; LAB_00401cda
    LEA ECX,[EDX + 0x1]                 ; 00401d0e
        ;   Label: LAB_00401d0e
    POP ESI                             ; 00401d11
    MOV EAX,ECX                         ; 00401d12
        ;   Label: LAB_00401d12
    ADD ESP,0x10                        ; 00401d14
    POP EBP                             ; 00401d17
    POP EDI                             ; 00401d18
    POP EBX                             ; 00401d19
    RET                                 ; 00401d1a
    XOR ECX,ECX                         ; 00401d1b
        ;   Label: LAB_00401d1b
    JMP 0x00401d12                      ; 00401d1d
        ;   XREF to: 00401d12 (UNCONDITIONAL_JUMP)  ; LAB_00401d12
    MOV dword ptr [ESP + 0xc],EBP       ; 00401d1f
        ;   Label: LAB_00401d1f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401d23
        ;   Label: LAB_00401d23
    MOV ECX,dword ptr [EDI + 0x1bd2fa0] ; 00401d27 | DAT_01bd2fa0 | DAT_01bd2fa4
    XOR ESI,ESI                         ; 00401d2d
    ADD ECX,EBX                         ; 00401d2f
    TEST EDX,EDX                        ; 00401d31
    JLE 0x00401d41                      ; 00401d33
        ;   XREF to: 00401d41 (CONDITIONAL_JUMP)  ; LAB_00401d41
    INC ECX                             ; 00401d35
        ;   Label: LAB_00401d35
    MOV BL,byte ptr [EAX]               ; 00401d36 | DAT_005a4b81 | DAT_005a4b82 | DAT_005a4b83
    INC EAX                             ; 00401d38
    INC ESI                             ; 00401d39
    MOV byte ptr [ECX + -0x1],BL        ; 00401d3a
    CMP ESI,EDX                         ; 00401d3d
    JL 0x00401d35                       ; 00401d3f
        ;   XREF to: 00401d35 (CONDITIONAL_JUMP)  ; LAB_00401d35
    MOV ESI,dword ptr [ESP + 0xc]       ; 00401d41
        ;   Label: LAB_00401d41
    ADD EDI,0x4                         ; 00401d45
    MOV byte ptr [ECX],0x0              ; 00401d48
    CMP EDI,ESI                         ; 00401d4b
    JZ 0x00401d0e                       ; 00401d4d
        ;   XREF to: 00401d0e (CONDITIONAL_JUMP)  ; LAB_00401d0e
    JMP 0x00401d23                      ; 00401d4f
        ;   XREF to: 00401d23 (UNCONDITIONAL_JUMP)  ; LAB_00401d23
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401d51
        ;   Label: LAB_00401d51
    SHL ECX,0x2                         ; 00401d55
    MOV dword ptr [ESP + 0x4],ECX       ; 00401d58
    MOV ESI,dword ptr [ESP + 0x4]       ; 00401d5c
        ;   Label: LAB_00401d5c
    MOV ECX,dword ptr [EDI + 0x1bd2fa0] ; 00401d60 | DAT_01bd2fa0 | DAT_01bd2fa4
    XOR EBX,EBX                         ; 00401d66
    ADD ECX,ESI                         ; 00401d68
    TEST EDX,EDX                        ; 00401d6a
    JLE 0x00401d84                      ; 00401d6c
        ;   XREF to: 00401d84 (CONDITIONAL_JUMP)  ; LAB_00401d84
    MOVZX ESI,byte ptr [EAX]            ; 00401d6e | DAT_005a4b81 | DAT_005a4b82 | DAT_005a4b83
        ;   Label: LAB_00401d6e
    INC EAX                             ; 00401d71
    ADD ECX,0x4                         ; 00401d72
    MOV ESI,dword ptr [ESI*0x4 + 0x1bff920] ; 00401d75
    INC EBX                             ; 00401d7c
    MOV dword ptr [ECX + -0x4],ESI      ; 00401d7d
    CMP EBX,EDX                         ; 00401d80
    JL 0x00401d6e                       ; 00401d82
        ;   XREF to: 00401d6e (CONDITIONAL_JUMP)  ; LAB_00401d6e
    ADD EDI,0x4                         ; 00401d84
        ;   Label: LAB_00401d84
    MOV dword ptr [ECX],0x0             ; 00401d87
    CMP EDI,EBP                         ; 00401d8d
    JZ 0x00401d0e                       ; 00401d8f
        ;   XREF to: 00401d0e (CONDITIONAL_JUMP)  ; LAB_00401d0e
    JMP 0x00401d5c                      ; 00401d95
        ;   XREF to: 00401d5c (UNCONDITIONAL_JUMP)  ; LAB_00401d5c

