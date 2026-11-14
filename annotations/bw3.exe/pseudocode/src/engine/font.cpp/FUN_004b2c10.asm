; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_font_cpp_FUN_004b2c10(CBitFont *param_1,char *param_2,char *param_3,int param_4,int param_5,byte param_6,int *param_7)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_FUN_004b2e40 at 004b2e9b
;
; Referenced Globals:
;   undefined1 DAT_005c20be
;   TerminatedCString s_engine_font_cpp_005c20bf
;   undefined4 DAT_006074b8
;
; Called Functions:
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2c10
        ;   Label: engine_font.cpp_FUN_004b2c10
    PUSH ESI                            ; 004b2c11
    PUSH EDI                            ; 004b2c12
    PUSH EBP                            ; 004b2c13
    SUB ESP,0x10                        ; 004b2c14
    MOV AH,byte ptr [ESP + 0x38]        ; 004b2c17
    XOR EBX,EBX                         ; 004b2c1b
    XOR EDI,EDI                         ; 004b2c1d
    TEST AH,0x40                        ; 004b2c1f
    JNZ 0x004b2cc7                      ; 004b2c22
        ;   XREF to: 004b2cc7 (CONDITIONAL_JUMP)  ; LAB_004b2cc7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b2c28
    MOV byte ptr [EAX],0x0              ; 004b2c2c
    CMP dword ptr [ESP + 0x28],0x0      ; 004b2c2f
        ;   Label: LAB_004b2c2f
    JNZ 0x004b2c3e                      ; 004b2c34
        ;   XREF to: 004b2c3e (CONDITIONAL_JUMP)  ; LAB_004b2c3e
    MOV dword ptr [ESP + 0x28],0x5c20be ; 004b2c36 | DAT_005c20be
    TEST byte ptr [ESP + 0x38],0x1      ; 004b2c3e
        ;   Label: LAB_004b2c3e
    JZ 0x004b2c65                       ; 004b2c43
        ;   XREF to: 004b2c65 (CONDITIONAL_JUMP)  ; LAB_004b2c65
    MOV ESI,dword ptr [ESP + 0x28]      ; 004b2c45
    MOV CL,byte ptr [ESP + 0x38]        ; 004b2c49
    ADD ESI,EBX                         ; 004b2c4d
    MOV AL,byte ptr [ESI]               ; 004b2c4f | DAT_005c20be | = "..\\engine\\font.cpp"
        ;   Label: LAB_004b2c4f
    INC AL                              ; 004b2c51
    AND EAX,0xff                        ; 004b2c53
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004b2c58 | DAT_006074b8
    JNZ 0x004b2cdc                      ; 004b2c5f
        ;   XREF to: 004b2cdc (CONDITIONAL_JUMP)  ; LAB_004b2cdc
    MOV EBP,dword ptr [ESP + 0x30]      ; 004b2c65
        ;   Label: LAB_004b2c65
    MOV dword ptr [ESP + 0x4],EDI       ; 004b2c69
    MOV dword ptr [ESP],EBX             ; 004b2c6d
    DEC EBP                             ; 004b2c70
    XOR ESI,ESI                         ; 004b2c71
    MOV dword ptr [ESP + 0x30],EBP      ; 004b2c73
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004b2c77
    MOV dword ptr [ESP + 0x8],ESI       ; 004b2c7b
    ADD EBP,EDI                         ; 004b2c7f
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b2c81
        ;   Label: LAB_004b2c81
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 004b2c85 | DAT_005c20be | = "..\\engine\\font.cpp"
    AND EAX,0xff                        ; 004b2c88
    MOV dword ptr [ESP + 0xc],EAX       ; 004b2c8d
    JNZ 0x004b2cf3                      ; 004b2c91
        ;   XREF to: 004b2cf3 (CONDITIONAL_JUMP)  ; LAB_004b2cf3
    TEST byte ptr [ESP + 0x38],0x2      ; 004b2c93
        ;   Label: LAB_004b2c93
    JZ 0x004b2dd5                       ; 004b2c98
        ;   XREF to: 004b2dd5 (CONDITIONAL_JUMP)  ; LAB_004b2dd5
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004b2c9e
    ADD ESI,EDI                         ; 004b2ca2
    TEST EDI,EDI                        ; 004b2ca4
        ;   Label: LAB_004b2ca4
    JLE 0x004b2dd5                      ; 004b2ca6
        ;   XREF to: 004b2dd5 (CONDITIONAL_JUMP)  ; LAB_004b2dd5
    MOV AL,byte ptr [ESI + -0x1]        ; 004b2cac
    INC AL                              ; 004b2caf
    AND EAX,0xff                        ; 004b2cb1
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004b2cb6 | DAT_006074b8
    JZ 0x004b2dd5                       ; 004b2cbd
        ;   XREF to: 004b2dd5 (CONDITIONAL_JUMP)  ; LAB_004b2dd5
    DEC EDI                             ; 004b2cc3
    DEC ESI                             ; 004b2cc4
    JMP 0x004b2ca4                      ; 004b2cc5
        ;   XREF to: 004b2ca4 (UNCONDITIONAL_JUMP)  ; LAB_004b2ca4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004b2cc7
        ;   Label: LAB_004b2cc7
    SUB ECX,ECX                         ; 004b2ccb
    DEC ECX                             ; 004b2ccd
    XOR EAX,EAX                         ; 004b2cce
    SCASB.REPNE ES:EDI                  ; 004b2cd0
    NOT ECX                             ; 004b2cd2
    DEC ECX                             ; 004b2cd4
    MOV EDI,ECX                         ; 004b2cd5
    JMP 0x004b2c2f                      ; 004b2cd7
        ;   XREF to: 004b2c2f (UNCONDITIONAL_JUMP)  ; LAB_004b2c2f
    TEST CL,0x8                         ; 004b2cdc
        ;   Label: LAB_004b2cdc
    JNZ 0x004b2ce8                      ; 004b2cdf
        ;   XREF to: 004b2ce8 (CONDITIONAL_JUMP)  ; LAB_004b2ce8
    INC EBX                             ; 004b2ce1
        ;   Label: LAB_004b2ce1
    INC ESI                             ; 004b2ce2
    JMP 0x004b2c4f                      ; 004b2ce3
        ;   XREF to: 004b2c4f (UNCONDITIONAL_JUMP)  ; LAB_004b2c4f
    CMP byte ptr [ESI],0xa              ; 004b2ce8 | DAT_005c20be
        ;   Label: LAB_004b2ce8
    JZ 0x004b2c65                       ; 004b2ceb
        ;   XREF to: 004b2c65 (CONDITIONAL_JUMP)  ; LAB_004b2c65
    JMP 0x004b2ce1                      ; 004b2cf1
        ;   XREF to: 004b2ce1 (UNCONDITIONAL_JUMP)  ; LAB_004b2ce1
    LEA ESI,[EBX + 0x1]                 ; 004b2cf3
        ;   Label: LAB_004b2cf3
    CMP EAX,0xd                         ; 004b2cf6
    JNZ 0x004b2d09                      ; 004b2cf9
        ;   XREF to: 004b2d09 (CONDITIONAL_JUMP)  ; LAB_004b2d09
    MOV dword ptr [ESP],ESI             ; 004b2cfb
    MOV dword ptr [ESP + 0x4],EDI       ; 004b2cfe
    MOV EBX,ESI                         ; 004b2d02
    JMP 0x004b2c81                      ; 004b2d04
        ;   XREF to: 004b2c81 (UNCONDITIONAL_JUMP)  ; LAB_004b2c81
    CMP EAX,0xa                         ; 004b2d09
        ;   Label: LAB_004b2d09
    JNZ 0x004b2d31                      ; 004b2d0c
        ;   XREF to: 004b2d31 (CONDITIONAL_JUMP)  ; LAB_004b2d31
    MOV AL,byte ptr [ESP + 0x38]        ; 004b2d0e
    MOV EBX,ESI                         ; 004b2d12
    TEST AL,0x8                         ; 004b2d14
    JNZ 0x004b2d24                      ; 004b2d16
        ;   XREF to: 004b2d24 (CONDITIONAL_JUMP)  ; LAB_004b2d24
    MOV dword ptr [ESP + 0x4],EDI       ; 004b2d18
    MOV dword ptr [ESP],ESI             ; 004b2d1c
    JMP 0x004b2c81                      ; 004b2d1f
        ;   XREF to: 004b2c81 (UNCONDITIONAL_JUMP)  ; LAB_004b2c81
    MOV dword ptr [ESP + 0x8],0x3       ; 004b2d24
        ;   Label: LAB_004b2d24
    JMP 0x004b2c93                      ; 004b2d2c
        ;   XREF to: 004b2c93 (UNCONDITIONAL_JUMP)  ; LAB_004b2c93
    CMP EDI,dword ptr [ESP + 0x30]      ; 004b2d31
        ;   Label: LAB_004b2d31
    JL 0x004b2d80                       ; 004b2d35
        ;   XREF to: 004b2d80 (CONDITIONAL_JUMP)  ; LAB_004b2d80
    MOV dword ptr [ESP + 0x8],0x1       ; 004b2d37
    MOV AL,byte ptr [ESP + 0xc]         ; 004b2d3f
        ;   Label: LAB_004b2d3f
    INC AL                              ; 004b2d43
    AND EAX,0xff                        ; 004b2d45
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004b2d4a | DAT_006074b8
    JNZ 0x004b2c93                      ; 004b2d51
        ;   XREF to: 004b2c93 (CONDITIONAL_JUMP)  ; LAB_004b2c93
    MOV CL,byte ptr [ESP + 0x38]        ; 004b2d57
    TEST CL,0x10                        ; 004b2d5b
    JNZ 0x004b2c93                      ; 004b2d5e
        ;   XREF to: 004b2c93 (CONDITIONAL_JUMP)  ; LAB_004b2c93
    TEST CL,0x20                        ; 004b2d64
    JZ 0x004b2d74                       ; 004b2d67
        ;   XREF to: 004b2d74 (CONDITIONAL_JUMP)  ; LAB_004b2d74
    CMP dword ptr [ESP + 0x4],0x0       ; 004b2d69
    JZ 0x004b2c93                       ; 004b2d6e
        ;   XREF to: 004b2c93 (CONDITIONAL_JUMP)  ; LAB_004b2c93
    MOV EDI,dword ptr [ESP + 0x4]       ; 004b2d74
        ;   Label: LAB_004b2d74
    MOV EBX,dword ptr [ESP]             ; 004b2d78
    JMP 0x004b2c93                      ; 004b2d7b
        ;   XREF to: 004b2c93 (UNCONDITIONAL_JUMP)  ; LAB_004b2c93
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004b2d80
        ;   Label: LAB_004b2d80
    MOV AL,byte ptr [ESP + 0xc]         ; 004b2d84
    PUSH EDX                            ; 004b2d88
    MOV ECX,dword ptr [ESP + 0x28]      ; 004b2d89
    MOV byte ptr [EBP + 0x1],0x0        ; 004b2d8d
    PUSH ECX                            ; 004b2d91
    MOV byte ptr [EBP],AL               ; 004b2d92
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004b2d95
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004b2d9a
    CMP EAX,dword ptr [ESP + 0x34]      ; 004b2d9d
    JLE 0x004b2dad                      ; 004b2da1
        ;   XREF to: 004b2dad (CONDITIONAL_JUMP)  ; LAB_004b2dad
    MOV dword ptr [ESP + 0x8],0x2       ; 004b2da3
    JMP 0x004b2d3f                      ; 004b2dab
        ;   XREF to: 004b2d3f (UNCONDITIONAL_JUMP)  ; LAB_004b2d3f
    MOV AL,byte ptr [ESP + 0xc]         ; 004b2dad
        ;   Label: LAB_004b2dad
    INC EDI                             ; 004b2db1
    MOV EBX,ESI                         ; 004b2db2
    INC EBP                             ; 004b2db4
    INC AL                              ; 004b2db5
    AND EAX,0xff                        ; 004b2db7
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004b2dbc | DAT_006074b8
    JZ 0x004b2c81                       ; 004b2dc3
        ;   XREF to: 004b2c81 (CONDITIONAL_JUMP)  ; LAB_004b2c81
    MOV dword ptr [ESP + 0x4],EDI       ; 004b2dc9
    MOV dword ptr [ESP],ESI             ; 004b2dcd
    JMP 0x004b2c81                      ; 004b2dd0
        ;   XREF to: 004b2c81 (UNCONDITIONAL_JUMP)  ; LAB_004b2c81
    ADD EDI,dword ptr [ESP + 0x2c]      ; 004b2dd5
        ;   Label: LAB_004b2dd5
    MOV DH,byte ptr [ESP + 0x38]        ; 004b2dd9
    MOV byte ptr [EDI],0x0              ; 004b2ddd
    TEST DH,0x4                         ; 004b2de0
    JZ 0x004b2e0f                       ; 004b2de3
        ;   XREF to: 004b2e0f (CONDITIONAL_JUMP)  ; LAB_004b2e0f
    MOV ESI,dword ptr [ESP + 0x28]      ; 004b2de5
    MOV CH,byte ptr [ESP + 0x38]        ; 004b2de9
    ADD ESI,EBX                         ; 004b2ded
    MOV AL,byte ptr [ESI]               ; 004b2def | DAT_005c20be | = "..\\engine\\font.cpp"
        ;   Label: LAB_004b2def
    INC AL                              ; 004b2df1
    AND EAX,0xff                        ; 004b2df3
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 004b2df8 | DAT_006074b8
    JZ 0x004b2e0f                       ; 004b2dff
        ;   XREF to: 004b2e0f (CONDITIONAL_JUMP)  ; LAB_004b2e0f
    TEST CH,0x8                         ; 004b2e01
    JNZ 0x004b2e0a                      ; 004b2e04
        ;   XREF to: 004b2e0a (CONDITIONAL_JUMP)  ; LAB_004b2e0a
    INC EBX                             ; 004b2e06
        ;   Label: LAB_004b2e06
    INC ESI                             ; 004b2e07
    JMP 0x004b2def                      ; 004b2e08
        ;   XREF to: 004b2def (UNCONDITIONAL_JUMP)  ; LAB_004b2def
    CMP byte ptr [ESI],0xa              ; 004b2e0a | = "..\\engine\\font.cpp"
        ;   Label: LAB_004b2e0a
    JNZ 0x004b2e06                      ; 004b2e0d
        ;   XREF to: 004b2e06 (CONDITIONAL_JUMP)  ; LAB_004b2e06
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004b2e0f
        ;   Label: LAB_004b2e0f
    TEST ECX,ECX                        ; 004b2e13
    JNZ 0x004b2e23                      ; 004b2e15
        ;   XREF to: 004b2e23 (CONDITIONAL_JUMP)  ; LAB_004b2e23
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b2e17
    ADD ESP,0x10                        ; 004b2e1b
    POP EBP                             ; 004b2e1e
    POP EDI                             ; 004b2e1f
    POP ESI                             ; 004b2e20
    POP EBX                             ; 004b2e21
    RET                                 ; 004b2e22
    MOV dword ptr [ECX],EBX             ; 004b2e23
        ;   Label: LAB_004b2e23
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b2e25
    ADD ESP,0x10                        ; 004b2e29
    POP EBP                             ; 004b2e2c
    POP EDI                             ; 004b2e2d
    POP ESI                             ; 004b2e2e
    POP EBX                             ; 004b2e2f
    RET                                 ; 004b2e30

