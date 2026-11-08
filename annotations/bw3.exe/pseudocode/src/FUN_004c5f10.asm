; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5f10(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004c61b0 at 004c622b
;
; Referenced Globals:
;   undefined1* switchdataD_004c5ef8 = 004c5f4d
;   undefined4 DAT_005c3fe8
;   undefined4 DAT_005c3ff0
;   undefined4 DAT_005c3ff8
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21510
;
; Called Functions:
;   FUN_0040cf40
;   FUN_00414550
;   FUN_004157c0
;   FUN_00430520
;   FUN_00430590
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5f10
        ;   Label: FUN_004c5f10
    PUSH ESI                            ; 004c5f11
    PUSH EDI                            ; 004c5f12
    PUSH EBP                            ; 004c5f13
    SUB ESP,0xc                         ; 004c5f14
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c5f17
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c5f1b
    FLD float ptr [ESI + 0x2c]          ; 004c5f1f
    FLDZ                                ; 004c5f22
    FCOMPP                              ; 004c5f24
    FNSTSW AX                           ; 004c5f26
    SAHF                                ; 004c5f28
    JNC 0x004c5f55                      ; 004c5f29
        ;   XREF to: 004c5f55 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004c5f2b
    JNZ 0x004c5f55                      ; 004c5f2e
        ;   XREF to: 004c5f55 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005a35cc                   ; 004c5f30
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV EDX,EAX                         ; 004c5f35
    MOV EDI,0x6                         ; 004c5f37
    SAR EDX,0x1f                        ; 004c5f3c
    IDIV EDI                            ; 004c5f3f
    CMP EDX,0x5                         ; 004c5f41
    JA 0x004c5f55                       ; 004c5f44
        ;   XREF to: 004c5f55 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4c5ef8]  ; 004c5f46 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd054]    ; 004c5f4d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004c5f53
        ;   Label: LAB_004c5f53
    MOV ECX,dword ptr [EBX + 0xd054]    ; 004c5f55
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004c5f5b
    CMP EAX,ECX                         ; 004c5f5d
    JNZ 0x004c612c                      ; 004c5f5f
        ;   XREF to: 004c612c (CONDITIONAL_JUMP)  ; LAB_004c612c
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004c5f65
        ;   Label: LAB_004c5f65
    MOV EBP,dword ptr [EBX + 0xd07c]    ; 004c5f68
    MOV dword ptr [ESP + 0x8],EAX       ; 004c5f6e
    CMP EBP,dword ptr [ESI]             ; 004c5f72
    JNZ 0x004c5f7e                      ; 004c5f74
        ;   XREF to: 004c5f7e (CONDITIONAL_JUMP)  ; LAB_004c5f7e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004c5f76
    MOV EDX,dword ptr [EBX + 0xd078]    ; 004c5f7e
        ;   Label: LAB_004c5f7e
    CMP EDX,dword ptr [ESI]             ; 004c5f84
    JNZ 0x004c5f90                      ; 004c5f86
        ;   XREF to: 004c5f90 (CONDITIONAL_JUMP)  ; LAB_004c5f90
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004c5f88
    MOV EAX,[0x005fe9dc]                ; 004c5f90 | DAT_005fe9dc
        ;   Label: LAB_004c5f90
    CMP dword ptr [EAX + 0x204],0x0     ; 004c5f95 | DAT_01d21510
    JZ 0x004c5fa6                       ; 004c5f9c
        ;   XREF to: 004c5fa6 (CONDITIONAL_JUMP)  ; LAB_004c5fa6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004c5f9e
    PUSH dword ptr [ESP + 0x8]          ; 004c5fa6
        ;   Label: LAB_004c5fa6
    CALL FUN_0040cf40                   ; 004c5faa
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x4                         ; 004c5faf
    TEST EAX,EAX                        ; 004c5fb2
    JZ 0x004c60c3                       ; 004c5fb4
        ;   XREF to: 004c60c3 (CONDITIONAL_JUMP)  ; LAB_004c60c3
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 004c5fba
    PUSH EAX                            ; 004c5fc0
    PUSH 0x0                            ; 004c5fc1
    PUSH 0x0                            ; 004c5fc3
    PUSH EBX                            ; 004c5fc5
    LEA EAX,[ESI + 0xc]                 ; 004c5fc6
    PUSH EAX                            ; 004c5fc9
    LEA EAX,[EBX + 0x30]                ; 004c5fca
    PUSH EAX                            ; 004c5fcd
    LEA EAX,[EBX + 0x20]                ; 004c5fce
    PUSH EAX                            ; 004c5fd1
    CALL FUN_00414550                   ; 004c5fd2
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; undefined FUN_00414550()
    ADD ESP,0x1c                        ; 004c5fd7
    PUSH 0x1                            ; 004c5fda
    MOV EDX,dword ptr [ESI]             ; 004c5fdc
    PUSH EDX                            ; 004c5fde
    PUSH EAX                            ; 004c5fdf
    PUSH EBX                            ; 004c5fe0
    MOV EDI,EAX                         ; 004c5fe1
    MOV EBP,EAX                         ; 004c5fe3
    CALL FUN_00430590                   ; 004c5fe5
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    MOV EAX,dword ptr [ESI]             ; 004c5fea
    MOV ECX,dword ptr [EBX + 0xd054]    ; 004c5fec
    ADD ESP,0x10                        ; 004c5ff2
    CMP EAX,ECX                         ; 004c5ff5
    JNZ 0x004c600c                      ; 004c5ff7
        ;   XREF to: 004c600c (CONDITIONAL_JUMP)  ; LAB_004c600c
    PUSH 0x1                            ; 004c5ff9
    MOV EAX,dword ptr [EBX + 0xd058]    ; 004c5ffb
    PUSH EAX                            ; 004c6001
    PUSH EDI                            ; 004c6002
    PUSH EBX                            ; 004c6003
    CALL FUN_00430590                   ; 004c6004
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 004c6009
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 004c600c
        ;   Label: LAB_004c600c
    CMP EDX,dword ptr [ESI]             ; 004c6012
    JNZ 0x004c6029                      ; 004c6014
        ;   XREF to: 004c6029 (CONDITIONAL_JUMP)  ; LAB_004c6029
    PUSH 0x1                            ; 004c6016
    MOV ECX,dword ptr [EBX + 0xd060]    ; 004c6018
    PUSH ECX                            ; 004c601e
    PUSH EBP                            ; 004c601f
    PUSH EBX                            ; 004c6020
    CALL FUN_00430590                   ; 004c6021
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 004c6026
    MOV EDI,dword ptr [EBX + 0xd078]    ; 004c6029
        ;   Label: LAB_004c6029
    CMP EDI,dword ptr [ESI]             ; 004c602f
    JNZ 0x004c6095                      ; 004c6031
        ;   XREF to: 004c6095 (CONDITIONAL_JUMP)  ; LAB_004c6095
    PUSH 0x1                            ; 004c6033
    LEA EDI,[ESI + 0xc]                 ; 004c6035
    PUSH EDI                            ; 004c6038
    MOV EAX,dword ptr [EBX + 0xd05c]    ; 004c6039
    PUSH EAX                            ; 004c603f
    PUSH EBX                            ; 004c6040
    CALL FUN_00430520                   ; 004c6041
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c6046
    PUSH 0x1                            ; 004c6049
    PUSH EDI                            ; 004c604b
    MOV EDX,dword ptr [EBX + 0xd060]    ; 004c604c
    PUSH EDX                            ; 004c6052
    PUSH EBX                            ; 004c6053
    CALL FUN_00430520                   ; 004c6054
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c6059
    PUSH 0x1                            ; 004c605c
    PUSH EDI                            ; 004c605e
    MOV ECX,dword ptr [EBX + 0xd054]    ; 004c605f
    PUSH ECX                            ; 004c6065
    PUSH EBX                            ; 004c6066
    CALL FUN_00430520                   ; 004c6067
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c606c
    PUSH 0x1                            ; 004c606f
    PUSH EDI                            ; 004c6071
    MOV EAX,dword ptr [EBX + 0xd058]    ; 004c6072
    PUSH EAX                            ; 004c6078
    PUSH EBX                            ; 004c6079
    CALL FUN_00430520                   ; 004c607a
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c607f
    PUSH 0x1                            ; 004c6082
    PUSH EDI                            ; 004c6084
    MOV EDX,dword ptr [EBX + 0xd07c]    ; 004c6085
    PUSH EDX                            ; 004c608b
    PUSH EBX                            ; 004c608c
    CALL FUN_00430520                   ; 004c608d
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c6092
    PUSH EBP                            ; 004c6095
        ;   Label: LAB_004c6095
    CALL FUN_004157c0                   ; 004c6096
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004157c0()
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 004c609b
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c60a1
    ADD ESP,0x4                         ; 004c60a8
    TEST ECX,ECX                        ; 004c60ab
    JZ 0x004c616d                       ; 004c60ad
        ;   XREF to: 004c616d (CONDITIONAL_JUMP)  ; LAB_004c616d
    FLD float ptr [ESI + 0x8]           ; 004c60b3
        ;   Label: LAB_004c60b3
    FLD ST0                             ; 004c60b6
    FMUL double ptr [0x005c3fe8]        ; 004c60b8 | DAT_005c3fe8
    FSTP ST1                            ; 004c60be
    FSTP float ptr [ESI + 0x8]          ; 004c60c0
    MOV EDI,dword ptr [EBX + 0xd07c]    ; 004c60c3
        ;   Label: LAB_004c60c3
    MOV EAX,dword ptr [ESI]             ; 004c60c9
    CMP EAX,EDI                         ; 004c60cb
    JZ 0x004c6179                       ; 004c60cd
        ;   XREF to: 004c6179 (CONDITIONAL_JUMP)  ; LAB_004c6179
    CMP EAX,dword ptr [EBX + 0xd074]    ; 004c60d3
    JZ 0x004c60e7                       ; 004c60d9
        ;   XREF to: 004c60e7 (CONDITIONAL_JUMP)  ; LAB_004c60e7
    CMP EAX,dword ptr [EBX + 0xd078]    ; 004c60db
    JNZ 0x004c6191                      ; 004c60e1
        ;   XREF to: 004c6191 (CONDITIONAL_JUMP)  ; LAB_004c6191
    MOV EAX,dword ptr [ESI + 0x4]       ; 004c60e7
        ;   Label: LAB_004c60e7
    MOV dword ptr [ESI + 0x4],EAX       ; 004c60ea
    ADD ESP,0xc                         ; 004c60ed
    POP EBP                             ; 004c60f0
    POP EDI                             ; 004c60f1
    POP ESI                             ; 004c60f2
    POP EBX                             ; 004c60f3
    RET                                 ; 004c60f4
    MOV EAX,dword ptr [EBX + 0xd058]    ; 004c60f5
        ;   Label: caseD_1
    JMP 0x004c5f53                      ; 004c60fb
        ;   XREF to: 004c5f53 (UNCONDITIONAL_JUMP)  ; LAB_004c5f53
    MOV EAX,dword ptr [EBX + 0xd05c]    ; 004c6100
        ;   Label: caseD_2
    JMP 0x004c5f53                      ; 004c6106
        ;   XREF to: 004c5f53 (UNCONDITIONAL_JUMP)  ; LAB_004c5f53
    MOV EAX,dword ptr [EBX + 0xd060]    ; 004c610b
        ;   Label: caseD_3
    JMP 0x004c5f53                      ; 004c6111
        ;   XREF to: 004c5f53 (UNCONDITIONAL_JUMP)  ; LAB_004c5f53
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 004c6116
        ;   Label: caseD_4
    JMP 0x004c5f53                      ; 004c611c
        ;   XREF to: 004c5f53 (UNCONDITIONAL_JUMP)  ; LAB_004c5f53
    MOV EAX,dword ptr [EBX + 0xd078]    ; 004c6121
        ;   Label: caseD_5
    JMP 0x004c5f53                      ; 004c6127
        ;   XREF to: 004c5f53 (UNCONDITIONAL_JUMP)  ; LAB_004c5f53
    CMP EAX,dword ptr [EBX + 0xd058]    ; 004c612c
        ;   Label: LAB_004c612c
    JZ 0x004c5f65                       ; 004c6132
        ;   XREF to: 004c5f65 (CONDITIONAL_JUMP)  ; LAB_004c5f65
    CMP EAX,dword ptr [EBX + 0xd05c]    ; 004c6138
    JZ 0x004c5f65                       ; 004c613e
        ;   XREF to: 004c5f65 (CONDITIONAL_JUMP)  ; LAB_004c5f65
    CMP EAX,dword ptr [EBX + 0xd060]    ; 004c6144
    JZ 0x004c5f65                       ; 004c614a
        ;   XREF to: 004c5f65 (CONDITIONAL_JUMP)  ; LAB_004c5f65
    CMP EAX,dword ptr [EBX + 0xd078]    ; 004c6150
    JZ 0x004c5f65                       ; 004c6156
        ;   XREF to: 004c5f65 (CONDITIONAL_JUMP)  ; LAB_004c5f65
    CMP EAX,dword ptr [EBX + 0xd07c]    ; 004c615c
    JZ 0x004c5f65                       ; 004c6162
        ;   XREF to: 004c5f65 (CONDITIONAL_JUMP)  ; LAB_004c5f65
    JMP 0x004c60c3                      ; 004c6168
        ;   XREF to: 004c60c3 (UNCONDITIONAL_JUMP)  ; LAB_004c60c3
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004c616d
        ;   Label: LAB_004c616d
    JMP 0x004c60b3                      ; 004c6174
        ;   XREF to: 004c60b3 (UNCONDITIONAL_JUMP)  ; LAB_004c60b3
    FLD float ptr [ESI + 0x4]           ; 004c6179
        ;   Label: LAB_004c6179
    FLD ST0                             ; 004c617c
    FMUL double ptr [0x005c3ff8]        ; 004c617e | DAT_005c3ff8
    FSTP ST1                            ; 004c6184
    FSTP float ptr [ESI + 0x4]          ; 004c6186
    ADD ESP,0xc                         ; 004c6189
    POP EBP                             ; 004c618c
    POP EDI                             ; 004c618d
    POP ESI                             ; 004c618e
    POP EBX                             ; 004c618f
    RET                                 ; 004c6190
    FLD float ptr [ESI + 0x4]           ; 004c6191
        ;   Label: LAB_004c6191
    FLD ST0                             ; 004c6194
    FMUL double ptr [0x005c3ff0]        ; 004c6196 | DAT_005c3ff0
    FSTP ST1                            ; 004c619c
    FSTP float ptr [ESI + 0x4]          ; 004c619e
    ADD ESP,0xc                         ; 004c61a1
    POP EBP                             ; 004c61a4
    POP EDI                             ; 004c61a5
    POP ESI                             ; 004c61a6
    POP EBX                             ; 004c61a7
    RET                                 ; 004c61a8

