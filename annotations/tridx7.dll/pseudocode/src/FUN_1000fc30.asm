; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_1000fc30(ushort *param_1,undefined4 *param_2,uint param_3,uint param_4)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   FUN_1000fc10 at 1000fc21
;   FUN_1000fe40 at 1000fe51
;
; Called Functions:
;   FUN_10008a20
;   FUN_10010750
;   FUN_10010870
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 1000fc30
        ;   Label: FUN_1000fc30
    SUB ESP,0x4                         ; 1000fc34
    PUSH EBX                            ; 1000fc37
    PUSH ESI                            ; 1000fc38
    PUSH EDI                            ; 1000fc39
    XOR EBX,EBX                         ; 1000fc3a
    MOV DI,word ptr [EAX]               ; 1000fc3c
    PUSH EBP                            ; 1000fc3f
    LEA EBP,[EAX + 0x2]                 ; 1000fc40
    PUSH 0x8                            ; 1000fc43
    PUSH EDI                            ; 1000fc45
    CALL FUN_10010870                   ; 1000fc46
        ;   XREF to: 10010870 (UNCONDITIONAL_CALL)  ; undefined FUN_10010870()
    ADD ESP,0x8                         ; 1000fc4b
    TEST EAX,EAX                        ; 1000fc4e
    JZ 0x1000fc68                       ; 1000fc50
        ;   XREF to: 1000fc68 (CONDITIONAL_JUMP)  ; LAB_1000fc68
    MOV DI,word ptr [EBP]               ; 1000fc52
        ;   Label: LAB_1000fc52
    ADD EBP,0x2                         ; 1000fc56
    PUSH 0x8                            ; 1000fc59
    PUSH EDI                            ; 1000fc5b
    CALL FUN_10010870                   ; 1000fc5c
        ;   XREF to: 10010870 (UNCONDITIONAL_CALL)  ; undefined FUN_10010870()
    ADD ESP,0x8                         ; 1000fc61
    TEST EAX,EAX                        ; 1000fc64
    JNZ 0x1000fc52                      ; 1000fc66
        ;   XREF to: 1000fc52 (CONDITIONAL_JUMP)  ; LAB_1000fc52
    CMP DI,0x2d                         ; 1000fc68
        ;   Label: LAB_1000fc68
    JNZ 0x1000fc7e                      ; 1000fc6c
        ;   XREF to: 1000fc7e (CONDITIONAL_JUMP)  ; LAB_1000fc7e
    MOV DI,word ptr [EBP]               ; 1000fc6e
    MOV ESI,dword ptr [ESP + 0x24]      ; 1000fc72
    OR ESI,0x2                          ; 1000fc76
    ADD EBP,0x2                         ; 1000fc79
    JMP 0x1000fc8f                      ; 1000fc7c
        ;   XREF to: 1000fc8f (UNCONDITIONAL_JUMP)  ; LAB_1000fc8f
    CMP DI,0x2b                         ; 1000fc7e
        ;   Label: LAB_1000fc7e
    JNZ 0x1000fc8b                      ; 1000fc82
        ;   XREF to: 1000fc8b (CONDITIONAL_JUMP)  ; LAB_1000fc8b
    MOV DI,word ptr [EBP]               ; 1000fc84
    ADD EBP,0x2                         ; 1000fc88
    MOV ESI,dword ptr [ESP + 0x24]      ; 1000fc8b
        ;   Label: LAB_1000fc8b
    CMP dword ptr [ESP + 0x20],0x0      ; 1000fc8f
        ;   Label: LAB_1000fc8f
    JL 0x1000fe1e                       ; 1000fc94
        ;   XREF to: 1000fe1e (CONDITIONAL_JUMP)  ; LAB_1000fe1e
    CMP dword ptr [ESP + 0x20],0x1      ; 1000fc9a
    JZ 0x1000fe1e                       ; 1000fc9f
        ;   XREF to: 1000fe1e (CONDITIONAL_JUMP)  ; LAB_1000fe1e
    CMP dword ptr [ESP + 0x20],0x24     ; 1000fca5
    JG 0x1000fe1e                       ; 1000fcaa
        ;   XREF to: 1000fe1e (CONDITIONAL_JUMP)  ; LAB_1000fe1e
    CMP dword ptr [ESP + 0x20],0x0      ; 1000fcb0
    JNZ 0x1000fce9                      ; 1000fcb5
        ;   XREF to: 1000fce9 (CONDITIONAL_JUMP)  ; LAB_1000fce9
    CMP DI,0x30                         ; 1000fcb7
    JZ 0x1000fcc7                       ; 1000fcbb
        ;   XREF to: 1000fcc7 (CONDITIONAL_JUMP)  ; LAB_1000fcc7
    MOV dword ptr [ESP + 0x20],0xa      ; 1000fcbd
    JMP 0x1000fce9                      ; 1000fcc5
        ;   XREF to: 1000fce9 (UNCONDITIONAL_JUMP)  ; LAB_1000fce9
    MOV AX,word ptr [EBP]               ; 1000fcc7
        ;   Label: LAB_1000fcc7
    CMP AX,0x78                         ; 1000fccb
    JZ 0x1000fce1                       ; 1000fccf
        ;   XREF to: 1000fce1 (CONDITIONAL_JUMP)  ; LAB_1000fce1
    CMP AX,0x58                         ; 1000fcd1
    JZ 0x1000fce1                       ; 1000fcd5
        ;   XREF to: 1000fce1 (CONDITIONAL_JUMP)  ; LAB_1000fce1
    MOV dword ptr [ESP + 0x20],0x8      ; 1000fcd7
    JMP 0x1000fce9                      ; 1000fcdf
        ;   XREF to: 1000fce9 (UNCONDITIONAL_JUMP)  ; LAB_1000fce9
    MOV dword ptr [ESP + 0x20],0x10     ; 1000fce1
        ;   Label: LAB_1000fce1
    CMP dword ptr [ESP + 0x20],0x10     ; 1000fce9
        ;   Label: LAB_1000fce9
    JNZ 0x1000fd10                      ; 1000fcee
        ;   XREF to: 1000fd10 (CONDITIONAL_JUMP)  ; LAB_1000fd10
    CMP DI,0x30                         ; 1000fcf0
    JNZ 0x1000fd10                      ; 1000fcf4
        ;   XREF to: 1000fd10 (CONDITIONAL_JUMP)  ; LAB_1000fd10
    MOV AX,word ptr [EBP]               ; 1000fcf6
    CMP AX,0x78                         ; 1000fcfa
    JZ 0x1000fd06                       ; 1000fcfe
        ;   XREF to: 1000fd06 (CONDITIONAL_JUMP)  ; LAB_1000fd06
    CMP AX,0x58                         ; 1000fd00
    JNZ 0x1000fd10                      ; 1000fd04
        ;   XREF to: 1000fd10 (CONDITIONAL_JUMP)  ; LAB_1000fd10
    MOV DI,word ptr [EBP + 0x2]         ; 1000fd06
        ;   Label: LAB_1000fd06
    ADD EBP,0x2                         ; 1000fd0a
    ADD EBP,0x2                         ; 1000fd0d
    MOV EAX,0xffffffff                  ; 1000fd10
        ;   Label: LAB_1000fd10
    SUB EDX,EDX                         ; 1000fd15
    DIV dword ptr [ESP + 0x20]          ; 1000fd17
    MOV dword ptr [ESP + 0x10],EAX      ; 1000fd1b
    PUSH 0x4                            ; 1000fd1f
        ;   Label: LAB_1000fd1f
    PUSH EDI                            ; 1000fd21
    CALL FUN_10010870                   ; 1000fd22
        ;   XREF to: 10010870 (UNCONDITIONAL_CALL)  ; undefined FUN_10010870()
    ADD ESP,0x8                         ; 1000fd27
    TEST EAX,EAX                        ; 1000fd2a
    JZ 0x1000fd36                       ; 1000fd2c
        ;   XREF to: 1000fd36 (CONDITIONAL_JUMP)  ; LAB_1000fd36
    MOVZX ECX,DI                        ; 1000fd2e
    SUB ECX,0x30                        ; 1000fd31
    JMP 0x1000fd57                      ; 1000fd34
        ;   XREF to: 1000fd57 (UNCONDITIONAL_JUMP)  ; LAB_1000fd57
    PUSH 0x103                          ; 1000fd36
        ;   Label: LAB_1000fd36
    PUSH EDI                            ; 1000fd3b
    CALL FUN_10010870                   ; 1000fd3c
        ;   XREF to: 10010870 (UNCONDITIONAL_CALL)  ; undefined FUN_10010870()
    ADD ESP,0x8                         ; 1000fd41
    TEST EAX,EAX                        ; 1000fd44
    JZ 0x1000fd8c                       ; 1000fd46
        ;   XREF to: 1000fd8c (CONDITIONAL_JUMP)  ; LAB_1000fd8c
    PUSH EDI                            ; 1000fd48
    CALL FUN_10010750                   ; 1000fd49
        ;   XREF to: 10010750 (UNCONDITIONAL_CALL)  ; undefined FUN_10010750()
    MOVZX ECX,AX                        ; 1000fd4e
    ADD ESP,0x4                         ; 1000fd51
    SUB ECX,0x37                        ; 1000fd54
    CMP ECX,dword ptr [ESP + 0x20]      ; 1000fd57
        ;   Label: LAB_1000fd57
    JNC 0x1000fd8c                      ; 1000fd5b
        ;   XREF to: 1000fd8c (CONDITIONAL_JUMP)  ; LAB_1000fd8c
    OR ESI,0x8                          ; 1000fd5d
    CMP dword ptr [ESP + 0x10],EBX      ; 1000fd60
    JA 0x1000fd7c                       ; 1000fd64
        ;   XREF to: 1000fd7c (CONDITIONAL_JUMP)  ; LAB_1000fd7c
    JNZ 0x1000fd77                      ; 1000fd66
        ;   XREF to: 1000fd77 (CONDITIONAL_JUMP)  ; LAB_1000fd77
    MOV EAX,0xffffffff                  ; 1000fd68
    SUB EDX,EDX                         ; 1000fd6d
    DIV dword ptr [ESP + 0x20]          ; 1000fd6f
    CMP EDX,ECX                         ; 1000fd73
    JNC 0x1000fd7c                      ; 1000fd75
        ;   XREF to: 1000fd7c (CONDITIONAL_JUMP)  ; LAB_1000fd7c
    OR ESI,0x4                          ; 1000fd77
        ;   Label: LAB_1000fd77
    JMP 0x1000fd83                      ; 1000fd7a
        ;   XREF to: 1000fd83 (UNCONDITIONAL_JUMP)  ; LAB_1000fd83
    IMUL EBX,dword ptr [ESP + 0x20]     ; 1000fd7c
        ;   Label: LAB_1000fd7c
    ADD EBX,ECX                         ; 1000fd81
    MOV DI,word ptr [EBP]               ; 1000fd83
        ;   Label: LAB_1000fd83
    ADD EBP,0x2                         ; 1000fd87
    JMP 0x1000fd1f                      ; 1000fd8a
        ;   XREF to: 1000fd1f (UNCONDITIONAL_JUMP)  ; LAB_1000fd1f
    SUB EBP,0x2                         ; 1000fd8c
        ;   Label: LAB_1000fd8c
    TEST ESI,0x8                        ; 1000fd8f
    JNZ 0x1000fda7                      ; 1000fd95
        ;   XREF to: 1000fda7 (CONDITIONAL_JUMP)  ; LAB_1000fda7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000fd97
    TEST ECX,ECX                        ; 1000fd9b
    JZ 0x1000fda3                       ; 1000fd9d
        ;   XREF to: 1000fda3 (CONDITIONAL_JUMP)  ; LAB_1000fda3
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000fd9f
    XOR EBX,EBX                         ; 1000fda3
        ;   Label: LAB_1000fda3
    JMP 0x1000fe04                      ; 1000fda5
        ;   XREF to: 1000fe04 (UNCONDITIONAL_JUMP)  ; LAB_1000fe04
    TEST ESI,0x4                        ; 1000fda7
        ;   Label: LAB_1000fda7
    JNZ 0x1000fdd2                      ; 1000fdad
        ;   XREF to: 1000fdd2 (CONDITIONAL_JUMP)  ; LAB_1000fdd2
    TEST ESI,0x1                        ; 1000fdaf
    JNZ 0x1000fe00                      ; 1000fdb5
        ;   XREF to: 1000fe00 (CONDITIONAL_JUMP)  ; LAB_1000fe00
    MOV EAX,ESI                         ; 1000fdb7
    AND EAX,0x2                         ; 1000fdb9
    JZ 0x1000fdc6                       ; 1000fdbc
        ;   XREF to: 1000fdc6 (CONDITIONAL_JUMP)  ; LAB_1000fdc6
    CMP EBX,0x80000000                  ; 1000fdbe
    JA 0x1000fdd2                       ; 1000fdc4
        ;   XREF to: 1000fdd2 (CONDITIONAL_JUMP)  ; LAB_1000fdd2
    TEST EAX,EAX                        ; 1000fdc6
        ;   Label: LAB_1000fdc6
    JNZ 0x1000fe00                      ; 1000fdc8
        ;   XREF to: 1000fe00 (CONDITIONAL_JUMP)  ; LAB_1000fe00
    CMP EBX,0x7fffffff                  ; 1000fdca
    JBE 0x1000fe00                      ; 1000fdd0
        ;   XREF to: 1000fe00 (CONDITIONAL_JUMP)  ; LAB_1000fe00
    CALL FUN_10008a20                   ; 1000fdd2
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_1000fdd2
    TEST ESI,0x1                        ; 1000fdd7
    MOV dword ptr [EAX],0x22            ; 1000fddd
    JZ 0x1000fdec                       ; 1000fde3
        ;   XREF to: 1000fdec (CONDITIONAL_JUMP)  ; LAB_1000fdec
    MOV EBX,0xffffffff                  ; 1000fde5
    JMP 0x1000fe00                      ; 1000fdea
        ;   XREF to: 1000fe00 (UNCONDITIONAL_JUMP)  ; LAB_1000fe00
    TEST ESI,0x2                        ; 1000fdec
        ;   Label: LAB_1000fdec
    JZ 0x1000fdfb                       ; 1000fdf2
        ;   XREF to: 1000fdfb (CONDITIONAL_JUMP)  ; LAB_1000fdfb
    MOV EBX,0x80000000                  ; 1000fdf4
    JMP 0x1000fe00                      ; 1000fdf9
        ;   XREF to: 1000fe00 (UNCONDITIONAL_JUMP)  ; LAB_1000fe00
    MOV EBX,0x7fffffff                  ; 1000fdfb
        ;   Label: LAB_1000fdfb
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000fe00
        ;   Label: LAB_1000fe00
    TEST ECX,ECX                        ; 1000fe04
        ;   Label: LAB_1000fe04
    JZ 0x1000fe0a                       ; 1000fe06
        ;   XREF to: 1000fe0a (CONDITIONAL_JUMP)  ; LAB_1000fe0a
    MOV dword ptr [ECX],EBP             ; 1000fe08
    TEST ESI,0x2                        ; 1000fe0a
        ;   Label: LAB_1000fe0a
    JZ 0x1000fe14                       ; 1000fe10
        ;   XREF to: 1000fe14 (CONDITIONAL_JUMP)  ; LAB_1000fe14
    NEG EBX                             ; 1000fe12
    MOV EAX,EBX                         ; 1000fe14
        ;   Label: LAB_1000fe14
    POP EBP                             ; 1000fe16
    POP EDI                             ; 1000fe17
    POP ESI                             ; 1000fe18
    POP EBX                             ; 1000fe19
    ADD ESP,0x4                         ; 1000fe1a
    RET                                 ; 1000fe1d
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000fe1e
        ;   Label: LAB_1000fe1e
    TEST ECX,ECX                        ; 1000fe22
    JZ 0x1000fe2c                       ; 1000fe24
        ;   XREF to: 1000fe2c (CONDITIONAL_JUMP)  ; LAB_1000fe2c
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000fe26
    MOV dword ptr [ECX],EAX             ; 1000fe2a
    XOR EAX,EAX                         ; 1000fe2c
        ;   Label: LAB_1000fe2c
    POP EBP                             ; 1000fe2e
    POP EDI                             ; 1000fe2f
    POP ESI                             ; 1000fe30
    POP EBX                             ; 1000fe31
    ADD ESP,0x4                         ; 1000fe32
    RET                                 ; 1000fe35

