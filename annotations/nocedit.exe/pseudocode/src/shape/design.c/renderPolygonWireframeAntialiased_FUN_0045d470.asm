; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470(SMRGLHeaderPrimitive *polygon_data,int line_color)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_data
; int              Stack[0x8]:4   line_color
; Local Variables:
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0 at 0045d2ed
;
; Referenced Globals:
;   undefined4 g_AALineVertex1[4]
;   undefined4 g_AALineVertex1[4]+3
;   undefined4 g_AALineVertex1[5]
;   undefined4 g_AALineVertex2[4]
;   undefined4 g_AALineVertex2[4]+3
;   undefined4 g_AALineVertex2[5]
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAA_FUN_00433c90
;   engine_3d.c_isVisiblePlane_FUN_00403950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d470
        ;   Label: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
    PUSH ESI                            ; 0045d471
    PUSH EDI                            ; 0045d472
    PUSH EBP                            ; 0045d473
    MOV EBP,ESP                         ; 0045d474
    SUB ESP,0x8                         ; 0045d476
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d47c
    ADD EAX,0x18                        ; 0045d47f
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d482
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d485
    ADD EAX,0x8                         ; 0045d488
    PUSH EAX                            ; 0045d48b
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0045d48c
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045d491
    TEST EAX,EAX                        ; 0045d494
    JZ 0x0045d5c1                       ; 0045d496
        ;   XREF to: 0045d5c1 (CONDITIONAL_JUMP)  ; LAB_0045d5c1
    MOV dword ptr [EBP + -0x8],0x0      ; 0045d49c
    JMP 0x0045d4ab                      ; 0045d4a3
        ;   XREF to: 0045d4ab (UNCONDITIONAL_JUMP)  ; LAB_0045d4ab
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d4a5
        ;   Label: LAB_0045d4a5
    INC dword ptr [EBP + -0x8]          ; 0045d4a8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d4ab
        ;   Label: LAB_0045d4ab
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045d4ae
    DEC EAX                             ; 0045d4b1
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045d4b2
    JLE 0x0045d543                      ; 0045d4b5
        ;   XREF to: 0045d543 (CONDITIONAL_JUMP)  ; LAB_0045d543
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d4bb
    SHL EAX,0x2                         ; 0045d4be
    ADD EAX,dword ptr [EBP + -0x4]      ; 0045d4c1
    IMUL ESI,dword ptr [EAX],0x30       ; 0045d4c4
    JMP 0x03fc2a24                      ; 0045d4c7
        ;   XREF to: 03fc2a24 (UNCONDITIONAL_JUMP)  ; LAB_03fc2a24
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d4d9
        ;   Label: LAB_0045d4d9
    SHL EAX,0x2                         ; 0045d4dc
    ADD EAX,dword ptr [EBP + -0x4]      ; 0045d4df
    IMUL ESI,dword ptr [EAX + 0x4],0x30 ; 0045d4e2
    JMP 0x03fc2a87                      ; 0045d4e6
        ;   XREF to: 03fc2a87 (UNCONDITIONAL_JUMP)  ; LAB_03fc2a87
    TEST byte ptr [0x0069ffc7],0x80     ; 0045d4f8 | g_AALineVertex1[4]+3
        ;   Label: LAB_0045d4f8
    JZ 0x0045d503                       ; 0045d4ff
        ;   XREF to: 0045d503 (CONDITIONAL_JUMP)  ; LAB_0045d503
    JMP 0x0045d53e                      ; 0045d501
        ;   XREF to: 0045d53e (UNCONDITIONAL_JUMP)  ; LAB_0045d53e
    TEST byte ptr [0x0069fff7],0x80     ; 0045d503 | g_AALineVertex2[4]+3
        ;   Label: LAB_0045d503
    JZ 0x0045d50e                       ; 0045d50a
        ;   XREF to: 0045d50e (CONDITIONAL_JUMP)  ; LAB_0045d50e
    JMP 0x0045d53e                      ; 0045d50c
        ;   XREF to: 0045d53e (UNCONDITIONAL_JUMP)  ; LAB_0045d53e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045d50e
        ;   Label: LAB_0045d50e
    PUSH EAX                            ; 0045d511
    MOV EAX,[0x0069fff8]                ; 0045d512 | g_AALineVertex2[5]
    SAR EAX,0x10                        ; 0045d517
    PUSH EAX                            ; 0045d51a
    MOV EAX,[0x0069fff4]                ; 0045d51b | g_AALineVertex2[4]
    SAR EAX,0x10                        ; 0045d520
    PUSH EAX                            ; 0045d523
    MOV EAX,[0x0069ffc8]                ; 0045d524 | g_AALineVertex1[5]
    SAR EAX,0x10                        ; 0045d529
    PUSH EAX                            ; 0045d52c
    MOV EAX,[0x0069ffc4]                ; 0045d52d | g_AALineVertex1[4]
    SAR EAX,0x10                        ; 0045d532
    PUSH EAX                            ; 0045d535
    CALL cockpit_ckptutil.c_drawLineAA_FUN_00433c90 ; 0045d536
        ;   XREF to: 00433c90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x14                        ; 0045d53b
    JMP 0x0045d4a5                      ; 0045d53e
        ;   XREF to: 0045d4a5 (UNCONDITIONAL_JUMP)  ; LAB_0045d4a5
        ;   Label: LAB_0045d53e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d543
        ;   Label: LAB_0045d543
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045d546
    SHL EAX,0x2                         ; 0045d549
    ADD EAX,dword ptr [EBP + -0x4]      ; 0045d54c
    IMUL ESI,dword ptr [EAX + -0x4],0x30 ; 0045d54f
    JMP 0x03fc2aea                      ; 0045d553
        ;   XREF to: 03fc2aea (UNCONDITIONAL_JUMP)  ; LAB_03fc2aea
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045d565
        ;   Label: LAB_0045d565
    IMUL ESI,dword ptr [EAX],0x30       ; 0045d568
    JMP 0x03fc2b4d                      ; 0045d56b
        ;   XREF to: 03fc2b4d (UNCONDITIONAL_JUMP)  ; LAB_03fc2b4d
    TEST byte ptr [0x0069ffc7],0x80     ; 0045d57d | g_AALineVertex1[4]+3
        ;   Label: LAB_0045d57d
    JNZ 0x0045d58f                      ; 0045d584
        ;   XREF to: 0045d58f (CONDITIONAL_JUMP)  ; LAB_0045d58f
    TEST byte ptr [0x0069fff7],0x80     ; 0045d586 | g_AALineVertex2[4]+3
    JZ 0x0045d591                       ; 0045d58d
        ;   XREF to: 0045d591 (CONDITIONAL_JUMP)  ; LAB_0045d591
    JMP 0x0045d5c1                      ; 0045d58f
        ;   XREF to: 0045d5c1 (UNCONDITIONAL_JUMP)  ; LAB_0045d5c1
        ;   Label: LAB_0045d58f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045d591
        ;   Label: LAB_0045d591
    PUSH EAX                            ; 0045d594
    MOV EAX,[0x0069fff8]                ; 0045d595 | g_AALineVertex2[5]
    SAR EAX,0x10                        ; 0045d59a
    PUSH EAX                            ; 0045d59d
    MOV EAX,[0x0069fff4]                ; 0045d59e | g_AALineVertex2[4]
    SAR EAX,0x10                        ; 0045d5a3
    PUSH EAX                            ; 0045d5a6
    MOV EAX,[0x0069ffc8]                ; 0045d5a7 | g_AALineVertex1[5]
    SAR EAX,0x10                        ; 0045d5ac
    PUSH EAX                            ; 0045d5af
    MOV EAX,[0x0069ffc4]                ; 0045d5b0 | g_AALineVertex1[4]
    SAR EAX,0x10                        ; 0045d5b5
    PUSH EAX                            ; 0045d5b8
    CALL cockpit_ckptutil.c_drawLineAA_FUN_00433c90 ; 0045d5b9
        ;   XREF to: 00433c90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x14                        ; 0045d5be
    MOV ESP,EBP                         ; 0045d5c1
        ;   Label: LAB_0045d5c1
    POP EBP                             ; 0045d5c3
    POP EDI                             ; 0045d5c4
    POP ESI                             ; 0045d5c5
    POP EBX                             ; 0045d5c6
    RET                                 ; 0045d5c7
    MOV ECX,0xc                         ; 03fc2a24
        ;   Label: LAB_03fc2a24
    MOV EDI,0x69ffb4                    ; 03fc2a29
    LEA ESI,[ESI + 0x688014]            ; 03fc2a2e
    MOV ECX,dword ptr [ESI]             ; 03fc2a34
    MOV dword ptr [EDI],ECX             ; 03fc2a36
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2a38
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2a3b
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2a3e
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2a41
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2a44
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2a47
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2a4a
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2a4d
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc2a50
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2a53
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2a56
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2a59
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2a5c
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc2a5f
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc2a62
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2a65
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2a68
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2a6b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc2a6e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc2a71
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2a74
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2a77
    ADD ESI,0x30                        ; 03fc2a7a
    ADD EDI,0x30                        ; 03fc2a7d
    XOR ECX,ECX                         ; 03fc2a80
    JMP 0x0045d4d9                      ; 03fc2a82
        ;   XREF to: 0045d4d9 (UNCONDITIONAL_JUMP)  ; LAB_0045d4d9
    MOV ECX,0xc                         ; 03fc2a87
        ;   Label: LAB_03fc2a87
    MOV EDI,0x69ffe4                    ; 03fc2a8c
    LEA ESI,[ESI + 0x688014]            ; 03fc2a91
    MOV ECX,dword ptr [ESI]             ; 03fc2a97
    MOV dword ptr [EDI],ECX             ; 03fc2a99
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2a9b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2a9e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2aa1
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2aa4
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2aa7
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2aaa
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2aad
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2ab0
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc2ab3
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2ab6
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2ab9
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2abc
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2abf
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc2ac2
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc2ac5
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2ac8
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2acb
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2ace
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc2ad1
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc2ad4
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2ad7
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2ada
    ADD ESI,0x30                        ; 03fc2add
    ADD EDI,0x30                        ; 03fc2ae0
    XOR ECX,ECX                         ; 03fc2ae3
    JMP 0x0045d4f8                      ; 03fc2ae5
        ;   XREF to: 0045d4f8 (UNCONDITIONAL_JUMP)  ; LAB_0045d4f8
    MOV ECX,0xc                         ; 03fc2aea
        ;   Label: LAB_03fc2aea
    MOV EDI,0x69ffb4                    ; 03fc2aef
    LEA ESI,[ESI + 0x688014]            ; 03fc2af4
    MOV ECX,dword ptr [ESI]             ; 03fc2afa
    MOV dword ptr [EDI],ECX             ; 03fc2afc
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2afe
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2b01
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2b04
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2b07
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2b0a
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2b0d
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2b10
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2b13
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc2b16
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2b19
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2b1c
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2b1f
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2b22
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc2b25
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc2b28
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2b2b
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2b2e
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2b31
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc2b34
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc2b37
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2b3a
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2b3d
    ADD ESI,0x30                        ; 03fc2b40
    ADD EDI,0x30                        ; 03fc2b43
    XOR ECX,ECX                         ; 03fc2b46
    JMP 0x0045d565                      ; 03fc2b48
        ;   XREF to: 0045d565 (UNCONDITIONAL_JUMP)  ; LAB_0045d565
    MOV ECX,0xc                         ; 03fc2b4d
        ;   Label: LAB_03fc2b4d
    MOV EDI,0x69ffe4                    ; 03fc2b52
    LEA ESI,[ESI + 0x688014]            ; 03fc2b57
    MOV ECX,dword ptr [ESI]             ; 03fc2b5d
    MOV dword ptr [EDI],ECX             ; 03fc2b5f
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2b61
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2b64
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2b67
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2b6a
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2b6d
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2b70
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2b73
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2b76
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc2b79
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2b7c
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2b7f
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2b82
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2b85
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc2b88
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc2b8b
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2b8e
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2b91
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2b94
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc2b97
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc2b9a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2b9d
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2ba0
    ADD ESI,0x30                        ; 03fc2ba3
    ADD EDI,0x30                        ; 03fc2ba6
    XOR ECX,ECX                         ; 03fc2ba9
    JMP 0x0045d57d                      ; 03fc2bab
        ;   XREF to: 0045d57d (UNCONDITIONAL_JUMP)  ; LAB_0045d57d

