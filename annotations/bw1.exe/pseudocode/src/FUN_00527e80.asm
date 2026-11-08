; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527e80(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1e]:4  local_1e
; undefined4       Stack[-0x1a]:4  local_1a
; undefined4       Stack[-0x16]:4  local_16
;
; XREF[1]:
;   FUN_00528210 at 0052825e
;
; Referenced Globals:
;   undefined4 DAT_00620b10
;
; Called Functions:
;   FUN_00525f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527e80
        ;   Label: FUN_00527e80
    PUSH ESI                            ; 00527e81
    PUSH EDI                            ; 00527e82
    PUSH EBP                            ; 00527e83
    SUB ESP,0x24                        ; 00527e84
    MOV EDI,dword ptr [ESP + 0x38]      ; 00527e87
    MOV EDX,dword ptr [ESP + 0x48]      ; 00527e8b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00527e8f
    ADD EAX,EDX                         ; 00527e96
    MOV EDX,dword ptr [ESP + 0x40]      ; 00527e98
    SHL EAX,0x5                         ; 00527e9c
    ADD EDX,0x8                         ; 00527e9f
    LEA ECX,[EDX + EAX*0x1]             ; 00527ea2
    MOV EDX,dword ptr [ESP + 0x44]      ; 00527ea5
    LEA EAX,[EDX*0x8 + 0x0]             ; 00527ea9
    ADD EDX,EAX                         ; 00527eb0
    SHL EDX,0x3                         ; 00527eb2
    LEA EAX,[ECX + 0x10]                ; 00527eb5
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00527eb8
    ADD EAX,EDX                         ; 00527ebc
    XOR EDX,EDX                         ; 00527ebe
    MOV ESI,dword ptr [ESI]             ; 00527ec0
    MOV word ptr [ESP + 0x18],DX        ; 00527ec2
    MOV EDX,dword ptr [EAX + 0x14]      ; 00527ec7
    MOV ECX,dword ptr [EAX + 0xc]       ; 00527eca
    CMP EDX,0x2                         ; 00527ecd
    JNZ 0x00527edf                      ; 00527ed0
        ;   XREF to: 00527edf (CONDITIONAL_JUMP)  ; LAB_00527edf
    CMP dword ptr [EAX + 0x18],0x0      ; 00527ed2
    JNZ 0x00527edf                      ; 00527ed6
        ;   XREF to: 00527edf (CONDITIONAL_JUMP)  ; LAB_00527edf
    MOV word ptr [ESP + 0x18],0x1       ; 00527ed8
    CMP dword ptr [EAX + 0x14],0x2      ; 00527edf
        ;   Label: LAB_00527edf
    JNZ 0x00527ef2                      ; 00527ee3
        ;   XREF to: 00527ef2 (CONDITIONAL_JUMP)  ; LAB_00527ef2
    CMP dword ptr [EAX + 0x18],0x1      ; 00527ee5
    JNZ 0x00527ef2                      ; 00527ee9
        ;   XREF to: 00527ef2 (CONDITIONAL_JUMP)  ; LAB_00527ef2
    MOV word ptr [ESP + 0x18],0x2       ; 00527eeb
    MOV EBX,dword ptr [ESI + 0x20]      ; 00527ef2
        ;   Label: LAB_00527ef2
    CMP EBX,0x1                         ; 00527ef5
    JNZ 0x00527f34                      ; 00527ef8
        ;   XREF to: 00527f34 (CONDITIONAL_JUMP)  ; LAB_00527f34
    CMP dword ptr [ESP + 0x48],0x1      ; 00527efa
        ;   Label: LAB_00527efa
    JNZ 0x00527f39                      ; 00527eff
        ;   XREF to: 00527f39 (CONDITIONAL_JUMP)  ; LAB_00527f39
    MOV EBP,dword ptr [ESI + 0x20]      ; 00527f01
        ;   Label: LAB_00527f01
    CMP EBP,0x1                         ; 00527f04
    JNZ 0x00528081                      ; 00527f07
        ;   XREF to: 00528081 (CONDITIONAL_JUMP)  ; LAB_00528081
    CMP dword ptr [ESP + 0x48],0x1      ; 00527f0d
        ;   Label: LAB_00527f0d
    JZ 0x0052808f                       ; 00527f12
        ;   XREF to: 0052808f (CONDITIONAL_JUMP)  ; LAB_0052808f
    XOR EBX,EBX                         ; 00527f18
        ;   Label: LAB_00527f18
    MOVSX EAX,BX                        ; 00527f1a
        ;   Label: LAB_00527f1a
    CMP EAX,0x2d                        ; 00527f1d
    JGE 0x0052818c                      ; 00527f20
        ;   XREF to: 0052818c (CONDITIONAL_JUMP)  ; LAB_0052818c
    INC EBX                             ; 00527f26
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],0x0 ; 00527f27
    JMP 0x00527f1a                      ; 00527f32
        ;   XREF to: 00527f1a (UNCONDITIONAL_JUMP)  ; LAB_00527f1a
    CMP EBX,0x3                         ; 00527f34
        ;   Label: LAB_00527f34
    JZ 0x00527efa                       ; 00527f37
        ;   XREF to: 00527efa (CONDITIONAL_JUMP)  ; LAB_00527efa
    MOV EDX,dword ptr [ESP + 0x44]      ; 00527f39
        ;   Label: LAB_00527f39
    LEA EBX,[EDX*0x8 + 0x0]             ; 00527f3d
    ADD EBX,EDX                         ; 00527f44
    MOV EDX,dword ptr [ESP + 0x48]      ; 00527f46
    LEA EAX,[EDX*0x4 + 0x0]             ; 00527f4a
    ADD EAX,EDX                         ; 00527f51
    MOV EBP,dword ptr [ESP + 0x40]      ; 00527f53
    SHL EAX,0x5                         ; 00527f57
    SHL EBX,0x3                         ; 00527f5a
    ADD EBP,EAX                         ; 00527f5d
    ADD EBP,EBX                         ; 00527f5f
    CMP ECX,0x190                       ; 00527f61
    JNC 0x00527fbf                      ; 00527f67
        ;   XREF to: 00527fbf (CONDITIONAL_JUMP)  ; LAB_00527fbf
    MOV EBX,ECX                         ; 00527f69
    MOV EDX,0x5                         ; 00527f6b
    SHR EBX,0x4                         ; 00527f70
    MOV dword ptr [ESP + 0x14],EDX      ; 00527f73
    MOV EAX,EBX                         ; 00527f77
    XOR EDX,EDX                         ; 00527f79
    DIV dword ptr [ESP + 0x14]          ; 00527f7b
    MOV dword ptr [ESP],EAX             ; 00527f7f
    MOV EAX,0x5                         ; 00527f82
    XOR EDX,EDX                         ; 00527f87
    MOV dword ptr [ESP + 0x14],EAX      ; 00527f89
    MOV EAX,EBX                         ; 00527f8d
    DIV dword ptr [ESP + 0x14]          ; 00527f8f
    MOV EAX,ECX                         ; 00527f93
    AND EAX,0xf                         ; 00527f95
    SHR EAX,0x2                         ; 00527f98
    MOV dword ptr [ESP + 0x8],EAX       ; 00527f9b
    MOV EAX,ECX                         ; 00527f9f
    AND EAX,0x3                         ; 00527fa1
    MOV dword ptr [ESP + 0x4],EDX       ; 00527fa4
    MOV dword ptr [ESP + 0xc],EAX       ; 00527fa8
    XOR EAX,EAX                         ; 00527fac
    MOV dword ptr [EBP + 0x54],0x0      ; 00527fae
    MOV word ptr [ESP + 0x1c],AX        ; 00527fb5
    JMP 0x00527f01                      ; 00527fba
        ;   XREF to: 00527f01 (UNCONDITIONAL_JUMP)  ; LAB_00527f01
    CMP ECX,0x1f4                       ; 00527fbf
        ;   Label: LAB_00527fbf
    JNC 0x00528024                      ; 00527fc5
        ;   XREF to: 00528024 (CONDITIONAL_JUMP)  ; LAB_00528024
    LEA EAX,[ECX + 0xfffffe70]          ; 00527fc7
    XOR EDX,EDX                         ; 00527fcd
    MOV EBX,EAX                         ; 00527fcf
    MOV dword ptr [ESP + 0x10],EAX      ; 00527fd1
    MOV EAX,0x5                         ; 00527fd5
    SHR EBX,0x2                         ; 00527fda
    MOV dword ptr [ESP + 0x14],EAX      ; 00527fdd
    MOV EAX,EBX                         ; 00527fe1
    DIV dword ptr [ESP + 0x14]          ; 00527fe3
    MOV EDX,0x5                         ; 00527fe7
    MOV dword ptr [ESP],EAX             ; 00527fec
    MOV dword ptr [ESP + 0x14],EDX      ; 00527fef
    MOV EAX,EBX                         ; 00527ff3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00527ff5
    XOR EDX,EDX                         ; 00527ff9
    DIV EBX                             ; 00527ffb
    MOV EAX,dword ptr [ESP + 0x10]      ; 00527ffd
    AND EAX,0x3                         ; 00528001
    MOV EBX,0x1                         ; 00528004
    MOV dword ptr [ESP + 0x8],EAX       ; 00528009
    XOR EAX,EAX                         ; 0052800d
    MOV dword ptr [ESP + 0x4],EDX       ; 0052800f
    MOV dword ptr [ESP + 0xc],EAX       ; 00528013
    MOV word ptr [ESP + 0x1c],BX        ; 00528017
    MOV dword ptr [EBP + 0x54],EAX      ; 0052801c
    JMP 0x00527f01                      ; 0052801f
        ;   XREF to: 00527f01 (UNCONDITIONAL_JUMP)  ; LAB_00527f01
    CMP ECX,0x200                       ; 00528024
        ;   Label: LAB_00528024
    JNC 0x00527f01                      ; 0052802a
        ;   XREF to: 00527f01 (CONDITIONAL_JUMP)  ; LAB_00527f01
    MOV EDX,0x3                         ; 00528030
    LEA EBX,[ECX + 0xfffffe0c]          ; 00528035
    MOV dword ptr [ESP + 0x14],EDX      ; 0052803b
    MOV EAX,EBX                         ; 0052803f
    XOR EDX,EDX                         ; 00528041
    DIV dword ptr [ESP + 0x14]          ; 00528043
    MOV dword ptr [ESP],EAX             ; 00528047
    MOV EAX,0x3                         ; 0052804a
    XOR EDX,EDX                         ; 0052804f
    MOV dword ptr [ESP + 0x14],EAX      ; 00528051
    MOV EAX,EBX                         ; 00528055
    MOV EBX,dword ptr [ESP + 0x14]      ; 00528057
    DIV EBX                             ; 0052805b
    MOV dword ptr [ESP + 0x4],EDX       ; 0052805d
    XOR EAX,EAX                         ; 00528061
    MOV EDX,0x2                         ; 00528063
    MOV dword ptr [ESP + 0x8],EAX       ; 00528068
    MOV dword ptr [ESP + 0xc],EAX       ; 0052806c
    MOV word ptr [ESP + 0x1c],DX        ; 00528070
    MOV dword ptr [EBP + 0x54],0x1      ; 00528075
    JMP 0x00527f01                      ; 0052807c
        ;   XREF to: 00527f01 (UNCONDITIONAL_JUMP)  ; LAB_00527f01
    CMP EBP,0x3                         ; 00528081
        ;   Label: LAB_00528081
    JZ 0x00527f0d                       ; 00528084
        ;   XREF to: 00527f0d (CONDITIONAL_JUMP)  ; LAB_00527f0d
    JMP 0x00527f18                      ; 0052808a
        ;   XREF to: 00527f18 (UNCONDITIONAL_JUMP)  ; LAB_00527f18
    MOV EDX,dword ptr [ESP + 0x44]      ; 0052808f
        ;   Label: LAB_0052808f
    LEA EBX,[EDX*0x8 + 0x0]             ; 00528093
    ADD EBX,EDX                         ; 0052809a
    MOV EDX,dword ptr [ESP + 0x48]      ; 0052809c
    LEA EAX,[EDX*0x4 + 0x0]             ; 005280a0
    ADD EAX,EDX                         ; 005280a7
    MOV ESI,dword ptr [ESP + 0x40]      ; 005280a9
    SHL EAX,0x5                         ; 005280ad
    SHL EBX,0x3                         ; 005280b0
    ADD EAX,ESI                         ; 005280b3
    SHR ECX,0x1                         ; 005280b5
    ADD EBX,EAX                         ; 005280b7
    CMP ECX,0xb4                        ; 005280b9
    JNC 0x00528105                      ; 005280bf
        ;   XREF to: 00528105 (CONDITIONAL_JUMP)  ; LAB_00528105
    MOV ESI,0x24                        ; 005280c1
    MOV EAX,ECX                         ; 005280c6
    XOR EDX,EDX                         ; 005280c8
    DIV ESI                             ; 005280ca
    MOV dword ptr [ESP],EAX             ; 005280cc
    XOR EDX,EDX                         ; 005280cf
    MOV EAX,ECX                         ; 005280d1
    DIV ESI                             ; 005280d3
    MOV ECX,EDX                         ; 005280d5
    MOV ESI,0x6                         ; 005280d7
    MOV EAX,ECX                         ; 005280dc
    XOR EDX,EDX                         ; 005280de
    DIV ESI                             ; 005280e0
    MOV dword ptr [ESP + 0x4],EAX       ; 005280e2
    XOR EDX,EDX                         ; 005280e6
    MOV EAX,ECX                         ; 005280e8
    DIV ESI                             ; 005280ea
    XOR ECX,ECX                         ; 005280ec
    MOV dword ptr [ESP + 0xc],ECX       ; 005280ee
    MOV dword ptr [ESP + 0x8],EDX       ; 005280f2
    MOV dword ptr [EBX + 0x54],ECX      ; 005280f6
    MOV word ptr [ESP + 0x1c],0x3       ; 005280f9
    JMP 0x00527f18                      ; 00528100
        ;   XREF to: 00527f18 (UNCONDITIONAL_JUMP)  ; LAB_00527f18
    CMP ECX,0xf4                        ; 00528105
        ;   Label: LAB_00528105
    JNC 0x00528146                      ; 0052810b
        ;   XREF to: 00528146 (CONDITIONAL_JUMP)  ; LAB_00528146
    SUB ECX,0xb4                        ; 0052810d
    MOV EAX,ECX                         ; 00528113
    AND EAX,0x3f                        ; 00528115
    SHR EAX,0x4                         ; 00528118
    XOR EDX,EDX                         ; 0052811b
    MOV dword ptr [ESP],EAX             ; 0052811d
    MOV EAX,ECX                         ; 00528120
    MOV dword ptr [ESP + 0xc],EDX       ; 00528122
    AND EAX,0xf                         ; 00528126
    AND ECX,0x3                         ; 00528129
    SHR EAX,0x2                         ; 0052812c
    MOV dword ptr [ESP + 0x8],ECX       ; 0052812f
    MOV dword ptr [ESP + 0x4],EAX       ; 00528133
    MOV dword ptr [EBX + 0x54],EDX      ; 00528137
    MOV word ptr [ESP + 0x1c],0x4       ; 0052813a
    JMP 0x00527f18                      ; 00528141
        ;   XREF to: 00527f18 (UNCONDITIONAL_JUMP)  ; LAB_00527f18
    CMP ECX,0xff                        ; 00528146
        ;   Label: LAB_00528146
    JNC 0x00527f18                      ; 0052814c
        ;   XREF to: 00527f18 (CONDITIONAL_JUMP)  ; LAB_00527f18
    MOV ESI,0x3                         ; 00528152
    SUB ECX,0xf4                        ; 00528157
    XOR EDX,EDX                         ; 0052815d
    MOV EAX,ECX                         ; 0052815f
    DIV ESI                             ; 00528161
    MOV dword ptr [ESP],EAX             ; 00528163
    XOR EDX,EDX                         ; 00528166
    MOV EAX,ECX                         ; 00528168
    DIV ESI                             ; 0052816a
    XOR EBP,EBP                         ; 0052816c
    MOV dword ptr [ESP + 0x8],EBP       ; 0052816e
    MOV dword ptr [ESP + 0xc],EBP       ; 00528172
    MOV dword ptr [ESP + 0x4],EDX       ; 00528176
    MOV EDX,0x5                         ; 0052817a
    MOV dword ptr [EBX + 0x54],EBP      ; 0052817f
    MOV word ptr [ESP + 0x1c],DX        ; 00528182
    JMP 0x00527f18                      ; 00528187
        ;   XREF to: 00527f18 (UNCONDITIONAL_JUMP)  ; LAB_00527f18
    XOR EBX,EBX                         ; 0052818c
        ;   Label: LAB_0052818c
    MOV word ptr [ESP + 0x20],BX        ; 0052818e
    MOV EAX,dword ptr [ESP + 0x1e]      ; 00528193
        ;   Label: LAB_00528193
    SAR EAX,0x10                        ; 00528197
    CMP EAX,0x4                         ; 0052819a
    JGE 0x0052682c                      ; 0052819d
        ;   XREF to: 0052682c (CONDITIONAL_JUMP)  ; LAB_0052682c
    XOR EBP,EBP                         ; 005281a3
    XOR ESI,ESI                         ; 005281a5
    MOV EAX,dword ptr [ESP + 0x1a]      ; 005281a7
        ;   Label: LAB_005281a7
    SAR EAX,0x10                        ; 005281ab
    IMUL EAX,EAX,0x30                   ; 005281ae
    MOV EDX,dword ptr [ESP + 0x16]      ; 005281b1
    SAR EDX,0x10                        ; 005281b5
    SHL EDX,0x4                         ; 005281b8
    ADD EDX,EAX                         ; 005281bb
    MOV EAX,dword ptr [ESP + 0x1e]      ; 005281bd
    SAR EAX,0x10                        ; 005281c1
    SHL EAX,0x2                         ; 005281c4
    MOVSX ECX,SI                        ; 005281c7
    CMP ECX,dword ptr [EDX + EAX*0x1 + 0x620b10] ; 005281ca | DAT_00620b10
    JC 0x005281da                       ; 005281d1
        ;   XREF to: 005281da (CONDITIONAL_JUMP)  ; LAB_005281da
    INC word ptr [ESP + 0x20]           ; 005281d3
    JMP 0x00528193                      ; 005281d8
        ;   XREF to: 00528193 (UNCONDITIONAL_JUMP)  ; LAB_00528193
    MOV EDX,dword ptr [ESP + EAX*0x1]   ; 005281da
        ;   Label: LAB_005281da
    CMP EBP,EDX                         ; 005281dd
    JNZ 0x005281ed                      ; 005281df
        ;   XREF to: 005281ed (CONDITIONAL_JUMP)  ; LAB_005281ed
    MOVSX EAX,BX                        ; 005281e1
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],EDX ; 005281e4
    JMP 0x00528201                      ; 005281eb
        ;   XREF to: 00528201 (UNCONDITIONAL_JUMP)  ; LAB_00528201
    PUSH EDX                            ; 005281ed
        ;   Label: LAB_005281ed
    PUSH EDI                            ; 005281ee
    CALL FUN_00525f00                   ; 005281ef
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00525f00()
    MOVSX EDX,BX                        ; 005281f4
    ADD ESP,0x8                         ; 005281f7
    MOV dword ptr [EDI + EDX*0x4 + 0x7358],EAX ; 005281fa
    INC ESI                             ; 00528201
        ;   Label: LAB_00528201
    INC EBX                             ; 00528202
    JMP 0x005281a7                      ; 00528203
        ;   XREF to: 005281a7 (UNCONDITIONAL_JUMP)  ; LAB_005281a7

