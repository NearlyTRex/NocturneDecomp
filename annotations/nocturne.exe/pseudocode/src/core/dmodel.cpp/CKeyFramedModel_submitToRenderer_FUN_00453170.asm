; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00453170(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CKeyFramedModelInstance * Stack[0x8]:4   instance
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 at 00453072
;
; Referenced Globals:
;   double DOUBLE_0057cb6e = 250
;   undefined4 DAT_005ae704
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_set.cpp_FUN_0050ddd0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00453170
        ;   Label: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00453170
    PUSH EDI                            ; 00453171
    PUSH EBP                            ; 00453172
    SUB ESP,0x28                        ; 00453173
    MOV ESI,dword ptr [ESP + 0x38]      ; 00453176
    CMP dword ptr [ESI + 0x110],0x1     ; 0045317a
    JL 0x00453269                       ; 00453181
        ;   XREF to: 00453269 (CONDITIONAL_JUMP)  ; LAB_00453269
    CMP dword ptr [ESI + 0x360],0x0     ; 00453187
    JNZ 0x00453270                      ; 0045318e
        ;   XREF to: 00453270 (CONDITIONAL_JUMP)  ; LAB_00453270
    CMP dword ptr [ESI + 0x100],0x0     ; 00453194
    JLE 0x00453293                      ; 0045319b
        ;   XREF to: 00453293 (CONDITIONAL_JUMP)  ; LAB_00453293
    PUSH 0x1                            ; 004531a1
        ;   Label: LAB_004531a1
    MOV EDI,dword ptr [0x005ae704]      ; 004531a3 | DAT_005ae704
    PUSH EDI                            ; 004531a9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004531aa
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004531af
        ;   Label: LAB_004531af
    PUSH EBX                            ; 004531b2
        ;   Label: LAB_004531b2
    MOV EDX,dword ptr [0x005ae704]      ; 004531b3 | DAT_005ae704
    PUSH EDX                            ; 004531b9 | DAT_01b4d738
    MOV EDI,0xffffffff                  ; 004531ba
    XOR EBP,EBP                         ; 004531bf
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004531c1
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004531c6
    MOV EBX,dword ptr [ESI + 0x244]     ; 004531c9
    MOV dword ptr [ESP + 0x10],EAX      ; 004531cf
    MOV dword ptr [ESP + 0x14],EBP      ; 004531d3
    TEST EBX,EBX                        ; 004531d7
    JLE 0x00453246                      ; 004531d9
        ;   XREF to: 00453246 (CONDITIONAL_JUMP)  ; LAB_00453246
    LEA EAX,[ESI + 0x124]               ; 004531db
    MOV dword ptr [ESP + 0x20],EAX      ; 004531e1
    MOV EAX,dword ptr [ESP + 0x40]      ; 004531e5
    MOV dword ptr [ESP + 0x1c],ESI      ; 004531e9
    MOV dword ptr [ESP + 0x18],EAX      ; 004531ed
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004531f1
        ;   Label: LAB_004531f1
    MOV EAX,dword ptr [EAX + 0x24c]     ; 004531f5
    ADD EAX,EBP                         ; 004531fb
    MOV dword ptr [ESP + 0x24],EAX      ; 004531fd
    CMP dword ptr [ESP + 0x40],0x0      ; 00453201
    JZ 0x004532e3                       ; 00453206
        ;   XREF to: 004532e3 (CONDITIONAL_JUMP)  ; LAB_004532e3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045320c
    CMP dword ptr [EAX],0x0             ; 00453210
    JNZ 0x004532e3                      ; 00453213
        ;   XREF to: 004532e3 (CONDITIONAL_JUMP)  ; LAB_004532e3
    MOV EBP,dword ptr [ESP + 0x24]      ; 00453219
        ;   Label: LAB_00453219
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045321d
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453221
    MOV ECX,dword ptr [ESP + 0x14]      ; 00453225
    MOV EBX,dword ptr [ESI + 0x244]     ; 00453229
    ADD EAX,0x8                         ; 0045322f
    ADD EDX,0x4                         ; 00453232
    INC ECX                             ; 00453235
    MOV dword ptr [ESP + 0x1c],EAX      ; 00453236
    MOV dword ptr [ESP + 0x18],EDX      ; 0045323a
    MOV dword ptr [ESP + 0x14],ECX      ; 0045323e
    CMP ECX,EBX                         ; 00453242
    JL 0x004531f1                       ; 00453244
        ;   XREF to: 004531f1 (CONDITIONAL_JUMP)  ; LAB_004531f1
    PUSH 0x0                            ; 00453246
        ;   Label: LAB_00453246
    MOV ESI,dword ptr [0x005ae704]      ; 00453248 | DAT_005ae704
    PUSH ESI                            ; 0045324e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0045324f
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00453254
    PUSH 0x1                            ; 00453257
    MOV EDI,dword ptr [0x005ae704]      ; 00453259 | DAT_005ae704
    PUSH EDI                            ; 0045325f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 00453260
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00453265
    POP EBX                             ; 00453268
    ADD ESP,0x28                        ; 00453269
        ;   Label: LAB_00453269
    POP EBP                             ; 0045326c
    POP EDI                             ; 0045326d
    POP ESI                             ; 0045326e
    RET                                 ; 0045326f
    PUSH 0x0                            ; 00453270
        ;   Label: LAB_00453270
    MOV EBP,dword ptr [0x005ae704]      ; 00453272 | DAT_005ae704
    PUSH EBP                            ; 00453278 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00453279
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0045327e
    PUSH 0x0                            ; 00453281
    MOV EAX,[0x005ae704]                ; 00453283 | DAT_005ae704
    PUSH EAX                            ; 00453288 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 00453289
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer * this_ptr, int enabled)
    JMP 0x004531af                      ; 0045328e
        ;   XREF to: 004531af (UNCONDITIONAL_JUMP)  ; LAB_004531af
    LEA EDX,[ESI + 0x338]               ; 00453293
        ;   Label: LAB_00453293
    LEA EAX,[ESI + 0x344]               ; 00453299
    FLD float ptr [EAX]                 ; 0045329f
    FSUB float ptr [EDX]                ; 004532a1
    FSTP float ptr [ESP]                ; 004532a3
    FLD float ptr [EAX + 0x4]           ; 004532a6
    FSUB float ptr [EDX + 0x4]          ; 004532a9
    FST float ptr [ESP + 0x4]           ; 004532ac
    FMUL float ptr [ESP + 0x4]          ; 004532b0
    FLD float ptr [ESP]                 ; 004532b4
    FMUL ST0                            ; 004532b7
    FLD float ptr [EAX + 0x8]           ; 004532b9
    FSUB float ptr [EDX + 0x8]          ; 004532bc
    FXCH                                ; 004532bf
    FADDP ST2,ST0                       ; 004532c1
    FST float ptr [ESP + 0x8]           ; 004532c3
    FMUL float ptr [ESP + 0x8]          ; 004532c7
    FADDP                               ; 004532cb
    FSQRT                               ; 004532cd
    FCOMP double ptr [0x0057cb6e]       ; 004532cf | DOUBLE_0057cb6e
    FNSTSW AX                           ; 004532d5
    SAHF                                ; 004532d7
    JA 0x004531a1                       ; 004532d8
        ;   XREF to: 004531a1 (CONDITIONAL_JUMP)  ; LAB_004531a1
    JMP 0x004531b2                      ; 004532de
        ;   XREF to: 004531b2 (UNCONDITIONAL_JUMP)  ; LAB_004531b2
    CMP dword ptr [ESI + 0x120],0x1     ; 004532e3
        ;   Label: LAB_004532e3
    JLE 0x004532f3                      ; 004532ea
        ;   XREF to: 004532f3 (CONDITIONAL_JUMP)  ; LAB_004532f3
    CMP dword ptr [ESP + 0x10],0x0      ; 004532ec
    JZ 0x0045333a                       ; 004532f1
        ;   XREF to: 0045333a (CONDITIONAL_JUMP)  ; LAB_0045333a
    CMP dword ptr [ESP + 0x10],0x0      ; 004532f3
        ;   Label: LAB_004532f3
    JNZ 0x0045330e                      ; 004532f8
        ;   XREF to: 0045330e (CONDITIONAL_JUMP)  ; LAB_0045330e
    MOV ECX,dword ptr [ESP + 0x20]      ; 004532fa
    PUSH ECX                            ; 004532fe
    MOV EBX,dword ptr [0x005ae704]      ; 004532ff | DAT_005ae704
    PUSH EBX                            ; 00453305 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00453306
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0045330b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045330e
        ;   Label: LAB_0045330e
    PUSH EAX                            ; 00453312
    MOV EAX,dword ptr [ESP + 0x28]      ; 00453313
    SUB EAX,EBP                         ; 00453317
    IMUL EBP,EBP,0x48                   ; 00453319
    PUSH EAX                            ; 0045331c
    MOV EAX,dword ptr [ESI + 0x114]     ; 0045331d
    ADD EAX,EBP                         ; 00453323
    PUSH EAX                            ; 00453325
    MOV EDX,dword ptr [0x005be368]      ; 00453326 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 0045332c | g_CDemonSet_01e57284
    CALL core_set.cpp_FUN_0050ddd0      ; 0045332d
        ;   XREF to: 0050ddd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0050ddd0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 00453332
    JMP 0x00453219                      ; 00453335
        ;   XREF to: 00453219 (UNCONDITIONAL_JUMP)  ; LAB_00453219
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045333a
        ;   Label: LAB_0045333a
    MOV EBX,EBP                         ; 0045333e
    CMP EBP,EAX                         ; 00453340
    JGE 0x00453219                      ; 00453342
        ;   XREF to: 00453219 (CONDITIONAL_JUMP)  ; LAB_00453219
    LEA EBP,[EBX*0x4 + 0x0]             ; 00453348
        ;   Label: LAB_00453348
    MOV EAX,dword ptr [ESI + 0x118]     ; 0045334f
    ADD EAX,EBP                         ; 00453355
    MOV EDX,dword ptr [EAX]             ; 00453357
    CMP EDI,EDX                         ; 00453359
    JNZ 0x004533b6                      ; 0045335b
        ;   XREF to: 004533b6 (CONDITIONAL_JUMP)  ; LAB_004533b6
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045335d
        ;   Label: LAB_0045335d
    MOV dword ptr [ESP + 0x28],EBX      ; 00453361
    LEA EAX,[EBX*0x4 + 0x0]             ; 00453365
    SHL ECX,0x2                         ; 0045336c
    ADD EAX,0x4                         ; 0045336f
        ;   Label: LAB_0045336f
    INC EBX                             ; 00453372
    CMP EAX,ECX                         ; 00453373
    JGE 0x00453382                      ; 00453375
        ;   XREF to: 00453382 (CONDITIONAL_JUMP)  ; LAB_00453382
    MOV EDX,dword ptr [ESI + 0x118]     ; 00453377
    CMP EDI,dword ptr [EDX + EAX*0x1]   ; 0045337d
    JZ 0x0045336f                       ; 00453380
        ;   XREF to: 0045336f (CONDITIONAL_JUMP)  ; LAB_0045336f
    MOV EBP,dword ptr [ESP + 0x28]      ; 00453382
        ;   Label: LAB_00453382
    MOV EAX,EBX                         ; 00453386
    SUB EAX,EBP                         ; 00453388
    IMUL EDX,EBP,0x48                   ; 0045338a
    MOV ECX,dword ptr [ESP + 0x44]      ; 0045338d
    PUSH ECX                            ; 00453391
    PUSH EAX                            ; 00453392
    MOV EAX,dword ptr [ESI + 0x114]     ; 00453393
    ADD EAX,EDX                         ; 00453399
    PUSH EAX                            ; 0045339b
    MOV EDX,dword ptr [0x005be368]      ; 0045339c | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 004533a2 | g_CDemonSet_01e57284
    CALL core_set.cpp_FUN_0050ddd0      ; 004533a3
        ;   XREF to: 0050ddd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0050ddd0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 004533a8
    CMP EBX,dword ptr [ESP + 0x24]      ; 004533ab
    JL 0x00453348                       ; 004533af
        ;   XREF to: 00453348 (CONDITIONAL_JUMP)  ; LAB_00453348
    JMP 0x00453219                      ; 004533b1
        ;   XREF to: 00453219 (UNCONDITIONAL_JUMP)  ; LAB_00453219
    IMUL EAX,EDX,0x48                   ; 004533b6
        ;   Label: LAB_004533b6
    ADD EAX,dword ptr [ESP + 0x20]      ; 004533b9
    PUSH EAX                            ; 004533bd
    MOV EAX,[0x005ae704]                ; 004533be | DAT_005ae704
    PUSH EAX                            ; 004533c3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004533c4
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,dword ptr [ESI + 0x118]     ; 004533c9
    ADD ESP,0x8                         ; 004533cf
    MOV EDI,dword ptr [EAX + EBP*0x1]   ; 004533d2
    JMP 0x0045335d                      ; 004533d5
        ;   XREF to: 0045335d (UNCONDITIONAL_JUMP)  ; LAB_0045335d

