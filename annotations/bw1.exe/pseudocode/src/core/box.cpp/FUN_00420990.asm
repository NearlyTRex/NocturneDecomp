; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_box_cpp_FUN_00420990(float *param_1)
;
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
; undefined        Stack[-0x4c]:1  local_4c
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
;   core_box.cpp_FUN_004207b0 at 004207c1
;
; Referenced Globals:
;   undefined4 DAT_005fce08
;   undefined4 DAT_0061255c
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_box.cpp_FUN_00420570
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420990
        ;   Label: core_box.cpp_FUN_00420990
    PUSH ESI                            ; 00420991
    PUSH EDI                            ; 00420992
    PUSH EBP                            ; 00420993
    SUB ESP,0x70                        ; 00420994
    MOV EDX,0xff                        ; 00420997
    XOR ECX,ECX                         ; 0042099c
    XOR EBP,EBP                         ; 0042099e
    MOV dword ptr [ESP + 0x64],ECX      ; 004209a0
    MOV dword ptr [ESP + 0x6c],ECX      ; 004209a4
    MOV dword ptr [ESP + 0x68],EDX      ; 004209a8
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004209ac
        ;   Label: LAB_004209ac
    PUSH ESI                            ; 004209b0
    MOV EDI,dword ptr [ESP + 0x88]      ; 004209b1
    PUSH EDI                            ; 004209b8
    LEA ESI,[ESP + 0x3c]                ; 004209b9
    CALL core_box.cpp_FUN_00420570      ; 004209bd
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA EDI,[ESP + 0x48]                ; 004209c2
    LEA ESI,[ESP + 0x3c]                ; 004209c6
    ADD ESP,0x8                         ; 004209ca
    LEA EBX,[ESP + 0x58]                ; 004209cd
    MOVSD ES:EDI,ESI                    ; 004209d1
    MOVSD ES:EDI,ESI                    ; 004209d2
    MOVSD ES:EDI,ESI                    ; 004209d3
    LEA EAX,[ESP + 0x40]                ; 004209d4
    MOV ESI,dword ptr [0x0061255c]      ; 004209d8 | DAT_0061255c
    FLD float ptr [EAX]                 ; 004209de
    FMUL float ptr [0x005fce08]         ; 004209e0 | DAT_005fce08
    FISTP dword ptr [EBX]               ; 004209e6
    FLD float ptr [EAX + 0x4]           ; 004209e8
    FMUL float ptr [0x005fce08]         ; 004209eb | DAT_005fce08
    FISTP dword ptr [EBX + 0x4]         ; 004209f1
    FLD float ptr [EAX + 0x8]           ; 004209f4
    FMUL float ptr [0x005fce08]         ; 004209f7 | DAT_005fce08
    FISTP dword ptr [EBX + 0x8]         ; 004209fd
    LEA EAX,[ESP + 0x58]                ; 00420a00
    PUSH EAX                            ; 00420a04
    MOV EAX,dword ptr [ESI]             ; 00420a05 | DAT_01bc120c
    ADD EAX,EBP                         ; 00420a07
    PUSH EAX                            ; 00420a09
    CALL engine_special.cpp_FUN_00580173 ; 00420a0a
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00420a0f | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 00420a14 | DAT_01bc120c
    MOV DL,byte ptr [EAX + EBP*0x1 + 0x13] ; 00420a16
    ADD ESP,0x8                         ; 00420a1a
    TEST DL,0x80                        ; 00420a1d
    JNZ 0x00420d88                      ; 00420a20
        ;   XREF to: 00420d88 (CONDITIONAL_JUMP)  ; LAB_00420d88
    XOR EAX,EAX                         ; 00420a26
    MOV dword ptr [ESP + 0x68],EAX      ; 00420a28
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00420a2c
        ;   Label: LAB_00420a2c
    INC EBX                             ; 00420a30
    ADD EBP,0x30                        ; 00420a31
    MOV dword ptr [ESP + 0x6c],EBX      ; 00420a34
    CMP EBX,0x8                         ; 00420a38
    JL 0x004209ac                       ; 00420a3b
        ;   XREF to: 004209ac (CONDITIONAL_JUMP)  ; LAB_004209ac
    MOV EDI,dword ptr [ESP + 0x68]      ; 00420a41
    TEST EDI,EDI                        ; 00420a45
    JNZ 0x00420dab                      ; 00420a47
        ;   XREF to: 00420dab (CONDITIONAL_JUMP)  ; LAB_00420dab
    MOV EBP,dword ptr [ESP + 0x64]      ; 00420a4d
    PUSH EBP                            ; 00420a51
    MOV EAX,[0x00612560]                ; 00420a52 | DAT_00612560
    PUSH EAX                            ; 00420a57 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00420a58
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00420a5d
    PUSH EDI                            ; 00420a60
    MOV ECX,dword ptr [0x00612560]      ; 00420a61 | DAT_00612560
    MOV EDX,0x4                         ; 00420a67
    PUSH ECX                            ; 00420a6c | DAT_01bc120c
    MOV dword ptr [ESP + 0xc],EDX       ; 00420a6d
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 00420a71
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00420a76
    LEA EBX,[ESP + 0x4c]                ; 00420a79
    MOV EAX,dword ptr [ESP + 0x84]      ; 00420a7d
    MOV ESI,0x1                         ; 00420a84
    FLD float ptr [EAX]                 ; 00420a89
    FMUL float ptr [0x005fce08]         ; 00420a8b | DAT_005fce08
    FISTP dword ptr [EBX]               ; 00420a91
    FLD float ptr [EAX + 0x4]           ; 00420a93
    FMUL float ptr [0x005fce08]         ; 00420a96 | DAT_005fce08
    FISTP dword ptr [EBX + 0x4]         ; 00420a9c
    FLD float ptr [EAX + 0x8]           ; 00420a9f
    FMUL float ptr [0x005fce08]         ; 00420aa2 | DAT_005fce08
    FISTP dword ptr [EBX + 0x8]         ; 00420aa8
    LEA EBX,[ESP + 0x28]                ; 00420aab
    ADD EAX,0xc                         ; 00420aaf
    MOV EBP,ESI                         ; 00420ab2
    FLD float ptr [EAX]                 ; 00420ab4
    FMUL float ptr [0x005fce08]         ; 00420ab6 | DAT_005fce08
    FISTP dword ptr [EBX]               ; 00420abc
    FLD float ptr [EAX + 0x4]           ; 00420abe
    FMUL float ptr [0x005fce08]         ; 00420ac1 | DAT_005fce08
    FISTP dword ptr [EBX + 0x4]         ; 00420ac7
    FLD float ptr [EAX + 0x8]           ; 00420aca
    FMUL float ptr [0x005fce08]         ; 00420acd | DAT_005fce08
    FISTP dword ptr [EBX + 0x8]         ; 00420ad3
    MOV EBX,0xffffffff                  ; 00420ad6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00420adb
    MOV dword ptr [ESP + 0xc],EDI       ; 00420adf
    MOV dword ptr [ESP + 0x10],EDI      ; 00420ae3
    MOV dword ptr [ESP + 0x14],EAX      ; 00420ae7
    MOV EDX,EAX                         ; 00420aeb
    LEA EAX,[ESP + 0x8]                 ; 00420aed
    NEG EDX                             ; 00420af1
    PUSH EAX                            ; 00420af3
    MOV dword ptr [ESP + 0xc],EBX       ; 00420af4
    MOV dword ptr [ESP + 0x18],EDX      ; 00420af8
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00420afc
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00420b01
    TEST EAX,EAX                        ; 00420b04
    JZ 0x00420b42                       ; 00420b06
        ;   XREF to: 00420b42 (CONDITIONAL_JUMP)  ; LAB_00420b42
    MOV EBX,0x4                         ; 00420b08
    MOV ESI,0x6                         ; 00420b0d
    MOV EAX,ESP                         ; 00420b12
    MOV dword ptr [ESP + 0x18],EDI      ; 00420b14
    MOV EDI,0x2                         ; 00420b18
    PUSH EAX                            ; 00420b1d
    MOV EAX,[0x00622c18]                ; 00420b1e | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x20],EBX      ; 00420b23
    PUSH EAX                            ; 00420b27
    MOV dword ptr [ESP + 0x28],ESI      ; 00420b28
    MOV dword ptr [ESP + 0x2c],EDI      ; 00420b2c
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0 ; 00420b30
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00420b35
    TEST EAX,EAX                        ; 00420b38
    JNZ 0x00420d5c                      ; 00420b3a
        ;   XREF to: 00420d5c (CONDITIONAL_JUMP)  ; LAB_00420d5c
    XOR ESI,ESI                         ; 00420b40
    MOV EDX,0x1                         ; 00420b42
        ;   Label: LAB_00420b42
    MOV EAX,dword ptr [ESP + 0x28]      ; 00420b47
    XOR ECX,ECX                         ; 00420b4b
    MOV dword ptr [ESP + 0x14],EAX      ; 00420b4d
    LEA EAX,[ESP + 0x8]                 ; 00420b51
    MOV dword ptr [ESP + 0x8],EDX       ; 00420b55
    PUSH EAX                            ; 00420b59
    MOV dword ptr [ESP + 0x10],ECX      ; 00420b5a
    MOV dword ptr [ESP + 0x14],ECX      ; 00420b5e
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00420b62
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00420b67
    TEST EAX,EAX                        ; 00420b6a
    JZ 0x00420bae                       ; 00420b6c
        ;   XREF to: 00420bae (CONDITIONAL_JUMP)  ; LAB_00420bae
    MOV ESI,0x1                         ; 00420b6e
    MOV EAX,0x7                         ; 00420b73
    MOV EDI,0x3                         ; 00420b78
    MOV dword ptr [ESP + 0x20],EAX      ; 00420b7d
    MOV EAX,ESP                         ; 00420b81
    MOV EDX,0x5                         ; 00420b83
    PUSH EAX                            ; 00420b88
    MOV ECX,dword ptr [0x00622c18]      ; 00420b89 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 00420b8f
    PUSH ECX                            ; 00420b93
    MOV dword ptr [ESP + 0x24],EDI      ; 00420b94
    MOV dword ptr [ESP + 0x2c],EDX      ; 00420b98
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0 ; 00420b9c
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00420ba1
    TEST EAX,EAX                        ; 00420ba4
    JNZ 0x00420d5c                      ; 00420ba6
        ;   XREF to: 00420d5c (CONDITIONAL_JUMP)  ; LAB_00420d5c
    XOR ESI,ESI                         ; 00420bac
    MOV EDI,0xffffffff                  ; 00420bae
        ;   Label: LAB_00420bae
    XOR EBX,EBX                         ; 00420bb3
    MOV EAX,dword ptr [ESP + 0x50]      ; 00420bb5
    MOV dword ptr [ESP + 0x8],EBX       ; 00420bb9
    MOV dword ptr [ESP + 0xc],EDI       ; 00420bbd
    MOV dword ptr [ESP + 0x14],EAX      ; 00420bc1
    MOV EDX,EAX                         ; 00420bc5
    LEA EAX,[ESP + 0x8]                 ; 00420bc7
    NEG EDX                             ; 00420bcb
    PUSH EAX                            ; 00420bcd
    MOV dword ptr [ESP + 0x14],EBX      ; 00420bce
    MOV dword ptr [ESP + 0x18],EDX      ; 00420bd2
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00420bd6
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00420bdb
    TEST EAX,EAX                        ; 00420bde
    JZ 0x00420c1c                       ; 00420be0
        ;   XREF to: 00420c1c (CONDITIONAL_JUMP)  ; LAB_00420c1c
    MOV ESI,0x5                         ; 00420be2
    MOV EDI,0x4                         ; 00420be7
    MOV EAX,ESP                         ; 00420bec
    MOV dword ptr [ESP + 0x18],EBX      ; 00420bee
    MOV EBX,0x1                         ; 00420bf2
    PUSH EAX                            ; 00420bf7
    MOV EAX,[0x00622c18]                ; 00420bf8 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x24],ESI      ; 00420bfd
    PUSH EAX                            ; 00420c01
    MOV dword ptr [ESP + 0x2c],EDI      ; 00420c02
    MOV dword ptr [ESP + 0x24],EBX      ; 00420c06
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0 ; 00420c0a
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00420c0f
    TEST EAX,EAX                        ; 00420c12
    JNZ 0x00420d5c                      ; 00420c14
        ;   XREF to: 00420d5c (CONDITIONAL_JUMP)  ; LAB_00420d5c
    XOR ESI,ESI                         ; 00420c1a
    MOV ECX,0x1                         ; 00420c1c
        ;   Label: LAB_00420c1c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00420c21
    XOR EDX,EDX                         ; 00420c25
    MOV dword ptr [ESP + 0x14],EAX      ; 00420c27
    LEA EAX,[ESP + 0x8]                 ; 00420c2b
    MOV dword ptr [ESP + 0x8],EDX       ; 00420c2f
    PUSH EAX                            ; 00420c33
    MOV dword ptr [ESP + 0x10],ECX      ; 00420c34
    MOV dword ptr [ESP + 0x14],EDX      ; 00420c38
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00420c3c
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00420c41
    TEST EAX,EAX                        ; 00420c44
    JZ 0x00420c88                       ; 00420c46
        ;   XREF to: 00420c88 (CONDITIONAL_JUMP)  ; LAB_00420c88
    MOV ESI,0x2                         ; 00420c48
    MOV EAX,0x7                         ; 00420c4d
    MOV EDI,0x6                         ; 00420c52
    MOV dword ptr [ESP + 0x20],EAX      ; 00420c57
    MOV EAX,ESP                         ; 00420c5b
    MOV EDX,0x3                         ; 00420c5d
    PUSH EAX                            ; 00420c62
    MOV ECX,dword ptr [0x00622c18]      ; 00420c63 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 00420c69
    PUSH ECX                            ; 00420c6d
    MOV dword ptr [ESP + 0x24],EDI      ; 00420c6e
    MOV dword ptr [ESP + 0x2c],EDX      ; 00420c72
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0 ; 00420c76
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00420c7b
    TEST EAX,EAX                        ; 00420c7e
    JNZ 0x00420d5c                      ; 00420c80
        ;   XREF to: 00420d5c (CONDITIONAL_JUMP)  ; LAB_00420d5c
    XOR ESI,ESI                         ; 00420c86
    MOV EAX,0xffffffff                  ; 00420c88
        ;   Label: LAB_00420c88
    XOR EBX,EBX                         ; 00420c8d
    MOV dword ptr [ESP + 0x10],EAX      ; 00420c8f
    MOV EAX,dword ptr [ESP + 0x54]      ; 00420c93
    MOV dword ptr [ESP + 0x8],EBX       ; 00420c97
    MOV dword ptr [ESP + 0x14],EAX      ; 00420c9b
    MOV EDX,EAX                         ; 00420c9f
    LEA EAX,[ESP + 0x8]                 ; 00420ca1
    NEG EDX                             ; 00420ca5
    PUSH EAX                            ; 00420ca7
    MOV dword ptr [ESP + 0x10],EBX      ; 00420ca8
    MOV dword ptr [ESP + 0x18],EDX      ; 00420cac
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00420cb0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00420cb5
    TEST EAX,EAX                        ; 00420cb8
    JZ 0x00420cf2                       ; 00420cba
        ;   XREF to: 00420cf2 (CONDITIONAL_JUMP)  ; LAB_00420cf2
    MOV ESI,0x3                         ; 00420cbc
    MOV EDI,0x1                         ; 00420cc1
    MOV EAX,ESP                         ; 00420cc6
    MOV dword ptr [ESP + 0x18],EBX      ; 00420cc8
    MOV EBX,0x2                         ; 00420ccc
    PUSH EAX                            ; 00420cd1
    MOV EAX,[0x00622c18]                ; 00420cd2 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x24],ESI      ; 00420cd7
    PUSH EAX                            ; 00420cdb
    MOV dword ptr [ESP + 0x2c],EDI      ; 00420cdc
    MOV dword ptr [ESP + 0x24],EBX      ; 00420ce0
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0 ; 00420ce4
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00420ce9
    TEST EAX,EAX                        ; 00420cec
    JNZ 0x00420d5c                      ; 00420cee
        ;   XREF to: 00420d5c (CONDITIONAL_JUMP)  ; LAB_00420d5c
    XOR ESI,ESI                         ; 00420cf0
    MOV EBX,0x1                         ; 00420cf2
        ;   Label: LAB_00420cf2
    MOV EAX,dword ptr [ESP + 0x30]      ; 00420cf7
    XOR EDX,EDX                         ; 00420cfb
    MOV dword ptr [ESP + 0x14],EAX      ; 00420cfd
    LEA EAX,[ESP + 0x8]                 ; 00420d01
    MOV dword ptr [ESP + 0x8],EDX       ; 00420d05
    PUSH EAX                            ; 00420d09
    MOV dword ptr [ESP + 0x10],EDX      ; 00420d0a
    MOV dword ptr [ESP + 0x14],EBX      ; 00420d0e
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00420d12
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00420d17
    TEST EAX,EAX                        ; 00420d1a
    JZ 0x00420d5a                       ; 00420d1c
        ;   XREF to: 00420d5a (CONDITIONAL_JUMP)  ; LAB_00420d5a
    MOV ESI,0x4                         ; 00420d1e
    MOV EAX,0x7                         ; 00420d23
    MOV EDI,0x5                         ; 00420d28
    MOV dword ptr [ESP + 0x20],EAX      ; 00420d2d
    MOV EAX,ESP                         ; 00420d31
    MOV EDX,0x6                         ; 00420d33
    PUSH EAX                            ; 00420d38
    MOV ECX,dword ptr [0x00622c18]      ; 00420d39 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 00420d3f
    PUSH ECX                            ; 00420d43
    MOV dword ptr [ESP + 0x24],EDI      ; 00420d44
    MOV dword ptr [ESP + 0x2c],EDX      ; 00420d48
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0 ; 00420d4c
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00420d51
    TEST EAX,EAX                        ; 00420d54
    JNZ 0x00420d5c                      ; 00420d56
        ;   XREF to: 00420d5c (CONDITIONAL_JUMP)  ; LAB_00420d5c
    XOR ESI,ESI                         ; 00420d58
    MOV EBP,ESI                         ; 00420d5a
        ;   Label: LAB_00420d5a
    PUSH 0x1                            ; 00420d5c
        ;   Label: LAB_00420d5c
    MOV EBX,dword ptr [0x00612560]      ; 00420d5e | DAT_00612560
    PUSH EBX                            ; 00420d64 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00420d65
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00420d6a
    PUSH 0x1                            ; 00420d6d
    MOV ESI,dword ptr [0x00612560]      ; 00420d6f | DAT_00612560
    PUSH ESI                            ; 00420d75 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 00420d76
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00420d7b
    MOV EAX,EBP                         ; 00420d7e
    ADD ESP,0x70                        ; 00420d80
    POP EBP                             ; 00420d83
    POP EDI                             ; 00420d84
    POP ESI                             ; 00420d85
    POP EBX                             ; 00420d86
    RET                                 ; 00420d87
    MOV EAX,[0x0061255c]                ; 00420d88 | DAT_0061255c
        ;   Label: LAB_00420d88
    MOV EAX,dword ptr [EAX]             ; 00420d8d | DAT_01bc120c
    MOV ECX,dword ptr [ESP + 0x68]      ; 00420d8f
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0x10] ; 00420d93
    MOV EDX,0x1                         ; 00420d97
    AND ECX,EAX                         ; 00420d9c
    MOV dword ptr [ESP + 0x64],EDX      ; 00420d9e
    MOV dword ptr [ESP + 0x68],ECX      ; 00420da2
    JMP 0x00420a2c                      ; 00420da6
        ;   XREF to: 00420a2c (UNCONDITIONAL_JUMP)  ; LAB_00420a2c
    XOR EAX,EAX                         ; 00420dab
        ;   Label: LAB_00420dab
    ADD ESP,0x70                        ; 00420dad
    POP EBP                             ; 00420db0
    POP EDI                             ; 00420db1
    POP ESI                             ; 00420db2
    POP EBX                             ; 00420db3
    RET                                 ; 00420db4

