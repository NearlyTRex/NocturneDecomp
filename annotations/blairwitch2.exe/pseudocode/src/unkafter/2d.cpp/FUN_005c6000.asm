; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * unkafter_2d_cpp_FUN_005c6000(char *param_1,undefined4 *param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c618c at 005c619e
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   unkafter_2d.cpp_FUN_005c61a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6000
        ;   Label: unkafter_2d.cpp_FUN_005c6000
    PUSH ESI                            ; 005c6001
    PUSH EDI                            ; 005c6002
    PUSH EBP                            ; 005c6003
    SUB ESP,0xc                         ; 005c6004
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c6007
    MOV EDX,dword ptr [ESP + 0x24]      ; 005c600b
    TEST EDX,EDX                        ; 005c600f
    JZ 0x005c6019                       ; 005c6011
        ;   XREF to: 005c6019 (CONDITIONAL_JUMP)  ; LAB_005c6019
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c6013
    MOV dword ptr [EDX],EAX             ; 005c6017
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c6019
        ;   Label: LAB_005c6019
    MOV AL,byte ptr [EBX]               ; 005c601d
        ;   Label: LAB_005c601d
    INC AL                              ; 005c601f
    AND EAX,0xff                        ; 005c6021
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 005c6026
    JZ 0x005c6032                       ; 005c602d
        ;   XREF to: 005c6032 (CONDITIONAL_JUMP)  ; LAB_005c6032
    INC EBX                             ; 005c602f
    JMP 0x005c601d                      ; 005c6030
        ;   XREF to: 005c601d (UNCONDITIONAL_JUMP)  ; LAB_005c601d
    MOV AL,byte ptr [EBX]               ; 005c6032
        ;   Label: LAB_005c6032
    MOV byte ptr [ESP + 0x8],AL         ; 005c6034
    CMP AL,0x2b                         ; 005c6038
    JZ 0x005c6040                       ; 005c603a
        ;   XREF to: 005c6040 (CONDITIONAL_JUMP)  ; LAB_005c6040
    CMP AL,0x2d                         ; 005c603c
    JNZ 0x005c6041                      ; 005c603e
        ;   XREF to: 005c6041 (CONDITIONAL_JUMP)  ; LAB_005c6041
    INC EBX                             ; 005c6040
        ;   Label: LAB_005c6040
    TEST EDI,EDI                        ; 005c6041
        ;   Label: LAB_005c6041
    JNZ 0x005c606f                      ; 005c6043
        ;   XREF to: 005c606f (CONDITIONAL_JUMP)  ; LAB_005c606f
    CMP byte ptr [EBX],0x30             ; 005c6045
    JNZ 0x005c605c                      ; 005c6048
        ;   XREF to: 005c605c (CONDITIONAL_JUMP)  ; LAB_005c605c
    MOV AL,byte ptr [EBX + 0x1]         ; 005c604a
    CMP AL,0x78                         ; 005c604d
    JZ 0x005c6055                       ; 005c604f
        ;   XREF to: 005c6055 (CONDITIONAL_JUMP)  ; LAB_005c6055
    CMP AL,0x58                         ; 005c6051
    JNZ 0x005c605c                      ; 005c6053
        ;   XREF to: 005c605c (CONDITIONAL_JUMP)  ; LAB_005c605c
    MOV EDI,0x10                        ; 005c6055
        ;   Label: LAB_005c6055
    JMP 0x005c608f                      ; 005c605a
        ;   XREF to: 005c608f (UNCONDITIONAL_JUMP)  ; LAB_005c608f
    CMP byte ptr [EBX],0x30             ; 005c605c
        ;   Label: LAB_005c605c
    JNZ 0x005c6068                      ; 005c605f
        ;   XREF to: 005c6068 (CONDITIONAL_JUMP)  ; LAB_005c6068
    MOV EDI,0x8                         ; 005c6061
    JMP 0x005c60a4                      ; 005c6066
        ;   XREF to: 005c60a4 (UNCONDITIONAL_JUMP)  ; LAB_005c60a4
    MOV EDI,0xa                         ; 005c6068
        ;   Label: LAB_005c6068
    JMP 0x005c60a4                      ; 005c606d
        ;   XREF to: 005c60a4 (UNCONDITIONAL_JUMP)  ; LAB_005c60a4
    CMP EDI,0x2                         ; 005c606f
        ;   Label: LAB_005c606f
    JL 0x005c6079                       ; 005c6072
        ;   XREF to: 005c6079 (CONDITIONAL_JUMP)  ; LAB_005c6079
    CMP EDI,0x24                        ; 005c6074
    JLE 0x005c608a                      ; 005c6077
        ;   XREF to: 005c608a (CONDITIONAL_JUMP)  ; LAB_005c608a
    PUSH 0xd                            ; 005c6079
        ;   Label: LAB_005c6079
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c607b
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005c6080
    XOR EAX,EAX                         ; 005c6083
    JMP 0x005c6166                      ; 005c6085
        ;   XREF to: 005c6166 (UNCONDITIONAL_JUMP)  ; LAB_005c6166
    CMP EDI,0x10                        ; 005c608a
        ;   Label: LAB_005c608a
    JNZ 0x005c60a4                      ; 005c608d
        ;   XREF to: 005c60a4 (CONDITIONAL_JUMP)  ; LAB_005c60a4
    CMP byte ptr [EBX],0x30             ; 005c608f
        ;   Label: LAB_005c608f
    JNZ 0x005c60a4                      ; 005c6092
        ;   XREF to: 005c60a4 (CONDITIONAL_JUMP)  ; LAB_005c60a4
    MOV CL,byte ptr [EBX + 0x1]         ; 005c6094
    CMP CL,0x78                         ; 005c6097
    JZ 0x005c60a1                       ; 005c609a
        ;   XREF to: 005c60a1 (CONDITIONAL_JUMP)  ; LAB_005c60a1
    CMP CL,0x58                         ; 005c609c
    JNZ 0x005c60a4                      ; 005c609f
        ;   XREF to: 005c60a4 (CONDITIONAL_JUMP)  ; LAB_005c60a4
    ADD EBX,0x2                         ; 005c60a1
        ;   Label: LAB_005c60a1
    MOV dword ptr [ESP],EBX             ; 005c60a4
        ;   Label: LAB_005c60a4
    LEA EBP,[EDI*0x4 + 0x0]             ; 005c60a7
    XOR AL,AL                           ; 005c60ae
    XOR ESI,ESI                         ; 005c60b0
    MOV byte ptr [ESP + 0x4],AL         ; 005c60b2
    XOR EAX,EAX                         ; 005c60b6
        ;   Label: LAB_005c60b6
    MOV AL,byte ptr [EBX]               ; 005c60b8
    PUSH EAX                            ; 005c60ba
    CALL unkafter_2d.cpp_FUN_005c61a8   ; 005c60bb
        ;   XREF to: 005c61a8 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c61a8()
    ADD ESP,0x4                         ; 005c60c0
    MOV EDX,EAX                         ; 005c60c3
    CMP EAX,EDI                         ; 005c60c5
    JGE 0x005c60e9                      ; 005c60c7
        ;   XREF to: 005c60e9 (CONDITIONAL_JUMP)  ; LAB_005c60e9
    CMP ESI,dword ptr [EBP + 0x61f7f4]  ; 005c60c9
    JBE 0x005c60d6                      ; 005c60cf
        ;   XREF to: 005c60d6 (CONDITIONAL_JUMP)  ; LAB_005c60d6
    MOV byte ptr [ESP + 0x4],0x1        ; 005c60d1
    MOV EAX,ESI                         ; 005c60d6
        ;   Label: LAB_005c60d6
    IMUL ESI,EDI                        ; 005c60d8
    ADD ESI,EDX                         ; 005c60db
    CMP ESI,EAX                         ; 005c60dd
    JNC 0x005c60e6                      ; 005c60df
        ;   XREF to: 005c60e6 (CONDITIONAL_JUMP)  ; LAB_005c60e6
    MOV byte ptr [ESP + 0x4],0x1        ; 005c60e1
    INC EBX                             ; 005c60e6
        ;   Label: LAB_005c60e6
    JMP 0x005c60b6                      ; 005c60e7
        ;   XREF to: 005c60b6 (UNCONDITIONAL_JUMP)  ; LAB_005c60b6
    CMP EBX,dword ptr [ESP]             ; 005c60e9
        ;   Label: LAB_005c60e9
    JNZ 0x005c60f2                      ; 005c60ec
        ;   XREF to: 005c60f2 (CONDITIONAL_JUMP)  ; LAB_005c60f2
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c60ee
    MOV EBP,dword ptr [ESP + 0x24]      ; 005c60f2
        ;   Label: LAB_005c60f2
    TEST EBP,EBP                        ; 005c60f6
    JZ 0x005c60fd                       ; 005c60f8
        ;   XREF to: 005c60fd (CONDITIONAL_JUMP)  ; LAB_005c60fd
    MOV dword ptr [EBP],EBX             ; 005c60fa
    CMP dword ptr [ESP + 0x2c],0x1      ; 005c60fd
        ;   Label: LAB_005c60fd
    JNZ 0x005c6115                      ; 005c6102
        ;   XREF to: 005c6115 (CONDITIONAL_JUMP)  ; LAB_005c6115
    CMP ESI,0x80000000                  ; 005c6104
    JC 0x005c6115                       ; 005c610a
        ;   XREF to: 005c6115 (CONDITIONAL_JUMP)  ; LAB_005c6115
    JNZ 0x005c611c                      ; 005c610c
        ;   XREF to: 005c611c (CONDITIONAL_JUMP)  ; LAB_005c611c
    CMP byte ptr [ESP + 0x8],0x2d       ; 005c610e
    JNZ 0x005c611c                      ; 005c6113
        ;   XREF to: 005c611c (CONDITIONAL_JUMP)  ; LAB_005c611c
    CMP byte ptr [ESP + 0x4],0x0        ; 005c6115
        ;   Label: LAB_005c6115
    JZ 0x005c615b                       ; 005c611a
        ;   XREF to: 005c615b (CONDITIONAL_JUMP)  ; LAB_005c615b
    PUSH 0xe                            ; 005c611c
        ;   Label: LAB_005c611c
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c611e
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005c6123
    CMP dword ptr [ESP + 0x2c],0x0      ; 005c6126
    JNZ 0x005c613a                      ; 005c612b
        ;   XREF to: 005c613a (CONDITIONAL_JUMP)  ; LAB_005c613a
    MOV EAX,0xffffffff                  ; 005c612d
    ADD ESP,0xc                         ; 005c6132
    POP EBP                             ; 005c6135
    POP EDI                             ; 005c6136
    POP ESI                             ; 005c6137
    POP EBX                             ; 005c6138
    RET                                 ; 005c6139
    CMP byte ptr [ESP + 0x8],0x2d       ; 005c613a
        ;   Label: LAB_005c613a
    JNZ 0x005c614e                      ; 005c613f
        ;   XREF to: 005c614e (CONDITIONAL_JUMP)  ; LAB_005c614e
    MOV EAX,0x80000000                  ; 005c6141
    ADD ESP,0xc                         ; 005c6146
    POP EBP                             ; 005c6149
    POP EDI                             ; 005c614a
    POP ESI                             ; 005c614b
    POP EBX                             ; 005c614c
    RET                                 ; 005c614d
    MOV EAX,0x7fffffff                  ; 005c614e
        ;   Label: LAB_005c614e
    ADD ESP,0xc                         ; 005c6153
    POP EBP                             ; 005c6156
    POP EDI                             ; 005c6157
    POP ESI                             ; 005c6158
    POP EBX                             ; 005c6159
    RET                                 ; 005c615a
    CMP byte ptr [ESP + 0x8],0x2d       ; 005c615b
        ;   Label: LAB_005c615b
    JNZ 0x005c6164                      ; 005c6160
        ;   XREF to: 005c6164 (CONDITIONAL_JUMP)  ; LAB_005c6164
    NEG ESI                             ; 005c6162
    MOV EAX,ESI                         ; 005c6164
        ;   Label: LAB_005c6164
    ADD ESP,0xc                         ; 005c6166
        ;   Label: LAB_005c6166
    POP EBP                             ; 005c6169
    POP EDI                             ; 005c616a
    POP ESI                             ; 005c616b
    POP EBX                             ; 005c616c
    RET                                 ; 005c616d

