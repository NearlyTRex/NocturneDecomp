; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_004f3c40(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; Referenced Globals:
;   undefined4 DAT_005ddd5c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09854
;   undefined4 DAT_01d09914
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_01d0d2b4
;   undefined4 DAT_01d0d2b8
;   undefined4 DAT_01e61b58
;   undefined4 DAT_0264bc94
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_mini3d.cpp_allocVertexList_FUN_004f38c0
;   engine_mini3d.cpp_computeVertexFog_FUN_004f5370
;   engine_mini3d.cpp_drawTransformedList_FUN_004f6d00
;   engine_mini3d.cpp_mirrorFaces_FUN_004f34d0
;   engine_mini3d.cpp_polyListSurface_FUN_004f7e00
;   engine_mini3d.cpp_transformVertex_FUN_004f4510
;   engine_mini3d.cpp_updateRenderState_FUN_004f7da0
;   engine_mini3d.cpp_updateTransform_FUN_004f3740
;   engine_mini3d.cpp_userClipPolyList_FUN_004f8750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3c40
        ;   Label: engine_mini3d.cpp_polyListD3DL_FUN_004f3c40
    PUSH ESI                            ; 004f3c41
    PUSH EDI                            ; 004f3c42
    PUSH EBP                            ; 004f3c43
    SUB ESP,0x14                        ; 004f3c44
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f3c47
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f3c4b
    MOV EDX,dword ptr [0x01e61b58]      ; 004f3c4f | DAT_01e61b58
    MOV ECX,dword ptr [0x01d09854]      ; 004f3c55 | DAT_01d09854
    ADD EDX,EAX                         ; 004f3c5b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f3c5d
    MOV EBX,dword ptr [0x01d0d2b4]      ; 004f3c61 | DAT_01d0d2b4
    ADD ECX,EAX                         ; 004f3c67
    MOV dword ptr [0x01e61b58],EDX      ; 004f3c69 | DAT_01e61b58
    MOV dword ptr [0x01d09854],ECX      ; 004f3c6f | DAT_01d09854
    TEST EBX,EBX                        ; 004f3c75
    JNZ 0x004f3dff                      ; 004f3c77
        ;   XREF to: 004f3dff (CONDITIONAL_JUMP)  ; LAB_004f3dff
    CMP dword ptr [0x01d09914],0x0      ; 004f3c7d | DAT_01d09914
    JZ 0x004f3c9c                       ; 004f3c84
        ;   XREF to: 004f3c9c (CONDITIONAL_JUMP)  ; LAB_004f3c9c
    MOV EBP,dword ptr [ESP + 0x34]      ; 004f3c86
    PUSH EBP                            ; 004f3c8a
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f3c8b
    PUSH EAX                            ; 004f3c8f
    CALL engine_mini3d.cpp_mirrorFaces_FUN_004f34d0 ; 004f3c90
        ;   XREF to: 004f34d0 (UNCONDITIONAL_CALL)  ; ushort * engine_mini3d.cpp_mirrorFaces_FUN_004f34d0(ushort * faces, int face_count)
    ADD ESP,0x8                         ; 004f3c95
    MOV dword ptr [ESP + 0x30],EAX      ; 004f3c98
    CALL engine_mini3d.cpp_updateTransform_FUN_004f3740 ; 004f3c9c
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004f3740()
        ;   Label: LAB_004f3c9c
    CALL engine_mini3d.cpp_updateRenderState_FUN_004f7da0 ; 004f3ca1
        ;   XREF to: 004f7da0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_004f7da0()
    CMP dword ptr [0x0264bc94],0x0      ; 004f3ca6 | DAT_0264bc94
    JZ 0x004f3cbc                       ; 004f3cad
        ;   XREF to: 004f3cbc (CONDITIONAL_JUMP)  ; LAB_004f3cbc
    CMP dword ptr [0x01c37788],0x0      ; 004f3caf | DAT_01c37788
    JNZ 0x004f3e16                      ; 004f3cb6
        ;   XREF to: 004f3e16 (CONDITIONAL_JUMP)  ; LAB_004f3e16
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f3cbc
        ;   Label: LAB_004f3cbc
    CALL engine_mini3d.cpp_allocVertexList_FUN_004f38c0 ; 004f3cc0
        ;   XREF to: 004f38c0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_allocVertexList_FUN_004f38c0()
    CMP EBX,0x2710                      ; 004f3cc5
    JLE 0x004f3cf1                      ; 004f3ccb
        ;   XREF to: 004f3cf1 (CONDITIONAL_JUMP)  ; LAB_004f3cf1
    PUSH EBX                            ; 004f3ccd
    MOV EDI,0x5ddd1b                    ; 004f3cce
    MOV EBP,0x780                       ; 004f3cd3
    PUSH 0x5ddd30                       ; 004f3cd8
    MOV dword ptr [0x01d046a0],EDI      ; 004f3cdd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004f3ce3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f3ce9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004f3cee
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004f3cf1
        ;   Label: LAB_004f3cf1
    MOV EBX,dword ptr [0x01d09b7c]      ; 004f3cf5 | DAT_01d09b7c
    XOR EBP,EBP                         ; 004f3cfb
    TEST EDX,EDX                        ; 004f3cfd
    JLE 0x004f3dd0                      ; 004f3cff
        ;   XREF to: 004f3dd0 (CONDITIONAL_JUMP)  ; LAB_004f3dd0
    MOV EAX,EDX                         ; 004f3d05
    SHL EAX,0x6                         ; 004f3d07
    XOR EDI,EDI                         ; 004f3d0a
    MOV dword ptr [ESP + 0x10],EAX      ; 004f3d0c
    PUSH EBX                            ; 004f3d10
        ;   Label: LAB_004f3d10
    PUSH ESI                            ; 004f3d11
    CALL engine_mini3d.cpp_transformVertex_FUN_004f4510 ; 004f3d12
        ;   XREF to: 004f4510 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_transformVertex_FUN_004f4510(CVector3f * point, float * out)
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f3d17
    ADD ESP,0x8                         ; 004f3d1a
    MOV EDX,EAX                         ; 004f3d1d
    XOR ECX,ECX                         ; 004f3d1f
    AND EDX,0xff                        ; 004f3d21
    MOV dword ptr [ESP + 0x4],ECX       ; 004f3d27
    MOV dword ptr [ESP],EDX             ; 004f3d2b
    MOV EDX,EAX                         ; 004f3d2e
    FILD qword ptr [ESP]                ; 004f3d30
    SHR EDX,0x8                         ; 004f3d33
    FMUL float ptr [0x005ddd5c]         ; 004f3d36 | DAT_005ddd5c
    AND EDX,0xff                        ; 004f3d3c
    MOV dword ptr [ESP + 0x4],ECX       ; 004f3d42
    MOV dword ptr [ESP],EDX             ; 004f3d46
    FILD qword ptr [ESP]                ; 004f3d49
    FMUL float ptr [0x005ddd5c]         ; 004f3d4c | DAT_005ddd5c
    MOV dword ptr [ESP + 0x4],ECX       ; 004f3d52
    MOV EDX,EAX                         ; 004f3d56
    MOV dword ptr [ESP + 0xc],ECX       ; 004f3d58
    SHR EDX,0x10                        ; 004f3d5c
    SHR EAX,0x18                        ; 004f3d5f
    AND EDX,0xff                        ; 004f3d62
    AND EAX,0xff                        ; 004f3d68
    MOV dword ptr [ESP],EDX             ; 004f3d6d
    MOV dword ptr [ESP + 0x8],EAX       ; 004f3d70
    FILD qword ptr [ESP]                ; 004f3d74
    FMUL float ptr [0x005ddd5c]         ; 004f3d77 | DAT_005ddd5c
    FILD qword ptr [ESP + 0x8]          ; 004f3d7d
    FMUL float ptr [0x005ddd5c]         ; 004f3d81 | DAT_005ddd5c
    ADD EDI,0x40                        ; 004f3d87
    ADD ESI,0x20                        ; 004f3d8a
    PUSH EBX                            ; 004f3d8d
    FXCH ST3                            ; 004f3d8e
    FSTP float ptr [EBX + 0x24]         ; 004f3d90
    FXCH                                ; 004f3d93
    FSTP float ptr [EBX + 0x28]         ; 004f3d95
    FSTP float ptr [EBX + 0x2c]         ; 004f3d98
    FSTP float ptr [EBX + 0x30]         ; 004f3d9b
    MOV EAX,dword ptr [ESI + -0x8]      ; 004f3d9e
    MOV dword ptr [EBX + 0x1c],EAX      ; 004f3da1
    MOV EAX,dword ptr [ESI + -0x4]      ; 004f3da4
    MOV dword ptr [EBX + 0x20],EAX      ; 004f3da7
    CALL engine_mini3d.cpp_computeVertexFog_FUN_004f5370 ; 004f3daa
        ;   XREF to: 004f5370 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_computeVertexFog_FUN_004f5370(float * vertex)
    MOV EAX,[0x01d09b7c]                ; 004f3daf | DAT_01d09b7c
    ADD EBX,0x40                        ; 004f3db4
    ADD ESP,0x4                         ; 004f3db7
    MOV ECX,dword ptr [EDI + EAX*0x1 + -0x30] ; 004f3dba
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f3dbe
    OR EBP,ECX                          ; 004f3dc2
    CMP EDI,EAX                         ; 004f3dc4
    JL 0x004f3d10                       ; 004f3dc6
        ;   XREF to: 004f3d10 (CONDITIONAL_JUMP)  ; LAB_004f3d10
    LEA EAX,[EAX]                       ; 004f3dcc
    CMP dword ptr [0x01d0d2b8],0x0      ; 004f3dd0 | DAT_01d0d2b8
        ;   Label: LAB_004f3dd0
    JZ 0x004f3e38                       ; 004f3dd7
        ;   XREF to: 004f3e38 (CONDITIONAL_JUMP)  ; LAB_004f3e38
    MOV EBP,dword ptr [ESP + 0x34]      ; 004f3dd9
    PUSH EBP                            ; 004f3ddd
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f3dde
    PUSH EAX                            ; 004f3de2
    MOV EDX,dword ptr [ESP + 0x34]      ; 004f3de3
    PUSH EDX                            ; 004f3de7
    MOV ECX,dword ptr [0x01d09b7c]      ; 004f3de8 | DAT_01d09b7c
    PUSH ECX                            ; 004f3dee
    CALL engine_mini3d.cpp_userClipPolyList_FUN_004f8750 ; 004f3def
        ;   XREF to: 004f8750 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_userClipPolyList_FUN_004f8750(float * vertices, int vertex_count, ushort * indices, int triangle_count)
    ADD ESP,0x10                        ; 004f3df4
        ;   Label: LAB_004f3df4
    ADD ESP,0x14                        ; 004f3df7
        ;   Label: LAB_004f3df7
    POP EBP                             ; 004f3dfa
    POP EDI                             ; 004f3dfb
    POP ESI                             ; 004f3dfc
    POP EBX                             ; 004f3dfd
    RET                                 ; 004f3dfe
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f3dff
        ;   Label: LAB_004f3dff
    PUSH EAX                            ; 004f3e03
    MOV EDX,dword ptr [ESP + 0x34]      ; 004f3e04
    PUSH EDX                            ; 004f3e08
    MOV ECX,dword ptr [ESP + 0x34]      ; 004f3e09
    PUSH ECX                            ; 004f3e0d
    PUSH ESI                            ; 004f3e0e
    CALL engine_mini3d.cpp_polyListSurface_FUN_004f7e00 ; 004f3e0f
        ;   XREF to: 004f7e00 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_polyListSurface_FUN_004f7e00(float * vertices, int vertex_count, ushort * indices, int triangle_count)
    JMP 0x004f3df4                      ; 004f3e14
        ;   XREF to: 004f3df4 (UNCONDITIONAL_JUMP)  ; LAB_004f3df4
    MOV ECX,dword ptr [0x01c38b54]      ; 004f3e16 | DAT_01c38b54
        ;   Label: LAB_004f3e16
    PUSH ECX                            ; 004f3e1c
    MOV EBX,dword ptr [ESP + 0x38]      ; 004f3e1d
    PUSH EBX                            ; 004f3e21
    MOV EDI,dword ptr [ESP + 0x38]      ; 004f3e22
    PUSH EDI                            ; 004f3e26
    MOV EBP,dword ptr [ESP + 0x38]      ; 004f3e27
    PUSH EBP                            ; 004f3e2b
    PUSH ESI                            ; 004f3e2c
    CALL dword ptr [0x0264bc94]         ; 004f3e2d | DAT_0264bc94
    ADD ESP,0x14                        ; 004f3e33
    JMP 0x004f3df7                      ; 004f3e36
        ;   XREF to: 004f3df7 (UNCONDITIONAL_JUMP)  ; LAB_004f3df7
    PUSH EBP                            ; 004f3e38
        ;   Label: LAB_004f3e38
    MOV ECX,dword ptr [ESP + 0x38]      ; 004f3e39
    PUSH ECX                            ; 004f3e3d
    MOV EBX,dword ptr [ESP + 0x38]      ; 004f3e3e
    PUSH EBX                            ; 004f3e42
    MOV ESI,dword ptr [ESP + 0x38]      ; 004f3e43
    PUSH ESI                            ; 004f3e47
    MOV EDI,dword ptr [0x01d09b7c]      ; 004f3e48 | DAT_01d09b7c
    PUSH EDI                            ; 004f3e4e
    CALL engine_mini3d.cpp_drawTransformedList_FUN_004f6d00 ; 004f3e4f
        ;   XREF to: 004f6d00 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawTransformedList_FUN_004f6d00(float * vertices, int vertex_count, ushort * indices, int triangle_count, ...)
    ADD ESP,0x14                        ; 004f3e54
    ADD ESP,0x14                        ; 004f3e57
    POP EBP                             ; 004f3e5a
    POP EDI                             ; 004f3e5b
    POP ESI                             ; 004f3e5c
    POP EBX                             ; 004f3e5d
    RET                                 ; 004f3e5e

