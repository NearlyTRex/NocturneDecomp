; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00496f60(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1c5c
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_005c04c4
;   TerminatedCString s_CSmokeParticle_render_Fr_005c04d5
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc5a4
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b08c
;   undefined4 DAT_0060b090
;   undefined4 DAT_0060b0bc
;   undefined4 DAT_0060b0c0
;   undefined4 DAT_007e2a54
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_set.cpp_CDemonSet_computeLighting_FUN_00538400
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496f60
        ;   Label: core_fire.cpp_CSmokeParticle_render_FUN_00496f60
    PUSH ESI                            ; 00496f61
    PUSH EDI                            ; 00496f62
    PUSH EBP                            ; 00496f63
    SUB ESP,0x60                        ; 00496f64
    MOV EDI,dword ptr [ESP + 0x74]      ; 00496f67
    MOV ESI,dword ptr [0x005f2afc]      ; 00496f6b | DAT_005f2afc
    LEA EBX,[ESP + 0xc]                 ; 00496f71
    LEA EAX,[EDI + 0x4]                 ; 00496f75
    MOV ESI,dword ptr [ESI]             ; 00496f78 | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 00496f7a
    FMUL float ptr [0x005df8e4]         ; 00496f7c | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00496f82
    FLD float ptr [EAX + 0x4]           ; 00496f84
    FMUL float ptr [0x005df8e4]         ; 00496f87 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00496f8d
    FLD float ptr [EAX + 0x8]           ; 00496f90
    FMUL float ptr [0x005df8e4]         ; 00496f93 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00496f99
    LEA EAX,[ESP + 0xc]                 ; 00496f9c
    PUSH EAX                            ; 00496fa0
    PUSH ESI                            ; 00496fa1
    CALL engine_special.cpp_FUN_0056356c ; 00496fa2
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00496fa7
    PUSH ESI                            ; 00496faa
    MOV EDX,dword ptr [0x005f2afc]      ; 00496fab | DAT_005f2afc
    PUSH EDX                            ; 00496fb1 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0 ; 00496fb2
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 00496fb7
    TEST EAX,EAX                        ; 00496fba
    JZ 0x00497286                       ; 00496fbc
        ;   XREF to: 00497286 (CONDITIONAL_JUMP)  ; LAB_00497286
    FLD float ptr [EDI + 0x18]          ; 00496fc2
    CALL crt_math.c_round_FUN_005a3120  ; 00496fc5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x58]        ; 00496fca
    MOV ECX,dword ptr [ESP + 0x58]      ; 00496fce
    TEST ECX,ECX                        ; 00496fd2
    JL 0x00496fdb                       ; 00496fd4
        ;   XREF to: 00496fdb (CONDITIONAL_JUMP)  ; LAB_00496fdb
    CMP ECX,0x28                        ; 00496fd6
    JL 0x00496ffe                       ; 00496fd9
        ;   XREF to: 00496ffe (CONDITIONAL_JUMP)  ; LAB_00496ffe
    MOV ESI,0x5c04c4                    ; 00496fdb | = "..\\core\\fire.cpp"
        ;   Label: LAB_00496fdb
    MOV EBP,0x127                       ; 00496fe0
    PUSH 0x5c04d5                       ; 00496fe5 | = "CSmokeParticle::render - Frame out of..."
    MOV dword ptr [0x01d71de0],ESI      ; 00496fea | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00496ff0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00496ff6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00496ffb
    MOV EBX,dword ptr [ESP + 0x58]      ; 00496ffe
        ;   Label: LAB_00496ffe
    LEA EAX,[EBX*0x4 + 0x0]             ; 00497002
    SUB EAX,EBX                         ; 00497009
    SHL EAX,0x3                         ; 0049700b
    ADD EAX,0x5fc5a4                    ; 0049700e | DAT_005fc5a4
    PUSH EAX                            ; 00497013
    MOV EAX,[0x005f2afc]                ; 00497014 | DAT_005f2afc
    PUSH EAX                            ; 00497019 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0049701a
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049701f
    LEA ESI,[EDI + 0x4]                 ; 00497022
    PUSH ESI                            ; 00497025
    MOV EDX,dword ptr [0x005f2afc]      ; 00497026 | DAT_005f2afc
    PUSH EDX                            ; 0049702c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049702d
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00497032
    PUSH 0x0                            ; 00497035
    PUSH 0x1c73658                      ; 00497037 | DAT_01c73658
    MOV ECX,dword ptr [0x005f2afc]      ; 0049703c | DAT_005f2afc
    PUSH ECX                            ; 00497042 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 00497043
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00497048
    MOV EAX,dword ptr [EDI + 0x14]      ; 0049704b
    XOR EBX,EBX                         ; 0049704e
    MOV dword ptr [ESP + 0x5c],EAX      ; 00497050
    MOV dword ptr [ESP + 0x20],EBX      ; 00497054
    FLD float ptr [ESP + 0x5c]          ; 00497058
    FCHS                                ; 0049705c
    FSTP float ptr [ESP + 0x18]         ; 0049705e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00497062
    LEA EBX,[ESP + 0x48]                ; 00497066
    MOV dword ptr [ESP + 0x54],EAX      ; 0049706a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049706e
    LEA EAX,[ESP + 0x18]                ; 00497072
    MOV EDX,dword ptr [0x005f2afc]      ; 00497076 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049707c
    FMUL float ptr [0x005df8e4]         ; 0049707e | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00497084
    FLD float ptr [EAX + 0x4]           ; 00497086
    FMUL float ptr [0x005df8e4]         ; 00497089 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049708f
    FLD float ptr [EAX + 0x8]           ; 00497092
    FMUL float ptr [0x005df8e4]         ; 00497095 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049709b
    LEA EAX,[ESP + 0x48]                ; 0049709e
    PUSH EAX                            ; 004970a2
    MOV EAX,dword ptr [EDX]             ; 004970a3 | DAT_01bdd7e4
    PUSH EAX                            ; 004970a5
    CALL engine_special.cpp_FUN_005632a3 ; 004970a6
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004970ab
    XOR EBP,EBP                         ; 004970ae
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004970b0
    MOV EBX,ESP                         ; 004970b4
    MOV dword ptr [ESP + 0x18],EAX      ; 004970b6
    MOV EAX,dword ptr [ESP + 0x54]      ; 004970ba
    MOV EDX,dword ptr [0x005f2afc]      ; 004970be | DAT_005f2afc
    MOV dword ptr [ESP + 0x1c],EAX      ; 004970c4
    LEA EAX,[ESP + 0x18]                ; 004970c8
    MOV dword ptr [ESP + 0x20],EBP      ; 004970cc
    FLD float ptr [EAX]                 ; 004970d0
    FMUL float ptr [0x005df8e4]         ; 004970d2 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004970d8
    FLD float ptr [EAX + 0x4]           ; 004970da
    FMUL float ptr [0x005df8e4]         ; 004970dd | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004970e3
    FLD float ptr [EAX + 0x8]           ; 004970e6
    FMUL float ptr [0x005df8e4]         ; 004970e9 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004970ef
    MOV EAX,ESP                         ; 004970f2
    PUSH EAX                            ; 004970f4
    MOV EAX,dword ptr [EDX]             ; 004970f5 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004970f7
    PUSH EAX                            ; 004970fa
    CALL engine_special.cpp_FUN_005632a3 ; 004970fb
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497100
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00497103
    MOV dword ptr [ESP + 0x20],EBP      ; 00497107
    MOV dword ptr [ESP + 0x18],EAX      ; 0049710b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049710f
    LEA EBX,[ESP + 0x3c]                ; 00497113
    LEA EAX,[ESP + 0x18]                ; 00497117
    MOV EDX,dword ptr [0x005f2afc]      ; 0049711b | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00497121
    FMUL float ptr [0x005df8e4]         ; 00497123 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00497129
    FLD float ptr [EAX + 0x4]           ; 0049712b
    FMUL float ptr [0x005df8e4]         ; 0049712e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00497134
    FLD float ptr [EAX + 0x8]           ; 00497137
    FMUL float ptr [0x005df8e4]         ; 0049713a | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00497140
    LEA EAX,[ESP + 0x3c]                ; 00497143
    PUSH EAX                            ; 00497147
    MOV EAX,dword ptr [EDX]             ; 00497148 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049714a
    PUSH EAX                            ; 0049714d
    CALL engine_special.cpp_FUN_005632a3 ; 0049714e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497153
    MOV EAX,dword ptr [ESP + 0x54]      ; 00497156
    LEA EBX,[ESP + 0x24]                ; 0049715a
    MOV dword ptr [ESP + 0x18],EAX      ; 0049715e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00497162
    MOV EDX,dword ptr [0x005f2afc]      ; 00497166 | DAT_005f2afc
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049716c
    LEA EAX,[ESP + 0x18]                ; 00497170
    MOV dword ptr [ESP + 0x20],EBP      ; 00497174
    FLD float ptr [EAX]                 ; 00497178
    FMUL float ptr [0x005df8e4]         ; 0049717a | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00497180
    FLD float ptr [EAX + 0x4]           ; 00497182
    FMUL float ptr [0x005df8e4]         ; 00497185 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049718b
    FLD float ptr [EAX + 0x8]           ; 0049718e
    FMUL float ptr [0x005df8e4]         ; 00497191 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00497197
    LEA EAX,[ESP + 0x24]                ; 0049719a
    PUSH EAX                            ; 0049719e
    MOV EAX,dword ptr [EDX]             ; 0049719f | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004971a1
    PUSH EAX                            ; 004971a6
    CALL engine_special.cpp_FUN_005632a3 ; 004971a7
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 004971ac
    MOV EBX,0xf80000                    ; 004971b1
    ADD ESP,0x8                         ; 004971b6
    MOV EAX,ESI                         ; 004971b9
    MOV dword ptr [0x0060b02c],ECX      ; 004971bb | DAT_0060b02c
    MOV dword ptr [0x0060b030],EBX      ; 004971c1 | DAT_0060b030
    MOV dword ptr [0x0060b05c],EBX      ; 004971c7 | DAT_0060b05c
    MOV dword ptr [0x0060b060],EBX      ; 004971cd | DAT_0060b060
    MOV dword ptr [0x0060b08c],EBX      ; 004971d3 | DAT_0060b08c
    MOV dword ptr [0x0060b090],ECX      ; 004971d9 | DAT_0060b090
    MOV dword ptr [0x0060b0bc],ECX      ; 004971df | DAT_0060b0bc
    LEA EBX,[ESP + 0x30]                ; 004971e5
    MOV dword ptr [0x0060b0c0],ECX      ; 004971e9 | DAT_0060b0c0
    FLD float ptr [EAX]                 ; 004971ef
    FMUL float ptr [0x005df8e4]         ; 004971f1 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004971f7
    FLD float ptr [EAX + 0x4]           ; 004971f9
    FMUL float ptr [0x005df8e4]         ; 004971fc | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00497202
    FLD float ptr [EAX + 0x8]           ; 00497205
    FMUL float ptr [0x005df8e4]         ; 00497208 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049720e
    PUSH 0x4                            ; 00497211
    PUSH EBP                            ; 00497213
    PUSH 0x1c73664                      ; 00497214 | DAT_01c73664
    LEA EAX,[ESP + 0x3c]                ; 00497219
    PUSH EAX                            ; 0049721d
    MOV EAX,[0x00603b28]                ; 0049721e | g_CDemonSetPtr
    PUSH EAX                            ; 00497223 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00538400 ; 00497224
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00538400(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00497229
    PUSH EBP                            ; 0049722c
    MOV EAX,[0x007e2a54]                ; 0049722d | DAT_007e2a54
    PUSH ESI                            ; 00497232
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00497233
    PUSH EAX                            ; 00497236
    CALL dword ptr [EDX + 0x4]          ; 00497237
    MOV EAX,0xffff                      ; 0049723a
    MOV EDX,dword ptr [0x01c6e24c]      ; 0049723f | DAT_01c6e24c
    ADD ESP,0xc                         ; 00497245
    SUB EAX,EDX                         ; 00497248
    MOV EDX,dword ptr [EDI + 0x28]      ; 0049724a
    IMUL EDX                            ; 0049724d
    SHRD EAX,EDX,0x10                   ; 0049724f
    PUSH EAX                            ; 00497253
    MOV ECX,dword ptr [0x005f2afc]      ; 00497254 | DAT_005f2afc
    PUSH ECX                            ; 0049725a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0049725b
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00497260
    PUSH 0x1c73670                      ; 00497263
    MOV EBX,dword ptr [0x005f2afc]      ; 00497268 | DAT_005f2afc
    PUSH EBX                            ; 0049726e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 0049726f
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00497274
    MOV ESI,dword ptr [0x005f2afc]      ; 00497277 | DAT_005f2afc
    PUSH ESI                            ; 0049727d | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0049727e
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00497283
    ADD ESP,0x60                        ; 00497286
        ;   Label: LAB_00497286
    POP EBP                             ; 00497289
    POP EDI                             ; 0049728a
    POP ESI                             ; 0049728b
    POP EBX                             ; 0049728c
    RET                                 ; 0049728d

