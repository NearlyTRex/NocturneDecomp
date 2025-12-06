; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_marquee.cpp_FUN_0050c050()
;
; Local Variables:
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic DAT_0067d150
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_course.cpp_CCourse_FUN_00442710
;   core_marquee.cpp_FUN_0050bec0
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c050
        ;   Label: core_marquee.cpp_FUN_0050c050
    PUSH EBP                            ; 0050c051
    SUB ESP,0x8c                        ; 0050c052
    MOV EBX,dword ptr [ESP + 0x98]      ; 0050c058
    CMP dword ptr [EBX + 0x19c],0x0     ; 0050c05f
    JNZ 0x0050c073                      ; 0050c066 | LAB_0050c073
        ;   XREF to: 0050c073 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0050c068
    ADD ESP,0x8c                        ; 0050c06a
    POP EBP                             ; 0050c070
    POP EBX                             ; 0050c071
    RET                                 ; 0050c072
    PUSH EDI                            ; 0050c073
        ;   Label: LAB_0050c073
    PUSH ESI                            ; 0050c074
    PUSH 0x1                            ; 0050c075
    MOV ECX,dword ptr [0x006703ec]      ; 0050c077 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 0050c07d | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0050c07e | void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050c083
    PUSH 0xffff                         ; 0050c086
    MOV ESI,dword ptr [0x006703ec]      ; 0050c08b | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 0050c091 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0050c092 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050c097
    PUSH 0x67d150                       ; 0050c09a | SMRGLTextureBasic DAT_0067d150
    MOV EDI,dword ptr [0x006703ec]      ; 0050c09f | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 0050c0a5 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0050c0a6 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0067d550]      ; 0050c0ab | CDemonMission * g_CDemonMissionPtr
    ADD ESP,0x8                         ; 0050c0b1
    MOV EBP,dword ptr [EDX + 0x4]       ; 0050c0b4 | DAT_02f33744
    LEA EAX,[EBX + 0x1a4]               ; 0050c0b7
    TEST EBP,EBP                        ; 0050c0bd
    JZ 0x0050c16f                       ; 0050c0bf | LAB_0050c16f
        ;   XREF to: 0050c16f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0050c0c5
    XOR EDI,EDI                         ; 0050c0c7
    MOV EBP,EDX                         ; 0050c0c9
    TEST EDX,EDX                        ; 0050c0cb
    JLE 0x0050c14e                      ; 0050c0cd | LAB_0050c14e
        ;   XREF to: 0050c14e (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x84],EAX      ; 0050c0d3
    LEA EAX,[ESP + 0x8]                 ; 0050c0da
        ;   Label: LAB_0050c0da
    MOV dword ptr [ESP + 0x90],EDI      ; 0050c0de
    PUSH EAX                            ; 0050c0e5
    LEA EAX,[ESP + 0x54]                ; 0050c0e6
    FILD dword ptr [ESP + 0x94]         ; 0050c0ea
    PUSH EAX                            ; 0050c0f1
    FSTP float ptr [ESP + 0x7c]         ; 0050c0f2
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050c0f6
    PUSH dword ptr [ESP + 0x7c]         ; 0050c0fd
    PUSH EAX                            ; 0050c101
    CALL core_course.cpp_CCourse_FUN_00442710 ; 0050c102 | void core_course.cpp_CCourse_FUN_00442710(CCourse * this_ptr)
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0050c107
    LEA EAX,[ESP + 0x50]                ; 0050c10a
    PUSH EAX                            ; 0050c10e
    LEA EAX,[ESP + 0x6c]                ; 0050c10f
    PUSH EAX                            ; 0050c113
    PUSH EBX                            ; 0050c114
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0050c115 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 0050c11a
    LEA EAX,[ESP + 0x5c]                ; 0050c11c
    ADD ESP,0xc                         ; 0050c120
    CMP EAX,ESI                         ; 0050c123
    JZ 0x0050c13b                       ; 0050c125 | LAB_0050c13b
        ;   XREF to: 0050c13b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 0050c127
    MOV dword ptr [ESP + 0x50],EAX      ; 0050c129
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050c12d
    MOV dword ptr [ESP + 0x54],EAX      ; 0050c130
    MOV EAX,dword ptr [ESI + 0x8]       ; 0050c134
    MOV dword ptr [ESP + 0x58],EAX      ; 0050c137
    LEA EAX,[ESP + 0x50]                ; 0050c13b
        ;   Label: LAB_0050c13b
    PUSH EAX                            ; 0050c13f
    PUSH EBX                            ; 0050c140
    INC EDI                             ; 0050c141
    CALL core_marquee.cpp_FUN_0050bec0  ; 0050c142 | undefined core_marquee.cpp_FUN_0050bec0()
        ;   XREF to: 0050bec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050c147
    CMP EDI,EBP                         ; 0050c14a
    JL 0x0050c0da                       ; 0050c14c | LAB_0050c0da
        ;   XREF to: 0050c0da (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0050c14e
        ;   Label: LAB_0050c14e
    MOV EDX,dword ptr [0x006703ec]      ; 0050c150 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 0050c156 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0050c157 | void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 0050c15c
    ADD ESP,0x8                         ; 0050c161
    POP ESI                             ; 0050c164
    POP EDI                             ; 0050c165
    ADD ESP,0x8c                        ; 0050c166
    POP EBP                             ; 0050c16c
    POP EBX                             ; 0050c16d
    RET                                 ; 0050c16e
    MOV EDX,dword ptr [EBX + 0x1a0]     ; 0050c16f
        ;   Label: LAB_0050c16f
    CMP EDX,0x1                         ; 0050c175
    JNZ 0x0050c21f                      ; 0050c178 | LAB_0050c21f
        ;   XREF to: 0050c21f (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x17c]         ; 0050c17e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c184 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x8c]        ; 0050c189
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0050c190
    XOR ESI,ESI                         ; 0050c197
    TEST EDI,EDI                        ; 0050c199
    JLE 0x0050c14e                      ; 0050c19b | LAB_0050c14e
        ;   XREF to: 0050c14e (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x8c]      ; 0050c19d
    MOV EDI,EAX                         ; 0050c1a4
    LEA EAX,[ESP + 0x20]                ; 0050c1a6
        ;   Label: LAB_0050c1a6
    MOV dword ptr [ESP + 0x90],ESI      ; 0050c1aa
    PUSH EAX                            ; 0050c1b1
    LEA EAX,[ESP + 0x3c]                ; 0050c1b2
    FILD dword ptr [ESP + 0x94]         ; 0050c1b6
    PUSH EAX                            ; 0050c1bd
    FSTP float ptr [ESP + 0x80]         ; 0050c1be
    PUSH dword ptr [ESP + 0x80]         ; 0050c1c5
    PUSH EDI                            ; 0050c1cc
    CALL core_course.cpp_CCourse_FUN_00442710 ; 0050c1cd | void core_course.cpp_CCourse_FUN_00442710(CCourse * this_ptr)
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0050c1d2
    LEA EAX,[ESP + 0x38]                ; 0050c1d5
    PUSH EAX                            ; 0050c1d9
    LEA EAX,[ESP + 0x30]                ; 0050c1da
    PUSH EAX                            ; 0050c1de
    PUSH EBX                            ; 0050c1df
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0050c1e0 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0050c1e5
    LEA EAX,[ESP + 0x44]                ; 0050c1e7
    ADD ESP,0xc                         ; 0050c1eb
    CMP EAX,EDX                         ; 0050c1ee
    JZ 0x0050c206                       ; 0050c1f0 | LAB_0050c206
        ;   XREF to: 0050c206 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 0050c1f2
    MOV dword ptr [ESP + 0x38],EAX      ; 0050c1f4
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050c1f8
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050c1fb
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050c1ff
    MOV dword ptr [ESP + 0x40],EAX      ; 0050c202
    LEA EAX,[ESP + 0x38]                ; 0050c206
        ;   Label: LAB_0050c206
    PUSH EAX                            ; 0050c20a
    PUSH EBX                            ; 0050c20b
    INC ESI                             ; 0050c20c
    CALL core_marquee.cpp_FUN_0050bec0  ; 0050c20d | undefined core_marquee.cpp_FUN_0050bec0()
        ;   XREF to: 0050bec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050c212
    CMP ESI,EBP                         ; 0050c215
    JGE 0x0050c14e                      ; 0050c217 | LAB_0050c14e
        ;   XREF to: 0050c14e (CONDITIONAL_JUMP)
    JMP 0x0050c1a6                      ; 0050c21d | LAB_0050c1a6
        ;   XREF to: 0050c1a6 (UNCONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0050c21f
        ;   Label: LAB_0050c21f
    JNZ 0x0050c14e                      ; 0050c221 | LAB_0050c14e
        ;   XREF to: 0050c14e (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x17c]         ; 0050c227
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c22d | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EAX]             ; 0050c232
    XOR EDI,EDI                         ; 0050c234
    FISTP dword ptr [ESP + 0x80]        ; 0050c236
    MOV dword ptr [ESP + 0x88],EDX      ; 0050c23d
    TEST EDX,EDX                        ; 0050c244
    JLE 0x0050c14e                      ; 0050c246 | LAB_0050c14e
        ;   XREF to: 0050c14e (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x80]      ; 0050c24c
    MOV EBP,EAX                         ; 0050c253
    MOV EAX,ESI                         ; 0050c255
        ;   Label: LAB_0050c255
    MOV EDX,ESI                         ; 0050c257
    MOV ECX,dword ptr [EBX + 0x180]     ; 0050c259
    SAR EDX,0x1f                        ; 0050c25f
    IDIV ECX                            ; 0050c262
    TEST EDX,EDX                        ; 0050c264
    JNZ 0x0050c27b                      ; 0050c266 | LAB_0050c27b
        ;   XREF to: 0050c27b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050c268
        ;   Label: LAB_0050c268
    INC EDI                             ; 0050c26f
    INC ESI                             ; 0050c270
    CMP EDI,EAX                         ; 0050c271
    JGE 0x0050c14e                      ; 0050c273 | LAB_0050c14e
        ;   XREF to: 0050c14e (CONDITIONAL_JUMP)
    JMP 0x0050c255                      ; 0050c279 | LAB_0050c255
        ;   XREF to: 0050c255 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x44]                ; 0050c27b
        ;   Label: LAB_0050c27b
    MOV dword ptr [ESP + 0x90],EDI      ; 0050c27f
    PUSH EAX                            ; 0050c286
    LEA EAX,[ESP + 0x18]                ; 0050c287
    FILD dword ptr [ESP + 0x94]         ; 0050c28b
    PUSH EAX                            ; 0050c292
    FSTP float ptr [ESP + 0x84]         ; 0050c293
    PUSH dword ptr [ESP + 0x84]         ; 0050c29a
    PUSH EBP                            ; 0050c2a1
    CALL core_course.cpp_CCourse_FUN_00442710 ; 0050c2a2 | void core_course.cpp_CCourse_FUN_00442710(CCourse * this_ptr)
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0050c2a7
    LEA EAX,[ESP + 0x14]                ; 0050c2aa
    PUSH EAX                            ; 0050c2ae
    LEA EAX,[ESP + 0x60]                ; 0050c2af
    PUSH EAX                            ; 0050c2b3
    PUSH EBX                            ; 0050c2b4
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0050c2b5 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0050c2ba
    LEA EAX,[ESP + 0x20]                ; 0050c2bc
    ADD ESP,0xc                         ; 0050c2c0
    CMP EAX,EDX                         ; 0050c2c3
    JZ 0x0050c2db                       ; 0050c2c5 | LAB_0050c2db
        ;   XREF to: 0050c2db (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 0050c2c7
    MOV dword ptr [ESP + 0x14],EAX      ; 0050c2c9
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050c2cd
    MOV dword ptr [ESP + 0x18],EAX      ; 0050c2d0
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050c2d4
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050c2d7
    LEA EAX,[ESP + 0x14]                ; 0050c2db
        ;   Label: LAB_0050c2db
    PUSH EAX                            ; 0050c2df
    PUSH EBX                            ; 0050c2e0
    CALL core_marquee.cpp_FUN_0050bec0  ; 0050c2e1 | undefined core_marquee.cpp_FUN_0050bec0()
        ;   XREF to: 0050bec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050c2e6
    JMP 0x0050c268                      ; 0050c2e9 | LAB_0050c268
        ;   XREF to: 0050c268 (UNCONDITIONAL_JUMP)

