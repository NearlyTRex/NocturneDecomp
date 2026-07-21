; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00425cc0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
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
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 at 00425cb1
;
; Referenced Globals:
;   undefined4 s_headlite.raw_00579f69+1
;   undefined4 s_eadlite.raw_00579f69+2
;   undefined4 s_adlite.raw_00579f69+3
;   undefined4 s_dlite.raw_00579f69+4
;   undefined4 DAT_00579f7a
;   undefined4 DAT_00579f82
;   undefined4 DAT_00579f8a
;   undefined4 DAT_0059b070
;   undefined4 DAT_005ae704
;   undefined4 DAT_007658c4
;   undefined1 DAT_007658cc
;   undefined1 DAT_007658cd
;   undefined1 DAT_007658ce
;   undefined1 DAT_007658cf
;   undefined4 DAT_01b4d738
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425cc0
        ;   Label: core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0
    PUSH ESI                            ; 00425cc1
    PUSH EDI                            ; 00425cc2
    PUSH EBP                            ; 00425cc3
    MOV EBP,ESP                         ; 00425cc4
    SUB ESP,0xe4                        ; 00425cc6
    AND ESP,0xfffffff8                  ; 00425ccc
    MOV EDX,dword ptr [0x005ae704]      ; 00425ccf | DAT_005ae704
    PUSH EDX                            ; 00425cd5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00425cd6
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 00425cdb
    TEST EAX,EAX                        ; 00425cde
    JZ 0x00425ce9                       ; 00425ce0
        ;   XREF to: 00425ce9 (CONDITIONAL_JUMP)  ; LAB_00425ce9
    MOV ESP,EBP                         ; 00425ce2
    POP EBP                             ; 00425ce4
    POP EDI                             ; 00425ce5
    POP ESI                             ; 00425ce6
    POP EBX                             ; 00425ce7
    RET                                 ; 00425ce8
    MOV ESI,0x579f6a                    ; 00425ce9 | s_headlite.raw_00579f69+1
        ;   Label: LAB_00425ce9
    MOV EDI,0x7658cc                    ; 00425cee | DAT_007658cc
    MOV dword ptr [ESP + 0x24],EAX      ; 00425cf3
    MOV dword ptr [ESP + 0x20],EAX      ; 00425cf7
    MOV dword ptr [ESP + 0x1c],EAX      ; 00425cfb
    MOV dword ptr [ESP + 0x18],EAX      ; 00425cff
    PUSH EDI                            ; 00425d03 | DAT_007658cc
    MOV AL,byte ptr [ESI]               ; 00425d04 | s_headlite.raw_00579f69+1 | s_adlite.raw_00579f69+3
        ;   Label: LAB_00425d04
    MOV byte ptr [EDI],AL               ; 00425d06 | DAT_007658cc | DAT_007658ce
    CMP AL,0x0                          ; 00425d08
    JZ 0x00425d1c                       ; 00425d0a
        ;   XREF to: 00425d1c (CONDITIONAL_JUMP)  ; LAB_00425d1c
    MOV AL,byte ptr [ESI + 0x1]         ; 00425d0c | s_eadlite.raw_00579f69+2 | s_dlite.raw_00579f69+4
    ADD ESI,0x2                         ; 00425d0f
    MOV byte ptr [EDI + 0x1],AL         ; 00425d12 | DAT_007658cd | DAT_007658cf
    ADD EDI,0x2                         ; 00425d15
    CMP AL,0x0                          ; 00425d18
    JNZ 0x00425d04                      ; 00425d1a
        ;   XREF to: 00425d04 (CONDITIONAL_JUMP)  ; LAB_00425d04
    POP EDI                             ; 00425d1c
        ;   Label: LAB_00425d1c
    PUSH 0x7658c4                       ; 00425d1d | DAT_007658c4
    MOV EAX,[0x005ae704]                ; 00425d22 | DAT_005ae704
    PUSH EAX                            ; 00425d27 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00425d28
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD ESP,0x8                         ; 00425d2d
    XOR EAX,EAX                         ; 00425d30
    MOV ESI,0x800000                    ; 00425d32
    MOV EDX,dword ptr [0x005ae704]      ; 00425d37 | DAT_005ae704
        ;   Label: LAB_00425d37
    MOV EBX,dword ptr [EDX]             ; 00425d3d | DAT_01b4d738
    MOV dword ptr [EBX + EAX*0x1 + 0x18],ESI ; 00425d3f
    ADD EAX,0x30                        ; 00425d43
    MOV EDX,dword ptr [EDX]             ; 00425d46 | DAT_01b4d738
    MOV dword ptr [EDX + EAX*0x1 + -0x14],ESI ; 00425d48
    CMP EAX,0x12c0                      ; 00425d4c
    JNZ 0x00425d37                      ; 00425d51
        ;   XREF to: 00425d37 (CONDITIONAL_JUMP)  ; LAB_00425d37
    MOV EDX,0x267                       ; 00425d53
    MOV ECX,0x3                         ; 00425d58
    MOV ESI,0x1                         ; 00425d5d
    MOV EDI,0x2                         ; 00425d62
    MOV EAX,dword ptr [EBP + 0x14]      ; 00425d67
    XOR EBX,EBX                         ; 00425d6a
    MOV dword ptr [ESP + 0xcc],EDX      ; 00425d6c
    MOV dword ptr [ESP + 0x14],ECX      ; 00425d73
    MOV dword ptr [ESP + 0x28],EBX      ; 00425d77
    MOV dword ptr [ESP + 0x2c],ESI      ; 00425d7b
    MOV dword ptr [ESP + 0x30],EDI      ; 00425d7f
    MOV dword ptr [ESP + 0x34],ECX      ; 00425d83
    ADD EAX,0x2c54                      ; 00425d87
    MOV EDX,0x28000                     ; 00425d8c
    MOV dword ptr [ESP + 0xd8],EAX      ; 00425d91
    ADD EAX,0xb4                        ; 00425d98
    MOV dword ptr [ESP + 0xc8],EDX      ; 00425d9d
    MOV dword ptr [ESP + 0xb8],EAX      ; 00425da4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00425dab
        ;   Label: LAB_00425dab
    MOV EDX,EAX                         ; 00425db2
    MOV EBX,0x5                         ; 00425db4
    SAR EDX,0x1f                        ; 00425db9
    IDIV EBX                            ; 00425dbc
    PUSH EAX                            ; 00425dbe
    MOV ECX,dword ptr [0x005ae704]      ; 00425dbf | DAT_005ae704
    PUSH ECX                            ; 00425dc5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00425dc6
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 00425dcb
    XOR ESI,ESI                         ; 00425dce
    MOV EDI,dword ptr [ESP + 0xd8]      ; 00425dd0
    MOV EAX,[0x005ae704]                ; 00425dd7 | DAT_005ae704
        ;   Label: LAB_00425dd7
    MOV EDX,dword ptr [EAX]             ; 00425ddc | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0x0 ; 00425dde
    MOV EDX,dword ptr [EAX]             ; 00425de6 | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff ; 00425de8
    MOV EAX,dword ptr [EAX]             ; 00425df0 | DAT_01b4d738
    PUSH EDI                            ; 00425df2
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0x0 ; 00425df3
    LEA EAX,[ESP + 0x6c]                ; 00425dfb
    PUSH EAX                            ; 00425dff
    MOV EBX,dword ptr [EBP + 0x14]      ; 00425e00
    PUSH EBX                            ; 00425e03
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00425e04
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    MOV EDX,EAX                         ; 00425e09
    LEA EAX,[ESP + 0x80]                ; 00425e0b
    ADD ESP,0xc                         ; 00425e12
    CMP EAX,EDX                         ; 00425e15
    JZ 0x00425e2d                       ; 00425e17
        ;   XREF to: 00425e2d (CONDITIONAL_JUMP)  ; LAB_00425e2d
    MOV EAX,dword ptr [EDX]             ; 00425e19
    MOV dword ptr [ESP + 0x74],EAX      ; 00425e1b
    MOV EAX,dword ptr [EDX + 0x4]       ; 00425e1f
    MOV dword ptr [ESP + 0x78],EAX      ; 00425e22
    MOV EAX,dword ptr [EDX + 0x8]       ; 00425e26
    MOV dword ptr [ESP + 0x7c],EAX      ; 00425e29
    LEA EBX,[ESP + 0x80]                ; 00425e2d
        ;   Label: LAB_00425e2d
    LEA EAX,[ESP + 0x74]                ; 00425e34
    MOV EDX,dword ptr [0x005ae704]      ; 00425e38 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00425e3e
    FMUL float ptr [0x0059b070]         ; 00425e40 | DAT_0059b070
    FISTP dword ptr [EBX]               ; 00425e46
    FLD float ptr [EAX + 0x4]           ; 00425e48
    FMUL float ptr [0x0059b070]         ; 00425e4b | DAT_0059b070
    FISTP dword ptr [EBX + 0x4]         ; 00425e51
    FLD float ptr [EAX + 0x8]           ; 00425e54
    FMUL float ptr [0x0059b070]         ; 00425e57 | DAT_0059b070
    FISTP dword ptr [EBX + 0x8]         ; 00425e5d
    LEA EAX,[ESP + 0x80]                ; 00425e60
    PUSH EAX                            ; 00425e67
    MOV EAX,dword ptr [EDX]             ; 00425e68 | DAT_01b4d738
    ADD EAX,ESI                         ; 00425e6a
    PUSH EAX                            ; 00425e6c
    ADD EDI,0xc                         ; 00425e6d
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00425e70
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESI,0x30                        ; 00425e75
    ADD ESP,0x8                         ; 00425e78
    CMP ESI,0x90                        ; 00425e7b
    JNZ 0x00425dd7                      ; 00425e81
        ;   XREF to: 00425dd7 (CONDITIONAL_JUMP)  ; LAB_00425dd7
    PUSH 0x267                          ; 00425e87
    LEA EAX,[ESP + 0x14]                ; 00425e8c
    PUSH EAX                            ; 00425e90
    MOV ESI,dword ptr [0x005ae704]      ; 00425e91 | DAT_005ae704
    PUSH ESI                            ; 00425e97 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 00425e98
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    ADD ESP,0xc                         ; 00425e9d
    MOV EDI,dword ptr [ESP + 0xd8]      ; 00425ea0
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00425ea7
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00425eae
    ADD EDI,0x24                        ; 00425eb5
    ADD EAX,0xffff8000                  ; 00425eb8
    MOV dword ptr [ESP + 0xd8],EDI      ; 00425ebd
    MOV dword ptr [ESP + 0xc8],EAX      ; 00425ec4
    CMP EDI,EDX                         ; 00425ecb
    JNZ 0x00425dab                      ; 00425ecd
        ;   XREF to: 00425dab (CONDITIONAL_JUMP)  ; LAB_00425dab
    MOV EAX,dword ptr [EBP + 0x14]      ; 00425ed3
    ADD EAX,0x2d08                      ; 00425ed6
    MOV ECX,0x28000                     ; 00425edb
    MOV dword ptr [ESP + 0xd4],EAX      ; 00425ee0
    ADD EAX,0xb4                        ; 00425ee7
    MOV dword ptr [ESP + 0xd0],ECX      ; 00425eec
    MOV dword ptr [ESP + 0xbc],EAX      ; 00425ef3
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00425efa
        ;   Label: LAB_00425efa
    MOV EDX,EAX                         ; 00425f01
    MOV EBX,0x5                         ; 00425f03
    SAR EDX,0x1f                        ; 00425f08
    IDIV EBX                            ; 00425f0b
    PUSH EAX                            ; 00425f0d
    MOV EBX,dword ptr [0x005ae704]      ; 00425f0e | DAT_005ae704
    PUSH EBX                            ; 00425f14 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00425f15
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 00425f1a
    XOR ESI,ESI                         ; 00425f1d
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00425f1f
    MOV EAX,[0x005ae704]                ; 00425f26 | DAT_005ae704
        ;   Label: LAB_00425f26
    MOV EDX,dword ptr [EAX]             ; 00425f2b | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0x0 ; 00425f2d
    MOV EDX,dword ptr [EAX]             ; 00425f35 | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0 ; 00425f37
    MOV EAX,dword ptr [EAX]             ; 00425f3f | DAT_01b4d738
    PUSH EDI                            ; 00425f41
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff ; 00425f42
    LEA EAX,[ESP + 0x60]                ; 00425f4a
    PUSH EAX                            ; 00425f4e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00425f4f
    PUSH EAX                            ; 00425f52
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00425f53
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    MOV EDX,EAX                         ; 00425f58
    LEA EAX,[ESP + 0x80]                ; 00425f5a
    ADD ESP,0xc                         ; 00425f61
    CMP EAX,EDX                         ; 00425f64
    JZ 0x00425f7c                       ; 00425f66
        ;   XREF to: 00425f7c (CONDITIONAL_JUMP)  ; LAB_00425f7c
    MOV EAX,dword ptr [EDX]             ; 00425f68
    MOV dword ptr [ESP + 0x74],EAX      ; 00425f6a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00425f6e
    MOV dword ptr [ESP + 0x78],EAX      ; 00425f71
    MOV EAX,dword ptr [EDX + 0x8]       ; 00425f75
    MOV dword ptr [ESP + 0x7c],EAX      ; 00425f78
    LEA EBX,[ESP + 0x8c]                ; 00425f7c
        ;   Label: LAB_00425f7c
    LEA EAX,[ESP + 0x74]                ; 00425f83
    MOV EDX,dword ptr [0x005ae704]      ; 00425f87 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00425f8d
    FMUL float ptr [0x0059b070]         ; 00425f8f | DAT_0059b070
    FISTP dword ptr [EBX]               ; 00425f95
    FLD float ptr [EAX + 0x4]           ; 00425f97
    FMUL float ptr [0x0059b070]         ; 00425f9a | DAT_0059b070
    FISTP dword ptr [EBX + 0x4]         ; 00425fa0
    FLD float ptr [EAX + 0x8]           ; 00425fa3
    FMUL float ptr [0x0059b070]         ; 00425fa6 | DAT_0059b070
    FISTP dword ptr [EBX + 0x8]         ; 00425fac
    LEA EAX,[ESP + 0x8c]                ; 00425faf
    PUSH EAX                            ; 00425fb6
    MOV EAX,dword ptr [EDX]             ; 00425fb7 | DAT_01b4d738
    ADD EAX,ESI                         ; 00425fb9
    PUSH EAX                            ; 00425fbb
    ADD EDI,0xc                         ; 00425fbc
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00425fbf
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESI,0x30                        ; 00425fc4
    ADD ESP,0x8                         ; 00425fc7
    CMP ESI,0x90                        ; 00425fca
    JNZ 0x00425f26                      ; 00425fd0
        ;   XREF to: 00425f26 (CONDITIONAL_JUMP)  ; LAB_00425f26
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00425fd6
    PUSH EDX                            ; 00425fdd
    LEA EAX,[ESP + 0x14]                ; 00425fde
    PUSH EAX                            ; 00425fe2
    MOV ECX,dword ptr [0x005ae704]      ; 00425fe3 | DAT_005ae704
    PUSH ECX                            ; 00425fe9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 00425fea
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    ADD ESP,0xc                         ; 00425fef
    MOV EBX,dword ptr [ESP + 0xd4]      ; 00425ff2
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00425ff9
    MOV EDI,dword ptr [ESP + 0xbc]      ; 00426000
    ADD EBX,0x24                        ; 00426007
    ADD ESI,0xffff8000                  ; 0042600a
    MOV dword ptr [ESP + 0xd4],EBX      ; 00426010
    MOV dword ptr [ESP + 0xd0],ESI      ; 00426017
    CMP EBX,EDI                         ; 0042601e
    JNZ 0x00425efa                      ; 00426020
        ;   XREF to: 00425efa (CONDITIONAL_JUMP)  ; LAB_00425efa
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426026
    FLD float ptr [EAX + 0x2de8]        ; 00426029
    FMUL float ptr [EAX + 0x2614]       ; 0042602f
    FLD float ptr [EAX + 0x2de4]        ; 00426035
    FMUL float ptr [EAX + 0x2614]       ; 0042603b
    FXCH                                ; 00426041
    FSTP float ptr [ESP + 0xc0]         ; 00426043
    FCOMP float ptr [ESP + 0xc0]        ; 0042604a
    FNSTSW AX                           ; 00426051
    SAHF                                ; 00426053
    JBE 0x00426066                      ; 00426054
        ;   XREF to: 00426066 (CONDITIONAL_JUMP)  ; LAB_00426066
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426056
    MOV EAX,dword ptr [EAX + 0x2398]    ; 00426059
    MOV dword ptr [ESP + 0xc0],EAX      ; 0042605f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426066
        ;   Label: LAB_00426066
    FLD float ptr [EAX + 0x2de4]        ; 00426069
    FMUL float ptr [EAX + 0x2614]       ; 0042606f
    FLD float ptr [ESP + 0xc0]          ; 00426075
    FXCH                                ; 0042607c
    FSTP float ptr [ESP + 0xc]          ; 0042607e
    FCOMP float ptr [ESP + 0xc]         ; 00426082
    FNSTSW AX                           ; 00426086
    SAHF                                ; 00426088
    JC 0x00426414                       ; 00426089
        ;   XREF to: 00426414 (CONDITIONAL_JUMP)  ; LAB_00426414
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042608f
        ;   Label: LAB_0042608f
    FLD float ptr [EAX + 0x2de4]        ; 00426092
    FMUL float ptr [EAX + 0x2614]       ; 00426098
    FLD float ptr [EAX + 0x2dd8]        ; 0042609e
    FMUL float ptr [EAX + 0x2614]       ; 004260a4
    MOV ESI,0x30                        ; 004260aa
    XOR EDI,EDI                         ; 004260af
    FSTP float ptr [ESP]                ; 004260b1
    XOR EAX,EAX                         ; 004260b4
    FSTP float ptr [ESP + 0xb4]         ; 004260b6
    MOV dword ptr [ESP + 0xdc],EAX      ; 004260bd
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004260c4
        ;   Label: LAB_004260c4
    ADD EAX,EAX                         ; 004260cb
    MOV dword ptr [ESP + 0xe0],EAX      ; 004260cd
    FILD dword ptr [ESP + 0xe0]         ; 004260d4
    FMUL double ptr [0x00579f82]        ; 004260db | DAT_00579f82
    FMUL double ptr [0x00579f8a]        ; 004260e1 | DAT_00579f8a
    MOV dword ptr [ESP + 0x4],EAX       ; 004260e7
    FLD ST0                             ; 004260eb
    FSIN                                ; 004260ed
    FXCH                                ; 004260ef
    FCOS                                ; 004260f1
    FLD float ptr [ESP]                 ; 004260f3
    FXCH ST2                            ; 004260f6
    FMUL ST2                            ; 004260f8
    FXCH                                ; 004260fa
    FMULP ST2                           ; 004260fc
    LEA EBX,[ESP + 0x98]                ; 004260fe
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00426105
    MOV EDX,dword ptr [0x005ae704]      ; 0042610c | DAT_005ae704
    MOV dword ptr [ESP + 0x78],EAX      ; 00426112
    LEA EAX,[ESP + 0x74]                ; 00426116
    FSTP float ptr [ESP + 0x74]         ; 0042611a
    FSTP float ptr [ESP + 0x7c]         ; 0042611e
    FLD float ptr [EAX]                 ; 00426122
    FMUL float ptr [0x0059b070]         ; 00426124 | DAT_0059b070
    FISTP dword ptr [EBX]               ; 0042612a
    FLD float ptr [EAX + 0x4]           ; 0042612c
    FMUL float ptr [0x0059b070]         ; 0042612f | DAT_0059b070
    FISTP dword ptr [EBX + 0x4]         ; 00426135
    FLD float ptr [EAX + 0x8]           ; 00426138
    FMUL float ptr [0x0059b070]         ; 0042613b | DAT_0059b070
    FISTP dword ptr [EBX + 0x8]         ; 00426141
    LEA EAX,[ESP + 0x98]                ; 00426144
    PUSH EAX                            ; 0042614b
    MOV EAX,dword ptr [EDX]             ; 0042614c | DAT_01b4d738
    ADD EAX,EDI                         ; 0042614e
    PUSH EAX                            ; 00426150
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00426151
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EDX,dword ptr [0x005ae704]      ; 00426156 | DAT_005ae704
    MOV EAX,dword ptr [EDX]             ; 0042615c | DAT_01b4d738
    MOV dword ptr [EDI + EAX*0x1 + 0x20],0xffff ; 0042615e
    MOV EAX,dword ptr [EDX]             ; 00426166 | DAT_01b4d738
    MOV dword ptr [EDI + EAX*0x1 + 0x24],0x0 ; 00426168
    MOV EAX,dword ptr [EDX]             ; 00426170 | DAT_01b4d738
    ADD ESP,0x8                         ; 00426172
    MOV dword ptr [EDI + EAX*0x1 + 0x28],0x0 ; 00426175
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0042617d
    MOV dword ptr [ESP + 0x78],EAX      ; 00426184
    MOV EAX,dword ptr [ESP + 0x4]       ; 00426188
    INC EAX                             ; 0042618c
    LEA EBX,[ESP + 0x44]                ; 0042618d
    MOV dword ptr [ESP + 0xc4],EAX      ; 00426191
    LEA EAX,[ESP + 0x74]                ; 00426198
    FLD float ptr [EAX]                 ; 0042619c
    FMUL float ptr [0x0059b070]         ; 0042619e | DAT_0059b070
    FISTP dword ptr [EBX]               ; 004261a4
    FLD float ptr [EAX + 0x4]           ; 004261a6
    FMUL float ptr [0x0059b070]         ; 004261a9 | DAT_0059b070
    FISTP dword ptr [EBX + 0x4]         ; 004261af
    FLD float ptr [EAX + 0x8]           ; 004261b2
    FMUL float ptr [0x0059b070]         ; 004261b5 | DAT_0059b070
    FISTP dword ptr [EBX + 0x8]         ; 004261bb
    LEA EAX,[ESP + 0x44]                ; 004261be
    PUSH EAX                            ; 004261c2
    MOV EAX,dword ptr [EDX]             ; 004261c3 | DAT_01b4d738
    ADD EAX,ESI                         ; 004261c5
    PUSH EAX                            ; 004261c7
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 004261c8
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005ae704]                ; 004261cd | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 004261d2 | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 004261d4
    MOV EDX,dword ptr [EAX]             ; 004261dc | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0 ; 004261de
    MOV EDX,dword ptr [EAX]             ; 004261e6 | DAT_01b4d738
    ADD ESP,0x8                         ; 004261e8
    MOV dword ptr [EDX + ESI*0x1 + 0x28],0x0 ; 004261eb
    CMP dword ptr [ESP + 0xdc],0x0      ; 004261f3
    JLE 0x00426256                      ; 004261fb
        ;   XREF to: 00426256 (CONDITIONAL_JUMP)  ; LAB_00426256
    MOV EDX,dword ptr [ESP + 0x4]       ; 004261fd
    SUB EDX,0x2                         ; 00426201
    MOV dword ptr [ESP + 0x28],EDX      ; 00426204
    MOV EDX,dword ptr [ESP + 0x4]       ; 00426208
    MOV ECX,0x4                         ; 0042620c
    DEC EDX                             ; 00426211
    PUSH 0x4000                         ; 00426212
    MOV dword ptr [ESP + 0x30],EDX      ; 00426217
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0042621b
    PUSH EAX                            ; 00426222 | DAT_01b4d738
    MOV dword ptr [ESP + 0x38],EDX      ; 00426223
    MOV EDX,dword ptr [ESP + 0xc]       ; 00426227
    MOV dword ptr [ESP + 0x1c],ECX      ; 0042622b
    MOV dword ptr [ESP + 0x3c],EDX      ; 0042622f
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00426233
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 00426238
    MOV EBX,dword ptr [ESP + 0xcc]      ; 0042623b
    PUSH EBX                            ; 00426242
    LEA EAX,[ESP + 0x14]                ; 00426243
    PUSH EAX                            ; 00426247
    MOV EAX,[0x005ae704]                ; 00426248 | DAT_005ae704
    PUSH EAX                            ; 0042624d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0042624e
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    ADD ESP,0xc                         ; 00426253
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00426256
        ;   Label: LAB_00426256
    ADD EDI,0x60                        ; 0042625d
    INC EDX                             ; 00426260
    ADD ESI,0x60                        ; 00426261
    MOV dword ptr [ESP + 0xdc],EDX      ; 00426264
    CMP EDX,0x18                        ; 0042626b
    JLE 0x004260c4                      ; 0042626e
        ;   XREF to: 004260c4 (CONDITIONAL_JUMP)  ; LAB_004260c4
    LEA EBX,[ESP + 0x38]                ; 00426274
    MOV EAX,0x2dd1184                   ; 00426278
    MOV EDX,dword ptr [0x005ae704]      ; 0042627d | DAT_005ae704
    FLD float ptr [EAX]                 ; 00426283 | DAT_02dd1184
    FMUL float ptr [0x0059b070]         ; 00426285 | DAT_0059b070
    FISTP dword ptr [EBX]               ; 0042628b
    FLD float ptr [EAX + 0x4]           ; 0042628d | DAT_02dd1188
    FMUL float ptr [0x0059b070]         ; 00426290 | DAT_0059b070
    FISTP dword ptr [EBX + 0x4]         ; 00426296
    FLD float ptr [EAX + 0x8]           ; 00426299 | DAT_02dd118c
    FMUL float ptr [0x0059b070]         ; 0042629c | DAT_0059b070
    FISTP dword ptr [EBX + 0x8]         ; 004262a2
    LEA EAX,[ESP + 0x38]                ; 004262a5
    PUSH EAX                            ; 004262a9
    MOV EAX,dword ptr [EDX]             ; 004262aa | DAT_01b4d738
    PUSH EAX                            ; 004262ac
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 004262ad
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005ae704]                ; 004262b2 | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 004262b7 | DAT_01b4d738
    MOV dword ptr [EDX + 0x20],0xffff   ; 004262b9
    MOV EDX,dword ptr [EAX]             ; 004262c0 | DAT_01b4d738
    XOR EDI,EDI                         ; 004262c2
    MOV dword ptr [EDX + 0x24],0x0      ; 004262c4
    ADD ESP,0x8                         ; 004262cb
    MOV EAX,dword ptr [EAX]             ; 004262ce | DAT_01b4d738
    MOV ESI,0x30                        ; 004262d0
    MOV dword ptr [ESP + 0x8],EDI       ; 004262d5
    MOV dword ptr [EAX + 0x28],0x0      ; 004262d9
    MOV EAX,dword ptr [ESP + 0x8]       ; 004262e0
        ;   Label: LAB_004262e0
    MOV dword ptr [ESP + 0xe0],EAX      ; 004262e4
    FILD dword ptr [ESP + 0xe0]         ; 004262eb
    FMUL double ptr [0x00579f82]        ; 004262f2 | DAT_00579f82
    FMUL double ptr [0x00579f8a]        ; 004262f8 | DAT_00579f8a
    FLD ST0                             ; 004262fe
    FSIN                                ; 00426300
    FXCH                                ; 00426302
    FCOS                                ; 00426304
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426306
    FLD float ptr [EAX + 0x2dd4]        ; 00426309
    FMULP ST2                           ; 0042630f
    FLD float ptr [EAX + 0x2614]        ; 00426311
    FMULP ST2                           ; 00426317
    FXCH                                ; 00426319
    FSTP float ptr [ESP + 0x74]         ; 0042631b
    FMUL float ptr [EAX + 0x2dd4]       ; 0042631f
    FMUL float ptr [EAX + 0x2614]       ; 00426325
    LEA EBX,[ESP + 0x50]                ; 0042632b
    XOR EAX,EAX                         ; 0042632f
    MOV EDX,dword ptr [0x005ae704]      ; 00426331 | DAT_005ae704
    MOV dword ptr [ESP + 0x78],EAX      ; 00426337
    LEA EAX,[ESP + 0x74]                ; 0042633b
    FSTP float ptr [ESP + 0x7c]         ; 0042633f
    FLD float ptr [EAX]                 ; 00426343
    FMUL float ptr [0x0059b070]         ; 00426345 | DAT_0059b070
    FISTP dword ptr [EBX]               ; 0042634b
    FLD float ptr [EAX + 0x4]           ; 0042634d
    FMUL float ptr [0x0059b070]         ; 00426350 | DAT_0059b070
    FISTP dword ptr [EBX + 0x4]         ; 00426356
    FLD float ptr [EAX + 0x8]           ; 00426359
    FMUL float ptr [0x0059b070]         ; 0042635c | DAT_0059b070
    FISTP dword ptr [EBX + 0x8]         ; 00426362
    LEA EAX,[ESP + 0x50]                ; 00426365
    PUSH EAX                            ; 00426369
    MOV EAX,dword ptr [EDX]             ; 0042636a | DAT_01b4d738
    ADD EAX,ESI                         ; 0042636c
    PUSH EAX                            ; 0042636e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0042636f
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005ae704]                ; 00426374 | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 00426379 | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 0042637b
    MOV EDX,dword ptr [EAX]             ; 00426383 | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0 ; 00426385
    MOV EDX,dword ptr [EAX]             ; 0042638d | DAT_01b4d738
    ADD ESP,0x8                         ; 0042638f
    MOV dword ptr [EDX + ESI*0x1 + 0x28],0x0 ; 00426392
    TEST EDI,EDI                        ; 0042639a
    JLE 0x004263e1                      ; 0042639c
        ;   XREF to: 004263e1 (CONDITIONAL_JUMP)  ; LAB_004263e1
    MOV EDX,0x3                         ; 0042639e
    PUSH 0x4000                         ; 004263a3
    XOR ECX,ECX                         ; 004263a8
    MOV dword ptr [ESP + 0x18],EDX      ; 004263aa
    MOV dword ptr [ESP + 0x2c],ECX      ; 004263ae
    LEA EDX,[EDI + -0x1]                ; 004263b2
    PUSH EAX                            ; 004263b5 | DAT_01b4d738
    MOV dword ptr [ESP + 0x34],EDX      ; 004263b6
    MOV dword ptr [ESP + 0x38],EDI      ; 004263ba
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004263be
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 004263c3
    MOV EBX,dword ptr [ESP + 0xcc]      ; 004263c6
    PUSH EBX                            ; 004263cd
    LEA EAX,[ESP + 0x14]                ; 004263ce
    PUSH EAX                            ; 004263d2
    MOV EAX,[0x005ae704]                ; 004263d3 | DAT_005ae704
    PUSH EAX                            ; 004263d8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 004263d9
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0()
    ADD ESP,0xc                         ; 004263de
    MOV EDX,dword ptr [ESP + 0x8]       ; 004263e1
        ;   Label: LAB_004263e1
    INC EDI                             ; 004263e5
    ADD EDX,0x2                         ; 004263e6
    ADD ESI,0x30                        ; 004263e9
    MOV dword ptr [ESP + 0x8],EDX       ; 004263ec
    CMP EDI,0x18                        ; 004263f0
    JLE 0x004262e0                      ; 004263f3
        ;   XREF to: 004262e0 (CONDITIONAL_JUMP)  ; LAB_004262e0
    PUSH 0xffff                         ; 004263f9
    MOV ECX,dword ptr [0x005ae704]      ; 004263fe | DAT_005ae704
    PUSH ECX                            ; 00426404 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00426405
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 0042640a
    MOV ESP,EBP                         ; 0042640d
    POP EBP                             ; 0042640f
    POP EDI                             ; 00426410
    POP ESI                             ; 00426411
    POP EBX                             ; 00426412
    RET                                 ; 00426413
    MOV EAX,dword ptr [EBP + 0x14]      ; 00426414
        ;   Label: LAB_00426414
    FLD float ptr [ESP + 0xc]           ; 00426417
    FLD float ptr [EAX + 0x2614]        ; 0042641b
    FMUL double ptr [0x00579f7a]        ; 00426421 | DAT_00579f7a
    FADDP                               ; 00426427
    FSTP float ptr [ESP + 0xc0]         ; 00426429
    JMP 0x0042608f                      ; 00426430
        ;   XREF to: 0042608f (UNCONDITIONAL_JUMP)  ; LAB_0042608f

