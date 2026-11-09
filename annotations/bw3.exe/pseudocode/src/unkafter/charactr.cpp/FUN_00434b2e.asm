; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_charactr_cpp_FUN_00434b2e(undefined4 *param_1,byte *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba34
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00434b2e
        ;   Label: unkafter_charactr.cpp_FUN_00434b2e
    PUSH EBP                            ; 00434b30
    MOV EBP,ESP                         ; 00434b31
    PUSH ESI                            ; 00434b33
    PUSH EDI                            ; 00434b34
    CMP dword ptr [0x005fba34],0x6      ; 00434b35 | DAT_005fba34
    JNC 0x00434ba9                      ; 00434b3c
        ;   XREF to: 00434ba9 (CONDITIONAL_JUMP)  ; LAB_00434ba9
    PUSH EAX                            ; 00434b3e
    PUSH EBX                            ; 00434b3f
    PUSH ECX                            ; 00434b40
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434b41
    MOV ESI,dword ptr [EBP + 0xc]       ; 00434b44
    MOV ECX,dword ptr [EBP + 0x10]      ; 00434b47
    MOV EAX,0x0                         ; 00434b4a
    TEST EDI,0x2                        ; 00434b4f
    JZ 0x00434b69                       ; 00434b55
        ;   XREF to: 00434b69 (CONDITIONAL_JUMP)  ; LAB_00434b69
    MOV AL,byte ptr [ESI]               ; 00434b57
    MOV BX,word ptr [EAX*0x2 + 0x1c6ad74] ; 00434b59
    MOV word ptr [EDI],BX               ; 00434b61
    ADD EDI,0x2                         ; 00434b64
    INC ESI                             ; 00434b67
    DEC ECX                             ; 00434b68
    SUB ECX,0x2                         ; 00434b69
        ;   Label: LAB_00434b69
    JL 0x00434b90                       ; 00434b6c
        ;   XREF to: 00434b90 (CONDITIONAL_JUMP)  ; LAB_00434b90
    MOV AL,byte ptr [ESI + 0x1]         ; 00434b6e
    MOV BX,word ptr [EAX*0x2 + 0x1c6ad74] ; 00434b71
    SHL EBX,0x10                        ; 00434b79
    MOV AL,byte ptr [ESI]               ; 00434b7c
    MOV BX,word ptr [EAX*0x2 + 0x1c6ad74] ; 00434b7e
    MOV dword ptr [EDI],EBX             ; 00434b86
    ADD ESI,0x2                         ; 00434b88
    ADD EDI,0x4                         ; 00434b8b
    JMP 0x00434b69                      ; 00434b8e
        ;   XREF to: 00434b69 (UNCONDITIONAL_JUMP)  ; LAB_00434b69
    CMP ECX,-0x1                        ; 00434b90
        ;   Label: LAB_00434b90
    JNZ 0x00434ba2                      ; 00434b93
        ;   XREF to: 00434ba2 (CONDITIONAL_JUMP)  ; LAB_00434ba2
    MOV AL,byte ptr [ESI]               ; 00434b95
    MOV BX,word ptr [EAX*0x2 + 0x1c6ad74] ; 00434b97
    MOV word ptr [EDI],BX               ; 00434b9f
    POP ECX                             ; 00434ba2
        ;   Label: LAB_00434ba2
    POP EBX                             ; 00434ba3
    POP EAX                             ; 00434ba4
    POP EDI                             ; 00434ba5
    POP ESI                             ; 00434ba6
    LEAVE                               ; 00434ba7
    RET                                 ; 00434ba8
    PUSH EAX                            ; 00434ba9
        ;   Label: LAB_00434ba9
    PUSH EBX                            ; 00434baa
    PUSH ECX                            ; 00434bab
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434bac
    MOV ESI,dword ptr [EBP + 0xc]       ; 00434baf
    MOV ECX,dword ptr [EBP + 0x10]      ; 00434bb2
    MOV EAX,0x0                         ; 00434bb5
    TEST EDI,0x2                        ; 00434bba
    JZ 0x00434bd5                       ; 00434bc0
        ;   XREF to: 00434bd5 (CONDITIONAL_JUMP)  ; LAB_00434bd5
    MOVZX EAX,byte ptr [ESI]            ; 00434bc2
    MOV BX,word ptr [EAX*0x2 + 0x1c6ad74] ; 00434bc5
    MOV word ptr [EDI],BX               ; 00434bcd
    ADD EDI,0x2                         ; 00434bd0
    INC ESI                             ; 00434bd3
    DEC ECX                             ; 00434bd4
    SUB ECX,0x2                         ; 00434bd5
        ;   Label: LAB_00434bd5
    JL 0x00434c00                       ; 00434bd8
        ;   XREF to: 00434c00 (CONDITIONAL_JUMP)  ; LAB_00434c00
    MOVZX EAX,byte ptr [ESI + 0x1]      ; 00434bda
    MOVZX EBX,word ptr [EAX*0x2 + 0x1c6ad74] ; 00434bde
    MOVZX EAX,byte ptr [ESI]            ; 00434be6
    SHL EBX,0x10                        ; 00434be9
    MOVZX EAX,word ptr [EAX*0x2 + 0x1c6ad74] ; 00434bec
    OR EBX,EAX                          ; 00434bf4
    ADD ESI,0x2                         ; 00434bf6
    MOV dword ptr [EDI],EBX             ; 00434bf9
    ADD EDI,0x4                         ; 00434bfb
    JMP 0x00434bd5                      ; 00434bfe
        ;   XREF to: 00434bd5 (UNCONDITIONAL_JUMP)  ; LAB_00434bd5
    CMP ECX,-0x1                        ; 00434c00
        ;   Label: LAB_00434c00
    JNZ 0x00434c13                      ; 00434c03
        ;   XREF to: 00434c13 (CONDITIONAL_JUMP)  ; LAB_00434c13
    MOVZX EAX,byte ptr [ESI]            ; 00434c05
    MOV BX,word ptr [EAX*0x2 + 0x1c6ad74] ; 00434c08
    MOV word ptr [EDI],BX               ; 00434c10
    POP ECX                             ; 00434c13
        ;   Label: LAB_00434c13
    POP EBX                             ; 00434c14
    POP EAX                             ; 00434c15
    POP EDI                             ; 00434c16
    POP ESI                             ; 00434c17
    LEAVE                               ; 00434c18
    RET                                 ; 00434c19

