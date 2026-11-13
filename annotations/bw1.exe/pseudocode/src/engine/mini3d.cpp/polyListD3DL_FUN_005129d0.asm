; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_005129d0(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; Referenced Globals:
;   undefined4 DAT_005e8da3
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d224b4
;   undefined4 DAT_01d227e0
;   undefined4 DAT_01d25f14
;   undefined4 DAT_01d25f18
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c83464
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_mini3d.cpp_allocVertexList_FUN_00512670
;   engine_mini3d.cpp_computeVertexFog_FUN_005140c0
;   engine_mini3d.cpp_drawTransformedList_FUN_00515ae0
;   engine_mini3d.cpp_polyListSurface_FUN_00516cc0
;   engine_mini3d.cpp_transformVertex_FUN_00513260
;   engine_mini3d.cpp_updateRenderState_FUN_00516c60
;   engine_mini3d.cpp_updateTransform_FUN_005124f0
;   engine_mini3d.cpp_userClipPolyList_FUN_00517660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005129d0
        ;   Label: engine_mini3d.cpp_polyListD3DL_FUN_005129d0
    PUSH ESI                            ; 005129d1
    PUSH EDI                            ; 005129d2
    PUSH EBP                            ; 005129d3
    SUB ESP,0x14                        ; 005129d4
    MOV ESI,dword ptr [ESP + 0x28]      ; 005129d7
    MOV EAX,dword ptr [ESP + 0x34]      ; 005129db
    MOV EDX,dword ptr [0x01e7dac8]      ; 005129df | DAT_01e7dac8
    MOV ECX,dword ptr [0x01d224b4]      ; 005129e5 | DAT_01d224b4
    ADD EDX,EAX                         ; 005129eb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005129ed
    MOV EBX,dword ptr [0x01d25f14]      ; 005129f1 | DAT_01d25f14
    ADD ECX,EAX                         ; 005129f7
    MOV dword ptr [0x01e7dac8],EDX      ; 005129f9 | DAT_01e7dac8
    MOV dword ptr [0x01d224b4],ECX      ; 005129ff | DAT_01d224b4
    TEST EBX,EBX                        ; 00512a05
    JNZ 0x00512b6f                      ; 00512a07
        ;   XREF to: 00512b6f (CONDITIONAL_JUMP)  ; LAB_00512b6f
    CALL engine_mini3d.cpp_updateTransform_FUN_005124f0 ; 00512a0d
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_005124f0()
    CALL engine_mini3d.cpp_updateRenderState_FUN_00516c60 ; 00512a12
        ;   XREF to: 00516c60 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_00516c60()
    CMP dword ptr [0x02c83464],0x0      ; 00512a17 | DAT_02c83464
    JZ 0x00512a2d                       ; 00512a1e
        ;   XREF to: 00512a2d (CONDITIONAL_JUMP)  ; LAB_00512a2d
    CMP dword ptr [0x01c50948],0x0      ; 00512a20 | DAT_01c50948
    JNZ 0x00512b82                      ; 00512a27
        ;   XREF to: 00512b82 (CONDITIONAL_JUMP)  ; LAB_00512b82
    CALL engine_mini3d.cpp_allocVertexList_FUN_00512670 ; 00512a2d
        ;   XREF to: 00512670 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_allocVertexList_FUN_00512670()
        ;   Label: LAB_00512a2d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00512a32
    CMP EAX,0x2710                      ; 00512a36
    JLE 0x00512a61                      ; 00512a3b
        ;   XREF to: 00512a61 (CONDITIONAL_JUMP)  ; LAB_00512a61
    PUSH EAX                            ; 00512a3d
    MOV EDX,0x5e8d62                    ; 00512a3e
    MOV ECX,0x75f                       ; 00512a43
    PUSH 0x5e8d77                       ; 00512a48
    MOV dword ptr [0x01d1d400],EDX      ; 00512a4d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00512a53 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00512a59
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00512a5e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00512a61
        ;   Label: LAB_00512a61
    MOV EBX,dword ptr [0x01d227e0]      ; 00512a65 | DAT_01d227e0
    XOR EBP,EBP                         ; 00512a6b
    TEST EDI,EDI                        ; 00512a6d
    JLE 0x00512b40                      ; 00512a6f
        ;   XREF to: 00512b40 (CONDITIONAL_JUMP)  ; LAB_00512b40
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00512a75
    SHL EAX,0x6                         ; 00512a79
    XOR EDI,EDI                         ; 00512a7c
    MOV dword ptr [ESP + 0x10],EAX      ; 00512a7e
    PUSH EBX                            ; 00512a82
        ;   Label: LAB_00512a82
    PUSH ESI                            ; 00512a83
    CALL engine_mini3d.cpp_transformVertex_FUN_00513260 ; 00512a84
        ;   XREF to: 00513260 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_transformVertex_FUN_00513260(CVector3f * point, float * out)
    MOV EAX,dword ptr [ESI + 0x10]      ; 00512a89
    ADD ESP,0x8                         ; 00512a8c
    MOV EDX,EAX                         ; 00512a8f
    XOR ECX,ECX                         ; 00512a91
    AND EDX,0xff                        ; 00512a93
    MOV dword ptr [ESP + 0x4],ECX       ; 00512a99
    MOV dword ptr [ESP],EDX             ; 00512a9d
    MOV EDX,EAX                         ; 00512aa0
    FILD qword ptr [ESP]                ; 00512aa2
    SHR EDX,0x8                         ; 00512aa5
    FMUL float ptr [0x005e8da3]         ; 00512aa8 | DAT_005e8da3
    AND EDX,0xff                        ; 00512aae
    MOV dword ptr [ESP + 0x4],ECX       ; 00512ab4
    MOV dword ptr [ESP],EDX             ; 00512ab8
    FILD qword ptr [ESP]                ; 00512abb
    FMUL float ptr [0x005e8da3]         ; 00512abe | DAT_005e8da3
    MOV dword ptr [ESP + 0x4],ECX       ; 00512ac4
    MOV EDX,EAX                         ; 00512ac8
    MOV dword ptr [ESP + 0xc],ECX       ; 00512aca
    SHR EDX,0x10                        ; 00512ace
    SHR EAX,0x18                        ; 00512ad1
    AND EDX,0xff                        ; 00512ad4
    AND EAX,0xff                        ; 00512ada
    MOV dword ptr [ESP],EDX             ; 00512adf
    MOV dword ptr [ESP + 0x8],EAX       ; 00512ae2
    FILD qword ptr [ESP]                ; 00512ae6
    FMUL float ptr [0x005e8da3]         ; 00512ae9 | DAT_005e8da3
    FILD qword ptr [ESP + 0x8]          ; 00512aef
    FMUL float ptr [0x005e8da3]         ; 00512af3 | DAT_005e8da3
    ADD EDI,0x40                        ; 00512af9
    ADD ESI,0x20                        ; 00512afc
    PUSH EBX                            ; 00512aff
    FXCH ST3                            ; 00512b00
    FSTP float ptr [EBX + 0x24]         ; 00512b02
    FXCH                                ; 00512b05
    FSTP float ptr [EBX + 0x28]         ; 00512b07
    FSTP float ptr [EBX + 0x2c]         ; 00512b0a
    FSTP float ptr [EBX + 0x30]         ; 00512b0d
    MOV EAX,dword ptr [ESI + -0x8]      ; 00512b10
    MOV dword ptr [EBX + 0x1c],EAX      ; 00512b13
    MOV EAX,dword ptr [ESI + -0x4]      ; 00512b16
    MOV dword ptr [EBX + 0x20],EAX      ; 00512b19
    CALL engine_mini3d.cpp_computeVertexFog_FUN_005140c0 ; 00512b1c
        ;   XREF to: 005140c0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_computeVertexFog_FUN_005140c0(float * vertex)
    MOV EAX,[0x01d227e0]                ; 00512b21 | DAT_01d227e0
    ADD EBX,0x40                        ; 00512b26
    ADD ESP,0x4                         ; 00512b29
    MOV ECX,dword ptr [EDI + EAX*0x1 + -0x30] ; 00512b2c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00512b30
    OR EBP,ECX                          ; 00512b34
    CMP EDI,EAX                         ; 00512b36
    JL 0x00512a82                       ; 00512b38
        ;   XREF to: 00512a82 (CONDITIONAL_JUMP)  ; LAB_00512a82
    MOV EAX,EAX                         ; 00512b3e
    CMP dword ptr [0x01d25f18],0x0      ; 00512b40 | DAT_01d25f18
        ;   Label: LAB_00512b40
    JZ 0x00512ba4                       ; 00512b47
        ;   XREF to: 00512ba4 (CONDITIONAL_JUMP)  ; LAB_00512ba4
    MOV EBP,dword ptr [ESP + 0x34]      ; 00512b49
    PUSH EBP                            ; 00512b4d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00512b4e
    PUSH EAX                            ; 00512b52
    MOV EDX,dword ptr [ESP + 0x34]      ; 00512b53
    PUSH EDX                            ; 00512b57
    MOV ECX,dword ptr [0x01d227e0]      ; 00512b58 | DAT_01d227e0
    PUSH ECX                            ; 00512b5e
    CALL engine_mini3d.cpp_userClipPolyList_FUN_00517660 ; 00512b5f
        ;   XREF to: 00517660 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_userClipPolyList_FUN_00517660(float * vertices, int vertex_count, ushort * indices, int triangle_count)
    ADD ESP,0x10                        ; 00512b64
        ;   Label: LAB_00512b64
    ADD ESP,0x14                        ; 00512b67
        ;   Label: LAB_00512b67
    POP EBP                             ; 00512b6a
    POP EDI                             ; 00512b6b
    POP ESI                             ; 00512b6c
    POP EBX                             ; 00512b6d
    RET                                 ; 00512b6e
    MOV EBX,dword ptr [ESP + 0x34]      ; 00512b6f
        ;   Label: LAB_00512b6f
    PUSH EBX                            ; 00512b73
    MOV EDI,dword ptr [ESP + 0x34]      ; 00512b74
    PUSH EDI                            ; 00512b78
    PUSH EAX                            ; 00512b79
    PUSH ESI                            ; 00512b7a
    CALL engine_mini3d.cpp_polyListSurface_FUN_00516cc0 ; 00512b7b
        ;   XREF to: 00516cc0 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_polyListSurface_FUN_00516cc0(float * vertices, int vertex_count, ushort * indices, int triangle_count)
    JMP 0x00512b64                      ; 00512b80
        ;   XREF to: 00512b64 (UNCONDITIONAL_JUMP)  ; LAB_00512b64
    MOV EBP,dword ptr [0x01c51d14]      ; 00512b82 | DAT_01c51d14
        ;   Label: LAB_00512b82
    PUSH EBP                            ; 00512b88
    MOV EAX,dword ptr [ESP + 0x38]      ; 00512b89
    PUSH EAX                            ; 00512b8d
    MOV EDX,dword ptr [ESP + 0x38]      ; 00512b8e
    PUSH EDX                            ; 00512b92
    MOV ECX,dword ptr [ESP + 0x38]      ; 00512b93
    PUSH ECX                            ; 00512b97
    PUSH ESI                            ; 00512b98
    CALL dword ptr [0x02c83464]         ; 00512b99 | DAT_02c83464
    ADD ESP,0x14                        ; 00512b9f
    JMP 0x00512b67                      ; 00512ba2
        ;   XREF to: 00512b67 (UNCONDITIONAL_JUMP)  ; LAB_00512b67
    PUSH EBP                            ; 00512ba4
        ;   Label: LAB_00512ba4
    MOV ECX,dword ptr [ESP + 0x38]      ; 00512ba5
    PUSH ECX                            ; 00512ba9
    MOV EBX,dword ptr [ESP + 0x38]      ; 00512baa
    PUSH EBX                            ; 00512bae
    MOV ESI,dword ptr [ESP + 0x38]      ; 00512baf
    PUSH ESI                            ; 00512bb3
    MOV EDI,dword ptr [0x01d227e0]      ; 00512bb4 | DAT_01d227e0
    PUSH EDI                            ; 00512bba
    CALL engine_mini3d.cpp_drawTransformedList_FUN_00515ae0 ; 00512bbb
        ;   XREF to: 00515ae0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawTransformedList_FUN_00515ae0(float * vertices, int vertex_count, ushort * indices, int triangle_count, ...)
    ADD ESP,0x14                        ; 00512bc0
    ADD ESP,0x14                        ; 00512bc3
    POP EBP                             ; 00512bc6
    POP EDI                             ; 00512bc7
    POP ESI                             ; 00512bc8
    POP EBX                             ; 00512bc9
    RET                                 ; 00512bca

