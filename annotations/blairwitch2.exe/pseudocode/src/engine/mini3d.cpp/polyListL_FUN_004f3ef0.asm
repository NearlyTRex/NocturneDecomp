; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_polyListL_FUN_004f3ef0(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; Referenced Globals:
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
;   undefined4 DAT_0264bc90
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

    PUSH EBX                            ; 004f3ef0
        ;   Label: engine_mini3d.cpp_polyListL_FUN_004f3ef0
    PUSH ESI                            ; 004f3ef1
    PUSH EDI                            ; 004f3ef2
    PUSH EBP                            ; 004f3ef3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f3ef4
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f3ef8
    MOV EDX,dword ptr [0x01e61b58]      ; 004f3efc | DAT_01e61b58
    MOV ECX,dword ptr [0x01d09854]      ; 004f3f02 | DAT_01d09854
    ADD EDX,EAX                         ; 004f3f08
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f3f0a
    MOV EBX,dword ptr [0x01d0d2b4]      ; 004f3f0e | DAT_01d0d2b4
    ADD ECX,EAX                         ; 004f3f14
    MOV dword ptr [0x01e61b58],EDX      ; 004f3f16 | DAT_01e61b58
    MOV dword ptr [0x01d09854],ECX      ; 004f3f1c | DAT_01d09854
    TEST EBX,EBX                        ; 004f3f22
    JNZ 0x004f401c                      ; 004f3f24
        ;   XREF to: 004f401c (CONDITIONAL_JUMP)  ; LAB_004f401c
    CMP dword ptr [0x01d09914],0x0      ; 004f3f2a | DAT_01d09914
    JNZ 0x004f4033                      ; 004f3f31
        ;   XREF to: 004f4033 (CONDITIONAL_JUMP)  ; LAB_004f4033
    CMP dword ptr [0x0264bc90],0x0      ; 004f3f37 | DAT_0264bc90
        ;   Label: LAB_004f3f37
    JZ 0x004f3f4d                       ; 004f3f3e
        ;   XREF to: 004f3f4d (CONDITIONAL_JUMP)  ; LAB_004f3f4d
    CMP dword ptr [0x01c37788],0x0      ; 004f3f40 | DAT_01c37788
    JNZ 0x004f404e                      ; 004f3f47
        ;   XREF to: 004f404e (CONDITIONAL_JUMP)  ; LAB_004f404e
    CALL engine_mini3d.cpp_updateTransform_FUN_004f3740 ; 004f3f4d
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004f3740()
        ;   Label: LAB_004f3f4d
    CALL engine_mini3d.cpp_updateRenderState_FUN_004f7da0 ; 004f3f52
        ;   XREF to: 004f7da0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_004f7da0()
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f3f57
    CALL engine_mini3d.cpp_allocVertexList_FUN_004f38c0 ; 004f3f5b
        ;   XREF to: 004f38c0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_allocVertexList_FUN_004f38c0()
    CMP EBX,0x2710                      ; 004f3f60
    JLE 0x004f3f8c                      ; 004f3f66
        ;   XREF to: 004f3f8c (CONDITIONAL_JUMP)  ; LAB_004f3f8c
    PUSH EBX                            ; 004f3f68
    MOV EDI,0x5dddaf                    ; 004f3f69
    MOV EBP,0x80d                       ; 004f3f6e
    PUSH 0x5dddc4                       ; 004f3f73
    MOV dword ptr [0x01d046a0],EDI      ; 004f3f78 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004f3f7e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f3f84
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004f3f89
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f3f8c
        ;   Label: LAB_004f3f8c
    MOV EBX,dword ptr [0x01d09b7c]      ; 004f3f90 | DAT_01d09b7c
    XOR EDI,EDI                         ; 004f3f96
    XOR EBP,EBP                         ; 004f3f98
    TEST EDX,EDX                        ; 004f3f9a
    JLE 0x004f3ff0                      ; 004f3f9c
        ;   XREF to: 004f3ff0 (CONDITIONAL_JUMP)  ; LAB_004f3ff0
    PUSH EBX                            ; 004f3f9e
        ;   Label: LAB_004f3f9e
    PUSH ESI                            ; 004f3f9f
    CALL engine_mini3d.cpp_transformVertex_FUN_004f4510 ; 004f3fa0
        ;   XREF to: 004f4510 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_transformVertex_FUN_004f4510(CVector3f * point, float * out)
    ADD ESP,0x8                         ; 004f3fa5
    PUSH EBX                            ; 004f3fa8
    ADD ESI,0x24                        ; 004f3fa9
    INC EDI                             ; 004f3fac
    CALL engine_mini3d.cpp_computeVertexFog_FUN_004f5370 ; 004f3fad
        ;   XREF to: 004f5370 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_computeVertexFog_FUN_004f5370(float * vertex)
    FLD float ptr [ESI + -0x8]          ; 004f3fb2
    ADD ESP,0x4                         ; 004f3fb5
    MOV EAX,dword ptr [EBX + 0x10]      ; 004f3fb8
    FSTP float ptr [EBX + 0x1c]         ; 004f3fbb
    ADD EBX,0x40                        ; 004f3fbe
    FLD float ptr [ESI + -0x4]          ; 004f3fc1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f3fc4
    OR EBP,EAX                          ; 004f3fc8
    FSTP float ptr [EBX + -0x20]        ; 004f3fca
    MOV EAX,dword ptr [ESI + -0x18]     ; 004f3fcd
    MOV dword ptr [EBX + -0x1c],EAX     ; 004f3fd0
    MOV EAX,dword ptr [ESI + -0x14]     ; 004f3fd3
    MOV dword ptr [EBX + -0x18],EAX     ; 004f3fd6
    MOV EAX,dword ptr [ESI + -0x10]     ; 004f3fd9
    MOV dword ptr [EBX + -0x14],EAX     ; 004f3fdc
    MOV EAX,dword ptr [ESI + -0xc]      ; 004f3fdf
    MOV dword ptr [EBX + -0x10],EAX     ; 004f3fe2
    CMP EDI,EDX                         ; 004f3fe5
    JL 0x004f3f9e                       ; 004f3fe7
        ;   XREF to: 004f3f9e (CONDITIONAL_JUMP)  ; LAB_004f3f9e
    LEA EAX,[EAX]                       ; 004f3fe9
    NOP                                 ; 004f3fef
    CMP dword ptr [0x01d0d2b8],0x0      ; 004f3ff0 | DAT_01d0d2b8
        ;   Label: LAB_004f3ff0
    JZ 0x004f4073                       ; 004f3ff7
        ;   XREF to: 004f4073 (CONDITIONAL_JUMP)  ; LAB_004f4073
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f3ff9
    PUSH EAX                            ; 004f3ffd
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f3ffe
    PUSH EDX                            ; 004f4002
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f4003
    PUSH ECX                            ; 004f4007
    MOV EBX,dword ptr [0x01d09b7c]      ; 004f4008 | DAT_01d09b7c
    PUSH EBX                            ; 004f400e
    CALL engine_mini3d.cpp_userClipPolyList_FUN_004f8750 ; 004f400f
        ;   XREF to: 004f8750 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_userClipPolyList_FUN_004f8750(float * vertices, int vertex_count, ushort * indices, int triangle_count)
    ADD ESP,0x10                        ; 004f4014
        ;   Label: LAB_004f4014
    POP EBP                             ; 004f4017
    POP EDI                             ; 004f4018
    POP ESI                             ; 004f4019
    POP EBX                             ; 004f401a
    RET                                 ; 004f401b
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f401c
        ;   Label: LAB_004f401c
    PUSH EAX                            ; 004f4020
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f4021
    PUSH EDX                            ; 004f4025
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f4026
    PUSH ECX                            ; 004f402a
    PUSH ESI                            ; 004f402b
    CALL engine_mini3d.cpp_polyListSurface_FUN_004f7e00 ; 004f402c
        ;   XREF to: 004f7e00 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_polyListSurface_FUN_004f7e00(float * vertices, int vertex_count, ushort * indices, int triangle_count)
    JMP 0x004f4014                      ; 004f4031
        ;   XREF to: 004f4014 (UNCONDITIONAL_JUMP)  ; LAB_004f4014
    MOV EBP,dword ptr [ESP + 0x20]      ; 004f4033
        ;   Label: LAB_004f4033
    PUSH EBP                            ; 004f4037
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f4038
    PUSH EAX                            ; 004f403c
    CALL engine_mini3d.cpp_mirrorFaces_FUN_004f34d0 ; 004f403d
        ;   XREF to: 004f34d0 (UNCONDITIONAL_CALL)  ; ushort * engine_mini3d.cpp_mirrorFaces_FUN_004f34d0(ushort * faces, int face_count)
    ADD ESP,0x8                         ; 004f4042
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f4045
    JMP 0x004f3f37                      ; 004f4049
        ;   XREF to: 004f3f37 (UNCONDITIONAL_JUMP)  ; LAB_004f3f37
    MOV ECX,dword ptr [0x01c38b54]      ; 004f404e | DAT_01c38b54
        ;   Label: LAB_004f404e
    PUSH ECX                            ; 004f4054
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f4055
    PUSH EBX                            ; 004f4059
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f405a
    PUSH EDI                            ; 004f405e
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f405f
    PUSH EBP                            ; 004f4063
    PUSH ESI                            ; 004f4064
    CALL dword ptr [0x0264bc90]         ; 004f4065 | DAT_0264bc90
    ADD ESP,0x14                        ; 004f406b
    POP EBP                             ; 004f406e
    POP EDI                             ; 004f406f
    POP ESI                             ; 004f4070
    POP EBX                             ; 004f4071
    RET                                 ; 004f4072
    PUSH EBP                            ; 004f4073
        ;   Label: LAB_004f4073
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f4074
    PUSH EBX                            ; 004f4078
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f4079
    PUSH ESI                            ; 004f407d
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f407e
    PUSH EDI                            ; 004f4082
    MOV EBP,dword ptr [0x01d09b7c]      ; 004f4083 | DAT_01d09b7c
    PUSH EBP                            ; 004f4089
    CALL engine_mini3d.cpp_drawTransformedList_FUN_004f6d00 ; 004f408a
        ;   XREF to: 004f6d00 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawTransformedList_FUN_004f6d00(float * vertices, int vertex_count, ushort * indices, int triangle_count, ...)
    ADD ESP,0x14                        ; 004f408f
    POP EBP                             ; 004f4092
    POP EDI                             ; 004f4093
    POP ESI                             ; 004f4094
    POP EBX                             ; 004f4095
    RET                                 ; 004f4096

