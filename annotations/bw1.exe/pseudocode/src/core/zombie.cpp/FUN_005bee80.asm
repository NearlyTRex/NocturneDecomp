; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_005bee80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bc0cd0
;   undefined4 DAT_02c9eb34
;   undefined4 DAT_02c9f038
;   undefined4 DAT_02c9f03c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bee80
        ;   Label: core_zombie.cpp_FUN_005bee80
    PUSH EDI                            ; 005bee81
    PUSH EBP                            ; 005bee82
    SUB ESP,0x4                         ; 005bee83
    MOV EBX,dword ptr [ESP + 0x14]      ; 005bee86
    MOV EDI,dword ptr [ESP + 0x18]      ; 005bee8a
    MOV EDX,dword ptr [EDI + 0x14]      ; 005bee8e
    MOV EAX,dword ptr [EBX + 0x14]      ; 005bee91
    SAR EDX,0x10                        ; 005bee94
    SAR EAX,0x10                        ; 005bee97
    CMP EAX,EDX                         ; 005bee9a
    JZ 0x005bef85                       ; 005bee9c
        ;   XREF to: 005bef85 (CONDITIONAL_JUMP)  ; LAB_005bef85
    PUSH ESI                            ; 005beea2
    MOV ESI,dword ptr [EDI + 0x14]      ; 005beea3
    CMP ESI,dword ptr [EBX + 0x14]      ; 005beea6
    JGE 0x005beeb7                      ; 005beea9
        ;   XREF to: 005beeb7 (CONDITIONAL_JUMP)  ; LAB_005beeb7
    MOV ECX,EBX                         ; 005beeab
    MOV EBX,EDI                         ; 005beead
    MOV EDI,ECX                         ; 005beeaf
    MOV ECX,EAX                         ; 005beeb1
    MOV EAX,EDX                         ; 005beeb3
    MOV EDX,ECX                         ; 005beeb5
    MOV ESI,dword ptr [0x02c9eb34]      ; 005beeb7 | DAT_02c9eb34
        ;   Label: LAB_005beeb7
    LEA ECX,[ESI*0x4 + 0x0]             ; 005beebd
    ADD ECX,ESI                         ; 005beec4
    MOV ESI,0x2c9eb38                   ; 005beec6
    SHL ECX,0x4                         ; 005beecb
    ADD ESI,ECX                         ; 005beece
    MOV dword ptr [ESI],EAX             ; 005beed0
    MOV EBP,dword ptr [0x02c9f038]      ; 005beed2 | DAT_02c9f038
    MOV dword ptr [ESI + 0x4],EDX       ; 005beed8
    CMP EAX,EBP                         ; 005beedb
    JGE 0x005beee4                      ; 005beedd
        ;   XREF to: 005beee4 (CONDITIONAL_JUMP)  ; LAB_005beee4
    MOV [0x02c9f038],EAX                ; 005beedf | DAT_02c9f038
    CMP EDX,dword ptr [0x02c9f03c]      ; 005beee4 | DAT_02c9f03c
        ;   Label: LAB_005beee4
    JLE 0x005beef2                      ; 005beeea
        ;   XREF to: 005beef2 (CONDITIONAL_JUMP)  ; LAB_005beef2
    MOV dword ptr [0x02c9f03c],EDX      ; 005beeec | DAT_02c9f03c
    MOV EDX,dword ptr [EBX + 0x14]      ; 005beef2
        ;   Label: LAB_005beef2
    MOV ECX,dword ptr [EDI + 0x14]      ; 005beef5
    SUB ECX,EDX                         ; 005beef8
    CMP ECX,0x10000                     ; 005beefa
    JNC 0x005bef8c                      ; 005bef00
        ;   XREF to: 005bef8c (CONDITIONAL_JUMP)  ; LAB_005bef8c
    XOR ECX,ECX                         ; 005bef06
    MOV EAX,dword ptr [EDI + 0x10]      ; 005bef08
        ;   Label: LAB_005bef08
    MOV EDX,dword ptr [EBX + 0x10]      ; 005bef0b
    MOV EBP,dword ptr [EBX + 0x14]      ; 005bef0e
    SUB EAX,EDX                         ; 005bef11
    AND EBP,0xffff                      ; 005bef13
    MOV EDX,EAX                         ; 005bef19
    MOV EAX,ECX                         ; 005bef1b
    XOR EBP,0xffff                      ; 005bef1d
    IMUL EDX                            ; 005bef23
    SHRD EAX,EDX,0x10                   ; 005bef25
    MOV EDX,EAX                         ; 005bef29
    MOV dword ptr [ESI + 0xc],EAX       ; 005bef2b
    MOV EAX,EBP                         ; 005bef2e
    IMUL EDX                            ; 005bef30
    SHRD EAX,EDX,0x10                   ; 005bef32
    MOV dword ptr [ESP + 0x4],EAX       ; 005bef36
    MOV EDX,dword ptr [ESP + 0x4]       ; 005bef3a
    MOV EAX,dword ptr [EBX + 0x10]      ; 005bef3e
    ADD EAX,EDX                         ; 005bef41
    MOV dword ptr [ESI + 0x8],EAX       ; 005bef43
    MOV EDX,dword ptr [EDI + 0x8]       ; 005bef46
    SUB EDX,dword ptr [EBX + 0x8]       ; 005bef49
    MOV EAX,ECX                         ; 005bef4c
    SHL EDX,0x8                         ; 005bef4e
    IMUL EDX                            ; 005bef51
    SHRD EAX,EDX,0x10                   ; 005bef53
    MOV dword ptr [ESI + 0x2c],EAX      ; 005bef57
    MOV ECX,dword ptr [EBX + 0x8]       ; 005bef5a
    MOV EAX,[0x01bc0cd0]                ; 005bef5d | DAT_01bc0cd0
    SHL ECX,0x8                         ; 005bef62
    MOV EDX,dword ptr [ESI + 0x2c]      ; 005bef65
    SUB ECX,EAX                         ; 005bef68
    MOV EAX,EBP                         ; 005bef6a
    IMUL EDX                            ; 005bef6c
    SHRD EAX,EDX,0x10                   ; 005bef6e
    MOV EDX,dword ptr [0x02c9eb34]      ; 005bef72 | DAT_02c9eb34
    ADD ECX,EAX                         ; 005bef78
    INC EDX                             ; 005bef7a
    MOV dword ptr [ESI + 0x28],ECX      ; 005bef7b
    MOV dword ptr [0x02c9eb34],EDX      ; 005bef7e | DAT_02c9eb34
    POP ESI                             ; 005bef84
    ADD ESP,0x4                         ; 005bef85
        ;   Label: LAB_005bef85
    POP EBP                             ; 005bef88
    POP EDI                             ; 005bef89
    POP EBX                             ; 005bef8a
    RET                                 ; 005bef8b
    MOV EAX,0xffffffff                  ; 005bef8c
        ;   Label: LAB_005bef8c
    XOR EDX,EDX                         ; 005bef91
    DIV ECX                             ; 005bef93
    MOV ECX,EAX                         ; 005bef95
    JMP 0x005bef08                      ; 005bef97
        ;   XREF to: 005bef08 (UNCONDITIONAL_JUMP)  ; LAB_005bef08

