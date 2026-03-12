; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_fixupCramUV_FUN_0046e090(int atlas_texture_index,float *u_coord,float *v_coord)
;
; Parameters:
; int              Stack[0x4]:4   atlas_texture_index
; float *          Stack[0x8]:4   u_coord
; float *          Stack[0xc]:4   v_coord
; Local Variables:
; char[100]        Stack[-0x94]:100  local_94
; double           Stack[-0x30]:8  local_30
; int              Stack[-0x28]:4  local_28
; double           Stack[-0x24]:8  local_24
; double           Stack[-0x1c]:8  local_1c
; STextureAtlasEntry * Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a6df
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a577
;   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 at 0051bc3f
;   shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 at 0051eba3
;
; Referenced Globals:
;   double DOUBLE_0061ddfe = 65536
;   double DOUBLE_0061de06 = 256
;   double DOUBLE_0061de0e = 256.010000000000
;   double DOUBLE_0061de16 = -0.0100000000000000
;   TerminatedCString s_fixupCramUV_UV_out_of_ra_0061de1e
;   TerminatedCString s_shape_design_c_0061de44
;   double DOUBLE_0061de56 = 255.999741000000
;   double DOUBLE_0061de5e = 255.999741000000
;   STextureAtlasEntry[250] g_TextureAtlasEntries
;   undefined4 DAT_01e8d478
;   undefined4 DAT_01e8d48c
;   undefined4 DAT_01e8d490
;   undefined4 DAT_01e8d494
;   undefined4 DAT_01e8d498
;   undefined4 DAT_01e8d4a4
;   ... and 6 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e090
        ;   Label: shape_design.c_fixupCramUV_FUN_0046e090
    PUSH ESI                            ; 0046e091
    PUSH EDI                            ; 0046e092
    PUSH EBP                            ; 0046e093
    MOV EBP,ESP                         ; 0046e094
    SUB ESP,0x84                        ; 0046e096
    IMUL EAX,dword ptr [EBP + 0x14],0x250 ; 0046e09c
    MOV EDX,0x1e8d264                   ; 0046e0a3 | g_TextureAtlasEntries
    ADD EDX,EAX                         ; 0046e0a8
    MOV dword ptr [EBP + -0x4],EDX      ; 0046e0aa
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e0ad
    FLD float ptr [EAX]                 ; 0046e0b0
    FMUL double ptr [0x0061ddfe]        ; 0046e0b2 | DOUBLE_0061ddfe
    FSTP double ptr [EBP + -0x14]       ; 0046e0b8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e0bb
    FLD float ptr [EAX]                 ; 0046e0be
    FMUL double ptr [0x0061ddfe]        ; 0046e0c0 | DOUBLE_0061ddfe
    FSTP double ptr [EBP + -0xc]        ; 0046e0c6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e0c9
    FILD dword ptr [EAX + 0x240]        ; 0046e0cc | DAT_01e8d4a4
    FCOMP double ptr [EBP + -0x14]      ; 0046e0d2
    FNSTSW AX                           ; 0046e0d5
    SAHF                                ; 0046e0d7
    JBE 0x0046e0e6                      ; 0046e0d8
        ;   XREF to: 0046e0e6 (CONDITIONAL_JUMP)  ; LAB_0046e0e6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e0da
    FILD dword ptr [EAX + 0x240]        ; 0046e0dd | DAT_01e8d4a4
    FSTP double ptr [EBP + -0x14]       ; 0046e0e3
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e0e6
        ;   Label: LAB_0046e0e6
    FILD dword ptr [EAX + 0x248]        ; 0046e0e9 | DAT_01e8d4ac
    FCOMP double ptr [EBP + -0x14]      ; 0046e0ef
    FNSTSW AX                           ; 0046e0f2
    SAHF                                ; 0046e0f4
    JNC 0x0046e103                      ; 0046e0f5
        ;   XREF to: 0046e103 (CONDITIONAL_JUMP)  ; LAB_0046e103
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e0f7
    FILD dword ptr [EAX + 0x248]        ; 0046e0fa | DAT_01e8d4ac
    FSTP double ptr [EBP + -0x14]       ; 0046e100
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e103
        ;   Label: LAB_0046e103
    FILD dword ptr [EAX + 0x244]        ; 0046e106 | DAT_01e8d4a8
    FCOMP double ptr [EBP + -0xc]       ; 0046e10c
    FNSTSW AX                           ; 0046e10f
    SAHF                                ; 0046e111
    JBE 0x0046e120                      ; 0046e112
        ;   XREF to: 0046e120 (CONDITIONAL_JUMP)  ; LAB_0046e120
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e114
    FILD dword ptr [EAX + 0x244]        ; 0046e117 | DAT_01e8d4a8
    FSTP double ptr [EBP + -0xc]        ; 0046e11d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e120
        ;   Label: LAB_0046e120
    FILD dword ptr [EAX + 0x24c]        ; 0046e123 | DAT_01e8d4b0
    FCOMP double ptr [EBP + -0xc]       ; 0046e129
    FNSTSW AX                           ; 0046e12c
    SAHF                                ; 0046e12e
    JNC 0x0046e13d                      ; 0046e12f
        ;   XREF to: 0046e13d (CONDITIONAL_JUMP)  ; LAB_0046e13d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e131
    FILD dword ptr [EAX + 0x24c]        ; 0046e134 | DAT_01e8d4b0
    FSTP double ptr [EBP + -0xc]        ; 0046e13a
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e13d
        ;   Label: LAB_0046e13d
    MOV EAX,dword ptr [EAX + 0x248]     ; 0046e140 | DAT_01e8d4ac
    MOV EDX,dword ptr [EBP + -0x4]      ; 0046e146
    SUB EAX,dword ptr [EDX + 0x240]     ; 0046e149 | DAT_01e8d4a4
    MOV dword ptr [EBP + -0x18],EAX     ; 0046e14f
    FILD dword ptr [EBP + -0x18]        ; 0046e152
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e155
    FILD dword ptr [EAX + 0x240]        ; 0046e158 | DAT_01e8d4a4
    FSUBR double ptr [EBP + -0x14]      ; 0046e15e
    FDIVRP                              ; 0046e161
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e163
    FILD dword ptr [EAX + 0x230]        ; 0046e166 | DAT_01e8d494
    FMULP                               ; 0046e16c
    FSTP double ptr [EBP + -0x14]       ; 0046e16e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e171
    MOV EAX,dword ptr [EAX + 0x24c]     ; 0046e174 | DAT_01e8d4b0
    MOV EDX,dword ptr [EBP + -0x4]      ; 0046e17a
    SUB EAX,dword ptr [EDX + 0x244]     ; 0046e17d | DAT_01e8d4a8
    MOV dword ptr [EBP + -0x18],EAX     ; 0046e183
    FILD dword ptr [EBP + -0x18]        ; 0046e186
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e189
    FILD dword ptr [EAX + 0x244]        ; 0046e18c | DAT_01e8d4a8
    FSUBR double ptr [EBP + -0xc]       ; 0046e192
    FDIVRP                              ; 0046e195
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e197
    FILD dword ptr [EAX + 0x234]        ; 0046e19a | DAT_01e8d498
    FMULP                               ; 0046e1a0
    FSTP double ptr [EBP + -0xc]        ; 0046e1a2
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e1a5
    CMP dword ptr [EAX + 0x214],0x0     ; 0046e1a8 | DAT_01e8d478
    JNZ 0x0046e1d5                      ; 0046e1af
        ;   XREF to: 0046e1d5 (CONDITIONAL_JUMP)  ; LAB_0046e1d5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e1b1
    FILD dword ptr [EAX + 0x228]        ; 0046e1b4 | DAT_01e8d48c
    FADD double ptr [EBP + -0x14]       ; 0046e1ba
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e1bd
    FSTP float ptr [EAX]                ; 0046e1c0
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e1c2
    FILD dword ptr [EAX + 0x22c]        ; 0046e1c5 | DAT_01e8d490
    FADD double ptr [EBP + -0xc]        ; 0046e1cb
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e1ce
    FSTP float ptr [EAX]                ; 0046e1d1
    JMP 0x0046e202                      ; 0046e1d3
        ;   XREF to: 0046e202 (UNCONDITIONAL_JUMP)  ; LAB_0046e202
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e1d5
        ;   Label: LAB_0046e1d5
    FILD dword ptr [EAX + 0x234]        ; 0046e1d8 | DAT_01e8d498
    FSUB double ptr [EBP + -0xc]        ; 0046e1de
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e1e1
    FILD dword ptr [EAX + 0x228]        ; 0046e1e4 | DAT_01e8d48c
    FADDP                               ; 0046e1ea
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e1ec
    FSTP float ptr [EAX]                ; 0046e1ef
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e1f1
    FILD dword ptr [EAX + 0x22c]        ; 0046e1f4 | DAT_01e8d490
    FADD double ptr [EBP + -0x14]       ; 0046e1fa
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e1fd
    FSTP float ptr [EAX]                ; 0046e200
    FILD dword ptr [0x01eb1760]         ; 0046e202 | g_TextureAtlasDimension
        ;   Label: LAB_0046e202
    FDIVR double ptr [0x0061de06]       ; 0046e208 | DOUBLE_0061de06
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e20e
    FLD float ptr [EAX]                 ; 0046e211
    FSTP double ptr [EBP + -0x20]       ; 0046e213
    FMUL double ptr [EBP + -0x20]       ; 0046e216
    FSTP double ptr [EBP + -0x20]       ; 0046e219
    FLD double ptr [EBP + -0x20]        ; 0046e21c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e21f
    FSTP float ptr [EAX]                ; 0046e222
    FILD dword ptr [0x01eb1760]         ; 0046e224 | g_TextureAtlasDimension
    FDIVR double ptr [0x0061de06]       ; 0046e22a | DOUBLE_0061de06
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e230
    FLD float ptr [EAX]                 ; 0046e233
    FSTP double ptr [EBP + -0x20]       ; 0046e235
    FMUL double ptr [EBP + -0x20]       ; 0046e238
    FSTP double ptr [EBP + -0x20]       ; 0046e23b
    FLD double ptr [EBP + -0x20]        ; 0046e23e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e241
    FSTP float ptr [EAX]                ; 0046e244
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e246
    FLD float ptr [EAX]                 ; 0046e249
    FCOMP double ptr [0x0061de0e]       ; 0046e24b | DOUBLE_0061de0e
    FNSTSW AX                           ; 0046e251
    SAHF                                ; 0046e253
    JA 0x0046e266                       ; 0046e254
        ;   XREF to: 0046e266 (CONDITIONAL_JUMP)  ; LAB_0046e266
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e256
    FLD float ptr [EAX]                 ; 0046e259
    FCOMP double ptr [0x0061de0e]       ; 0046e25b | DOUBLE_0061de0e
    FNSTSW AX                           ; 0046e261
    SAHF                                ; 0046e263
    JBE 0x0046e268                      ; 0046e264
        ;   XREF to: 0046e268 (CONDITIONAL_JUMP)  ; LAB_0046e268
    JMP 0x0046e278                      ; 0046e266
        ;   XREF to: 0046e278 (UNCONDITIONAL_JUMP)  ; LAB_0046e278
        ;   Label: LAB_0046e266
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e268
        ;   Label: LAB_0046e268
    FLD float ptr [EAX]                 ; 0046e26b
    FCOMP double ptr [0x0061de16]       ; 0046e26d | DOUBLE_0061de16
    FNSTSW AX                           ; 0046e273
    SAHF                                ; 0046e275
    JNC 0x0046e27a                      ; 0046e276
        ;   XREF to: 0046e27a (CONDITIONAL_JUMP)  ; LAB_0046e27a
    JMP 0x0046e28a                      ; 0046e278
        ;   XREF to: 0046e28a (UNCONDITIONAL_JUMP)  ; LAB_0046e28a
        ;   Label: LAB_0046e278
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e27a
        ;   Label: LAB_0046e27a
    FLD float ptr [EAX]                 ; 0046e27d
    FCOMP double ptr [0x0061de16]       ; 0046e27f | DOUBLE_0061de16
    FNSTSW AX                           ; 0046e285
    SAHF                                ; 0046e287
    JNC 0x0046e2d8                      ; 0046e288
        ;   XREF to: 0046e2d8 (CONDITIONAL_JUMP)  ; LAB_0046e2d8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e28a
        ;   Label: LAB_0046e28a
    FLD float ptr [EAX]                 ; 0046e28d
    SUB ESP,0x8                         ; 0046e28f
    FSTP double ptr [ESP]               ; 0046e292
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e295
    FLD float ptr [EAX]                 ; 0046e298
    SUB ESP,0x8                         ; 0046e29a
    FSTP double ptr [ESP]               ; 0046e29d
    MOV EAX,0x61de1e                    ; 0046e2a0 | = "fixupCramUV - UV out of range: %f, %f"
    PUSH EAX                            ; 0046e2a5 | = "fixupCramUV - UV out of range: %f, %f"
    LEA EAX,[EBP + 0xffffff7c]          ; 0046e2a6
    PUSH EAX                            ; 0046e2ac
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046e2ad
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0046e2b2
    MOV dword ptr [0x02f0ca48],0x61de44 ; 0046e2b5 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2c3b   ; 0046e2bf | g_CurrentLineNumber
    LEA EAX,[EBP + 0xffffff7c]          ; 0046e2c9
    PUSH EAX                            ; 0046e2cf
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046e2d0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046e2d5
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e2d8
        ;   Label: LAB_0046e2d8
    FLD float ptr [EAX]                 ; 0046e2db
    FLDZ                                ; 0046e2dd
    FCOMPP                              ; 0046e2df
    FNSTSW AX                           ; 0046e2e1
    SAHF                                ; 0046e2e3
    JBE 0x0046e2ef                      ; 0046e2e4
        ;   XREF to: 0046e2ef (CONDITIONAL_JUMP)  ; LAB_0046e2ef
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e2e6
    MOV dword ptr [EAX],0x0             ; 0046e2e9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e2ef
        ;   Label: LAB_0046e2ef
    FLD float ptr [EAX]                 ; 0046e2f2
    FLDZ                                ; 0046e2f4
    FCOMPP                              ; 0046e2f6
    FNSTSW AX                           ; 0046e2f8
    SAHF                                ; 0046e2fa
    JBE 0x0046e306                      ; 0046e2fb
        ;   XREF to: 0046e306 (CONDITIONAL_JUMP)  ; LAB_0046e306
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e2fd
    MOV dword ptr [EAX],0x0             ; 0046e300
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e306
        ;   Label: LAB_0046e306
    FLD float ptr [EAX]                 ; 0046e309
    FCOMP double ptr [0x0061de56]       ; 0046e30b | DOUBLE_0061de56
    FNSTSW AX                           ; 0046e311
    SAHF                                ; 0046e313
    JBE 0x0046e31f                      ; 0046e314
        ;   XREF to: 0046e31f (CONDITIONAL_JUMP)  ; LAB_0046e31f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e316
    MOV dword ptr [EAX],0x437fffef      ; 0046e319
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e31f
        ;   Label: LAB_0046e31f
    FLD float ptr [EAX]                 ; 0046e322
    FCOMP double ptr [0x0061de5e]       ; 0046e324 | DOUBLE_0061de5e
    FNSTSW AX                           ; 0046e32a
    SAHF                                ; 0046e32c
    JBE 0x0046e338                      ; 0046e32d
        ;   XREF to: 0046e338 (CONDITIONAL_JUMP)  ; LAB_0046e338
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e32f
    MOV dword ptr [EAX],0x437fffef      ; 0046e332
    MOV ESP,EBP                         ; 0046e338
        ;   Label: LAB_0046e338
    POP EBP                             ; 0046e33a
    POP EDI                             ; 0046e33b
    POP ESI                             ; 0046e33c
    POP EBX                             ; 0046e33d
    RET                                 ; 0046e33e

