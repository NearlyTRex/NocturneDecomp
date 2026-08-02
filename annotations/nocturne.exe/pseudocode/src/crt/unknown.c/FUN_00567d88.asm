; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00567d88(int param_1,int *param_2)
;
; Local Variables:
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x7f]:1  local_7f
; undefined1       Stack[-0x7e]:1  local_7e
; undefined1       Stack[-0x7d]:1  local_7d
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined1       Stack[-0x7a]:1  local_7a
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_00567560 at 00567753
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;   void* PTR_crt_unknown.c_FUN_0056f0f0_005c1f8c = 0056f0f0
;
; Called Functions:
;   crt_math.c_doubleToFloat_FUN_0056f100
;   crt_unknown.c_FUN_00567540
;   crt_unknown.c_FUN_0056754c
;   crt_unknown.c_FUN_00568528
;   crt_unknown.c_FUN_0056f0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567d88
        ;   Label: crt_unknown.c_FUN_00567d88
    PUSH ESI                            ; 00567d89
    PUSH EDI                            ; 00567d8a
    PUSH ES                             ; 00567d8b
    PUSH EBP                            ; 00567d8c
    SUB ESP,0x6c                        ; 00567d8d
    MOV EBP,dword ptr [ESP + 0x84]      ; 00567d90
    XOR EDI,EDI                         ; 00567d97
    MOV ESI,ESP                         ; 00567d99
    MOV dword ptr [ESP + 0x5c],EDI      ; 00567d9b
    PUSH EBP                            ; 00567d9f
        ;   Label: LAB_00567d9f
    CALL crt_unknown.c_FUN_00567540     ; 00567da0
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567540()
    ADD ESP,0x4                         ; 00567da5
    MOV CL,AL                           ; 00567da8
    MOV EBX,EAX                         ; 00567daa
    INC CL                              ; 00567dac
    AND ECX,0xff                        ; 00567dae
    TEST byte ptr [ECX + 0x5c168c],0x2  ; 00567db4 | DAT_005c168c
    JZ 0x00567dc3                       ; 00567dbb
        ;   XREF to: 00567dc3 (CONDITIONAL_JUMP)  ; LAB_00567dc3
    INC dword ptr [ESP + 0x5c]          ; 00567dbd
    JMP 0x00567d9f                      ; 00567dc1
        ;   XREF to: 00567d9f (UNCONDITIONAL_JUMP)  ; LAB_00567d9f
    TEST byte ptr [EBP + 0x10],0x2      ; 00567dc3
        ;   Label: LAB_00567dc3
    JNZ 0x00567fbd                      ; 00567dc7
        ;   XREF to: 00567fbd (CONDITIONAL_JUMP)  ; LAB_00567fbd
    MOV ECX,dword ptr [EBP + 0xc]       ; 00567dcd
    LEA EDX,[ECX + -0x1]                ; 00567dd0
    MOV dword ptr [EBP + 0xc],EDX       ; 00567dd3
    TEST ECX,ECX                        ; 00567dd6
    JZ 0x00567fb3                       ; 00567dd8
        ;   XREF to: 00567fb3 (CONDITIONAL_JUMP)  ; LAB_00567fb3
    CMP EAX,0x2b                        ; 00567dde
    JZ 0x00567de8                       ; 00567de1
        ;   XREF to: 00567de8 (CONDITIONAL_JUMP)  ; LAB_00567de8
    CMP EAX,0x2d                        ; 00567de3
    JNZ 0x00567e08                      ; 00567de6
        ;   XREF to: 00567e08 (CONDITIONAL_JUMP)  ; LAB_00567e08
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00567de8
        ;   Label: LAB_00567de8
    PUSH EBP                            ; 00567dec
    MOV byte ptr [ESI],BL               ; 00567ded
    INC ECX                             ; 00567def
    INC ESI                             ; 00567df0
    MOV dword ptr [ESP + 0x60],ECX      ; 00567df1
    CALL crt_unknown.c_FUN_00568528     ; 00567df5
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00567dfa
    MOV EBX,EAX                         ; 00567dfd
    CMP EAX,-0x1                        ; 00567dff
    JZ 0x00567fbd                       ; 00567e02
        ;   XREF to: 00567fbd (CONDITIONAL_JUMP)  ; LAB_00567fbd
    MOV AL,BL                           ; 00567e08
        ;   Label: LAB_00567e08
    INC AL                              ; 00567e0a
    AND EAX,0xff                        ; 00567e0c
    TEST byte ptr [EAX + 0x5c168c],0x20 ; 00567e11 | DAT_005c168c
    JNZ 0x00567e23                      ; 00567e18
        ;   XREF to: 00567e23 (CONDITIONAL_JUMP)  ; LAB_00567e23
    CMP EBX,0x2e                        ; 00567e1a
    JNZ 0x00567fb3                      ; 00567e1d
        ;   XREF to: 00567fb3 (CONDITIONAL_JUMP)  ; LAB_00567fb3
    XOR EAX,EAX                         ; 00567e23
        ;   Label: LAB_00567e23
    MOV dword ptr [ESP + 0x64],EAX      ; 00567e25
    MOV dword ptr [ESP + 0x58],EAX      ; 00567e29
    MOV AL,BL                           ; 00567e2d
    INC AL                              ; 00567e2f
    AND EAX,0xff                        ; 00567e31
    TEST byte ptr [EAX + 0x5c168c],0x20 ; 00567e36 | DAT_005c168c
    JZ 0x00567e85                       ; 00567e3d
        ;   XREF to: 00567e85 (CONDITIONAL_JUMP)  ; LAB_00567e85
    MOV dword ptr [ESP + 0x58],0x1      ; 00567e3f
    MOV byte ptr [ESI],BL               ; 00567e47
        ;   Label: LAB_00567e47
    MOV AL,byte ptr [EBP + 0x10]        ; 00567e49
    INC ESI                             ; 00567e4c
    TEST AL,0x10                        ; 00567e4d
    JZ 0x00567e60                       ; 00567e4f
        ;   XREF to: 00567e60 (CONDITIONAL_JUMP)  ; LAB_00567e60
    IMUL EAX,dword ptr [ESP + 0x66],0xa ; 00567e51
    ADD EBX,EAX                         ; 00567e56
    SUB EBX,0x30                        ; 00567e58
    MOV word ptr [ESP + 0x66],BX        ; 00567e5b
    PUSH EBP                            ; 00567e60
        ;   Label: LAB_00567e60
    INC EDI                             ; 00567e61
    CALL crt_unknown.c_FUN_00568528     ; 00567e62
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00567e67
    MOV EBX,EAX                         ; 00567e6a
    CMP EAX,-0x1                        ; 00567e6c
    JZ 0x00567fbd                       ; 00567e6f
        ;   XREF to: 00567fbd (CONDITIONAL_JUMP)  ; LAB_00567fbd
    INC AL                              ; 00567e75
    AND EAX,0xff                        ; 00567e77
    TEST byte ptr [EAX + 0x5c168c],0x20 ; 00567e7c | DAT_005c168c
    JNZ 0x00567e47                      ; 00567e83
        ;   XREF to: 00567e47 (CONDITIONAL_JUMP)  ; LAB_00567e47
    CMP EBX,0x2e                        ; 00567e85
        ;   Label: LAB_00567e85
    JNZ 0x00567f2f                      ; 00567e88
        ;   XREF to: 00567f2f (CONDITIONAL_JUMP)  ; LAB_00567f2f
    PUSH EBP                            ; 00567e8e
    MOV byte ptr [ESI],BL               ; 00567e8f
    INC ESI                             ; 00567e91
    CALL crt_unknown.c_FUN_00568528     ; 00567e92
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00567e97
    MOV EBX,EAX                         ; 00567e9a
    CMP EAX,-0x1                        ; 00567e9c
    JZ 0x00567fbd                       ; 00567e9f
        ;   XREF to: 00567fbd (CONDITIONAL_JUMP)  ; LAB_00567fbd
    CMP dword ptr [ESP + 0x58],0x0      ; 00567ea5
    JNZ 0x00567ec2                      ; 00567eaa
        ;   XREF to: 00567ec2 (CONDITIONAL_JUMP)  ; LAB_00567ec2
    MOV AL,BL                           ; 00567eac
    INC AL                              ; 00567eae
    AND EAX,0xff                        ; 00567eb0
    TEST byte ptr [EAX + 0x5c168c],0x20 ; 00567eb5 | DAT_005c168c
    JZ 0x00567fb3                       ; 00567ebc
        ;   XREF to: 00567fb3 (CONDITIONAL_JUMP)  ; LAB_00567fb3
    INC EDI                             ; 00567ec2
        ;   Label: LAB_00567ec2
    MOV AL,BL                           ; 00567ec3
        ;   Label: LAB_00567ec3
    INC AL                              ; 00567ec5
    AND EAX,0xff                        ; 00567ec7
    TEST byte ptr [EAX + 0x5c168c],0x20 ; 00567ecc | DAT_005c168c
    JZ 0x00567ee9                       ; 00567ed3
        ;   XREF to: 00567ee9 (CONDITIONAL_JUMP)  ; LAB_00567ee9
    PUSH EBP                            ; 00567ed5
    INC EDI                             ; 00567ed6
    MOV byte ptr [ESI],BL               ; 00567ed7
    INC ESI                             ; 00567ed9
    CALL crt_unknown.c_FUN_00568528     ; 00567eda
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00567edf
    MOV EBX,EAX                         ; 00567ee2
    CMP EAX,-0x1                        ; 00567ee4
    JNZ 0x00567ec3                      ; 00567ee7
        ;   XREF to: 00567ec3 (CONDITIONAL_JUMP)  ; LAB_00567ec3
    TEST byte ptr [EBP + 0x10],0x10     ; 00567ee9
        ;   Label: LAB_00567ee9
    JZ 0x00567f26                       ; 00567eed
        ;   XREF to: 00567f26 (CONDITIONAL_JUMP)  ; LAB_00567f26
    XOR EDX,EDX                         ; 00567eef
    MOV ECX,ESI                         ; 00567ef1
    MOV dword ptr [ESP + 0x68],EDX      ; 00567ef3
    MOV AL,byte ptr [ECX + -0x1]        ; 00567ef7
        ;   Label: LAB_00567ef7
    DEC ECX                             ; 00567efa
    CMP AL,0x2e                         ; 00567efb
    JZ 0x00567f1d                       ; 00567efd
        ;   XREF to: 00567f1d (CONDITIONAL_JUMP)  ; LAB_00567f1d
    SUB AL,0x30                         ; 00567eff
    MOV dword ptr [ESP + 0x60],0xa      ; 00567f01
    MOV byte ptr [ESP + 0x6a],AL        ; 00567f09
    XOR EDX,EDX                         ; 00567f0d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00567f0f
    DIV dword ptr [ESP + 0x60]          ; 00567f13
    MOV dword ptr [ESP + 0x68],EAX      ; 00567f17
    JMP 0x00567ef7                      ; 00567f1b
        ;   XREF to: 00567ef7 (UNCONDITIONAL_JUMP)  ; LAB_00567ef7
    MOV EAX,dword ptr [ESP + 0x68]      ; 00567f1d
        ;   Label: LAB_00567f1d
    MOV word ptr [ESP + 0x64],AX        ; 00567f21
    CMP EBX,-0x1                        ; 00567f26
        ;   Label: LAB_00567f26
    JZ 0x00567fbd                       ; 00567f29
        ;   XREF to: 00567fbd (CONDITIONAL_JUMP)  ; LAB_00567fbd
    TEST byte ptr [EBP + 0x10],0x10     ; 00567f2f
        ;   Label: LAB_00567f2f
    JNZ 0x00567fb3                      ; 00567f33
        ;   XREF to: 00567fb3 (CONDITIONAL_JUMP)  ; LAB_00567fb3
    CMP EBX,0x65                        ; 00567f39
    JZ 0x00567f47                       ; 00567f3c
        ;   XREF to: 00567f47 (CONDITIONAL_JUMP)  ; LAB_00567f47
    CMP EBX,0x45                        ; 00567f3e
    JNZ 0x00567fb3                      ; 00567f41
        ;   XREF to: 00567fb3 (CONDITIONAL_JUMP)  ; LAB_00567fb3
    PUSH EBP                            ; 00567f47
        ;   Label: LAB_00567f47
    INC EDI                             ; 00567f48
    MOV byte ptr [ESI],BL               ; 00567f49
    INC ESI                             ; 00567f4b
    CALL crt_unknown.c_FUN_00568528     ; 00567f4c
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00567f51
    MOV EBX,EAX                         ; 00567f54
    CMP EAX,-0x1                        ; 00567f56
    JZ 0x00567fbd                       ; 00567f59
        ;   XREF to: 00567fbd (CONDITIONAL_JUMP)  ; LAB_00567fbd
    CMP EAX,0x2b                        ; 00567f5b
    JZ 0x00567f65                       ; 00567f5e
        ;   XREF to: 00567f65 (CONDITIONAL_JUMP)  ; LAB_00567f65
    CMP EAX,0x2d                        ; 00567f60
    JNZ 0x00567f79                      ; 00567f63
        ;   XREF to: 00567f79 (CONDITIONAL_JUMP)  ; LAB_00567f79
    PUSH EBP                            ; 00567f65
        ;   Label: LAB_00567f65
    INC EDI                             ; 00567f66
    MOV byte ptr [ESI],BL               ; 00567f67
    INC ESI                             ; 00567f69
    CALL crt_unknown.c_FUN_00568528     ; 00567f6a
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00567f6f
    MOV EBX,EAX                         ; 00567f72
    CMP EAX,-0x1                        ; 00567f74
    JZ 0x00567fbd                       ; 00567f77
        ;   XREF to: 00567fbd (CONDITIONAL_JUMP)  ; LAB_00567fbd
    MOV AL,BL                           ; 00567f79
        ;   Label: LAB_00567f79
    INC AL                              ; 00567f7b
    AND EAX,0xff                        ; 00567f7d
    TEST byte ptr [EAX + 0x5c168c],0x20 ; 00567f82 | DAT_005c168c
    JNZ 0x00567f8f                      ; 00567f89
        ;   XREF to: 00567f8f (CONDITIONAL_JUMP)  ; LAB_00567f8f
    XOR EDI,EDI                         ; 00567f8b
    JMP 0x00567fb3                      ; 00567f8d
        ;   XREF to: 00567fb3 (UNCONDITIONAL_JUMP)  ; LAB_00567fb3
    PUSH EBP                            ; 00567f8f
        ;   Label: LAB_00567f8f
    INC EDI                             ; 00567f90
    MOV byte ptr [ESI],BL               ; 00567f91
    INC ESI                             ; 00567f93
    CALL crt_unknown.c_FUN_00568528     ; 00567f94
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00567f99
    MOV EBX,EAX                         ; 00567f9c
    CMP EAX,-0x1                        ; 00567f9e
    JZ 0x00567fbd                       ; 00567fa1
        ;   XREF to: 00567fbd (CONDITIONAL_JUMP)  ; LAB_00567fbd
    INC AL                              ; 00567fa3
    AND EAX,0xff                        ; 00567fa5
    TEST byte ptr [EAX + 0x5c168c],0x20 ; 00567faa | DAT_005c168c
    JNZ 0x00567f8f                      ; 00567fb1
        ;   XREF to: 00567f8f (CONDITIONAL_JUMP)  ; LAB_00567f8f
    PUSH EBP                            ; 00567fb3
        ;   Label: LAB_00567fb3
    PUSH EBX                            ; 00567fb4
    CALL crt_unknown.c_FUN_0056754c     ; 00567fb5
        ;   XREF to: 0056754c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056754c()
    ADD ESP,0x8                         ; 00567fba
    TEST EDI,EDI                        ; 00567fbd
        ;   Label: LAB_00567fbd
    JLE 0x00568080                      ; 00567fbf
        ;   XREF to: 00568080 (CONDITIONAL_JUMP)  ; LAB_00568080
    ADD EDI,dword ptr [ESP + 0x5c]      ; 00567fc5
    TEST byte ptr [EBP + 0x10],0x1      ; 00567fc9
    JZ 0x00568080                       ; 00567fcd
        ;   XREF to: 00568080 (CONDITIONAL_JUMP)  ; LAB_00568080
    MOV byte ptr [ESI],0x0              ; 00567fd3
    TEST byte ptr [EBP + 0x10],0x10     ; 00567fd6
    JZ 0x00567fe8                       ; 00567fda
        ;   XREF to: 00567fe8 (CONDITIONAL_JUMP)  ; LAB_00567fe8
    CMP byte ptr [ESP],0x2d             ; 00567fdc
    JNZ 0x00567ffb                      ; 00567fe0
        ;   XREF to: 00567ffb (CONDITIONAL_JUMP)  ; LAB_00567ffb
    NEG dword ptr [ESP + 0x64]          ; 00567fe2
    JMP 0x00567ffb                      ; 00567fe6
        ;   XREF to: 00567ffb (UNCONDITIONAL_JUMP)  ; LAB_00567ffb
    LEA EAX,[ESP + 0x50]                ; 00567fe8
        ;   Label: LAB_00567fe8
    PUSH EAX                            ; 00567fec
    LEA EAX,[ESP + 0x4]                 ; 00567fed
    PUSH EAX                            ; 00567ff1
    CALL dword ptr [0x005c1f8c]         ; 00567ff2 | PTR_crt_unknown.c_FUN_0056f0f0_005c1f8c
    ADD ESP,0x8                         ; 00567ff8
    MOV CH,byte ptr [EBP + 0x10]        ; 00567ffb
        ;   Label: LAB_00567ffb
    TEST CH,0x4                         ; 00567ffe
    JZ 0x00568016                       ; 00568001
        ;   XREF to: 00568016 (CONDITIONAL_JUMP)  ; LAB_00568016
    MOV EAX,dword ptr [ESP + 0x88]      ; 00568003
    MOV EBX,dword ptr [EAX]             ; 0056800a
    ADD EBX,0x8                         ; 0056800c
    MOV dword ptr [EAX],EBX             ; 0056800f
    LES EBX,[EBX + -0x8]                ; 00568011
    JMP 0x00568047                      ; 00568014
        ;   XREF to: 00568047 (UNCONDITIONAL_JUMP)  ; LAB_00568047
    TEST CH,0x8                         ; 00568016
        ;   Label: LAB_00568016
    JZ 0x00568032                       ; 00568019
        ;   XREF to: 00568032 (CONDITIONAL_JUMP)  ; LAB_00568032
    MOV EAX,dword ptr [ESP + 0x88]      ; 0056801b
    MOV EDX,dword ptr [EAX]             ; 00568022
    ADD EDX,0x4                         ; 00568024
    MOV dword ptr [EAX],EDX             ; 00568027
    MOV AX,DS                           ; 00568029
    MOV ES,AX                           ; 0056802b
    MOV EBX,dword ptr [EDX + -0x4]      ; 0056802d
    JMP 0x00568047                      ; 00568030
        ;   XREF to: 00568047 (UNCONDITIONAL_JUMP)  ; LAB_00568047
    MOV EAX,dword ptr [ESP + 0x88]      ; 00568032
        ;   Label: LAB_00568032
    MOV ESI,dword ptr [EAX]             ; 00568039
    ADD ESI,0x4                         ; 0056803b
    MOV dword ptr [EAX],ESI             ; 0056803e
    MOV AX,DS                           ; 00568040
    MOV ES,AX                           ; 00568042
    MOV EBX,dword ptr [ESI + -0x4]      ; 00568044
    MOV AH,byte ptr [EBP + 0x10]        ; 00568047
        ;   Label: LAB_00568047
    TEST AH,0x10                        ; 0056804a
    JZ 0x00568055                       ; 0056804d
        ;   XREF to: 00568055 (CONDITIONAL_JUMP)  ; LAB_00568055
    MOV EAX,dword ptr [ESP + 0x64]      ; 0056804f
    JMP 0x0056807d                      ; 00568053
        ;   XREF to: 0056807d (UNCONDITIONAL_JUMP)  ; LAB_0056807d
    TEST AH,0x20                        ; 00568055
        ;   Label: LAB_00568055
    JNZ 0x0056805f                      ; 00568058
        ;   XREF to: 0056805f (CONDITIONAL_JUMP)  ; LAB_0056805f
    TEST AH,0x40                        ; 0056805a
    JZ 0x00568070                       ; 0056805d
        ;   XREF to: 00568070 (CONDITIONAL_JUMP)  ; LAB_00568070
    MOV EAX,dword ptr [ESP + 0x50]      ; 0056805f
        ;   Label: LAB_0056805f
    MOV dword ptr ES:[EBX],EAX          ; 00568063
    MOV EAX,dword ptr [ESP + 0x54]      ; 00568066
    MOV dword ptr ES:[EBX + 0x4],EAX    ; 0056806a
    JMP 0x00568080                      ; 0056806e
        ;   XREF to: 00568080 (UNCONDITIONAL_JUMP)  ; LAB_00568080
    MOV EAX,dword ptr [ESP + 0x50]      ; 00568070
        ;   Label: LAB_00568070
    MOV EDX,dword ptr [ESP + 0x54]      ; 00568074
    CALL crt_math.c_doubleToFloat_FUN_0056f100 ; 00568078
        ;   XREF to: 0056f100 (UNCONDITIONAL_CALL)  ; float crt_math.c_doubleToFloat_FUN_0056f100(double val)
    MOV dword ptr ES:[EBX],EAX          ; 0056807d
        ;   Label: LAB_0056807d
    MOV EAX,EDI                         ; 00568080
        ;   Label: LAB_00568080
    ADD ESP,0x6c                        ; 00568082
    POP EBP                             ; 00568085
    POP ES                              ; 00568086
    POP EDI                             ; 00568087
    POP ESI                             ; 00568088
    POP EBX                             ; 00568089
    RET                                 ; 0056808a

