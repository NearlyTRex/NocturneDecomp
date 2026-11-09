; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int cockpit_ckptutil_c_FUN_0042ce7c(int param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e50
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c410
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0042ce7c
        ;   Label: cockpit_ckptutil.c_FUN_0042ce7c
    PUSH EBX                            ; 0042ce80
    PUSH ESI                            ; 0042ce81
    PUSH EDI                            ; 0042ce82
    PUSH EBP                            ; 0042ce83
    SUB ESP,0x1c                        ; 0042ce84
    MOV EBX,dword ptr [ESP + 0x30]      ; 0042ce87
    MOV EBP,dword ptr [ESP + 0x34]      ; 0042ce8b
    MOV EAX,[0x01c35e50]                ; 0042ce8f | DAT_01c35e50
    SUB EAX,EBP                         ; 0042ce94
    MOV EDX,dword ptr [0x01c2a38c]      ; 0042ce96 | DAT_01c2a38c
    MOV dword ptr [ESP],EAX             ; 0042ce9c
    MOV EAX,[0x01c2a390]                ; 0042ce9f | DAT_01c2a390
    MOV ESI,dword ptr [0x01c35e48]      ; 0042cea4 | DAT_01c35e48
    SUB EAX,EDX                         ; 0042ceaa
    SUB ESI,EBP                         ; 0042ceac
    MOV dword ptr [ESP + 0x14],EAX      ; 0042ceae
    TEST EBX,EBX                        ; 0042ceb2
    JNZ 0x0042cec8                      ; 0042ceb4
        ;   XREF to: 0042cec8 (CONDITIONAL_JUMP)  ; LAB_0042cec8
    LEA EAX,[EAX]                       ; 0042ceb6
    LEA EDX,[EDX]                       ; 0042cebc
    ADD ESP,0x1c                        ; 0042cec0
        ;   Label: LAB_0042cec0
    POP EBP                             ; 0042cec3
    POP EDI                             ; 0042cec4
    POP ESI                             ; 0042cec5
    POP EBX                             ; 0042cec6
    RET                                 ; 0042cec7
    CALL cockpit_ckptutil.c_FUN_0042c410 ; 0042cec8
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042c410()
        ;   Label: LAB_0042cec8
    MOV ECX,dword ptr [ESP + 0x38]      ; 0042cecd
    MOV EDI,dword ptr [0x006141c0]      ; 0042ced1 | DAT_006141c0
    MOV dword ptr [ESP + 0x18],EAX      ; 0042ced7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042cedb
    SHL ECX,0x2                         ; 0042cedf
    DEC EAX                             ; 0042cee2
    CMP EDI,0x8                         ; 0042cee3
    JNZ 0x0042cf4d                      ; 0042cee6
        ;   XREF to: 0042cf4d (CONDITIONAL_JUMP)  ; LAB_0042cf4d
    MOV EDI,dword ptr [ECX + 0x1c2a38c] ; 0042cee8
    MOV ECX,EAX                         ; 0042ceee
    ADD EDI,EBP                         ; 0042cef0
    XOR EBP,EBP                         ; 0042cef2
    TEST ESI,ESI                        ; 0042cef4
    JLE 0x0042cefe                      ; 0042cef6
        ;   XREF to: 0042cefe (CONDITIONAL_JUMP)  ; LAB_0042cefe
    CMP EAX,ESI                         ; 0042cef8
    JL 0x0042cec0                       ; 0042cefa
        ;   XREF to: 0042cec0 (CONDITIONAL_JUMP)  ; LAB_0042cec0
    MOV EBP,ESI                         ; 0042cefc
    MOV EDX,dword ptr [ESP]             ; 0042cefe
        ;   Label: LAB_0042cefe
    CMP ECX,EDX                         ; 0042cf01
    JLE 0x0042cf0b                      ; 0042cf03
        ;   XREF to: 0042cf0b (CONDITIONAL_JUMP)  ; LAB_0042cf0b
    CMP EBP,EDX                         ; 0042cf05
    JG 0x0042cec0                       ; 0042cf07
        ;   XREF to: 0042cec0 (CONDITIONAL_JUMP)  ; LAB_0042cec0
    MOV ECX,EDX                         ; 0042cf09
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042cf0b
        ;   Label: LAB_0042cf0b
    XOR ESI,ESI                         ; 0042cf0f
    TEST EAX,EAX                        ; 0042cf11
    JLE 0x0042cec0                      ; 0042cf13
        ;   XREF to: 0042cec0 (CONDITIONAL_JUMP)  ; LAB_0042cec0
    SUB ECX,EBP                         ; 0042cf15
    INC ECX                             ; 0042cf17
    MOV dword ptr [ESP + 0x4],ECX       ; 0042cf18
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042cf1c
        ;   Label: LAB_0042cf1c
    PUSH ECX                            ; 0042cf20
    LEA EAX,[EBX + EBP*0x1]             ; 0042cf21
    PUSH EAX                            ; 0042cf24
    LEA EAX,[EDI + EBP*0x1]             ; 0042cf25
    PUSH EAX                            ; 0042cf28
    CALL dword ptr [ESP + 0x24]         ; 0042cf29
    ADD ESP,0xc                         ; 0042cf2d
    INC ESI                             ; 0042cf30
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042cf31
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0042cf35
    MOV ECX,dword ptr [ESP + 0x40]      ; 0042cf39
    ADD EDI,EAX                         ; 0042cf3d
    ADD EBX,EDX                         ; 0042cf3f
    CMP ESI,ECX                         ; 0042cf41
    JL 0x0042cf1c                       ; 0042cf43
        ;   XREF to: 0042cf1c (CONDITIONAL_JUMP)  ; LAB_0042cf1c
    ADD ESP,0x1c                        ; 0042cf45
    POP EBP                             ; 0042cf48
    POP EDI                             ; 0042cf49
    POP ESI                             ; 0042cf4a
    POP EBX                             ; 0042cf4b
    RET                                 ; 0042cf4c
    MOV EDI,dword ptr [ECX + 0x1c2a38c] ; 0042cf4d
        ;   Label: LAB_0042cf4d
    ADD EBP,EBP                         ; 0042cf53
    MOV ECX,EAX                         ; 0042cf55
    ADD EDI,EBP                         ; 0042cf57
    XOR EBP,EBP                         ; 0042cf59
    TEST ESI,ESI                        ; 0042cf5b
    JLE 0x0042cf69                      ; 0042cf5d
        ;   XREF to: 0042cf69 (CONDITIONAL_JUMP)  ; LAB_0042cf69
    CMP EAX,ESI                         ; 0042cf5f
    JL 0x0042cec0                       ; 0042cf61
        ;   XREF to: 0042cec0 (CONDITIONAL_JUMP)  ; LAB_0042cec0
    MOV EBP,ESI                         ; 0042cf67
    MOV EAX,dword ptr [ESP]             ; 0042cf69
        ;   Label: LAB_0042cf69
    CMP ECX,EAX                         ; 0042cf6c
    JLE 0x0042cf7a                      ; 0042cf6e
        ;   XREF to: 0042cf7a (CONDITIONAL_JUMP)  ; LAB_0042cf7a
    CMP EBP,EAX                         ; 0042cf70
    JG 0x0042cec0                       ; 0042cf72
        ;   XREF to: 0042cec0 (CONDITIONAL_JUMP)  ; LAB_0042cec0
    MOV ECX,EAX                         ; 0042cf78
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042cf7a
        ;   Label: LAB_0042cf7a
    MOV EDX,EAX                         ; 0042cf7e
    SAR EDX,0x1f                        ; 0042cf80
    SUB EAX,EDX                         ; 0042cf83
    SAR EAX,0x1                         ; 0042cf85
    MOV dword ptr [ESP + 0x14],EAX      ; 0042cf87
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042cf8b
    XOR ESI,ESI                         ; 0042cf8f
    TEST EAX,EAX                        ; 0042cf91
    JLE 0x0042cec0                      ; 0042cf93
        ;   XREF to: 0042cec0 (CONDITIONAL_JUMP)  ; LAB_0042cec0
    SUB ECX,EBP                         ; 0042cf99
    LEA EAX,[EBP + EBP*0x1]             ; 0042cf9b
    MOV dword ptr [ESP + 0xc],EAX       ; 0042cf9f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042cfa3
    INC ECX                             ; 0042cfa7
    ADD EAX,EAX                         ; 0042cfa8
    MOV dword ptr [ESP + 0x10],ECX      ; 0042cfaa
    MOV dword ptr [ESP + 0x8],EAX       ; 0042cfae
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042cfb2
        ;   Label: LAB_0042cfb2
    PUSH EDX                            ; 0042cfb6
    LEA EAX,[EBX + EBP*0x1]             ; 0042cfb7
    PUSH EAX                            ; 0042cfba
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042cfbb
    ADD EAX,EDI                         ; 0042cfbf
    PUSH EAX                            ; 0042cfc1
    CALL dword ptr [ESP + 0x24]         ; 0042cfc2
    ADD ESP,0xc                         ; 0042cfc6
    INC ESI                             ; 0042cfc9
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042cfca
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042cfce
    MOV EDX,dword ptr [ESP + 0x40]      ; 0042cfd2
    ADD EDI,ECX                         ; 0042cfd6
    ADD EBX,EAX                         ; 0042cfd8
    CMP ESI,EDX                         ; 0042cfda
    JL 0x0042cfb2                       ; 0042cfdc
        ;   XREF to: 0042cfb2 (CONDITIONAL_JUMP)  ; LAB_0042cfb2
    ADD ESP,0x1c                        ; 0042cfde
    POP EBP                             ; 0042cfe1
    POP EDI                             ; 0042cfe2
    POP ESI                             ; 0042cfe3
    POP EBX                             ; 0042cfe4
    RET                                 ; 0042cfe5

