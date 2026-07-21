; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0x50]:1  local_50
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   FUN_0043f330 at 0043f4fa
;   FUN_00455d50 at 00455dc5
;   FUN_004f6c60 at 004f6d26
;   FUN_0054f510 at 0054f59e
;
; Referenced Globals:
;   undefined4 DAT_0059aa80
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c02580
;   undefined4 DAT_01c02584
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0041dcc0
        ;   Label: core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0
    SUB ESP,0xac                        ; 0041dcc1
    MOV EBP,dword ptr [ESP + 0xb4]      ; 0041dcc7
    PUSH EDI                            ; 0041dcce
    PUSH ESI                            ; 0041dccf
    PUSH EBX                            ; 0041dcd0
    LEA EDI,[ESP + 0xc]                 ; 0041dcd1
    XOR ESI,ESI                         ; 0041dcd5
    PUSH ESI                            ; 0041dcd7
        ;   Label: LAB_0041dcd7
    LEA EAX,[ESP + 0xa4]                ; 0041dcd8
    PUSH EAX                            ; 0041dcdf
    PUSH EBP                            ; 0041dce0
    MOV EBX,EDI                         ; 0041dce1
    ADD EDI,0xc                         ; 0041dce3
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 0041dce6
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70()
    ADD ESP,0xc                         ; 0041dceb
    LEA EAX,[ESP + 0xa0]                ; 0041dcee
    INC ESI                             ; 0041dcf5
    FLD float ptr [EAX]                 ; 0041dcf6
    FMUL float ptr [0x0059aa80]         ; 0041dcf8 | DAT_0059aa80
    FISTP dword ptr [EBX]               ; 0041dcfe
    FLD float ptr [EAX + 0x4]           ; 0041dd00
    FMUL float ptr [0x0059aa80]         ; 0041dd03 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x4]         ; 0041dd09
    FLD float ptr [EAX + 0x8]           ; 0041dd0c
    FMUL float ptr [0x0059aa80]         ; 0041dd0f | DAT_0059aa80
    FISTP dword ptr [EBX + 0x8]         ; 0041dd15
    CMP ESI,0x8                         ; 0041dd18
    JL 0x0041dcd7                       ; 0041dd1b
        ;   XREF to: 0041dcd7 (CONDITIONAL_JUMP)  ; LAB_0041dcd7
    LEA EAX,[ESP + 0xc]                 ; 0041dd1d
    PUSH EAX                            ; 0041dd21
    PUSH 0x8                            ; 0041dd22
    MOV EDX,dword ptr [0x005be368]      ; 0041dd24 | DAT_005be368
    PUSH EDX                            ; 0041dd2a | DAT_01e57284
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 0041dd2b
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200()
    ADD ESP,0xc                         ; 0041dd30
    PUSH 0x1                            ; 0041dd33
    MOV EBX,dword ptr [0x005ae704]      ; 0041dd35 | DAT_005ae704
    MOV ECX,0x4                         ; 0041dd3b
    PUSH EBX                            ; 0041dd40 | DAT_01b4d738
    MOV dword ptr [ESP + 0x78],ECX      ; 0041dd41
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 0041dd45
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0()
    ADD ESP,0x8                         ; 0041dd4a
    PUSH 0x0                            ; 0041dd4d
    MOV ESI,dword ptr [0x005ae704]      ; 0041dd4f | DAT_005ae704
    PUSH ESI                            ; 0041dd55 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0041dd56
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0()
    ADD ESP,0x8                         ; 0041dd5b
    LEA EBX,[ESP + 0x94]                ; 0041dd5e
    MOV EAX,EBP                         ; 0041dd65
    FLD float ptr [EAX]                 ; 0041dd67
    FMUL float ptr [0x0059aa80]         ; 0041dd69 | DAT_0059aa80
    FISTP dword ptr [EBX]               ; 0041dd6f
    FLD float ptr [EAX + 0x4]           ; 0041dd71
    FMUL float ptr [0x0059aa80]         ; 0041dd74 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x4]         ; 0041dd7a
    FLD float ptr [EAX + 0x8]           ; 0041dd7d
    FMUL float ptr [0x0059aa80]         ; 0041dd80 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x8]         ; 0041dd86
    LEA EBX,[ESP + 0xac]                ; 0041dd89
    LEA EAX,[EBP + 0xc]                 ; 0041dd90
    FLD float ptr [EAX]                 ; 0041dd93
    FMUL float ptr [0x0059aa80]         ; 0041dd95 | DAT_0059aa80
    FISTP dword ptr [EBX]               ; 0041dd9b
    FLD float ptr [EAX + 0x4]           ; 0041dd9d
    FMUL float ptr [0x0059aa80]         ; 0041dda0 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x4]         ; 0041dda6
    FLD float ptr [EAX + 0x8]           ; 0041dda9
    FMUL float ptr [0x0059aa80]         ; 0041ddac | DAT_0059aa80
    FISTP dword ptr [EBX + 0x8]         ; 0041ddb2
    MOV EDI,dword ptr [0x005ae704]      ; 0041ddb5 | DAT_005ae704
    PUSH EDI                            ; 0041ddbb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0041ddbc
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 0041ddc1
    TEST EAX,EAX                        ; 0041ddc4
    JNZ 0x0041debb                      ; 0041ddc6
        ;   XREF to: 0041debb (CONDITIONAL_JUMP)  ; LAB_0041debb
    MOV [0x01c02584],EAX                ; 0041ddcc | DAT_01c02584
    MOV [0x01c02580],EAX                ; 0041ddd1 | DAT_01c02580
    MOV EAX,[0x005ae704]                ; 0041ddd6 | DAT_005ae704
    MOV EBX,dword ptr [EAX]             ; 0041dddb | DAT_01b4d738
    MOV dword ptr [EBX + 0x20],0x7fff   ; 0041dddd
    MOV EBX,dword ptr [EAX]             ; 0041dde4 | DAT_01b4d738
    XOR EBP,EBP                         ; 0041dde6
    MOV dword ptr [EBX + 0x24],EBP      ; 0041dde8
    MOV EBX,dword ptr [EAX]             ; 0041ddeb | DAT_01b4d738
    MOV dword ptr [EBX + 0x28],EBP      ; 0041dded
    MOV EBX,dword ptr [EAX]             ; 0041ddf0 | DAT_01b4d738
    MOV dword ptr [EBX + 0x50],EBP      ; 0041ddf2
    MOV EBX,dword ptr [EAX]             ; 0041ddf5 | DAT_01b4d738
    MOV dword ptr [EBX + 0x54],0x7fff   ; 0041ddf7
    MOV EBX,dword ptr [EAX]             ; 0041ddfe | DAT_01b4d738
    MOV dword ptr [EBX + 0x58],EBP      ; 0041de00
    MOV EBX,dword ptr [EAX]             ; 0041de03 | DAT_01b4d738
    MOV dword ptr [EBX + 0x80],EBP      ; 0041de05
    MOV EBX,dword ptr [EAX]             ; 0041de0b | DAT_01b4d738
    MOV dword ptr [EBX + 0x84],EBP      ; 0041de0d
    MOV EBX,dword ptr [EAX]             ; 0041de13 | DAT_01b4d738
    MOV dword ptr [EBX + 0x88],0x7fff   ; 0041de15
    MOV EBX,dword ptr [EAX]             ; 0041de1f | DAT_01b4d738
    MOV dword ptr [EBX + 0xb0],0x7fff   ; 0041de21
    MOV EBX,dword ptr [EAX]             ; 0041de2b | DAT_01b4d738
    MOV dword ptr [EBX + 0xb4],0x7fff   ; 0041de2d
    MOV EBX,dword ptr [EAX]             ; 0041de37 | DAT_01b4d738
    MOV dword ptr [EBX + 0xb8],EBP      ; 0041de39
    MOV EBX,dword ptr [EAX]             ; 0041de3f | DAT_01b4d738
    MOV dword ptr [EBX + 0xe0],EBP      ; 0041de41
    MOV EBX,dword ptr [EAX]             ; 0041de47 | DAT_01b4d738
    MOV dword ptr [EBX + 0xe4],0x7fff   ; 0041de49
    MOV EBX,dword ptr [EAX]             ; 0041de53 | DAT_01b4d738
    MOV dword ptr [EBX + 0xe8],0x7fff   ; 0041de55
    MOV EBX,dword ptr [EAX]             ; 0041de5f | DAT_01b4d738
    MOV dword ptr [EBX + 0x110],0x7fff  ; 0041de61
    MOV EBX,dword ptr [EAX]             ; 0041de6b | DAT_01b4d738
    MOV dword ptr [EBX + 0x114],EBP     ; 0041de6d
    MOV EBX,dword ptr [EAX]             ; 0041de73 | DAT_01b4d738
    MOV dword ptr [EBX + 0x118],0x7fff  ; 0041de75
    MOV EBX,dword ptr [EAX]             ; 0041de7f | DAT_01b4d738
    MOV dword ptr [EBX + 0x140],0x7fff  ; 0041de81
    MOV EBX,dword ptr [EAX]             ; 0041de8b | DAT_01b4d738
    MOV dword ptr [EBX + 0x144],0x7fff  ; 0041de8d
    MOV EBX,dword ptr [EAX]             ; 0041de97 | DAT_01b4d738
    MOV dword ptr [EBX + 0x148],0x7fff  ; 0041de99
    MOV EBX,dword ptr [EAX]             ; 0041dea3 | DAT_01b4d738
    MOV dword ptr [EBX + 0x170],EBP     ; 0041dea5
    MOV EBX,dword ptr [EAX]             ; 0041deab | DAT_01b4d738
    MOV dword ptr [EBX + 0x174],EBP     ; 0041dead
    MOV EAX,dword ptr [EAX]             ; 0041deb3 | DAT_01b4d738
    MOV dword ptr [EAX + 0x178],EBP     ; 0041deb5
    MOV EDX,0xffffffff                  ; 0041debb
        ;   Label: LAB_0041debb
    MOV EAX,dword ptr [ESP + 0x94]      ; 0041dec0
    MOV EBP,0x4                         ; 0041dec7
    PUSH 0x2c4                          ; 0041decc
    MOV EBX,0x1                         ; 0041ded1
    MOV EDI,0xffffffff                  ; 0041ded6
    XOR ECX,ECX                         ; 0041dedb
    MOV dword ptr [ESP + 0x78],EDX      ; 0041dedd
    MOV dword ptr [ESP + 0x7c],ECX      ; 0041dee1
    MOV dword ptr [ESP + 0x80],ECX      ; 0041dee5
    MOV dword ptr [ESP + 0x84],EAX      ; 0041deec
    MOV ESI,EAX                         ; 0041def3
    MOV dword ptr [ESP + 0x88],ECX      ; 0041def5
    MOV dword ptr [ESP + 0x8c],EBP      ; 0041defc
    MOV EAX,0x6                         ; 0041df03
    MOV EDX,0x2                         ; 0041df08
    MOV ECX,dword ptr [0x005ae704]      ; 0041df0d | DAT_005ae704
    MOV dword ptr [ESP + 0x90],EAX      ; 0041df13
    LEA EAX,[ESP + 0x70]                ; 0041df1a
    NEG ESI                             ; 0041df1e
    PUSH EAX                            ; 0041df20
    XOR EBP,EBP                         ; 0041df21
    MOV dword ptr [ESP + 0x88],ESI      ; 0041df23
    PUSH ECX                            ; 0041df2a | DAT_01b4d738
    MOV dword ptr [ESP + 0x9c],EDX      ; 0041df2b
    XOR ESI,ESI                         ; 0041df32
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0041df34
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    MOV EDX,0x7                         ; 0041df39
    ADD ESP,0xc                         ; 0041df3e
    MOV ECX,0x5                         ; 0041df41
    MOV EAX,dword ptr [ESP + 0xac]      ; 0041df46
    PUSH 0x2c4                          ; 0041df4d
    MOV dword ptr [ESP + 0x78],EBX      ; 0041df52
    MOV dword ptr [ESP + 0x84],EAX      ; 0041df56
    MOV EAX,0x3                         ; 0041df5d
    MOV dword ptr [ESP + 0x7c],ESI      ; 0041df62
    MOV dword ptr [ESP + 0x8c],EAX      ; 0041df66
    LEA EAX,[ESP + 0x70]                ; 0041df6d
    MOV dword ptr [ESP + 0x88],EBX      ; 0041df71
    PUSH EAX                            ; 0041df78
    MOV EBX,dword ptr [0x005ae704]      ; 0041df79 | DAT_005ae704
    MOV dword ptr [ESP + 0x84],ESI      ; 0041df7f
    PUSH EBX                            ; 0041df86 | DAT_01b4d738
    MOV dword ptr [ESP + 0x98],EDX      ; 0041df87
    MOV dword ptr [ESP + 0x9c],ECX      ; 0041df8e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0041df95
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    MOV ECX,0x1                         ; 0041df9a
    ADD ESP,0xc                         ; 0041df9f
    MOV EBX,0x5                         ; 0041dfa2
    MOV EAX,dword ptr [ESP + 0x98]      ; 0041dfa7
    PUSH 0x2c4                          ; 0041dfae
    MOV dword ptr [ESP + 0x78],ESI      ; 0041dfb3
    MOV dword ptr [ESP + 0x7c],EDI      ; 0041dfb7
    MOV dword ptr [ESP + 0x80],ESI      ; 0041dfbb
    MOV dword ptr [ESP + 0x88],ESI      ; 0041dfc2
    MOV dword ptr [ESP + 0x8c],ECX      ; 0041dfc9
    MOV dword ptr [ESP + 0x84],EAX      ; 0041dfd0
    NEG EAX                             ; 0041dfd7
    MOV dword ptr [ESP + 0x90],EBX      ; 0041dfd9
    MOV dword ptr [ESP + 0x84],EAX      ; 0041dfe0
    LEA EAX,[ESP + 0x70]                ; 0041dfe7
    MOV ESI,0x4                         ; 0041dfeb
    PUSH EAX                            ; 0041dff0
    MOV EDI,dword ptr [0x005ae704]      ; 0041dff1 | DAT_005ae704
    MOV EBX,0x6                         ; 0041dff7
    PUSH EDI                            ; 0041dffc | DAT_01b4d738
    MOV dword ptr [ESP + 0x9c],ESI      ; 0041dffd
    MOV ESI,0x7                         ; 0041e004
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0041e009
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    MOV EAX,0x1                         ; 0041e00e
    MOV ECX,0x2                         ; 0041e013
    ADD ESP,0xc                         ; 0041e018
    MOV EDI,0x3                         ; 0041e01b
    XOR EDX,EDX                         ; 0041e020
    PUSH 0x2c4                          ; 0041e022
    MOV dword ptr [ESP + 0x78],EBP      ; 0041e027
    MOV dword ptr [ESP + 0x7c],EAX      ; 0041e02b
    MOV dword ptr [ESP + 0x80],EDX      ; 0041e02f
    MOV dword ptr [ESP + 0x88],ECX      ; 0041e036
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0041e03d
    MOV dword ptr [ESP + 0x8c],EBX      ; 0041e044
    MOV dword ptr [ESP + 0x84],EAX      ; 0041e04b
    LEA EAX,[ESP + 0x70]                ; 0041e052
    MOV dword ptr [ESP + 0x90],ESI      ; 0041e056
    PUSH EAX                            ; 0041e05d
    MOV EBP,dword ptr [0x005ae704]      ; 0041e05e | DAT_005ae704
    MOV dword ptr [ESP + 0x98],EDI      ; 0041e064
    PUSH EBP                            ; 0041e06b | DAT_01b4d738
    MOV EDI,0x2                         ; 0041e06c
    XOR ESI,ESI                         ; 0041e071
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0041e073
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    MOV ECX,0xffffffff                  ; 0041e078
    MOV EBP,0x3                         ; 0041e07d
    ADD ESP,0xc                         ; 0041e082
    MOV EDX,dword ptr [0x005ae704]      ; 0041e085 | DAT_005ae704
    XOR EAX,EAX                         ; 0041e08b
    PUSH 0x2c4                          ; 0041e08d
    MOV dword ptr [ESP + 0x78],EAX      ; 0041e092
    MOV dword ptr [ESP + 0x7c],EAX      ; 0041e096
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0041e09a
    MOV dword ptr [ESP + 0x80],ECX      ; 0041e0a1
    MOV dword ptr [ESP + 0x84],EAX      ; 0041e0a8
    MOV EBX,EAX                         ; 0041e0af
    MOV EAX,0x1                         ; 0041e0b1
    MOV dword ptr [ESP + 0x88],ESI      ; 0041e0b6
    MOV dword ptr [ESP + 0x94],EAX      ; 0041e0bd
    LEA EAX,[ESP + 0x70]                ; 0041e0c4
    MOV dword ptr [ESP + 0x8c],EDI      ; 0041e0c8
    PUSH EAX                            ; 0041e0cf
    MOV dword ptr [ESP + 0x94],EBP      ; 0041e0d0
    NEG EBX                             ; 0041e0d7
    PUSH EDX                            ; 0041e0d9 | DAT_01b4d738
    MOV EDI,0x4                         ; 0041e0da
    MOV dword ptr [ESP + 0x8c],EBX      ; 0041e0df
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0041e0e6
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    ADD ESP,0xc                         ; 0041e0eb
    MOV EBP,0x5                         ; 0041e0ee
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0041e0f3
    MOV dword ptr [ESP + 0x74],ESI      ; 0041e0fa
    MOV dword ptr [ESP + 0x78],ESI      ; 0041e0fe
    MOV dword ptr [ESP + 0x84],EDI      ; 0041e102
    MOV dword ptr [ESP + 0x88],EBP      ; 0041e109
    MOV ESI,0x1                         ; 0041e110
    MOV dword ptr [ESP + 0x80],EAX      ; 0041e115
    MOV dword ptr [ESP + 0x7c],ESI      ; 0041e11c
    POP EBX                             ; 0041e120
    POP ESI                             ; 0041e121
    POP EDI                             ; 0041e122
    MOV EAX,0x7                         ; 0041e123
    PUSH 0x2c4                          ; 0041e128
    MOV dword ptr [ESP + 0x84],EAX      ; 0041e12d
    LEA EAX,[ESP + 0x64]                ; 0041e134
    PUSH EAX                            ; 0041e138
    MOV ECX,dword ptr [0x005ae704]      ; 0041e139 | DAT_005ae704
    MOV EDX,0x6                         ; 0041e13f
    PUSH ECX                            ; 0041e144 | DAT_01b4d738
    MOV dword ptr [ESP + 0x90],EDX      ; 0041e145
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0041e14c
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    ADD ESP,0xc                         ; 0041e151
    ADD ESP,0xac                        ; 0041e154
    POP EBP                             ; 0041e15a
    RET                                 ; 0041e15b

