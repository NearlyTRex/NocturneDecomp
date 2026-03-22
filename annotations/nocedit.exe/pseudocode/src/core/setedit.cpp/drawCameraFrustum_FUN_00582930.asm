; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_drawCameraFrustum_FUN_00582930(int color,int use_3d_lines)
;
; Parameters:
; int              Stack[0x4]:4   color
; int              Stack[0x8]:4   use_3d_lines
; Local Variables:
; CVector3i        Stack[-0x7c]:12  local_7c
; CVector3i        Stack[-0x70]:12  local_70
; CVector3i        Stack[-0x64]:12  local_64
; CVector3i        Stack[-0x58]:12  local_58
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; CVector3i        Stack[-0x40]:12  local_40
; CVector3i        Stack[-0x34]:12  local_34
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   float FLOAT_00662a28 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582930
        ;   Label: core_setedit.cpp_drawCameraFrustum_FUN_00582930
    PUSH ESI                            ; 00582931
    PUSH EDI                            ; 00582932
    PUSH EBP                            ; 00582933
    SUB ESP,0x6c                        ; 00582934
    MOV EDX,0xbf800000                  ; 00582937
    MOV EBX,0x40000000                  ; 0058293c
    LEA EAX,[ESP + 0x30]                ; 00582941
    MOV EDI,dword ptr [0x006703ec]      ; 00582945 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x30],EDX      ; 0058294b
    MOV dword ptr [ESP + 0x38],EBX      ; 0058294f
    LEA EBX,[ESP + 0x54]                ; 00582953
    MOV dword ptr [ESP + 0x34],EDX      ; 00582957
    FLD float ptr [EAX]                 ; 0058295b
    FMUL float ptr [0x00662a28]         ; 0058295d | FLOAT_00662a28
    FISTP dword ptr [EBX]               ; 00582963
    FLD float ptr [EAX + 0x4]           ; 00582965
    FMUL float ptr [0x00662a28]         ; 00582968 | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x4]         ; 0058296e
    FLD float ptr [EAX + 0x8]           ; 00582971
    FMUL float ptr [0x00662a28]         ; 00582974 | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x8]         ; 0058297a
    LEA EAX,[ESP + 0x54]                ; 0058297d
    PUSH EAX                            ; 00582981
    MOV EAX,dword ptr [EDI]             ; 00582982 | g_CDemonRendererInstance
    PUSH EAX                            ; 00582984
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00582985
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058298a
    MOV AH,byte ptr [ESP + 0x33]        ; 0058298d
    XOR AH,0x80                         ; 00582991
    LEA EBX,[ESP + 0x18]                ; 00582994
    MOV byte ptr [ESP + 0x33],AH        ; 00582998
    LEA EAX,[ESP + 0x30]                ; 0058299c
    MOV EDI,dword ptr [0x006703ec]      ; 005829a0 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005829a6
    FMUL float ptr [0x00662a28]         ; 005829a8 | FLOAT_00662a28
    FISTP dword ptr [EBX]               ; 005829ae
    FLD float ptr [EAX + 0x4]           ; 005829b0
    FMUL float ptr [0x00662a28]         ; 005829b3 | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x4]         ; 005829b9
    FLD float ptr [EAX + 0x8]           ; 005829bc
    FMUL float ptr [0x00662a28]         ; 005829bf | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x8]         ; 005829c5
    LEA EAX,[ESP + 0x18]                ; 005829c8
    PUSH EAX                            ; 005829cc
    MOV EAX,dword ptr [EDI]             ; 005829cd | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005829cf
    PUSH EAX                            ; 005829d2
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005829d3
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005829d8
    MOV EBX,ESP                         ; 005829db
    MOV DL,byte ptr [ESP + 0x37]        ; 005829dd
    LEA EAX,[ESP + 0x30]                ; 005829e1
    XOR DL,0x80                         ; 005829e5
    MOV EDI,dword ptr [0x006703ec]      ; 005829e8 | g_CDemonRendererPtr2
    MOV byte ptr [ESP + 0x37],DL        ; 005829ee
    FLD float ptr [EAX]                 ; 005829f2
    FMUL float ptr [0x00662a28]         ; 005829f4 | FLOAT_00662a28
    FISTP dword ptr [EBX]               ; 005829fa
    FLD float ptr [EAX + 0x4]           ; 005829fc
    FMUL float ptr [0x00662a28]         ; 005829ff | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x4]         ; 00582a05
    FLD float ptr [EAX + 0x8]           ; 00582a08
    FMUL float ptr [0x00662a28]         ; 00582a0b | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x8]         ; 00582a11
    MOV EAX,ESP                         ; 00582a14
    PUSH EAX                            ; 00582a16
    MOV EAX,dword ptr [EDI]             ; 00582a17 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00582a19
    PUSH EAX                            ; 00582a1c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00582a1d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00582a22
    LEA EBX,[ESP + 0xc]                 ; 00582a25
    MOV DH,byte ptr [ESP + 0x33]        ; 00582a29
    LEA EAX,[ESP + 0x30]                ; 00582a2d
    XOR DH,0x80                         ; 00582a31
    MOV EDI,dword ptr [0x006703ec]      ; 00582a34 | g_CDemonRendererPtr2
    MOV byte ptr [ESP + 0x33],DH        ; 00582a3a
    FLD float ptr [EAX]                 ; 00582a3e
    FMUL float ptr [0x00662a28]         ; 00582a40 | FLOAT_00662a28
    FISTP dword ptr [EBX]               ; 00582a46
    FLD float ptr [EAX + 0x4]           ; 00582a48
    FMUL float ptr [0x00662a28]         ; 00582a4b | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x4]         ; 00582a51
    FLD float ptr [EAX + 0x8]           ; 00582a54
    FMUL float ptr [0x00662a28]         ; 00582a57 | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x8]         ; 00582a5d
    LEA EAX,[ESP + 0xc]                 ; 00582a60
    PUSH EAX                            ; 00582a64
    MOV EAX,dword ptr [EDI]             ; 00582a65 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 00582a67
    PUSH EAX                            ; 00582a6c
    MOV ESI,0xbe99999a                  ; 00582a6d
    XOR EBP,EBP                         ; 00582a72
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00582a74
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x44]                ; 00582a79
    LEA EAX,[ESP + 0x38]                ; 00582a7d
    ADD ESP,0x8                         ; 00582a81
    MOV EDI,dword ptr [0x006703ec]      ; 00582a84 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x30],ESI      ; 00582a8a
    MOV dword ptr [ESP + 0x34],ESI      ; 00582a8e
    MOV dword ptr [ESP + 0x38],EBP      ; 00582a92
    FLD float ptr [EAX]                 ; 00582a96
    FMUL float ptr [0x00662a28]         ; 00582a98 | FLOAT_00662a28
    FISTP dword ptr [EBX]               ; 00582a9e
    FLD float ptr [EAX + 0x4]           ; 00582aa0
    FMUL float ptr [0x00662a28]         ; 00582aa3 | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x4]         ; 00582aa9
    FLD float ptr [EAX + 0x8]           ; 00582aac
    FMUL float ptr [0x00662a28]         ; 00582aaf | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x8]         ; 00582ab5
    LEA EAX,[ESP + 0x3c]                ; 00582ab8
    PUSH EAX                            ; 00582abc
    MOV EAX,dword ptr [EDI]             ; 00582abd | g_CDemonRendererInstance
    ADD EAX,0xc0                        ; 00582abf
    PUSH EAX                            ; 00582ac4
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00582ac5
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00582aca
    MOV BL,byte ptr [ESP + 0x33]        ; 00582acd
    XOR BL,0x80                         ; 00582ad1
    LEA EAX,[ESP + 0x30]                ; 00582ad4
    MOV byte ptr [ESP + 0x33],BL        ; 00582ad8
    LEA EBX,[ESP + 0x60]                ; 00582adc
    MOV EDI,dword ptr [0x006703ec]      ; 00582ae0 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00582ae6
    FMUL float ptr [0x00662a28]         ; 00582ae8 | FLOAT_00662a28
    FISTP dword ptr [EBX]               ; 00582aee
    FLD float ptr [EAX + 0x4]           ; 00582af0
    FMUL float ptr [0x00662a28]         ; 00582af3 | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x4]         ; 00582af9
    FLD float ptr [EAX + 0x8]           ; 00582afc
    FMUL float ptr [0x00662a28]         ; 00582aff | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x8]         ; 00582b05
    LEA EAX,[ESP + 0x60]                ; 00582b08
    PUSH EAX                            ; 00582b0c
    MOV EAX,dword ptr [EDI]             ; 00582b0d | g_CDemonRendererInstance
    ADD EAX,0xf0                        ; 00582b0f
    PUSH EAX                            ; 00582b14
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00582b15
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00582b1a
    MOV BH,byte ptr [ESP + 0x37]        ; 00582b1d
    XOR BH,0x80                         ; 00582b21
    LEA EAX,[ESP + 0x30]                ; 00582b24
    MOV byte ptr [ESP + 0x37],BH        ; 00582b28
    LEA EBX,[ESP + 0x48]                ; 00582b2c
    MOV EDI,dword ptr [0x006703ec]      ; 00582b30 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00582b36
    FMUL float ptr [0x00662a28]         ; 00582b38 | FLOAT_00662a28
    FISTP dword ptr [EBX]               ; 00582b3e
    FLD float ptr [EAX + 0x4]           ; 00582b40
    FMUL float ptr [0x00662a28]         ; 00582b43 | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x4]         ; 00582b49
    FLD float ptr [EAX + 0x8]           ; 00582b4c
    FMUL float ptr [0x00662a28]         ; 00582b4f | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x8]         ; 00582b55
    LEA EAX,[ESP + 0x48]                ; 00582b58
    PUSH EAX                            ; 00582b5c
    MOV EAX,dword ptr [EDI]             ; 00582b5d | g_CDemonRendererInstance
    ADD EAX,0x120                       ; 00582b5f
    PUSH EAX                            ; 00582b64
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00582b65
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00582b6a
    LEA EBX,[ESP + 0x24]                ; 00582b6d
    MOV CL,byte ptr [ESP + 0x33]        ; 00582b71
    LEA EAX,[ESP + 0x30]                ; 00582b75
    XOR CL,0x80                         ; 00582b79
    MOV EDI,dword ptr [0x006703ec]      ; 00582b7c | g_CDemonRendererPtr2
    MOV byte ptr [ESP + 0x33],CL        ; 00582b82
    FLD float ptr [EAX]                 ; 00582b86
    FMUL float ptr [0x00662a28]         ; 00582b88 | FLOAT_00662a28
    FISTP dword ptr [EBX]               ; 00582b8e
    FLD float ptr [EAX + 0x4]           ; 00582b90
    FMUL float ptr [0x00662a28]         ; 00582b93 | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x4]         ; 00582b99
    FLD float ptr [EAX + 0x8]           ; 00582b9c
    FMUL float ptr [0x00662a28]         ; 00582b9f | FLOAT_00662a28
    FISTP dword ptr [EBX + 0x8]         ; 00582ba5
    LEA EAX,[ESP + 0x24]                ; 00582ba8
    PUSH EAX                            ; 00582bac
    MOV EAX,dword ptr [EDI]             ; 00582bad | g_CDemonRendererInstance
    ADD EAX,0x150                       ; 00582baf
    PUSH EAX                            ; 00582bb4
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00582bb5
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00582bba
    CMP dword ptr [ESP + 0x84],0x0      ; 00582bbd
    JZ 0x00582cca                       ; 00582bc5
        ;   XREF to: 00582cca (CONDITIONAL_JUMP)  ; LAB_00582cca
    MOV EDX,dword ptr [ESP + 0x80]      ; 00582bcb
    PUSH EDX                            ; 00582bd2
    MOV ECX,dword ptr [0x006703ec]      ; 00582bd3 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00582bd9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 00582bda
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 00582bdf
    PUSH 0x1                            ; 00582be2
    PUSH EBP                            ; 00582be4
    MOV EBX,dword ptr [0x006703ec]      ; 00582be5 | g_CDemonRendererPtr2
    PUSH EBX                            ; 00582beb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582bec
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582bf1
    PUSH 0x2                            ; 00582bf4
    PUSH 0x1                            ; 00582bf6
    MOV ESI,dword ptr [0x006703ec]      ; 00582bf8 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00582bfe | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582bff
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c04
    PUSH 0x3                            ; 00582c07
    PUSH 0x2                            ; 00582c09
    MOV EDI,dword ptr [0x006703ec]      ; 00582c0b | g_CDemonRendererPtr2
    PUSH EDI                            ; 00582c11 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582c12
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c17
    PUSH EBP                            ; 00582c1a
    PUSH 0x3                            ; 00582c1b
    MOV EBP,dword ptr [0x006703ec]      ; 00582c1d | g_CDemonRendererPtr2
    PUSH EBP                            ; 00582c23 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582c24
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c29
    PUSH 0x5                            ; 00582c2c
    PUSH 0x4                            ; 00582c2e
    MOV EAX,[0x006703ec]                ; 00582c30 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00582c35 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582c36
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c3b
    PUSH 0x6                            ; 00582c3e
    PUSH 0x5                            ; 00582c40
    MOV EDX,dword ptr [0x006703ec]      ; 00582c42 | g_CDemonRendererPtr2
    PUSH EDX                            ; 00582c48 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582c49
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c4e
    PUSH 0x7                            ; 00582c51
    PUSH 0x6                            ; 00582c53
    MOV ECX,dword ptr [0x006703ec]      ; 00582c55 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00582c5b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582c5c
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c61
    PUSH 0x4                            ; 00582c64
    PUSH 0x7                            ; 00582c66
    MOV EBX,dword ptr [0x006703ec]      ; 00582c68 | g_CDemonRendererPtr2
    PUSH EBX                            ; 00582c6e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582c6f
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c74
    PUSH 0x4                            ; 00582c77
    PUSH 0x0                            ; 00582c79
    MOV ESI,dword ptr [0x006703ec]      ; 00582c7b | g_CDemonRendererPtr2
    PUSH ESI                            ; 00582c81 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582c82
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c87
    PUSH 0x5                            ; 00582c8a
    PUSH 0x1                            ; 00582c8c
    MOV EDI,dword ptr [0x006703ec]      ; 00582c8e | g_CDemonRendererPtr2
    PUSH EDI                            ; 00582c94 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582c95
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582c9a
    PUSH 0x6                            ; 00582c9d
    PUSH 0x2                            ; 00582c9f
    MOV EBP,dword ptr [0x006703ec]      ; 00582ca1 | g_CDemonRendererPtr2
    PUSH EBP                            ; 00582ca7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582ca8
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582cad
    PUSH 0x7                            ; 00582cb0
    PUSH 0x3                            ; 00582cb2
    MOV EAX,[0x006703ec]                ; 00582cb4 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00582cb9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00582cba
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00582cbf
    ADD ESP,0x6c                        ; 00582cc2
    POP EBP                             ; 00582cc5
    POP EDI                             ; 00582cc6
    POP ESI                             ; 00582cc7
    POP EBX                             ; 00582cc8
    RET                                 ; 00582cc9
    MOV EAX,dword ptr [ESP + 0x80]      ; 00582cca
        ;   Label: LAB_00582cca
    MOV [0x02d02570],EAX                ; 00582cd1 | g_ActiveRenderColor
    MOV EAX,[0x006703ec]                ; 00582cd6 | g_CDemonRendererPtr2
    JMP 0x00603676                      ; 00582cdb
        ;   XREF to: 00603676 (UNCONDITIONAL_JUMP)  ; LAB_00603676
    MOVSD.REP ES:EDI,ESI                ; 00582cea
        ;   Label: LAB_00582cea
    JMP 0x006036d0                      ; 00582cec
        ;   XREF to: 006036d0 (UNCONDITIONAL_JUMP)  ; LAB_006036d0
    MOVSD.REP ES:EDI,ESI                ; 00582cf8
        ;   Label: LAB_00582cf8
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582cfa
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582cff
    MOV EAX,[0x006703ec]                ; 00582d02 | g_CDemonRendererPtr2
    JMP 0x00603727                      ; 00582d07
        ;   XREF to: 00603727 (UNCONDITIONAL_JUMP)  ; LAB_00603727
    MOVSD.REP ES:EDI,ESI                ; 00582d16
        ;   Label: LAB_00582d16
    JMP 0x00603781                      ; 00582d18
        ;   XREF to: 00603781 (UNCONDITIONAL_JUMP)  ; LAB_00603781
    MOVSD.REP ES:EDI,ESI                ; 00582d25
        ;   Label: LAB_00582d25
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582d27
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582d2c
    MOV EAX,[0x006703ec]                ; 00582d2f | g_CDemonRendererPtr2
    JMP 0x006037d9                      ; 00582d34
        ;   XREF to: 006037d9 (UNCONDITIONAL_JUMP)  ; LAB_006037d9
    MOVSD.REP ES:EDI,ESI                ; 00582d46
        ;   Label: LAB_00582d46
    JMP 0x00603836                      ; 00582d48
        ;   XREF to: 00603836 (UNCONDITIONAL_JUMP)  ; LAB_00603836
    MOVSD.REP ES:EDI,ESI                ; 00582d55
        ;   Label: LAB_00582d55
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582d57
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 00582d5c | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 00582d61
    JMP 0x0060388e                      ; 00582d64
        ;   XREF to: 0060388e (UNCONDITIONAL_JUMP)  ; LAB_0060388e
    MOVSD.REP ES:EDI,ESI                ; 00582d72
        ;   Label: LAB_00582d72
    JMP 0x006038e7                      ; 00582d74
        ;   XREF to: 006038e7 (UNCONDITIONAL_JUMP)  ; LAB_006038e7
    MOVSD.REP ES:EDI,ESI                ; 00582d84
        ;   Label: LAB_00582d84
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582d86
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582d8b
    MOV EAX,[0x006703ec]                ; 00582d8e | g_CDemonRendererPtr2
    JMP 0x00603942                      ; 00582d93
        ;   XREF to: 00603942 (UNCONDITIONAL_JUMP)  ; LAB_00603942
    MOVSD.REP ES:EDI,ESI                ; 00582da5
        ;   Label: LAB_00582da5
    JMP 0x0060399f                      ; 00582da7
        ;   XREF to: 0060399f (UNCONDITIONAL_JUMP)  ; LAB_0060399f
    MOVSD.REP ES:EDI,ESI                ; 00582db7
        ;   Label: LAB_00582db7
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582db9
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582dbe
    MOV EAX,[0x006703ec]                ; 00582dc1 | g_CDemonRendererPtr2
    JMP 0x006039fa                      ; 00582dc6
        ;   XREF to: 006039fa (UNCONDITIONAL_JUMP)  ; LAB_006039fa
    MOVSD.REP ES:EDI,ESI                ; 00582dd8
        ;   Label: LAB_00582dd8
    JMP 0x00603a57                      ; 00582dda
        ;   XREF to: 00603a57 (UNCONDITIONAL_JUMP)  ; LAB_00603a57
    MOVSD.REP ES:EDI,ESI                ; 00582dea
        ;   Label: LAB_00582dea
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582dec
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582df1
    MOV EAX,[0x006703ec]                ; 00582df4 | g_CDemonRendererPtr2
    JMP 0x00603ab2                      ; 00582df9
        ;   XREF to: 00603ab2 (UNCONDITIONAL_JUMP)  ; LAB_00603ab2
    MOVSD.REP ES:EDI,ESI                ; 00582e0b
        ;   Label: LAB_00582e0b
    JMP 0x00603b0f                      ; 00582e0d
        ;   XREF to: 00603b0f (UNCONDITIONAL_JUMP)  ; LAB_00603b0f
    MOVSD.REP ES:EDI,ESI                ; 00582e1d
        ;   Label: LAB_00582e1d
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582e1f
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582e24
    MOV EAX,[0x006703ec]                ; 00582e27 | g_CDemonRendererPtr2
    JMP 0x00603b6a                      ; 00582e2c
        ;   XREF to: 00603b6a (UNCONDITIONAL_JUMP)  ; LAB_00603b6a
    MOVSD.REP ES:EDI,ESI                ; 00582e3e
        ;   Label: LAB_00582e3e
    JMP 0x00603bc7                      ; 00582e40
        ;   XREF to: 00603bc7 (UNCONDITIONAL_JUMP)  ; LAB_00603bc7
    MOVSD.REP ES:EDI,ESI                ; 00582e50
        ;   Label: LAB_00582e50
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582e52
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582e57
    MOV EAX,[0x006703ec]                ; 00582e5a | g_CDemonRendererPtr2
    JMP 0x00603c22                      ; 00582e5f
        ;   XREF to: 00603c22 (UNCONDITIONAL_JUMP)  ; LAB_00603c22
    MOVSD.REP ES:EDI,ESI                ; 00582e71
        ;   Label: LAB_00582e71
    JMP 0x00603c7f                      ; 00582e73
        ;   XREF to: 00603c7f (UNCONDITIONAL_JUMP)  ; LAB_00603c7f
    MOVSD.REP ES:EDI,ESI                ; 00582e7f
        ;   Label: LAB_00582e7f
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582e81
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582e86
    MOV EAX,[0x006703ec]                ; 00582e89 | g_CDemonRendererPtr2
    JMP 0x00603cd6                      ; 00582e8e
        ;   XREF to: 00603cd6 (UNCONDITIONAL_JUMP)  ; LAB_00603cd6
    MOVSD.REP ES:EDI,ESI                ; 00582ea0
        ;   Label: LAB_00582ea0
    JMP 0x00603d33                      ; 00582ea2
        ;   XREF to: 00603d33 (UNCONDITIONAL_JUMP)  ; LAB_00603d33
    MOVSD.REP ES:EDI,ESI                ; 00582eaf
        ;   Label: LAB_00582eaf
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582eb1
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582eb6
    MOV EAX,[0x006703ec]                ; 00582eb9 | g_CDemonRendererPtr2
    JMP 0x00603d8b                      ; 00582ebe
        ;   XREF to: 00603d8b (UNCONDITIONAL_JUMP)  ; LAB_00603d8b
    MOVSD.REP ES:EDI,ESI                ; 00582ed0
        ;   Label: LAB_00582ed0
    JMP 0x00603de8                      ; 00582ed2
        ;   XREF to: 00603de8 (UNCONDITIONAL_JUMP)  ; LAB_00603de8
    MOVSD.REP ES:EDI,ESI                ; 00582edf
        ;   Label: LAB_00582edf
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582ee1
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582ee6
    MOV EAX,[0x006703ec]                ; 00582ee9 | g_CDemonRendererPtr2
    JMP 0x00603e40                      ; 00582eee
        ;   XREF to: 00603e40 (UNCONDITIONAL_JUMP)  ; LAB_00603e40
    MOVSD.REP ES:EDI,ESI                ; 00582f00
        ;   Label: LAB_00582f00
    JMP 0x00603e9d                      ; 00582f02
        ;   XREF to: 00603e9d (UNCONDITIONAL_JUMP)  ; LAB_00603e9d
    MOVSD.REP ES:EDI,ESI                ; 00582f12
        ;   Label: LAB_00582f12
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582f14
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582f19
    ADD ESP,0x6c                        ; 00582f1c
    POP EBP                             ; 00582f1f
    POP EDI                             ; 00582f20
    POP ESI                             ; 00582f21
    POP EBX                             ; 00582f22
    RET                                 ; 00582f23
    SUB ESP,0x30                        ; 00603676
        ;   Label: LAB_00603676
    MOV EAX,dword ptr [EAX]             ; 00603679
    MOV ECX,0xc                         ; 0060367b
    MOV EDI,ESP                         ; 00603680
    LEA ESI,[EAX + 0x30]                ; 00603682
    MOV ECX,dword ptr [ESI]             ; 00603685
    MOV dword ptr [EDI],ECX             ; 00603687
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603689
    MOV dword ptr [EDI + 0x4],ECX       ; 0060368c
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060368f
    MOV dword ptr [EDI + 0x8],ECX       ; 00603692
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603695
    MOV dword ptr [EDI + 0xc],ECX       ; 00603698
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060369b
    MOV dword ptr [EDI + 0x10],ECX      ; 0060369e
    MOV ECX,dword ptr [ESI + 0x14]      ; 006036a1
    MOV dword ptr [EDI + 0x14],ECX      ; 006036a4
    MOV ECX,dword ptr [ESI + 0x18]      ; 006036a7
    MOV dword ptr [EDI + 0x18],ECX      ; 006036aa
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006036ad
    MOV dword ptr [EDI + 0x1c],ECX      ; 006036b0
    MOV ECX,dword ptr [ESI + 0x20]      ; 006036b3
    MOV dword ptr [EDI + 0x20],ECX      ; 006036b6
    MOV ECX,dword ptr [ESI + 0x24]      ; 006036b9
    MOV dword ptr [EDI + 0x24],ECX      ; 006036bc
    MOV ECX,dword ptr [ESI + 0x28]      ; 006036bf
    MOV dword ptr [EDI + 0x28],ECX      ; 006036c2
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006036c5
    MOV dword ptr [EDI + 0x2c],ECX      ; 006036c8
    JMP 0x00582cea                      ; 006036cb
        ;   XREF to: 00582cea (UNCONDITIONAL_JUMP)  ; LAB_00582cea
    SUB ESP,0x30                        ; 006036d0
        ;   Label: LAB_006036d0
    MOV ECX,0xc                         ; 006036d3
    MOV EDI,ESP                         ; 006036d8
    MOV ESI,EAX                         ; 006036da
    MOV ECX,dword ptr [ESI]             ; 006036dc
    MOV dword ptr [EDI],ECX             ; 006036de
    MOV ECX,dword ptr [ESI + 0x4]       ; 006036e0
    MOV dword ptr [EDI + 0x4],ECX       ; 006036e3
    MOV ECX,dword ptr [ESI + 0x8]       ; 006036e6
    MOV dword ptr [EDI + 0x8],ECX       ; 006036e9
    MOV ECX,dword ptr [ESI + 0xc]       ; 006036ec
    MOV dword ptr [EDI + 0xc],ECX       ; 006036ef
    MOV ECX,dword ptr [ESI + 0x10]      ; 006036f2
    MOV dword ptr [EDI + 0x10],ECX      ; 006036f5
    MOV ECX,dword ptr [ESI + 0x14]      ; 006036f8
    MOV dword ptr [EDI + 0x14],ECX      ; 006036fb
    MOV ECX,dword ptr [ESI + 0x18]      ; 006036fe
    MOV dword ptr [EDI + 0x18],ECX      ; 00603701
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603704
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603707
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060370a
    MOV dword ptr [EDI + 0x20],ECX      ; 0060370d
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603710
    MOV dword ptr [EDI + 0x24],ECX      ; 00603713
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603716
    MOV dword ptr [EDI + 0x28],ECX      ; 00603719
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060371c
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060371f
    JMP 0x00582cf8                      ; 00603722
        ;   XREF to: 00582cf8 (UNCONDITIONAL_JUMP)  ; LAB_00582cf8
    SUB ESP,0x30                        ; 00603727
        ;   Label: LAB_00603727
    MOV EAX,dword ptr [EAX]             ; 0060372a
    MOV ECX,0xc                         ; 0060372c
    MOV EDI,ESP                         ; 00603731
    LEA ESI,[EAX + 0x60]                ; 00603733
    MOV ECX,dword ptr [ESI]             ; 00603736
    MOV dword ptr [EDI],ECX             ; 00603738
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060373a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060373d
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603740
    MOV dword ptr [EDI + 0x8],ECX       ; 00603743
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603746
    MOV dword ptr [EDI + 0xc],ECX       ; 00603749
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060374c
    MOV dword ptr [EDI + 0x10],ECX      ; 0060374f
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603752
    MOV dword ptr [EDI + 0x14],ECX      ; 00603755
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603758
    MOV dword ptr [EDI + 0x18],ECX      ; 0060375b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060375e
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603761
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603764
    MOV dword ptr [EDI + 0x20],ECX      ; 00603767
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060376a
    MOV dword ptr [EDI + 0x24],ECX      ; 0060376d
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603770
    MOV dword ptr [EDI + 0x28],ECX      ; 00603773
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603776
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603779
    JMP 0x00582d16                      ; 0060377c
        ;   XREF to: 00582d16 (UNCONDITIONAL_JUMP)  ; LAB_00582d16
    SUB ESP,0x30                        ; 00603781
        ;   Label: LAB_00603781
    MOV ECX,0xc                         ; 00603784
    MOV EDI,ESP                         ; 00603789
    LEA ESI,[EAX + 0x30]                ; 0060378b
    MOV ECX,dword ptr [ESI]             ; 0060378e
    MOV dword ptr [EDI],ECX             ; 00603790
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603792
    MOV dword ptr [EDI + 0x4],ECX       ; 00603795
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603798
    MOV dword ptr [EDI + 0x8],ECX       ; 0060379b
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060379e
    MOV dword ptr [EDI + 0xc],ECX       ; 006037a1
    MOV ECX,dword ptr [ESI + 0x10]      ; 006037a4
    MOV dword ptr [EDI + 0x10],ECX      ; 006037a7
    MOV ECX,dword ptr [ESI + 0x14]      ; 006037aa
    MOV dword ptr [EDI + 0x14],ECX      ; 006037ad
    MOV ECX,dword ptr [ESI + 0x18]      ; 006037b0
    MOV dword ptr [EDI + 0x18],ECX      ; 006037b3
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006037b6
    MOV dword ptr [EDI + 0x1c],ECX      ; 006037b9
    MOV ECX,dword ptr [ESI + 0x20]      ; 006037bc
    MOV dword ptr [EDI + 0x20],ECX      ; 006037bf
    MOV ECX,dword ptr [ESI + 0x24]      ; 006037c2
    MOV dword ptr [EDI + 0x24],ECX      ; 006037c5
    MOV ECX,dword ptr [ESI + 0x28]      ; 006037c8
    MOV dword ptr [EDI + 0x28],ECX      ; 006037cb
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006037ce
    MOV dword ptr [EDI + 0x2c],ECX      ; 006037d1
    JMP 0x00582d25                      ; 006037d4
        ;   XREF to: 00582d25 (UNCONDITIONAL_JUMP)  ; LAB_00582d25
    SUB ESP,0x30                        ; 006037d9
        ;   Label: LAB_006037d9
    MOV EAX,dword ptr [EAX]             ; 006037dc
    MOV ECX,0xc                         ; 006037de
    MOV EDI,ESP                         ; 006037e3
    LEA ESI,[EAX + 0x90]                ; 006037e5
    MOV ECX,dword ptr [ESI]             ; 006037eb
    MOV dword ptr [EDI],ECX             ; 006037ed
    MOV ECX,dword ptr [ESI + 0x4]       ; 006037ef
    MOV dword ptr [EDI + 0x4],ECX       ; 006037f2
    MOV ECX,dword ptr [ESI + 0x8]       ; 006037f5
    MOV dword ptr [EDI + 0x8],ECX       ; 006037f8
    MOV ECX,dword ptr [ESI + 0xc]       ; 006037fb
    MOV dword ptr [EDI + 0xc],ECX       ; 006037fe
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603801
    MOV dword ptr [EDI + 0x10],ECX      ; 00603804
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603807
    MOV dword ptr [EDI + 0x14],ECX      ; 0060380a
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060380d
    MOV dword ptr [EDI + 0x18],ECX      ; 00603810
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603813
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603816
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603819
    MOV dword ptr [EDI + 0x20],ECX      ; 0060381c
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060381f
    MOV dword ptr [EDI + 0x24],ECX      ; 00603822
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603825
    MOV dword ptr [EDI + 0x28],ECX      ; 00603828
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060382b
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060382e
    JMP 0x00582d46                      ; 00603831
        ;   XREF to: 00582d46 (UNCONDITIONAL_JUMP)  ; LAB_00582d46
    SUB ESP,0x30                        ; 00603836
        ;   Label: LAB_00603836
    MOV ECX,0xc                         ; 00603839
    MOV EDI,ESP                         ; 0060383e
    LEA ESI,[EAX + 0x60]                ; 00603840
    MOV ECX,dword ptr [ESI]             ; 00603843
    MOV dword ptr [EDI],ECX             ; 00603845
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603847
    MOV dword ptr [EDI + 0x4],ECX       ; 0060384a
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060384d
    MOV dword ptr [EDI + 0x8],ECX       ; 00603850
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603853
    MOV dword ptr [EDI + 0xc],ECX       ; 00603856
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603859
    MOV dword ptr [EDI + 0x10],ECX      ; 0060385c
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060385f
    MOV dword ptr [EDI + 0x14],ECX      ; 00603862
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603865
    MOV dword ptr [EDI + 0x18],ECX      ; 00603868
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060386b
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060386e
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603871
    MOV dword ptr [EDI + 0x20],ECX      ; 00603874
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603877
    MOV dword ptr [EDI + 0x24],ECX      ; 0060387a
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060387d
    MOV dword ptr [EDI + 0x28],ECX      ; 00603880
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603883
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603886
    JMP 0x00582d55                      ; 00603889
        ;   XREF to: 00582d55 (UNCONDITIONAL_JUMP)  ; LAB_00582d55
    MOV ECX,0xc                         ; 0060388e
        ;   Label: LAB_0060388e
    SUB ESP,0x30                        ; 00603893
    MOV EAX,dword ptr [EAX]             ; 00603896
    MOV EDI,ESP                         ; 00603898
    MOV ESI,EAX                         ; 0060389a
    MOV ECX,dword ptr [ESI]             ; 0060389c
    MOV dword ptr [EDI],ECX             ; 0060389e
    MOV ECX,dword ptr [ESI + 0x4]       ; 006038a0
    MOV dword ptr [EDI + 0x4],ECX       ; 006038a3
    MOV ECX,dword ptr [ESI + 0x8]       ; 006038a6
    MOV dword ptr [EDI + 0x8],ECX       ; 006038a9
    MOV ECX,dword ptr [ESI + 0xc]       ; 006038ac
    MOV dword ptr [EDI + 0xc],ECX       ; 006038af
    MOV ECX,dword ptr [ESI + 0x10]      ; 006038b2
    MOV dword ptr [EDI + 0x10],ECX      ; 006038b5
    MOV ECX,dword ptr [ESI + 0x14]      ; 006038b8
    MOV dword ptr [EDI + 0x14],ECX      ; 006038bb
    MOV ECX,dword ptr [ESI + 0x18]      ; 006038be
    MOV dword ptr [EDI + 0x18],ECX      ; 006038c1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006038c4
    MOV dword ptr [EDI + 0x1c],ECX      ; 006038c7
    MOV ECX,dword ptr [ESI + 0x20]      ; 006038ca
    MOV dword ptr [EDI + 0x20],ECX      ; 006038cd
    MOV ECX,dword ptr [ESI + 0x24]      ; 006038d0
    MOV dword ptr [EDI + 0x24],ECX      ; 006038d3
    MOV ECX,dword ptr [ESI + 0x28]      ; 006038d6
    MOV dword ptr [EDI + 0x28],ECX      ; 006038d9
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006038dc
    MOV dword ptr [EDI + 0x2c],ECX      ; 006038df
    JMP 0x00582d72                      ; 006038e2
        ;   XREF to: 00582d72 (UNCONDITIONAL_JUMP)  ; LAB_00582d72
    SUB ESP,0x30                        ; 006038e7
        ;   Label: LAB_006038e7
    MOV ECX,0xc                         ; 006038ea
    MOV EDI,ESP                         ; 006038ef
    LEA ESI,[EAX + 0x90]                ; 006038f1
    MOV ECX,dword ptr [ESI]             ; 006038f7
    MOV dword ptr [EDI],ECX             ; 006038f9
    MOV ECX,dword ptr [ESI + 0x4]       ; 006038fb
    MOV dword ptr [EDI + 0x4],ECX       ; 006038fe
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603901
    MOV dword ptr [EDI + 0x8],ECX       ; 00603904
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603907
    MOV dword ptr [EDI + 0xc],ECX       ; 0060390a
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060390d
    MOV dword ptr [EDI + 0x10],ECX      ; 00603910
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603913
    MOV dword ptr [EDI + 0x14],ECX      ; 00603916
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603919
    MOV dword ptr [EDI + 0x18],ECX      ; 0060391c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060391f
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603922
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603925
    MOV dword ptr [EDI + 0x20],ECX      ; 00603928
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060392b
    MOV dword ptr [EDI + 0x24],ECX      ; 0060392e
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603931
    MOV dword ptr [EDI + 0x28],ECX      ; 00603934
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603937
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060393a
    JMP 0x00582d84                      ; 0060393d
        ;   XREF to: 00582d84 (UNCONDITIONAL_JUMP)  ; LAB_00582d84
    SUB ESP,0x30                        ; 00603942
        ;   Label: LAB_00603942
    MOV EAX,dword ptr [EAX]             ; 00603945
    MOV ECX,0xc                         ; 00603947
    MOV EDI,ESP                         ; 0060394c
    LEA ESI,[EAX + 0xf0]                ; 0060394e
    MOV ECX,dword ptr [ESI]             ; 00603954
    MOV dword ptr [EDI],ECX             ; 00603956
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603958
    MOV dword ptr [EDI + 0x4],ECX       ; 0060395b
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060395e
    MOV dword ptr [EDI + 0x8],ECX       ; 00603961
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603964
    MOV dword ptr [EDI + 0xc],ECX       ; 00603967
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060396a
    MOV dword ptr [EDI + 0x10],ECX      ; 0060396d
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603970
    MOV dword ptr [EDI + 0x14],ECX      ; 00603973
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603976
    MOV dword ptr [EDI + 0x18],ECX      ; 00603979
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060397c
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060397f
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603982
    MOV dword ptr [EDI + 0x20],ECX      ; 00603985
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603988
    MOV dword ptr [EDI + 0x24],ECX      ; 0060398b
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060398e
    MOV dword ptr [EDI + 0x28],ECX      ; 00603991
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603994
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603997
    JMP 0x00582da5                      ; 0060399a
        ;   XREF to: 00582da5 (UNCONDITIONAL_JUMP)  ; LAB_00582da5
    SUB ESP,0x30                        ; 0060399f
        ;   Label: LAB_0060399f
    MOV ECX,0xc                         ; 006039a2
    MOV EDI,ESP                         ; 006039a7
    LEA ESI,[EAX + 0xc0]                ; 006039a9
    MOV ECX,dword ptr [ESI]             ; 006039af
    MOV dword ptr [EDI],ECX             ; 006039b1
    MOV ECX,dword ptr [ESI + 0x4]       ; 006039b3
    MOV dword ptr [EDI + 0x4],ECX       ; 006039b6
    MOV ECX,dword ptr [ESI + 0x8]       ; 006039b9
    MOV dword ptr [EDI + 0x8],ECX       ; 006039bc
    MOV ECX,dword ptr [ESI + 0xc]       ; 006039bf
    MOV dword ptr [EDI + 0xc],ECX       ; 006039c2
    MOV ECX,dword ptr [ESI + 0x10]      ; 006039c5
    MOV dword ptr [EDI + 0x10],ECX      ; 006039c8
    MOV ECX,dword ptr [ESI + 0x14]      ; 006039cb
    MOV dword ptr [EDI + 0x14],ECX      ; 006039ce
    MOV ECX,dword ptr [ESI + 0x18]      ; 006039d1
    MOV dword ptr [EDI + 0x18],ECX      ; 006039d4
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006039d7
    MOV dword ptr [EDI + 0x1c],ECX      ; 006039da
    MOV ECX,dword ptr [ESI + 0x20]      ; 006039dd
    MOV dword ptr [EDI + 0x20],ECX      ; 006039e0
    MOV ECX,dword ptr [ESI + 0x24]      ; 006039e3
    MOV dword ptr [EDI + 0x24],ECX      ; 006039e6
    MOV ECX,dword ptr [ESI + 0x28]      ; 006039e9
    MOV dword ptr [EDI + 0x28],ECX      ; 006039ec
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006039ef
    MOV dword ptr [EDI + 0x2c],ECX      ; 006039f2
    JMP 0x00582db7                      ; 006039f5
        ;   XREF to: 00582db7 (UNCONDITIONAL_JUMP)  ; LAB_00582db7
    SUB ESP,0x30                        ; 006039fa
        ;   Label: LAB_006039fa
    MOV EAX,dword ptr [EAX]             ; 006039fd
    MOV ECX,0xc                         ; 006039ff
    MOV EDI,ESP                         ; 00603a04
    LEA ESI,[EAX + 0x120]               ; 00603a06
    MOV ECX,dword ptr [ESI]             ; 00603a0c
    MOV dword ptr [EDI],ECX             ; 00603a0e
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603a10
    MOV dword ptr [EDI + 0x4],ECX       ; 00603a13
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603a16
    MOV dword ptr [EDI + 0x8],ECX       ; 00603a19
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603a1c
    MOV dword ptr [EDI + 0xc],ECX       ; 00603a1f
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603a22
    MOV dword ptr [EDI + 0x10],ECX      ; 00603a25
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603a28
    MOV dword ptr [EDI + 0x14],ECX      ; 00603a2b
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603a2e
    MOV dword ptr [EDI + 0x18],ECX      ; 00603a31
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603a34
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603a37
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603a3a
    MOV dword ptr [EDI + 0x20],ECX      ; 00603a3d
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603a40
    MOV dword ptr [EDI + 0x24],ECX      ; 00603a43
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603a46
    MOV dword ptr [EDI + 0x28],ECX      ; 00603a49
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603a4c
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603a4f
    JMP 0x00582dd8                      ; 00603a52
        ;   XREF to: 00582dd8 (UNCONDITIONAL_JUMP)  ; LAB_00582dd8
    SUB ESP,0x30                        ; 00603a57
        ;   Label: LAB_00603a57
    MOV ECX,0xc                         ; 00603a5a
    MOV EDI,ESP                         ; 00603a5f
    LEA ESI,[EAX + 0xf0]                ; 00603a61
    MOV ECX,dword ptr [ESI]             ; 00603a67
    MOV dword ptr [EDI],ECX             ; 00603a69
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603a6b
    MOV dword ptr [EDI + 0x4],ECX       ; 00603a6e
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603a71
    MOV dword ptr [EDI + 0x8],ECX       ; 00603a74
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603a77
    MOV dword ptr [EDI + 0xc],ECX       ; 00603a7a
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603a7d
    MOV dword ptr [EDI + 0x10],ECX      ; 00603a80
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603a83
    MOV dword ptr [EDI + 0x14],ECX      ; 00603a86
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603a89
    MOV dword ptr [EDI + 0x18],ECX      ; 00603a8c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603a8f
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603a92
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603a95
    MOV dword ptr [EDI + 0x20],ECX      ; 00603a98
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603a9b
    MOV dword ptr [EDI + 0x24],ECX      ; 00603a9e
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603aa1
    MOV dword ptr [EDI + 0x28],ECX      ; 00603aa4
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603aa7
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603aaa
    JMP 0x00582dea                      ; 00603aad
        ;   XREF to: 00582dea (UNCONDITIONAL_JUMP)  ; LAB_00582dea
    SUB ESP,0x30                        ; 00603ab2
        ;   Label: LAB_00603ab2
    MOV EAX,dword ptr [EAX]             ; 00603ab5
    MOV ECX,0xc                         ; 00603ab7
    MOV EDI,ESP                         ; 00603abc
    LEA ESI,[EAX + 0x150]               ; 00603abe
    MOV ECX,dword ptr [ESI]             ; 00603ac4
    MOV dword ptr [EDI],ECX             ; 00603ac6
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603ac8
    MOV dword ptr [EDI + 0x4],ECX       ; 00603acb
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603ace
    MOV dword ptr [EDI + 0x8],ECX       ; 00603ad1
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603ad4
    MOV dword ptr [EDI + 0xc],ECX       ; 00603ad7
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603ada
    MOV dword ptr [EDI + 0x10],ECX      ; 00603add
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603ae0
    MOV dword ptr [EDI + 0x14],ECX      ; 00603ae3
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603ae6
    MOV dword ptr [EDI + 0x18],ECX      ; 00603ae9
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603aec
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603aef
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603af2
    MOV dword ptr [EDI + 0x20],ECX      ; 00603af5
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603af8
    MOV dword ptr [EDI + 0x24],ECX      ; 00603afb
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603afe
    MOV dword ptr [EDI + 0x28],ECX      ; 00603b01
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603b04
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603b07
    JMP 0x00582e0b                      ; 00603b0a
        ;   XREF to: 00582e0b (UNCONDITIONAL_JUMP)  ; LAB_00582e0b
    SUB ESP,0x30                        ; 00603b0f
        ;   Label: LAB_00603b0f
    MOV ECX,0xc                         ; 00603b12
    MOV EDI,ESP                         ; 00603b17
    LEA ESI,[EAX + 0x120]               ; 00603b19
    MOV ECX,dword ptr [ESI]             ; 00603b1f
    MOV dword ptr [EDI],ECX             ; 00603b21
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603b23
    MOV dword ptr [EDI + 0x4],ECX       ; 00603b26
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603b29
    MOV dword ptr [EDI + 0x8],ECX       ; 00603b2c
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603b2f
    MOV dword ptr [EDI + 0xc],ECX       ; 00603b32
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603b35
    MOV dword ptr [EDI + 0x10],ECX      ; 00603b38
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603b3b
    MOV dword ptr [EDI + 0x14],ECX      ; 00603b3e
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603b41
    MOV dword ptr [EDI + 0x18],ECX      ; 00603b44
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603b47
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603b4a
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603b4d
    MOV dword ptr [EDI + 0x20],ECX      ; 00603b50
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603b53
    MOV dword ptr [EDI + 0x24],ECX      ; 00603b56
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603b59
    MOV dword ptr [EDI + 0x28],ECX      ; 00603b5c
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603b5f
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603b62
    JMP 0x00582e1d                      ; 00603b65
        ;   XREF to: 00582e1d (UNCONDITIONAL_JUMP)  ; LAB_00582e1d
    SUB ESP,0x30                        ; 00603b6a
        ;   Label: LAB_00603b6a
    MOV EAX,dword ptr [EAX]             ; 00603b6d
    MOV ECX,0xc                         ; 00603b6f
    MOV EDI,ESP                         ; 00603b74
    LEA ESI,[EAX + 0xc0]                ; 00603b76
    MOV ECX,dword ptr [ESI]             ; 00603b7c
    MOV dword ptr [EDI],ECX             ; 00603b7e
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603b80
    MOV dword ptr [EDI + 0x4],ECX       ; 00603b83
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603b86
    MOV dword ptr [EDI + 0x8],ECX       ; 00603b89
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603b8c
    MOV dword ptr [EDI + 0xc],ECX       ; 00603b8f
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603b92
    MOV dword ptr [EDI + 0x10],ECX      ; 00603b95
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603b98
    MOV dword ptr [EDI + 0x14],ECX      ; 00603b9b
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603b9e
    MOV dword ptr [EDI + 0x18],ECX      ; 00603ba1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603ba4
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603ba7
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603baa
    MOV dword ptr [EDI + 0x20],ECX      ; 00603bad
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603bb0
        ;   Label: LAB_00603bb0
    MOV dword ptr [EDI + 0x24],ECX      ; 00603bb3
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603bb6
    MOV dword ptr [EDI + 0x28],ECX      ; 00603bb9
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603bbc
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603bbf
    JMP 0x00582e3e                      ; 00603bc2
        ;   XREF to: 00582e3e (UNCONDITIONAL_JUMP)  ; LAB_00582e3e
    SUB ESP,0x30                        ; 00603bc7
        ;   Label: LAB_00603bc7
    MOV ECX,0xc                         ; 00603bca
    MOV EDI,ESP                         ; 00603bcf
    LEA ESI,[EAX + 0x150]               ; 00603bd1
    MOV ECX,dword ptr [ESI]             ; 00603bd7
    MOV dword ptr [EDI],ECX             ; 00603bd9
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603bdb
    MOV dword ptr [EDI + 0x4],ECX       ; 00603bde
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603be1
    MOV dword ptr [EDI + 0x8],ECX       ; 00603be4
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603be7
    MOV dword ptr [EDI + 0xc],ECX       ; 00603bea
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603bed
    MOV dword ptr [EDI + 0x10],ECX      ; 00603bf0
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603bf3
    MOV dword ptr [EDI + 0x14],ECX      ; 00603bf6
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603bf9
    MOV dword ptr [EDI + 0x18],ECX      ; 00603bfc
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603bff
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603c02
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603c05
    MOV dword ptr [EDI + 0x20],ECX      ; 00603c08
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603c0b
    MOV dword ptr [EDI + 0x24],ECX      ; 00603c0e
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603c11
    MOV dword ptr [EDI + 0x28],ECX      ; 00603c14
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603c17
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603c1a
    JMP 0x00582e50                      ; 00603c1d
        ;   XREF to: 00582e50 (UNCONDITIONAL_JUMP)  ; LAB_00582e50
    SUB ESP,0x30                        ; 00603c22
        ;   Label: LAB_00603c22
    MOV EAX,dword ptr [EAX]             ; 00603c25
    MOV ECX,0xc                         ; 00603c27
    MOV EDI,ESP                         ; 00603c2c
    LEA ESI,[EAX + 0xc0]                ; 00603c2e
    MOV ECX,dword ptr [ESI]             ; 00603c34
    MOV dword ptr [EDI],ECX             ; 00603c36
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603c38
    MOV dword ptr [EDI + 0x4],ECX       ; 00603c3b
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603c3e
    MOV dword ptr [EDI + 0x8],ECX       ; 00603c41
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603c44
    MOV dword ptr [EDI + 0xc],ECX       ; 00603c47
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603c4a
    MOV dword ptr [EDI + 0x10],ECX      ; 00603c4d
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603c50
    MOV dword ptr [EDI + 0x14],ECX      ; 00603c53
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603c56
    MOV dword ptr [EDI + 0x18],ECX      ; 00603c59
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603c5c
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603c5f
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603c62
    MOV dword ptr [EDI + 0x20],ECX      ; 00603c65
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603c68
    MOV dword ptr [EDI + 0x24],ECX      ; 00603c6b
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603c6e
    MOV dword ptr [EDI + 0x28],ECX      ; 00603c71
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603c74
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603c77
    JMP 0x00582e71                      ; 00603c7a
        ;   XREF to: 00582e71 (UNCONDITIONAL_JUMP)  ; LAB_00582e71
    SUB ESP,0x30                        ; 00603c7f
        ;   Label: LAB_00603c7f
    MOV ECX,0xc                         ; 00603c82
    MOV EDI,ESP                         ; 00603c87
    MOV ESI,EAX                         ; 00603c89
    MOV ECX,dword ptr [ESI]             ; 00603c8b
    MOV dword ptr [EDI],ECX             ; 00603c8d
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603c8f
    MOV dword ptr [EDI + 0x4],ECX       ; 00603c92
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603c95
    MOV dword ptr [EDI + 0x8],ECX       ; 00603c98
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603c9b
    MOV dword ptr [EDI + 0xc],ECX       ; 00603c9e
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603ca1
    MOV dword ptr [EDI + 0x10],ECX      ; 00603ca4
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603ca7
    MOV dword ptr [EDI + 0x14],ECX      ; 00603caa
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603cad
    MOV dword ptr [EDI + 0x18],ECX      ; 00603cb0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603cb3
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603cb6
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603cb9
    MOV dword ptr [EDI + 0x20],ECX      ; 00603cbc
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603cbf
    MOV dword ptr [EDI + 0x24],ECX      ; 00603cc2
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603cc5
    MOV dword ptr [EDI + 0x28],ECX      ; 00603cc8
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603ccb
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603cce
    JMP 0x00582e7f                      ; 00603cd1
        ;   XREF to: 00582e7f (UNCONDITIONAL_JUMP)  ; LAB_00582e7f
    SUB ESP,0x30                        ; 00603cd6
        ;   Label: LAB_00603cd6
    MOV EAX,dword ptr [EAX]             ; 00603cd9
    MOV ECX,0xc                         ; 00603cdb
    MOV EDI,ESP                         ; 00603ce0
    LEA ESI,[EAX + 0xf0]                ; 00603ce2
    MOV ECX,dword ptr [ESI]             ; 00603ce8
    MOV dword ptr [EDI],ECX             ; 00603cea
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603cec
    MOV dword ptr [EDI + 0x4],ECX       ; 00603cef
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603cf2
    MOV dword ptr [EDI + 0x8],ECX       ; 00603cf5
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603cf8
    MOV dword ptr [EDI + 0xc],ECX       ; 00603cfb
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603cfe
    MOV dword ptr [EDI + 0x10],ECX      ; 00603d01
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603d04
    MOV dword ptr [EDI + 0x14],ECX      ; 00603d07
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603d0a
    MOV dword ptr [EDI + 0x18],ECX      ; 00603d0d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603d10
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603d13
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603d16
    MOV dword ptr [EDI + 0x20],ECX      ; 00603d19
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603d1c
    MOV dword ptr [EDI + 0x24],ECX      ; 00603d1f
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603d22
    MOV dword ptr [EDI + 0x28],ECX      ; 00603d25
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603d28
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603d2b
    JMP 0x00582ea0                      ; 00603d2e
        ;   XREF to: 00582ea0 (UNCONDITIONAL_JUMP)  ; LAB_00582ea0
    SUB ESP,0x30                        ; 00603d33
        ;   Label: LAB_00603d33
    MOV ECX,0xc                         ; 00603d36
    MOV EDI,ESP                         ; 00603d3b
    LEA ESI,[EAX + 0x30]                ; 00603d3d
    MOV ECX,dword ptr [ESI]             ; 00603d40
    MOV dword ptr [EDI],ECX             ; 00603d42
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603d44
    MOV dword ptr [EDI + 0x4],ECX       ; 00603d47
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603d4a
    MOV dword ptr [EDI + 0x8],ECX       ; 00603d4d
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603d50
    MOV dword ptr [EDI + 0xc],ECX       ; 00603d53
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603d56
    MOV dword ptr [EDI + 0x10],ECX      ; 00603d59
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603d5c
    MOV dword ptr [EDI + 0x14],ECX      ; 00603d5f
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603d62
    MOV dword ptr [EDI + 0x18],ECX      ; 00603d65
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603d68
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603d6b
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603d6e
    MOV dword ptr [EDI + 0x20],ECX      ; 00603d71
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603d74
    MOV dword ptr [EDI + 0x24],ECX      ; 00603d77
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603d7a
    MOV dword ptr [EDI + 0x28],ECX      ; 00603d7d
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603d80
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603d83
    JMP 0x00582eaf                      ; 00603d86
        ;   XREF to: 00582eaf (UNCONDITIONAL_JUMP)  ; LAB_00582eaf
    SUB ESP,0x30                        ; 00603d8b
        ;   Label: LAB_00603d8b
    MOV EAX,dword ptr [EAX]             ; 00603d8e
    MOV ECX,0xc                         ; 00603d90
    MOV EDI,ESP                         ; 00603d95
    LEA ESI,[EAX + 0x120]               ; 00603d97
    MOV ECX,dword ptr [ESI]             ; 00603d9d
    MOV dword ptr [EDI],ECX             ; 00603d9f
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603da1
    MOV dword ptr [EDI + 0x4],ECX       ; 00603da4
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603da7
    MOV dword ptr [EDI + 0x8],ECX       ; 00603daa
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603dad
    MOV dword ptr [EDI + 0xc],ECX       ; 00603db0
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603db3
    MOV dword ptr [EDI + 0x10],ECX      ; 00603db6
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603db9
    MOV dword ptr [EDI + 0x14],ECX      ; 00603dbc
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603dbf
    MOV dword ptr [EDI + 0x18],ECX      ; 00603dc2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603dc5
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603dc8
        ;   Label: SUB_00603dc8
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603dcb
    MOV dword ptr [EDI + 0x20],ECX      ; 00603dce
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603dd1
    MOV dword ptr [EDI + 0x24],ECX      ; 00603dd4
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603dd7
    MOV dword ptr [EDI + 0x28],ECX      ; 00603dda
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603ddd
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603de0
    JMP 0x00582ed0                      ; 00603de3
        ;   XREF to: 00582ed0 (UNCONDITIONAL_JUMP)  ; LAB_00582ed0
    SUB ESP,0x30                        ; 00603de8
        ;   Label: LAB_00603de8
    MOV ECX,0xc                         ; 00603deb
    MOV EDI,ESP                         ; 00603df0
    LEA ESI,[EAX + 0x60]                ; 00603df2
    MOV ECX,dword ptr [ESI]             ; 00603df5
    MOV dword ptr [EDI],ECX             ; 00603df7
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603df9
    MOV dword ptr [EDI + 0x4],ECX       ; 00603dfc
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603dff
    MOV dword ptr [EDI + 0x8],ECX       ; 00603e02
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603e05
    MOV dword ptr [EDI + 0xc],ECX       ; 00603e08
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603e0b
    MOV dword ptr [EDI + 0x10],ECX      ; 00603e0e
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603e11
    MOV dword ptr [EDI + 0x14],ECX      ; 00603e14
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603e17
    MOV dword ptr [EDI + 0x18],ECX      ; 00603e1a
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603e1d
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603e20
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603e23
    MOV dword ptr [EDI + 0x20],ECX      ; 00603e26
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603e29
    MOV dword ptr [EDI + 0x24],ECX      ; 00603e2c
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603e2f
    MOV dword ptr [EDI + 0x28],ECX      ; 00603e32
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603e35
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603e38
    JMP 0x00582edf                      ; 00603e3b
        ;   XREF to: 00582edf (UNCONDITIONAL_JUMP)  ; LAB_00582edf
    SUB ESP,0x30                        ; 00603e40
        ;   Label: LAB_00603e40
    MOV EAX,dword ptr [EAX]             ; 00603e43
    MOV ECX,0xc                         ; 00603e45
    MOV EDI,ESP                         ; 00603e4a
    LEA ESI,[EAX + 0x150]               ; 00603e4c
    MOV ECX,dword ptr [ESI]             ; 00603e52
    MOV dword ptr [EDI],ECX             ; 00603e54
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603e56
    MOV dword ptr [EDI + 0x4],ECX       ; 00603e59
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603e5c
    MOV dword ptr [EDI + 0x8],ECX       ; 00603e5f
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603e62
    MOV dword ptr [EDI + 0xc],ECX       ; 00603e65
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603e68
    MOV dword ptr [EDI + 0x10],ECX      ; 00603e6b
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603e6e
    MOV dword ptr [EDI + 0x14],ECX      ; 00603e71
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603e74
    MOV dword ptr [EDI + 0x18],ECX      ; 00603e77
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603e7a
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603e7d
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603e80
    MOV dword ptr [EDI + 0x20],ECX      ; 00603e83
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603e86
    MOV dword ptr [EDI + 0x24],ECX      ; 00603e89
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603e8c
    MOV dword ptr [EDI + 0x28],ECX      ; 00603e8f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603e92
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603e95
    JMP 0x00582f00                      ; 00603e98
        ;   XREF to: 00582f00 (UNCONDITIONAL_JUMP)  ; LAB_00582f00
    SUB ESP,0x30                        ; 00603e9d
        ;   Label: LAB_00603e9d
    MOV ECX,0xc                         ; 00603ea0
    MOV EDI,ESP                         ; 00603ea5
    LEA ESI,[EAX + 0x90]                ; 00603ea7
    MOV ECX,dword ptr [ESI]             ; 00603ead
    MOV dword ptr [EDI],ECX             ; 00603eaf
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603eb1
    MOV dword ptr [EDI + 0x4],ECX       ; 00603eb4
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603eb7
    MOV dword ptr [EDI + 0x8],ECX       ; 00603eba
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603ebd
    MOV dword ptr [EDI + 0xc],ECX       ; 00603ec0
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603ec3
    MOV dword ptr [EDI + 0x10],ECX      ; 00603ec6
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603ec9
    MOV dword ptr [EDI + 0x14],ECX      ; 00603ecc
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603ecf
    MOV dword ptr [EDI + 0x18],ECX      ; 00603ed2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603ed5
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603ed8
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603edb
    MOV dword ptr [EDI + 0x20],ECX      ; 00603ede
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603ee1
    MOV dword ptr [EDI + 0x24],ECX      ; 00603ee4
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603ee7
    MOV dword ptr [EDI + 0x28],ECX      ; 00603eea
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603eed
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603ef0
    JMP 0x00582f12                      ; 00603ef3
        ;   XREF to: 00582f12 (UNCONDITIONAL_JUMP)  ; LAB_00582f12

