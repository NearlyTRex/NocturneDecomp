; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005138e0(int *param_1)
;
; Local Variables:
; undefined8       Stack[-0xcc]:8  local_cc
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00509a80 at 0050a08e
;
; Referenced Globals:
;   TerminatedCString s_g_00590c5c
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd30e0
;   undefined4 DAT_01bff71f
;   undefined4 DAT_01c00c70
;   undefined4 DAT_026714b8
;   undefined4 DAT_026714bc
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_drawText_FUN_00402600
;   engine_2d.c_plotPixel_FUN_00401530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005138e0
        ;   Label: FUN_005138e0
    PUSH ESI                            ; 005138e1
    PUSH EDI                            ; 005138e2
    PUSH EBP                            ; 005138e3
    SUB ESP,0xb4                        ; 005138e4
    MOV EDI,dword ptr [ESP + 0xc8]      ; 005138ea
    MOV EDX,0x2                         ; 005138f1
    MOV EAX,[0x005b7620]                ; 005138f6 | DAT_005b7620
    MOV ECX,dword ptr [EDI]             ; 005138fb
    XOR EBP,EBP                         ; 005138fd
    SUB EAX,0x78                        ; 005138ff
    MOV dword ptr [ESP + 0x98],EDX      ; 00513902
    MOV dword ptr [ESP + 0x84],EAX      ; 00513909
    TEST ECX,ECX                        ; 00513910
    JLE 0x00513930                      ; 00513912
        ;   XREF to: 00513930 (CONDITIONAL_JUMP)  ; LAB_00513930
    XOR EAX,EAX                         ; 00513914
    MOV dword ptr [EAX + 0x26714b4],EBP ; 00513916 | DAT_026714b8
        ;   Label: LAB_00513916
    INC EBP                             ; 0051391c
    MOV EBX,dword ptr [EDI]             ; 0051391d
    ADD EAX,0x4                         ; 0051391f
    CMP EBP,EBX                         ; 00513922
    JL 0x00513916                       ; 00513924
        ;   XREF to: 00513916 (CONDITIONAL_JUMP)  ; LAB_00513916
    LEA EAX,[EAX]                       ; 00513926
    LEA EDX,[EDX]                       ; 0051392c
    XOR EBP,EBP                         ; 00513930
        ;   Label: LAB_00513930
    MOV dword ptr [ESP + 0x74],EBP      ; 00513932
    MOV EAX,dword ptr [EDI]             ; 00513936
        ;   Label: LAB_00513936
    DEC EAX                             ; 00513938
    CMP EBP,EAX                         ; 00513939
    JGE 0x00513998                      ; 0051393b
        ;   XREF to: 00513998 (CONDITIONAL_JUMP)  ; LAB_00513998
    LEA ECX,[EBP + 0x1]                 ; 0051393d
    CMP ECX,dword ptr [EDI]             ; 00513940
    JGE 0x0051398a                      ; 00513942
        ;   XREF to: 0051398a (CONDITIONAL_JUMP)  ; LAB_0051398a
    MOV EBX,dword ptr [ESP + 0x74]      ; 00513944
    LEA EDX,[ECX*0x4 + 0x0]             ; 00513948
    MOV ESI,dword ptr [EBX + 0x26714b4] ; 0051394f | DAT_026714b8
        ;   Label: LAB_0051394f
    MOV EAX,dword ptr [EDX + 0x26714b4] ; 00513955 | DAT_026714b8 | DAT_026714bc
    FLD float ptr [ESI*0x4 + 0x2663604] ; 0051395b
    FCOMP float ptr [EAX*0x4 + 0x2663604] ; 00513962
    FNSTSW AX                           ; 00513969
    SAHF                                ; 0051396b
    JNC 0x00513980                      ; 0051396c
        ;   XREF to: 00513980 (CONDITIONAL_JUMP)  ; LAB_00513980
    MOV EAX,dword ptr [EDX + 0x26714b4] ; 0051396e | DAT_026714b8 | DAT_026714bc
    MOV dword ptr [EBX + 0x26714b4],EAX ; 00513974
    MOV dword ptr [EDX + 0x26714b4],ESI ; 0051397a | DAT_026714b8 | DAT_026714bc
    INC ECX                             ; 00513980
        ;   Label: LAB_00513980
    MOV ESI,dword ptr [EDI]             ; 00513981
    ADD EDX,0x4                         ; 00513983
    CMP ECX,ESI                         ; 00513986
    JL 0x0051394f                       ; 00513988
        ;   XREF to: 0051394f (CONDITIONAL_JUMP)  ; LAB_0051394f
    MOV EAX,dword ptr [ESP + 0x74]      ; 0051398a
        ;   Label: LAB_0051398a
    ADD EAX,0x4                         ; 0051398e
    INC EBP                             ; 00513991
    MOV dword ptr [ESP + 0x74],EAX      ; 00513992
    JMP 0x00513936                      ; 00513996
        ;   XREF to: 00513936 (UNCONDITIONAL_JUMP)  ; LAB_00513936
    MOV EDX,0x9                         ; 00513998
        ;   Label: LAB_00513998
    MOV EBP,dword ptr [EDI]             ; 0051399d
    CMP EBP,EDX                         ; 0051399f
    JGE 0x005139a5                      ; 005139a1
        ;   XREF to: 005139a5 (CONDITIONAL_JUMP)  ; LAB_005139a5
    MOV EDX,EBP                         ; 005139a3
    TEST EDX,EDX                        ; 005139a5
        ;   Label: LAB_005139a5
    JLE 0x00513c1f                      ; 005139a7
        ;   XREF to: 00513c1f (CONDITIONAL_JUMP)  ; LAB_00513c1f
    MOV EAX,dword ptr [ESP + 0x84]      ; 005139ad
    SHL EAX,0x2                         ; 005139b4
    LEA ECX,[EAX + 0xc0]                ; 005139b7
    SHL EDX,0x2                         ; 005139bd
    MOV dword ptr [ESP + 0x7c],EAX      ; 005139c0
    MOV EAX,dword ptr [ESP + 0x84]      ; 005139c4
    ADD EDI,0x4                         ; 005139cb
    SUB EAX,0xb                         ; 005139ce
    XOR EBX,EBX                         ; 005139d1
    MOV dword ptr [ESP + 0x78],EAX      ; 005139d3
    MOV EAX,dword ptr [ESP + 0x84]      ; 005139d7
    MOV dword ptr [ESP + 0x8c],EBX      ; 005139de
    ADD EAX,0x30                        ; 005139e5
    MOV dword ptr [ESP + 0x68],EDX      ; 005139e8
    MOV dword ptr [ESP + 0x80],EAX      ; 005139ec
    MOV EAX,dword ptr [ESP + 0x84]      ; 005139f3
    MOV dword ptr [ESP + 0x64],EDI      ; 005139fa
    ADD EAX,0x6c                        ; 005139fe
    MOV dword ptr [ESP + 0x6c],ECX      ; 00513a01
    MOV dword ptr [ESP + 0x70],EAX      ; 00513a05
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00513a09
        ;   Label: LAB_00513a09
    MOV EAX,dword ptr [EAX + 0x26714b4] ; 00513a10 | DAT_026714b8
    MOV dword ptr [ESP + 0x88],EAX      ; 00513a16
    IMUL EAX,EAX,0x3000                 ; 00513a1d
    CMP dword ptr [0x005b7624],0x20     ; 00513a23 | DAT_005b7624
    JZ 0x00513c2a                       ; 00513a2a
        ;   XREF to: 00513c2a (CONDITIONAL_JUMP)  ; LAB_00513c2a
    MOV dword ptr [ESP + 0x94],EAX      ; 00513a30
    XOR EBP,EBP                         ; 00513a37
    ADD EAX,0x100                       ; 00513a39
    MOV dword ptr [ESP + 0xac],EBP      ; 00513a3e
    MOV dword ptr [ESP + 0xa4],EAX      ; 00513a45
    MOV EAX,dword ptr [ESP + 0x84]      ; 00513a4c
    MOV EBP,0xff                        ; 00513a53
    MOV dword ptr [ESP + 0x9c],EAX      ; 00513a58
    MOV EBX,dword ptr [ESP + 0xac]      ; 00513a5f
        ;   Label: LAB_00513a5f
    MOV EAX,dword ptr [ESP + 0x94]      ; 00513a66
    SHL EBX,0x8                         ; 00513a6d
    MOV ESI,dword ptr [ESP + 0x98]      ; 00513a70
    ADD EBX,EAX                         ; 00513a77
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00513a79
    MOV EDI,dword ptr [ESP + 0x9c]      ; 00513a80
    MOV dword ptr [ESP + 0xb0],EAX      ; 00513a87
    MOV EAX,0xffffff                    ; 00513a8e
        ;   Label: LAB_00513a8e
    MOV ECX,dword ptr [EBX + 0x23755f8] ; 00513a93
    XOR EDX,EDX                         ; 00513a99
    INC ECX                             ; 00513a9b
    DIV ECX                             ; 00513a9c
    CMP EAX,0xff                        ; 00513a9e
    JBE 0x00513aa7                      ; 00513aa3
        ;   XREF to: 00513aa7 (CONDITIONAL_JUMP)  ; LAB_00513aa7
    MOV EAX,EBP                         ; 00513aa5
    SHR EAX,0x3                         ; 00513aa7
        ;   Label: LAB_00513aa7
    MOV EDX,EAX                         ; 00513aaa
    MOV ECX,EAX                         ; 00513aac
    SHL EDX,0xa                         ; 00513aae
    SHL ECX,0x5                         ; 00513ab1
    ADD ECX,EDX                         ; 00513ab4
    MOV AL,byte ptr [ECX + EAX*0x1 + 0x1bf7720] ; 00513ab6 | DAT_01bff71f
    PUSH EDI                            ; 00513abd
    AND EAX,0xff                        ; 00513abe
    PUSH ESI                            ; 00513ac3
    MOV [0x01c00c70],EAX                ; 00513ac4 | DAT_01c00c70
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00513ac9
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_plotPixel_FUN_00401530()
    ADD ESP,0x8                         ; 00513ace
    ADD EBX,0x4                         ; 00513ad1
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00513ad4
    INC ESI                             ; 00513adb
    CMP EBX,EDX                         ; 00513adc
    JNZ 0x00513a8e                      ; 00513ade
        ;   XREF to: 00513a8e (CONDITIONAL_JUMP)  ; LAB_00513a8e
    MOV EBX,dword ptr [ESP + 0x9c]      ; 00513ae0
    MOV ESI,dword ptr [ESP + 0xac]      ; 00513ae7
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00513aee
    INC EBX                             ; 00513af5
    INC ESI                             ; 00513af6
    ADD ECX,0x100                       ; 00513af7
    MOV dword ptr [ESP + 0x9c],EBX      ; 00513afd
    MOV dword ptr [ESP + 0xac],ESI      ; 00513b04
    MOV dword ptr [ESP + 0xa4],ECX      ; 00513b0b
    CMP ESI,0x30                        ; 00513b12
    JL 0x00513a5f                       ; 00513b15
        ;   XREF to: 00513a5f (CONDITIONAL_JUMP)  ; LAB_00513a5f
    MOV EAX,dword ptr [ESP + 0x88]      ; 00513b1b
        ;   Label: LAB_00513b1b
    SUB ESP,0x8                         ; 00513b22
    FLD float ptr [EAX*0x4 + 0x2663604] ; 00513b25
    FSTP double ptr [ESP]               ; 00513b2c
    PUSH 0x590c5c                       ; 00513b2f | = "%g"
    LEA EAX,[ESP + 0xc]                 ; 00513b34
    PUSH EAX                            ; 00513b38
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00513b39
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00513b3e
    MOV ECX,dword ptr [ESP + 0x80]      ; 00513b41
    PUSH ECX                            ; 00513b48
    MOV EBX,dword ptr [ESP + 0x9c]      ; 00513b49
    PUSH EBX                            ; 00513b50
    LEA EAX,[ESP + 0x8]                 ; 00513b51
    PUSH EAX                            ; 00513b55
    CALL engine_2d.c_drawText_FUN_00402600 ; 00513b56
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 00513b5b
    IMUL EAX,dword ptr [ESP + 0x88],0x1a0 ; 00513b5e
    MOV ESI,dword ptr [ESP + 0x78]      ; 00513b69
    PUSH ESI                            ; 00513b6d
    MOV EDX,dword ptr [ESP + 0x68]      ; 00513b6e
    PUSH EBX                            ; 00513b72
    ADD EAX,EDX                         ; 00513b73
    PUSH EAX                            ; 00513b75
    CALL engine_2d.c_drawText_FUN_00402600 ; 00513b76
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    LEA EAX,[EBX + 0x81]                ; 00513b7b
    LEA ECX,[EBX + 0x41]                ; 00513b81
    ADD ESP,0xc                         ; 00513b84
    MOV EBX,dword ptr [0x005b761c]      ; 00513b87 | DAT_005b761c
    MOV dword ptr [ESP + 0x98],ECX      ; 00513b8d
    CMP EAX,EBX                         ; 00513b94
    JLE 0x00513c02                      ; 00513b96
        ;   XREF to: 00513c02 (CONDITIONAL_JUMP)  ; LAB_00513c02
    MOV ESI,0x2                         ; 00513b98
    MOV EAX,dword ptr [ESP + 0x70]      ; 00513b9d
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00513ba1
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00513ba5
    MOV EDX,dword ptr [ESP + 0x78]      ; 00513ba9
    MOV ECX,dword ptr [ESP + 0x80]      ; 00513bad
    MOV dword ptr [ESP + 0x98],ESI      ; 00513bb4
    ADD EDI,0xf0                        ; 00513bbb
    ADD EBP,0xf0                        ; 00513bc1
    ADD EDX,0x3c                        ; 00513bc7
    ADD ECX,0x3c                        ; 00513bca
    LEA EBX,[EAX + 0x3c]                ; 00513bcd
    MOV ESI,dword ptr [ESP + 0x84]      ; 00513bd0
    MOV dword ptr [ESP + 0x6c],EDI      ; 00513bd7
    MOV dword ptr [ESP + 0x7c],EBP      ; 00513bdb
    MOV dword ptr [ESP + 0x78],EDX      ; 00513bdf
    MOV dword ptr [ESP + 0x80],ECX      ; 00513be3
    MOV dword ptr [ESP + 0x70],EBX      ; 00513bea
    ADD ESI,0x3c                        ; 00513bee
    MOV EDI,dword ptr [0x005b7620]      ; 00513bf1 | DAT_005b7620
    MOV dword ptr [ESP + 0x84],ESI      ; 00513bf7
    CMP EAX,EDI                         ; 00513bfe
    JG 0x00513c1f                       ; 00513c00
        ;   XREF to: 00513c1f (CONDITIONAL_JUMP)  ; LAB_00513c1f
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00513c02
        ;   Label: LAB_00513c02
    ADD EDX,0x4                         ; 00513c09
    MOV ECX,dword ptr [ESP + 0x68]      ; 00513c0c
    MOV dword ptr [ESP + 0x8c],EDX      ; 00513c10
    CMP EDX,ECX                         ; 00513c17
    JL 0x00513a09                       ; 00513c19
        ;   XREF to: 00513a09 (CONDITIONAL_JUMP)  ; LAB_00513a09
    ADD ESP,0xb4                        ; 00513c1f
        ;   Label: LAB_00513c1f
    POP EBP                             ; 00513c25
    POP EDI                             ; 00513c26
    POP ESI                             ; 00513c27
    POP EBX                             ; 00513c28
    RET                                 ; 00513c29
    MOV dword ptr [ESP + 0xa0],EAX      ; 00513c2a
        ;   Label: LAB_00513c2a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00513c31
    MOV dword ptr [ESP + 0xa8],EAX      ; 00513c35
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00513c3c
    MOV dword ptr [ESP + 0x90],EAX      ; 00513c40
    MOV EDI,dword ptr [ESP + 0x98]      ; 00513c47
        ;   Label: LAB_00513c47
    MOV EBX,dword ptr [ESP + 0xa0]      ; 00513c4e
    SHL EDI,0x2                         ; 00513c55
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00513c58
    MOV ECX,EDI                         ; 00513c5f
    ADD EDI,0x100                       ; 00513c61
    MOV EAX,0xffffff                    ; 00513c67
        ;   Label: LAB_00513c67
    MOV ESI,dword ptr [EBX + 0x23755f8] ; 00513c6c
    XOR EDX,EDX                         ; 00513c72
    INC ESI                             ; 00513c74
    DIV ESI                             ; 00513c75
    CMP EAX,0xff                        ; 00513c77
    JBE 0x00513c83                      ; 00513c7c
        ;   XREF to: 00513c83 (CONDITIONAL_JUMP)  ; LAB_00513c83
    MOV EAX,0xff                        ; 00513c7e
    MOV EDX,EAX                         ; 00513c83
        ;   Label: LAB_00513c83
    SHL EDX,0x8                         ; 00513c85
    ADD ECX,0x4                         ; 00513c88
    ADD EDX,EAX                         ; 00513c8b
    SHL EAX,0x10                        ; 00513c8d
    MOV ESI,dword ptr [EBP + 0x1bd2fa0] ; 00513c90 | DAT_01bd30e0
    ADD EDX,EAX                         ; 00513c96
    ADD EBX,0x4                         ; 00513c98
    MOV dword ptr [ECX + ESI*0x1 + -0x4],EDX ; 00513c9b
    CMP ECX,EDI                         ; 00513c9f
    JNZ 0x00513c67                      ; 00513ca1
        ;   XREF to: 00513c67 (CONDITIONAL_JUMP)  ; LAB_00513c67
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00513ca3
    MOV EBP,dword ptr [ESP + 0xa0]      ; 00513caa
    MOV EDX,dword ptr [ESP + 0x90]      ; 00513cb1
    ADD EAX,0x4                         ; 00513cb8
    ADD EBP,0x100                       ; 00513cbb
    MOV dword ptr [ESP + 0xa8],EAX      ; 00513cc1
    MOV dword ptr [ESP + 0xa0],EBP      ; 00513cc8
    CMP EAX,EDX                         ; 00513ccf
    JZ 0x00513b1b                       ; 00513cd1
        ;   XREF to: 00513b1b (CONDITIONAL_JUMP)  ; LAB_00513b1b
    JMP 0x00513c47                      ; 00513cd7
        ;   XREF to: 00513c47 (UNCONDITIONAL_JUMP)  ; LAB_00513c47

