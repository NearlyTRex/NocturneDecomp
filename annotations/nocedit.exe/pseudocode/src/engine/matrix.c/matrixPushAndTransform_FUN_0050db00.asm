; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_0050db00(int rotation_x,int rotation_y,int rotation_z)
;
; Parameters:
; int              Stack[0x4]:4   rotation_x
; int              Stack[0x8]:4   rotation_y
; int              Stack[0xc]:4   rotation_z
; Local Variables:
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
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635aed
;   TerminatedCString s_Matrix_unbalance_00635b00
;   double g_InverseTwoPi = 0.318309886192889
;   double g_FixedPointScale_00635b1d = 32768
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_LightDirectionX
;   int g_LightDirectionY
;   int g_LightDirectionZ
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   ... and 22 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_atan2_FUN_006013b1
;   crt_math.c_round_FUN_005fe6b0
;   engine_matrix.c_interpolatedCos_FUN_0050c600
;   engine_matrix.c_interpolatedSin_FUN_0050c5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050db00
        ;   Label: engine_matrix.c_matrixPushAndTransform_FUN_0050db00
    PUSH ESI                            ; 0050db01
    PUSH EDI                            ; 0050db02
    PUSH EBP                            ; 0050db03
    SUB ESP,0x40                        ; 0050db04
    MOV EAX,[0x02f0d3c0]                ; 0050db07 | g_MatrixStackIndex
    MOV EDX,dword ptr [0x02d052b8]      ; 0050db0c | g_RelativeX
    MOV dword ptr [EAX*0x4 + 0x2f0d52c],EDX ; 0050db12 | g_MatrixStack_RelX
    MOV EDX,dword ptr [0x02d052bc]      ; 0050db19 | g_RelativeY
    MOV dword ptr [EAX*0x4 + 0x2f0d554],EDX ; 0050db1f | g_MatrixStack_RelY
    MOV EDX,dword ptr [0x02d052c0]      ; 0050db26 | g_RelativeZ
    MOV dword ptr [EAX*0x4 + 0x2f0d57c],EDX ; 0050db2c | g_MatrixStack_RelZ
    MOV EDX,dword ptr [0x02d052dc]      ; 0050db33 | g_LightDirectionX
    MOV dword ptr [EAX*0x4 + 0x2f0d5a4],EDX ; 0050db39 | g_MatrixStack_Unk1
    MOV EDX,dword ptr [0x02d052e0]      ; 0050db40 | g_LightDirectionY
    MOV dword ptr [EAX*0x4 + 0x2f0d5cc],EDX ; 0050db46 | g_MatrixStack_Unk2
    MOV EDX,dword ptr [0x02d052e4]      ; 0050db4d | g_LightDirectionZ
    MOV dword ptr [EAX*0x4 + 0x2f0d5f4],EDX ; 0050db53 | g_MatrixStack_Unk3
    MOV EDX,dword ptr [0x02d052e8]      ; 0050db5a | g_TransformMatrix
    MOV dword ptr [EAX*0x4 + 0x2f0d3c4],EDX ; 0050db60 | g_MatrixStack_M00
    MOV EDX,dword ptr [0x02d052ec]      ; 0050db67 | g_TransformMatrix[0][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d3ec],EDX ; 0050db6d | g_MatrixStack_M01
    MOV EDX,dword ptr [0x02d052f0]      ; 0050db74 | g_TransformMatrix[0][2]
    MOV dword ptr [EAX*0x4 + 0x2f0d414],EDX ; 0050db7a | g_MatrixStack_M02
    MOV EDX,dword ptr [0x02d052f4]      ; 0050db81 | g_TransformMatrix[1][0]
    MOV dword ptr [EAX*0x4 + 0x2f0d43c],EDX ; 0050db87 | g_MatrixStack_M10
    MOV EDX,dword ptr [0x02d052f8]      ; 0050db8e | g_TransformMatrix[1][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d464],EDX ; 0050db94 | g_MatrixStack_M11
    MOV EDX,dword ptr [0x02d052fc]      ; 0050db9b | g_TransformMatrix[1][2]
    MOV dword ptr [EAX*0x4 + 0x2f0d48c],EDX ; 0050dba1 | g_MatrixStack_M12
    MOV EDX,dword ptr [0x02d05300]      ; 0050dba8 | g_TransformMatrix[2][0]
    MOV dword ptr [EAX*0x4 + 0x2f0d4b4],EDX ; 0050dbae | g_MatrixStack_M20
    MOV EDX,dword ptr [0x02d05304]      ; 0050dbb5 | g_TransformMatrix[2][1]
    MOV dword ptr [EAX*0x4 + 0x2f0d4dc],EDX ; 0050dbbb | g_MatrixStack_M21
    MOV EDX,dword ptr [0x02d05308]      ; 0050dbc2 | g_TransformMatrix[2][2]
    FILD dword ptr [ESP + 0x5c]         ; 0050dbc8
    MOV dword ptr [EAX*0x4 + 0x2f0d504],EDX ; 0050dbcc | g_MatrixStack_M22
    MOV EAX,[0x02d052b8]                ; 0050dbd3 | g_RelativeX
    FILD dword ptr [ESP + 0x54]         ; 0050dbd8
    MOV dword ptr [ESP + 0x14],EAX      ; 0050dbdc
    MOV EAX,[0x02d052bc]                ; 0050dbe0 | g_RelativeY
    FLD ST1                             ; 0050dbe5
    MOV dword ptr [ESP + 0x18],EAX      ; 0050dbe7
    MOV EAX,[0x02d052c0]                ; 0050dbeb | g_RelativeZ
    FXCH                                ; 0050dbf0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050dbf2
    CALL crt_math.c_atan2_FUN_006013b1  ; 0050dbf6
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FLD ST1                             ; 0050dbfb
    FILD dword ptr [ESP + 0x58]         ; 0050dbfd
    CALL crt_math.c_atan2_FUN_006013b1  ; 0050dc01
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FSTP ST2                            ; 0050dc06
    FXCH                                ; 0050dc08
    FCHS                                ; 0050dc0a
    FLD double ptr [0x00635b15]         ; 0050dc0c | g_InverseTwoPi
    FXCH                                ; 0050dc12
    FMUL ST1                            ; 0050dc14
    FXCH ST2                            ; 0050dc16
    FMULP                               ; 0050dc18
    FXCH                                ; 0050dc1a
    FLD double ptr [0x00635b1d]         ; 0050dc1c | g_FixedPointScale_00635b1d
    FXCH                                ; 0050dc22
    FMUL ST1                            ; 0050dc24
    FXCH ST2                            ; 0050dc26
    FMULP                               ; 0050dc28
    FXCH                                ; 0050dc2a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050dc2c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0050dc31
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050dc35
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050dc39
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EDX                            ; 0050dc3e
    FISTP dword ptr [ESP + 0x14]        ; 0050dc3f
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050dc43
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    MOV dword ptr [ESP + 0x30],EAX      ; 0050dc48
    ADD ESP,0x4                         ; 0050dc4c
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050dc4f
    PUSH ECX                            ; 0050dc53
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050dc54
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    MOV dword ptr [ESP + 0x24],EAX      ; 0050dc59
    ADD ESP,0x4                         ; 0050dc5d
    PUSH 0x0                            ; 0050dc60
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050dc62
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    ADD ESP,0x4                         ; 0050dc67
    PUSH 0x0                            ; 0050dc6a
    MOV EBP,EAX                         ; 0050dc6c
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050dc6e
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    ADD ESP,0x4                         ; 0050dc73
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050dc76
    PUSH ESI                            ; 0050dc7a
    MOV EBX,EAX                         ; 0050dc7b
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050dc7d
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    MOV dword ptr [ESP + 0x38],EAX      ; 0050dc82
    ADD ESP,0x4                         ; 0050dc86
    PUSH ESI                            ; 0050dc89
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050dc8a
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050dc8f
    ADD ESP,0x4                         ; 0050dc93
    MOV EAX,EBX                         ; 0050dc96
    MOV EDX,dword ptr [ESP + 0x38]      ; 0050dc98
    IMUL EDX                            ; 0050dc9c
    SHRD EAX,EDX,0x10                   ; 0050dc9e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050dca2
    MOV ECX,EAX                         ; 0050dca6
    MOV EAX,EBP                         ; 0050dca8
    IMUL EDX                            ; 0050dcaa
    SHRD EAX,EDX,0x10                   ; 0050dcac
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050dcb0
    IMUL EDX                            ; 0050dcb4
    SHRD EAX,EDX,0x10                   ; 0050dcb6
    MOV EDX,dword ptr [ESP + 0x38]      ; 0050dcba
    ADD ECX,EAX                         ; 0050dcbe
    NEG EDX                             ; 0050dcc0
    MOV EAX,EBP                         ; 0050dcc2
    MOV dword ptr [ESP + 0x30],ECX      ; 0050dcc4
    IMUL EDX                            ; 0050dcc8
    SHRD EAX,EDX,0x10                   ; 0050dcca
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050dcce
    MOV ECX,EAX                         ; 0050dcd2
    MOV EAX,EBX                         ; 0050dcd4
    IMUL EDX                            ; 0050dcd6
    SHRD EAX,EDX,0x10                   ; 0050dcd8
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050dcdc
    IMUL EDX                            ; 0050dce0
    SHRD EAX,EDX,0x10                   ; 0050dce2
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050dce6
    ADD ECX,EAX                         ; 0050dcea
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050dcec
    MOV dword ptr [ESP + 0x28],ECX      ; 0050dcf0
    IMUL EDX                            ; 0050dcf4
    SHRD EAX,EDX,0x10                   ; 0050dcf6
    MOV ECX,EAX                         ; 0050dcfa
    MOV EDX,EBP                         ; 0050dcfc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050dcfe
    IMUL EDX                            ; 0050dd02
    SHRD EAX,EDX,0x10                   ; 0050dd04
    MOV EDI,EAX                         ; 0050dd08
    MOV EDX,EBX                         ; 0050dd0a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050dd0c
    IMUL EDX                            ; 0050dd10
    SHRD EAX,EDX,0x10                   ; 0050dd12
    MOV ESI,EAX                         ; 0050dd16
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050dd18
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050dd1c
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050dd20
    NEG EAX                             ; 0050dd24
    NEG EDX                             ; 0050dd26
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050dd28
    MOV EAX,EBX                         ; 0050dd2c
    IMUL EDX                            ; 0050dd2e
    SHRD EAX,EDX,0x10                   ; 0050dd30
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050dd34
    MOV dword ptr [ESP + 0xc],EAX       ; 0050dd38
    MOV EAX,EBP                         ; 0050dd3c
    IMUL EDX                            ; 0050dd3e
    SHRD EAX,EDX,0x10                   ; 0050dd40
    MOV EDX,dword ptr [ESP + 0x38]      ; 0050dd44
    IMUL EDX                            ; 0050dd48
    SHRD EAX,EDX,0x10                   ; 0050dd4a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050dd4e
    ADD EDX,EAX                         ; 0050dd52
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050dd54
    MOV dword ptr [ESP + 0x24],EDX      ; 0050dd58
    MOV EDX,EBP                         ; 0050dd5c
    IMUL EDX                            ; 0050dd5e
    SHRD EAX,EDX,0x10                   ; 0050dd60
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050dd64
    MOV EBP,EAX                         ; 0050dd68
    MOV EAX,EBX                         ; 0050dd6a
    IMUL EDX                            ; 0050dd6c
    SHRD EAX,EDX,0x10                   ; 0050dd6e
    MOV EDX,dword ptr [ESP + 0x38]      ; 0050dd72
    IMUL EDX                            ; 0050dd76
    SHRD EAX,EDX,0x10                   ; 0050dd78
    MOV EDX,dword ptr [ESP + 0x38]      ; 0050dd7c
    ADD EBP,EAX                         ; 0050dd80
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050dd82
    IMUL EDX                            ; 0050dd86
    SHRD EAX,EDX,0x10                   ; 0050dd88
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050dd8c
    MOV EBX,EAX                         ; 0050dd90
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050dd92
    IMUL EDX                            ; 0050dd96
    SHRD EAX,EDX,0x10                   ; 0050dd98
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050dd9c
    MOV dword ptr [ESP + 0xc],EAX       ; 0050dda0
    MOV EAX,EDI                         ; 0050dda4
    IMUL EDX                            ; 0050dda6
    SHRD EAX,EDX,0x10                   ; 0050dda8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050ddac
    ADD EDX,EAX                         ; 0050ddb0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050ddb2
    MOV dword ptr [ESP + 0xc],EDX       ; 0050ddb6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050ddba
    IMUL EDX                            ; 0050ddbe
    SHRD EAX,EDX,0x10                   ; 0050ddc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050ddc4
    ADD EDX,EAX                         ; 0050ddc8
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050ddca
    MOV dword ptr [0x02d052b8],EDX      ; 0050ddce | g_RelativeX
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050ddd4
    IMUL EDX                            ; 0050ddd8
    SHRD EAX,EDX,0x10                   ; 0050ddda
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050ddde
    MOV dword ptr [ESP + 0xc],EAX       ; 0050dde2
    MOV EAX,ESI                         ; 0050dde6
    IMUL EDX                            ; 0050dde8
    SHRD EAX,EDX,0x10                   ; 0050ddea
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050ddee
    ADD EDX,EAX                         ; 0050ddf2
    MOV dword ptr [ESP + 0xc],EDX       ; 0050ddf4
    MOV EAX,EBP                         ; 0050ddf8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050ddfa
    IMUL EDX                            ; 0050ddfe
    SHRD EAX,EDX,0x10                   ; 0050de00
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050de04
    ADD EDX,EAX                         ; 0050de08
    MOV dword ptr [0x02d052bc],EDX      ; 0050de0a | g_RelativeY
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050de10
    MOV EAX,ECX                         ; 0050de14
    IMUL EDX                            ; 0050de16
    SHRD EAX,EDX,0x10                   ; 0050de18
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050de1c
    MOV dword ptr [ESP + 0xc],EAX       ; 0050de20
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0050de24
    IMUL EDX                            ; 0050de28
    SHRD EAX,EDX,0x10                   ; 0050de2a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050de2e
    ADD EDX,EAX                         ; 0050de32
    MOV dword ptr [ESP + 0xc],EDX       ; 0050de34
    MOV EAX,EBX                         ; 0050de38
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050de3a
    IMUL EDX                            ; 0050de3e
    SHRD EAX,EDX,0x10                   ; 0050de40
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050de44
    ADD EDX,EAX                         ; 0050de48
    MOV dword ptr [0x02d052c0],EDX      ; 0050de4a | g_RelativeZ
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050de50 | g_MatrixStackIndex
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050de56
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4] ; 0050de5a | g_MatrixStack_Unk1
    IMUL EDX                            ; 0050de61
    SHRD EAX,EDX,0x10                   ; 0050de63
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050de67 | g_MatrixStackIndex
    MOV dword ptr [ESP + 0xc],EAX       ; 0050de6d
    MOV EAX,EDI                         ; 0050de71
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc] ; 0050de73 | g_MatrixStack_Unk2
    IMUL EDX                            ; 0050de7a
    SHRD EAX,EDX,0x10                   ; 0050de7c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050de80
    ADD EDX,EAX                         ; 0050de84
    MOV dword ptr [ESP + 0xc],EDX       ; 0050de86
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050de8a | g_MatrixStackIndex
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050de90
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4] ; 0050de94 | g_MatrixStack_Unk3
    IMUL EDX                            ; 0050de9b
    SHRD EAX,EDX,0x10                   ; 0050de9d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050dea1
    ADD EDX,EAX                         ; 0050dea5
    MOV dword ptr [0x02d052dc],EDX      ; 0050dea7 | g_LightDirectionX
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050dead | g_MatrixStackIndex
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050deb3
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4] ; 0050deb7 | g_MatrixStack_Unk1
    IMUL EDX                            ; 0050debe
    SHRD EAX,EDX,0x10                   ; 0050dec0
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050dec4 | g_MatrixStackIndex
    MOV dword ptr [ESP + 0xc],EAX       ; 0050deca
    MOV EAX,ESI                         ; 0050dece
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc] ; 0050ded0 | g_MatrixStack_Unk2
    IMUL EDX                            ; 0050ded7
    SHRD EAX,EDX,0x10                   ; 0050ded9
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050dedd
    ADD EDX,EAX                         ; 0050dee1
    MOV dword ptr [ESP + 0xc],EDX       ; 0050dee3
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050dee7 | g_MatrixStackIndex
    MOV EAX,EBP                         ; 0050deed
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4] ; 0050deef | g_MatrixStack_Unk3
    IMUL EDX                            ; 0050def6
    SHRD EAX,EDX,0x10                   ; 0050def8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050defc
    ADD EDX,EAX                         ; 0050df00
    MOV dword ptr [0x02d052e0],EDX      ; 0050df02 | g_LightDirectionY
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050df08 | g_MatrixStackIndex
    MOV EAX,ECX                         ; 0050df0e
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5a4] ; 0050df10 | g_MatrixStack_Unk1
    IMUL EDX                            ; 0050df17
    SHRD EAX,EDX,0x10                   ; 0050df19
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050df1d | g_MatrixStackIndex
    MOV dword ptr [ESP + 0xc],EAX       ; 0050df23
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0050df27
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5cc] ; 0050df2b | g_MatrixStack_Unk2
    IMUL EDX                            ; 0050df32
    SHRD EAX,EDX,0x10                   ; 0050df34
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050df38
    ADD EDX,EAX                         ; 0050df3c
    MOV dword ptr [ESP + 0xc],EDX       ; 0050df3e
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050df42 | g_MatrixStackIndex
    MOV EAX,EBX                         ; 0050df48
    MOV EDX,dword ptr [EDX*0x4 + 0x2f0d5f4] ; 0050df4a | g_MatrixStack_Unk3
    IMUL EDX                            ; 0050df51
    SHRD EAX,EDX,0x10                   ; 0050df53
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050df57
    ADD EDX,EAX                         ; 0050df5b
    MOV dword ptr [0x02d052e4],EDX      ; 0050df5d | g_LightDirectionZ
    MOV EAX,[0x02f0d3c0]                ; 0050df63 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050df68
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4] ; 0050df6c | g_MatrixStack_M00
    IMUL EDX                            ; 0050df73
    SHRD EAX,EDX,0x10                   ; 0050df75
    MOV dword ptr [ESP + 0xc],EAX       ; 0050df79
    MOV EAX,[0x02f0d3c0]                ; 0050df7d | g_MatrixStackIndex
    MOV EDX,EDI                         ; 0050df82
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c] ; 0050df84 | g_MatrixStack_M10
    IMUL EDX                            ; 0050df8b
    SHRD EAX,EDX,0x10                   ; 0050df8d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050df91
    ADD EDX,EAX                         ; 0050df95
    MOV EAX,[0x02f0d3c0]                ; 0050df97 | g_MatrixStackIndex
    MOV dword ptr [ESP + 0xc],EDX       ; 0050df9c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050dfa0
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4] ; 0050dfa4 | g_MatrixStack_M20
    IMUL EDX                            ; 0050dfab
    SHRD EAX,EDX,0x10                   ; 0050dfad
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050dfb1
    ADD EDX,EAX                         ; 0050dfb5
    MOV EAX,[0x02f0d3c0]                ; 0050dfb7 | g_MatrixStackIndex
    MOV dword ptr [0x02d052e8],EDX      ; 0050dfbc | g_TransformMatrix
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050dfc2
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec] ; 0050dfc6 | g_MatrixStack_M01
    IMUL EDX                            ; 0050dfcd
    SHRD EAX,EDX,0x10                   ; 0050dfcf
    MOV dword ptr [ESP + 0xc],EAX       ; 0050dfd3
    MOV EAX,[0x02f0d3c0]                ; 0050dfd7 | g_MatrixStackIndex
    MOV EDX,EDI                         ; 0050dfdc
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464] ; 0050dfde | g_MatrixStack_M11
    IMUL EDX                            ; 0050dfe5
    SHRD EAX,EDX,0x10                   ; 0050dfe7
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050dfeb
    ADD EDX,EAX                         ; 0050dfef
    MOV EAX,[0x02f0d3c0]                ; 0050dff1 | g_MatrixStackIndex
    MOV dword ptr [ESP + 0xc],EDX       ; 0050dff6
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050dffa
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc] ; 0050dffe | g_MatrixStack_M21
    IMUL EDX                            ; 0050e005
    SHRD EAX,EDX,0x10                   ; 0050e007
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050e00b
    ADD EDX,EAX                         ; 0050e00f
    MOV EAX,[0x02f0d3c0]                ; 0050e011 | g_MatrixStackIndex
    MOV dword ptr [0x02d052ec],EDX      ; 0050e016 | g_TransformMatrix[0][1]
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050e01c
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414] ; 0050e020 | g_MatrixStack_M02
    IMUL EDX                            ; 0050e027
    SHRD EAX,EDX,0x10                   ; 0050e029
    MOV dword ptr [ESP + 0xc],EAX       ; 0050e02d
    MOV EAX,[0x02f0d3c0]                ; 0050e031 | g_MatrixStackIndex
    MOV EDX,EDI                         ; 0050e036
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c] ; 0050e038 | g_MatrixStack_M12
    MOV EDI,dword ptr [ESP + 0xc]       ; 0050e03f
    IMUL EDX                            ; 0050e043
    SHRD EAX,EDX,0x10                   ; 0050e045
    ADD EDI,EAX                         ; 0050e049
    MOV EAX,[0x02f0d3c0]                ; 0050e04b | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050e050
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504] ; 0050e054 | g_MatrixStack_M22
    IMUL EDX                            ; 0050e05b
    SHRD EAX,EDX,0x10                   ; 0050e05d
    ADD EDI,EAX                         ; 0050e061
    MOV EAX,[0x02f0d3c0]                ; 0050e063 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050e068
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4] ; 0050e06c | g_MatrixStack_M00
    MOV dword ptr [0x02d052f0],EDI      ; 0050e073 | g_TransformMatrix[0][2]
    IMUL EDX                            ; 0050e079
    SHRD EAX,EDX,0x10                   ; 0050e07b
    MOV EDI,EAX                         ; 0050e07f
    MOV EAX,[0x02f0d3c0]                ; 0050e081 | g_MatrixStackIndex
    MOV EDX,ESI                         ; 0050e086
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c] ; 0050e088 | g_MatrixStack_M10
    IMUL EDX                            ; 0050e08f
    SHRD EAX,EDX,0x10                   ; 0050e091
    ADD EDI,EAX                         ; 0050e095
    MOV EAX,[0x02f0d3c0]                ; 0050e097 | g_MatrixStackIndex
    MOV EDX,EBP                         ; 0050e09c
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4] ; 0050e09e | g_MatrixStack_M20
    IMUL EDX                            ; 0050e0a5
    SHRD EAX,EDX,0x10                   ; 0050e0a7
    ADD EDI,EAX                         ; 0050e0ab
    MOV dword ptr [0x02d052f4],EDI      ; 0050e0ad | g_TransformMatrix[1][0]
    MOV EAX,[0x02f0d3c0]                ; 0050e0b3 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050e0b8
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec] ; 0050e0bc | g_MatrixStack_M01
    IMUL EDX                            ; 0050e0c3
    SHRD EAX,EDX,0x10                   ; 0050e0c5
    MOV EDI,EAX                         ; 0050e0c9
    MOV EAX,[0x02f0d3c0]                ; 0050e0cb | g_MatrixStackIndex
    MOV EDX,ESI                         ; 0050e0d0
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464] ; 0050e0d2 | g_MatrixStack_M11
    IMUL EDX                            ; 0050e0d9
    SHRD EAX,EDX,0x10                   ; 0050e0db
    ADD EDI,EAX                         ; 0050e0df
    MOV EAX,[0x02f0d3c0]                ; 0050e0e1 | g_MatrixStackIndex
    MOV EDX,EBP                         ; 0050e0e6
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc] ; 0050e0e8 | g_MatrixStack_M21
    IMUL EDX                            ; 0050e0ef
    SHRD EAX,EDX,0x10                   ; 0050e0f1
    ADD EDI,EAX                         ; 0050e0f5
    MOV EAX,[0x02f0d3c0]                ; 0050e0f7 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050e0fc
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414] ; 0050e100 | g_MatrixStack_M02
    MOV dword ptr [0x02d052f8],EDI      ; 0050e107 | g_TransformMatrix[1][1]
    IMUL EDX                            ; 0050e10d
    SHRD EAX,EDX,0x10                   ; 0050e10f
    MOV EDI,EAX                         ; 0050e113
    MOV EAX,[0x02f0d3c0]                ; 0050e115 | g_MatrixStackIndex
    MOV EDX,ESI                         ; 0050e11a
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c] ; 0050e11c | g_MatrixStack_M12
    IMUL EDX                            ; 0050e123
    SHRD EAX,EDX,0x10                   ; 0050e125
    ADD EDI,EAX                         ; 0050e129
    MOV EAX,[0x02f0d3c0]                ; 0050e12b | g_MatrixStackIndex
    MOV EDX,EBP                         ; 0050e130
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504] ; 0050e132 | g_MatrixStack_M22
    IMUL EDX                            ; 0050e139
    SHRD EAX,EDX,0x10                   ; 0050e13b
    ADD EDI,EAX                         ; 0050e13f
    MOV EAX,[0x02f0d3c0]                ; 0050e141 | g_MatrixStackIndex
    MOV EDX,ECX                         ; 0050e146
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3c4] ; 0050e148 | g_MatrixStack_M00
    MOV dword ptr [0x02d052fc],EDI      ; 0050e14f | g_TransformMatrix[1][2]
    IMUL EDX                            ; 0050e155
    SHRD EAX,EDX,0x10                   ; 0050e157
    MOV ESI,EAX                         ; 0050e15b
    MOV EAX,[0x02f0d3c0]                ; 0050e15d | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0050e162
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d43c] ; 0050e166 | g_MatrixStack_M10
    IMUL EDX                            ; 0050e16d
    SHRD EAX,EDX,0x10                   ; 0050e16f
    ADD ESI,EAX                         ; 0050e173
    MOV EAX,[0x02f0d3c0]                ; 0050e175 | g_MatrixStackIndex
    MOV EDX,EBX                         ; 0050e17a
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4b4] ; 0050e17c | g_MatrixStack_M20
    IMUL EDX                            ; 0050e183
    SHRD EAX,EDX,0x10                   ; 0050e185
    ADD ESI,EAX                         ; 0050e189
    MOV EAX,[0x02f0d3c0]                ; 0050e18b | g_MatrixStackIndex
    MOV EDX,ECX                         ; 0050e190
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d3ec] ; 0050e192 | g_MatrixStack_M01
    MOV dword ptr [0x02d05300],ESI      ; 0050e199 | g_TransformMatrix[2][0]
    IMUL EDX                            ; 0050e19f
    SHRD EAX,EDX,0x10                   ; 0050e1a1
    MOV ESI,EAX                         ; 0050e1a5
    MOV EAX,[0x02f0d3c0]                ; 0050e1a7 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0050e1ac
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d464] ; 0050e1b0 | g_MatrixStack_M11
    IMUL EDX                            ; 0050e1b7
    SHRD EAX,EDX,0x10                   ; 0050e1b9
    ADD ESI,EAX                         ; 0050e1bd
    MOV EAX,[0x02f0d3c0]                ; 0050e1bf | g_MatrixStackIndex
    MOV EDX,EBX                         ; 0050e1c4
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d4dc] ; 0050e1c6 | g_MatrixStack_M21
    IMUL EDX                            ; 0050e1cd
    SHRD EAX,EDX,0x10                   ; 0050e1cf
    ADD ESI,EAX                         ; 0050e1d3
    MOV dword ptr [0x02d05304],ESI      ; 0050e1d5 | g_TransformMatrix[2][1]
    MOV EAX,[0x02f0d3c0]                ; 0050e1db | g_MatrixStackIndex
    MOV EDX,ECX                         ; 0050e1e0
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d414] ; 0050e1e2 | g_MatrixStack_M02
    IMUL EDX                            ; 0050e1e9
    SHRD EAX,EDX,0x10                   ; 0050e1eb
    MOV ECX,EAX                         ; 0050e1ef
    MOV EAX,[0x02f0d3c0]                ; 0050e1f1 | g_MatrixStackIndex
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0050e1f6
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d48c] ; 0050e1fa | g_MatrixStack_M12
    IMUL EDX                            ; 0050e201
    SHRD EAX,EDX,0x10                   ; 0050e203
    ADD ECX,EAX                         ; 0050e207
    MOV EAX,[0x02f0d3c0]                ; 0050e209 | g_MatrixStackIndex
    MOV EDX,EBX                         ; 0050e20e
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d504] ; 0050e210 | g_MatrixStack_M22
    IMUL EDX                            ; 0050e217
    SHRD EAX,EDX,0x10                   ; 0050e219
    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050e21d | g_MatrixStackIndex
    ADD ECX,EAX                         ; 0050e223
    INC EDX                             ; 0050e225
    MOV dword ptr [0x02d05308],ECX      ; 0050e226 | g_TransformMatrix[2][2]
    MOV dword ptr [0x02f0d3c0],EDX      ; 0050e22c | g_MatrixStackIndex
    CMP EDX,0x9                         ; 0050e232
    JG 0x0050e23f                       ; 0050e235
        ;   XREF to: 0050e23f (CONDITIONAL_JUMP)  ; LAB_0050e23f
    ADD ESP,0x40                        ; 0050e237
    POP EBP                             ; 0050e23a
    POP EDI                             ; 0050e23b
    POP ESI                             ; 0050e23c
    POP EBX                             ; 0050e23d
    RET                                 ; 0050e23e
    MOV EBX,0x635aed                    ; 0050e23f | = "..\\engine\\matrix.c"
        ;   Label: LAB_0050e23f
    MOV ESI,0x4c9                       ; 0050e244
    PUSH 0x635b00                       ; 0050e249 | = "Matrix unbalance"
    MOV dword ptr [0x02f0ca48],EBX      ; 0050e24e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050e254 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050e25a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050e25f
    ADD ESP,0x40                        ; 0050e262
    POP EBP                             ; 0050e265
    POP EDI                             ; 0050e266
    POP ESI                             ; 0050e267
    POP EBX                             ; 0050e268
    RET                                 ; 0050e269

