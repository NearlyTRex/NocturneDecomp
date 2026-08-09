; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderRotatedMRGLSubChain_FUN_00404b10(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
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
; Referenced Globals:
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix.m[0].y
;   undefined4 g_TransformMatrix.m[0].z
;   undefined4 g_TransformMatrix.m[1].x
;   undefined4 g_TransformMatrix.m[1].y
;   undefined4 g_TransformMatrix.m[1].z
;   undefined4 g_TransformMatrix.m[2].x
;   undefined4 g_TransformMatrix.m[2].y
;   undefined4 g_TransformMatrix.m[2].z
;
; Called Functions:
;   engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80
;   engine_matrix.c_interpolatedCos_FUN_004ccaa0
;   engine_matrix.c_interpolatedSin_FUN_004cca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404b10
        ;   Label: engine_3d.c_renderRotatedMRGLSubChain_FUN_00404b10
    PUSH ESI                            ; 00404b11
    PUSH EDI                            ; 00404b12
    PUSH EBP                            ; 00404b13
    SUB ESP,0x6c                        ; 00404b14
    MOV EAX,[0x01c039b8]                ; 00404b17 | g_RelativeX
    MOV dword ptr [ESP + 0x4],EAX       ; 00404b1c
    MOV EAX,[0x01c039bc]                ; 00404b20 | g_RelativeY
    MOV dword ptr [ESP + 0xc],EAX       ; 00404b25
    MOV EAX,[0x01c039c0]                ; 00404b29 | g_RelativeZ
    MOV dword ptr [ESP + 0x8],EAX       ; 00404b2e
    MOV EAX,[0x01c039dc]                ; 00404b32 | DAT_01c039dc
    MOV dword ptr [ESP + 0x40],EAX      ; 00404b37
    MOV EAX,[0x01c039e0]                ; 00404b3b | DAT_01c039e0
    MOV dword ptr [ESP + 0x30],EAX      ; 00404b40
    MOV EAX,[0x01c039e4]                ; 00404b44 | DAT_01c039e4
    MOV dword ptr [ESP + 0x34],EAX      ; 00404b49
    MOV EAX,[0x01c039e8]                ; 00404b4d | g_TransformMatrix
    MOV dword ptr [ESP + 0x28],EAX      ; 00404b52
    MOV EAX,[0x01c039ec]                ; 00404b56 | g_TransformMatrix.m[0].y
    MOV dword ptr [ESP + 0x44],EAX      ; 00404b5b
    MOV EAX,[0x01c039f0]                ; 00404b5f | g_TransformMatrix.m[0].z
    MOV dword ptr [ESP + 0x4c],EAX      ; 00404b64
    MOV EAX,[0x01c039f4]                ; 00404b68 | g_TransformMatrix.m[1].x
    MOV dword ptr [ESP + 0x24],EAX      ; 00404b6d
    MOV EAX,[0x01c039f8]                ; 00404b71 | g_TransformMatrix.m[1].y
    MOV dword ptr [ESP + 0x1c],EAX      ; 00404b76
    MOV EAX,[0x01c039fc]                ; 00404b7a | g_TransformMatrix.m[1].z
    MOV dword ptr [ESP + 0x2c],EAX      ; 00404b7f
    MOV EAX,[0x01c03a00]                ; 00404b83 | g_TransformMatrix.m[2].x
    MOV dword ptr [ESP + 0x38],EAX      ; 00404b88
    MOV EAX,[0x01c03a04]                ; 00404b8c | g_TransformMatrix.m[2].y
    MOV EDX,dword ptr [ESP + 0x80]      ; 00404b91
    MOV dword ptr [ESP + 0x3c],EAX      ; 00404b98
    MOV EAX,[0x01c03a08]                ; 00404b9c | g_TransformMatrix.m[2].z
    MOV ECX,dword ptr [EDX + 0x14]      ; 00404ba1
    MOV dword ptr [ESP + 0x48],EAX      ; 00404ba4
    MOV EAX,dword ptr [ESP + 0x4]       ; 00404ba8
    SUB EAX,ECX                         ; 00404bac
    MOV EBX,dword ptr [EDX + 0x18]      ; 00404bae
    MOV dword ptr [ESP + 0x10],EAX      ; 00404bb1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00404bb5
    SUB EAX,EBX                         ; 00404bb9
    MOV ESI,dword ptr [EDX + 0x1c]      ; 00404bbb
    MOV dword ptr [ESP + 0x14],EAX      ; 00404bbe
    MOV EAX,dword ptr [ESP + 0x8]       ; 00404bc2
    MOV EDI,dword ptr [EDX + 0x8]       ; 00404bc6
    SUB EAX,ESI                         ; 00404bc9
    PUSH EDI                            ; 00404bcb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00404bcc
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 00404bd0
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    MOV dword ptr [ESP + 0x6c],EAX      ; 00404bd5
    ADD ESP,0x4                         ; 00404bd9
    MOV EAX,dword ptr [ESP + 0x80]      ; 00404bdc
    MOV EBP,dword ptr [EAX + 0x8]       ; 00404be3
    PUSH EBP                            ; 00404be6
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 00404be7
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    MOV dword ptr [ESP + 0x24],EAX      ; 00404bec
    ADD ESP,0x4                         ; 00404bf0
    MOV EAX,dword ptr [ESP + 0x80]      ; 00404bf3
    MOV EDX,dword ptr [EAX + 0xc]       ; 00404bfa
    PUSH EDX                            ; 00404bfd
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 00404bfe
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    ADD ESP,0x4                         ; 00404c03
    MOV ESI,EAX                         ; 00404c06
    MOV EAX,dword ptr [ESP + 0x80]      ; 00404c08
    MOV ECX,dword ptr [EAX + 0xc]       ; 00404c0f
    PUSH ECX                            ; 00404c12
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 00404c13
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    ADD ESP,0x4                         ; 00404c18
    MOV EBX,EAX                         ; 00404c1b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00404c1d
    MOV EDI,dword ptr [EAX + 0x10]      ; 00404c24
    PUSH EDI                            ; 00404c27
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 00404c28
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    MOV dword ptr [ESP + 0x5c],EAX      ; 00404c2d
    ADD ESP,0x4                         ; 00404c31
    MOV EAX,dword ptr [ESP + 0x80]      ; 00404c34
    MOV EBP,dword ptr [EAX + 0x10]      ; 00404c3b
    PUSH EBP                            ; 00404c3e
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 00404c3f
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    MOV dword ptr [ESP + 0x58],EAX      ; 00404c44
    ADD ESP,0x4                         ; 00404c48
    MOV EAX,EBX                         ; 00404c4b
    MOV EDX,dword ptr [ESP + 0x54]      ; 00404c4d
    IMUL EDX                            ; 00404c51
    SHRD EAX,EDX,0x10                   ; 00404c53
    MOV EDX,dword ptr [ESP + 0x68]      ; 00404c57
    MOV ECX,EAX                         ; 00404c5b
    MOV EAX,ESI                         ; 00404c5d
    IMUL EDX                            ; 00404c5f
    SHRD EAX,EDX,0x10                   ; 00404c61
    MOV EDX,dword ptr [ESP + 0x58]      ; 00404c65
    IMUL EDX                            ; 00404c69
    SHRD EAX,EDX,0x10                   ; 00404c6b
    MOV EDX,dword ptr [ESP + 0x54]      ; 00404c6f
    ADD ECX,EAX                         ; 00404c73
    NEG EDX                             ; 00404c75
    MOV EAX,ESI                         ; 00404c77
    MOV dword ptr [ESP + 0x50],ECX      ; 00404c79
    IMUL EDX                            ; 00404c7d
    SHRD EAX,EDX,0x10                   ; 00404c7f
    MOV EDX,dword ptr [ESP + 0x68]      ; 00404c83
    MOV ECX,EAX                         ; 00404c87
    MOV EAX,EBX                         ; 00404c89
    IMUL EDX                            ; 00404c8b
    SHRD EAX,EDX,0x10                   ; 00404c8d
    MOV EDX,dword ptr [ESP + 0x58]      ; 00404c91
    IMUL EDX                            ; 00404c95
    SHRD EAX,EDX,0x10                   ; 00404c97
    ADD ECX,EAX                         ; 00404c9b
    MOV dword ptr [ESP + 0x60],ECX      ; 00404c9d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00404ca1
    MOV EDX,dword ptr [ESP + 0x58]      ; 00404ca5
    IMUL EDX                            ; 00404ca9
    SHRD EAX,EDX,0x10                   ; 00404cab
    MOV EBP,EAX                         ; 00404caf
    MOV EDX,ESI                         ; 00404cb1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00404cb3
    IMUL EDX                            ; 00404cb7
    SHRD EAX,EDX,0x10                   ; 00404cb9
    MOV EDI,EAX                         ; 00404cbd
    MOV EDX,EBX                         ; 00404cbf
    MOV EAX,dword ptr [ESP + 0x20]      ; 00404cc1
    IMUL EDX                            ; 00404cc5
    SHRD EAX,EDX,0x10                   ; 00404cc7
    MOV ECX,EAX                         ; 00404ccb
    MOV EAX,dword ptr [ESP + 0x68]      ; 00404ccd
    MOV EDX,dword ptr [ESP + 0x58]      ; 00404cd1
    MOV dword ptr [ESP + 0x64],EAX      ; 00404cd5
    NEG EAX                             ; 00404cd9
    NEG EDX                             ; 00404cdb
    MOV dword ptr [ESP + 0x64],EAX      ; 00404cdd
    MOV EAX,EBX                         ; 00404ce1
    IMUL EDX                            ; 00404ce3
    SHRD EAX,EDX,0x10                   ; 00404ce5
    MOV EDX,dword ptr [ESP + 0x68]      ; 00404ce9
    MOV dword ptr [ESP],EAX             ; 00404ced
    MOV EAX,ESI                         ; 00404cf0
    IMUL EDX                            ; 00404cf2
    SHRD EAX,EDX,0x10                   ; 00404cf4
    MOV EDX,dword ptr [ESP + 0x54]      ; 00404cf8
    IMUL EDX                            ; 00404cfc
    SHRD EAX,EDX,0x10                   ; 00404cfe
    MOV EDX,dword ptr [ESP]             ; 00404d02
    ADD EDX,EAX                         ; 00404d05
    MOV EAX,dword ptr [ESP + 0x58]      ; 00404d07
    MOV dword ptr [ESP + 0x5c],EDX      ; 00404d0b
    MOV EDX,ESI                         ; 00404d0f
    IMUL EDX                            ; 00404d11
    SHRD EAX,EDX,0x10                   ; 00404d13
    MOV EDX,dword ptr [ESP + 0x68]      ; 00404d17
    MOV ESI,EAX                         ; 00404d1b
    MOV EAX,EBX                         ; 00404d1d
    IMUL EDX                            ; 00404d1f
    SHRD EAX,EDX,0x10                   ; 00404d21
    MOV EDX,dword ptr [ESP + 0x54]      ; 00404d25
    IMUL EDX                            ; 00404d29
    SHRD EAX,EDX,0x10                   ; 00404d2b
    MOV EDX,dword ptr [ESP + 0x54]      ; 00404d2f
    ADD ESI,EAX                         ; 00404d33
    MOV EAX,dword ptr [ESP + 0x20]      ; 00404d35
    IMUL EDX                            ; 00404d39
    SHRD EAX,EDX,0x10                   ; 00404d3b
    MOV EDX,dword ptr [ESP + 0x10]      ; 00404d3f
    MOV EBX,EAX                         ; 00404d43
    MOV EAX,dword ptr [ESP + 0x50]      ; 00404d45
    IMUL EDX                            ; 00404d49
    SHRD EAX,EDX,0x10                   ; 00404d4b
    MOV EDX,dword ptr [ESP + 0x14]      ; 00404d4f
    MOV dword ptr [ESP],EAX             ; 00404d53
    MOV EAX,EDI                         ; 00404d56
    IMUL EDX                            ; 00404d58
    SHRD EAX,EDX,0x10                   ; 00404d5a
    MOV EDX,dword ptr [ESP]             ; 00404d5e
    ADD EDX,EAX                         ; 00404d61
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00404d63
    MOV dword ptr [ESP],EDX             ; 00404d67
    MOV EDX,dword ptr [ESP + 0x18]      ; 00404d6a
    IMUL EDX                            ; 00404d6e
    SHRD EAX,EDX,0x10                   ; 00404d70
    MOV EDX,dword ptr [ESP]             ; 00404d74
    ADD EDX,EAX                         ; 00404d77
    MOV dword ptr [0x01c039b8],EDX      ; 00404d79 | g_RelativeX
    MOV EAX,dword ptr [ESP + 0x60]      ; 00404d7f
    MOV EDX,dword ptr [ESP + 0x10]      ; 00404d83
    IMUL EDX                            ; 00404d87
    SHRD EAX,EDX,0x10                   ; 00404d89
    MOV EDX,dword ptr [ESP + 0x14]      ; 00404d8d
    MOV dword ptr [ESP],EAX             ; 00404d91
    MOV EAX,ECX                         ; 00404d94
    IMUL EDX                            ; 00404d96
    SHRD EAX,EDX,0x10                   ; 00404d98
    MOV EDX,dword ptr [ESP]             ; 00404d9c
    ADD EDX,EAX                         ; 00404d9f
    MOV dword ptr [ESP],EDX             ; 00404da1
    MOV EAX,ESI                         ; 00404da4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00404da6
    IMUL EDX                            ; 00404daa
    SHRD EAX,EDX,0x10                   ; 00404dac
    MOV EDX,dword ptr [ESP]             ; 00404db0
    ADD EDX,EAX                         ; 00404db3
    MOV dword ptr [0x01c039bc],EDX      ; 00404db5 | g_RelativeY
    MOV EAX,EBP                         ; 00404dbb
    MOV EDX,dword ptr [ESP + 0x10]      ; 00404dbd
    IMUL EDX                            ; 00404dc1
    SHRD EAX,EDX,0x10                   ; 00404dc3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00404dc7
    MOV dword ptr [ESP],EAX             ; 00404dcb
    MOV EAX,dword ptr [ESP + 0x64]      ; 00404dce
    IMUL EDX                            ; 00404dd2
    SHRD EAX,EDX,0x10                   ; 00404dd4
    MOV EDX,dword ptr [ESP]             ; 00404dd8
    ADD EDX,EAX                         ; 00404ddb
    MOV dword ptr [ESP],EDX             ; 00404ddd
    MOV EAX,EBX                         ; 00404de0
    MOV EDX,dword ptr [ESP + 0x18]      ; 00404de2
    IMUL EDX                            ; 00404de6
    SHRD EAX,EDX,0x10                   ; 00404de8
    MOV EDX,dword ptr [ESP]             ; 00404dec
    ADD EDX,EAX                         ; 00404def
    MOV EAX,dword ptr [ESP + 0x50]      ; 00404df1
    MOV dword ptr [0x01c039c0],EDX      ; 00404df5 | g_RelativeZ
    MOV EDX,dword ptr [ESP + 0x40]      ; 00404dfb
    IMUL EDX                            ; 00404dff
    SHRD EAX,EDX,0x10                   ; 00404e01
    MOV EDX,dword ptr [ESP + 0x30]      ; 00404e05
    MOV dword ptr [ESP],EAX             ; 00404e09
    MOV EAX,EDI                         ; 00404e0c
    IMUL EDX                            ; 00404e0e
    SHRD EAX,EDX,0x10                   ; 00404e10
    MOV EDX,dword ptr [ESP]             ; 00404e14
    ADD EDX,EAX                         ; 00404e17
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00404e19
    MOV dword ptr [ESP],EDX             ; 00404e1d
    MOV EDX,dword ptr [ESP + 0x34]      ; 00404e20
    IMUL EDX                            ; 00404e24
    SHRD EAX,EDX,0x10                   ; 00404e26
    MOV EDX,dword ptr [ESP]             ; 00404e2a
    ADD EDX,EAX                         ; 00404e2d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00404e2f
    MOV dword ptr [0x01c039dc],EDX      ; 00404e33 | DAT_01c039dc
    MOV EDX,dword ptr [ESP + 0x40]      ; 00404e39
    IMUL EDX                            ; 00404e3d
    SHRD EAX,EDX,0x10                   ; 00404e3f
    MOV EDX,dword ptr [ESP + 0x30]      ; 00404e43
    MOV dword ptr [ESP],EAX             ; 00404e47
    MOV EAX,ECX                         ; 00404e4a
    IMUL EDX                            ; 00404e4c
    SHRD EAX,EDX,0x10                   ; 00404e4e
    MOV EDX,dword ptr [ESP]             ; 00404e52
    ADD EDX,EAX                         ; 00404e55
    MOV dword ptr [ESP],EDX             ; 00404e57
    MOV EAX,ESI                         ; 00404e5a
    MOV EDX,dword ptr [ESP + 0x34]      ; 00404e5c
    IMUL EDX                            ; 00404e60
    SHRD EAX,EDX,0x10                   ; 00404e62
    MOV EDX,dword ptr [ESP]             ; 00404e66
    ADD EDX,EAX                         ; 00404e69
    MOV dword ptr [0x01c039e0],EDX      ; 00404e6b | DAT_01c039e0
    MOV EDX,dword ptr [ESP + 0x40]      ; 00404e71
    MOV EAX,EBP                         ; 00404e75
    IMUL EDX                            ; 00404e77
    SHRD EAX,EDX,0x10                   ; 00404e79
    MOV EDX,dword ptr [ESP + 0x30]      ; 00404e7d
    MOV dword ptr [ESP],EAX             ; 00404e81
    MOV EAX,dword ptr [ESP + 0x64]      ; 00404e84
    IMUL EDX                            ; 00404e88
    SHRD EAX,EDX,0x10                   ; 00404e8a
    MOV EDX,dword ptr [ESP]             ; 00404e8e
    ADD EDX,EAX                         ; 00404e91
    MOV dword ptr [ESP],EDX             ; 00404e93
    MOV EAX,EBX                         ; 00404e96
    MOV EDX,dword ptr [ESP + 0x34]      ; 00404e98
    IMUL EDX                            ; 00404e9c
    SHRD EAX,EDX,0x10                   ; 00404e9e
    MOV EDX,dword ptr [ESP]             ; 00404ea2
    ADD EDX,EAX                         ; 00404ea5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00404ea7
    MOV dword ptr [0x01c039e4],EDX      ; 00404eab | DAT_01c039e4
    MOV EDX,dword ptr [ESP + 0x50]      ; 00404eb1
    IMUL EDX                            ; 00404eb5
    SHRD EAX,EDX,0x10                   ; 00404eb7
    MOV dword ptr [ESP],EAX             ; 00404ebb
    MOV EDX,EDI                         ; 00404ebe
    MOV EAX,dword ptr [ESP + 0x24]      ; 00404ec0
    IMUL EDX                            ; 00404ec4
    SHRD EAX,EDX,0x10                   ; 00404ec6
    MOV EDX,dword ptr [ESP]             ; 00404eca
    ADD EDX,EAX                         ; 00404ecd
    MOV EAX,dword ptr [ESP + 0x38]      ; 00404ecf
    MOV dword ptr [ESP],EDX             ; 00404ed3
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00404ed6
    IMUL EDX                            ; 00404eda
    SHRD EAX,EDX,0x10                   ; 00404edc
    MOV EDX,dword ptr [ESP]             ; 00404ee0
    ADD EDX,EAX                         ; 00404ee3
    MOV EAX,dword ptr [ESP + 0x44]      ; 00404ee5
    MOV dword ptr [0x01c039e8],EDX      ; 00404ee9 | g_TransformMatrix
    MOV EDX,dword ptr [ESP + 0x50]      ; 00404eef
    IMUL EDX                            ; 00404ef3
    SHRD EAX,EDX,0x10                   ; 00404ef5
    MOV dword ptr [ESP],EAX             ; 00404ef9
    MOV EDX,EDI                         ; 00404efc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00404efe
    IMUL EDX                            ; 00404f02
    SHRD EAX,EDX,0x10                   ; 00404f04
    MOV EDX,dword ptr [ESP]             ; 00404f08
    ADD EDX,EAX                         ; 00404f0b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00404f0d
    MOV dword ptr [ESP],EDX             ; 00404f11
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00404f14
    IMUL EDX                            ; 00404f18
    SHRD EAX,EDX,0x10                   ; 00404f1a
    MOV EDX,dword ptr [ESP]             ; 00404f1e
    ADD EDX,EAX                         ; 00404f21
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00404f23
    MOV dword ptr [0x01c039ec],EDX      ; 00404f27 | g_TransformMatrix.m[0].y
    MOV EDX,dword ptr [ESP + 0x50]      ; 00404f2d
    IMUL EDX                            ; 00404f31
    SHRD EAX,EDX,0x10                   ; 00404f33
    MOV dword ptr [ESP],EAX             ; 00404f37
    MOV EDX,EDI                         ; 00404f3a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00404f3c
    MOV EDI,dword ptr [ESP]             ; 00404f40
    IMUL EDX                            ; 00404f43
    SHRD EAX,EDX,0x10                   ; 00404f45
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00404f49
    ADD EDI,EAX                         ; 00404f4d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00404f4f
    IMUL EDX                            ; 00404f53
    SHRD EAX,EDX,0x10                   ; 00404f55
    ADD EDI,EAX                         ; 00404f59
    MOV dword ptr [0x01c039f0],EDI      ; 00404f5b | g_TransformMatrix.m[0].z
    MOV EAX,dword ptr [ESP + 0x28]      ; 00404f61
    MOV EDX,dword ptr [ESP + 0x60]      ; 00404f65
    IMUL EDX                            ; 00404f69
    SHRD EAX,EDX,0x10                   ; 00404f6b
    MOV EDI,EAX                         ; 00404f6f
    MOV EDX,ECX                         ; 00404f71
    MOV EAX,dword ptr [ESP + 0x24]      ; 00404f73
    IMUL EDX                            ; 00404f77
    SHRD EAX,EDX,0x10                   ; 00404f79
    MOV EDX,ESI                         ; 00404f7d
    ADD EDI,EAX                         ; 00404f7f
    MOV EAX,dword ptr [ESP + 0x38]      ; 00404f81
    IMUL EDX                            ; 00404f85
    SHRD EAX,EDX,0x10                   ; 00404f87
    MOV EDX,dword ptr [ESP + 0x60]      ; 00404f8b
    ADD EDI,EAX                         ; 00404f8f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00404f91
    MOV dword ptr [0x01c039f4],EDI      ; 00404f95 | g_TransformMatrix.m[1].x
    IMUL EDX                            ; 00404f9b
    SHRD EAX,EDX,0x10                   ; 00404f9d
    MOV EDI,EAX                         ; 00404fa1
    MOV EDX,ECX                         ; 00404fa3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00404fa5
    IMUL EDX                            ; 00404fa9
    SHRD EAX,EDX,0x10                   ; 00404fab
    MOV EDX,ESI                         ; 00404faf
    ADD EDI,EAX                         ; 00404fb1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00404fb3
    IMUL EDX                            ; 00404fb7
    SHRD EAX,EDX,0x10                   ; 00404fb9
    MOV EDX,dword ptr [ESP + 0x60]      ; 00404fbd
    ADD EDI,EAX                         ; 00404fc1
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00404fc3
    MOV dword ptr [0x01c039f8],EDI      ; 00404fc7 | g_TransformMatrix.m[1].y
    IMUL EDX                            ; 00404fcd
    SHRD EAX,EDX,0x10                   ; 00404fcf
    MOV EDI,EAX                         ; 00404fd3
    MOV EDX,ECX                         ; 00404fd5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00404fd7
    IMUL EDX                            ; 00404fdb
    SHRD EAX,EDX,0x10                   ; 00404fdd
    MOV EDX,ESI                         ; 00404fe1
    ADD EDI,EAX                         ; 00404fe3
    MOV EAX,dword ptr [ESP + 0x48]      ; 00404fe5
    IMUL EDX                            ; 00404fe9
    SHRD EAX,EDX,0x10                   ; 00404feb
    MOV EDX,EBP                         ; 00404fef
    ADD EDI,EAX                         ; 00404ff1
    MOV EAX,dword ptr [ESP + 0x28]      ; 00404ff3
    MOV dword ptr [0x01c039fc],EDI      ; 00404ff7 | g_TransformMatrix.m[1].z
    IMUL EDX                            ; 00404ffd
    SHRD EAX,EDX,0x10                   ; 00404fff
    MOV EDX,dword ptr [ESP + 0x64]      ; 00405003
    MOV ECX,EAX                         ; 00405007
    MOV EAX,dword ptr [ESP + 0x24]      ; 00405009
    IMUL EDX                            ; 0040500d
    SHRD EAX,EDX,0x10                   ; 0040500f
    MOV EDX,EBX                         ; 00405013
    ADD ECX,EAX                         ; 00405015
    MOV EAX,dword ptr [ESP + 0x38]      ; 00405017
    IMUL EDX                            ; 0040501b
    SHRD EAX,EDX,0x10                   ; 0040501d
    ADD ECX,EAX                         ; 00405021
    MOV dword ptr [0x01c03a00],ECX      ; 00405023 | g_TransformMatrix.m[2].x
    MOV EAX,dword ptr [ESP + 0x44]      ; 00405029
    MOV EDX,EBP                         ; 0040502d
    IMUL EDX                            ; 0040502f
    SHRD EAX,EDX,0x10                   ; 00405031
    MOV EDX,dword ptr [ESP + 0x64]      ; 00405035
    MOV ECX,EAX                         ; 00405039
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040503b
    IMUL EDX                            ; 0040503f
    SHRD EAX,EDX,0x10                   ; 00405041
    MOV EDX,EBX                         ; 00405045
    ADD ECX,EAX                         ; 00405047
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00405049
    IMUL EDX                            ; 0040504d
    SHRD EAX,EDX,0x10                   ; 0040504f
    MOV EDX,EBP                         ; 00405053
    ADD ECX,EAX                         ; 00405055
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00405057
    MOV dword ptr [0x01c03a04],ECX      ; 0040505b | g_TransformMatrix.m[2].y
    IMUL EDX                            ; 00405061
    SHRD EAX,EDX,0x10                   ; 00405063
    MOV EDX,dword ptr [ESP + 0x64]      ; 00405067
    MOV ECX,EAX                         ; 0040506b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0040506d
    IMUL EDX                            ; 00405071
    SHRD EAX,EDX,0x10                   ; 00405073
    MOV EDX,EBX                         ; 00405077
    ADD ECX,EAX                         ; 00405079
    MOV EAX,dword ptr [ESP + 0x48]      ; 0040507b
    IMUL EDX                            ; 0040507f
    SHRD EAX,EDX,0x10                   ; 00405081
    ADD ECX,EAX                         ; 00405085
    MOV EAX,dword ptr [ESP + 0x80]      ; 00405087
    MOV dword ptr [0x01c03a08],ECX      ; 0040508e | g_TransformMatrix.m[2].z
    ADD EAX,dword ptr [EAX + 0x4]       ; 00405094
    PUSH EAX                            ; 00405097
    CALL engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80 ; 00405098
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80(SMRGLHeaderExtended * chain)
    ADD ESP,0x4                         ; 0040509d
    MOV EAX,dword ptr [ESP + 0x28]      ; 004050a0
    MOV [0x01c039e8],EAX                ; 004050a4 | g_TransformMatrix
    MOV EAX,dword ptr [ESP + 0x44]      ; 004050a9
    MOV [0x01c039ec],EAX                ; 004050ad | g_TransformMatrix.m[0].y
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004050b2
    MOV [0x01c039f0],EAX                ; 004050b6 | g_TransformMatrix.m[0].z
    MOV EAX,dword ptr [ESP + 0x24]      ; 004050bb
    MOV [0x01c039f4],EAX                ; 004050bf | g_TransformMatrix.m[1].x
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004050c4
    MOV [0x01c039f8],EAX                ; 004050c8 | g_TransformMatrix.m[1].y
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004050cd
    MOV [0x01c039fc],EAX                ; 004050d1 | g_TransformMatrix.m[1].z
    MOV EAX,dword ptr [ESP + 0x38]      ; 004050d6
    MOV [0x01c03a00],EAX                ; 004050da | g_TransformMatrix.m[2].x
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004050df
    MOV [0x01c03a04],EAX                ; 004050e3 | g_TransformMatrix.m[2].y
    MOV EAX,dword ptr [ESP + 0x48]      ; 004050e8
    MOV [0x01c03a08],EAX                ; 004050ec | g_TransformMatrix.m[2].z
    MOV EAX,dword ptr [ESP + 0x4]       ; 004050f1
    MOV [0x01c039b8],EAX                ; 004050f5 | g_RelativeX
    MOV EAX,dword ptr [ESP + 0xc]       ; 004050fa
    MOV [0x01c039bc],EAX                ; 004050fe | g_RelativeY
    MOV EAX,dword ptr [ESP + 0x8]       ; 00405103
    MOV [0x01c039c0],EAX                ; 00405107 | g_RelativeZ
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040510c
    MOV [0x01c039dc],EAX                ; 00405110 | DAT_01c039dc
    MOV EAX,dword ptr [ESP + 0x30]      ; 00405115
    MOV [0x01c039e0],EAX                ; 00405119 | DAT_01c039e0
    MOV EAX,dword ptr [ESP + 0x34]      ; 0040511e
    MOV [0x01c039e4],EAX                ; 00405122 | DAT_01c039e4
    MOV EAX,dword ptr [ESP + 0x80]      ; 00405127
    ADD EAX,0x20                        ; 0040512e
    ADD ESP,0x6c                        ; 00405131
    POP EBP                             ; 00405134
    POP EDI                             ; 00405135
    POP ESI                             ; 00405136
    POP EBX                             ; 00405137
    RET                                 ; 00405138

