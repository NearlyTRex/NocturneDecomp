; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a7a70(char *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004abe00 at 004abfe1
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fe3a8
;   undefined4 DAT_01549aa4
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01d19f78
;   undefined4 DAT_01d19f7c
;   undefined4 DAT_01d19f80
;   undefined4 DAT_01d19f84
;   undefined4 DAT_01d19f88
;   undefined4 DAT_01d19f8c
;   undefined4 DAT_01d19f90
;   undefined4 DAT_01d19f91
;   ... and 3 more
;
; Called Functions:
;   FUN_004b2a80
;   FUN_004b2b30
;   FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7a70
        ;   Label: FUN_004a7a70
    PUSH ESI                            ; 004a7a71
    PUSH EDI                            ; 004a7a72
    PUSH EBP                            ; 004a7a73
    SUB ESP,0x4                         ; 004a7a74
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a7a77
    PUSH 0x1d19f90                      ; 004a7a7b | DAT_01d19f90
    MOV EDX,0x1                         ; 004a7a80
    PUSH EBP                            ; 004a7a85
    MOV dword ptr [0x01d1a058],EDX      ; 004a7a86 | DAT_01d1a058
    CALL FUN_005a3d00                   ; 004a7a8c
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 004a7a91
    TEST EAX,EAX                        ; 004a7a94
    JNZ 0x004a7aa9                      ; 004a7a96
        ;   XREF to: 004a7aa9 (CONDITIONAL_JUMP)  ; LAB_004a7aa9
    CMP dword ptr [0x005fe3a8],0x0      ; 004a7a98 | DAT_005fe3a8
    JL 0x004a7adc                       ; 004a7a9f
        ;   XREF to: 004a7adc (CONDITIONAL_JUMP)  ; LAB_004a7adc
    ADD ESP,0x4                         ; 004a7aa1
        ;   Label: LAB_004a7aa1
    POP EBP                             ; 004a7aa4
    POP EDI                             ; 004a7aa5
    POP ESI                             ; 004a7aa6
    POP EBX                             ; 004a7aa7
    RET                                 ; 004a7aa8
    MOV EDI,0x1d19f90                   ; 004a7aa9
        ;   Label: LAB_004a7aa9
    XOR EBX,EBX                         ; 004a7aae
    MOV ESI,EBP                         ; 004a7ab0
    MOV dword ptr [0x01d19f78],EBX      ; 004a7ab2 | DAT_01d19f78
    PUSH EDI                            ; 004a7ab8 | DAT_01d19f90
    MOV AL,byte ptr [ESI]               ; 004a7ab9
        ;   Label: LAB_004a7ab9
    MOV byte ptr [EDI],AL               ; 004a7abb | DAT_01d19f90 | DAT_01d19f92
    CMP AL,0x0                          ; 004a7abd
    JZ 0x004a7ad1                       ; 004a7abf
        ;   XREF to: 004a7ad1 (CONDITIONAL_JUMP)  ; LAB_004a7ad1
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7ac1
    ADD ESI,0x2                         ; 004a7ac4
    MOV byte ptr [EDI + 0x1],AL         ; 004a7ac7 | DAT_01d19f91 | DAT_01d19f93
    ADD EDI,0x2                         ; 004a7aca
    CMP AL,0x0                          ; 004a7acd
    JNZ 0x004a7ab9                      ; 004a7acf
        ;   XREF to: 004a7ab9 (CONDITIONAL_JUMP)  ; LAB_004a7ab9
    POP EDI                             ; 004a7ad1
        ;   Label: LAB_004a7ad1
    MOV dword ptr [0x005fe3a8],0xffffffff ; 004a7ad2 | DAT_005fe3a8
    MOV EDI,dword ptr [0x01d19f78]      ; 004a7adc | DAT_01d19f78
        ;   Label: LAB_004a7adc
    MOV EAX,[0x01c5fad0]                ; 004a7ae2 | DAT_01c5fad0
    ADD EDI,EAX                         ; 004a7ae7
    MOV dword ptr [0x01d19f78],EDI      ; 004a7ae9 | DAT_01d19f78
    CMP EDI,0x10000                     ; 004a7aef
    JL 0x004a7aa1                       ; 004a7af5
        ;   XREF to: 004a7aa1 (CONDITIONAL_JUMP)  ; LAB_004a7aa1
    PUSH EBP                            ; 004a7af7
    MOV EDX,dword ptr [0x01549aa4]      ; 004a7af8 | DAT_01549aa4
    PUSH EDX                            ; 004a7afe
    CALL FUN_004b2a80                   ; 004a7aff
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    ADD ESP,0x8                         ; 004a7b04
    PUSH EBP                            ; 004a7b07
    MOV ECX,dword ptr [0x01549aa4]      ; 004a7b08 | DAT_01549aa4
    MOV EBX,EAX                         ; 004a7b0e
    PUSH ECX                            ; 004a7b10
    MOV dword ptr [ESP + 0x8],EAX       ; 004a7b11
    LEA ESI,[EBX + 0x8]                 ; 004a7b15
    CALL FUN_004b2b30                   ; 004a7b18
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2b30()
    MOV EDX,dword ptr [0x01c5fadc]      ; 004a7b1d | DAT_01c5fadc
    MOV EBX,dword ptr [0x01c5fae0]      ; 004a7b23 | DAT_01c5fae0
    ADD ESP,0x8                         ; 004a7b29
    MOV EDI,EAX                         ; 004a7b2c
    LEA EBP,[EAX + 0x6]                 ; 004a7b2e
    ADD EBX,0x40                        ; 004a7b31
    LEA EAX,[EDX + ESI*0x1]             ; 004a7b34
    LEA ECX,[EBX + EBP*0x1]             ; 004a7b37
    CMP EAX,dword ptr [0x005fba18]      ; 004a7b3a | DAT_005fba18
    JLE 0x004a7b4b                      ; 004a7b40
        ;   XREF to: 004a7b4b (CONDITIONAL_JUMP)  ; LAB_004a7b4b
    MOV EAX,[0x005fba18]                ; 004a7b42 | DAT_005fba18
    MOV EDX,EAX                         ; 004a7b47
    SUB EDX,ESI                         ; 004a7b49
    CMP ECX,dword ptr [0x005fba1c]      ; 004a7b4b | DAT_005fba1c
        ;   Label: LAB_004a7b4b
    JLE 0x004a7b60                      ; 004a7b51
        ;   XREF to: 004a7b60 (CONDITIONAL_JUMP)  ; LAB_004a7b60
    MOV ECX,dword ptr [0x01c5fae0]      ; 004a7b53 | DAT_01c5fae0
    SUB ECX,0x14                        ; 004a7b59
    MOV EBX,ECX                         ; 004a7b5c
    SUB EBX,EBP                         ; 004a7b5e
    MOV EBP,dword ptr [ESP]             ; 004a7b60
        ;   Label: LAB_004a7b60
    MOV dword ptr [0x005fe3a8],EDX      ; 004a7b63 | DAT_005fe3a8
    ADD EDX,EAX                         ; 004a7b69
    SUB EDX,EBP                         ; 004a7b6b
    MOV [0x01d19f80],EAX                ; 004a7b6d | DAT_01d19f80
    MOV EAX,EDX                         ; 004a7b72
    SAR EDX,0x1f                        ; 004a7b74
    SUB EAX,EDX                         ; 004a7b77
    SAR EAX,0x1                         ; 004a7b79
    MOV dword ptr [0x01d19f7c],EBX      ; 004a7b7b | DAT_01d19f7c
    LEA EDX,[EBX + ECX*0x1]             ; 004a7b81
    SUB EDX,EDI                         ; 004a7b84
    MOV [0x01d19f88],EAX                ; 004a7b86 | DAT_01d19f88
    MOV EAX,EDX                         ; 004a7b8b
    SAR EDX,0x1f                        ; 004a7b8d
    SUB EAX,EDX                         ; 004a7b90
    SAR EAX,0x1                         ; 004a7b92
    MOV dword ptr [0x01d19f84],ECX      ; 004a7b94 | DAT_01d19f84
    MOV [0x01d19f8c],EAX                ; 004a7b9a | DAT_01d19f8c
    ADD ESP,0x4                         ; 004a7b9f
    POP EBP                             ; 004a7ba2
    POP EDI                             ; 004a7ba3
    POP ESI                             ; 004a7ba4
    POP EBX                             ; 004a7ba5
    RET                                 ; 004a7ba6

