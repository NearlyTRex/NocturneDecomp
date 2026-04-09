; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_setup_FUN_00449810(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x6c]:4  local_6c
; SCurtainVertex * Stack[-0x64]:4  local_64
; float            Stack[-0x38]:4  local_38
; int              Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; SCurtainVertex * Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   double DOUBLE_00619bea = 2
;   double DOUBLE_00619bf2 = 0.5
;   double DOUBLE_00619bfa = 252
;   double DOUBLE_00619c02 = 65536
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_curtain.cpp_CCurtain_updateWorldPositions_FUN_00449e40
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449810
        ;   Label: core_curtain.cpp_CCurtain_setup_FUN_00449810
    PUSH ESI                            ; 00449811
    PUSH EDI                            ; 00449812
    PUSH EBP                            ; 00449813
    MOV EBP,ESP                         ; 00449814
    SUB ESP,0x78                        ; 00449816
    AND ESP,0xfffffff8                  ; 00449819
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044981c
    PUSH EBX                            ; 0044981f
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00449820
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00449825
    LEA EAX,[EBX + 0x164]               ; 00449828
    PUSH EAX                            ; 0044982e
    MOV EDX,dword ptr [0x006703ec]      ; 0044982f | g_CDemonRendererPtr2
    PUSH EDX                            ; 00449835 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00449836
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044983b
    FLD1                                ; 0044983e
        ;   Label: LAB_0044983e
    FLD float ptr [EBX + 0x158]         ; 00449840
    FXCH                                ; 00449846
    FDIV float ptr [EBX + 0x1fc]        ; 00449848
    FXCH                                ; 0044984e
    FMUL ST1                            ; 00449850
    FLD float ptr [EBX + 0x15c]         ; 00449852
    FMULP ST2                           ; 00449858
    CALL crt_math.c_round_FUN_005fe6b0  ; 0044985a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x70]        ; 0044985f
    MOV EAX,dword ptr [ESP + 0x70]      ; 00449863
    CALL crt_math.c_round_FUN_005fe6b0  ; 00449867
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    INC EAX                             ; 0044986c
    FISTP dword ptr [ESP + 0x74]        ; 0044986d
    MOV dword ptr [ESP + 0x54],EAX      ; 00449871
    MOV EAX,dword ptr [ESP + 0x74]      ; 00449875
    INC EAX                             ; 00449879
    MOV dword ptr [ESP + 0x20],EAX      ; 0044987a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0044987e
    MOV dword ptr [EBX + 0x1c72c],EAX   ; 00449882
    MOV EAX,dword ptr [ESP + 0x74]      ; 00449888
    MOV ECX,dword ptr [ESP + 0x20]      ; 0044988c
    MOV dword ptr [EBX + 0x1c730],EAX   ; 00449890
    MOV EAX,dword ptr [ESP + 0x54]      ; 00449896
    IMUL EAX,ECX                        ; 0044989a
    MOV dword ptr [EBX + 0x204],EAX     ; 0044989d
    CMP EAX,0x3e8                       ; 004498a3
    JG 0x00449dd7                       ; 004498a8
        ;   XREF to: 00449dd7 (CONDITIONAL_JUMP)  ; LAB_00449dd7
    LEA EDX,[ECX + -0x1]                ; 004498ae
    MOV dword ptr [ESP + 0x74],EDX      ; 004498b1
    FILD dword ptr [ESP + 0x74]         ; 004498b5
    FDIVR float ptr [EBX + 0x15c]       ; 004498b9
    MOV EAX,dword ptr [ESP + 0x54]      ; 004498bf
    DEC EAX                             ; 004498c3
    MOV dword ptr [ESP + 0x74],EAX      ; 004498c4
    FILD dword ptr [ESP + 0x74]         ; 004498c8
    FDIVR float ptr [EBX + 0x158]       ; 004498cc
    XOR EDI,EDI                         ; 004498d2
    XOR ESI,ESI                         ; 004498d4
    MOV ECX,dword ptr [EBX + 0x15c]     ; 004498d6
    MOV dword ptr [ESP + 0x64],EDI      ; 004498dc
    MOV dword ptr [ESP + 0x50],ECX      ; 004498e0
    MOV ECX,dword ptr [ESP + 0x20]      ; 004498e4
    FXCH                                ; 004498e8
    FSTP float ptr [ESP + 0x14]         ; 004498ea
    FSTP float ptr [ESP + 0x2c]         ; 004498ee
    TEST ECX,ECX                        ; 004498f2
    JLE 0x00449ad1                      ; 004498f4
        ;   XREF to: 00449ad1 (CONDITIONAL_JUMP)  ; LAB_00449ad1
    MOV dword ptr [ESP + 0x44],EAX      ; 004498fa
    MOV dword ptr [ESP + 0x3c],EDX      ; 004498fe
    MOV dword ptr [ESP + 0x38],EAX      ; 00449902
    MOV dword ptr [ESP + 0x30],EAX      ; 00449906
    MOV dword ptr [ESP + 0x40],EDX      ; 0044990a
    MOV dword ptr [ESP + 0x28],EAX      ; 0044990e
    LEA EAX,[EBX + 0x208]               ; 00449912
    MOV dword ptr [ESP + 0x34],EDX      ; 00449918
    MOV dword ptr [ESP + 0x18],EAX      ; 0044991c
    FLD float ptr [EBX + 0x158]         ; 00449920
        ;   Label: LAB_00449920
    FCHS                                ; 00449926
    FMUL double ptr [0x00619bf2]        ; 00449928 | DOUBLE_00619bf2
    MOV ECX,dword ptr [ESP + 0x54]      ; 0044992e
    XOR EDX,EDX                         ; 00449932
    FSTP float ptr [ESP + 0x5c]         ; 00449934
    TEST ECX,ECX                        ; 00449938
    JLE 0x00449ab8                      ; 0044993a
        ;   XREF to: 00449ab8 (CONDITIONAL_JUMP)  ; LAB_00449ab8
    MOV ECX,dword ptr [ESP + 0x64]      ; 00449940
    IMUL EAX,ECX,0x74                   ; 00449944
    MOV EDI,dword ptr [ESP + 0x18]      ; 00449947
    ADD EAX,EDI                         ; 0044994b
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044994d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00449951
    NEG EAX                             ; 00449955
    ADD EAX,ECX                         ; 00449957
    MOV dword ptr [ESP + 0x60],EAX      ; 00449959
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044995d
        ;   Label: LAB_0044995d
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00449961
    MOV dword ptr [EAX + 0x14],0x0      ; 00449965
    MOV dword ptr [EAX + 0xc],ECX       ; 0044996c
    MOV ECX,dword ptr [ESP + 0x50]      ; 0044996f
    MOV dword ptr [EAX + 0x10],ECX      ; 00449973
    TEST ESI,ESI                        ; 00449976
    JNZ 0x00449df2                      ; 00449978
        ;   XREF to: 00449df2 (CONDITIONAL_JUMP)  ; LAB_00449df2
    CMP dword ptr [EBX + 0x180],0x0     ; 0044997e
    JZ 0x00449df2                       ; 00449985
        ;   XREF to: 00449df2 (CONDITIONAL_JUMP)  ; LAB_00449df2
    MOV dword ptr [EAX + 0x68],0x1      ; 0044998b
        ;   Label: LAB_0044998b
    MOV dword ptr [EAX + 0x70],0x0      ; 00449992
        ;   Label: LAB_00449992
    TEST EDX,EDX                        ; 00449999
    JNZ 0x004499a8                      ; 0044999b
        ;   XREF to: 004499a8 (CONDITIONAL_JUMP)  ; LAB_004499a8
    TEST ESI,ESI                        ; 0044999d
    JNZ 0x004499a8                      ; 0044999f
        ;   XREF to: 004499a8 (CONDITIONAL_JUMP)  ; LAB_004499a8
    MOV dword ptr [EAX + 0x70],0x1      ; 004499a1
    TEST EDX,EDX                        ; 004499a8
        ;   Label: LAB_004499a8
    JNZ 0x004499b9                      ; 004499aa
        ;   XREF to: 004499b9 (CONDITIONAL_JUMP)  ; LAB_004499b9
    CMP ESI,dword ptr [ESP + 0x40]      ; 004499ac
    JNZ 0x004499b9                      ; 004499b0
        ;   XREF to: 004499b9 (CONDITIONAL_JUMP)  ; LAB_004499b9
    MOV dword ptr [EAX + 0x70],0x1      ; 004499b2
    CMP EDX,dword ptr [ESP + 0x30]      ; 004499b9
        ;   Label: LAB_004499b9
    JNZ 0x004499ca                      ; 004499bd
        ;   XREF to: 004499ca (CONDITIONAL_JUMP)  ; LAB_004499ca
    TEST ESI,ESI                        ; 004499bf
    JNZ 0x004499ca                      ; 004499c1
        ;   XREF to: 004499ca (CONDITIONAL_JUMP)  ; LAB_004499ca
    MOV dword ptr [EAX + 0x70],0x1      ; 004499c3
    CMP EDX,dword ptr [ESP + 0x38]      ; 004499ca
        ;   Label: LAB_004499ca
    JNZ 0x004499dd                      ; 004499ce
        ;   XREF to: 004499dd (CONDITIONAL_JUMP)  ; LAB_004499dd
    CMP ESI,dword ptr [ESP + 0x3c]      ; 004499d0
    JNZ 0x004499dd                      ; 004499d4
        ;   XREF to: 004499dd (CONDITIONAL_JUMP)  ; LAB_004499dd
    MOV dword ptr [EAX + 0x70],0x1      ; 004499d6
    MOV dword ptr [EAX + 0x44],0x0      ; 004499dd
        ;   Label: LAB_004499dd
    TEST ESI,ESI                        ; 004499e4
    JLE 0x004499f6                      ; 004499e6
        ;   XREF to: 004499f6 (CONDITIONAL_JUMP)  ; LAB_004499f6
    MOV ECX,dword ptr [EAX + 0x44]      ; 004499e8
    MOV EDI,dword ptr [ESP + 0x60]      ; 004499eb
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 004499ef
    INC dword ptr [EAX + 0x44]          ; 004499f3
    TEST EDX,EDX                        ; 004499f6
        ;   Label: LAB_004499f6
    JLE 0x00449a09                      ; 004499f8
        ;   XREF to: 00449a09 (CONDITIONAL_JUMP)  ; LAB_00449a09
    MOV EDI,dword ptr [ESP + 0x64]      ; 004499fa
    MOV ECX,dword ptr [EAX + 0x44]      ; 004499fe
    DEC EDI                             ; 00449a01
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 00449a02
    INC dword ptr [EAX + 0x44]          ; 00449a06
    CMP EDX,dword ptr [ESP + 0x44]      ; 00449a09
        ;   Label: LAB_00449a09
    JGE 0x00449a1e                      ; 00449a0d
        ;   XREF to: 00449a1e (CONDITIONAL_JUMP)  ; LAB_00449a1e
    MOV EDI,dword ptr [ESP + 0x64]      ; 00449a0f
    MOV ECX,dword ptr [EAX + 0x44]      ; 00449a13
    INC EDI                             ; 00449a16
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 00449a17
    INC dword ptr [EAX + 0x44]          ; 00449a1b
    FLD float ptr [EBX + 0x158]         ; 00449a1e
        ;   Label: LAB_00449a1e
    FLD ST0                             ; 00449a24
    FMUL double ptr [0x00619bf2]        ; 00449a26 | DOUBLE_00619bf2
    FADD float ptr [EAX + 0xc]          ; 00449a2c
    FDIVRP                              ; 00449a2f
    FLD double ptr [0x00619bfa]         ; 00449a31 | DOUBLE_00619bfa
    FXCH                                ; 00449a37
    FMUL ST1                            ; 00449a39
    FLD double ptr [0x00619c02]         ; 00449a3b | DOUBLE_00619c02
    FXCH                                ; 00449a41
    FMUL ST1                            ; 00449a43
    CALL crt_math.c_round_FUN_005fe6b0  ; 00449a45
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x70]        ; 00449a4a
    MOV ECX,dword ptr [ESP + 0x70]      ; 00449a4e
    ADD ECX,0x20000                     ; 00449a52
    MOV dword ptr [EAX + 0x18],ECX      ; 00449a58
    FLD float ptr [EAX + 0x10]          ; 00449a5b
    FDIV float ptr [EBX + 0x15c]        ; 00449a5e
    FLD1                                ; 00449a64
    FSUBRP                              ; 00449a66
    FMULP ST2                           ; 00449a68
    FMULP                               ; 00449a6a
    FLD float ptr [ESP + 0x5c]          ; 00449a6c
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00449a70
    INC EDX                             ; 00449a74
    FADD float ptr [ESP + 0x2c]         ; 00449a75
    ADD EDI,0x74                        ; 00449a79
    FSTP float ptr [ESP + 0x5c]         ; 00449a7c
    CALL crt_math.c_round_FUN_005fe6b0  ; 00449a80
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x70]        ; 00449a85
    MOV ECX,dword ptr [ESP + 0x70]      ; 00449a89
    MOV dword ptr [ESP + 0x6c],EDI      ; 00449a8d
    ADD ECX,0x20000                     ; 00449a91
    MOV EDI,dword ptr [ESP + 0x54]      ; 00449a97
    MOV dword ptr [EAX + 0x1c],ECX      ; 00449a9b
    MOV EAX,dword ptr [ESP + 0x60]      ; 00449a9e
    MOV ECX,dword ptr [ESP + 0x64]      ; 00449aa2
    INC EAX                             ; 00449aa6
    INC ECX                             ; 00449aa7
    MOV dword ptr [ESP + 0x60],EAX      ; 00449aa8
    MOV dword ptr [ESP + 0x64],ECX      ; 00449aac
    CMP EDX,EDI                         ; 00449ab0
    JL 0x0044995d                       ; 00449ab2
        ;   XREF to: 0044995d (CONDITIONAL_JUMP)  ; LAB_0044995d
    FLD float ptr [ESP + 0x50]          ; 00449ab8
        ;   Label: LAB_00449ab8
    MOV EDI,dword ptr [ESP + 0x20]      ; 00449abc
    FSUB float ptr [ESP + 0x14]         ; 00449ac0
    INC ESI                             ; 00449ac4
    FSTP float ptr [ESP + 0x50]         ; 00449ac5
    CMP ESI,EDI                         ; 00449ac9
    JL 0x00449920                       ; 00449acb
        ;   XREF to: 00449920 (CONDITIONAL_JUMP)  ; LAB_00449920
    XOR EAX,EAX                         ; 00449ad1
        ;   Label: LAB_00449ad1
    MOV EDX,dword ptr [EBX + 0x204]     ; 00449ad3
    MOV dword ptr [ESP + 0x1c],EAX      ; 00449ad9
    TEST EDX,EDX                        ; 00449add
    JLE 0x00449b72                      ; 00449adf
        ;   XREF to: 00449b72 (CONDITIONAL_JUMP)  ; LAB_00449b72
    LEA EAX,[EBX + 0x208]               ; 00449ae5
    MOV dword ptr [ESP + 0x24],EAX      ; 00449aeb
    MOV dword ptr [ESP + 0x48],EAX      ; 00449aef
    MOV EAX,dword ptr [ESP + 0x24]      ; 00449af3
        ;   Label: LAB_00449af3
    XOR ECX,ECX                         ; 00449af7
    MOV EDI,dword ptr [EAX + 0x44]      ; 00449af9
    MOV dword ptr [ESP + 0x4c],EAX      ; 00449afc
    TEST EDI,EDI                        ; 00449b00
    JLE 0x00449b54                      ; 00449b02
        ;   XREF to: 00449b54 (CONDITIONAL_JUMP)  ; LAB_00449b54
    LEA ESI,[EAX + 0xc]                 ; 00449b04
    MOV EDX,EAX                         ; 00449b07
    IMUL EAX,dword ptr [EDX + 0x48],0x74 ; 00449b09
        ;   Label: LAB_00449b09
    ADD EAX,dword ptr [ESP + 0x48]      ; 00449b0d
    FLD float ptr [ESI]                 ; 00449b11
    FSUB float ptr [EAX + 0xc]          ; 00449b13
    FSTP float ptr [ESP]                ; 00449b16
    FLD float ptr [ESI + 0x4]           ; 00449b19
    FSUB float ptr [EAX + 0x10]         ; 00449b1c
    FST float ptr [ESP + 0x4]           ; 00449b1f
    FMUL float ptr [ESP + 0x4]          ; 00449b23
    FLD float ptr [ESP]                 ; 00449b27
    FMUL ST0                            ; 00449b2a
    FLD float ptr [ESI + 0x8]           ; 00449b2c
    FSUB float ptr [EAX + 0x14]         ; 00449b2f
    FXCH                                ; 00449b32
    FADDP ST2,ST0                       ; 00449b34
    FST float ptr [ESP + 0x8]           ; 00449b36
    FMUL float ptr [ESP + 0x8]          ; 00449b3a
    FADDP                               ; 00449b3e
    FSQRT                               ; 00449b40
    INC ECX                             ; 00449b42
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00449b43
    FSTP float ptr [EDX + 0x58]         ; 00449b47
    MOV EDI,dword ptr [EAX + 0x44]      ; 00449b4a
    ADD EDX,0x4                         ; 00449b4d
    CMP ECX,EDI                         ; 00449b50
    JL 0x00449b09                       ; 00449b52
        ;   XREF to: 00449b09 (CONDITIONAL_JUMP)  ; LAB_00449b09
    MOV ESI,dword ptr [ESP + 0x24]      ; 00449b54
        ;   Label: LAB_00449b54
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00449b58
    MOV EDX,dword ptr [EBX + 0x204]     ; 00449b5c
    ADD ESI,0x74                        ; 00449b62
    INC EDI                             ; 00449b65
    MOV dword ptr [ESP + 0x24],ESI      ; 00449b66
    MOV dword ptr [ESP + 0x1c],EDI      ; 00449b6a
    CMP EDI,EDX                         ; 00449b6e
    JL 0x00449af3                       ; 00449b70
        ;   XREF to: 00449af3 (CONDITIONAL_JUMP)  ; LAB_00449af3
    MOV ESI,dword ptr [EBX + 0x204]     ; 00449b72
        ;   Label: LAB_00449b72
    XOR ECX,ECX                         ; 00449b78
    TEST ESI,ESI                        ; 00449b7a
    JLE 0x00449bc4                      ; 00449b7c
        ;   XREF to: 00449bc4 (CONDITIONAL_JUMP)  ; LAB_00449bc4
    LEA ESI,[EBX + 0x208]               ; 00449b7e
    LEA EAX,[EBX + 0x214]               ; 00449b84
    IMUL EDX,ECX,0x74                   ; 00449b8a
        ;   Label: LAB_00449b8a
    ADD EDX,ESI                         ; 00449b8d
    CMP EDX,EAX                         ; 00449b8f
    JZ 0x00449ba3                       ; 00449b91
        ;   XREF to: 00449ba3 (CONDITIONAL_JUMP)  ; LAB_00449ba3
    MOV EDI,dword ptr [EAX]             ; 00449b93
    MOV dword ptr [EDX],EDI             ; 00449b95
    MOV EDI,dword ptr [EAX + 0x4]       ; 00449b97
    MOV dword ptr [EDX + 0x4],EDI       ; 00449b9a
    MOV EDI,dword ptr [EAX + 0x8]       ; 00449b9d
    MOV dword ptr [EDX + 0x8],EDI       ; 00449ba0
    MOV dword ptr [EDX + 0x34],0x0      ; 00449ba3
        ;   Label: LAB_00449ba3
    INC ECX                             ; 00449baa
    MOV EDI,dword ptr [EDX + 0x34]      ; 00449bab
    MOV dword ptr [EDX + 0x30],EDI      ; 00449bae
    MOV EDI,dword ptr [EDX + 0x30]      ; 00449bb1
    MOV dword ptr [EDX + 0x2c],EDI      ; 00449bb4
    MOV EDX,dword ptr [EBX + 0x204]     ; 00449bb7
    ADD EAX,0x74                        ; 00449bbd
    CMP ECX,EDX                         ; 00449bc0
    JL 0x00449b8a                       ; 00449bc2
        ;   XREF to: 00449b8a (CONDITIONAL_JUMP)  ; LAB_00449b8a
    LEA EAX,[EBX + 0x1f614]             ; 00449bc4
        ;   Label: LAB_00449bc4
    MOV ESI,dword ptr [EBX + 0x1c730]   ; 00449bca
    XOR ECX,ECX                         ; 00449bd0
    LEA EDX,[EBX + 0x42894]             ; 00449bd2
    MOV dword ptr [ESP + 0x58],ECX      ; 00449bd8
    TEST ESI,ESI                        ; 00449bdc
    JLE 0x00449dad                      ; 00449bde
        ;   XREF to: 00449dad (CONDITIONAL_JUMP)  ; LAB_00449dad
    XOR EDI,EDI                         ; 00449be4
        ;   Label: LAB_00449be4
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 00449be6
    MOV dword ptr [ESP + 0x68],EDI      ; 00449bec
    TEST ECX,ECX                        ; 00449bf0
    JLE 0x00449d96                      ; 00449bf2
        ;   XREF to: 00449d96 (CONDITIONAL_JUMP)  ; LAB_00449d96
    MOV dword ptr [EAX + 0x14],0x0      ; 00449bf8
        ;   Label: LAB_00449bf8
    MOV dword ptr [EAX + 0x4],0x3       ; 00449bff
    MOV ECX,dword ptr [EAX + 0x14]      ; 00449c06
    MOV dword ptr [EAX + 0x10],ECX      ; 00449c09
    MOV dword ptr [EAX + 0xc],ECX       ; 00449c0c
    MOV dword ptr [EAX + 0x8],ECX       ; 00449c0f
    MOV dword ptr [EDX + 0x4],0x3       ; 00449c12
    MOV dword ptr [EDX + 0x14],0x0      ; 00449c19
    MOV ECX,dword ptr [EDX + 0x14]      ; 00449c20
    MOV dword ptr [EDX + 0x10],ECX      ; 00449c23
    MOV dword ptr [EDX + 0xc],ECX       ; 00449c26
    MOV dword ptr [EDX + 0x8],ECX       ; 00449c29
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 00449c2c
    MOV ESI,dword ptr [ESP + 0x58]      ; 00449c32
    INC ECX                             ; 00449c36
    IMUL ECX,ESI                        ; 00449c37
    MOV ESI,dword ptr [ESP + 0x68]      ; 00449c3a
    ADD ESI,ECX                         ; 00449c3e
    MOV dword ptr [EAX + 0x18],ESI      ; 00449c40
    IMUL ECX,ESI,0x74                   ; 00449c43
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00449c46
    MOV dword ptr [EAX + 0x1c],EDI      ; 00449c4d
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00449c50
    INC ESI                             ; 00449c57
    MOV dword ptr [EAX + 0x20],ECX      ; 00449c58
    MOV dword ptr [EAX + 0x24],ESI      ; 00449c5b
    IMUL ECX,ESI,0x74                   ; 00449c5e
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00449c61
    MOV dword ptr [EAX + 0x28],EDI      ; 00449c68
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00449c6b
    MOV dword ptr [EAX + 0x2c],ECX      ; 00449c72
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 00449c75
    INC ECX                             ; 00449c7b
    ADD ESI,ECX                         ; 00449c7c
    MOV dword ptr [EAX + 0x30],ESI      ; 00449c7e
    IMUL ECX,ESI,0x74                   ; 00449c81
    MOV ESI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00449c84
    MOV dword ptr [EAX + 0x34],ESI      ; 00449c8b
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00449c8e
    MOV dword ptr [EAX + 0x38],ECX      ; 00449c95
    LEA EDI,[EDX + 0x18]                ; 00449c98
    LEA ESI,[EAX + 0x30]                ; 00449c9b
    MOVSD ES:EDI,ESI                    ; 00449c9e
    MOVSD ES:EDI,ESI                    ; 00449c9f
    MOVSD ES:EDI,ESI                    ; 00449ca0
    LEA EDI,[EDX + 0x24]                ; 00449ca1
    LEA ESI,[EAX + 0x24]                ; 00449ca4
    MOVSD ES:EDI,ESI                    ; 00449ca7
    MOVSD ES:EDI,ESI                    ; 00449ca8
    MOVSD ES:EDI,ESI                    ; 00449ca9
    LEA EDI,[EDX + 0x30]                ; 00449caa
    LEA ESI,[EAX + 0x18]                ; 00449cad
    MOVSD ES:EDI,ESI                    ; 00449cb0
    MOVSD ES:EDI,ESI                    ; 00449cb1
    MOVSD ES:EDI,ESI                    ; 00449cb2
    MOV dword ptr [EAX + 0x4c],0x3      ; 00449cb3
    MOV dword ptr [EAX + 0x5c],0x0      ; 00449cba
    MOV ECX,dword ptr [EAX + 0x5c]      ; 00449cc1
    MOV dword ptr [EAX + 0x58],ECX      ; 00449cc4
    MOV dword ptr [EAX + 0x54],ECX      ; 00449cc7
    MOV dword ptr [EAX + 0x50],ECX      ; 00449cca
    MOV dword ptr [EDX + 0x4c],0x3      ; 00449ccd
    MOV dword ptr [EDX + 0x5c],0x0      ; 00449cd4
    MOV ECX,dword ptr [EDX + 0x5c]      ; 00449cdb
    MOV dword ptr [EDX + 0x58],ECX      ; 00449cde
    MOV dword ptr [EDX + 0x54],ECX      ; 00449ce1
    MOV dword ptr [EDX + 0x50],ECX      ; 00449ce4
    MOV ESI,dword ptr [EBX + 0x1c72c]   ; 00449ce7
    MOV EDI,dword ptr [ESP + 0x58]      ; 00449ced
    INC ESI                             ; 00449cf1
    IMUL ESI,EDI                        ; 00449cf2
    MOV ECX,dword ptr [ESP + 0x68]      ; 00449cf5
    ADD ESI,ECX                         ; 00449cf9
    MOV dword ptr [EAX + 0x60],ESI      ; 00449cfb
    IMUL ECX,ESI,0x74                   ; 00449cfe
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00449d01
    MOV dword ptr [EAX + 0x64],EDI      ; 00449d08
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00449d0b
    MOV dword ptr [EAX + 0x68],ECX      ; 00449d12
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 00449d15
    ADD ECX,0x2                         ; 00449d1b
    ADD ESI,ECX                         ; 00449d1e
    MOV dword ptr [EAX + 0x6c],ESI      ; 00449d20
    IMUL ECX,ESI,0x74                   ; 00449d23
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00449d26
    MOV dword ptr [EAX + 0x70],EDI      ; 00449d2d
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00449d30
    DEC ESI                             ; 00449d37
    MOV dword ptr [EAX + 0x74],ECX      ; 00449d38
    MOV dword ptr [EAX + 0x78],ESI      ; 00449d3b
    IMUL ECX,ESI,0x74                   ; 00449d3e
    MOV ESI,dword ptr [ECX + EBX*0x1 + 0x220] ; 00449d41
    MOV dword ptr [EAX + 0x7c],ESI      ; 00449d48
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 00449d4b
    MOV dword ptr [EAX + 0x80],ECX      ; 00449d52
    LEA EDI,[EDX + 0x60]                ; 00449d58
    LEA ESI,[EAX + 0x78]                ; 00449d5b
    MOVSD ES:EDI,ESI                    ; 00449d5e
    MOVSD ES:EDI,ESI                    ; 00449d5f
    MOVSD ES:EDI,ESI                    ; 00449d60
    LEA EDI,[EDX + 0x6c]                ; 00449d61
    LEA ESI,[EAX + 0x6c]                ; 00449d64
    MOVSD ES:EDI,ESI                    ; 00449d67
    MOVSD ES:EDI,ESI                    ; 00449d68
    MOVSD ES:EDI,ESI                    ; 00449d69
    LEA EDI,[EDX + 0x78]                ; 00449d6a
    LEA ESI,[EAX + 0x60]                ; 00449d6d
    ADD EAX,0x48                        ; 00449d70
    ADD EDX,0x48                        ; 00449d73
    MOVSD ES:EDI,ESI                    ; 00449d76
    MOVSD ES:EDI,ESI                    ; 00449d77
    MOVSD ES:EDI,ESI                    ; 00449d78
    ADD EAX,0x48                        ; 00449d79
    MOV ESI,dword ptr [ESP + 0x68]      ; 00449d7c
    ADD EDX,0x48                        ; 00449d80
    INC ESI                             ; 00449d83
    MOV EDI,dword ptr [EBX + 0x1c72c]   ; 00449d84
    MOV dword ptr [ESP + 0x68],ESI      ; 00449d8a
    CMP ESI,EDI                         ; 00449d8e
    JL 0x00449bf8                       ; 00449d90
        ;   XREF to: 00449bf8 (CONDITIONAL_JUMP)  ; LAB_00449bf8
    MOV ECX,dword ptr [ESP + 0x58]      ; 00449d96
        ;   Label: LAB_00449d96
    INC ECX                             ; 00449d9a
    MOV ESI,dword ptr [EBX + 0x1c730]   ; 00449d9b
    MOV dword ptr [ESP + 0x58],ECX      ; 00449da1
    CMP ECX,ESI                         ; 00449da5
    JL 0x00449be4                       ; 00449da7
        ;   XREF to: 00449be4 (CONDITIONAL_JUMP)  ; LAB_00449be4
    PUSH EBX                            ; 00449dad
        ;   Label: LAB_00449dad
    CALL core_curtain.cpp_CCurtain_updateWorldPositions_FUN_00449e40 ; 00449dae
        ;   XREF to: 00449e40 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_CCurtain_updateWorldPositions_FUN_00449e40(CCurtain * this_ptr)
    MOV EDX,dword ptr [EBX + 0x17c]     ; 00449db3
    ADD ESP,0x4                         ; 00449db9
    CMP EDX,0xfde8                      ; 00449dbc
    SETLE AL                            ; 00449dc2
    AND EAX,0xff                        ; 00449dc5
    MOV dword ptr [EBX + 0xfc],EAX      ; 00449dca
    MOV ESP,EBP                         ; 00449dd0
    POP EBP                             ; 00449dd2
    POP EDI                             ; 00449dd3
    POP ESI                             ; 00449dd4
    POP EBX                             ; 00449dd5
    RET                                 ; 00449dd6
    FLD float ptr [EBX + 0x1fc]         ; 00449dd7
        ;   Label: LAB_00449dd7
    FLD ST0                             ; 00449ddd
    FMUL double ptr [0x00619bea]        ; 00449ddf | DOUBLE_00619bea
    FSTP ST1                            ; 00449de5
    FSTP float ptr [EBX + 0x1fc]        ; 00449de7
    JMP 0x0044983e                      ; 00449ded
        ;   XREF to: 0044983e (UNCONDITIONAL_JUMP)  ; LAB_0044983e
    CMP ESI,dword ptr [ESP + 0x34]      ; 00449df2
        ;   Label: LAB_00449df2
    JNZ 0x00449e05                      ; 00449df6
        ;   XREF to: 00449e05 (CONDITIONAL_JUMP)  ; LAB_00449e05
    CMP dword ptr [EBX + 0x18c],0x0     ; 00449df8
    JNZ 0x0044998b                      ; 00449dff
        ;   XREF to: 0044998b (CONDITIONAL_JUMP)  ; LAB_0044998b
    TEST EDX,EDX                        ; 00449e05
        ;   Label: LAB_00449e05
    JNZ 0x00449e16                      ; 00449e07
        ;   XREF to: 00449e16 (CONDITIONAL_JUMP)  ; LAB_00449e16
    CMP dword ptr [EBX + 0x184],0x0     ; 00449e09
    JNZ 0x0044998b                      ; 00449e10
        ;   XREF to: 0044998b (CONDITIONAL_JUMP)  ; LAB_0044998b
    CMP EDX,dword ptr [ESP + 0x28]      ; 00449e16
        ;   Label: LAB_00449e16
    JNZ 0x00449e29                      ; 00449e1a
        ;   XREF to: 00449e29 (CONDITIONAL_JUMP)  ; LAB_00449e29
    CMP dword ptr [EBX + 0x188],0x0     ; 00449e1c
    JNZ 0x0044998b                      ; 00449e23
        ;   XREF to: 0044998b (CONDITIONAL_JUMP)  ; LAB_0044998b
    MOV dword ptr [EAX + 0x68],0x0      ; 00449e29
        ;   Label: LAB_00449e29
    JMP 0x00449992                      ; 00449e30
        ;   XREF to: 00449992 (UNCONDITIONAL_JUMP)  ; LAB_00449992

