; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_00570040(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_FUN_0056ffe0 at 0056fff8
;   core_set.cpp_CDemonSet_FUN_00570010 at 00570028
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_CurrentAlphaValue = 0xff
;   CGame* g_CGamePtr = 02d81a9c
;   SMRGLTextureBasic DAT_006813e4
;   CDemonRenderer g_CDemonRendererInstance
;   float g_PerspectiveReciprocal
;   undefined4 DAT_02d81c90
;   CVector3f[20000] g_VertexNormalArray
;   undefined4 DAT_033081d0
;   undefined4 DAT_033081d4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
;   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
;   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570040
        ;   Label: core_set.cpp_CDemonSet_FUN_00570040
    PUSH ESI                            ; 00570041
    PUSH EDI                            ; 00570042
    PUSH EBP                            ; 00570043
    SUB ESP,0xe4                        ; 00570044
    MOV EBP,dword ptr [ESP + 0xfc]      ; 0057004a
    PUSH 0x6813e4                       ; 00570051 | DAT_006813e4
    MOV EDX,dword ptr [0x006703ec]      ; 00570056 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0057005c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0057005d
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x0067b654]                ; 00570062 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x1f4]     ; 00570067 | DAT_02d81c90
    ADD ESP,0x8                         ; 0057006d
    CMP ECX,0x2                         ; 00570070
    JNZ 0x00570259                      ; 00570073
        ;   XREF to: 00570259 (CONDITIONAL_JUMP)  ; LAB_00570259
    MOV EAX,[0x006793b4]                ; 00570079 | g_CurrentAlphaValue
    SHL EAX,0x8                         ; 0057007e
    MOV dword ptr [ESP + 0x104],EAX     ; 00570081
    MOV EAX,[0x006703ec]                ; 00570088 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_00570088
    PUSH EAX                            ; 0057008d | g_CDemonRendererInstance
    LEA ESI,[ESP + 0xd8]                ; 0057008e
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 ; 00570095
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
    ADD ESP,0x4                         ; 0057009a
    XOR EDX,EDX                         ; 0057009d
    MOV ECX,dword ptr [ESP + 0x100]     ; 0057009f
    MOV dword ptr [ESP + 0xe0],EDX      ; 005700a6
    TEST ECX,ECX                        ; 005700ad
    JLE 0x0057024e                      ; 005700af
        ;   XREF to: 0057024e (CONDITIONAL_JUMP)  ; LAB_0057024e
    MOV ECX,0x12                        ; 005700b5
        ;   Label: LAB_005700b5
    MOV EDI,ESP                         ; 005700ba
    MOV ESI,EBP                         ; 005700bc
    MOVSD.REP ES:EDI,ESI                ; 005700be
    MOV EAX,dword ptr [ESP + 0x4]       ; 005700c0
    XOR ECX,ECX                         ; 005700c4
    TEST EAX,EAX                        ; 005700c6
    JLE 0x00570126                      ; 005700c8
        ;   XREF to: 00570126 (CONDITIONAL_JUMP)  ; LAB_00570126
    XOR ESI,ESI                         ; 005700ca
    XOR EDX,EDX                         ; 005700cc
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x18] ; 005700ce
        ;   Label: LAB_005700ce
    IMUL EAX,EAX,0xc                    ; 005700d2
    LEA EBX,[ESP + 0xc8]                ; 005700d5
    ADD EDX,0x4                         ; 005700dc
    ADD ESI,0xc                         ; 005700df
    ADD EAX,0x33081cc                   ; 005700e2 | g_VertexNormalArray
    INC ECX                             ; 005700e7
    FLD float ptr [EAX]                 ; 005700e8 | g_VertexNormalArray
    FISTP dword ptr [EBX]               ; 005700ea
    FLD float ptr [EAX + 0x4]           ; 005700ec | DAT_033081d0
    FISTP dword ptr [EBX + 0x4]         ; 005700ef
    FLD float ptr [EAX + 0x8]           ; 005700f2 | DAT_033081d4
    FISTP dword ptr [EBX + 0x8]         ; 005700f5
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005700f8
    MOV EBX,dword ptr [ESP + 0xc8]      ; 005700ff
    NEG EAX                             ; 00570106
    ADD EBX,0x8000                      ; 00570108
    ADD EAX,0x8000                      ; 0057010e
    MOV dword ptr [ESP + EDX*0x1 + 0x84],EBX ; 00570113
    MOV EBX,dword ptr [ESP + 0x4]       ; 0057011a
    MOV dword ptr [ESP + EDX*0x1 + 0x44],EAX ; 0057011e
    CMP ECX,EBX                         ; 00570122
    JL 0x005700ce                       ; 00570124
        ;   XREF to: 005700ce (CONDITIONAL_JUMP)  ; LAB_005700ce
    MOV ESI,dword ptr [ESP + 0x4]       ; 00570126
        ;   Label: LAB_00570126
    CMP ESI,0x1                         ; 0057012a
    JLE 0x005701ce                      ; 0057012d
        ;   XREF to: 005701ce (CONDITIONAL_JUMP)  ; LAB_005701ce
    MOV EAX,0x4                         ; 00570133
    LEA ECX,[ESI*0x4 + 0x0]             ; 00570138
    CMP dword ptr [ESP + 0x88],0x8000   ; 0057013f
        ;   Label: LAB_0057013f
    JLE 0x00570161                      ; 0057014a
        ;   XREF to: 00570161 (CONDITIONAL_JUMP)  ; LAB_00570161
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 0057014c
    JGE 0x00570161                      ; 00570157
        ;   XREF to: 00570161 (CONDITIONAL_JUMP)  ; LAB_00570161
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 00570159
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 00570161
        ;   Label: LAB_00570161
    JGE 0x0057018a                      ; 0057016c
        ;   XREF to: 0057018a (CONDITIONAL_JUMP)  ; LAB_0057018a
    MOV EDI,dword ptr [ESP + EAX*0x1 + 0x88] ; 0057016e
    CMP EDI,0x8000                      ; 00570175
    JLE 0x0057018a                      ; 0057017b
        ;   XREF to: 0057018a (CONDITIONAL_JUMP)  ; LAB_0057018a
    LEA EDX,[EDI + 0xffff0000]          ; 0057017d
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDX ; 00570183
    CMP dword ptr [ESP + 0x48],0x8000   ; 0057018a
        ;   Label: LAB_0057018a
    JLE 0x005701a3                      ; 00570192
        ;   XREF to: 005701a3 (CONDITIONAL_JUMP)  ; LAB_005701a3
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 00570194
    JGE 0x005701a3                      ; 0057019c
        ;   XREF to: 005701a3 (CONDITIONAL_JUMP)  ; LAB_005701a3
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 0057019e
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 005701a3
        ;   Label: LAB_005701a3
    JGE 0x005701c3                      ; 005701ab
        ;   XREF to: 005701c3 (CONDITIONAL_JUMP)  ; LAB_005701c3
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x48] ; 005701ad
    CMP EDX,0x8000                      ; 005701b1
    JLE 0x005701c3                      ; 005701b7
        ;   XREF to: 005701c3 (CONDITIONAL_JUMP)  ; LAB_005701c3
    LEA EBX,[EDX + 0xffff0000]          ; 005701b9
    MOV dword ptr [ESP + EAX*0x1 + 0x48],EBX ; 005701bf
    ADD EAX,0x4                         ; 005701c3
        ;   Label: LAB_005701c3
    CMP EAX,ECX                         ; 005701c6
    JL 0x0057013f                       ; 005701c8
        ;   XREF to: 0057013f (CONDITIONAL_JUMP)  ; LAB_0057013f
    MOV EDI,dword ptr [ESP + 0x4]       ; 005701ce
        ;   Label: LAB_005701ce
    XOR ECX,ECX                         ; 005701d2
    TEST EDI,EDI                        ; 005701d4
    JLE 0x00570204                      ; 005701d6
        ;   XREF to: 00570204 (CONDITIONAL_JUMP)  ; LAB_00570204
    XOR EAX,EAX                         ; 005701d8
    XOR EDX,EDX                         ; 005701da
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 005701dc
        ;   Label: LAB_005701dc
    SHL EBX,0x8                         ; 005701e3
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 005701e6
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 005701ea
    ADD EDX,0xc                         ; 005701ee
    SHL EBX,0x8                         ; 005701f1
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 005701f4
    INC ECX                             ; 005701f8
    MOV ESI,dword ptr [ESP + 0x4]       ; 005701f9
    ADD EAX,0x4                         ; 005701fd
    CMP ECX,ESI                         ; 00570200
    JL 0x005701dc                       ; 00570202
        ;   XREF to: 005701dc (CONDITIONAL_JUMP)  ; LAB_005701dc
    CMP dword ptr [ESP + 0x104],0xfde8  ; 00570204
        ;   Label: LAB_00570204
    JLE 0x00570299                      ; 0057020f
        ;   XREF to: 00570299 (CONDITIONAL_JUMP)  ; LAB_00570299
    MOV EAX,ESP                         ; 00570215
    PUSH EAX                            ; 00570217
    MOV EDX,dword ptr [0x006703ec]      ; 00570218 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0057021e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 ; 0057021f
        ;   XREF to: 0048b1e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 00570224
        ;   Label: LAB_00570224
    MOV EBX,dword ptr [ESP + 0x108]     ; 00570227
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0057022e
    MOV EDI,dword ptr [ESP + 0x100]     ; 00570235
    INC ESI                             ; 0057023c
    ADD EBP,EBX                         ; 0057023d
    MOV dword ptr [ESP + 0xe0],ESI      ; 0057023f
    CMP ESI,EDI                         ; 00570246
    JL 0x005700b5                       ; 00570248
        ;   XREF to: 005700b5 (CONDITIONAL_JUMP)  ; LAB_005700b5
    ADD ESP,0xe4                        ; 0057024e
        ;   Label: LAB_0057024e
    POP EBP                             ; 00570254
    POP EDI                             ; 00570255
    POP ESI                             ; 00570256
    POP EBX                             ; 00570257
    RET                                 ; 00570258
    MOV EAX,0xffff                      ; 00570259
        ;   Label: LAB_00570259
    MOV EBX,dword ptr [0x02d051f4]      ; 0057025e | g_PerspectiveReciprocal
    MOV EDX,dword ptr [ESP + 0x104]     ; 00570264
    SUB EAX,EBX                         ; 0057026b
    IMUL EDX                            ; 0057026d
    SHRD EAX,EDX,0x10                   ; 0057026f
    PUSH EAX                            ; 00570273
    MOV ESI,dword ptr [0x006703ec]      ; 00570274 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0057027a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0057027b
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00570280
    PUSH 0x0                            ; 00570283
    MOV EDI,dword ptr [0x006703ec]      ; 00570285 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0057028b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0057028c
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00570291
    JMP 0x00570088                      ; 00570294
        ;   XREF to: 00570088 (UNCONDITIONAL_JUMP)  ; LAB_00570088
    MOV EAX,ESP                         ; 00570299
        ;   Label: LAB_00570299
    PUSH EAX                            ; 0057029b
    MOV EAX,[0x006703ec]                ; 0057029c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 005702a1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970 ; 005702a2
        ;   XREF to: 0048b970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    JMP 0x00570224                      ; 005702a7
        ;   XREF to: 00570224 (UNCONDITIONAL_JUMP)  ; LAB_00570224

