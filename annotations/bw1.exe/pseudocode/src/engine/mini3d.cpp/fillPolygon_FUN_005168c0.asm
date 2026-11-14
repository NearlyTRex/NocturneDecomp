; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_fillPolygon_FUN_005168c0(float *vertices,int vertex_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
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
; XREF[2]:
;   engine_mini3d.cpp_clipAndFillPolygon_FUN_005159c0 at 00515ac8
;   engine_mini3d.cpp_polyListD3DTL_FUN_00512de0 at 005130b7
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01d22578
;   undefined4 DAT_01d2c0c4
;   undefined4 DAT_01d2c0c8
;   undefined4 DAT_01d2c0d0
;   undefined4 DAT_01d2c0d4
;   undefined4 DAT_01d2c0d8
;   undefined4 DAT_01d2c0e0
;   undefined4 DAT_01d2c0e4
;   undefined4 DAT_01d2c0e8
;   undefined4 DAT_01d2c0ec
;   undefined4 DAT_01d2c0f0
;   undefined4 DAT_01d2c0f4
;   undefined4 DAT_01d2c118
;   ... and 2 more
;
; Called Functions:
;   engine_mini3d.cpp_setupScanEdge_FUN_00515bd0
;   engine_special.cpp_FUN_0057eeac
;   engine_special.cpp_FUN_0057f473
;   engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39
;   engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005168c0
        ;   Label: engine_mini3d.cpp_fillPolygon_FUN_005168c0
    PUSH ESI                            ; 005168c1
    PUSH EDI                            ; 005168c2
    PUSH EBP                            ; 005168c3
    SUB ESP,0x24                        ; 005168c4
    MOV EBP,dword ptr [0x01d2c0c4]      ; 005168c7 | DAT_01d2c0c4
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005168cd
    MOV EAX,dword ptr [ESP + 0x38]      ; 005168d1
    FLD float ptr [EAX + 0x94]          ; 005168d5
    FLD float ptr [EAX + 0x58]          ; 005168db
    FSUB float ptr [EAX + 0x18]         ; 005168de
    FXCH                                ; 005168e1
    FSUB float ptr [EAX + 0x54]         ; 005168e3
    FXCH                                ; 005168e6
    FSTP float ptr [ESP + 0x18]         ; 005168e8
    FSTP float ptr [ESP + 0x1c]         ; 005168ec
    FLD float ptr [ESP + 0x18]          ; 005168f0
    FMUL float ptr [ESP + 0x1c]         ; 005168f4
    FLD float ptr [EAX + 0x98]          ; 005168f8
    FLD float ptr [EAX + 0x54]          ; 005168fe
    FSUB float ptr [EAX + 0x14]         ; 00516901
    FXCH                                ; 00516904
    FSUB float ptr [EAX + 0x58]         ; 00516906
    FXCH                                ; 00516909
    FSTP float ptr [ESP + 0x4]          ; 0051690b
    FSTP float ptr [ESP]                ; 0051690f
    FLD float ptr [ESP + 0x4]           ; 00516912
    FMUL float ptr [ESP]                ; 00516916
    MOV EDX,dword ptr [0x01d22578]      ; 00516919 | DAT_01d22578
    FXCH                                ; 0051691f
    FSTP float ptr [ESP + 0x8]          ; 00516921
    FSTP float ptr [ESP + 0x20]         ; 00516925
    TEST EDX,EDX                        ; 00516929
    JNZ 0x00516b9c                      ; 0051692b
        ;   XREF to: 00516b9c (CONDITIONAL_JUMP)  ; LAB_00516b9c
    FLD float ptr [ESP + 0x20]          ; 00516931
    FCOMP float ptr [ESP + 0x8]         ; 00516935
    FNSTSW AX                           ; 00516939
    SAHF                                ; 0051693b
    JBE 0x00516bad                      ; 0051693c
        ;   XREF to: 00516bad (CONDITIONAL_JUMP)  ; LAB_00516bad
    MOV ECX,0x4b0                       ; 00516942
        ;   Label: LAB_00516942
    XOR EBX,EBX                         ; 00516947
    XOR EBP,EBP                         ; 00516949
    MOV dword ptr [0x01d2c5cc],EBX      ; 0051694b | DAT_01d2c5cc
    MOV dword ptr [0x01d2c0c4],EBX      ; 00516951 | DAT_01d2c0c4
    MOV dword ptr [0x01d2c5c8],ECX      ; 00516957 | DAT_01d2c5c8
    TEST EDI,EDI                        ; 0051695d
    JLE 0x00516989                      ; 0051695f
        ;   XREF to: 00516989 (CONDITIONAL_JUMP)  ; LAB_00516989
    MOV ESI,dword ptr [ESP + 0x38]      ; 00516961
    LEA EAX,[EBX + 0x1]                 ; 00516965
        ;   Label: LAB_00516965
    CMP EAX,EDI                         ; 00516968
    JL 0x0051696e                       ; 0051696a
        ;   XREF to: 0051696e (CONDITIONAL_JUMP)  ; LAB_0051696e
    XOR EAX,EAX                         ; 0051696c
    MOV EDX,dword ptr [ESP + 0x38]      ; 0051696e
        ;   Label: LAB_0051696e
    SHL EAX,0x6                         ; 00516972
    ADD EAX,EDX                         ; 00516975
    PUSH EAX                            ; 00516977
    PUSH ESI                            ; 00516978
    INC EBX                             ; 00516979
    CALL engine_mini3d.cpp_setupScanEdge_FUN_00515bd0 ; 0051697a
        ;   XREF to: 00515bd0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setupScanEdge_FUN_00515bd0(float * v0, float * v1)
    ADD ESP,0x8                         ; 0051697f
    ADD ESI,0x40                        ; 00516982
    CMP EBX,EDI                         ; 00516985
    JL 0x00516965                       ; 00516987
        ;   XREF to: 00516965 (CONDITIONAL_JUMP)  ; LAB_00516965
    MOV EAX,0x1d2c0c8                   ; 00516989
        ;   Label: LAB_00516989
    MOV EBP,dword ptr [0x01d2c0c4]      ; 0051698e | DAT_01d2c0c4
    MOV EDX,dword ptr [0x01d2c5c8]      ; 00516994 | DAT_01d2c5c8
    XOR ESI,ESI                         ; 0051699a
    TEST EBP,EBP                        ; 0051699c
    JLE 0x00516bc7                      ; 0051699e
        ;   XREF to: 00516bc7 (CONDITIONAL_JUMP)  ; LAB_00516bc7
    CMP EDX,dword ptr [EAX]             ; 005169a4 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_005169a4
    JNZ 0x00516bbb                      ; 005169a6
        ;   XREF to: 00516bbb (CONDITIONAL_JUMP)  ; LAB_00516bbb
    TEST EAX,EAX                        ; 005169ac
    JZ 0x00516bbb                       ; 005169ae
        ;   XREF to: 00516bbb (CONDITIONAL_JUMP)  ; LAB_00516bbb
    MOV dword ptr [ESP + 0x14],EAX      ; 005169b4 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_005169b4
    TEST EAX,EAX                        ; 005169b8
    JZ 0x00516bad                       ; 005169ba
        ;   XREF to: 00516bad (CONDITIONAL_JUMP)  ; LAB_00516bad
    MOV EBX,dword ptr [0x01d2c5c8]      ; 005169c0 | DAT_01d2c5c8
    MOV ECX,EAX                         ; 005169c6
    XOR EDX,EDX                         ; 005169c8
    MOV EAX,0x1d2c0c8                   ; 005169ca
    TEST EBP,EBP                        ; 005169cf
    JLE 0x00516bda                      ; 005169d1
        ;   XREF to: 00516bda (CONDITIONAL_JUMP)  ; LAB_00516bda
    CMP EBX,dword ptr [EAX]             ; 005169d7 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_005169d7
    JNZ 0x00516bce                      ; 005169d9
        ;   XREF to: 00516bce (CONDITIONAL_JUMP)  ; LAB_00516bce
    CMP EAX,ECX                         ; 005169df
    JZ 0x00516bce                       ; 005169e1
        ;   XREF to: 00516bce (CONDITIONAL_JUMP)  ; LAB_00516bce
    MOV dword ptr [ESP + 0x10],EAX      ; 005169e7 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_005169e7
    TEST EAX,EAX                        ; 005169eb
    JZ 0x00516bad                       ; 005169ed
        ;   XREF to: 00516bad (CONDITIONAL_JUMP)  ; LAB_00516bad
    MOV EAX,[0x01d2c5c8]                ; 005169f3 | DAT_01d2c5c8
    MOV dword ptr [ESP + 0xc],EAX       ; 005169f8
    MOV EDX,dword ptr [ESP + 0x14]      ; 005169fc
        ;   Label: LAB_005169fc
    MOV EAX,dword ptr [ESP + 0xc]       ; 00516a00
    CMP EAX,dword ptr [EDX + 0x4]       ; 00516a04
    JL 0x00516a40                       ; 00516a07
        ;   XREF to: 00516a40 (CONDITIONAL_JUMP)  ; LAB_00516a40
    MOV EBX,dword ptr [ESP + 0x10]      ; 00516a09
    MOV ECX,EAX                         ; 00516a0d
    MOV dword ptr [EDX],0xffffffff      ; 00516a0f
    MOV EAX,0x1d2c0c8                   ; 00516a15
    XOR EDX,EDX                         ; 00516a1a
    TEST EBP,EBP                        ; 00516a1c
    JLE 0x00516bed                      ; 00516a1e
        ;   XREF to: 00516bed (CONDITIONAL_JUMP)  ; LAB_00516bed
    CMP ECX,dword ptr [EAX]             ; 00516a24 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00516a24
    JNZ 0x00516be1                      ; 00516a26
        ;   XREF to: 00516be1 (CONDITIONAL_JUMP)  ; LAB_00516be1
    CMP EAX,EBX                         ; 00516a2c
    JZ 0x00516be1                       ; 00516a2e
        ;   XREF to: 00516be1 (CONDITIONAL_JUMP)  ; LAB_00516be1
    MOV dword ptr [ESP + 0x14],EAX      ; 00516a34 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00516a34
    TEST EAX,EAX                        ; 00516a38
    JZ 0x00516bad                       ; 00516a3a
        ;   XREF to: 00516bad (CONDITIONAL_JUMP)  ; LAB_00516bad
    MOV EDX,dword ptr [ESP + 0x10]      ; 00516a40
        ;   Label: LAB_00516a40
    MOV EAX,dword ptr [ESP + 0xc]       ; 00516a44
    CMP EAX,dword ptr [EDX + 0x4]       ; 00516a48
    JL 0x00516a84                       ; 00516a4b
        ;   XREF to: 00516a84 (CONDITIONAL_JUMP)  ; LAB_00516a84
    MOV ECX,dword ptr [ESP + 0x14]      ; 00516a4d
    MOV EBX,EAX                         ; 00516a51
    MOV dword ptr [EDX],0xffffffff      ; 00516a53
    MOV EAX,0x1d2c0c8                   ; 00516a59
    XOR EDX,EDX                         ; 00516a5e
    TEST EBP,EBP                        ; 00516a60
    JLE 0x00516c00                      ; 00516a62
        ;   XREF to: 00516c00 (CONDITIONAL_JUMP)  ; LAB_00516c00
    CMP EBX,dword ptr [EAX]             ; 00516a68 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00516a68
    JNZ 0x00516bf4                      ; 00516a6a
        ;   XREF to: 00516bf4 (CONDITIONAL_JUMP)  ; LAB_00516bf4
    CMP EAX,ECX                         ; 00516a70
    JZ 0x00516bf4                       ; 00516a72
        ;   XREF to: 00516bf4 (CONDITIONAL_JUMP)  ; LAB_00516bf4
    MOV dword ptr [ESP + 0x10],EAX      ; 00516a78 | DAT_01d2c118 | DAT_01d2c0c8
        ;   Label: LAB_00516a78
    TEST EAX,EAX                        ; 00516a7c
    JZ 0x00516bad                       ; 00516a7e
        ;   XREF to: 00516bad (CONDITIONAL_JUMP)  ; LAB_00516bad
    CMP dword ptr [0x01c51d00],0x0      ; 00516a84 | DAT_01c51d00
        ;   Label: LAB_00516a84
    JZ 0x00516c1d                       ; 00516a8b
        ;   XREF to: 00516c1d (CONDITIONAL_JUMP)  ; LAB_00516c1d
    MOV EDX,dword ptr [0x0061b4a0]      ; 00516a91 | DAT_0061b4a0
    MOV dword ptr [0x01d2c0c4],EBP      ; 00516a97 | DAT_01d2c0c4
    CMP EDX,0x20                        ; 00516a9d
    JNZ 0x00516c07                      ; 00516aa0
        ;   XREF to: 00516c07 (CONDITIONAL_JUMP)  ; LAB_00516c07
    MOV EDI,dword ptr [ESP + 0x10]      ; 00516aa6
    MOV ESI,dword ptr [ESP + 0x14]      ; 00516aaa
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516aae
    CALL engine_special.cpp_FUN_0057eeac ; 00516ab2
        ;   XREF to: 0057eeac (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0057eeac()
    MOV EDX,dword ptr [ESP + 0x14]      ; 00516ab7
        ;   Label: LAB_00516ab7
    MOV EAX,dword ptr [ESP + 0x14]      ; 00516abb
    MOV ECX,dword ptr [EDX + 0x8]       ; 00516abf | DAT_01d2c0d0
    MOV EAX,dword ptr [EAX + 0xc]       ; 00516ac2 | DAT_01d2c0d4
    ADD ECX,EAX                         ; 00516ac5
    MOV dword ptr [EDX + 0x8],ECX       ; 00516ac7 | DAT_01d2c0d0
    MOV EBX,dword ptr [EDX + 0x18]      ; 00516aca | DAT_01d2c0e0
    MOV ESI,dword ptr [EDX + 0x20]      ; 00516acd | DAT_01d2c0e8
    MOV EDI,dword ptr [EDX + 0x28]      ; 00516ad0 | DAT_01d2c0f0
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00516ad3 | DAT_01d2c0e4
    MOV ECX,dword ptr [EDX + 0x10]      ; 00516ad6 | DAT_01d2c0d8
    ADD EBX,EAX                         ; 00516ad9
    MOV EAX,dword ptr [EDX + 0x24]      ; 00516adb | DAT_01d2c0ec
    MOV dword ptr [EDX + 0x18],EBX      ; 00516ade | DAT_01d2c0e0
    ADD ESI,EAX                         ; 00516ae1
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00516ae3 | DAT_01d2c0f4
    MOV dword ptr [EDX + 0x20],ESI      ; 00516ae6 | DAT_01d2c0e8
    ADD EDI,EAX                         ; 00516ae9
    MOV EAX,dword ptr [EDX + 0x14]      ; 00516aeb
    MOV dword ptr [EDX + 0x28],EDI      ; 00516aee
    ADD ECX,EAX                         ; 00516af1
    MOV dword ptr [EDX + 0x10],ECX      ; 00516af3
    MOV EBX,dword ptr [EDX + 0x38]      ; 00516af6
    MOV ESI,dword ptr [EDX + 0x40]      ; 00516af9
    MOV EDI,dword ptr [EDX + 0x48]      ; 00516afc
    MOV EAX,dword ptr [EDX + 0x3c]      ; 00516aff
    MOV ECX,dword ptr [EDX + 0x30]      ; 00516b02
    ADD EBX,EAX                         ; 00516b05
    MOV EAX,dword ptr [EDX + 0x44]      ; 00516b07
    MOV dword ptr [EDX + 0x38],EBX      ; 00516b0a
    ADD ESI,EAX                         ; 00516b0d
    MOV EAX,dword ptr [EDX + 0x4c]      ; 00516b0f
    MOV dword ptr [EDX + 0x40],ESI      ; 00516b12
    ADD EDI,EAX                         ; 00516b15
    MOV EAX,dword ptr [EDX + 0x34]      ; 00516b17
    MOV dword ptr [EDX + 0x48],EDI      ; 00516b1a
    ADD ECX,EAX                         ; 00516b1d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00516b1f
    MOV dword ptr [EDX + 0x30],ECX      ; 00516b23
    MOV EDX,dword ptr [ESP + 0x10]      ; 00516b26
    MOV EAX,dword ptr [EAX + 0xc]       ; 00516b2a
    ADD dword ptr [EDX + 0x8],EAX       ; 00516b2d
    MOV ESI,dword ptr [EDX + 0x18]      ; 00516b30
    MOV EDI,dword ptr [EDX + 0x20]      ; 00516b33
    MOV ECX,dword ptr [EDX + 0x28]      ; 00516b36
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00516b39
    MOV EBX,dword ptr [EDX + 0x10]      ; 00516b3c
    ADD ESI,EAX                         ; 00516b3f
    MOV EAX,dword ptr [EDX + 0x24]      ; 00516b41
    MOV dword ptr [EDX + 0x18],ESI      ; 00516b44
    ADD EDI,EAX                         ; 00516b47
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00516b49
    MOV dword ptr [EDX + 0x20],EDI      ; 00516b4c
    ADD ECX,EAX                         ; 00516b4f
    MOV EAX,dword ptr [EDX + 0x14]      ; 00516b51
    MOV dword ptr [EDX + 0x28],ECX      ; 00516b54
    ADD EBX,EAX                         ; 00516b57
    MOV dword ptr [EDX + 0x10],EBX      ; 00516b59
    MOV EBP,dword ptr [0x01d2c0c4]      ; 00516b5c | DAT_01d2c0c4
    MOV ESI,dword ptr [EDX + 0x38]      ; 00516b62
    MOV EDI,dword ptr [EDX + 0x40]      ; 00516b65
    MOV ECX,dword ptr [EDX + 0x48]      ; 00516b68
    MOV EAX,dword ptr [EDX + 0x3c]      ; 00516b6b
    MOV EBX,dword ptr [EDX + 0x30]      ; 00516b6e
    ADD ESI,EAX                         ; 00516b71
    MOV EAX,dword ptr [EDX + 0x44]      ; 00516b73
    MOV dword ptr [EDX + 0x38],ESI      ; 00516b76
    MOV ESI,dword ptr [ESP + 0xc]       ; 00516b79
    ADD EDI,EAX                         ; 00516b7d
    INC ESI                             ; 00516b7f
    MOV EAX,dword ptr [EDX + 0x4c]      ; 00516b80
    MOV dword ptr [EDX + 0x40],EDI      ; 00516b83
    ADD ECX,EAX                         ; 00516b86
    MOV EAX,dword ptr [EDX + 0x34]      ; 00516b88
    MOV dword ptr [EDX + 0x48],ECX      ; 00516b8b
    ADD EBX,EAX                         ; 00516b8e
    MOV dword ptr [ESP + 0xc],ESI       ; 00516b90
    MOV dword ptr [EDX + 0x30],EBX      ; 00516b94
    JMP 0x005169fc                      ; 00516b97
        ;   XREF to: 005169fc (UNCONDITIONAL_JUMP)  ; LAB_005169fc
    FLD float ptr [ESP + 0x20]          ; 00516b9c
        ;   Label: LAB_00516b9c
    FCOMP float ptr [ESP + 0x8]         ; 00516ba0
    FNSTSW AX                           ; 00516ba4
    SAHF                                ; 00516ba6
    JC 0x00516942                       ; 00516ba7
        ;   XREF to: 00516942 (CONDITIONAL_JUMP)  ; LAB_00516942
    MOV dword ptr [0x01d2c0c4],EBP      ; 00516bad | DAT_01d2c0c4
        ;   Label: LAB_00516bad
    ADD ESP,0x24                        ; 00516bb3
    POP EBP                             ; 00516bb6
    POP EDI                             ; 00516bb7
    POP ESI                             ; 00516bb8
    POP EBX                             ; 00516bb9
    RET                                 ; 00516bba
    INC ESI                             ; 00516bbb
        ;   Label: LAB_00516bbb
    ADD EAX,0x50                        ; 00516bbc
    CMP ESI,EBP                         ; 00516bbf
    JL 0x005169a4                       ; 00516bc1
        ;   XREF to: 005169a4 (CONDITIONAL_JUMP)  ; LAB_005169a4
    XOR EAX,EAX                         ; 00516bc7
        ;   Label: LAB_00516bc7
    JMP 0x005169b4                      ; 00516bc9
        ;   XREF to: 005169b4 (UNCONDITIONAL_JUMP)  ; LAB_005169b4
    INC EDX                             ; 00516bce
        ;   Label: LAB_00516bce
    ADD EAX,0x50                        ; 00516bcf
    CMP EDX,EBP                         ; 00516bd2
    JL 0x005169d7                       ; 00516bd4
        ;   XREF to: 005169d7 (CONDITIONAL_JUMP)  ; LAB_005169d7
    XOR EAX,EAX                         ; 00516bda
        ;   Label: LAB_00516bda
    JMP 0x005169e7                      ; 00516bdc
        ;   XREF to: 005169e7 (UNCONDITIONAL_JUMP)  ; LAB_005169e7
    INC EDX                             ; 00516be1
        ;   Label: LAB_00516be1
    ADD EAX,0x50                        ; 00516be2
    CMP EDX,EBP                         ; 00516be5
    JL 0x00516a24                       ; 00516be7
        ;   XREF to: 00516a24 (CONDITIONAL_JUMP)  ; LAB_00516a24
    XOR EAX,EAX                         ; 00516bed
        ;   Label: LAB_00516bed
    JMP 0x00516a34                      ; 00516bef
        ;   XREF to: 00516a34 (UNCONDITIONAL_JUMP)  ; LAB_00516a34
    INC EDX                             ; 00516bf4
        ;   Label: LAB_00516bf4
    ADD EAX,0x50                        ; 00516bf5
    CMP EDX,EBP                         ; 00516bf8
    JL 0x00516a68                       ; 00516bfa
        ;   XREF to: 00516a68 (CONDITIONAL_JUMP)  ; LAB_00516a68
    XOR EAX,EAX                         ; 00516c00
        ;   Label: LAB_00516c00
    JMP 0x00516a78                      ; 00516c02
        ;   XREF to: 00516a78 (UNCONDITIONAL_JUMP)  ; LAB_00516a78
    MOV EDI,dword ptr [ESP + 0x10]      ; 00516c07
        ;   Label: LAB_00516c07
    MOV ESI,dword ptr [ESP + 0x14]      ; 00516c0b
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516c0f
    CALL engine_special.cpp_FUN_0057f473 ; 00516c13
        ;   XREF to: 0057f473 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0057f473()
    JMP 0x00516ab7                      ; 00516c18
        ;   XREF to: 00516ab7 (UNCONDITIONAL_JUMP)  ; LAB_00516ab7
    MOV EAX,[0x0061b4a0]                ; 00516c1d | DAT_0061b4a0
        ;   Label: LAB_00516c1d
    MOV dword ptr [0x01d2c0c4],EBP      ; 00516c22 | DAT_01d2c0c4
    CMP EAX,0x20                        ; 00516c28
    JNZ 0x00516c43                      ; 00516c2b
        ;   XREF to: 00516c43 (CONDITIONAL_JUMP)  ; LAB_00516c43
    MOV EDI,dword ptr [ESP + 0x10]      ; 00516c2d
    MOV ESI,dword ptr [ESP + 0x14]      ; 00516c31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516c35
    CALL engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03 ; 00516c39
        ;   XREF to: 0057fb03 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x00516ab7                      ; 00516c3e
        ;   XREF to: 00516ab7 (UNCONDITIONAL_JUMP)  ; LAB_00516ab7
    MOV EDI,dword ptr [ESP + 0x10]      ; 00516c43
        ;   Label: LAB_00516c43
    MOV ESI,dword ptr [ESP + 0x14]      ; 00516c47
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516c4b
    CALL engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39 ; 00516c4f
        ;   XREF to: 0057fd39 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x00516ab7                      ; 00516c54
        ;   XREF to: 00516ab7 (UNCONDITIONAL_JUMP)  ; LAB_00516ab7

