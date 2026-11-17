; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00519960(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00519ba0 at 00519baa
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_00519c20 at 00519c7e
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_00519be0 at 00519bea
;
; Referenced Globals:
;   float g_FLOAT_00603ce0 = 256
;   float g_FLOAT_00603ce8 = 0.00390625
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   CDemonRenderer g_CDemonRenderer_01bc120c
;   int g_INT_01d2c5d0
;   CVector3f[32] g_CVector3f_ARRAY_01d2c5d4
;   undefined4 g_CVector3f_ARRAY_01d2c5d4[0].y
;   undefined4 g_CVector3f_ARRAY_01d2c5d4[0].z
;   undefined4 g_CVector3f_ARRAY_01d2c5d4[1].x
;   undefined4 g_CVector3f_ARRAY_01d2c5d4[1].y
;   undefined4 g_CVector3f_ARRAY_01d2c5d4[1].z
;   int g_INT_01d2c754
;   CVector3f[32] g_CVector3f_ARRAY_01d2c758
;   undefined4 g_CVector3f_ARRAY_01d2c758[0].y
;   undefined4 g_CVector3f_ARRAY_01d2c758[0].z
;   ... and 3 more
;
; Called Functions:
;   core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0
;   engine_matrix.c_projectCachedPoint_FUN_00507b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519960
        ;   Label: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00519960
    PUSH ESI                            ; 00519961
    PUSH EDI                            ; 00519962
    PUSH EBP                            ; 00519963
    SUB ESP,0x4                         ; 00519964
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00519967
    MOV EAX,dword ptr [EDI + 0x4]       ; 0051996b
    XOR EBP,EBP                         ; 0051996e
    MOV [0x01d2c5d0],EAX                ; 00519970 | g_INT_01d2c5d0
    TEST EAX,EAX                        ; 00519975
    JLE 0x005199d0                      ; 00519977
        ;   XREF to: 005199d0 (CONDITIONAL_JUMP)  ; LAB_005199d0
    MOV EDX,0x1d2c5d4                   ; 00519979
    MOV ESI,EDI                         ; 0051997e
    MOV EBX,dword ptr [ESI + 0x18]      ; 00519980
        ;   Label: LAB_00519980
    IMUL EBX,EBX,0x30                   ; 00519983
    MOV EAX,[0x00612560]                ; 00519986 | g_CDemonRenderer_PTR_00612560
    MOV EAX,dword ptr [EAX]             ; 0051998b | g_CDemonRenderer_01bc120c
    ADD ESI,0x4                         ; 0051998d
    ADD EAX,EBX                         ; 00519990
    MOV EBX,EDX                         ; 00519992
    INC EBP                             ; 00519994
    FILD dword ptr [EAX]                ; 00519995
    FMUL float ptr [0x00603ce8]         ; 00519997 | g_FLOAT_00603ce8
    FSTP float ptr [EBX]                ; 0051999d | g_CVector3f_ARRAY_01d2c5d4 | g_CVector3f_ARRAY_01d2c5d4[1].x
    FILD dword ptr [EAX + 0x4]          ; 0051999f
    FMUL float ptr [0x00603ce8]         ; 005199a2 | g_FLOAT_00603ce8
    FSTP float ptr [EBX + 0x4]          ; 005199a8 | g_CVector3f_ARRAY_01d2c5d4[0].y | g_CVector3f_ARRAY_01d2c5d4[1].y
    FILD dword ptr [EAX + 0x8]          ; 005199ab
    FMUL float ptr [0x00603ce8]         ; 005199ae | g_FLOAT_00603ce8
    FSTP float ptr [EBX + 0x8]          ; 005199b4 | g_CVector3f_ARRAY_01d2c5d4[0].z | g_CVector3f_ARRAY_01d2c5d4[1].z
    MOV ECX,dword ptr [EDI + 0x4]       ; 005199b7
    ADD EDX,0xc                         ; 005199ba
    CMP EBP,ECX                         ; 005199bd
    JL 0x00519980                       ; 005199bf
        ;   XREF to: 00519980 (CONDITIONAL_JUMP)  ; LAB_00519980
    LEA EAX,[EAX]                       ; 005199c1
    LEA EDX,[EDX]                       ; 005199c7
    LEA EAX,[EAX]                       ; 005199cd
    PUSH 0x1d2c754                      ; 005199d0 | g_INT_01d2c754
        ;   Label: LAB_005199d0
    PUSH 0x1d2c758                      ; 005199d5 | g_CVector3f_ARRAY_01d2c758
    MOV EBX,dword ptr [0x01d2c5d0]      ; 005199da | g_INT_01d2c5d0
    PUSH EBX                            ; 005199e0
    MOV EAX,dword ptr [ESP + 0x24]      ; 005199e1
    PUSH 0x1d2c5d4                      ; 005199e5 | g_CVector3f_ARRAY_01d2c5d4
    ADD EAX,0x98                        ; 005199ea
    PUSH EAX                            ; 005199ef
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0 ; 005199f0
        ;   XREF to: 005186c0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV ESI,dword ptr [0x01d2c754]      ; 005199f5 | g_INT_01d2c754
    ADD ESP,0x14                        ; 005199fb
    CMP ESI,0x3                         ; 005199fe
    JGE 0x00519a0d                      ; 00519a01
        ;   XREF to: 00519a0d (CONDITIONAL_JUMP)  ; LAB_00519a0d
    XOR EAX,EAX                         ; 00519a03
        ;   Label: LAB_00519a03
    ADD ESP,0x4                         ; 00519a05
    POP EBP                             ; 00519a08
    POP EDI                             ; 00519a09
    POP ESI                             ; 00519a0a
    POP EBX                             ; 00519a0b
    RET                                 ; 00519a0c
    PUSH 0x1d2c5d0                      ; 00519a0d | g_INT_01d2c5d0
        ;   Label: LAB_00519a0d
    PUSH 0x1d2c5d4                      ; 00519a12 | g_CVector3f_ARRAY_01d2c5d4
    PUSH ESI                            ; 00519a17
    MOV EAX,dword ptr [ESP + 0x24]      ; 00519a18
    PUSH 0x1d2c758                      ; 00519a1c
    ADD EAX,0xa8                        ; 00519a21
    PUSH EAX                            ; 00519a26
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0 ; 00519a27
        ;   XREF to: 005186c0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV EAX,[0x01d2c5d0]                ; 00519a2c | g_INT_01d2c5d0
    ADD ESP,0x14                        ; 00519a31
    CMP EAX,0x3                         ; 00519a34
    JL 0x00519a03                       ; 00519a37
        ;   XREF to: 00519a03 (CONDITIONAL_JUMP)  ; LAB_00519a03
    PUSH 0x1d2c754                      ; 00519a39 | g_INT_01d2c754
    PUSH 0x1d2c758                      ; 00519a3e
    PUSH EAX                            ; 00519a43
    MOV EAX,dword ptr [ESP + 0x24]      ; 00519a44
    PUSH 0x1d2c5d4                      ; 00519a48 | g_CVector3f_ARRAY_01d2c5d4
    ADD EAX,0xb8                        ; 00519a4d
    PUSH EAX                            ; 00519a52
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0 ; 00519a53
        ;   XREF to: 005186c0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV ECX,dword ptr [0x01d2c754]      ; 00519a58 | g_INT_01d2c754
    ADD ESP,0x14                        ; 00519a5e
    CMP ECX,0x3                         ; 00519a61
    JL 0x00519a03                       ; 00519a64
        ;   XREF to: 00519a03 (CONDITIONAL_JUMP)  ; LAB_00519a03
    PUSH 0x1d2c5d0                      ; 00519a66 | g_INT_01d2c5d0
    PUSH 0x1d2c5d4                      ; 00519a6b | g_CVector3f_ARRAY_01d2c5d4
    PUSH ECX                            ; 00519a70
    MOV EAX,dword ptr [ESP + 0x24]      ; 00519a71
    PUSH 0x1d2c758                      ; 00519a75
    ADD EAX,0xc8                        ; 00519a7a
    PUSH EAX                            ; 00519a7f
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0 ; 00519a80
        ;   XREF to: 005186c0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV ESI,dword ptr [0x01d2c5d0]      ; 00519a85 | g_INT_01d2c5d0
    ADD ESP,0x14                        ; 00519a8b
    CMP ESI,0x3                         ; 00519a8e
    JL 0x00519a03                       ; 00519a91
        ;   XREF to: 00519a03 (CONDITIONAL_JUMP)  ; LAB_00519a03
    PUSH 0x1d2c754                      ; 00519a97 | g_INT_01d2c754
    PUSH 0x1d2c758                      ; 00519a9c
    PUSH ESI                            ; 00519aa1
    MOV EAX,dword ptr [ESP + 0x24]      ; 00519aa2
    PUSH 0x1d2c5d4                      ; 00519aa6 | g_CVector3f_ARRAY_01d2c5d4
    ADD EAX,0xd8                        ; 00519aab
    PUSH EAX                            ; 00519ab0
    CALL core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0 ; 00519ab1
        ;   XREF to: 005186c0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_clipPolygonAgainstPlane_FUN_005186c0(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, ...)
    MOV EAX,[0x01d2c754]                ; 00519ab6 | g_INT_01d2c754
    ADD ESP,0x14                        ; 00519abb
    CMP EAX,0x3                         ; 00519abe
    JL 0x00519a03                       ; 00519ac1
        ;   XREF to: 00519a03 (CONDITIONAL_JUMP)  ; LAB_00519a03
    MOV EDX,dword ptr [ESP + 0x18]      ; 00519ac7
    MOV dword ptr [EDX + 0xec],EAX      ; 00519acb
    MOV EAX,dword ptr [EDI + 0x8]       ; 00519ad1
    MOV dword ptr [EDX + 0xf0],EAX      ; 00519ad4
    MOV EAX,dword ptr [EDI + 0xc]       ; 00519ada
    MOV dword ptr [EDX + 0xf4],EAX      ; 00519add
    MOV EAX,dword ptr [EDI + 0x10]      ; 00519ae3
    MOV dword ptr [EDX + 0xf8],EAX      ; 00519ae6
    MOV EAX,dword ptr [EDI + 0x14]      ; 00519aec
    MOV dword ptr [EDX + 0xfc],EAX      ; 00519aef
    MOV EDX,dword ptr [0x01d2c754]      ; 00519af5 | g_INT_01d2c754
    XOR EBP,EBP                         ; 00519afb
    TEST EDX,EDX                        ; 00519afd
    JLE 0x00519b90                      ; 00519aff
        ;   XREF to: 00519b90 (CONDITIONAL_JUMP)  ; LAB_00519b90
    MOV EDI,0x1d2c758                   ; 00519b05
    MOV ESI,dword ptr [ESP + 0x18]      ; 00519b0a
    MOV dword ptr [ESP],EDI             ; 00519b0e
    MOV EDI,0xea000                     ; 00519b11
    MOV EAX,[0x00612560]                ; 00519b16 | g_CDemonRenderer_PTR_00612560
        ;   Label: LAB_00519b16
    MOV EBX,dword ptr [EAX]             ; 00519b1b | g_CDemonRenderer_01bc120c
    MOV EAX,dword ptr [ESP]             ; 00519b1d
    ADD EBX,EDI                         ; 00519b20
    FLD float ptr [EAX]                 ; 00519b22 | g_CVector3f_ARRAY_01d2c758 | g_CVector3f_ARRAY_01d2c758[1].x
    FMUL float ptr [0x00603ce0]         ; 00519b24 | g_FLOAT_00603ce0
    FISTP dword ptr [EBX]               ; 00519b2a
    FLD float ptr [EAX + 0x4]           ; 00519b2c | g_CVector3f_ARRAY_01d2c758[0].y | g_CVector3f_ARRAY_01d2c758[1].y
    FMUL float ptr [0x00603ce0]         ; 00519b2f | g_FLOAT_00603ce0
    FISTP dword ptr [EBX + 0x4]         ; 00519b35
    FLD float ptr [EAX + 0x8]           ; 00519b38 | g_CVector3f_ARRAY_01d2c758[0].z | g_CVector3f_ARRAY_01d2c758[1].z
    FMUL float ptr [0x00603ce0]         ; 00519b3b | g_FLOAT_00603ce0
    FISTP dword ptr [EBX + 0x8]         ; 00519b41
    MOV EAX,[0x00612560]                ; 00519b44 | g_CDemonRenderer_PTR_00612560
    MOV EAX,dword ptr [EAX]             ; 00519b49 | g_CDemonRenderer_01bc120c
    LEA EDX,[EBP + 0x4e00]              ; 00519b4b
    ADD ESI,0x4                         ; 00519b51
    MOV dword ptr [EDI + EAX*0x1 + 0x10],0xffffffff ; 00519b54
    PUSH EDX                            ; 00519b5c
    MOV dword ptr [ESI + 0xfc],EDX      ; 00519b5d
    CALL engine_matrix.c_projectCachedPoint_FUN_00507b30 ; 00519b63
        ;   XREF to: 00507b30 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_00507b30(int cacheIndex)
    ADD ESP,0x4                         ; 00519b68
    INC EBP                             ; 00519b6b
    MOV ECX,dword ptr [ESP]             ; 00519b6c
    ADD EDI,0x30                        ; 00519b6f
    ADD ECX,0xc                         ; 00519b72
    MOV EBX,dword ptr [0x01d2c754]      ; 00519b75 | g_INT_01d2c754
    MOV dword ptr [ESP],ECX             ; 00519b7b
    CMP EBP,EBX                         ; 00519b7e
    JL 0x00519b16                       ; 00519b80
        ;   XREF to: 00519b16 (CONDITIONAL_JUMP)  ; LAB_00519b16
    LEA EAX,[EAX]                       ; 00519b82
    LEA EDX,[EDX]                       ; 00519b88
    MOV EAX,EAX                         ; 00519b8e
    MOV EAX,0x1                         ; 00519b90
        ;   Label: LAB_00519b90
    ADD ESP,0x4                         ; 00519b95
    POP EBP                             ; 00519b98
    POP EDI                             ; 00519b99
    POP ESI                             ; 00519b9a
    POP EBX                             ; 00519b9b
    RET                                 ; 00519b9c

