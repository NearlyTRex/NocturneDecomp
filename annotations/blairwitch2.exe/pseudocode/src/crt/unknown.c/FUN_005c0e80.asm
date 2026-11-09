; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005c0e80(byte *param_1,byte *param_2)
;
;
; XREF[1]:
;   crt_file.c_makepath_FUN_005b9f4c at 005ba033
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0e80
        ;   Label: crt_unknown.c_FUN_005c0e80
    PUSH ESI                            ; 005c0e81
    PUSH EDI                            ; 005c0e82
    MOV ESI,dword ptr [0x026807f0]      ; 005c0e83 | DAT_026807f0
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c0e89
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c0e8d
    CMP EBX,EDI                         ; 005c0e91
    JC 0x005c0e99                       ; 005c0e93
        ;   XREF to: 005c0e99 (CONDITIONAL_JUMP)  ; LAB_005c0e99
    XOR EDX,EDX                         ; 005c0e95
    JMP 0x005c0ef7                      ; 005c0e97
        ;   XREF to: 005c0ef7 (UNCONDITIONAL_JUMP)  ; LAB_005c0ef7
    LEA EAX,[EDI + -0x1]                ; 005c0e99
        ;   Label: LAB_005c0e99
    TEST ESI,ESI                        ; 005c0e9c
    JZ 0x005c0ec4                       ; 005c0e9e
        ;   XREF to: 005c0ec4 (CONDITIONAL_JUMP)  ; LAB_005c0ec4
    XOR EDX,EDX                         ; 005c0ea0
    MOV DL,byte ptr [EAX]               ; 005c0ea2
    MOV DL,byte ptr [EDX + 0x2680801]   ; 005c0ea4
    AND DL,0x1                          ; 005c0eaa
    AND EDX,0xff                        ; 005c0ead
    JZ 0x005c0ec4                       ; 005c0eb3
        ;   XREF to: 005c0ec4 (CONDITIONAL_JUMP)  ; LAB_005c0ec4
    LEA EDX,[EAX + -0x1]                ; 005c0eb5
    MOV EAX,EDX                         ; 005c0eb8
    MOV dword ptr [0x026807f0],ESI      ; 005c0eba | DAT_026807f0
    POP EDI                             ; 005c0ec0
    POP ESI                             ; 005c0ec1
    POP EBX                             ; 005c0ec2
    RET                                 ; 005c0ec3
    DEC EAX                             ; 005c0ec4
        ;   Label: LAB_005c0ec4
    CMP EBX,EAX                         ; 005c0ec5
    JA 0x005c0ee2                       ; 005c0ec7
        ;   XREF to: 005c0ee2 (CONDITIONAL_JUMP)  ; LAB_005c0ee2
    TEST ESI,ESI                        ; 005c0ec9
    JZ 0x005c0ee2                       ; 005c0ecb
        ;   XREF to: 005c0ee2 (CONDITIONAL_JUMP)  ; LAB_005c0ee2
    XOR EDX,EDX                         ; 005c0ecd
    MOV DL,byte ptr [EAX]               ; 005c0ecf
    MOV DL,byte ptr [EDX + 0x2680801]   ; 005c0ed1
    AND DL,0x1                          ; 005c0ed7
    AND EDX,0xff                        ; 005c0eda
    JNZ 0x005c0ec4                      ; 005c0ee0
        ;   XREF to: 005c0ec4 (CONDITIONAL_JUMP)  ; LAB_005c0ec4
    MOV EDX,EDI                         ; 005c0ee2
        ;   Label: LAB_005c0ee2
    SUB EDX,EAX                         ; 005c0ee4
    MOV EBX,0x2                         ; 005c0ee6
    MOV EAX,EDX                         ; 005c0eeb
    SAR EDX,0x1f                        ; 005c0eed
    IDIV EBX                            ; 005c0ef0
    DEC EDI                             ; 005c0ef2
    SUB EDI,EDX                         ; 005c0ef3
    MOV EDX,EDI                         ; 005c0ef5
    MOV EAX,EDX                         ; 005c0ef7
        ;   Label: LAB_005c0ef7
    MOV dword ptr [0x026807f0],ESI      ; 005c0ef9 | DAT_026807f0
    POP EDI                             ; 005c0eff
    POP ESI                             ; 005c0f00
    POP EBX                             ; 005c0f01
    RET                                 ; 005c0f02

