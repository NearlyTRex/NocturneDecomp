; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_setup_FUN_0043dad0(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
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
;   double DOUBLE_0057b4de = 2
;   double DOUBLE_0057b4e6 = 0.5
;   double DOUBLE_0057b4ee = 252
;   double DOUBLE_0057b4f6 = 65536
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_curtain.cpp_CCurtain_updateWorldPositions_FUN_0043e110
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043dad0
        ;   Label: core_curtain.cpp_CCurtain_setup_FUN_0043dad0
    PUSH ESI                            ; 0043dad1
    PUSH EDI                            ; 0043dad2
    PUSH EBP                            ; 0043dad3
    MOV EBP,ESP                         ; 0043dad4
    SUB ESP,0x78                        ; 0043dad6
    AND ESP,0xfffffff8                  ; 0043dad9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043dadc
    PUSH EBX                            ; 0043dadf
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0043dae0
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043dae5
    LEA EAX,[EBX + 0x15c]               ; 0043dae8
    PUSH EAX                            ; 0043daee
    MOV EDX,dword ptr [0x005ae704]      ; 0043daef | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0043daf5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0043daf6
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0043dafb
    FLD1                                ; 0043dafe
        ;   Label: LAB_0043dafe
    FLD float ptr [EBX + 0x150]         ; 0043db00
    FXCH                                ; 0043db06
    FDIV float ptr [EBX + 0x1f4]        ; 0043db08
    FXCH                                ; 0043db0e
    FMUL ST1                            ; 0043db10
    FLD float ptr [EBX + 0x154]         ; 0043db12
    FMULP ST2                           ; 0043db18
    CALL crt_math.c_round_FUN_00563a30  ; 0043db1a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x14]        ; 0043db1f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043db23
    CALL crt_math.c_round_FUN_00563a30  ; 0043db27
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    INC EAX                             ; 0043db2c
    FISTP dword ptr [ESP + 0x74]        ; 0043db2d
    MOV dword ptr [ESP + 0x58],EAX      ; 0043db31
    MOV EAX,dword ptr [ESP + 0x74]      ; 0043db35
    INC EAX                             ; 0043db39
    MOV dword ptr [ESP + 0x24],EAX      ; 0043db3a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043db3e
    MOV dword ptr [EBX + 0x1c724],EAX   ; 0043db42
    MOV EAX,dword ptr [ESP + 0x74]      ; 0043db48
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043db4c
    MOV dword ptr [EBX + 0x1c728],EAX   ; 0043db50
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043db56
    IMUL EAX,ECX                        ; 0043db5a
    MOV dword ptr [EBX + 0x1fc],EAX     ; 0043db5d
    CMP EAX,0x3e8                       ; 0043db63
    JG 0x0043e0ad                       ; 0043db68
        ;   XREF to: 0043e0ad (CONDITIONAL_JUMP)  ; LAB_0043e0ad
    LEA EDX,[ECX + -0x1]                ; 0043db6e
    MOV dword ptr [ESP + 0x74],EDX      ; 0043db71
    FILD dword ptr [ESP + 0x74]         ; 0043db75
    FDIVR float ptr [EBX + 0x154]       ; 0043db79
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043db7f
    DEC EAX                             ; 0043db83
    MOV dword ptr [ESP + 0x74],EAX      ; 0043db84
    FILD dword ptr [ESP + 0x74]         ; 0043db88
    FDIVR float ptr [EBX + 0x150]       ; 0043db8c
    XOR EDI,EDI                         ; 0043db92
    XOR ESI,ESI                         ; 0043db94
    MOV ECX,dword ptr [EBX + 0x154]     ; 0043db96
    MOV dword ptr [ESP + 0x68],EDI      ; 0043db9c
    MOV dword ptr [ESP + 0x54],ECX      ; 0043dba0
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043dba4
    FXCH                                ; 0043dba8
    FSTP float ptr [ESP + 0x1c]         ; 0043dbaa
    FSTP float ptr [ESP + 0x44]         ; 0043dbae
    TEST ECX,ECX                        ; 0043dbb2
    JLE 0x0043dd91                      ; 0043dbb4
        ;   XREF to: 0043dd91 (CONDITIONAL_JUMP)  ; LAB_0043dd91
    MOV dword ptr [ESP + 0x48],EAX      ; 0043dbba
    MOV dword ptr [ESP + 0x3c],EDX      ; 0043dbbe
    MOV dword ptr [ESP + 0x2c],EAX      ; 0043dbc2
    MOV dword ptr [ESP + 0x40],EAX      ; 0043dbc6
    MOV dword ptr [ESP + 0x38],EDX      ; 0043dbca
    MOV dword ptr [ESP + 0x34],EAX      ; 0043dbce
    LEA EAX,[EBX + 0x200]               ; 0043dbd2
    MOV dword ptr [ESP + 0x30],EDX      ; 0043dbd8
    MOV dword ptr [ESP + 0x18],EAX      ; 0043dbdc
    FLD float ptr [EBX + 0x150]         ; 0043dbe0
        ;   Label: LAB_0043dbe0
    FCHS                                ; 0043dbe6
    FMUL double ptr [0x0057b4e6]        ; 0043dbe8 | DOUBLE_0057b4e6
    MOV ECX,dword ptr [ESP + 0x58]      ; 0043dbee
    XOR EDX,EDX                         ; 0043dbf2
    FSTP float ptr [ESP + 0x64]         ; 0043dbf4
    TEST ECX,ECX                        ; 0043dbf8
    JLE 0x0043dd78                      ; 0043dbfa
        ;   XREF to: 0043dd78 (CONDITIONAL_JUMP)  ; LAB_0043dd78
    MOV ECX,dword ptr [ESP + 0x68]      ; 0043dc00
    IMUL EAX,ECX,0x74                   ; 0043dc04
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043dc07
    ADD EAX,EDI                         ; 0043dc0b
    MOV dword ptr [ESP + 0x70],EAX      ; 0043dc0d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043dc11
    NEG EAX                             ; 0043dc15
    ADD EAX,ECX                         ; 0043dc17
    MOV dword ptr [ESP + 0x60],EAX      ; 0043dc19
    MOV EAX,dword ptr [ESP + 0x70]      ; 0043dc1d
        ;   Label: LAB_0043dc1d
    MOV ECX,dword ptr [ESP + 0x64]      ; 0043dc21
    MOV dword ptr [EAX + 0x14],0x0      ; 0043dc25
    MOV dword ptr [EAX + 0xc],ECX       ; 0043dc2c
    MOV ECX,dword ptr [ESP + 0x54]      ; 0043dc2f
    MOV dword ptr [EAX + 0x10],ECX      ; 0043dc33
    TEST ESI,ESI                        ; 0043dc36
    JNZ 0x0043e0c8                      ; 0043dc38
        ;   XREF to: 0043e0c8 (CONDITIONAL_JUMP)  ; LAB_0043e0c8
    CMP dword ptr [EBX + 0x178],0x0     ; 0043dc3e
    JZ 0x0043e0c8                       ; 0043dc45
        ;   XREF to: 0043e0c8 (CONDITIONAL_JUMP)  ; LAB_0043e0c8
    MOV dword ptr [EAX + 0x68],0x1      ; 0043dc4b
        ;   Label: LAB_0043dc4b
    MOV dword ptr [EAX + 0x70],0x0      ; 0043dc52
        ;   Label: LAB_0043dc52
    TEST EDX,EDX                        ; 0043dc59
    JNZ 0x0043dc68                      ; 0043dc5b
        ;   XREF to: 0043dc68 (CONDITIONAL_JUMP)  ; LAB_0043dc68
    TEST ESI,ESI                        ; 0043dc5d
    JNZ 0x0043dc68                      ; 0043dc5f
        ;   XREF to: 0043dc68 (CONDITIONAL_JUMP)  ; LAB_0043dc68
    MOV dword ptr [EAX + 0x70],0x1      ; 0043dc61
    TEST EDX,EDX                        ; 0043dc68
        ;   Label: LAB_0043dc68
    JNZ 0x0043dc79                      ; 0043dc6a
        ;   XREF to: 0043dc79 (CONDITIONAL_JUMP)  ; LAB_0043dc79
    CMP ESI,dword ptr [ESP + 0x38]      ; 0043dc6c
    JNZ 0x0043dc79                      ; 0043dc70
        ;   XREF to: 0043dc79 (CONDITIONAL_JUMP)  ; LAB_0043dc79
    MOV dword ptr [EAX + 0x70],0x1      ; 0043dc72
    CMP EDX,dword ptr [ESP + 0x40]      ; 0043dc79
        ;   Label: LAB_0043dc79
    JNZ 0x0043dc8a                      ; 0043dc7d
        ;   XREF to: 0043dc8a (CONDITIONAL_JUMP)  ; LAB_0043dc8a
    TEST ESI,ESI                        ; 0043dc7f
    JNZ 0x0043dc8a                      ; 0043dc81
        ;   XREF to: 0043dc8a (CONDITIONAL_JUMP)  ; LAB_0043dc8a
    MOV dword ptr [EAX + 0x70],0x1      ; 0043dc83
    CMP EDX,dword ptr [ESP + 0x2c]      ; 0043dc8a
        ;   Label: LAB_0043dc8a
    JNZ 0x0043dc9d                      ; 0043dc8e
        ;   XREF to: 0043dc9d (CONDITIONAL_JUMP)  ; LAB_0043dc9d
    CMP ESI,dword ptr [ESP + 0x3c]      ; 0043dc90
    JNZ 0x0043dc9d                      ; 0043dc94
        ;   XREF to: 0043dc9d (CONDITIONAL_JUMP)  ; LAB_0043dc9d
    MOV dword ptr [EAX + 0x70],0x1      ; 0043dc96
    MOV dword ptr [EAX + 0x44],0x0      ; 0043dc9d
        ;   Label: LAB_0043dc9d
    TEST ESI,ESI                        ; 0043dca4
    JLE 0x0043dcb6                      ; 0043dca6
        ;   XREF to: 0043dcb6 (CONDITIONAL_JUMP)  ; LAB_0043dcb6
    MOV ECX,dword ptr [EAX + 0x44]      ; 0043dca8
    MOV EDI,dword ptr [ESP + 0x60]      ; 0043dcab
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 0043dcaf
    INC dword ptr [EAX + 0x44]          ; 0043dcb3
    TEST EDX,EDX                        ; 0043dcb6
        ;   Label: LAB_0043dcb6
    JLE 0x0043dcc9                      ; 0043dcb8
        ;   XREF to: 0043dcc9 (CONDITIONAL_JUMP)  ; LAB_0043dcc9
    MOV EDI,dword ptr [ESP + 0x68]      ; 0043dcba
    MOV ECX,dword ptr [EAX + 0x44]      ; 0043dcbe
    DEC EDI                             ; 0043dcc1
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 0043dcc2
    INC dword ptr [EAX + 0x44]          ; 0043dcc6
    CMP EDX,dword ptr [ESP + 0x48]      ; 0043dcc9
        ;   Label: LAB_0043dcc9
    JGE 0x0043dcde                      ; 0043dccd
        ;   XREF to: 0043dcde (CONDITIONAL_JUMP)  ; LAB_0043dcde
    MOV EDI,dword ptr [ESP + 0x68]      ; 0043dccf
    MOV ECX,dword ptr [EAX + 0x44]      ; 0043dcd3
    INC EDI                             ; 0043dcd6
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 0043dcd7
    INC dword ptr [EAX + 0x44]          ; 0043dcdb
    FLD float ptr [EBX + 0x150]         ; 0043dcde
        ;   Label: LAB_0043dcde
    FLD ST0                             ; 0043dce4
    FMUL double ptr [0x0057b4e6]        ; 0043dce6 | DOUBLE_0057b4e6
    FADD float ptr [EAX + 0xc]          ; 0043dcec
    FDIVRP                              ; 0043dcef
    FLD double ptr [0x0057b4ee]         ; 0043dcf1 | DOUBLE_0057b4ee
    FXCH                                ; 0043dcf7
    FMUL ST1                            ; 0043dcf9
    FLD double ptr [0x0057b4f6]         ; 0043dcfb | DOUBLE_0057b4f6
    FXCH                                ; 0043dd01
    FMUL ST1                            ; 0043dd03
    CALL crt_math.c_round_FUN_00563a30  ; 0043dd05
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x74]        ; 0043dd0a
    MOV ECX,dword ptr [ESP + 0x74]      ; 0043dd0e
    ADD ECX,0x20000                     ; 0043dd12
    MOV dword ptr [EAX + 0x18],ECX      ; 0043dd18
    FLD float ptr [EAX + 0x10]          ; 0043dd1b
    FDIV float ptr [EBX + 0x154]        ; 0043dd1e
    FLD1                                ; 0043dd24
    FSUBRP                              ; 0043dd26
    FMULP ST2                           ; 0043dd28
    FMULP                               ; 0043dd2a
    FLD float ptr [ESP + 0x64]          ; 0043dd2c
    MOV EDI,dword ptr [ESP + 0x70]      ; 0043dd30
    INC EDX                             ; 0043dd34
    FADD float ptr [ESP + 0x44]         ; 0043dd35
    ADD EDI,0x74                        ; 0043dd39
    FSTP float ptr [ESP + 0x64]         ; 0043dd3c
    CALL crt_math.c_round_FUN_00563a30  ; 0043dd40
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x74]        ; 0043dd45
    MOV ECX,dword ptr [ESP + 0x74]      ; 0043dd49
    MOV dword ptr [ESP + 0x70],EDI      ; 0043dd4d
    ADD ECX,0x20000                     ; 0043dd51
    MOV EDI,dword ptr [ESP + 0x58]      ; 0043dd57
    MOV dword ptr [EAX + 0x1c],ECX      ; 0043dd5b
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043dd5e
    MOV ECX,dword ptr [ESP + 0x68]      ; 0043dd62
    INC EAX                             ; 0043dd66
    INC ECX                             ; 0043dd67
    MOV dword ptr [ESP + 0x60],EAX      ; 0043dd68
    MOV dword ptr [ESP + 0x68],ECX      ; 0043dd6c
    CMP EDX,EDI                         ; 0043dd70
    JL 0x0043dc1d                       ; 0043dd72
        ;   XREF to: 0043dc1d (CONDITIONAL_JUMP)  ; LAB_0043dc1d
    FLD float ptr [ESP + 0x54]          ; 0043dd78
        ;   Label: LAB_0043dd78
    MOV EDI,dword ptr [ESP + 0x24]      ; 0043dd7c
    FSUB float ptr [ESP + 0x1c]         ; 0043dd80
    INC ESI                             ; 0043dd84
    FSTP float ptr [ESP + 0x54]         ; 0043dd85
    CMP ESI,EDI                         ; 0043dd89
    JL 0x0043dbe0                       ; 0043dd8b
        ;   XREF to: 0043dbe0 (CONDITIONAL_JUMP)  ; LAB_0043dbe0
    XOR EAX,EAX                         ; 0043dd91
        ;   Label: LAB_0043dd91
    MOV EDX,dword ptr [EBX + 0x1fc]     ; 0043dd93
    MOV dword ptr [ESP + 0x20],EAX      ; 0043dd99
    TEST EDX,EDX                        ; 0043dd9d
    JLE 0x0043de48                      ; 0043dd9f
        ;   XREF to: 0043de48 (CONDITIONAL_JUMP)  ; LAB_0043de48
    LEA EAX,[EBX + 0x200]               ; 0043dda5
    MOV dword ptr [ESP + 0x28],EAX      ; 0043ddab
    MOV dword ptr [ESP + 0x4c],EAX      ; 0043ddaf
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043ddb3
        ;   Label: LAB_0043ddb3
    XOR EDI,EDI                         ; 0043ddb7
    MOV ESI,dword ptr [EAX + 0x44]      ; 0043ddb9
    MOV dword ptr [ESP + 0x50],EAX      ; 0043ddbc
    TEST ESI,ESI                        ; 0043ddc0
    JLE 0x0043de26                      ; 0043ddc2
        ;   XREF to: 0043de26 (CONDITIONAL_JUMP)  ; LAB_0043de26
    LEA ECX,[EAX + 0xc]                 ; 0043ddc4
    MOV EDX,EAX                         ; 0043ddc7
    MOV ESI,dword ptr [EDX + 0x48]      ; 0043ddc9
        ;   Label: LAB_0043ddc9
    LEA EAX,[ESI*0x8 + 0x0]             ; 0043ddcc
    SUB EAX,ESI                         ; 0043ddd3
    SHL EAX,0x2                         ; 0043ddd5
    ADD EAX,ESI                         ; 0043ddd8
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0043ddda
    SHL EAX,0x2                         ; 0043ddde
    ADD EAX,ESI                         ; 0043dde1
    FLD float ptr [ECX]                 ; 0043dde3
    FSUB float ptr [EAX + 0xc]          ; 0043dde5
    FSTP float ptr [ESP]                ; 0043dde8
    FLD float ptr [ECX + 0x4]           ; 0043ddeb
    FSUB float ptr [EAX + 0x10]         ; 0043ddee
    FST float ptr [ESP + 0x4]           ; 0043ddf1
    FMUL float ptr [ESP + 0x4]          ; 0043ddf5
    FLD float ptr [ESP]                 ; 0043ddf9
    FMUL ST0                            ; 0043ddfc
    FLD float ptr [ECX + 0x8]           ; 0043ddfe
    FSUB float ptr [EAX + 0x14]         ; 0043de01
    FXCH                                ; 0043de04
    FADDP ST2,ST0                       ; 0043de06
    FST float ptr [ESP + 0x8]           ; 0043de08
    FMUL float ptr [ESP + 0x8]          ; 0043de0c
    FADDP                               ; 0043de10
    FSQRT                               ; 0043de12
    INC EDI                             ; 0043de14
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043de15
    FSTP float ptr [EDX + 0x58]         ; 0043de19
    MOV ESI,dword ptr [EAX + 0x44]      ; 0043de1c
    ADD EDX,0x4                         ; 0043de1f
    CMP EDI,ESI                         ; 0043de22
    JL 0x0043ddc9                       ; 0043de24
        ;   XREF to: 0043ddc9 (CONDITIONAL_JUMP)  ; LAB_0043ddc9
    MOV ESI,dword ptr [ESP + 0x28]      ; 0043de26
        ;   Label: LAB_0043de26
    MOV EDI,dword ptr [ESP + 0x20]      ; 0043de2a
    MOV EDX,dword ptr [EBX + 0x1fc]     ; 0043de2e
    ADD ESI,0x74                        ; 0043de34
    INC EDI                             ; 0043de37
    MOV dword ptr [ESP + 0x28],ESI      ; 0043de38
    MOV dword ptr [ESP + 0x20],EDI      ; 0043de3c
    CMP EDI,EDX                         ; 0043de40
    JL 0x0043ddb3                       ; 0043de42
        ;   XREF to: 0043ddb3 (CONDITIONAL_JUMP)  ; LAB_0043ddb3
    MOV ECX,dword ptr [EBX + 0x1fc]     ; 0043de48
        ;   Label: LAB_0043de48
    XOR EDI,EDI                         ; 0043de4e
    TEST ECX,ECX                        ; 0043de50
    JLE 0x0043de9a                      ; 0043de52
        ;   XREF to: 0043de9a (CONDITIONAL_JUMP)  ; LAB_0043de9a
    LEA ECX,[EBX + 0x200]               ; 0043de54
    LEA EAX,[EBX + 0x20c]               ; 0043de5a
    IMUL EDX,EDI,0x74                   ; 0043de60
        ;   Label: LAB_0043de60
    ADD EDX,ECX                         ; 0043de63
    CMP EDX,EAX                         ; 0043de65
    JZ 0x0043de79                       ; 0043de67
        ;   XREF to: 0043de79 (CONDITIONAL_JUMP)  ; LAB_0043de79
    MOV ESI,dword ptr [EAX]             ; 0043de69
    MOV dword ptr [EDX],ESI             ; 0043de6b
    MOV ESI,dword ptr [EAX + 0x4]       ; 0043de6d
    MOV dword ptr [EDX + 0x4],ESI       ; 0043de70
    MOV ESI,dword ptr [EAX + 0x8]       ; 0043de73
    MOV dword ptr [EDX + 0x8],ESI       ; 0043de76
    MOV dword ptr [EDX + 0x34],0x0      ; 0043de79
        ;   Label: LAB_0043de79
    INC EDI                             ; 0043de80
    MOV ESI,dword ptr [EDX + 0x34]      ; 0043de81
    MOV dword ptr [EDX + 0x30],ESI      ; 0043de84
    MOV ESI,dword ptr [EDX + 0x30]      ; 0043de87
    MOV dword ptr [EDX + 0x2c],ESI      ; 0043de8a
    MOV EDX,dword ptr [EBX + 0x1fc]     ; 0043de8d
    ADD EAX,0x74                        ; 0043de93
    CMP EDI,EDX                         ; 0043de96
    JL 0x0043de60                       ; 0043de98
        ;   XREF to: 0043de60 (CONDITIONAL_JUMP)  ; LAB_0043de60
    LEA EAX,[EBX + 0x1f60c]             ; 0043de9a
        ;   Label: LAB_0043de9a
    MOV ESI,dword ptr [EBX + 0x1c728]   ; 0043dea0
    XOR ECX,ECX                         ; 0043dea6
    LEA EDX,[EBX + 0x4288c]             ; 0043dea8
    MOV dword ptr [ESP + 0x5c],ECX      ; 0043deae
    TEST ESI,ESI                        ; 0043deb2
    JLE 0x0043e083                      ; 0043deb4
        ;   XREF to: 0043e083 (CONDITIONAL_JUMP)  ; LAB_0043e083
    XOR EDI,EDI                         ; 0043deba
        ;   Label: LAB_0043deba
    MOV ECX,dword ptr [EBX + 0x1c724]   ; 0043debc
    MOV dword ptr [ESP + 0x6c],EDI      ; 0043dec2
    TEST ECX,ECX                        ; 0043dec6
    JLE 0x0043e06c                      ; 0043dec8
        ;   XREF to: 0043e06c (CONDITIONAL_JUMP)  ; LAB_0043e06c
    MOV dword ptr [EAX + 0x14],0x0      ; 0043dece
        ;   Label: LAB_0043dece
    MOV dword ptr [EAX + 0x4],0x3       ; 0043ded5
    MOV ECX,dword ptr [EAX + 0x14]      ; 0043dedc
    MOV dword ptr [EAX + 0x10],ECX      ; 0043dedf
    MOV dword ptr [EAX + 0xc],ECX       ; 0043dee2
    MOV dword ptr [EAX + 0x8],ECX       ; 0043dee5
    MOV dword ptr [EDX + 0x4],0x3       ; 0043dee8
    MOV dword ptr [EDX + 0x14],0x0      ; 0043deef
    MOV ECX,dword ptr [EDX + 0x14]      ; 0043def6
    MOV dword ptr [EDX + 0x10],ECX      ; 0043def9
    MOV dword ptr [EDX + 0xc],ECX       ; 0043defc
    MOV dword ptr [EDX + 0x8],ECX       ; 0043deff
    MOV ECX,dword ptr [EBX + 0x1c724]   ; 0043df02
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0043df08
    INC ECX                             ; 0043df0c
    IMUL ECX,ESI                        ; 0043df0d
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0043df10
    ADD ESI,ECX                         ; 0043df14
    MOV dword ptr [EAX + 0x18],ESI      ; 0043df16
    IMUL ECX,ESI,0x74                   ; 0043df19
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x218] ; 0043df1c
    MOV dword ptr [EAX + 0x1c],EDI      ; 0043df23
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x21c] ; 0043df26
    INC ESI                             ; 0043df2d
    MOV dword ptr [EAX + 0x20],ECX      ; 0043df2e
    MOV dword ptr [EAX + 0x24],ESI      ; 0043df31
    IMUL ECX,ESI,0x74                   ; 0043df34
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x218] ; 0043df37
    MOV dword ptr [EAX + 0x28],EDI      ; 0043df3e
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x21c] ; 0043df41
    MOV dword ptr [EAX + 0x2c],ECX      ; 0043df48
    MOV ECX,dword ptr [EBX + 0x1c724]   ; 0043df4b
    INC ECX                             ; 0043df51
    ADD ESI,ECX                         ; 0043df52
    MOV dword ptr [EAX + 0x30],ESI      ; 0043df54
    IMUL ECX,ESI,0x74                   ; 0043df57
    MOV ESI,dword ptr [ECX + EBX*0x1 + 0x218] ; 0043df5a
    MOV dword ptr [EAX + 0x34],ESI      ; 0043df61
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x21c] ; 0043df64
    MOV dword ptr [EAX + 0x38],ECX      ; 0043df6b
    LEA EDI,[EDX + 0x18]                ; 0043df6e
    LEA ESI,[EAX + 0x30]                ; 0043df71
    MOVSD ES:EDI,ESI                    ; 0043df74
    MOVSD ES:EDI,ESI                    ; 0043df75
    MOVSD ES:EDI,ESI                    ; 0043df76
    LEA EDI,[EDX + 0x24]                ; 0043df77
    LEA ESI,[EAX + 0x24]                ; 0043df7a
    MOVSD ES:EDI,ESI                    ; 0043df7d
    MOVSD ES:EDI,ESI                    ; 0043df7e
    MOVSD ES:EDI,ESI                    ; 0043df7f
    LEA EDI,[EDX + 0x30]                ; 0043df80
    LEA ESI,[EAX + 0x18]                ; 0043df83
    MOVSD ES:EDI,ESI                    ; 0043df86
    MOVSD ES:EDI,ESI                    ; 0043df87
    MOVSD ES:EDI,ESI                    ; 0043df88
    MOV dword ptr [EAX + 0x4c],0x3      ; 0043df89
    MOV dword ptr [EAX + 0x5c],0x0      ; 0043df90
    MOV ECX,dword ptr [EAX + 0x5c]      ; 0043df97
    MOV dword ptr [EAX + 0x58],ECX      ; 0043df9a
    MOV dword ptr [EAX + 0x54],ECX      ; 0043df9d
    MOV dword ptr [EAX + 0x50],ECX      ; 0043dfa0
    MOV dword ptr [EDX + 0x4c],0x3      ; 0043dfa3
    MOV dword ptr [EDX + 0x5c],0x0      ; 0043dfaa
    MOV ECX,dword ptr [EDX + 0x5c]      ; 0043dfb1
    MOV dword ptr [EDX + 0x58],ECX      ; 0043dfb4
    MOV dword ptr [EDX + 0x54],ECX      ; 0043dfb7
    MOV dword ptr [EDX + 0x50],ECX      ; 0043dfba
    MOV ECX,dword ptr [EBX + 0x1c724]   ; 0043dfbd
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0043dfc3
    INC ECX                             ; 0043dfc7
    IMUL ECX,EDI                        ; 0043dfc8
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0043dfcb
    ADD ESI,ECX                         ; 0043dfcf
    MOV dword ptr [EAX + 0x60],ESI      ; 0043dfd1
    IMUL ECX,ESI,0x74                   ; 0043dfd4
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x218] ; 0043dfd7
    MOV dword ptr [EAX + 0x64],EDI      ; 0043dfde
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x21c] ; 0043dfe1
    MOV dword ptr [EAX + 0x68],ECX      ; 0043dfe8
    MOV ECX,dword ptr [EBX + 0x1c724]   ; 0043dfeb
    ADD ECX,0x2                         ; 0043dff1
    ADD ESI,ECX                         ; 0043dff4
    MOV dword ptr [EAX + 0x6c],ESI      ; 0043dff6
    IMUL ECX,ESI,0x74                   ; 0043dff9
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x218] ; 0043dffc
    MOV dword ptr [EAX + 0x70],EDI      ; 0043e003
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x21c] ; 0043e006
    DEC ESI                             ; 0043e00d
    MOV dword ptr [EAX + 0x74],ECX      ; 0043e00e
    MOV dword ptr [EAX + 0x78],ESI      ; 0043e011
    IMUL ECX,ESI,0x74                   ; 0043e014
    MOV ESI,dword ptr [ECX + EBX*0x1 + 0x218] ; 0043e017
    MOV dword ptr [EAX + 0x7c],ESI      ; 0043e01e
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x21c] ; 0043e021
    MOV dword ptr [EAX + 0x80],ECX      ; 0043e028
    LEA EDI,[EDX + 0x60]                ; 0043e02e
    LEA ESI,[EAX + 0x78]                ; 0043e031
    MOVSD ES:EDI,ESI                    ; 0043e034
    MOVSD ES:EDI,ESI                    ; 0043e035
    MOVSD ES:EDI,ESI                    ; 0043e036
    LEA EDI,[EDX + 0x6c]                ; 0043e037
    LEA ESI,[EAX + 0x6c]                ; 0043e03a
    ADD EAX,0x48                        ; 0043e03d
    ADD EDX,0x48                        ; 0043e040
    MOVSD ES:EDI,ESI                    ; 0043e043
    MOVSD ES:EDI,ESI                    ; 0043e044
    MOVSD ES:EDI,ESI                    ; 0043e045
    ADD EAX,0x48                        ; 0043e046
    LEA EDI,[EDX + 0x30]                ; 0043e049
    LEA ESI,[EAX + -0x30]               ; 0043e04c
    ADD EDX,0x48                        ; 0043e04f
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0043e052
    MOVSD ES:EDI,ESI                    ; 0043e056
    MOVSD ES:EDI,ESI                    ; 0043e057
    MOVSD ES:EDI,ESI                    ; 0043e058
    INC ECX                             ; 0043e059
    MOV ESI,dword ptr [EBX + 0x1c724]   ; 0043e05a
    MOV dword ptr [ESP + 0x6c],ECX      ; 0043e060
    CMP ECX,ESI                         ; 0043e064
    JL 0x0043dece                       ; 0043e066
        ;   XREF to: 0043dece (CONDITIONAL_JUMP)  ; LAB_0043dece
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0043e06c
        ;   Label: LAB_0043e06c
    INC EDI                             ; 0043e070
    MOV ESI,dword ptr [EBX + 0x1c728]   ; 0043e071
    MOV dword ptr [ESP + 0x5c],EDI      ; 0043e077
    CMP EDI,ESI                         ; 0043e07b
    JL 0x0043deba                       ; 0043e07d
        ;   XREF to: 0043deba (CONDITIONAL_JUMP)  ; LAB_0043deba
    PUSH EBX                            ; 0043e083
        ;   Label: LAB_0043e083
    CALL core_curtain.cpp_CCurtain_updateWorldPositions_FUN_0043e110 ; 0043e084
        ;   XREF to: 0043e110 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_CCurtain_updateWorldPositions_FUN_0043e110(CCurtain * this_ptr)
    MOV EDI,dword ptr [EBX + 0x174]     ; 0043e089
    ADD ESP,0x4                         ; 0043e08f
    CMP EDI,0xfde8                      ; 0043e092
    SETLE AL                            ; 0043e098
    AND EAX,0xff                        ; 0043e09b
    MOV dword ptr [EBX + 0xfc],EAX      ; 0043e0a0
    MOV ESP,EBP                         ; 0043e0a6
    POP EBP                             ; 0043e0a8
    POP EDI                             ; 0043e0a9
    POP ESI                             ; 0043e0aa
    POP EBX                             ; 0043e0ab
    RET                                 ; 0043e0ac
    FLD float ptr [EBX + 0x1f4]         ; 0043e0ad
        ;   Label: LAB_0043e0ad
    FLD ST0                             ; 0043e0b3
    FMUL double ptr [0x0057b4de]        ; 0043e0b5 | DOUBLE_0057b4de
    FSTP ST1                            ; 0043e0bb
    FSTP float ptr [EBX + 0x1f4]        ; 0043e0bd
    JMP 0x0043dafe                      ; 0043e0c3
        ;   XREF to: 0043dafe (UNCONDITIONAL_JUMP)  ; LAB_0043dafe
    CMP ESI,dword ptr [ESP + 0x30]      ; 0043e0c8
        ;   Label: LAB_0043e0c8
    JNZ 0x0043e0db                      ; 0043e0cc
        ;   XREF to: 0043e0db (CONDITIONAL_JUMP)  ; LAB_0043e0db
    CMP dword ptr [EBX + 0x184],0x0     ; 0043e0ce
    JNZ 0x0043dc4b                      ; 0043e0d5
        ;   XREF to: 0043dc4b (CONDITIONAL_JUMP)  ; LAB_0043dc4b
    TEST EDX,EDX                        ; 0043e0db
        ;   Label: LAB_0043e0db
    JNZ 0x0043e0ec                      ; 0043e0dd
        ;   XREF to: 0043e0ec (CONDITIONAL_JUMP)  ; LAB_0043e0ec
    CMP dword ptr [EBX + 0x17c],0x0     ; 0043e0df
    JNZ 0x0043dc4b                      ; 0043e0e6
        ;   XREF to: 0043dc4b (CONDITIONAL_JUMP)  ; LAB_0043dc4b
    CMP EDX,dword ptr [ESP + 0x34]      ; 0043e0ec
        ;   Label: LAB_0043e0ec
    JNZ 0x0043e0ff                      ; 0043e0f0
        ;   XREF to: 0043e0ff (CONDITIONAL_JUMP)  ; LAB_0043e0ff
    CMP dword ptr [EBX + 0x180],0x0     ; 0043e0f2
    JNZ 0x0043dc4b                      ; 0043e0f9
        ;   XREF to: 0043dc4b (CONDITIONAL_JUMP)  ; LAB_0043dc4b
    MOV dword ptr [EAX + 0x68],0x0      ; 0043e0ff
        ;   Label: LAB_0043e0ff
    JMP 0x0043dc52                      ; 0043e106
        ;   XREF to: 0043dc52 (UNCONDITIONAL_JUMP)  ; LAB_0043dc52

