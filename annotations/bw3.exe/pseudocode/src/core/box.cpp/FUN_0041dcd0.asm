; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_box_cpp_FUN_0041dcd0(float *param_1)
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
;   core_box.cpp_FUN_0041daf0 at 0041db01
;
; Referenced Globals:
;   undefined4 DAT_005dc948
;   undefined4 DAT_005f2af8
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_box.cpp_FUN_0041d8b0
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041dcd0
        ;   Label: core_box.cpp_FUN_0041dcd0
    PUSH ESI                            ; 0041dcd1
    PUSH EDI                            ; 0041dcd2
    PUSH EBP                            ; 0041dcd3
    SUB ESP,0x70                        ; 0041dcd4
    MOV EDX,0xff                        ; 0041dcd7
    XOR ECX,ECX                         ; 0041dcdc
    XOR EBP,EBP                         ; 0041dcde
    MOV dword ptr [ESP + 0x64],ECX      ; 0041dce0
    MOV dword ptr [ESP + 0x6c],ECX      ; 0041dce4
    MOV dword ptr [ESP + 0x68],EDX      ; 0041dce8
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0041dcec
        ;   Label: LAB_0041dcec
    PUSH ESI                            ; 0041dcf0
    MOV EDI,dword ptr [ESP + 0x88]      ; 0041dcf1
    PUSH EDI                            ; 0041dcf8
    LEA ESI,[ESP + 0x3c]                ; 0041dcf9
    CALL core_box.cpp_FUN_0041d8b0      ; 0041dcfd
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA EDI,[ESP + 0x48]                ; 0041dd02
    LEA ESI,[ESP + 0x3c]                ; 0041dd06
    ADD ESP,0x8                         ; 0041dd0a
    LEA EBX,[ESP + 0x58]                ; 0041dd0d
    MOVSD ES:EDI,ESI                    ; 0041dd11
    MOVSD ES:EDI,ESI                    ; 0041dd12
    MOVSD ES:EDI,ESI                    ; 0041dd13
    LEA EAX,[ESP + 0x40]                ; 0041dd14
    MOV ESI,dword ptr [0x005f2af8]      ; 0041dd18 | DAT_005f2af8
    FLD float ptr [EAX]                 ; 0041dd1e
    FMUL float ptr [0x005dc948]         ; 0041dd20 | DAT_005dc948
    FISTP dword ptr [EBX]               ; 0041dd26
    FLD float ptr [EAX + 0x4]           ; 0041dd28
    FMUL float ptr [0x005dc948]         ; 0041dd2b | DAT_005dc948
    FISTP dword ptr [EBX + 0x4]         ; 0041dd31
    FLD float ptr [EAX + 0x8]           ; 0041dd34
    FMUL float ptr [0x005dc948]         ; 0041dd37 | DAT_005dc948
    FISTP dword ptr [EBX + 0x8]         ; 0041dd3d
    LEA EAX,[ESP + 0x58]                ; 0041dd40
    PUSH EAX                            ; 0041dd44
    MOV EAX,dword ptr [ESI]             ; 0041dd45 | DAT_01bdd7e4
    ADD EAX,EBP                         ; 0041dd47
    PUSH EAX                            ; 0041dd49
    CALL engine_special.cpp_FUN_005632a3 ; 0041dd4a
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0041dd4f | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0041dd54 | DAT_01bdd7e4
    MOV DL,byte ptr [EAX + EBP*0x1 + 0x13] ; 0041dd56
    ADD ESP,0x8                         ; 0041dd5a
    TEST DL,0x80                        ; 0041dd5d
    JNZ 0x0041e0c8                      ; 0041dd60
        ;   XREF to: 0041e0c8 (CONDITIONAL_JUMP)  ; LAB_0041e0c8
    XOR EAX,EAX                         ; 0041dd66
    MOV dword ptr [ESP + 0x68],EAX      ; 0041dd68
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0041dd6c
        ;   Label: LAB_0041dd6c
    INC EBX                             ; 0041dd70
    ADD EBP,0x30                        ; 0041dd71
    MOV dword ptr [ESP + 0x6c],EBX      ; 0041dd74
    CMP EBX,0x8                         ; 0041dd78
    JL 0x0041dcec                       ; 0041dd7b
        ;   XREF to: 0041dcec (CONDITIONAL_JUMP)  ; LAB_0041dcec
    MOV EDI,dword ptr [ESP + 0x68]      ; 0041dd81
    TEST EDI,EDI                        ; 0041dd85
    JNZ 0x0041e0eb                      ; 0041dd87
        ;   XREF to: 0041e0eb (CONDITIONAL_JUMP)  ; LAB_0041e0eb
    MOV EBP,dword ptr [ESP + 0x64]      ; 0041dd8d
    PUSH EBP                            ; 0041dd91
    MOV EAX,[0x005f2afc]                ; 0041dd92 | DAT_005f2afc
    PUSH EAX                            ; 0041dd97 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0041dd98
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041dd9d
    PUSH EDI                            ; 0041dda0
    MOV ECX,dword ptr [0x005f2afc]      ; 0041dda1 | DAT_005f2afc
    MOV EDX,0x4                         ; 0041dda7
    PUSH ECX                            ; 0041ddac | DAT_01bdd7e4
    MOV dword ptr [ESP + 0xc],EDX       ; 0041ddad
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450 ; 0041ddb1
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041ddb6
    LEA EBX,[ESP + 0x4c]                ; 0041ddb9
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041ddbd
    MOV ESI,0x1                         ; 0041ddc4
    FLD float ptr [EAX]                 ; 0041ddc9
    FMUL float ptr [0x005dc948]         ; 0041ddcb | DAT_005dc948
    FISTP dword ptr [EBX]               ; 0041ddd1
    FLD float ptr [EAX + 0x4]           ; 0041ddd3
    FMUL float ptr [0x005dc948]         ; 0041ddd6 | DAT_005dc948
    FISTP dword ptr [EBX + 0x4]         ; 0041dddc
    FLD float ptr [EAX + 0x8]           ; 0041dddf
    FMUL float ptr [0x005dc948]         ; 0041dde2 | DAT_005dc948
    FISTP dword ptr [EBX + 0x8]         ; 0041dde8
    LEA EBX,[ESP + 0x28]                ; 0041ddeb
    ADD EAX,0xc                         ; 0041ddef
    MOV EBP,ESI                         ; 0041ddf2
    FLD float ptr [EAX]                 ; 0041ddf4
    FMUL float ptr [0x005dc948]         ; 0041ddf6 | DAT_005dc948
    FISTP dword ptr [EBX]               ; 0041ddfc
    FLD float ptr [EAX + 0x4]           ; 0041ddfe
    FMUL float ptr [0x005dc948]         ; 0041de01 | DAT_005dc948
    FISTP dword ptr [EBX + 0x4]         ; 0041de07
    FLD float ptr [EAX + 0x8]           ; 0041de0a
    FMUL float ptr [0x005dc948]         ; 0041de0d | DAT_005dc948
    FISTP dword ptr [EBX + 0x8]         ; 0041de13
    MOV EBX,0xffffffff                  ; 0041de16
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041de1b
    MOV dword ptr [ESP + 0xc],EDI       ; 0041de1f
    MOV dword ptr [ESP + 0x10],EDI      ; 0041de23
    MOV dword ptr [ESP + 0x14],EAX      ; 0041de27
    MOV EDX,EAX                         ; 0041de2b
    LEA EAX,[ESP + 0x8]                 ; 0041de2d
    NEG EDX                             ; 0041de31
    PUSH EAX                            ; 0041de33
    MOV dword ptr [ESP + 0xc],EBX       ; 0041de34
    MOV dword ptr [ESP + 0x18],EDX      ; 0041de38
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0041de3c
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0041de41
    TEST EAX,EAX                        ; 0041de44
    JZ 0x0041de82                       ; 0041de46
        ;   XREF to: 0041de82 (CONDITIONAL_JUMP)  ; LAB_0041de82
    MOV EBX,0x4                         ; 0041de48
    MOV ESI,0x6                         ; 0041de4d
    MOV EAX,ESP                         ; 0041de52
    MOV dword ptr [ESP + 0x18],EDI      ; 0041de54
    MOV EDI,0x2                         ; 0041de58
    PUSH EAX                            ; 0041de5d
    MOV EAX,[0x00603b28]                ; 0041de5e | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x20],EBX      ; 0041de63
    PUSH EAX                            ; 0041de67 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],ESI      ; 0041de68
    MOV dword ptr [ESP + 0x2c],EDI      ; 0041de6c
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250 ; 0041de70
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041de75
    TEST EAX,EAX                        ; 0041de78
    JNZ 0x0041e09c                      ; 0041de7a
        ;   XREF to: 0041e09c (CONDITIONAL_JUMP)  ; LAB_0041e09c
    XOR ESI,ESI                         ; 0041de80
    MOV EDX,0x1                         ; 0041de82
        ;   Label: LAB_0041de82
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041de87
    XOR ECX,ECX                         ; 0041de8b
    MOV dword ptr [ESP + 0x14],EAX      ; 0041de8d
    LEA EAX,[ESP + 0x8]                 ; 0041de91
    MOV dword ptr [ESP + 0x8],EDX       ; 0041de95
    PUSH EAX                            ; 0041de99
    MOV dword ptr [ESP + 0x10],ECX      ; 0041de9a
    MOV dword ptr [ESP + 0x14],ECX      ; 0041de9e
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0041dea2
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0041dea7
    TEST EAX,EAX                        ; 0041deaa
    JZ 0x0041deee                       ; 0041deac
        ;   XREF to: 0041deee (CONDITIONAL_JUMP)  ; LAB_0041deee
    MOV ESI,0x1                         ; 0041deae
    MOV EAX,0x7                         ; 0041deb3
    MOV EDI,0x3                         ; 0041deb8
    MOV dword ptr [ESP + 0x20],EAX      ; 0041debd
    MOV EAX,ESP                         ; 0041dec1
    MOV EDX,0x5                         ; 0041dec3
    PUSH EAX                            ; 0041dec8
    MOV ECX,dword ptr [0x00603b28]      ; 0041dec9 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 0041decf
    PUSH ECX                            ; 0041ded3 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDI      ; 0041ded4
    MOV dword ptr [ESP + 0x2c],EDX      ; 0041ded8
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250 ; 0041dedc
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041dee1
    TEST EAX,EAX                        ; 0041dee4
    JNZ 0x0041e09c                      ; 0041dee6
        ;   XREF to: 0041e09c (CONDITIONAL_JUMP)  ; LAB_0041e09c
    XOR ESI,ESI                         ; 0041deec
    MOV EDI,0xffffffff                  ; 0041deee
        ;   Label: LAB_0041deee
    XOR EBX,EBX                         ; 0041def3
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041def5
    MOV dword ptr [ESP + 0x8],EBX       ; 0041def9
    MOV dword ptr [ESP + 0xc],EDI       ; 0041defd
    MOV dword ptr [ESP + 0x14],EAX      ; 0041df01
    MOV EDX,EAX                         ; 0041df05
    LEA EAX,[ESP + 0x8]                 ; 0041df07
    NEG EDX                             ; 0041df0b
    PUSH EAX                            ; 0041df0d
    MOV dword ptr [ESP + 0x14],EBX      ; 0041df0e
    MOV dword ptr [ESP + 0x18],EDX      ; 0041df12
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0041df16
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0041df1b
    TEST EAX,EAX                        ; 0041df1e
    JZ 0x0041df5c                       ; 0041df20
        ;   XREF to: 0041df5c (CONDITIONAL_JUMP)  ; LAB_0041df5c
    MOV ESI,0x5                         ; 0041df22
    MOV EDI,0x4                         ; 0041df27
    MOV EAX,ESP                         ; 0041df2c
    MOV dword ptr [ESP + 0x18],EBX      ; 0041df2e
    MOV EBX,0x1                         ; 0041df32
    PUSH EAX                            ; 0041df37
    MOV EAX,[0x00603b28]                ; 0041df38 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x24],ESI      ; 0041df3d
    PUSH EAX                            ; 0041df41 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x2c],EDI      ; 0041df42
    MOV dword ptr [ESP + 0x24],EBX      ; 0041df46
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250 ; 0041df4a
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041df4f
    TEST EAX,EAX                        ; 0041df52
    JNZ 0x0041e09c                      ; 0041df54
        ;   XREF to: 0041e09c (CONDITIONAL_JUMP)  ; LAB_0041e09c
    XOR ESI,ESI                         ; 0041df5a
    MOV ECX,0x1                         ; 0041df5c
        ;   Label: LAB_0041df5c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041df61
    XOR EDX,EDX                         ; 0041df65
    MOV dword ptr [ESP + 0x14],EAX      ; 0041df67
    LEA EAX,[ESP + 0x8]                 ; 0041df6b
    MOV dword ptr [ESP + 0x8],EDX       ; 0041df6f
    PUSH EAX                            ; 0041df73
    MOV dword ptr [ESP + 0x10],ECX      ; 0041df74
    MOV dword ptr [ESP + 0x14],EDX      ; 0041df78
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0041df7c
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0041df81
    TEST EAX,EAX                        ; 0041df84
    JZ 0x0041dfc8                       ; 0041df86
        ;   XREF to: 0041dfc8 (CONDITIONAL_JUMP)  ; LAB_0041dfc8
    MOV ESI,0x2                         ; 0041df88
    MOV EAX,0x7                         ; 0041df8d
    MOV EDI,0x6                         ; 0041df92
    MOV dword ptr [ESP + 0x20],EAX      ; 0041df97
    MOV EAX,ESP                         ; 0041df9b
    MOV EDX,0x3                         ; 0041df9d
    PUSH EAX                            ; 0041dfa2
    MOV ECX,dword ptr [0x00603b28]      ; 0041dfa3 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 0041dfa9
    PUSH ECX                            ; 0041dfad | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDI      ; 0041dfae
    MOV dword ptr [ESP + 0x2c],EDX      ; 0041dfb2
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250 ; 0041dfb6
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041dfbb
    TEST EAX,EAX                        ; 0041dfbe
    JNZ 0x0041e09c                      ; 0041dfc0
        ;   XREF to: 0041e09c (CONDITIONAL_JUMP)  ; LAB_0041e09c
    XOR ESI,ESI                         ; 0041dfc6
    MOV EAX,0xffffffff                  ; 0041dfc8
        ;   Label: LAB_0041dfc8
    XOR EBX,EBX                         ; 0041dfcd
    MOV dword ptr [ESP + 0x10],EAX      ; 0041dfcf
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041dfd3
    MOV dword ptr [ESP + 0x8],EBX       ; 0041dfd7
    MOV dword ptr [ESP + 0x14],EAX      ; 0041dfdb
    MOV EDX,EAX                         ; 0041dfdf
    LEA EAX,[ESP + 0x8]                 ; 0041dfe1
    NEG EDX                             ; 0041dfe5
    PUSH EAX                            ; 0041dfe7
    MOV dword ptr [ESP + 0x10],EBX      ; 0041dfe8
    MOV dword ptr [ESP + 0x18],EDX      ; 0041dfec
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0041dff0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0041dff5
    TEST EAX,EAX                        ; 0041dff8
    JZ 0x0041e032                       ; 0041dffa
        ;   XREF to: 0041e032 (CONDITIONAL_JUMP)  ; LAB_0041e032
    MOV ESI,0x3                         ; 0041dffc
    MOV EDI,0x1                         ; 0041e001
    MOV EAX,ESP                         ; 0041e006
    MOV dword ptr [ESP + 0x18],EBX      ; 0041e008
    MOV EBX,0x2                         ; 0041e00c
    PUSH EAX                            ; 0041e011
    MOV EAX,[0x00603b28]                ; 0041e012 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x24],ESI      ; 0041e017
    PUSH EAX                            ; 0041e01b | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x2c],EDI      ; 0041e01c
    MOV dword ptr [ESP + 0x24],EBX      ; 0041e020
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250 ; 0041e024
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041e029
    TEST EAX,EAX                        ; 0041e02c
    JNZ 0x0041e09c                      ; 0041e02e
        ;   XREF to: 0041e09c (CONDITIONAL_JUMP)  ; LAB_0041e09c
    XOR ESI,ESI                         ; 0041e030
    MOV EBX,0x1                         ; 0041e032
        ;   Label: LAB_0041e032
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041e037
    XOR EDX,EDX                         ; 0041e03b
    MOV dword ptr [ESP + 0x14],EAX      ; 0041e03d
    LEA EAX,[ESP + 0x8]                 ; 0041e041
    MOV dword ptr [ESP + 0x8],EDX       ; 0041e045
    PUSH EAX                            ; 0041e049
    MOV dword ptr [ESP + 0x10],EDX      ; 0041e04a
    MOV dword ptr [ESP + 0x14],EBX      ; 0041e04e
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0041e052
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0041e057
    TEST EAX,EAX                        ; 0041e05a
    JZ 0x0041e09a                       ; 0041e05c
        ;   XREF to: 0041e09a (CONDITIONAL_JUMP)  ; LAB_0041e09a
    MOV ESI,0x4                         ; 0041e05e
    MOV EAX,0x7                         ; 0041e063
    MOV EDI,0x5                         ; 0041e068
    MOV dword ptr [ESP + 0x20],EAX      ; 0041e06d
    MOV EAX,ESP                         ; 0041e071
    MOV EDX,0x6                         ; 0041e073
    PUSH EAX                            ; 0041e078
    MOV ECX,dword ptr [0x00603b28]      ; 0041e079 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 0041e07f
    PUSH ECX                            ; 0041e083 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDI      ; 0041e084
    MOV dword ptr [ESP + 0x2c],EDX      ; 0041e088
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250 ; 0041e08c
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0041e091
    TEST EAX,EAX                        ; 0041e094
    JNZ 0x0041e09c                      ; 0041e096
        ;   XREF to: 0041e09c (CONDITIONAL_JUMP)  ; LAB_0041e09c
    XOR ESI,ESI                         ; 0041e098
    MOV EBP,ESI                         ; 0041e09a
        ;   Label: LAB_0041e09a
    PUSH 0x1                            ; 0041e09c
        ;   Label: LAB_0041e09c
    MOV EBX,dword ptr [0x005f2afc]      ; 0041e09e | DAT_005f2afc
    PUSH EBX                            ; 0041e0a4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0041e0a5
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041e0aa
    PUSH 0x1                            ; 0041e0ad
    MOV ESI,dword ptr [0x005f2afc]      ; 0041e0af | DAT_005f2afc
    PUSH ESI                            ; 0041e0b5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450 ; 0041e0b6
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041e0bb
    MOV EAX,EBP                         ; 0041e0be
    ADD ESP,0x70                        ; 0041e0c0
    POP EBP                             ; 0041e0c3
    POP EDI                             ; 0041e0c4
    POP ESI                             ; 0041e0c5
    POP EBX                             ; 0041e0c6
    RET                                 ; 0041e0c7
    MOV EAX,[0x005f2af8]                ; 0041e0c8 | DAT_005f2af8
        ;   Label: LAB_0041e0c8
    MOV EAX,dword ptr [EAX]             ; 0041e0cd | DAT_01bdd7e4
    MOV ECX,dword ptr [ESP + 0x68]      ; 0041e0cf
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0x10] ; 0041e0d3
    MOV EDX,0x1                         ; 0041e0d7
    AND ECX,EAX                         ; 0041e0dc
    MOV dword ptr [ESP + 0x64],EDX      ; 0041e0de
    MOV dword ptr [ESP + 0x68],ECX      ; 0041e0e2
    JMP 0x0041dd6c                      ; 0041e0e6
        ;   XREF to: 0041dd6c (UNCONDITIONAL_JUMP)  ; LAB_0041dd6c
    XOR EAX,EAX                         ; 0041e0eb
        ;   Label: LAB_0041e0eb
    ADD ESP,0x70                        ; 0041e0ed
    POP EBP                             ; 0041e0f0
    POP EDI                             ; 0041e0f1
    POP ESI                             ; 0041e0f2
    POP EBX                             ; 0041e0f3
    RET                                 ; 0041e0f4

