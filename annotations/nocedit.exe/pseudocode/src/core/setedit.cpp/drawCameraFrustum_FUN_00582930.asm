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
    SUB ESP,0x30                        ; 00582cdb
    MOV EAX,dword ptr [EAX]             ; 00582cde | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582ce0
    MOV EDI,ESP                         ; 00582ce5
    LEA ESI,[EAX + 0x30]                ; 00582ce7
    MOVSD.REP ES:EDI,ESI                ; 00582cea
    SUB ESP,0x30                        ; 00582cec
    MOV ECX,0xc                         ; 00582cef
    MOV EDI,ESP                         ; 00582cf4
    MOV ESI,EAX                         ; 00582cf6
    MOVSD.REP ES:EDI,ESI                ; 00582cf8
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582cfa
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582cff
    MOV EAX,[0x006703ec]                ; 00582d02 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582d07
    MOV EAX,dword ptr [EAX]             ; 00582d0a | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582d0c
    MOV EDI,ESP                         ; 00582d11
    LEA ESI,[EAX + 0x60]                ; 00582d13
    MOVSD.REP ES:EDI,ESI                ; 00582d16
    SUB ESP,0x30                        ; 00582d18
    MOV ECX,0xc                         ; 00582d1b
    MOV EDI,ESP                         ; 00582d20
    LEA ESI,[EAX + 0x30]                ; 00582d22
    MOVSD.REP ES:EDI,ESI                ; 00582d25
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582d27
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582d2c
    MOV EAX,[0x006703ec]                ; 00582d2f | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582d34
    MOV EAX,dword ptr [EAX]             ; 00582d37 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582d39
    MOV EDI,ESP                         ; 00582d3e
    LEA ESI,[EAX + 0x90]                ; 00582d40
    MOVSD.REP ES:EDI,ESI                ; 00582d46
    SUB ESP,0x30                        ; 00582d48
    MOV ECX,0xc                         ; 00582d4b
    MOV EDI,ESP                         ; 00582d50
    LEA ESI,[EAX + 0x60]                ; 00582d52
    MOVSD.REP ES:EDI,ESI                ; 00582d55
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582d57
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 00582d5c | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 00582d61
    MOV ECX,0xc                         ; 00582d64
    SUB ESP,0x30                        ; 00582d69
    MOV EAX,dword ptr [EAX]             ; 00582d6c | g_CDemonRendererInstance
    MOV EDI,ESP                         ; 00582d6e
    MOV ESI,EAX                         ; 00582d70
    MOVSD.REP ES:EDI,ESI                ; 00582d72
    SUB ESP,0x30                        ; 00582d74
    MOV ECX,0xc                         ; 00582d77
    MOV EDI,ESP                         ; 00582d7c
    LEA ESI,[EAX + 0x90]                ; 00582d7e
    MOVSD.REP ES:EDI,ESI                ; 00582d84
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582d86
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582d8b
    MOV EAX,[0x006703ec]                ; 00582d8e | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582d93
    MOV EAX,dword ptr [EAX]             ; 00582d96 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582d98
    MOV EDI,ESP                         ; 00582d9d
    LEA ESI,[EAX + 0xf0]                ; 00582d9f
    MOVSD.REP ES:EDI,ESI                ; 00582da5
    SUB ESP,0x30                        ; 00582da7
    MOV ECX,0xc                         ; 00582daa
    MOV EDI,ESP                         ; 00582daf
    LEA ESI,[EAX + 0xc0]                ; 00582db1
    MOVSD.REP ES:EDI,ESI                ; 00582db7
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582db9
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582dbe
    MOV EAX,[0x006703ec]                ; 00582dc1 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582dc6
    MOV EAX,dword ptr [EAX]             ; 00582dc9 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582dcb
    MOV EDI,ESP                         ; 00582dd0
    LEA ESI,[EAX + 0x120]               ; 00582dd2
    MOVSD.REP ES:EDI,ESI                ; 00582dd8
    SUB ESP,0x30                        ; 00582dda
    MOV ECX,0xc                         ; 00582ddd
    MOV EDI,ESP                         ; 00582de2
    LEA ESI,[EAX + 0xf0]                ; 00582de4
    MOVSD.REP ES:EDI,ESI                ; 00582dea
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582dec
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582df1
    MOV EAX,[0x006703ec]                ; 00582df4 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582df9
    MOV EAX,dword ptr [EAX]             ; 00582dfc | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582dfe
    MOV EDI,ESP                         ; 00582e03
    LEA ESI,[EAX + 0x150]               ; 00582e05
    MOVSD.REP ES:EDI,ESI                ; 00582e0b
    SUB ESP,0x30                        ; 00582e0d
    MOV ECX,0xc                         ; 00582e10
    MOV EDI,ESP                         ; 00582e15
    LEA ESI,[EAX + 0x120]               ; 00582e17
    MOVSD.REP ES:EDI,ESI                ; 00582e1d
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582e1f
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582e24
    MOV EAX,[0x006703ec]                ; 00582e27 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582e2c
    MOV EAX,dword ptr [EAX]             ; 00582e2f | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582e31
    MOV EDI,ESP                         ; 00582e36
    LEA ESI,[EAX + 0xc0]                ; 00582e38
    MOVSD.REP ES:EDI,ESI                ; 00582e3e
    SUB ESP,0x30                        ; 00582e40
    MOV ECX,0xc                         ; 00582e43
    MOV EDI,ESP                         ; 00582e48
    LEA ESI,[EAX + 0x150]               ; 00582e4a
    MOVSD.REP ES:EDI,ESI                ; 00582e50
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582e52
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582e57
    MOV EAX,[0x006703ec]                ; 00582e5a | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582e5f
    MOV EAX,dword ptr [EAX]             ; 00582e62 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582e64
    MOV EDI,ESP                         ; 00582e69
    LEA ESI,[EAX + 0xc0]                ; 00582e6b
    MOVSD.REP ES:EDI,ESI                ; 00582e71
    SUB ESP,0x30                        ; 00582e73
    MOV ECX,0xc                         ; 00582e76
    MOV EDI,ESP                         ; 00582e7b
    MOV ESI,EAX                         ; 00582e7d
    MOVSD.REP ES:EDI,ESI                ; 00582e7f
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582e81
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582e86
    MOV EAX,[0x006703ec]                ; 00582e89 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582e8e
    MOV EAX,dword ptr [EAX]             ; 00582e91 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582e93
    MOV EDI,ESP                         ; 00582e98
    LEA ESI,[EAX + 0xf0]                ; 00582e9a
    MOVSD.REP ES:EDI,ESI                ; 00582ea0
    SUB ESP,0x30                        ; 00582ea2
    MOV ECX,0xc                         ; 00582ea5
    MOV EDI,ESP                         ; 00582eaa
    LEA ESI,[EAX + 0x30]                ; 00582eac
    MOVSD.REP ES:EDI,ESI                ; 00582eaf
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582eb1
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582eb6
    MOV EAX,[0x006703ec]                ; 00582eb9 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582ebe
    MOV EAX,dword ptr [EAX]             ; 00582ec1 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582ec3
    MOV EDI,ESP                         ; 00582ec8
    LEA ESI,[EAX + 0x120]               ; 00582eca
    MOVSD.REP ES:EDI,ESI                ; 00582ed0
    SUB ESP,0x30                        ; 00582ed2
    MOV ECX,0xc                         ; 00582ed5
    MOV EDI,ESP                         ; 00582eda
    LEA ESI,[EAX + 0x60]                ; 00582edc
    MOVSD.REP ES:EDI,ESI                ; 00582edf
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582ee1
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582ee6
    MOV EAX,[0x006703ec]                ; 00582ee9 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00582eee
    MOV EAX,dword ptr [EAX]             ; 00582ef1 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00582ef3
    MOV EDI,ESP                         ; 00582ef8
    LEA ESI,[EAX + 0x150]               ; 00582efa
    MOVSD.REP ES:EDI,ESI                ; 00582f00
    SUB ESP,0x30                        ; 00582f02
    MOV ECX,0xc                         ; 00582f05
    MOV EDI,ESP                         ; 00582f0a
    LEA ESI,[EAX + 0x90]                ; 00582f0c
    MOVSD.REP ES:EDI,ESI                ; 00582f12
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00582f14
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00582f19
    ADD ESP,0x6c                        ; 00582f1c
    POP EBP                             ; 00582f1f
    POP EDI                             ; 00582f20
    POP ESI                             ; 00582f21
    POP EBX                             ; 00582f22
    RET                                 ; 00582f23

