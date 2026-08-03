; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_0044aff0(CDemonCube *this_ptr,uint rendering_mode)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   rendering_mode
; Local Variables:
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
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 at 0046996b
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70 at 0046afbe
;
; Referenced Globals:
;   undefined1* PTR_LAB_0044afd0 = 0044b114
;   TerminatedCString s_core_dcube_cpp_0057bd80
;   TerminatedCString s_CDemonCube_rotateVertici_0057bd92
;   float FLOAT_0057bdeb = 127
;   undefined4 DAT_0059be10
;   undefined4 DAT_005ae704
;   undefined4 DAT_014b847c
;   undefined4 DAT_014b8480
;   undefined4 DAT_014b8484
;   undefined4 DAT_014b8488
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b4d750
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60
;   core_main.c_FUN_004c8440
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044aff0
        ;   Label: core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0
    PUSH ESI                            ; 0044aff1
    PUSH EDI                            ; 0044aff2
    PUSH EBP                            ; 0044aff3
    MOV EBP,ESP                         ; 0044aff4
    SUB ESP,0x38                        ; 0044aff6
    PUSH 0x2dd1184                      ; 0044aff9 | DAT_02dd1184
    MOV EDX,dword ptr [0x005ae704]      ; 0044affe | DAT_005ae704
    PUSH EDX                            ; 0044b004 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0044b005
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b00a
    MOV ECX,dword ptr [EAX + 0x20]      ; 0044b00d
    ADD ESP,0x8                         ; 0044b010
    CMP ECX,0x4e20                      ; 0044b013
    JG 0x0044b1fe                       ; 0044b019
        ;   XREF to: 0044b1fe (CONDITIONAL_JUMP)  ; LAB_0044b1fe
    PUSH 0x1                            ; 0044b01f
        ;   Label: LAB_0044b01f
    MOV EAX,[0x005ae704]                ; 0044b021 | DAT_005ae704
    PUSH EAX                            ; 0044b026 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0044b027
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0044b02c
    PUSH 0x1                            ; 0044b02f
    MOV EDX,dword ptr [0x005ae704]      ; 0044b031 | DAT_005ae704
    PUSH EDX                            ; 0044b037 | DAT_01b4d738
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044b038
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0044b03b
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b040
    MOV EDI,dword ptr [0x005ae704]      ; 0044b043 | DAT_005ae704
    ADD ESP,0x8                         ; 0044b049
    XOR ECX,ECX                         ; 0044b04c
    MOV ESI,dword ptr [ESI + 0x24]      ; 0044b04e
    MOV dword ptr [EBP + -0x10],ECX     ; 0044b051
    MOV dword ptr [EBP + -0xc],ECX      ; 0044b054
    MOV EDX,dword ptr [EAX + 0x20]      ; 0044b057
    MOV EDI,dword ptr [EDI]             ; 0044b05a | DAT_01b4d738
    TEST EDX,EDX                        ; 0044b05c
    JLE 0x0044b0b6                      ; 0044b05e
        ;   XREF to: 0044b0b6 (CONDITIONAL_JUMP)  ; LAB_0044b0b6
    LEA EBX,[EBP + -0x38]               ; 0044b060
        ;   Label: LAB_0044b060
    MOV EAX,ESI                         ; 0044b063
    FLD float ptr [EAX]                 ; 0044b065
    FMUL float ptr [0x0059be10]         ; 0044b067 | DAT_0059be10
    FISTP dword ptr [EBX]               ; 0044b06d
    FLD float ptr [EAX + 0x4]           ; 0044b06f
    FMUL float ptr [0x0059be10]         ; 0044b072 | DAT_0059be10
    FISTP dword ptr [EBX + 0x4]         ; 0044b078
    FLD float ptr [EAX + 0x8]           ; 0044b07b
    FMUL float ptr [0x0059be10]         ; 0044b07e | DAT_0059be10
    FISTP dword ptr [EBX + 0x8]         ; 0044b084
    LEA EAX,[EBP + -0x38]               ; 0044b087
    PUSH EAX                            ; 0044b08a
    PUSH EDI                            ; 0044b08b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044b08c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV DH,byte ptr [EDI + 0x13]        ; 0044b091
    ADD ESP,0x8                         ; 0044b094
    TEST DH,0x80                        ; 0044b097
    JNZ 0x0044b09f                      ; 0044b09a
        ;   XREF to: 0044b09f (CONDITIONAL_JUMP)  ; LAB_0044b09f
    INC dword ptr [EBP + -0x10]         ; 0044b09c
    MOV ECX,dword ptr [EBP + -0xc]      ; 0044b09f
        ;   Label: LAB_0044b09f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b0a2
    ADD EDI,0x30                        ; 0044b0a5
    ADD ESI,0xc                         ; 0044b0a8
    INC ECX                             ; 0044b0ab
    MOV EBX,dword ptr [EDX + 0x20]      ; 0044b0ac
    MOV dword ptr [EBP + -0xc],ECX      ; 0044b0af
    CMP ECX,EBX                         ; 0044b0b2
    JL 0x0044b060                       ; 0044b0b4
        ;   XREF to: 0044b060 (CONDITIONAL_JUMP)  ; LAB_0044b060
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b0b6
        ;   Label: LAB_0044b0b6
    MOV EAX,dword ptr [EBP + -0x10]     ; 0044b0b9
    CMP EAX,dword ptr [EDX + 0x20]      ; 0044b0bc
    JNZ 0x0044b0d7                      ; 0044b0bf
        ;   XREF to: 0044b0d7 (CONDITIONAL_JUMP)  ; LAB_0044b0d7
    MOV EAX,[0x005ae704]                ; 0044b0c1 | DAT_005ae704
    MOV EDX,dword ptr [EAX + 0x18]      ; 0044b0c6 | DAT_01b4d750
    TEST EDX,EDX                        ; 0044b0c9
    JNZ 0x0044b0d7                      ; 0044b0cb
        ;   XREF to: 0044b0d7 (CONDITIONAL_JUMP)  ; LAB_0044b0d7
    PUSH EDX                            ; 0044b0cd
    PUSH EAX                            ; 0044b0ce | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0044b0cf
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0044b0d4
    MOV AH,byte ptr [0x014b8488]        ; 0044b0d7 | DAT_014b8488
        ;   Label: LAB_0044b0d7
    TEST AH,0x1                         ; 0044b0dd
    JZ 0x0044b22c                       ; 0044b0e0
        ;   XREF to: 0044b22c (CONDITIONAL_JUMP)  ; LAB_0044b22c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b0e6
        ;   Label: LAB_0044b0e6
    XOR ECX,ECX                         ; 0044b0e9
    MOV EBX,dword ptr [EAX + 0x28]      ; 0044b0eb
    MOV dword ptr [EBP + -0x4],ECX      ; 0044b0ee
    TEST EBX,EBX                        ; 0044b0f1
    JLE 0x0044b1d6                      ; 0044b0f3
        ;   XREF to: 0044b1d6 (CONDITIONAL_JUMP)  ; LAB_0044b1d6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044b0f9
    SHL EAX,0x2                         ; 0044b0fc
    MOV dword ptr [EBP + -0x8],ECX      ; 0044b0ff
    MOV dword ptr [EBP + -0x14],EAX     ; 0044b102
    CMP dword ptr [EBP + 0x18],0x4      ; 0044b105
        ;   Label: LAB_0044b105
    JA 0x0044b114                       ; 0044b109
        ;   XREF to: 0044b114 (CONDITIONAL_JUMP)  ; LAB_0044b114
    MOV EAX,dword ptr [EBP + -0x14]     ; 0044b10b
    JMP dword ptr [EAX + 0x44afd0]      ; 0044b10e | PTR_LAB_0044afd0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b114
        ;   Label: LAB_0044b114
    MOV ESI,dword ptr [EBP + -0x8]      ; 0044b117
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0044b11a
    ADD EAX,ESI                         ; 0044b11d
    LEA EDX,[EAX + 0xc]                 ; 0044b11f
    LEA EAX,[EBP + -0x2c]               ; 0044b122
    CMP EAX,EDX                         ; 0044b125
    JZ 0x0044b13a                       ; 0044b127
        ;   XREF to: 0044b13a (CONDITIONAL_JUMP)  ; LAB_0044b13a
    MOV EAX,dword ptr [EDX]             ; 0044b129
    MOV dword ptr [EBP + -0x2c],EAX     ; 0044b12b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044b12e
    MOV dword ptr [EBP + -0x28],EAX     ; 0044b131
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044b134
    MOV dword ptr [EBP + -0x24],EAX     ; 0044b137
    FLD float ptr [0x0057bdeb]          ; 0044b13a | FLOAT_0057bdeb
        ;   Label: LAB_0044b13a
    FLD float ptr [EBP + -0x2c]         ; 0044b140
    FMUL ST1                            ; 0044b143
    FSTP float ptr [EBP + -0x2c]        ; 0044b145
    FLD float ptr [EBP + -0x28]         ; 0044b148
    FMUL ST1                            ; 0044b14b
    FSTP float ptr [EBP + -0x28]        ; 0044b14d
    FMUL float ptr [EBP + -0x24]        ; 0044b150
    FSTP float ptr [EBP + -0x24]        ; 0044b153
    LEA EAX,[EBP + 0xffffffd4]          ; 0044b156
    FLD float ptr [EAX]                 ; 0044b15c
    FLD float ptr [EAX + 0x4]           ; 0044b15e
    FLD float ptr [EAX + 0x8]           ; 0044b161
    FISTP dword ptr [EBP + 0xffffffe8]  ; 0044b164
    FISTP dword ptr [EBP + 0xffffffe4]  ; 0044b16a
    FISTP dword ptr [EBP + 0xffffffe0]  ; 0044b170
    MOV EAX,dword ptr [EBP + -0x18]     ; 0044b176
    AND EAX,0xff                        ; 0044b179
    PUSH EAX                            ; 0044b17e
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0044b17f
    AND EAX,0xff                        ; 0044b182
    PUSH EAX                            ; 0044b187
    MOV EAX,dword ptr [EBP + -0x20]     ; 0044b188
    AND EAX,0xff                        ; 0044b18b
    PUSH EAX                            ; 0044b190
    MOV EDI,dword ptr [0x005ae704]      ; 0044b191 | DAT_005ae704
    PUSH EDI                            ; 0044b197 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20 ; 0044b198
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    ADD ESP,0x10                        ; 0044b19d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b1a0
        ;   Label: LAB_0044b1a0
    MOV ECX,dword ptr [EBP + -0x8]      ; 0044b1a3
    MOV EBX,dword ptr [EBP + -0x8]      ; 0044b1a6
    MOV EDX,dword ptr [EAX + 0x24]      ; 0044b1a9
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0044b1ac
    PUSH EDX                            ; 0044b1af
    ADD EAX,ECX                         ; 0044b1b0
    MOV ESI,dword ptr [EBP + -0x4]      ; 0044b1b2
    PUSH EAX                            ; 0044b1b5
    ADD EBX,0x20                        ; 0044b1b6
    INC ESI                             ; 0044b1b9
    CALL core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60 ; 0044b1ba
        ;   XREF to: 0044ab60 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60(CVector3f * * triangle_vertex_pointers, CVector3f * vertex_buffer)
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b1bf
    MOV dword ptr [EBP + -0x8],EBX      ; 0044b1c2
    MOV dword ptr [EBP + -0x4],ESI      ; 0044b1c5
    MOV EDI,dword ptr [EDX + 0x28]      ; 0044b1c8
    ADD ESP,0x8                         ; 0044b1cb
    CMP ESI,EDI                         ; 0044b1ce
    JL 0x0044b105                       ; 0044b1d0
        ;   XREF to: 0044b105 (CONDITIONAL_JUMP)  ; LAB_0044b105
    PUSH 0x1                            ; 0044b1d6
        ;   Label: LAB_0044b1d6
    MOV EAX,[0x005ae704]                ; 0044b1d8 | DAT_005ae704
    PUSH EAX                            ; 0044b1dd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0044b1de
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0044b1e3
    PUSH 0x0                            ; 0044b1e6
    MOV EDX,dword ptr [0x005ae704]      ; 0044b1e8 | DAT_005ae704
    PUSH EDX                            ; 0044b1ee | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0044b1ef
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0044b1f4
    MOV ESP,EBP                         ; 0044b1f7
    POP EBP                             ; 0044b1f9
    POP EDI                             ; 0044b1fa
    POP ESI                             ; 0044b1fb
    POP EBX                             ; 0044b1fc
    RET                                 ; 0044b1fd
    PUSH 0x4e20                         ; 0044b1fe
        ;   Label: LAB_0044b1fe
    PUSH ECX                            ; 0044b203
    MOV EBX,0x57bd80                    ; 0044b204 | = "..\\core\\dcube.cpp"
    MOV ESI,0x7bb                       ; 0044b209
    PUSH 0x57bd92                       ; 0044b20e | = "CDemonCube::rotateVerticies - tried t..."
    MOV dword ptr [0x01cc4800],EBX      ; 0044b213 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044b219 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0044b21f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 0044b224
    JMP 0x0044b01f                      ; 0044b227
        ;   XREF to: 0044b01f (UNCONDITIONAL_JUMP)  ; LAB_0044b01f
    MOV EDI,0x3f13cd3a                  ; 0044b22c
        ;   Label: LAB_0044b22c
    MOV DL,AH                           ; 0044b231
    MOV EAX,0xbf13cd3a                  ; 0044b233
    OR DL,0x1                           ; 0044b238
    MOV dword ptr [0x014b847c],EDI      ; 0044b23b | DAT_014b847c
    MOV dword ptr [0x014b8484],EDI      ; 0044b241 | DAT_014b8484
    MOV [0x014b8480],EAX                ; 0044b247 | DAT_014b8480
    MOV byte ptr [0x014b8488],DL        ; 0044b24c | DAT_014b8488
    JMP 0x0044b0e6                      ; 0044b252
        ;   XREF to: 0044b0e6 (UNCONDITIONAL_JUMP)  ; LAB_0044b0e6

