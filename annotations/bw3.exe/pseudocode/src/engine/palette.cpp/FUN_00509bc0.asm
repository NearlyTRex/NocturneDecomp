; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_palette_cpp_FUN_00509bc0(int *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_font.cpp_FUN_004b0a20 at 004b0a66
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01d76cc4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_font.cpp_getDefaultTextColor_FUN_004b12e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509bc0
        ;   Label: engine_palette.cpp_FUN_00509bc0
    PUSH ESI                            ; 00509bc1
    PUSH EBP                            ; 00509bc2
    SUB ESP,0x10                        ; 00509bc3
    MOV EBX,dword ptr [ESP + 0x20]      ; 00509bc6
    MOV ESI,dword ptr [ESP + 0x24]      ; 00509bca
    MOV EBP,dword ptr [ESP + 0x30]      ; 00509bce
    MOV EDX,dword ptr [EBX]             ; 00509bd2
    CMP EDX,0x64                        ; 00509bd4
    JL 0x00509be2                       ; 00509bd7
        ;   XREF to: 00509be2 (CONDITIONAL_JUMP)  ; LAB_00509be2
    XOR EAX,EAX                         ; 00509bd9
    ADD ESP,0x10                        ; 00509bdb
    POP EBP                             ; 00509bde
    POP ESI                             ; 00509bdf
    POP EBX                             ; 00509be0
    RET                                 ; 00509be1
    PUSH EDI                            ; 00509be2
        ;   Label: LAB_00509be2
    MOV EDI,EDX                         ; 00509be3
    LEA EAX,[EBX + 0x324]               ; 00509be5
    SHL EDI,0x8                         ; 00509beb
    ADD EDI,EAX                         ; 00509bee
    PUSH EDI                            ; 00509bf0
    MOV AL,byte ptr [ESI]               ; 00509bf1
        ;   Label: LAB_00509bf1
    MOV byte ptr [EDI],AL               ; 00509bf3
    CMP AL,0x0                          ; 00509bf5
    JZ 0x00509c09                       ; 00509bf7
        ;   XREF to: 00509c09 (CONDITIONAL_JUMP)  ; LAB_00509c09
    MOV AL,byte ptr [ESI + 0x1]         ; 00509bf9
    ADD ESI,0x2                         ; 00509bfc
    MOV byte ptr [EDI + 0x1],AL         ; 00509bff
    ADD EDI,0x2                         ; 00509c02
    CMP AL,0x0                          ; 00509c05
    JNZ 0x00509bf1                      ; 00509c07
        ;   XREF to: 00509bf1 (CONDITIONAL_JUMP)  ; LAB_00509bf1
    POP EDI                             ; 00509c09
        ;   Label: LAB_00509c09
    MOV EAX,[0x01d76cc4]                ; 00509c0a | DAT_01d76cc4
    MOV dword ptr [ESP + 0x4],EAX       ; 00509c0f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00509c13
    MOV dword ptr [ESP + 0x10],EAX      ; 00509c17
    FILD dword ptr [ESP + 0x10]         ; 00509c1b
    MOV EAX,dword ptr [EBX]             ; 00509c1f
    FMUL float ptr [ESP + 0x4]          ; 00509c21
    SHL EAX,0x2                         ; 00509c25
    CALL crt_math.c_round_FUN_005a3120  ; 00509c28
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    LEA ECX,[EBX + EAX*0x1]             ; 00509c2d
    FISTP dword ptr [ESP + 0x10]        ; 00509c30
    MOV EAX,dword ptr [ESP + 0x10]      ; 00509c34
    MOV dword ptr [ECX + 0x4],EAX       ; 00509c38
    MOV EAX,dword ptr [ESP + 0x30]      ; 00509c3b
    MOV dword ptr [ESP + 0x10],EAX      ; 00509c3f
    FILD dword ptr [ESP + 0x10]         ; 00509c43
    MOV EAX,dword ptr [EBX]             ; 00509c47
    FMUL float ptr [ESP + 0x4]          ; 00509c49
    SHL EAX,0x2                         ; 00509c4d
    CALL crt_math.c_round_FUN_005a3120  ; 00509c50
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    LEA ECX,[EBX + EAX*0x1]             ; 00509c55
    FISTP dword ptr [ESP + 0x10]        ; 00509c58
    MOV EAX,dword ptr [ESP + 0x10]      ; 00509c5c
    MOV dword ptr [ECX + 0x194],EAX     ; 00509c60
    TEST EBP,EBP                        ; 00509c66
    JL 0x00509d1b                       ; 00509c68
        ;   XREF to: 00509d1b (CONDITIONAL_JUMP)  ; LAB_00509d1b
    LEA ECX,[EBP*0x4 + 0x0]             ; 00509c6e
    MOV ESI,dword ptr [0x005fba20]      ; 00509c75 | DAT_005fba20
    SUB ECX,EBP                         ; 00509c7b
    CMP ESI,0x10                        ; 00509c7d
    JNZ 0x00509d24                      ; 00509c80
        ;   XREF to: 00509d24 (CONDITIONAL_JUMP)  ; LAB_00509d24
    MOVZX EBP,byte ptr [ECX + 0x1c6af99] ; 00509c86 | DAT_01c6af99
    MOVZX EDI,byte ptr [ECX + 0x1c6af9a] ; 00509c8d | DAT_01c6af9a
    XOR EAX,EAX                         ; 00509c94
    XOR EDX,EDX                         ; 00509c96
    MOV AL,byte ptr [ECX + 0x1c6af98]   ; 00509c98 | DAT_01c6af98
    MOV ECX,dword ptr [0x01c6af78]      ; 00509c9e | DAT_01c6af78
    MOV dword ptr [ESP + 0x8],EAX       ; 00509ca4
    DIV ECX                             ; 00509ca8
    MOV ESI,dword ptr [0x01c6af84]      ; 00509caa | DAT_01c6af84
    MOV dword ptr [ESP + 0x8],EAX       ; 00509cb0
    XOR EDX,EDX                         ; 00509cb4
    MOV EAX,EBP                         ; 00509cb6
    DIV ESI                             ; 00509cb8
    MOV dword ptr [ESP + 0xc],EBP       ; 00509cba
    MOV dword ptr [ESP + 0xc],EAX       ; 00509cbe
    XOR EDX,EDX                         ; 00509cc2
    MOV EAX,EDI                         ; 00509cc4
    DIV dword ptr [0x01c6af90]          ; 00509cc6 | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 00509ccc | DAT_01c6af74
    MOV EDI,dword ptr [ESP + 0x8]       ; 00509cd2
    MOV ESI,EAX                         ; 00509cd6
    MOV EAX,dword ptr [ESP + 0xc]       ; 00509cd8
    SHL EDI,CL                          ; 00509cdc
    MOV CL,byte ptr [0x01c6af80]        ; 00509cde | DAT_01c6af80
    SHL EAX,CL                          ; 00509ce4
    MOV CL,byte ptr [0x01c6af8c]        ; 00509ce6 | DAT_01c6af8c
    OR EDI,EAX                          ; 00509cec
    MOV EAX,ESI                         ; 00509cee
    SHL EAX,CL                          ; 00509cf0
    OR EAX,EDI                          ; 00509cf2
    MOV ECX,dword ptr [EBX]             ; 00509cf4
    AND EAX,0xffff                      ; 00509cf6
    MOV dword ptr [EBX + ECX*0x4 + 0x6724],EAX ; 00509cfb
        ;   Label: LAB_00509cfb
    MOV EAX,dword ptr [EBX]             ; 00509d02
        ;   Label: LAB_00509d02
    MOV ECX,dword ptr [ESP + 0x38]      ; 00509d04
    MOV dword ptr [EBX + EAX*0x4 + 0x68b4],ECX ; 00509d08
    INC dword ptr [EBX]                 ; 00509d0f
    POP EDI                             ; 00509d11
    XOR EAX,EAX                         ; 00509d12
    ADD ESP,0x10                        ; 00509d14
    POP EBP                             ; 00509d17
    POP ESI                             ; 00509d18
    POP EBX                             ; 00509d19
    RET                                 ; 00509d1a
    CALL engine_font.cpp_getDefaultTextColor_FUN_004b12e0 ; 00509d1b
        ;   XREF to: 004b12e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_getDefaultTextColor_FUN_004b12e0()
        ;   Label: LAB_00509d1b
    MOV ECX,dword ptr [EBX]             ; 00509d20
    JMP 0x00509cfb                      ; 00509d22
        ;   XREF to: 00509cfb (UNCONDITIONAL_JUMP)  ; LAB_00509cfb
    MOV EBP,dword ptr [0x005fba20]      ; 00509d24 | DAT_005fba20
        ;   Label: LAB_00509d24
    MOVZX EDI,byte ptr [ECX + 0x1c6af99] ; 00509d2a | DAT_01c6af99
    XOR EAX,EAX                         ; 00509d31
    MOVZX ESI,byte ptr [ECX + 0x1c6af9a] ; 00509d33 | DAT_01c6af9a
    MOV AL,byte ptr [ECX + 0x1c6af98]   ; 00509d3a | DAT_01c6af98
    CMP EBP,0x20                        ; 00509d40
    JNZ 0x00509d6e                      ; 00509d43
        ;   XREF to: 00509d6e (CONDITIONAL_JUMP)  ; LAB_00509d6e
    MOV CL,byte ptr [0x01c6af74]        ; 00509d45 | DAT_01c6af74
    SHL EAX,CL                          ; 00509d4b
    MOV CL,byte ptr [0x01c6af80]        ; 00509d4d | DAT_01c6af80
    SHL EDI,CL                          ; 00509d53
    MOV CL,byte ptr [0x01c6af8c]        ; 00509d55 | DAT_01c6af8c
    SHL ESI,CL                          ; 00509d5b
    OR EAX,EDI                          ; 00509d5d
    MOV ECX,ESI                         ; 00509d5f
    OR ECX,EAX                          ; 00509d61
    MOV EAX,dword ptr [EBX]             ; 00509d63
    MOV dword ptr [EBX + EAX*0x4 + 0x6724],ECX ; 00509d65
    JMP 0x00509d02                      ; 00509d6c
        ;   XREF to: 00509d02 (UNCONDITIONAL_JUMP)  ; LAB_00509d02
    MOV ECX,EDI                         ; 00509d6e
        ;   Label: LAB_00509d6e
    SHL EAX,0x10                        ; 00509d70
    SHL ECX,0x8                         ; 00509d73
    OR ECX,EAX                          ; 00509d76
    OR ECX,ESI                          ; 00509d78
    MOV EAX,dword ptr [EBX]             ; 00509d7a
    MOV dword ptr [EBX + EAX*0x4 + 0x6724],ECX ; 00509d7c
    JMP 0x00509d02                      ; 00509d83
        ;   XREF to: 00509d02 (UNCONDITIONAL_JUMP)  ; LAB_00509d02

