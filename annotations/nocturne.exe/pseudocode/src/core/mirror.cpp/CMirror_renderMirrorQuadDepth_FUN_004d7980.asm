; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(CMirror *this_ptr)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x4c]:4  local_4c
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
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507e08
;
; Referenced Globals:
;   float FLOAT_005a0880 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7980
        ;   Label: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
    PUSH ESI                            ; 004d7981
    PUSH EDI                            ; 004d7982
    PUSH EBP                            ; 004d7983
    SUB ESP,0x78                        ; 004d7984
    MOV ESI,dword ptr [0x005ae704]      ; 004d7987 | g_CDemonRenderer_PTR_005ae704
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004d798d
    LEA EBX,[ESP + 0x54]                ; 004d7994
    MOV EAX,EDI                         ; 004d7998
    MOV EDX,dword ptr [ESI]             ; 004d799a | DAT_01b4d738
    FLD float ptr [EAX]                 ; 004d799c
    FMUL float ptr [0x005a0880]         ; 004d799e | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d79a4
    FLD float ptr [EAX + 0x4]           ; 004d79a6
    FMUL float ptr [0x005a0880]         ; 004d79a9 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d79af
    FLD float ptr [EAX + 0x8]           ; 004d79b2
    FMUL float ptr [0x005a0880]         ; 004d79b5 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d79bb
    LEA EAX,[ESP + 0x54]                ; 004d79be
    PUSH EAX                            ; 004d79c2
    PUSH EDX                            ; 004d79c3
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004d79c4
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005ae704]      ; 004d79c9 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [ESI]             ; 004d79cf | DAT_01b4d738
    ADD ESP,0x8                         ; 004d79d1
    LEA EDX,[EAX + 0x30]                ; 004d79d4
    LEA EBX,[ESP + 0x48]                ; 004d79d7
    LEA EAX,[EDI + 0xc]                 ; 004d79db
    FLD float ptr [EAX]                 ; 004d79de
    FMUL float ptr [0x005a0880]         ; 004d79e0 | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d79e6
    FLD float ptr [EAX + 0x4]           ; 004d79e8
    FMUL float ptr [0x005a0880]         ; 004d79eb | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d79f1
    FLD float ptr [EAX + 0x8]           ; 004d79f4
    FMUL float ptr [0x005a0880]         ; 004d79f7 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d79fd
    LEA EAX,[ESP + 0x48]                ; 004d7a00
    PUSH EAX                            ; 004d7a04
    PUSH EDX                            ; 004d7a05
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004d7a06
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005ae704]      ; 004d7a0b | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [ESI]             ; 004d7a11 | DAT_01b4d738
    ADD ESP,0x8                         ; 004d7a13
    LEA EDX,[EAX + 0x60]                ; 004d7a16
    LEA EBX,[ESP + 0x6c]                ; 004d7a19
    LEA EAX,[EDI + 0x18]                ; 004d7a1d
    FLD float ptr [EAX]                 ; 004d7a20
    FMUL float ptr [0x005a0880]         ; 004d7a22 | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d7a28
    FLD float ptr [EAX + 0x4]           ; 004d7a2a
    FMUL float ptr [0x005a0880]         ; 004d7a2d | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d7a33
    FLD float ptr [EAX + 0x8]           ; 004d7a36
    FMUL float ptr [0x005a0880]         ; 004d7a39 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d7a3f
    LEA EAX,[ESP + 0x6c]                ; 004d7a42
    PUSH EAX                            ; 004d7a46
    PUSH EDX                            ; 004d7a47
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004d7a48
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005ae704]      ; 004d7a4d | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [ESI]             ; 004d7a53 | DAT_01b4d738
    ADD ESP,0x8                         ; 004d7a55
    LEA EDX,[EAX + 0x90]                ; 004d7a58
    LEA EBX,[ESP + 0x60]                ; 004d7a5e
    LEA EAX,[EDI + 0x24]                ; 004d7a62
    FLD float ptr [EAX]                 ; 004d7a65
    FMUL float ptr [0x005a0880]         ; 004d7a67 | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d7a6d
    FLD float ptr [EAX + 0x4]           ; 004d7a6f
    FMUL float ptr [0x005a0880]         ; 004d7a72 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d7a78
    FLD float ptr [EAX + 0x8]           ; 004d7a7b
    FMUL float ptr [0x005a0880]         ; 004d7a7e | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d7a84
    LEA EAX,[ESP + 0x60]                ; 004d7a87
    PUSH EAX                            ; 004d7a8b
    PUSH EDX                            ; 004d7a8c
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004d7a8d
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005ae704]      ; 004d7a92 | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 004d7a98
    XOR EAX,EAX                         ; 004d7a9b
    MOV EDX,ESI                         ; 004d7a9d
    MOV ECX,dword ptr [ESI]             ; 004d7a9f | DAT_01b4d738
        ;   Label: LAB_004d7a9f
    SHL dword ptr [ECX + EAX*0x1],0x4   ; 004d7aa1
    MOV ECX,dword ptr [ESI]             ; 004d7aa5 | DAT_01b4d738
    SHL dword ptr [ECX + EAX*0x1 + 0x4],0x4 ; 004d7aa7
    MOV ECX,dword ptr [ESI]             ; 004d7aac | DAT_01b4d738
    SHL dword ptr [ECX + EAX*0x1 + 0x8],0x4 ; 004d7aae
    MOV ECX,dword ptr [ESI]             ; 004d7ab3 | DAT_01b4d738
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc] ; 004d7ab5
    ADD EAX,0x30                        ; 004d7ab9
    SHR EBX,0x4                         ; 004d7abc
    MOV dword ptr [ECX + EAX*0x1 + -0x24],EBX ; 004d7abf
    CMP EAX,0xc0                        ; 004d7ac3
    JNZ 0x004d7a9f                      ; 004d7ac8
        ;   XREF to: 004d7a9f (CONDITIONAL_JUMP)  ; LAB_004d7a9f
    MOV EDI,0x4                         ; 004d7aca
    MOV EAX,0x2                         ; 004d7acf
    MOV ECX,0x3                         ; 004d7ad4
    MOV dword ptr [0x005ae704],ESI      ; 004d7ad9 | g_CDemonRenderer_PTR_005ae704
    XOR EBP,EBP                         ; 004d7adf
    MOV dword ptr [ESP + 0x4],EDI       ; 004d7ae1
    MOV dword ptr [ESP + 0x14],EBP      ; 004d7ae5
    MOV dword ptr [ESP + 0x10],EBP      ; 004d7ae9
    MOV dword ptr [ESP + 0xc],EBP       ; 004d7aed
    MOV dword ptr [ESP + 0x30],EAX      ; 004d7af1
    MOV EAX,ESP                         ; 004d7af5
    MOV dword ptr [ESP + 0x8],EBP       ; 004d7af7
    PUSH EAX                            ; 004d7afb
    MOV dword ptr [ESP + 0x1c],EBP      ; 004d7afc
    MOV EBP,0x1                         ; 004d7b00
    PUSH ESI                            ; 004d7b05 | DAT_01b4d738
    MOV dword ptr [ESP + 0x44],ECX      ; 004d7b06
    MOV dword ptr [ESP + 0x2c],EBP      ; 004d7b0a
    CALL engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90 ; 004d7b0e
        ;   XREF to: 0045ef90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV ESI,dword ptr [0x005ae704]      ; 004d7b13 | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 004d7b19
    ADD ESP,0x78                        ; 004d7b1c
    POP EBP                             ; 004d7b1f
    POP EDI                             ; 004d7b20
    POP ESI                             ; 004d7b21
    POP EBX                             ; 004d7b22
    RET                                 ; 004d7b23

