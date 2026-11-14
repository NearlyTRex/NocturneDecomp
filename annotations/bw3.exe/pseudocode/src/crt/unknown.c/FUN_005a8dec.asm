; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a8dec(int param_1,int *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005a82c0 at 005a844f
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   crt_unknown.c_FUN_005a82a0
;   crt_unknown.c_FUN_005a82ac
;   crt_unknown.c_FUN_005a9288
;   crt_unknown.c_FUN_005ae658
;   crt_unknown.c_updateClassNameHash_FUN_005a9258
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8dec
        ;   Label: crt_unknown.c_FUN_005a8dec
    PUSH ESI                            ; 005a8ded
    PUSH EDI                            ; 005a8dee
    PUSH ES                             ; 005a8def
    PUSH EBP                            ; 005a8df0
    SUB ESP,0x28                        ; 005a8df1
    MOV EDI,dword ptr [ESP + 0x48]      ; 005a8df4
    XOR EDX,EDX                         ; 005a8df8
    XOR EBP,EBP                         ; 005a8dfa
    MOV dword ptr [ESP],EDX             ; 005a8dfc
    MOV dword ptr [ESP + 0x4],EDX       ; 005a8dff
    MOV dword ptr [ESP + 0x24],EDX      ; 005a8e03
    MOV dword ptr [ESP + 0x20],EDX      ; 005a8e07
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a8e0b
        ;   Label: LAB_005a8e0b
    PUSH EAX                            ; 005a8e0f
    CALL crt_unknown.c_FUN_005a82a0     ; 005a8e10
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82a0()
    ADD ESP,0x4                         ; 005a8e15
    MOV dword ptr [ESP + 0x18],EAX      ; 005a8e18
    MOV BL,byte ptr [ESP + 0x18]        ; 005a8e1c
    INC BL                              ; 005a8e20
    AND EBX,0xff                        ; 005a8e22
    TEST byte ptr [EBX + 0x6074b8],0x2  ; 005a8e28 | DAT_006074b8
    JZ 0x005a8e37                       ; 005a8e2f
        ;   XREF to: 005a8e37 (CONDITIONAL_JUMP)  ; LAB_005a8e37
    INC dword ptr [ESP + 0x20]          ; 005a8e31
    JMP 0x005a8e0b                      ; 005a8e35
        ;   XREF to: 005a8e0b (UNCONDITIONAL_JUMP)  ; LAB_005a8e0b
    MOV EDX,dword ptr [ESP + 0x40]      ; 005a8e37
        ;   Label: LAB_005a8e37
    TEST byte ptr [EDX + 0x10],0x2      ; 005a8e3b
    JNZ 0x005a9108                      ; 005a8e3f
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    MOV EBX,dword ptr [EDX + 0xc]       ; 005a8e45
    LEA ESI,[EBX + -0x1]                ; 005a8e48
    MOV dword ptr [EDX + 0xc],ESI       ; 005a8e4b
    TEST EBX,EBX                        ; 005a8e4e
    JZ 0x005a90f6                       ; 005a8e50
        ;   XREF to: 005a90f6 (CONDITIONAL_JUMP)  ; LAB_005a90f6
    MOV EBX,0x2b                        ; 005a8e56
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005a8e5b
    MOV dword ptr [ESP + 0x1c],EBX      ; 005a8e5f
    TEST ECX,ECX                        ; 005a8e63
    JZ 0x005a8e9b                       ; 005a8e65
        ;   XREF to: 005a8e9b (CONDITIONAL_JUMP)  ; LAB_005a8e9b
    CMP EAX,EBX                         ; 005a8e67
    JZ 0x005a8e70                       ; 005a8e69
        ;   XREF to: 005a8e70 (CONDITIONAL_JUMP)  ; LAB_005a8e70
    CMP EAX,0x2d                        ; 005a8e6b
    JNZ 0x005a8e9b                      ; 005a8e6e
        ;   XREF to: 005a8e9b (CONDITIONAL_JUMP)  ; LAB_005a8e9b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a8e70
        ;   Label: LAB_005a8e70
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a8e74
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a8e78
    MOV ESI,dword ptr [ESP + 0x40]      ; 005a8e7c
    INC EAX                             ; 005a8e80
    PUSH ESI                            ; 005a8e81
    MOV dword ptr [ESP + 0x24],EAX      ; 005a8e82
    CALL crt_unknown.c_FUN_005a9288     ; 005a8e86
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    ADD ESP,0x4                         ; 005a8e8b
    MOV dword ptr [ESP + 0x18],EAX      ; 005a8e8e
    CMP EAX,-0x1                        ; 005a8e92
    JZ 0x005a9108                       ; 005a8e95
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    TEST EDI,EDI                        ; 005a8e9b
        ;   Label: LAB_005a8e9b
    JNZ 0x005a8f12                      ; 005a8e9d
        ;   XREF to: 005a8f12 (CONDITIONAL_JUMP)  ; LAB_005a8f12
    CMP dword ptr [ESP + 0x18],0x30     ; 005a8ea3
    JNZ 0x005a8f0b                      ; 005a8ea8
        ;   XREF to: 005a8f0b (CONDITIONAL_JUMP)  ; LAB_005a8f0b
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a8eaa
    PUSH EAX                            ; 005a8eae
    CALL crt_unknown.c_FUN_005a9288     ; 005a8eaf
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    ADD ESP,0x4                         ; 005a8eb4
    MOV EBP,0x1                         ; 005a8eb7
    MOV dword ptr [ESP + 0x18],EAX      ; 005a8ebc
    CMP EAX,-0x1                        ; 005a8ec0
    JZ 0x005a9108                       ; 005a8ec3
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    CMP EAX,0x78                        ; 005a8ec9
    JZ 0x005a8ed3                       ; 005a8ecc
        ;   XREF to: 005a8ed3 (CONDITIONAL_JUMP)  ; LAB_005a8ed3
    CMP EAX,0x58                        ; 005a8ece
    JNZ 0x005a8f04                      ; 005a8ed1
        ;   XREF to: 005a8f04 (CONDITIONAL_JUMP)  ; LAB_005a8f04
    MOV EDX,dword ptr [ESP + 0x40]      ; 005a8ed3
        ;   Label: LAB_005a8ed3
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a8ed7
    PUSH EDX                            ; 005a8edb
    ADD EBX,0x2                         ; 005a8edc
    CALL crt_unknown.c_FUN_005a9288     ; 005a8edf
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    MOV dword ptr [ESP + 0x24],EBX      ; 005a8ee4
    ADD ESP,0x4                         ; 005a8ee8
    XOR EBP,EBP                         ; 005a8eeb
    MOV dword ptr [ESP + 0x18],EAX      ; 005a8eed
    CMP EAX,-0x1                        ; 005a8ef1
    JZ 0x005a9108                       ; 005a8ef4
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    MOV EDI,0x10                        ; 005a8efa
    JMP 0x005a8f6e                      ; 005a8eff
        ;   XREF to: 005a8f6e (UNCONDITIONAL_JUMP)  ; LAB_005a8f6e
    MOV EDI,0x8                         ; 005a8f04
        ;   Label: LAB_005a8f04
    JMP 0x005a8f6e                      ; 005a8f09
        ;   XREF to: 005a8f6e (UNCONDITIONAL_JUMP)  ; LAB_005a8f6e
    MOV EDI,0xa                         ; 005a8f0b
        ;   Label: LAB_005a8f0b
    JMP 0x005a8f6e                      ; 005a8f10
        ;   XREF to: 005a8f6e (UNCONDITIONAL_JUMP)  ; LAB_005a8f6e
    CMP EDI,0x10                        ; 005a8f12
        ;   Label: LAB_005a8f12
    JNZ 0x005a8f6e                      ; 005a8f15
        ;   XREF to: 005a8f6e (CONDITIONAL_JUMP)  ; LAB_005a8f6e
    CMP dword ptr [ESP + 0x18],0x30     ; 005a8f17
    JNZ 0x005a8f6e                      ; 005a8f1c
        ;   XREF to: 005a8f6e (CONDITIONAL_JUMP)  ; LAB_005a8f6e
    MOV EBX,dword ptr [ESP + 0x40]      ; 005a8f1e
    PUSH EBX                            ; 005a8f22
    CALL crt_unknown.c_FUN_005a9288     ; 005a8f23
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    ADD ESP,0x4                         ; 005a8f28
    MOV EBP,0x1                         ; 005a8f2b
    MOV dword ptr [ESP + 0x18],EAX      ; 005a8f30
    CMP EAX,-0x1                        ; 005a8f34
    JZ 0x005a9108                       ; 005a8f37
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    CMP EAX,0x78                        ; 005a8f3d
    JZ 0x005a8f47                       ; 005a8f40
        ;   XREF to: 005a8f47 (CONDITIONAL_JUMP)  ; LAB_005a8f47
    CMP EAX,0x58                        ; 005a8f42
    JNZ 0x005a8f6e                      ; 005a8f45
        ;   XREF to: 005a8f6e (CONDITIONAL_JUMP)  ; LAB_005a8f6e
    MOV ECX,dword ptr [ESP + 0x40]      ; 005a8f47
        ;   Label: LAB_005a8f47
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a8f4b
    PUSH ECX                            ; 005a8f4f
    ADD ESI,0x2                         ; 005a8f50
    CALL crt_unknown.c_FUN_005a9288     ; 005a8f53
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    MOV dword ptr [ESP + 0x24],ESI      ; 005a8f58
    ADD ESP,0x4                         ; 005a8f5c
    XOR EBP,EBP                         ; 005a8f5f
    MOV dword ptr [ESP + 0x18],EAX      ; 005a8f61
    CMP EAX,-0x1                        ; 005a8f65
    JZ 0x005a9108                       ; 005a8f68
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a8f6e
        ;   Label: LAB_005a8f6e
    TEST byte ptr [EAX + 0x10],0x40     ; 005a8f72
    JZ 0x005a907d                       ; 005a8f76
        ;   XREF to: 005a907d (CONDITIONAL_JUMP)  ; LAB_005a907d
    XOR ECX,ECX                         ; 005a8f7c
    MOV dword ptr [ESP + 0x10],EDI      ; 005a8f7e
    MOV dword ptr [ESP + 0x14],ECX      ; 005a8f82
    MOV ECX,dword ptr [ESP + 0x18]      ; 005a8f86
        ;   Label: LAB_005a8f86
    PUSH ECX                            ; 005a8f8a
    CALL crt_unknown.c_updateClassNameHash_FUN_005a9258 ; 005a8f8b
        ;   XREF to: 005a9258 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_updateClassNameHash_FUN_005a9258()
    ADD ESP,0x4                         ; 005a8f90
    CMP EAX,EDI                         ; 005a8f93
    JGE 0x005a8ff5                      ; 005a8f95
        ;   XREF to: 005a8ff5 (CONDITIONAL_JUMP)  ; LAB_005a8ff5
    LEA EBX,[ESP + 0x10]                ; 005a8f97
    MOV dword ptr [ESP + 0x8],EAX       ; 005a8f9b
    XOR ESI,ESI                         ; 005a8f9f
    MOV EAX,ESP                         ; 005a8fa1
    MOV dword ptr [ESP + 0xc],ESI       ; 005a8fa3
    MOV ESI,ESP                         ; 005a8fa7
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a8fa9
    MOV EAX,dword ptr [EAX]             ; 005a8fac
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a8fae
    MOV EBX,dword ptr [EBX]             ; 005a8fb1
    CALL crt_unknown.c_FUN_005ae658     ; 005a8fb3
        ;   XREF to: 005ae658 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae658()
    MOV dword ptr [ESI + 0x4],EDX       ; 005a8fb8
    MOV dword ptr [ESI],EAX             ; 005a8fbb
    MOV ESI,ESP                         ; 005a8fbd
    LEA EBX,[ESP + 0x8]                 ; 005a8fbf
    MOV EAX,ESP                         ; 005a8fc3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a8fc5
    MOV EAX,dword ptr [EAX]             ; 005a8fc8
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a8fca
    MOV EBX,dword ptr [EBX]             ; 005a8fcd
    ADD EAX,EBX                         ; 005a8fcf
    ADC EDX,ECX                         ; 005a8fd1
    MOV dword ptr [ESI + 0x4],EDX       ; 005a8fd3
    MOV dword ptr [ESI],EAX             ; 005a8fd6
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a8fd8
    PUSH EAX                            ; 005a8fdc
    CALL crt_unknown.c_FUN_005a9288     ; 005a8fdd
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    ADD ESP,0x4                         ; 005a8fe2
    INC EBP                             ; 005a8fe5
    MOV dword ptr [ESP + 0x18],EAX      ; 005a8fe6
    CMP EAX,-0x1                        ; 005a8fea
    JZ 0x005a9108                       ; 005a8fed
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    JMP 0x005a8f86                      ; 005a8ff3
        ;   XREF to: 005a8f86 (UNCONDITIONAL_JUMP)  ; LAB_005a8f86
    CMP dword ptr [ESP + 0x18],0x3a     ; 005a8ff5
        ;   Label: LAB_005a8ff5
    JNZ 0x005a90f6                      ; 005a8ffa
        ;   XREF to: 005a90f6 (CONDITIONAL_JUMP)  ; LAB_005a90f6
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a9000
    TEST byte ptr [EAX + 0x10],0x80     ; 005a9004
    JZ 0x005a90f6                       ; 005a9008
        ;   XREF to: 005a90f6 (CONDITIONAL_JUMP)  ; LAB_005a90f6
    MOV EBX,dword ptr [ESP + 0x40]      ; 005a900e
        ;   Label: LAB_005a900e
    PUSH EBX                            ; 005a9012
    CALL crt_unknown.c_FUN_005a9288     ; 005a9013
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    ADD ESP,0x4                         ; 005a9018
    INC EBP                             ; 005a901b
    MOV dword ptr [ESP + 0x18],EAX      ; 005a901c
    CMP EAX,-0x1                        ; 005a9020
    JZ 0x005a9108                       ; 005a9023
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    PUSH EAX                            ; 005a9029
    CALL crt_unknown.c_updateClassNameHash_FUN_005a9258 ; 005a902a
        ;   XREF to: 005a9258 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_updateClassNameHash_FUN_005a9258()
    ADD ESP,0x4                         ; 005a902f
    CMP EAX,EDI                         ; 005a9032
    JGE 0x005a90f6                      ; 005a9034
        ;   XREF to: 005a90f6 (CONDITIONAL_JUMP)  ; LAB_005a90f6
    MOV ESI,ESP                         ; 005a903a
    LEA EBX,[ESP + 0x10]                ; 005a903c
    MOV dword ptr [ESP + 0x8],EAX       ; 005a9040
    XOR ECX,ECX                         ; 005a9044
    MOV EAX,ESP                         ; 005a9046
    MOV dword ptr [ESP + 0xc],ECX       ; 005a9048
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a904c
    MOV EAX,dword ptr [EAX]             ; 005a904f
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a9051
    MOV EBX,dword ptr [EBX]             ; 005a9054
    CALL crt_unknown.c_FUN_005ae658     ; 005a9056
        ;   XREF to: 005ae658 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae658()
    MOV dword ptr [ESI + 0x4],EDX       ; 005a905b
    MOV dword ptr [ESI],EAX             ; 005a905e
    MOV ESI,ESP                         ; 005a9060
    LEA EBX,[ESP + 0x8]                 ; 005a9062
    MOV EAX,ESP                         ; 005a9066
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a9068
    MOV EAX,dword ptr [EAX]             ; 005a906b
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a906d
    MOV EBX,dword ptr [EBX]             ; 005a9070
    ADD EAX,EBX                         ; 005a9072
    ADC EDX,ECX                         ; 005a9074
    MOV dword ptr [ESI + 0x4],EDX       ; 005a9076
    MOV dword ptr [ESI],EAX             ; 005a9079
    JMP 0x005a900e                      ; 005a907b
        ;   XREF to: 005a900e (UNCONDITIONAL_JUMP)  ; LAB_005a900e
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a907d
        ;   Label: LAB_005a907d
    PUSH ESI                            ; 005a9081
    CALL crt_unknown.c_updateClassNameHash_FUN_005a9258 ; 005a9082
        ;   XREF to: 005a9258 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_updateClassNameHash_FUN_005a9258()
    ADD ESP,0x4                         ; 005a9087
    CMP EAX,EDI                         ; 005a908a
    JGE 0x005a90b4                      ; 005a908c
        ;   XREF to: 005a90b4 (CONDITIONAL_JUMP)  ; LAB_005a90b4
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a908e
    IMUL EBX,EDI                        ; 005a9092
    ADD EBX,EAX                         ; 005a9095
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a9097
    PUSH EAX                            ; 005a909b
    MOV dword ptr [ESP + 0x28],EBX      ; 005a909c
    CALL crt_unknown.c_FUN_005a9288     ; 005a90a0
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    ADD ESP,0x4                         ; 005a90a5
    INC EBP                             ; 005a90a8
    MOV dword ptr [ESP + 0x18],EAX      ; 005a90a9
    CMP EAX,-0x1                        ; 005a90ad
    JZ 0x005a9108                       ; 005a90b0
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    JMP 0x005a907d                      ; 005a90b2
        ;   XREF to: 005a907d (UNCONDITIONAL_JUMP)  ; LAB_005a907d
    CMP ESI,0x3a                        ; 005a90b4
        ;   Label: LAB_005a90b4
    JNZ 0x005a90f6                      ; 005a90b7
        ;   XREF to: 005a90f6 (CONDITIONAL_JUMP)  ; LAB_005a90f6
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a90b9
    TEST byte ptr [EAX + 0x10],0x80     ; 005a90bd
    JZ 0x005a90f6                       ; 005a90c1
        ;   XREF to: 005a90f6 (CONDITIONAL_JUMP)  ; LAB_005a90f6
    MOV EBX,dword ptr [ESP + 0x40]      ; 005a90c3
        ;   Label: LAB_005a90c3
    PUSH EBX                            ; 005a90c7
    CALL crt_unknown.c_FUN_005a9288     ; 005a90c8
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9288()
    ADD ESP,0x4                         ; 005a90cd
    INC EBP                             ; 005a90d0
    MOV dword ptr [ESP + 0x18],EAX      ; 005a90d1
    CMP EAX,-0x1                        ; 005a90d5
    JZ 0x005a9108                       ; 005a90d8
        ;   XREF to: 005a9108 (CONDITIONAL_JUMP)  ; LAB_005a9108
    PUSH EAX                            ; 005a90da
    CALL crt_unknown.c_updateClassNameHash_FUN_005a9258 ; 005a90db
        ;   XREF to: 005a9258 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_updateClassNameHash_FUN_005a9258()
    ADD ESP,0x4                         ; 005a90e0
    CMP EAX,EDI                         ; 005a90e3
    JGE 0x005a90f6                      ; 005a90e5
        ;   XREF to: 005a90f6 (CONDITIONAL_JUMP)  ; LAB_005a90f6
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a90e7
    IMUL EBX,EDI                        ; 005a90eb
    ADD EBX,EAX                         ; 005a90ee
    MOV dword ptr [ESP + 0x24],EBX      ; 005a90f0
    JMP 0x005a90c3                      ; 005a90f4
        ;   XREF to: 005a90c3 (UNCONDITIONAL_JUMP)  ; LAB_005a90c3
    MOV ESI,dword ptr [ESP + 0x40]      ; 005a90f6
        ;   Label: LAB_005a90f6
    PUSH ESI                            ; 005a90fa
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a90fb
    PUSH EDI                            ; 005a90ff
    CALL crt_unknown.c_FUN_005a82ac     ; 005a9100
        ;   XREF to: 005a82ac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82ac()
    ADD ESP,0x8                         ; 005a9105
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a9108
        ;   Label: LAB_005a9108
    TEST byte ptr [EAX + 0x10],0x40     ; 005a910c
    JZ 0x005a91bc                       ; 005a9110
        ;   XREF to: 005a91bc (CONDITIONAL_JUMP)  ; LAB_005a91bc
    CMP dword ptr [ESP + 0x1c],0x2d     ; 005a9116
    JNZ 0x005a9144                      ; 005a911b
        ;   XREF to: 005a9144 (CONDITIONAL_JUMP)  ; LAB_005a9144
    MOV EDX,dword ptr [ESP]             ; 005a911d
    MOV EBX,dword ptr [ESP + 0x4]       ; 005a9120
    NOT EDX                             ; 005a9124
    NOT EBX                             ; 005a9126
    MOV dword ptr [ESP],EDX             ; 005a9128
    LEA ECX,[EDX + 0x1]                 ; 005a912b
    MOV dword ptr [ESP + 0x4],EBX       ; 005a912e
    MOV dword ptr [ESP],ECX             ; 005a9132
    TEST ECX,ECX                        ; 005a9135
    JNZ 0x005a913e                      ; 005a9137
        ;   XREF to: 005a913e (CONDITIONAL_JUMP)  ; LAB_005a913e
    LEA EAX,[EBX + 0x1]                 ; 005a9139
    JMP 0x005a9140                      ; 005a913c
        ;   XREF to: 005a9140 (UNCONDITIONAL_JUMP)  ; LAB_005a9140
    MOV EAX,EBX                         ; 005a913e
        ;   Label: LAB_005a913e
    MOV dword ptr [ESP + 0x4],EAX       ; 005a9140
        ;   Label: LAB_005a9140
    TEST EBP,EBP                        ; 005a9144
        ;   Label: LAB_005a9144
    JLE 0x005a924a                      ; 005a9146
        ;   XREF to: 005a924a (CONDITIONAL_JUMP)  ; LAB_005a924a
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a914c
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a9150
    MOV DL,byte ptr [EAX + 0x10]        ; 005a9154
    ADD EBP,EDI                         ; 005a9157
    TEST DL,0x1                         ; 005a9159
    JZ 0x005a924a                       ; 005a915c
        ;   XREF to: 005a924a (CONDITIONAL_JUMP)  ; LAB_005a924a
    TEST DL,0x4                         ; 005a9162
    JZ 0x005a917b                       ; 005a9165
        ;   XREF to: 005a917b (CONDITIONAL_JUMP)  ; LAB_005a917b
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a9167
    MOV ECX,dword ptr [EAX]             ; 005a916b
    ADD ECX,0x8                         ; 005a916d
    MOV dword ptr [EAX],ECX             ; 005a9170
    MOV AX,word ptr [ECX + -0x4]        ; 005a9172
    MOV EDI,dword ptr [ECX + -0x8]      ; 005a9176
    JMP 0x005a91ab                      ; 005a9179
        ;   XREF to: 005a91ab (UNCONDITIONAL_JUMP)  ; LAB_005a91ab
    TEST DL,0x8                         ; 005a917b
        ;   Label: LAB_005a917b
    JZ 0x005a919b                       ; 005a917e
        ;   XREF to: 005a919b (CONDITIONAL_JUMP)  ; LAB_005a919b
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a9180
    MOV EBX,dword ptr [EAX]             ; 005a9184
    ADD EBX,0x4                         ; 005a9186
    MOV dword ptr [EAX],EBX             ; 005a9189
    MOV AX,DS                           ; 005a918b
    MOV EDI,dword ptr [EBX + -0x4]      ; 005a918d
    MOV ESI,ESP                         ; 005a9190
    MOV ES,AX                           ; 005a9192
    MOVSD ES:EDI,ESI                    ; 005a9194
    MOVSD ES:EDI,ESI                    ; 005a9195
    JMP 0x005a924a                      ; 005a9196
        ;   XREF to: 005a924a (UNCONDITIONAL_JUMP)  ; LAB_005a924a
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a919b
        ;   Label: LAB_005a919b
    MOV EDX,dword ptr [EAX]             ; 005a919f
    ADD EDX,0x4                         ; 005a91a1
    MOV dword ptr [EAX],EDX             ; 005a91a4
    MOV AX,DS                           ; 005a91a6
    MOV EDI,dword ptr [EDX + -0x4]      ; 005a91a8
    MOV ESI,ESP                         ; 005a91ab
        ;   Label: LAB_005a91ab
    MOV ES,AX                           ; 005a91ad
    MOVSD ES:EDI,ESI                    ; 005a91af
    MOVSD ES:EDI,ESI                    ; 005a91b0
    MOV EAX,EBP                         ; 005a91b1
    ADD ESP,0x28                        ; 005a91b3
    POP EBP                             ; 005a91b6
    POP ES                              ; 005a91b7
    POP EDI                             ; 005a91b8
    POP ESI                             ; 005a91b9
    POP EBX                             ; 005a91ba
    RET                                 ; 005a91bb
    CMP dword ptr [ESP + 0x1c],0x2d     ; 005a91bc
        ;   Label: LAB_005a91bc
    JNZ 0x005a91c7                      ; 005a91c1
        ;   XREF to: 005a91c7 (CONDITIONAL_JUMP)  ; LAB_005a91c7
    NEG dword ptr [ESP + 0x24]          ; 005a91c3
    TEST EBP,EBP                        ; 005a91c7
        ;   Label: LAB_005a91c7
    JLE 0x005a924a                      ; 005a91c9
        ;   XREF to: 005a924a (CONDITIONAL_JUMP)  ; LAB_005a924a
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a91cf
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a91d3
    MOV DH,byte ptr [EAX + 0x10]        ; 005a91d7
    ADD EBP,EBX                         ; 005a91da
    TEST DH,0x1                         ; 005a91dc
    JZ 0x005a924a                       ; 005a91df
        ;   XREF to: 005a924a (CONDITIONAL_JUMP)  ; LAB_005a924a
    TEST DH,0x4                         ; 005a91e1
    JZ 0x005a91f6                       ; 005a91e4
        ;   XREF to: 005a91f6 (CONDITIONAL_JUMP)  ; LAB_005a91f6
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a91e6
    MOV EDI,dword ptr [EAX]             ; 005a91ea
    ADD EDI,0x8                         ; 005a91ec
    MOV dword ptr [EAX],EDI             ; 005a91ef
    LES EAX,[EDI + -0x8]                ; 005a91f1
    JMP 0x005a9221                      ; 005a91f4
        ;   XREF to: 005a9221 (UNCONDITIONAL_JUMP)  ; LAB_005a9221
    TEST DH,0x8                         ; 005a91f6
        ;   Label: LAB_005a91f6
    JZ 0x005a920f                       ; 005a91f9
        ;   XREF to: 005a920f (CONDITIONAL_JUMP)  ; LAB_005a920f
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a91fb
    MOV ESI,dword ptr [EAX]             ; 005a91ff
    ADD ESI,0x4                         ; 005a9201
    MOV BX,DS                           ; 005a9204
    MOV dword ptr [EAX],ESI             ; 005a9206
    MOV ES,BX                           ; 005a9208
    MOV EAX,dword ptr [ESI + -0x4]      ; 005a920a
    JMP 0x005a9221                      ; 005a920d
        ;   XREF to: 005a9221 (UNCONDITIONAL_JUMP)  ; LAB_005a9221
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a920f
        ;   Label: LAB_005a920f
    MOV ECX,dword ptr [EAX]             ; 005a9213
    ADD ECX,0x4                         ; 005a9215
    MOV BX,DS                           ; 005a9218
    MOV dword ptr [EAX],ECX             ; 005a921a
    MOV ES,BX                           ; 005a921c
    MOV EAX,dword ptr [ECX + -0x4]      ; 005a921e
    MOV EDX,dword ptr [ESP + 0x40]      ; 005a9221
        ;   Label: LAB_005a9221
    MOV CL,byte ptr [EDX + 0x10]        ; 005a9225
    TEST CL,0x10                        ; 005a9228
    JZ 0x005a9240                       ; 005a922b
        ;   XREF to: 005a9240 (CONDITIONAL_JUMP)  ; LAB_005a9240
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a922d
    MOV word ptr ES:[EAX],BX            ; 005a9231
    MOV EAX,EBP                         ; 005a9235
    ADD ESP,0x28                        ; 005a9237
    POP EBP                             ; 005a923a
    POP ES                              ; 005a923b
    POP EDI                             ; 005a923c
    POP ESI                             ; 005a923d
    POP EBX                             ; 005a923e
    RET                                 ; 005a923f
    TEST CL,0x20                        ; 005a9240
        ;   Label: LAB_005a9240
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a9243
    MOV dword ptr ES:[EAX],EBX          ; 005a9247
    MOV EAX,EBP                         ; 005a924a
        ;   Label: LAB_005a924a
    ADD ESP,0x28                        ; 005a924c
    POP EBP                             ; 005a924f
    POP ES                              ; 005a9250
    POP EDI                             ; 005a9251
    POP ESI                             ; 005a9252
    POP EBX                             ; 005a9253
    RET                                 ; 005a9254

