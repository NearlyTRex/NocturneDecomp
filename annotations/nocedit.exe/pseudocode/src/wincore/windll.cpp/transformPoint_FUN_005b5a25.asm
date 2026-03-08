; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_transformPoint_FUN_005b5a25(SProjectedVertex *output,CVector3i *input)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   output
; CVector3i *      Stack[0x8]:4   input
;
; XREF[17]:
;   core_chain.cpp_CChain_renderTransparent_FUN_004308f0 at 00430d60
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004544f0 at 0045452f
;   core_fire.cpp_CCrater_render_FUN_004c4620 at 004c4706
;   core_fire.cpp_CLightningBolt_render_FUN_004c5720 at 004c5ae2
;   core_fire.cpp_CPopcorn_render_FUN_004c64c0 at 004c6506
;   core_fire.cpp_CRainDrop_render_FUN_004c6830 at 004c6876
;   core_fire.cpp_CShell_render_FUN_004c6200 at 004c6251
;   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 at 004bf502
;   core_fire.cpp_CSpark_render_FUN_004c0420 at 004c0474
;   core_fire.cpp_transformWorldToScreen_FUN_004c9400 at 004c9434
;   ... and 7 more
;
; Referenced Globals:
;   int g_TempX = 0x0
;   int g_TempY = 0x0
;   int g_TempZ = 0x0
;   int g_TempTransformedX = 0x0
;   int g_TempTransformedY = 0x0
;   int g_TempTransformedZ = 0x0
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   int g_MMXSupported
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;   CMatrix3x3i g_TransformMatrix
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x02d05248],0xffffffff ; 005b5a25 | g_MMXSupported
        ;   Label: wincore_windll.cpp_transformPoint_FUN_005b5a25
    JZ 0x005b5b73                       ; 005b5a2f
        ;   XREF to: 005b5b73 (CONDITIONAL_JUMP)  ; LAB_005b5b73
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b5a35
    MOV EAX,dword ptr [EBX]             ; 005b5a39
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b5a3b
    MOV EDX,dword ptr [EBX + 0x8]       ; 005b5a3e
    SUB EAX,dword ptr [0x02d052c4]      ; 005b5a41 | g_CameraOriginX
    SUB ECX,dword ptr [0x02d052c8]      ; 005b5a47 | g_CameraOriginY
    SUB EDX,dword ptr [0x02d052cc]      ; 005b5a4d | g_CameraOriginZ
    MOVD MM0,EAX                        ; 005b5a53
    MOVD MM1,ECX                        ; 005b5a56
    MOVD MM2,EDX                        ; 005b5a59
    IMUL dword ptr [0x02d052e8]         ; 005b5a5c | g_TransformMatrix
    MOV EBX,EAX                         ; 005b5a62
    MOV ECX,EDX                         ; 005b5a64
    MOVD EAX,MM1                        ; 005b5a66
    IMUL dword ptr [0x02d052f4]         ; 005b5a69 | g_TransformMatrix[1][0]
    ADD EBX,EAX                         ; 005b5a6f
    ADC ECX,EDX                         ; 005b5a71
    MOVD EAX,MM2                        ; 005b5a73
    IMUL dword ptr [0x02d05300]         ; 005b5a76 | g_TransformMatrix[2][0]
    ADD EAX,EBX                         ; 005b5a7c
    ADC EDX,ECX                         ; 005b5a7e
    SHRD EAX,EDX,0x10                   ; 005b5a80
    MOVD MM4,EAX                        ; 005b5a84
    MOVD EAX,MM0                        ; 005b5a87
    IMUL dword ptr [0x02d052ec]         ; 005b5a8a | g_TransformMatrix[0][1]
    MOV EBX,EAX                         ; 005b5a90
    MOV ECX,EDX                         ; 005b5a92
    MOVD EAX,MM1                        ; 005b5a94
    IMUL dword ptr [0x02d052f8]         ; 005b5a97 | g_TransformMatrix[1][1]
    ADD EBX,EAX                         ; 005b5a9d
    ADC ECX,EDX                         ; 005b5a9f
    MOVD EAX,MM2                        ; 005b5aa1
    IMUL dword ptr [0x02d05304]         ; 005b5aa4 | g_TransformMatrix[2][1]
    ADD EAX,EBX                         ; 005b5aaa
    ADC EDX,ECX                         ; 005b5aac
    SHRD EAX,EDX,0x10                   ; 005b5aae
    MOVD MM5,EAX                        ; 005b5ab2
    MOVD EAX,MM0                        ; 005b5ab5
    IMUL dword ptr [0x02d052f0]         ; 005b5ab8 | g_TransformMatrix[0][2]
    MOV EBX,EAX                         ; 005b5abe
    MOV ECX,EDX                         ; 005b5ac0
    MOVD EAX,MM1                        ; 005b5ac2
    IMUL dword ptr [0x02d052fc]         ; 005b5ac5 | g_TransformMatrix[1][2]
    ADD EBX,EAX                         ; 005b5acb
    ADC ECX,EDX                         ; 005b5acd
    MOVD EAX,MM2                        ; 005b5acf
    IMUL dword ptr [0x02d05308]         ; 005b5ad2 | g_TransformMatrix[2][2]
    ADD EAX,EBX                         ; 005b5ad8
    ADC EDX,ECX                         ; 005b5ada
    SHRD EAX,EDX,0x10                   ; 005b5adc
    MOVD MM6,EAX                        ; 005b5ae0
    NEG EAX                             ; 005b5ae3
    MOV EDX,EAX                         ; 005b5ae5
    XOR EAX,EAX                         ; 005b5ae7
    MOVD EBX,MM4                        ; 005b5ae9
    MOVD ECX,MM6                        ; 005b5aec
    CMP EBX,ECX                         ; 005b5aef
    JLE 0x005b5af8                      ; 005b5af1
        ;   XREF to: 005b5af8 (CONDITIONAL_JUMP)  ; LAB_005b5af8
    OR EAX,0x80000001                   ; 005b5af3
    CMP EBX,EDX                         ; 005b5af8
        ;   Label: LAB_005b5af8
    JGE 0x005b5b01                      ; 005b5afa
        ;   XREF to: 005b5b01 (CONDITIONAL_JUMP)  ; LAB_005b5b01
    OR EAX,0x80000002                   ; 005b5afc
    MOVD EBX,MM5                        ; 005b5b01
        ;   Label: LAB_005b5b01
    CMP EBX,ECX                         ; 005b5b04
    JLE 0x005b5b0d                      ; 005b5b06
        ;   XREF to: 005b5b0d (CONDITIONAL_JUMP)  ; LAB_005b5b0d
    OR EAX,0x80000004                   ; 005b5b08
    CMP EBX,EDX                         ; 005b5b0d
        ;   Label: LAB_005b5b0d
    JGE 0x005b5b16                      ; 005b5b0f
        ;   XREF to: 005b5b16 (CONDITIONAL_JUMP)  ; LAB_005b5b16
    OR EAX,0x80000008                   ; 005b5b11
    CMP ECX,0x0                         ; 005b5b16
        ;   Label: LAB_005b5b16
    JG 0x005b5b20                       ; 005b5b19
        ;   XREF to: 005b5b20 (CONDITIONAL_JUMP)  ; LAB_005b5b20
    OR EAX,0x80000010                   ; 005b5b1b
    MOV EBX,dword ptr [ESP + 0x4]       ; 005b5b20
        ;   Label: LAB_005b5b20
    MOVD dword ptr [EBX],MM4            ; 005b5b24
    MOVD dword ptr [EBX + 0x4],MM5      ; 005b5b27
    MOVD dword ptr [EBX + 0x8],MM6      ; 005b5b2b
    TEST EAX,0xffffffff                 ; 005b5b2f
    JNZ 0x005b5b6d                      ; 005b5b34
        ;   XREF to: 005b5b6d (CONDITIONAL_JUMP)  ; LAB_005b5b6d
    MOV EAX,0x7fffffff                  ; 005b5b36
    XOR EDX,EDX                         ; 005b5b3b
    IDIV ECX                            ; 005b5b3d
    MOV dword ptr [EBX + 0xc],EAX       ; 005b5b3f
    MOVD EAX,MM4                        ; 005b5b42
    IMUL dword ptr [0x02d02548]         ; 005b5b45 | g_ViewportCenterXFixed
    IDIV ECX                            ; 005b5b4b
    ADD EAX,dword ptr [0x02d02550]      ; 005b5b4d | g_ViewportRightFixed
    MOV dword ptr [EBX + 0x10],EAX      ; 005b5b53
    MOVD EAX,MM5                        ; 005b5b56
    IMUL dword ptr [0x02d0254c]         ; 005b5b59 | g_ViewportCenterYFixed
    IDIV ECX                            ; 005b5b5f
    ADD EAX,dword ptr [0x02d02554]      ; 005b5b61 | g_ViewportBottomFixed
    MOV dword ptr [EBX + 0x14],EAX      ; 005b5b67
    EMMS                                ; 005b5b6a
    RET                                 ; 005b5b6c
    MOV dword ptr [EBX + 0x10],EAX      ; 005b5b6d
        ;   Label: LAB_005b5b6d
    EMMS                                ; 005b5b70
    RET                                 ; 005b5b72
    PUSH ESI                            ; 005b5b73
        ;   Label: LAB_005b5b73
    PUSH EDI                            ; 005b5b74
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b5b75
    MOV EDI,dword ptr [ESP + 0xc]       ; 005b5b79
    MOV EAX,dword ptr [ESI]             ; 005b5b7d
    MOV EBX,dword ptr [ESI + 0x4]       ; 005b5b7f
    MOV ECX,dword ptr [ESI + 0x8]       ; 005b5b82
    SUB EAX,dword ptr [0x02d052c4]      ; 005b5b85 | g_CameraOriginX
    SUB EBX,dword ptr [0x02d052c8]      ; 005b5b8b | g_CameraOriginY
    SUB ECX,dword ptr [0x02d052cc]      ; 005b5b91 | g_CameraOriginZ
    MOV [0x00682668],EAX                ; 005b5b97 | g_TempX
    MOV dword ptr [0x0068266c],EBX      ; 005b5b9c | g_TempY
    MOV dword ptr [0x00682670],ECX      ; 005b5ba2 | g_TempZ
    IMUL dword ptr [0x02d052e8]         ; 005b5ba8 | g_TransformMatrix
    MOV EBX,EAX                         ; 005b5bae
    MOV ECX,EDX                         ; 005b5bb0
    MOV EAX,[0x0068266c]                ; 005b5bb2 | g_TempY
    IMUL dword ptr [0x02d052f4]         ; 005b5bb7 | g_TransformMatrix[1][0]
    ADD EBX,EAX                         ; 005b5bbd
    ADC ECX,EDX                         ; 005b5bbf
    MOV EAX,[0x00682670]                ; 005b5bc1 | g_TempZ
    IMUL dword ptr [0x02d05300]         ; 005b5bc6 | g_TransformMatrix[2][0]
    ADD EAX,EBX                         ; 005b5bcc
    ADC EDX,ECX                         ; 005b5bce
    SHRD EAX,EDX,0x10                   ; 005b5bd0
    MOV [0x00682678],EAX                ; 005b5bd4 | g_TempTransformedX
    MOV EAX,[0x00682668]                ; 005b5bd9 | g_TempX
    IMUL dword ptr [0x02d052ec]         ; 005b5bde | g_TransformMatrix[0][1]
    MOV EBX,EAX                         ; 005b5be4
    MOV ECX,EDX                         ; 005b5be6
    MOV EAX,[0x0068266c]                ; 005b5be8 | g_TempY
    IMUL dword ptr [0x02d052f8]         ; 005b5bed | g_TransformMatrix[1][1]
    ADD EBX,EAX                         ; 005b5bf3
    ADC ECX,EDX                         ; 005b5bf5
    MOV EAX,[0x00682670]                ; 005b5bf7 | g_TempZ
    IMUL dword ptr [0x02d05304]         ; 005b5bfc | g_TransformMatrix[2][1]
    ADD EAX,EBX                         ; 005b5c02
    ADC EDX,ECX                         ; 005b5c04
    SHRD EAX,EDX,0x10                   ; 005b5c06
    MOV [0x0068267c],EAX                ; 005b5c0a | g_TempTransformedY
    MOV EAX,[0x00682668]                ; 005b5c0f | g_TempX
    IMUL dword ptr [0x02d052f0]         ; 005b5c14 | g_TransformMatrix[0][2]
    MOV EBX,EAX                         ; 005b5c1a
    MOV ECX,EDX                         ; 005b5c1c
    MOV EAX,[0x0068266c]                ; 005b5c1e | g_TempY
    IMUL dword ptr [0x02d052fc]         ; 005b5c23 | g_TransformMatrix[1][2]
    ADD EBX,EAX                         ; 005b5c29
    ADC ECX,EDX                         ; 005b5c2b
    MOV EAX,[0x00682670]                ; 005b5c2d | g_TempZ
    IMUL dword ptr [0x02d05308]         ; 005b5c32 | g_TransformMatrix[2][2]
    ADD EAX,EBX                         ; 005b5c38
    ADC EDX,ECX                         ; 005b5c3a
    SHRD EAX,EDX,0x10                   ; 005b5c3c
    MOV [0x00682680],EAX                ; 005b5c40 | g_TempTransformedZ
    NEG EAX                             ; 005b5c45
    MOV EDX,EAX                         ; 005b5c47
    XOR EAX,EAX                         ; 005b5c49
    MOV EBX,dword ptr [0x00682678]      ; 005b5c4b | g_TempTransformedX
    MOV ECX,dword ptr [0x00682680]      ; 005b5c51 | g_TempTransformedZ
    CMP EBX,ECX                         ; 005b5c57
    JLE 0x005b5c60                      ; 005b5c59
        ;   XREF to: 005b5c60 (CONDITIONAL_JUMP)  ; LAB_005b5c60
    OR EAX,0x80000001                   ; 005b5c5b
    CMP EBX,EDX                         ; 005b5c60
        ;   Label: LAB_005b5c60
    JGE 0x005b5c69                      ; 005b5c62
        ;   XREF to: 005b5c69 (CONDITIONAL_JUMP)  ; LAB_005b5c69
    OR EAX,0x80000002                   ; 005b5c64
    MOV EBX,dword ptr [0x0068267c]      ; 005b5c69 | g_TempTransformedY
        ;   Label: LAB_005b5c69
    CMP EBX,ECX                         ; 005b5c6f
    JLE 0x005b5c78                      ; 005b5c71
        ;   XREF to: 005b5c78 (CONDITIONAL_JUMP)  ; LAB_005b5c78
    OR EAX,0x80000004                   ; 005b5c73
    CMP EBX,EDX                         ; 005b5c78
        ;   Label: LAB_005b5c78
    JGE 0x005b5c81                      ; 005b5c7a
        ;   XREF to: 005b5c81 (CONDITIONAL_JUMP)  ; LAB_005b5c81
    OR EAX,0x80000008                   ; 005b5c7c
    CMP ECX,0x0                         ; 005b5c81
        ;   Label: LAB_005b5c81
    JG 0x005b5c8b                       ; 005b5c84
        ;   XREF to: 005b5c8b (CONDITIONAL_JUMP)  ; LAB_005b5c8b
    OR EAX,0x80000010                   ; 005b5c86
    TEST EAX,0xffffffff                 ; 005b5c8b
        ;   Label: LAB_005b5c8b
    JNZ 0x005b5cda                      ; 005b5c90
        ;   XREF to: 005b5cda (CONDITIONAL_JUMP)  ; LAB_005b5cda
    MOV EAX,[0x00682678]                ; 005b5c92 | g_TempTransformedX
    MOV dword ptr [EDI],EAX             ; 005b5c97
    MOV dword ptr [EDI + 0x4],EBX       ; 005b5c99
    MOV dword ptr [EDI + 0x8],ECX       ; 005b5c9c
    MOV EAX,0x7fffffff                  ; 005b5c9f
    XOR EDX,EDX                         ; 005b5ca4
    IDIV ECX                            ; 005b5ca6
    MOV dword ptr [EDI + 0xc],EAX       ; 005b5ca8
    MOV EAX,[0x00682678]                ; 005b5cab | g_TempTransformedX
    IMUL dword ptr [0x02d02548]         ; 005b5cb0 | g_ViewportCenterXFixed
    IDIV ECX                            ; 005b5cb6
    ADD EAX,dword ptr [0x02d02550]      ; 005b5cb8 | g_ViewportRightFixed
    MOV dword ptr [EDI + 0x10],EAX      ; 005b5cbe
    MOV EAX,[0x0068267c]                ; 005b5cc1 | g_TempTransformedY
    IMUL dword ptr [0x02d0254c]         ; 005b5cc6 | g_ViewportCenterYFixed
    IDIV ECX                            ; 005b5ccc
    ADD EAX,dword ptr [0x02d02554]      ; 005b5cce | g_ViewportBottomFixed
    MOV dword ptr [EDI + 0x14],EAX      ; 005b5cd4
    POP EDI                             ; 005b5cd7
    POP ESI                             ; 005b5cd8
    RET                                 ; 005b5cd9
    MOV EDX,dword ptr [0x00682678]      ; 005b5cda | g_TempTransformedX
        ;   Label: LAB_005b5cda
    MOV dword ptr [EDI],EDX             ; 005b5ce0
    MOV dword ptr [EDI + 0x4],EBX       ; 005b5ce2
    MOV dword ptr [EDI + 0x8],ECX       ; 005b5ce5
    MOV dword ptr [EDI + 0x10],EAX      ; 005b5ce8
    POP EDI                             ; 005b5ceb
    POP ESI                             ; 005b5cec
    RET                                 ; 005b5ced

