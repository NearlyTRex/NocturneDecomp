; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00461050(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CKeyFramedModelInstance * Stack[0x8]:4   instance
; int              Stack[0xc]:4   render_flags
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
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20 at 00460f52
;
; Referenced Globals:
;   undefined4 DAT_005bb7dc
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_FUN_0053ab80
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461050
        ;   Label: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00461050
    PUSH ESI                            ; 00461051
    PUSH EDI                            ; 00461052
    PUSH EBP                            ; 00461053
    MOV EBP,ESP                         ; 00461054
    SUB ESP,0x34                        ; 00461056
    AND ESP,0xfffffff8                  ; 00461059
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046105c
    CMP dword ptr [EAX + 0x110],0x1     ; 0046105f
    JL 0x00461152                       ; 00461066
        ;   XREF to: 00461152 (CONDITIONAL_JUMP)  ; LAB_00461152
    CMP dword ptr [EAX + 0x360],0x0     ; 0046106c
    JNZ 0x00461159                      ; 00461073
        ;   XREF to: 00461159 (CONDITIONAL_JUMP)  ; LAB_00461159
    CMP dword ptr [EAX + 0x100],0x0     ; 00461079
    JLE 0x0046117c                      ; 00461080
        ;   XREF to: 0046117c (CONDITIONAL_JUMP)  ; LAB_0046117c
    PUSH 0x1                            ; 00461086
        ;   Label: LAB_00461086
    MOV ESI,dword ptr [0x005f2afc]      ; 00461088 | DAT_005f2afc
    PUSH ESI                            ; 0046108e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0046108f
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00461094
        ;   Label: LAB_00461094
    MOV EDX,dword ptr [0x005f2afc]      ; 00461097 | DAT_005f2afc
        ;   Label: LAB_00461097
    PUSH EDX                            ; 0046109d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0046109e
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004610a3
    MOV dword ptr [ESP + 0x18],EAX      ; 004610a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004610aa
    MOV ESI,0xffffffff                  ; 004610ad
    XOR EDI,EDI                         ; 004610b2
    MOV EBX,dword ptr [EAX + 0x244]     ; 004610b4
    MOV dword ptr [ESP + 0x1c],EDI      ; 004610ba
    TEST EBX,EBX                        ; 004610be
    JLE 0x00461130                      ; 004610c0
        ;   XREF to: 00461130 (CONDITIONAL_JUMP)  ; LAB_00461130
    ADD EAX,0x124                       ; 004610c2
    MOV dword ptr [ESP + 0x28],EAX      ; 004610c7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004610cb
    MOV dword ptr [ESP + 0x20],EAX      ; 004610ce
    MOV EAX,dword ptr [EBP + 0x18]      ; 004610d2
    MOV dword ptr [ESP + 0x24],EAX      ; 004610d5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004610d9
        ;   Label: LAB_004610d9
    MOV EAX,dword ptr [EAX + 0x24c]     ; 004610dd
    ADD EAX,EDI                         ; 004610e3
    MOV dword ptr [ESP + 0x2c],EAX      ; 004610e5
    CMP dword ptr [EBP + 0x18],0x0      ; 004610e9
    JZ 0x004611ea                       ; 004610ed
        ;   XREF to: 004611ea (CONDITIONAL_JUMP)  ; LAB_004611ea
    MOV EAX,dword ptr [ESP + 0x24]      ; 004610f3
    CMP dword ptr [EAX],0x0             ; 004610f7
    JNZ 0x004611ea                      ; 004610fa
        ;   XREF to: 004611ea (CONDITIONAL_JUMP)  ; LAB_004611ea
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00461100
        ;   Label: LAB_00461100
    MOV EAX,dword ptr [ESP + 0x20]      ; 00461104
    MOV EDX,dword ptr [ESP + 0x24]      ; 00461108
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046110c
    ADD EDX,0x4                         ; 00461110
    ADD EAX,0x8                         ; 00461113
    MOV dword ptr [ESP + 0x24],EDX      ; 00461116
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046111a
    INC ECX                             ; 0046111d
    MOV dword ptr [ESP + 0x20],EAX      ; 0046111e
    MOV EBX,dword ptr [EDX + 0x244]     ; 00461122
    MOV dword ptr [ESP + 0x1c],ECX      ; 00461128
    CMP ECX,EBX                         ; 0046112c
    JL 0x004610d9                       ; 0046112e
        ;   XREF to: 004610d9 (CONDITIONAL_JUMP)  ; LAB_004610d9
    PUSH 0x0                            ; 00461130
        ;   Label: LAB_00461130
    MOV ESI,dword ptr [0x005f2afc]      ; 00461132 | DAT_005f2afc
    PUSH ESI                            ; 00461138 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 00461139
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0046113e
    PUSH 0x1                            ; 00461141
    MOV EDI,dword ptr [0x005f2afc]      ; 00461143 | DAT_005f2afc
    PUSH EDI                            ; 00461149 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0046114a
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0046114f
    MOV ESP,EBP                         ; 00461152
        ;   Label: LAB_00461152
    POP EBP                             ; 00461154
    POP EDI                             ; 00461155
    POP ESI                             ; 00461156
    POP EBX                             ; 00461157
    RET                                 ; 00461158
    PUSH 0x0                            ; 00461159
        ;   Label: LAB_00461159
    MOV EDI,dword ptr [0x005f2afc]      ; 0046115b | DAT_005f2afc
    PUSH EDI                            ; 00461161 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 00461162
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00461167
    PUSH 0x0                            ; 0046116a
    MOV EAX,[0x005f2afc]                ; 0046116c | DAT_005f2afc
    PUSH EAX                            ; 00461171 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450 ; 00461172
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(CDemonRenderer * this_ptr, int enabled)
    JMP 0x00461094                      ; 00461177
        ;   XREF to: 00461094 (UNCONDITIONAL_JUMP)  ; LAB_00461094
    FLD float ptr [EAX + 0x344]         ; 0046117c
        ;   Label: LAB_0046117c
    FLD float ptr [EAX + 0x348]         ; 00461182
    FLD float ptr [EAX + 0x34c]         ; 00461188
    MOV EDI,ESP                         ; 0046118e
    LEA ESI,[ESP + 0xc]                 ; 00461190
    FXCH ST2                            ; 00461194
    FSUB float ptr [EAX + 0x338]        ; 00461196
    FXCH                                ; 0046119c
    FSUB float ptr [EAX + 0x33c]        ; 0046119e
    FXCH ST2                            ; 004611a4
    FSUB float ptr [EAX + 0x340]        ; 004611a6
    FXCH                                ; 004611ac
    FSTP float ptr [ESP + 0xc]          ; 004611ae
    FXCH                                ; 004611b2
    FSTP float ptr [ESP + 0x10]         ; 004611b4
    FSTP float ptr [ESP + 0x14]         ; 004611b8
    MOVSD ES:EDI,ESI                    ; 004611bc
    MOVSD ES:EDI,ESI                    ; 004611bd
    MOVSD ES:EDI,ESI                    ; 004611be
    FLD float ptr [ESP + 0x4]           ; 004611bf
    FMUL ST0                            ; 004611c3
    FLD float ptr [ESP]                 ; 004611c5
    FMUL ST0                            ; 004611c8
    FADDP                               ; 004611ca
    FLD float ptr [ESP + 0x8]           ; 004611cc
    FMUL ST0                            ; 004611d0
    FADDP                               ; 004611d2
    FSQRT                               ; 004611d4
    FCOMP double ptr [0x005bb7dc]       ; 004611d6 | DAT_005bb7dc
    FNSTSW AX                           ; 004611dc
    SAHF                                ; 004611de
    JA 0x00461086                       ; 004611df
        ;   XREF to: 00461086 (CONDITIONAL_JUMP)  ; LAB_00461086
    JMP 0x00461097                      ; 004611e5
        ;   XREF to: 00461097 (UNCONDITIONAL_JUMP)  ; LAB_00461097
    MOV EAX,dword ptr [EBP + 0x14]      ; 004611ea
        ;   Label: LAB_004611ea
    CMP dword ptr [EAX + 0x120],0x1     ; 004611ed
    JLE 0x004611fd                      ; 004611f4
        ;   XREF to: 004611fd (CONDITIONAL_JUMP)  ; LAB_004611fd
    CMP dword ptr [ESP + 0x18],0x0      ; 004611f6
    JZ 0x00461246                       ; 004611fb
        ;   XREF to: 00461246 (CONDITIONAL_JUMP)  ; LAB_00461246
    CMP dword ptr [ESP + 0x18],0x0      ; 004611fd
        ;   Label: LAB_004611fd
    JNZ 0x00461218                      ; 00461202
        ;   XREF to: 00461218 (CONDITIONAL_JUMP)  ; LAB_00461218
    MOV ECX,dword ptr [ESP + 0x28]      ; 00461204
    PUSH ECX                            ; 00461208
    MOV EBX,dword ptr [0x005f2afc]      ; 00461209 | DAT_005f2afc
    PUSH EBX                            ; 0046120f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00461210
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00461215
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00461218
        ;   Label: LAB_00461218
    PUSH EAX                            ; 0046121b
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046121c
    SUB EAX,EDI                         ; 00461220
    IMUL EDI,EDI,0x48                   ; 00461222
    PUSH EAX                            ; 00461225
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461226
    MOV EAX,dword ptr [EAX + 0x114]     ; 00461229
    ADD EAX,EDI                         ; 0046122f
    PUSH EAX                            ; 00461231
    MOV EDX,dword ptr [0x00603b28]      ; 00461232 | g_CDemonSetPtr
    PUSH EDX                            ; 00461238 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_0053ab80      ; 00461239
        ;   XREF to: 0053ab80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053ab80(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0046123e
    JMP 0x00461100                      ; 00461241
        ;   XREF to: 00461100 (UNCONDITIONAL_JUMP)  ; LAB_00461100
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00461246
        ;   Label: LAB_00461246
    MOV EBX,EDI                         ; 0046124a
    CMP EDI,EAX                         ; 0046124c
    JGE 0x00461100                      ; 0046124e
        ;   XREF to: 00461100 (CONDITIONAL_JUMP)  ; LAB_00461100
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461254
        ;   Label: LAB_00461254
    LEA EDI,[EBX*0x4 + 0x0]             ; 00461257
    MOV EAX,dword ptr [EAX + 0x118]     ; 0046125e
    ADD EAX,EDI                         ; 00461264
    MOV EDX,dword ptr [EAX]             ; 00461266
    CMP ESI,EDX                         ; 00461268
    JNZ 0x004612ca                      ; 0046126a
        ;   XREF to: 004612ca (CONDITIONAL_JUMP)  ; LAB_004612ca
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0046126c
        ;   Label: LAB_0046126c
    MOV dword ptr [ESP + 0x30],EBX      ; 00461270
    LEA EAX,[EBX*0x4 + 0x0]             ; 00461274
    SHL ECX,0x2                         ; 0046127b
    ADD EAX,0x4                         ; 0046127e
        ;   Label: LAB_0046127e
    INC EBX                             ; 00461281
    CMP EAX,ECX                         ; 00461282
    JGE 0x00461294                      ; 00461284
        ;   XREF to: 00461294 (CONDITIONAL_JUMP)  ; LAB_00461294
    MOV EDX,dword ptr [EBP + 0x14]      ; 00461286
    MOV EDX,dword ptr [EDX + 0x118]     ; 00461289
    CMP ESI,dword ptr [EDX + EAX*0x1]   ; 0046128f
    JZ 0x0046127e                       ; 00461292
        ;   XREF to: 0046127e (CONDITIONAL_JUMP)  ; LAB_0046127e
    MOV EDI,dword ptr [ESP + 0x30]      ; 00461294
        ;   Label: LAB_00461294
    MOV EAX,EBX                         ; 00461298
    SUB EAX,EDI                         ; 0046129a
    IMUL EDX,EDI,0x48                   ; 0046129c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0046129f
    PUSH ECX                            ; 004612a2
    PUSH EAX                            ; 004612a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004612a4
    MOV EAX,dword ptr [EAX + 0x114]     ; 004612a7
    ADD EAX,EDX                         ; 004612ad
    PUSH EAX                            ; 004612af
    MOV EDX,dword ptr [0x00603b28]      ; 004612b0 | g_CDemonSetPtr
    PUSH EDX                            ; 004612b6 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_0053ab80      ; 004612b7
        ;   XREF to: 0053ab80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053ab80(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 004612bc
    CMP EBX,dword ptr [ESP + 0x2c]      ; 004612bf
    JL 0x00461254                       ; 004612c3
        ;   XREF to: 00461254 (CONDITIONAL_JUMP)  ; LAB_00461254
    JMP 0x00461100                      ; 004612c5
        ;   XREF to: 00461100 (UNCONDITIONAL_JUMP)  ; LAB_00461100
    IMUL EAX,EDX,0x48                   ; 004612ca
        ;   Label: LAB_004612ca
    ADD EAX,dword ptr [ESP + 0x28]      ; 004612cd
    PUSH EAX                            ; 004612d1
    MOV EAX,[0x005f2afc]                ; 004612d2 | DAT_005f2afc
    PUSH EAX                            ; 004612d7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004612d8
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004612dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004612e0
    MOV EAX,dword ptr [EAX + 0x118]     ; 004612e3
    MOV ESI,dword ptr [EDI + EAX*0x1]   ; 004612e9
    JMP 0x0046126c                      ; 004612ec
        ;   XREF to: 0046126c (UNCONDITIONAL_JUMP)  ; LAB_0046126c

