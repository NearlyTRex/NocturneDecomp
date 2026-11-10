; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005aec4d(uint param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   crt_unknown.c_FUN_005aa3e0 at 005aa454
;   crt_unknown.c_FUN_005aec1a at 005aec29
;
; Referenced Globals:
;   undefined4 DAT_005e8838
;   undefined4 DAT_005e883c
;   undefined4 DAT_00607e18
;
; Called Functions:
;   crt_unknown.c_FUN_005b083d
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aec4d
        ;   Label: crt_unknown.c_FUN_005aec4d
    MOV EBP,ESP                         ; 005aec4e
    PUSH EBX                            ; 005aec50
    PUSH ESI                            ; 005aec51
    SUB ESP,0x30                        ; 005aec52
    MOV EDX,dword ptr [EBP + 0x8]       ; 005aec55
    MOV ESI,dword ptr [EBP + 0xc]       ; 005aec58
    MOV ECX,dword ptr [EBP + 0x10]      ; 005aec5b
    MOV EAX,dword ptr [ESI]             ; 005aec5e
    MOV dword ptr [EBP + -0x30],EAX     ; 005aec60
    MOV EAX,dword ptr [ESI + 0x4]       ; 005aec63
    MOV dword ptr [EBP + -0x2c],EAX     ; 005aec66
    MOV EAX,dword ptr [ECX]             ; 005aec69
    MOV dword ptr [EBP + -0x28],EAX     ; 005aec6b
    MOV EAX,dword ptr [ECX + 0x4]       ; 005aec6e
    MOV dword ptr [EBP + -0x24],EAX     ; 005aec71
    TEST DL,0x40                        ; 005aec74
    JZ 0x005aec80                       ; 005aec77
        ;   XREF to: 005aec80 (CONDITIONAL_JUMP)  ; LAB_005aec80
    MOV EBX,0x1                         ; 005aec79
    JMP 0x005aecba                      ; 005aec7e
        ;   XREF to: 005aecba (UNCONDITIONAL_JUMP)  ; LAB_005aecba
    TEST DL,0x80                        ; 005aec80
        ;   Label: LAB_005aec80
    JZ 0x005aec8c                       ; 005aec83
        ;   XREF to: 005aec8c (CONDITIONAL_JUMP)  ; LAB_005aec8c
    MOV EBX,0x2                         ; 005aec85
    JMP 0x005aecba                      ; 005aec8a
        ;   XREF to: 005aecba (UNCONDITIONAL_JUMP)  ; LAB_005aecba
    TEST DH,0x1                         ; 005aec8c
        ;   Label: LAB_005aec8c
    JZ 0x005aec98                       ; 005aec8f
        ;   XREF to: 005aec98 (CONDITIONAL_JUMP)  ; LAB_005aec98
    MOV EBX,0x3                         ; 005aec91
    JMP 0x005aecba                      ; 005aec96
        ;   XREF to: 005aecba (UNCONDITIONAL_JUMP)  ; LAB_005aecba
    TEST DH,0x8                         ; 005aec98
        ;   Label: LAB_005aec98
    JZ 0x005aeca4                       ; 005aec9b
        ;   XREF to: 005aeca4 (CONDITIONAL_JUMP)  ; LAB_005aeca4
    MOV EBX,0x4                         ; 005aec9d
    JMP 0x005aecba                      ; 005aeca2
        ;   XREF to: 005aecba (UNCONDITIONAL_JUMP)  ; LAB_005aecba
    TEST DH,0x2                         ; 005aeca4
        ;   Label: LAB_005aeca4
    JZ 0x005aecb0                       ; 005aeca7
        ;   XREF to: 005aecb0 (CONDITIONAL_JUMP)  ; LAB_005aecb0
    MOV EBX,0x6                         ; 005aeca9
    JMP 0x005aecba                      ; 005aecae
        ;   XREF to: 005aecba (UNCONDITIONAL_JUMP)  ; LAB_005aecba
    TEST DH,0x4                         ; 005aecb0
        ;   Label: LAB_005aecb0
    JZ 0x005aecba                       ; 005aecb3
        ;   XREF to: 005aecba (CONDITIONAL_JUMP)  ; LAB_005aecba
    MOV EBX,0x5                         ; 005aecb5
    MOV EAX,EDX                         ; 005aecba
        ;   Label: LAB_005aecba
    AND EAX,0x1f                        ; 005aecbc
    MOV EAX,dword ptr [EAX*0x4 + 0x607e18] ; 005aecbf | DAT_00607e18
    MOV dword ptr [EBP + -0x38],EBX     ; 005aecc6
    MOV dword ptr [EBP + -0x34],EAX     ; 005aecc9
    TEST DH,0x10                        ; 005aeccc
    JZ 0x005aecde                       ; 005aeccf
        ;   XREF to: 005aecde (CONDITIONAL_JUMP)  ; LAB_005aecde
    FLD double ptr [0x005e8838]         ; 005aecd1 | DAT_005e8838
    FCHS                                ; 005aecd7
    FSTP double ptr [EBP + -0x20]       ; 005aecd9
    JMP 0x005aed20                      ; 005aecdc
        ;   XREF to: 005aed20 (UNCONDITIONAL_JUMP)  ; LAB_005aed20
    TEST DH,0x20                        ; 005aecde
        ;   Label: LAB_005aecde
    JZ 0x005aeced                       ; 005aece1
        ;   XREF to: 005aeced (CONDITIONAL_JUMP)  ; LAB_005aeced
    XOR ECX,ECX                         ; 005aece3
    MOV dword ptr [EBP + -0x20],ECX     ; 005aece5
    MOV dword ptr [EBP + -0x1c],ECX     ; 005aece8
    JMP 0x005aed20                      ; 005aeceb
        ;   XREF to: 005aed20 (UNCONDITIONAL_JUMP)  ; LAB_005aed20
    TEST DH,0x40                        ; 005aeced
        ;   Label: LAB_005aeced
    JZ 0x005aed01                       ; 005aecf0
        ;   XREF to: 005aed01 (CONDITIONAL_JUMP)  ; LAB_005aed01
    XOR EDX,EDX                         ; 005aecf2
    MOV EBX,0x3ff00000                  ; 005aecf4
    MOV dword ptr [EBP + -0x20],EDX     ; 005aecf9
    MOV dword ptr [EBP + -0x1c],EBX     ; 005aecfc
    JMP 0x005aed20                      ; 005aecff
        ;   XREF to: 005aed20 (UNCONDITIONAL_JUMP)  ; LAB_005aed20
    TEST DH,0x80                        ; 005aed01
        ;   Label: LAB_005aed01
    JZ 0x005aed15                       ; 005aed04
        ;   XREF to: 005aed15 (CONDITIONAL_JUMP)  ; LAB_005aed15
    MOV EAX,[0x005e8838]                ; 005aed06 | DAT_005e8838
    MOV dword ptr [EBP + -0x20],EAX     ; 005aed0b
    MOV EAX,[0x005e883c]                ; 005aed0e | DAT_005e883c
    JMP 0x005aed1d                      ; 005aed13
        ;   XREF to: 005aed1d (UNCONDITIONAL_JUMP)  ; LAB_005aed1d
    MOV EAX,dword ptr [ECX]             ; 005aed15
        ;   Label: LAB_005aed15
    MOV dword ptr [EBP + -0x20],EAX     ; 005aed17
    MOV EAX,dword ptr [ECX + 0x4]       ; 005aed1a
    MOV dword ptr [EBP + -0x1c],EAX     ; 005aed1d
        ;   Label: LAB_005aed1d
    LEA EAX,[EBP + -0x38]               ; 005aed20
        ;   Label: LAB_005aed20
    PUSH EAX                            ; 005aed23
    CALL crt_unknown.c_FUN_005b083d     ; 005aed24
        ;   XREF to: 005b083d (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b083d()
    MOV dword ptr [EBP + -0x18],EAX     ; 005aed29
    MOV dword ptr [EBP + -0x14],EDX     ; 005aed2c
    ADD ESP,0x4                         ; 005aed2f
    MOV EAX,dword ptr [EBP + -0x18]     ; 005aed32
    MOV dword ptr [EBP + -0x10],EAX     ; 005aed35
    MOV EAX,dword ptr [EBP + -0x14]     ; 005aed38
    MOV dword ptr [EBP + -0xc],EAX      ; 005aed3b
    MOV EAX,dword ptr [EBP + -0x10]     ; 005aed3e
    MOV EDX,dword ptr [EBP + -0xc]      ; 005aed41
    LEA ESP,[EBP + -0x8]                ; 005aed44
    POP ESI                             ; 005aed47
    POP EBX                             ; 005aed48
    POP EBP                             ; 005aed49
    RET                                 ; 005aed4a

