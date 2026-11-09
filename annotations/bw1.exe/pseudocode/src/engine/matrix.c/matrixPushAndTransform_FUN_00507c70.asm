; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_00507c70(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)
;
; Parameters:
; int              Stack[0x4]:4   rot_x
; int              Stack[0x8]:4   rot_y
; int              Stack[0xc]:4   rot_z
; int              Stack[0x10]:4   translate_x
; int              Stack[0x14]:4   translate_y
; int              Stack[0x18]:4   translate_z
; Local Variables:
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
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 at 0048381d
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 at 004838be
;   shape_edittool.cpp_FUN_004985ae at 0049862a
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005e76ee
;   TerminatedCString s_Matrix_unbalance_005e7701
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01c51d50
;   undefined4 DAT_01c51d54
;   undefined4 DAT_01c51d58
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_matrix.c_FUN_00507350
;   engine_matrix.c_FUN_00507390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507c70
        ;   Label: engine_matrix.c_matrixPushAndTransform_FUN_00507c70
    PUSH ESI                            ; 00507c71
    PUSH EDI                            ; 00507c72
    PUSH EBP                            ; 00507c73
    SUB ESP,0x30                        ; 00507c74
    MOV EDI,dword ptr [ESP + 0x44]      ; 00507c77
    MOV EBX,dword ptr [ESP + 0x48]      ; 00507c7b
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00507c7f
    MOV EAX,[0x01d1dd74]                ; 00507c83 | DAT_01d1dd74
    MOV EDX,dword ptr [0x01c51d2c]      ; 00507c88 | DAT_01c51d2c
    MOV dword ptr [EAX*0x4 + 0x1d1dee0],EDX ; 00507c8e
    MOV EDX,dword ptr [0x01c51d30]      ; 00507c95 | DAT_01c51d30
    MOV dword ptr [EAX*0x4 + 0x1d1df08],EDX ; 00507c9b
    MOV EDX,dword ptr [0x01c51d34]      ; 00507ca2 | DAT_01c51d34
    MOV dword ptr [EAX*0x4 + 0x1d1df30],EDX ; 00507ca8
    MOV EDX,dword ptr [0x01c51d50]      ; 00507caf | DAT_01c51d50
    MOV dword ptr [EAX*0x4 + 0x1d1df58],EDX ; 00507cb5
    MOV EDX,dword ptr [0x01c51d54]      ; 00507cbc | DAT_01c51d54
    MOV dword ptr [EAX*0x4 + 0x1d1df80],EDX ; 00507cc2
    MOV EDX,dword ptr [0x01c51d58]      ; 00507cc9 | DAT_01c51d58
    MOV dword ptr [EAX*0x4 + 0x1d1dfa8],EDX ; 00507ccf
    MOV EDX,dword ptr [0x01c51d5c]      ; 00507cd6 | DAT_01c51d5c
    MOV dword ptr [EAX*0x4 + 0x1d1dd78],EDX ; 00507cdc
    MOV EDX,dword ptr [0x01c51d60]      ; 00507ce3 | DAT_01c51d60
    MOV dword ptr [EAX*0x4 + 0x1d1dda0],EDX ; 00507ce9
    MOV EDX,dword ptr [0x01c51d64]      ; 00507cf0 | DAT_01c51d64
    MOV dword ptr [EAX*0x4 + 0x1d1ddc8],EDX ; 00507cf6
    MOV EDX,dword ptr [0x01c51d68]      ; 00507cfd | DAT_01c51d68
    MOV dword ptr [EAX*0x4 + 0x1d1ddf0],EDX ; 00507d03
    MOV EDX,dword ptr [0x01c51d6c]      ; 00507d0a | DAT_01c51d6c
    MOV dword ptr [EAX*0x4 + 0x1d1de18],EDX ; 00507d10
    MOV EDX,dword ptr [0x01c51d70]      ; 00507d17 | DAT_01c51d70
    MOV dword ptr [EAX*0x4 + 0x1d1de40],EDX ; 00507d1d
    MOV EDX,dword ptr [0x01c51d74]      ; 00507d24 | DAT_01c51d74
    MOV dword ptr [EAX*0x4 + 0x1d1de68],EDX ; 00507d2a
    MOV EDX,dword ptr [0x01c51d78]      ; 00507d31 | DAT_01c51d78
    MOV dword ptr [EAX*0x4 + 0x1d1de90],EDX ; 00507d37
    MOV EDX,dword ptr [0x01c51d7c]      ; 00507d3e | DAT_01c51d7c
    MOV dword ptr [EAX*0x4 + 0x1d1deb8],EDX ; 00507d44
    MOV EDX,dword ptr [ESP + 0x50]      ; 00507d4b
    MOV EAX,[0x01c51d2c]                ; 00507d4f | DAT_01c51d2c
    SUB EAX,EDX                         ; 00507d54
    MOV ECX,dword ptr [ESP + 0x54]      ; 00507d56
    MOV dword ptr [ESP + 0x8],EAX       ; 00507d5a
    MOV EAX,[0x01c51d30]                ; 00507d5e | DAT_01c51d30
    SUB EAX,ECX                         ; 00507d63
    MOV EBP,dword ptr [ESP + 0x58]      ; 00507d65
    MOV dword ptr [ESP + 0x4],EAX       ; 00507d69
    MOV EAX,[0x01c51d34]                ; 00507d6d | DAT_01c51d34
    SUB EAX,EBP                         ; 00507d72
    MOV dword ptr [0x01d1dd68],EBX      ; 00507d74 | DAT_01d1dd68
    MOV dword ptr [ESP + 0x10],EAX      ; 00507d7a
    MOV EAX,EDI                         ; 00507d7e
    MOV dword ptr [0x01d1dd6c],ESI      ; 00507d80 | DAT_01d1dd6c
    OR EAX,EBX                          ; 00507d86
    MOV dword ptr [0x01d1dd64],EDI      ; 00507d88 | DAT_01d1dd64
    OR EAX,ESI                          ; 00507d8e
    JNZ 0x00507dcb                      ; 00507d90
        ;   XREF to: 00507dcb (CONDITIONAL_JUMP)  ; LAB_00507dcb
    MOV EAX,dword ptr [ESP + 0x8]       ; 00507d92
    MOV [0x01c51d2c],EAX                ; 00507d96 | DAT_01c51d2c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00507d9b
    MOV [0x01c51d30],EAX                ; 00507d9f | DAT_01c51d30
    MOV EAX,dword ptr [ESP + 0x10]      ; 00507da4
    MOV [0x01c51d34],EAX                ; 00507da8 | DAT_01c51d34
    MOV EDX,dword ptr [0x01d1dd74]      ; 00507dad | DAT_01d1dd74
        ;   Label: LAB_00507dad
    INC EDX                             ; 00507db3
    MOV dword ptr [0x01d1dd74],EDX      ; 00507db4 | DAT_01d1dd74
    CMP EDX,0x9                         ; 00507dba
    JG 0x00508385                       ; 00507dbd
        ;   XREF to: 00508385 (CONDITIONAL_JUMP)  ; LAB_00508385
    ADD ESP,0x30                        ; 00507dc3
    POP EBP                             ; 00507dc6
    POP EDI                             ; 00507dc7
    POP ESI                             ; 00507dc8
    POP EBX                             ; 00507dc9
    RET                                 ; 00507dca
    PUSH EDI                            ; 00507dcb
        ;   Label: LAB_00507dcb
    CALL engine_matrix.c_FUN_00507350   ; 00507dcc
        ;   XREF to: 00507350 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_00507350(int angle)
    MOV dword ptr [ESP + 0x20],EAX      ; 00507dd1
    ADD ESP,0x4                         ; 00507dd5
    PUSH EDI                            ; 00507dd8
    CALL engine_matrix.c_FUN_00507390   ; 00507dd9
        ;   XREF to: 00507390 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00507390()
    MOV dword ptr [ESP + 0x10],EAX      ; 00507dde
    ADD ESP,0x4                         ; 00507de2
    PUSH EBX                            ; 00507de5
    CALL engine_matrix.c_FUN_00507350   ; 00507de6
        ;   XREF to: 00507350 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_00507350(int angle)
    ADD ESP,0x4                         ; 00507deb
    PUSH EBX                            ; 00507dee
    MOV EBP,EAX                         ; 00507def
    CALL engine_matrix.c_FUN_00507390   ; 00507df1
        ;   XREF to: 00507390 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00507390()
    ADD ESP,0x4                         ; 00507df6
    PUSH ESI                            ; 00507df9
    MOV EBX,EAX                         ; 00507dfa
    CALL engine_matrix.c_FUN_00507350   ; 00507dfc
        ;   XREF to: 00507350 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_00507350(int angle)
    MOV dword ptr [ESP + 0x28],EAX      ; 00507e01
    ADD ESP,0x4                         ; 00507e05
    PUSH ESI                            ; 00507e08
    CALL engine_matrix.c_FUN_00507390   ; 00507e09
        ;   XREF to: 00507390 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00507390()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00507e0e
    ADD ESP,0x4                         ; 00507e12
    MOV EAX,EBX                         ; 00507e15
    MOV EDX,dword ptr [ESP + 0x28]      ; 00507e17
    IMUL EDX                            ; 00507e1b
    SHRD EAX,EDX,0x10                   ; 00507e1d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00507e21
    MOV ECX,EAX                         ; 00507e25
    MOV EAX,EBP                         ; 00507e27
    IMUL EDX                            ; 00507e29
    SHRD EAX,EDX,0x10                   ; 00507e2b
    MOV EDX,dword ptr [ESP + 0x24]      ; 00507e2f
    IMUL EDX                            ; 00507e33
    SHRD EAX,EDX,0x10                   ; 00507e35
    MOV EDX,dword ptr [ESP + 0x28]      ; 00507e39
    ADD ECX,EAX                         ; 00507e3d
    NEG EDX                             ; 00507e3f
    MOV EAX,EBP                         ; 00507e41
    MOV dword ptr [ESP + 0x18],ECX      ; 00507e43
    IMUL EDX                            ; 00507e47
    SHRD EAX,EDX,0x10                   ; 00507e49
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00507e4d
    MOV ECX,EAX                         ; 00507e51
    MOV EAX,EBX                         ; 00507e53
    IMUL EDX                            ; 00507e55
    SHRD EAX,EDX,0x10                   ; 00507e57
    MOV EDX,dword ptr [ESP + 0x24]      ; 00507e5b
    IMUL EDX                            ; 00507e5f
    SHRD EAX,EDX,0x10                   ; 00507e61
    MOV EDX,dword ptr [ESP + 0x24]      ; 00507e65
    ADD ECX,EAX                         ; 00507e69
    MOV EAX,dword ptr [ESP + 0xc]       ; 00507e6b
    MOV dword ptr [ESP + 0x20],ECX      ; 00507e6f
    IMUL EDX                            ; 00507e73
    SHRD EAX,EDX,0x10                   ; 00507e75
    MOV ECX,EAX                         ; 00507e79
    MOV EDX,EBP                         ; 00507e7b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00507e7d
    IMUL EDX                            ; 00507e81
    SHRD EAX,EDX,0x10                   ; 00507e83
    MOV ESI,EAX                         ; 00507e87
    MOV EAX,dword ptr [ESP + 0xc]       ; 00507e89
    MOV EDX,EBX                         ; 00507e8d
    IMUL EDX                            ; 00507e8f
    SHRD EAX,EDX,0x10                   ; 00507e91
    MOV EDI,EAX                         ; 00507e95
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00507e97
    MOV EDX,dword ptr [ESP + 0x24]      ; 00507e9b
    MOV dword ptr [ESP + 0x14],EAX      ; 00507e9f
    NEG EAX                             ; 00507ea3
    NEG EDX                             ; 00507ea5
    MOV dword ptr [ESP + 0x14],EAX      ; 00507ea7
    MOV EAX,EBX                         ; 00507eab
    IMUL EDX                            ; 00507ead
    SHRD EAX,EDX,0x10                   ; 00507eaf
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00507eb3
    MOV dword ptr [ESP],EAX             ; 00507eb7
    MOV EAX,EBP                         ; 00507eba
    IMUL EDX                            ; 00507ebc
    SHRD EAX,EDX,0x10                   ; 00507ebe
    MOV EDX,dword ptr [ESP + 0x28]      ; 00507ec2
    IMUL EDX                            ; 00507ec6
    SHRD EAX,EDX,0x10                   ; 00507ec8
    MOV EDX,dword ptr [ESP]             ; 00507ecc
    ADD EDX,EAX                         ; 00507ecf
    MOV EAX,dword ptr [ESP + 0x24]      ; 00507ed1
    MOV dword ptr [ESP + 0x2c],EDX      ; 00507ed5
    MOV EDX,EBP                         ; 00507ed9
    IMUL EDX                            ; 00507edb
    SHRD EAX,EDX,0x10                   ; 00507edd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00507ee1
    MOV EBP,EAX                         ; 00507ee5
    MOV EAX,EBX                         ; 00507ee7
    IMUL EDX                            ; 00507ee9
    SHRD EAX,EDX,0x10                   ; 00507eeb
    MOV EDX,dword ptr [ESP + 0x28]      ; 00507eef
    IMUL EDX                            ; 00507ef3
    SHRD EAX,EDX,0x10                   ; 00507ef5
    MOV EDX,dword ptr [ESP + 0x28]      ; 00507ef9
    ADD EBP,EAX                         ; 00507efd
    MOV EAX,dword ptr [ESP + 0xc]       ; 00507eff
    IMUL EDX                            ; 00507f03
    SHRD EAX,EDX,0x10                   ; 00507f05
    MOV EDX,dword ptr [ESP + 0x8]       ; 00507f09
    MOV EBX,EAX                         ; 00507f0d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00507f0f
    IMUL EDX                            ; 00507f13
    SHRD EAX,EDX,0x10                   ; 00507f15
    MOV EDX,dword ptr [ESP + 0x4]       ; 00507f19
    MOV dword ptr [ESP],EAX             ; 00507f1d
    MOV EAX,ESI                         ; 00507f20
    IMUL EDX                            ; 00507f22
    SHRD EAX,EDX,0x10                   ; 00507f24
    MOV EDX,dword ptr [ESP]             ; 00507f28
    ADD EDX,EAX                         ; 00507f2b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00507f2d
    MOV dword ptr [ESP],EDX             ; 00507f31
    MOV EDX,dword ptr [ESP + 0x10]      ; 00507f34
    IMUL EDX                            ; 00507f38
    SHRD EAX,EDX,0x10                   ; 00507f3a
    MOV EDX,dword ptr [ESP]             ; 00507f3e
    ADD EDX,EAX                         ; 00507f41
    MOV EAX,dword ptr [ESP + 0x20]      ; 00507f43
    MOV dword ptr [0x01c51d2c],EDX      ; 00507f47 | DAT_01c51d2c
    MOV EDX,dword ptr [ESP + 0x8]       ; 00507f4d
    IMUL EDX                            ; 00507f51
    SHRD EAX,EDX,0x10                   ; 00507f53
    MOV EDX,dword ptr [ESP + 0x4]       ; 00507f57
    MOV dword ptr [ESP],EAX             ; 00507f5b
    MOV EAX,EDI                         ; 00507f5e
    IMUL EDX                            ; 00507f60
    SHRD EAX,EDX,0x10                   ; 00507f62
    MOV EDX,dword ptr [ESP]             ; 00507f66
    ADD EDX,EAX                         ; 00507f69
    MOV dword ptr [ESP],EDX             ; 00507f6b
    MOV EAX,EBP                         ; 00507f6e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00507f70
    IMUL EDX                            ; 00507f74
    SHRD EAX,EDX,0x10                   ; 00507f76
    MOV EDX,dword ptr [ESP]             ; 00507f7a
    ADD EDX,EAX                         ; 00507f7d
    MOV dword ptr [0x01c51d30],EDX      ; 00507f7f | DAT_01c51d30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00507f85
    MOV EAX,ECX                         ; 00507f89
    IMUL EDX                            ; 00507f8b
    SHRD EAX,EDX,0x10                   ; 00507f8d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00507f91
    MOV dword ptr [ESP],EAX             ; 00507f95
    MOV EAX,dword ptr [ESP + 0x14]      ; 00507f98
    IMUL EDX                            ; 00507f9c
    SHRD EAX,EDX,0x10                   ; 00507f9e
    MOV EDX,dword ptr [ESP]             ; 00507fa2
    ADD EDX,EAX                         ; 00507fa5
    MOV dword ptr [ESP],EDX             ; 00507fa7
    MOV EAX,EBX                         ; 00507faa
    MOV EDX,dword ptr [ESP + 0x10]      ; 00507fac
    IMUL EDX                            ; 00507fb0
    SHRD EAX,EDX,0x10                   ; 00507fb2
    MOV EDX,dword ptr [ESP]             ; 00507fb6
    ADD EDX,EAX                         ; 00507fb9
    MOV dword ptr [0x01c51d34],EDX      ; 00507fbb | DAT_01c51d34
    MOV EDX,dword ptr [0x01d1dd74]      ; 00507fc1 | DAT_01d1dd74
    MOV EAX,dword ptr [ESP + 0x18]      ; 00507fc7
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1df58] ; 00507fcb
    IMUL EDX                            ; 00507fd2
    SHRD EAX,EDX,0x10                   ; 00507fd4
    MOV EDX,dword ptr [0x01d1dd74]      ; 00507fd8 | DAT_01d1dd74
    MOV dword ptr [ESP],EAX             ; 00507fde
    MOV EAX,ESI                         ; 00507fe1
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1df80] ; 00507fe3
    IMUL EDX                            ; 00507fea
    SHRD EAX,EDX,0x10                   ; 00507fec
    MOV EDX,dword ptr [ESP]             ; 00507ff0
    ADD EDX,EAX                         ; 00507ff3
    MOV dword ptr [ESP],EDX             ; 00507ff5
    MOV EDX,dword ptr [0x01d1dd74]      ; 00507ff8 | DAT_01d1dd74
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00507ffe
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1dfa8] ; 00508002
    IMUL EDX                            ; 00508009
    SHRD EAX,EDX,0x10                   ; 0050800b
    MOV EDX,dword ptr [ESP]             ; 0050800f
    ADD EDX,EAX                         ; 00508012
    MOV dword ptr [0x01c51d50],EDX      ; 00508014 | DAT_01c51d50
    MOV EDX,dword ptr [0x01d1dd74]      ; 0050801a | DAT_01d1dd74
    MOV EAX,dword ptr [ESP + 0x20]      ; 00508020
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1df58] ; 00508024
    IMUL EDX                            ; 0050802b
    SHRD EAX,EDX,0x10                   ; 0050802d
    MOV EDX,dword ptr [0x01d1dd74]      ; 00508031 | DAT_01d1dd74
    MOV dword ptr [ESP],EAX             ; 00508037
    MOV EAX,EDI                         ; 0050803a
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1df80] ; 0050803c
    IMUL EDX                            ; 00508043
    SHRD EAX,EDX,0x10                   ; 00508045
    MOV EDX,dword ptr [ESP]             ; 00508049
    ADD EDX,EAX                         ; 0050804c
    MOV dword ptr [ESP],EDX             ; 0050804e
    MOV EDX,dword ptr [0x01d1dd74]      ; 00508051 | DAT_01d1dd74
    MOV EAX,EBP                         ; 00508057
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1dfa8] ; 00508059
    IMUL EDX                            ; 00508060
    SHRD EAX,EDX,0x10                   ; 00508062
    MOV EDX,dword ptr [ESP]             ; 00508066
    ADD EDX,EAX                         ; 00508069
    MOV dword ptr [0x01c51d54],EDX      ; 0050806b | DAT_01c51d54
    MOV EDX,dword ptr [0x01d1dd74]      ; 00508071 | DAT_01d1dd74
    MOV EAX,ECX                         ; 00508077
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1df58] ; 00508079
    IMUL EDX                            ; 00508080
    SHRD EAX,EDX,0x10                   ; 00508082
    MOV EDX,dword ptr [0x01d1dd74]      ; 00508086 | DAT_01d1dd74
    MOV dword ptr [ESP],EAX             ; 0050808c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050808f
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1df80] ; 00508093
    IMUL EDX                            ; 0050809a
    SHRD EAX,EDX,0x10                   ; 0050809c
    MOV EDX,dword ptr [ESP]             ; 005080a0
    ADD EDX,EAX                         ; 005080a3
    MOV dword ptr [ESP],EDX             ; 005080a5
    MOV EDX,dword ptr [0x01d1dd74]      ; 005080a8 | DAT_01d1dd74
    MOV EAX,EBX                         ; 005080ae
    MOV EDX,dword ptr [EDX*0x4 + 0x1d1dfa8] ; 005080b0
    IMUL EDX                            ; 005080b7
    SHRD EAX,EDX,0x10                   ; 005080b9
    MOV EDX,dword ptr [ESP]             ; 005080bd
    ADD EDX,EAX                         ; 005080c0
    MOV dword ptr [0x01c51d58],EDX      ; 005080c2 | DAT_01c51d58
    MOV EAX,[0x01d1dd74]                ; 005080c8 | DAT_01d1dd74
    MOV EDX,dword ptr [ESP + 0x18]      ; 005080cd
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1dd78] ; 005080d1
    IMUL EDX                            ; 005080d8
    SHRD EAX,EDX,0x10                   ; 005080da
    MOV dword ptr [ESP],EAX             ; 005080de
    MOV EAX,[0x01d1dd74]                ; 005080e1 | DAT_01d1dd74
    MOV EDX,ESI                         ; 005080e6
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1ddf0] ; 005080e8
    IMUL EDX                            ; 005080ef
    SHRD EAX,EDX,0x10                   ; 005080f1
    MOV EDX,dword ptr [ESP]             ; 005080f5
    ADD EDX,EAX                         ; 005080f8
    MOV EAX,[0x01d1dd74]                ; 005080fa | DAT_01d1dd74
    MOV dword ptr [ESP],EDX             ; 005080ff
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00508102
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de68] ; 00508106
    IMUL EDX                            ; 0050810d
    SHRD EAX,EDX,0x10                   ; 0050810f
    MOV EDX,dword ptr [ESP]             ; 00508113
    ADD EDX,EAX                         ; 00508116
    MOV EAX,[0x01d1dd74]                ; 00508118 | DAT_01d1dd74
    MOV dword ptr [0x01c51d5c],EDX      ; 0050811d | DAT_01c51d5c
    MOV EDX,dword ptr [ESP + 0x18]      ; 00508123
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1dda0] ; 00508127
    IMUL EDX                            ; 0050812e
    SHRD EAX,EDX,0x10                   ; 00508130
    MOV dword ptr [ESP],EAX             ; 00508134
    MOV EAX,[0x01d1dd74]                ; 00508137 | DAT_01d1dd74
    MOV EDX,ESI                         ; 0050813c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de18] ; 0050813e
    IMUL EDX                            ; 00508145
    SHRD EAX,EDX,0x10                   ; 00508147
    MOV EDX,dword ptr [ESP]             ; 0050814b
    ADD EDX,EAX                         ; 0050814e
    MOV EAX,[0x01d1dd74]                ; 00508150 | DAT_01d1dd74
    MOV dword ptr [ESP],EDX             ; 00508155
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00508158
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de90] ; 0050815c
    IMUL EDX                            ; 00508163
    SHRD EAX,EDX,0x10                   ; 00508165
    MOV EDX,dword ptr [ESP]             ; 00508169
    ADD EDX,EAX                         ; 0050816c
    MOV EAX,[0x01d1dd74]                ; 0050816e | DAT_01d1dd74
    MOV dword ptr [0x01c51d60],EDX      ; 00508173 | DAT_01c51d60
    MOV EDX,dword ptr [ESP + 0x18]      ; 00508179
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1ddc8] ; 0050817d
    IMUL EDX                            ; 00508184
    SHRD EAX,EDX,0x10                   ; 00508186
    MOV dword ptr [ESP],EAX             ; 0050818a
    MOV EAX,[0x01d1dd74]                ; 0050818d | DAT_01d1dd74
    MOV EDX,ESI                         ; 00508192
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de40] ; 00508194
    MOV ESI,dword ptr [ESP]             ; 0050819b
    IMUL EDX                            ; 0050819e
    SHRD EAX,EDX,0x10                   ; 005081a0
    ADD ESI,EAX                         ; 005081a4
    MOV EAX,[0x01d1dd74]                ; 005081a6 | DAT_01d1dd74
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005081ab
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1deb8] ; 005081af
    IMUL EDX                            ; 005081b6
    SHRD EAX,EDX,0x10                   ; 005081b8
    ADD ESI,EAX                         ; 005081bc
    MOV EAX,[0x01d1dd74]                ; 005081be | DAT_01d1dd74
    MOV EDX,dword ptr [ESP + 0x20]      ; 005081c3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1dd78] ; 005081c7
    MOV dword ptr [0x01c51d64],ESI      ; 005081ce | DAT_01c51d64
    IMUL EDX                            ; 005081d4
    SHRD EAX,EDX,0x10                   ; 005081d6
    MOV ESI,EAX                         ; 005081da
    MOV EAX,[0x01d1dd74]                ; 005081dc | DAT_01d1dd74
    MOV EDX,EDI                         ; 005081e1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1ddf0] ; 005081e3
    IMUL EDX                            ; 005081ea
    SHRD EAX,EDX,0x10                   ; 005081ec
    ADD ESI,EAX                         ; 005081f0
    MOV EAX,[0x01d1dd74]                ; 005081f2 | DAT_01d1dd74
    MOV EDX,EBP                         ; 005081f7
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de68] ; 005081f9
    IMUL EDX                            ; 00508200
    SHRD EAX,EDX,0x10                   ; 00508202
    ADD ESI,EAX                         ; 00508206
    MOV dword ptr [0x01c51d68],ESI      ; 00508208 | DAT_01c51d68
    MOV EAX,[0x01d1dd74]                ; 0050820e | DAT_01d1dd74
    MOV EDX,dword ptr [ESP + 0x20]      ; 00508213
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1dda0] ; 00508217
    IMUL EDX                            ; 0050821e
    SHRD EAX,EDX,0x10                   ; 00508220
    MOV ESI,EAX                         ; 00508224
    MOV EAX,[0x01d1dd74]                ; 00508226 | DAT_01d1dd74
    MOV EDX,EDI                         ; 0050822b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de18] ; 0050822d
    IMUL EDX                            ; 00508234
    SHRD EAX,EDX,0x10                   ; 00508236
    ADD ESI,EAX                         ; 0050823a
    MOV EAX,[0x01d1dd74]                ; 0050823c | DAT_01d1dd74
    MOV EDX,EBP                         ; 00508241
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de90] ; 00508243
    IMUL EDX                            ; 0050824a
    SHRD EAX,EDX,0x10                   ; 0050824c
    ADD ESI,EAX                         ; 00508250
    MOV EAX,[0x01d1dd74]                ; 00508252 | DAT_01d1dd74
    MOV EDX,dword ptr [ESP + 0x20]      ; 00508257
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1ddc8] ; 0050825b
    MOV dword ptr [0x01c51d6c],ESI      ; 00508262 | DAT_01c51d6c
    IMUL EDX                            ; 00508268
    SHRD EAX,EDX,0x10                   ; 0050826a
    MOV ESI,EAX                         ; 0050826e
    MOV EAX,[0x01d1dd74]                ; 00508270 | DAT_01d1dd74
    MOV EDX,EDI                         ; 00508275
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de40] ; 00508277
    IMUL EDX                            ; 0050827e
    SHRD EAX,EDX,0x10                   ; 00508280
    ADD ESI,EAX                         ; 00508284
    MOV EAX,[0x01d1dd74]                ; 00508286 | DAT_01d1dd74
    MOV EDX,EBP                         ; 0050828b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1deb8] ; 0050828d
    IMUL EDX                            ; 00508294
    SHRD EAX,EDX,0x10                   ; 00508296
    ADD ESI,EAX                         ; 0050829a
    MOV EAX,[0x01d1dd74]                ; 0050829c | DAT_01d1dd74
    MOV EDX,ECX                         ; 005082a1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1dd78] ; 005082a3
    MOV dword ptr [0x01c51d70],ESI      ; 005082aa | DAT_01c51d70
    IMUL EDX                            ; 005082b0
    SHRD EAX,EDX,0x10                   ; 005082b2
    MOV ESI,EAX                         ; 005082b6
    MOV EAX,[0x01d1dd74]                ; 005082b8 | DAT_01d1dd74
    MOV EDX,dword ptr [ESP + 0x14]      ; 005082bd
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1ddf0] ; 005082c1
    IMUL EDX                            ; 005082c8
    SHRD EAX,EDX,0x10                   ; 005082ca
    ADD ESI,EAX                         ; 005082ce
    MOV EAX,[0x01d1dd74]                ; 005082d0 | DAT_01d1dd74
    MOV EDX,EBX                         ; 005082d5
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de68] ; 005082d7
    IMUL EDX                            ; 005082de
    SHRD EAX,EDX,0x10                   ; 005082e0
    ADD ESI,EAX                         ; 005082e4
    MOV EAX,[0x01d1dd74]                ; 005082e6 | DAT_01d1dd74
    MOV EDX,ECX                         ; 005082eb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1dda0] ; 005082ed
    MOV dword ptr [0x01c51d74],ESI      ; 005082f4 | DAT_01c51d74
    IMUL EDX                            ; 005082fa
    SHRD EAX,EDX,0x10                   ; 005082fc
    MOV ESI,EAX                         ; 00508300
    MOV EAX,[0x01d1dd74]                ; 00508302 | DAT_01d1dd74
    MOV EDX,dword ptr [ESP + 0x14]      ; 00508307
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de18] ; 0050830b
    IMUL EDX                            ; 00508312
    SHRD EAX,EDX,0x10                   ; 00508314
    ADD ESI,EAX                         ; 00508318
    MOV EAX,[0x01d1dd74]                ; 0050831a | DAT_01d1dd74
    MOV EDX,EBX                         ; 0050831f
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de90] ; 00508321
    IMUL EDX                            ; 00508328
    SHRD EAX,EDX,0x10                   ; 0050832a
    ADD ESI,EAX                         ; 0050832e
    MOV dword ptr [0x01c51d78],ESI      ; 00508330 | DAT_01c51d78
    MOV EAX,[0x01d1dd74]                ; 00508336 | DAT_01d1dd74
    MOV EDX,ECX                         ; 0050833b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1ddc8] ; 0050833d
    IMUL EDX                            ; 00508344
    SHRD EAX,EDX,0x10                   ; 00508346
    MOV ECX,EAX                         ; 0050834a
    MOV EAX,[0x01d1dd74]                ; 0050834c | DAT_01d1dd74
    MOV EDX,dword ptr [ESP + 0x14]      ; 00508351
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1de40] ; 00508355
    IMUL EDX                            ; 0050835c
    SHRD EAX,EDX,0x10                   ; 0050835e
    ADD ECX,EAX                         ; 00508362
    MOV EAX,[0x01d1dd74]                ; 00508364 | DAT_01d1dd74
    MOV EDX,EBX                         ; 00508369
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1deb8] ; 0050836b
    IMUL EDX                            ; 00508372
    SHRD EAX,EDX,0x10                   ; 00508374
    ADD ECX,EAX                         ; 00508378
    MOV dword ptr [0x01c51d7c],ECX      ; 0050837a | DAT_01c51d7c
    JMP 0x00507dad                      ; 00508380
        ;   XREF to: 00507dad (UNCONDITIONAL_JUMP)  ; LAB_00507dad
    MOV EBX,0x5e76ee                    ; 00508385 | = "..\\engine\\matrix.c"
        ;   Label: LAB_00508385
    MOV ESI,0x31f                       ; 0050838a
    PUSH 0x5e7701                       ; 0050838f | = "Matrix unbalance"
    MOV dword ptr [0x01d1d400],EBX      ; 00508394 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0050839a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005083a0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005083a5
    ADD ESP,0x30                        ; 005083a8
    POP EBP                             ; 005083ab
    POP EDI                             ; 005083ac
    POP ESI                             ; 005083ad
    POP EBX                             ; 005083ae
    RET                                 ; 005083af

