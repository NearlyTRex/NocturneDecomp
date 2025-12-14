; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_bisectMesh_FUN_0046ed50(void)
;
; Local Variables:
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
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f7ab
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061e0b2
;   TerminatedCString s_Not_3_faces_0061e0c4
;   double DOUBLE_0061e0d6 = 0.5
;   double DOUBLE_0061e0de = 0.5
;   double DOUBLE_0061e0e6 = 0.5
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;   ... and 9 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ed50
        ;   Label: shape_design.c_bisectMesh_FUN_0046ed50
    PUSH ESI                            ; 0046ed51
    PUSH EDI                            ; 0046ed52
    PUSH EBP                            ; 0046ed53
    MOV EBP,ESP                         ; 0046ed54
    SUB ESP,0x64                        ; 0046ed56
    MOV EAX,[0x016e990c]                ; 0046ed5c | g_PolygonCount
    MOV dword ptr [EBP + -0x4],EAX      ; 0046ed61
    MOV dword ptr [EBP + -0x8],0x0      ; 0046ed64
    JMP 0x0046ed73                      ; 0046ed6b
        ;   XREF to: 0046ed73 (UNCONDITIONAL_JUMP)  ; LAB_0046ed73
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046ed6d
        ;   Label: LAB_0046ed6d
    INC dword ptr [EBP + -0x8]          ; 0046ed70
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046ed73
        ;   Label: LAB_0046ed73
    CMP EAX,dword ptr [EBP + -0x4]      ; 0046ed76
    JGE 0x0046f285                      ; 0046ed79
        ;   XREF to: 0046f285 (CONDITIONAL_JUMP)  ; LAB_0046f285
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 0046ed7f
    MOV EDX,0x16e9910                   ; 0046ed86 | g_ModelPolygonData
    ADD EDX,EAX                         ; 0046ed8b
    MOV dword ptr [EBP + -0x4c],EDX     ; 0046ed8d
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046ed90
    CMP dword ptr [EAX + 0xa4],0x3      ; 0046ed93 | DAT_016e99b4
    JZ 0x0046edbe                       ; 0046ed9a
        ;   XREF to: 0046edbe (CONDITIONAL_JUMP)  ; LAB_0046edbe
    MOV dword ptr [0x02f0ca48],0x61e0b2 ; 0046ed9c | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2dac   ; 0046eda6 | g_CurrentLineNumber
    MOV EAX,0x61e0c4                    ; 0046edb0 | = "Not 3 faces"
    PUSH EAX                            ; 0046edb5 | = "Not 3 faces"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046edb6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046edbb
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0046edbe | g_PolygonCount
        ;   Label: LAB_0046edbe
    MOV EDX,0x16e9910                   ; 0046edc8 | g_ModelPolygonData
    ADD EDX,EAX                         ; 0046edcd
    MOV dword ptr [EBP + -0x48],EDX     ; 0046edcf
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046edd2
    MOV EAX,dword ptr [EAX + 0xb8]      ; 0046edd5 | DAT_016e99c8
    MOV dword ptr [EBP + -0x44],EAX     ; 0046eddb
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046edde
    MOV EAX,dword ptr [EAX + 0xbc]      ; 0046ede1 | DAT_016e99cc
    MOV dword ptr [EBP + -0x40],EAX     ; 0046ede7
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046edea
    MOV EAX,dword ptr [EAX + 0xc0]      ; 0046eded | DAT_016e99d0
    MOV dword ptr [EBP + -0x3c],EAX     ; 0046edf3
    IMUL EDX,dword ptr [EBP + -0x40],0x14 ; 0046edf6
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 0046edfa
    FLD float ptr [EDX + 0x162640c]     ; 0046edfe | g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 0046ee04 | g_LoadedVertices
    FSTP float ptr [EBP + -0x38]        ; 0046ee0a
    IMUL EDX,dword ptr [EBP + -0x40],0x14 ; 0046ee0d
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 0046ee11
    FLD float ptr [EDX + 0x1626410]     ; 0046ee15 | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 0046ee1b | DAT_01626410
    FSTP float ptr [EBP + -0x34]        ; 0046ee21
    IMUL EDX,dword ptr [EBP + -0x40],0x14 ; 0046ee24
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 0046ee28
    FLD float ptr [EDX + 0x1626414]     ; 0046ee2c | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 0046ee32 | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0x30]        ; 0046ee38
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046ee3b
    IMUL EDX,dword ptr [EBP + -0x40],0x14 ; 0046ee3f
    FLD float ptr [EAX + 0x162640c]     ; 0046ee43 | g_LoadedVertices
    FSUB float ptr [EDX + 0x162640c]    ; 0046ee49 | g_LoadedVertices
    FSTP float ptr [EBP + -0x2c]        ; 0046ee4f
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046ee52
    IMUL EDX,dword ptr [EBP + -0x40],0x14 ; 0046ee56
    FLD float ptr [EAX + 0x1626410]     ; 0046ee5a | DAT_01626410
    FSUB float ptr [EDX + 0x1626410]    ; 0046ee60 | DAT_01626410
    FSTP float ptr [EBP + -0x28]        ; 0046ee66
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 0046ee69
    IMUL EAX,dword ptr [EBP + -0x40],0x14 ; 0046ee6d
    FLD float ptr [EDX + 0x1626414]     ; 0046ee71 | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 0046ee77 | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0x24]        ; 0046ee7d
    IMUL EDX,dword ptr [EBP + -0x44],0x14 ; 0046ee80
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046ee84
    FLD float ptr [EDX + 0x162640c]     ; 0046ee88 | g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 0046ee8e | g_LoadedVertices
    FSTP float ptr [EBP + -0x20]        ; 0046ee94
    IMUL EDX,dword ptr [EBP + -0x44],0x14 ; 0046ee97
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046ee9b
    FLD float ptr [EDX + 0x1626410]     ; 0046ee9f | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 0046eea5 | DAT_01626410
    FSTP float ptr [EBP + -0x1c]        ; 0046eeab
    IMUL EDX,dword ptr [EBP + -0x44],0x14 ; 0046eeae
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046eeb2
    FLD float ptr [EDX + 0x1626414]     ; 0046eeb6 | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 0046eebc | g_LoadedVertices[0].vertex.z
    FSTP float ptr [EBP + -0x18]        ; 0046eec2
    FLD float ptr [EBP + -0x38]         ; 0046eec5
    FMUL float ptr [EBP + -0x38]        ; 0046eec8
    FLD float ptr [EBP + -0x34]         ; 0046eecb
    FMUL float ptr [EBP + -0x34]        ; 0046eece
    FADDP                               ; 0046eed1
    FLD float ptr [EBP + -0x30]         ; 0046eed3
    FMUL float ptr [EBP + -0x30]        ; 0046eed6
    FADDP                               ; 0046eed9
    FSQRT                               ; 0046eedb
    FSTP float ptr [EBP + -0x14]        ; 0046eedd
    FLD float ptr [EBP + -0x2c]         ; 0046eee0
    FMUL float ptr [EBP + -0x2c]        ; 0046eee3
    FLD float ptr [EBP + -0x28]         ; 0046eee6
    FMUL float ptr [EBP + -0x28]        ; 0046eee9
    FADDP                               ; 0046eeec
    FLD float ptr [EBP + -0x24]         ; 0046eeee
    FMUL float ptr [EBP + -0x24]        ; 0046eef1
    FADDP                               ; 0046eef4
    FSQRT                               ; 0046eef6
    FSTP float ptr [EBP + -0x10]        ; 0046eef8
    FLD float ptr [EBP + -0x20]         ; 0046eefb
    FMUL float ptr [EBP + -0x20]        ; 0046eefe
    FLD float ptr [EBP + -0x1c]         ; 0046ef01
    FMUL float ptr [EBP + -0x1c]        ; 0046ef04
    FADDP                               ; 0046ef07
    FLD float ptr [EBP + -0x18]         ; 0046ef09
    FMUL float ptr [EBP + -0x18]        ; 0046ef0c
    FADDP                               ; 0046ef0f
    FSQRT                               ; 0046ef11
    FSTP float ptr [EBP + -0xc]         ; 0046ef13
    FLD float ptr [EBP + -0x14]         ; 0046ef16
    FCOMP float ptr [EBP + -0x10]       ; 0046ef19
    FNSTSW AX                           ; 0046ef1c
    SAHF                                ; 0046ef1e
    JBE 0x0046ef2c                      ; 0046ef1f
        ;   XREF to: 0046ef2c (CONDITIONAL_JUMP)  ; LAB_0046ef2c
    FLD float ptr [EBP + -0x14]         ; 0046ef21
    FCOMP float ptr [EBP + -0xc]        ; 0046ef24
    FNSTSW AX                           ; 0046ef27
    SAHF                                ; 0046ef29
    JA 0x0046ef31                       ; 0046ef2a
        ;   XREF to: 0046ef31 (CONDITIONAL_JUMP)  ; LAB_0046ef31
    JMP 0x0046f048                      ; 0046ef2c
        ;   XREF to: 0046f048 (UNCONDITIONAL_JUMP)  ; LAB_0046f048
        ;   Label: LAB_0046ef2c
    IMUL EDX,dword ptr [EBP + -0x44],0x14 ; 0046ef31
        ;   Label: LAB_0046ef31
    IMUL EAX,dword ptr [EBP + -0x40],0x14 ; 0046ef35
    FLD float ptr [EDX + 0x162640c]     ; 0046ef39 | g_LoadedVertices
    FADD float ptr [EAX + 0x162640c]    ; 0046ef3f | g_LoadedVertices
    FMUL double ptr [0x0061e0d6]        ; 0046ef45 | DOUBLE_0061e0d6
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046ef4b | g_VertexCount
    FSTP float ptr [EAX + 0x162640c]    ; 0046ef52 | g_LoadedVertices
    IMUL EDX,dword ptr [EBP + -0x44],0x14 ; 0046ef58
    IMUL EAX,dword ptr [EBP + -0x40],0x14 ; 0046ef5c
    FLD float ptr [EDX + 0x1626410]     ; 0046ef60 | DAT_01626410
    FADD float ptr [EAX + 0x1626410]    ; 0046ef66 | DAT_01626410
    FMUL double ptr [0x0061e0d6]        ; 0046ef6c | DOUBLE_0061e0d6
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046ef72 | g_VertexCount
    FSTP float ptr [EAX + 0x1626410]    ; 0046ef79 | DAT_01626410
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 0046ef7f
    IMUL EDX,dword ptr [EBP + -0x40],0x14 ; 0046ef83
    FLD float ptr [EAX + 0x1626414]     ; 0046ef87 | g_LoadedVertices[0].vertex.z
    FADD float ptr [EDX + 0x1626414]    ; 0046ef8d | g_LoadedVertices[0].vertex.z
    FMUL double ptr [0x0061e0d6]        ; 0046ef93 | DOUBLE_0061e0d6
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046ef99 | g_VertexCount
    FSTP float ptr [EAX + 0x1626414]    ; 0046efa0 | g_LoadedVertices[0].vertex.z
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046efa6
    FLD float ptr [EAX + 0xf8]          ; 0046efa9 | DAT_016e9a08
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046efaf
    FADD float ptr [EAX + 0xfc]         ; 0046efb2 | DAT_016e9a0c
    FMUL double ptr [0x0061e0d6]        ; 0046efb8 | DOUBLE_0061e0d6
    FSTP float ptr [EBP + -0x54]        ; 0046efbe
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046efc1
    FLD float ptr [EAX + 0x138]         ; 0046efc4 | DAT_016e9a48
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046efca
    FADD float ptr [EAX + 0x13c]        ; 0046efcd | DAT_016e9a4c
    FMUL double ptr [0x0061e0d6]        ; 0046efd3 | DOUBLE_0061e0d6
    FSTP float ptr [EBP + -0x50]        ; 0046efd9
    MOV ECX,0x61                        ; 0046efdc
    MOV EDI,dword ptr [EBP + -0x48]     ; 0046efe1
    MOV ESI,dword ptr [EBP + -0x4c]     ; 0046efe4
    MOVSD.REP ES:EDI,ESI                ; 0046efe7 | g_ModelPolygonData | DAT_016e9914
    MOV EDX,dword ptr [0x01626408]      ; 0046efe9 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046efef
    MOV dword ptr [EAX + 0xbc],EDX      ; 0046eff2 | DAT_016e99cc
    MOV EAX,dword ptr [EBP + -0x54]     ; 0046eff8
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046effb
    MOV dword ptr [EDX + 0xfc],EAX      ; 0046effe | DAT_016e9a0c
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046f004
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046f007
    MOV dword ptr [EDX + 0x13c],EAX     ; 0046f00a | DAT_016e9a4c
    MOV EDX,dword ptr [0x01626408]      ; 0046f010 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046f016
    MOV dword ptr [EAX + 0xb8],EDX      ; 0046f019 | DAT_016e99c8
    MOV EAX,dword ptr [EBP + -0x54]     ; 0046f01f
    MOV EDX,dword ptr [EBP + -0x48]     ; 0046f022
    MOV dword ptr [EDX + 0xf8],EAX      ; 0046f025 | DAT_016e9a08
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046f02b
    MOV EDX,dword ptr [EBP + -0x48]     ; 0046f02e
    MOV dword ptr [EDX + 0x138],EAX     ; 0046f031 | DAT_016e9a48
    INC dword ptr [0x01626408]          ; 0046f037 | g_VertexCount
    INC dword ptr [0x016e990c]          ; 0046f03d | g_PolygonCount
    JMP 0x0046f280                      ; 0046f043
        ;   XREF to: 0046f280 (UNCONDITIONAL_JUMP)  ; LAB_0046f280
    FLD float ptr [EBP + -0x10]         ; 0046f048
        ;   Label: LAB_0046f048
    FCOMP float ptr [EBP + -0xc]        ; 0046f04b
    FNSTSW AX                           ; 0046f04e
    SAHF                                ; 0046f050
    JBE 0x0046f16e                      ; 0046f051
        ;   XREF to: 0046f16e (CONDITIONAL_JUMP)  ; LAB_0046f16e
    IMUL EDX,dword ptr [EBP + -0x40],0x14 ; 0046f057
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046f05b
    FLD float ptr [EDX + 0x162640c]     ; 0046f05f | g_LoadedVertices
    FADD float ptr [EAX + 0x162640c]    ; 0046f065 | g_LoadedVertices
    FMUL double ptr [0x0061e0de]        ; 0046f06b | DOUBLE_0061e0de
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046f071 | g_VertexCount
    FSTP float ptr [EAX + 0x162640c]    ; 0046f078 | g_LoadedVertices
    IMUL EDX,dword ptr [EBP + -0x40],0x14 ; 0046f07e
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046f082
    FLD float ptr [EDX + 0x1626410]     ; 0046f086 | DAT_01626410
    FADD float ptr [EAX + 0x1626410]    ; 0046f08c | DAT_01626410
    FMUL double ptr [0x0061e0de]        ; 0046f092 | DOUBLE_0061e0de
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046f098 | g_VertexCount
    FSTP float ptr [EAX + 0x1626410]    ; 0046f09f | DAT_01626410
    IMUL EAX,dword ptr [EBP + -0x40],0x14 ; 0046f0a5
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 0046f0a9
    FLD float ptr [EAX + 0x1626414]     ; 0046f0ad | g_LoadedVertices[0].vertex.z
    FADD float ptr [EDX + 0x1626414]    ; 0046f0b3 | g_LoadedVertices[0].vertex.z
    FMUL double ptr [0x0061e0de]        ; 0046f0b9 | DOUBLE_0061e0de
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046f0bf | g_VertexCount
    FSTP float ptr [EAX + 0x1626414]    ; 0046f0c6 | g_LoadedVertices[0].vertex.z
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f0cc
    FLD float ptr [EAX + 0xfc]          ; 0046f0cf | DAT_016e9a0c
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f0d5
    FADD float ptr [EAX + 0x100]        ; 0046f0d8 | DAT_016e9a10
    FMUL double ptr [0x0061e0de]        ; 0046f0de | DOUBLE_0061e0de
    FSTP float ptr [EBP + -0x5c]        ; 0046f0e4
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f0e7
    FLD float ptr [EAX + 0x13c]         ; 0046f0ea | DAT_016e9a4c
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f0f0
    FADD float ptr [EAX + 0x140]        ; 0046f0f3 | DAT_016e9a50
    FMUL double ptr [0x0061e0de]        ; 0046f0f9 | DOUBLE_0061e0de
    FSTP float ptr [EBP + -0x58]        ; 0046f0ff
    MOV ECX,0x61                        ; 0046f102
    MOV EDI,dword ptr [EBP + -0x48]     ; 0046f107
    MOV ESI,dword ptr [EBP + -0x4c]     ; 0046f10a
    MOVSD.REP ES:EDI,ESI                ; 0046f10d | g_ModelPolygonData | DAT_016e9914
    MOV EDX,dword ptr [0x01626408]      ; 0046f10f | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f115
    MOV dword ptr [EAX + 0xc0],EDX      ; 0046f118 | DAT_016e99d0
    MOV EAX,dword ptr [EBP + -0x5c]     ; 0046f11e
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046f121
    MOV dword ptr [EDX + 0x100],EAX     ; 0046f124 | DAT_016e9a10
    MOV EAX,dword ptr [EBP + -0x58]     ; 0046f12a
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046f12d
    MOV dword ptr [EDX + 0x140],EAX     ; 0046f130 | DAT_016e9a50
    MOV EDX,dword ptr [0x01626408]      ; 0046f136 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046f13c
    MOV dword ptr [EAX + 0xbc],EDX      ; 0046f13f | DAT_016e99cc
    MOV EAX,dword ptr [EBP + -0x5c]     ; 0046f145
    MOV EDX,dword ptr [EBP + -0x48]     ; 0046f148
    MOV dword ptr [EDX + 0xfc],EAX      ; 0046f14b | DAT_016e9a0c
    MOV EAX,dword ptr [EBP + -0x58]     ; 0046f151
    MOV EDX,dword ptr [EBP + -0x48]     ; 0046f154
    MOV dword ptr [EDX + 0x13c],EAX     ; 0046f157 | DAT_016e9a4c
    INC dword ptr [0x01626408]          ; 0046f15d | g_VertexCount
    INC dword ptr [0x016e990c]          ; 0046f163 | g_PolygonCount
    JMP 0x0046f280                      ; 0046f169
        ;   XREF to: 0046f280 (UNCONDITIONAL_JUMP)  ; LAB_0046f280
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 0046f16e
        ;   Label: LAB_0046f16e
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 0046f172
    FLD float ptr [EDX + 0x162640c]     ; 0046f176 | g_LoadedVertices
    FADD float ptr [EAX + 0x162640c]    ; 0046f17c | g_LoadedVertices
    FMUL double ptr [0x0061e0e6]        ; 0046f182 | DOUBLE_0061e0e6
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046f188 | g_VertexCount
    FSTP float ptr [EAX + 0x162640c]    ; 0046f18f | g_LoadedVertices
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 0046f195
    IMUL EAX,dword ptr [EBP + -0x44],0x14 ; 0046f199
    FLD float ptr [EDX + 0x1626410]     ; 0046f19d | DAT_01626410
    FADD float ptr [EAX + 0x1626410]    ; 0046f1a3 | DAT_01626410
    FMUL double ptr [0x0061e0e6]        ; 0046f1a9 | DOUBLE_0061e0e6
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046f1af | g_VertexCount
    FSTP float ptr [EAX + 0x1626410]    ; 0046f1b6 | DAT_01626410
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046f1bc
    IMUL EDX,dword ptr [EBP + -0x44],0x14 ; 0046f1c0
    FLD float ptr [EAX + 0x1626414]     ; 0046f1c4 | g_LoadedVertices[0].vertex.z
    FADD float ptr [EDX + 0x1626414]    ; 0046f1ca | g_LoadedVertices[0].vertex.z
    FMUL double ptr [0x0061e0e6]        ; 0046f1d0 | DOUBLE_0061e0e6
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046f1d6 | g_VertexCount
    FSTP float ptr [EAX + 0x1626414]    ; 0046f1dd | g_LoadedVertices[0].vertex.z
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f1e3
    FLD float ptr [EAX + 0x100]         ; 0046f1e6 | DAT_016e9a10
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f1ec
    FADD float ptr [EAX + 0xf8]         ; 0046f1ef | DAT_016e9a08
    FMUL double ptr [0x0061e0e6]        ; 0046f1f5 | DOUBLE_0061e0e6
    FSTP float ptr [EBP + -0x64]        ; 0046f1fb
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f1fe
    FLD float ptr [EAX + 0x140]         ; 0046f201 | DAT_016e9a50
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f207
    FADD float ptr [EAX + 0x138]        ; 0046f20a | DAT_016e9a48
    FMUL double ptr [0x0061e0e6]        ; 0046f210 | DOUBLE_0061e0e6
    FSTP float ptr [EBP + -0x60]        ; 0046f216
    MOV ECX,0x61                        ; 0046f219
    MOV EDI,dword ptr [EBP + -0x48]     ; 0046f21e
    MOV ESI,dword ptr [EBP + -0x4c]     ; 0046f221
    MOVSD.REP ES:EDI,ESI                ; 0046f224 | g_ModelPolygonData | DAT_016e9914
    MOV EDX,dword ptr [0x01626408]      ; 0046f226 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046f22c
    MOV dword ptr [EAX + 0xb8],EDX      ; 0046f22f | DAT_016e99c8
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046f235
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046f238
    MOV dword ptr [EDX + 0xf8],EAX      ; 0046f23b | DAT_016e9a08
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046f241
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046f244
    MOV dword ptr [EDX + 0x138],EAX     ; 0046f247 | DAT_016e9a48
    MOV EDX,dword ptr [0x01626408]      ; 0046f24d | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046f253
    MOV dword ptr [EAX + 0xc0],EDX      ; 0046f256 | DAT_016e99d0
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046f25c
    MOV EDX,dword ptr [EBP + -0x48]     ; 0046f25f
    MOV dword ptr [EDX + 0x100],EAX     ; 0046f262 | DAT_016e9a10
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046f268
    MOV EDX,dword ptr [EBP + -0x48]     ; 0046f26b
    MOV dword ptr [EDX + 0x140],EAX     ; 0046f26e | DAT_016e9a50
    INC dword ptr [0x01626408]          ; 0046f274 | g_VertexCount
    INC dword ptr [0x016e990c]          ; 0046f27a | g_PolygonCount
    JMP 0x0046ed6d                      ; 0046f280
        ;   XREF to: 0046ed6d (UNCONDITIONAL_JUMP)  ; LAB_0046ed6d
        ;   Label: LAB_0046f280
    MOV ESP,EBP                         ; 0046f285
        ;   Label: LAB_0046f285
    POP EBP                             ; 0046f287
    POP EDI                             ; 0046f288
    POP ESI                             ; 0046f289
    POP EBX                             ; 0046f28a
    RET                                 ; 0046f28b

