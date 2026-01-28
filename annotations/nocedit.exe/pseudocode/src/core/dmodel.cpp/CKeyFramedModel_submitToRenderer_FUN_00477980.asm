; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 (CKeyFramedModel *this_ptr,int frame_index,int render_flags, CKeyFramedModelInstance *instance)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; int              Stack[0xc]:4   render_flags
; CKeyFramedModelInstance * Stack[0x10]:4   instance
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
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 at 00477882
;
; Referenced Globals:
;   double DOUBLE_0061f5bb = 250
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00477980
        ;   Label: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
    PUSH EDI                            ; 00477981
    PUSH EBP                            ; 00477982
    SUB ESP,0x28                        ; 00477983
    MOV ESI,dword ptr [ESP + 0x38]      ; 00477986
    CMP dword ptr [ESI + 0x110],0x1     ; 0047798a
    JL 0x00477a79                       ; 00477991
        ;   XREF to: 00477a79 (CONDITIONAL_JUMP)  ; LAB_00477a79
    CMP dword ptr [ESI + 0x56a0],0x0    ; 00477997
    JNZ 0x00477a80                      ; 0047799e
        ;   XREF to: 00477a80 (CONDITIONAL_JUMP)  ; LAB_00477a80
    CMP dword ptr [ESI + 0x100],0x0     ; 004779a4
    JLE 0x00477aa3                      ; 004779ab
        ;   XREF to: 00477aa3 (CONDITIONAL_JUMP)  ; LAB_00477aa3
    PUSH 0x1                            ; 004779b1
        ;   Label: LAB_004779b1
    MOV EDI,dword ptr [0x006703ec]      ; 004779b3 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004779b9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 004779ba
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004779bf
        ;   Label: LAB_004779bf
    PUSH EBX                            ; 004779c2
        ;   Label: LAB_004779c2
    MOV EDX,dword ptr [0x006703ec]      ; 004779c3 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004779c9 | g_CDemonRendererInstance
    MOV EDI,0xffffffff                  ; 004779ca
    XOR EBP,EBP                         ; 004779cf
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004779d1
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004779d6
    MOV EBX,dword ptr [ESI + 0x5584]    ; 004779d9
    MOV dword ptr [ESP + 0x10],EAX      ; 004779df
    MOV dword ptr [ESP + 0x14],EBP      ; 004779e3
    TEST EBX,EBX                        ; 004779e7
    JLE 0x00477a56                      ; 004779e9
        ;   XREF to: 00477a56 (CONDITIONAL_JUMP)  ; LAB_00477a56
    LEA EAX,[ESI + 0x124]               ; 004779eb
    MOV dword ptr [ESP + 0x20],EAX      ; 004779f1
    MOV EAX,dword ptr [ESP + 0x40]      ; 004779f5
    MOV dword ptr [ESP + 0x1c],ESI      ; 004779f9
    MOV dword ptr [ESP + 0x18],EAX      ; 004779fd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00477a01
        ;   Label: LAB_00477a01
    MOV EAX,dword ptr [EAX + 0x558c]    ; 00477a05
    ADD EAX,EBP                         ; 00477a0b
    MOV dword ptr [ESP + 0x24],EAX      ; 00477a0d
    CMP dword ptr [ESP + 0x40],0x0      ; 00477a11
    JZ 0x00477af3                       ; 00477a16
        ;   XREF to: 00477af3 (CONDITIONAL_JUMP)  ; LAB_00477af3
    MOV EAX,dword ptr [ESP + 0x18]      ; 00477a1c
    CMP dword ptr [EAX],0x0             ; 00477a20
    JNZ 0x00477af3                      ; 00477a23
        ;   XREF to: 00477af3 (CONDITIONAL_JUMP)  ; LAB_00477af3
    MOV EBP,dword ptr [ESP + 0x24]      ; 00477a29
        ;   Label: LAB_00477a29
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00477a2d
    MOV EDX,dword ptr [ESP + 0x18]      ; 00477a31
    MOV ECX,dword ptr [ESP + 0x14]      ; 00477a35
    MOV EBX,dword ptr [ESI + 0x5584]    ; 00477a39
    ADD EAX,0x8                         ; 00477a3f
    ADD EDX,0x4                         ; 00477a42
    INC ECX                             ; 00477a45
    MOV dword ptr [ESP + 0x1c],EAX      ; 00477a46
    MOV dword ptr [ESP + 0x18],EDX      ; 00477a4a
    MOV dword ptr [ESP + 0x14],ECX      ; 00477a4e
    CMP ECX,EBX                         ; 00477a52
    JL 0x00477a01                       ; 00477a54
        ;   XREF to: 00477a01 (CONDITIONAL_JUMP)  ; LAB_00477a01
    PUSH 0x0                            ; 00477a56
        ;   Label: LAB_00477a56
    MOV ESI,dword ptr [0x006703ec]      ; 00477a58 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00477a5e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00477a5f
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00477a64
    PUSH 0x1                            ; 00477a67
    MOV EDI,dword ptr [0x006703ec]      ; 00477a69 | g_CDemonRendererPtr2
    PUSH EDI                            ; 00477a6f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 00477a70
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00477a75
    POP EBX                             ; 00477a78
    ADD ESP,0x28                        ; 00477a79
        ;   Label: LAB_00477a79
    POP EBP                             ; 00477a7c
    POP EDI                             ; 00477a7d
    POP ESI                             ; 00477a7e
    RET                                 ; 00477a7f
    PUSH 0x0                            ; 00477a80
        ;   Label: LAB_00477a80
    MOV EBP,dword ptr [0x006703ec]      ; 00477a82 | g_CDemonRendererPtr2
    PUSH EBP                            ; 00477a88 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00477a89
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00477a8e
    PUSH 0x0                            ; 00477a91
    MOV EAX,[0x006703ec]                ; 00477a93 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00477a98 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 00477a99
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
    JMP 0x004779bf                      ; 00477a9e
        ;   XREF to: 004779bf (UNCONDITIONAL_JUMP)  ; LAB_004779bf
    LEA EDX,[ESI + 0x5678]              ; 00477aa3
        ;   Label: LAB_00477aa3
    LEA EAX,[ESI + 0x5684]              ; 00477aa9
    FLD float ptr [EAX]                 ; 00477aaf
    FSUB float ptr [EDX]                ; 00477ab1
    FSTP float ptr [ESP]                ; 00477ab3
    FLD float ptr [EAX + 0x4]           ; 00477ab6
    FSUB float ptr [EDX + 0x4]          ; 00477ab9
    FST float ptr [ESP + 0x4]           ; 00477abc
    FMUL float ptr [ESP + 0x4]          ; 00477ac0
    FLD float ptr [ESP]                 ; 00477ac4
    FMUL ST0                            ; 00477ac7
    FLD float ptr [EAX + 0x8]           ; 00477ac9
    FSUB float ptr [EDX + 0x8]          ; 00477acc
    FXCH                                ; 00477acf
    FADDP ST2,ST0                       ; 00477ad1
    FST float ptr [ESP + 0x8]           ; 00477ad3
    FMUL float ptr [ESP + 0x8]          ; 00477ad7
    FADDP                               ; 00477adb
    FSQRT                               ; 00477add
    FCOMP double ptr [0x0061f5bb]       ; 00477adf | DOUBLE_0061f5bb
    FNSTSW AX                           ; 00477ae5
    SAHF                                ; 00477ae7
    JA 0x004779b1                       ; 00477ae8
        ;   XREF to: 004779b1 (CONDITIONAL_JUMP)  ; LAB_004779b1
    JMP 0x004779c2                      ; 00477aee
        ;   XREF to: 004779c2 (UNCONDITIONAL_JUMP)  ; LAB_004779c2
    CMP dword ptr [ESI + 0x120],0x1     ; 00477af3
        ;   Label: LAB_00477af3
    JLE 0x00477b03                      ; 00477afa
        ;   XREF to: 00477b03 (CONDITIONAL_JUMP)  ; LAB_00477b03
    CMP dword ptr [ESP + 0x10],0x0      ; 00477afc
    JZ 0x00477b4a                       ; 00477b01
        ;   XREF to: 00477b4a (CONDITIONAL_JUMP)  ; LAB_00477b4a
    CMP dword ptr [ESP + 0x10],0x0      ; 00477b03
        ;   Label: LAB_00477b03
    JNZ 0x00477b1e                      ; 00477b08
        ;   XREF to: 00477b1e (CONDITIONAL_JUMP)  ; LAB_00477b1e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00477b0a
    PUSH ECX                            ; 00477b0e
    MOV EBX,dword ptr [0x006703ec]      ; 00477b0f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 00477b15 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00477b16
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00477b1b
    MOV EAX,dword ptr [ESP + 0x44]      ; 00477b1e
        ;   Label: LAB_00477b1e
    PUSH EAX                            ; 00477b22
    MOV EAX,dword ptr [ESP + 0x28]      ; 00477b23
    SUB EAX,EBP                         ; 00477b27
    IMUL EBP,EBP,0x48                   ; 00477b29
    PUSH EAX                            ; 00477b2c
    MOV EAX,dword ptr [ESI + 0x114]     ; 00477b2d
    ADD EAX,EBP                         ; 00477b33
    PUSH EAX                            ; 00477b35
    MOV EDX,dword ptr [0x006810c8]      ; 00477b36 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00477b3c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 ; 00477b3d
        ;   XREF to: 00570770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 00477b42
    JMP 0x00477a29                      ; 00477b45
        ;   XREF to: 00477a29 (UNCONDITIONAL_JUMP)  ; LAB_00477a29
    MOV EAX,dword ptr [ESP + 0x24]      ; 00477b4a
        ;   Label: LAB_00477b4a
    MOV EBX,EBP                         ; 00477b4e
    CMP EBP,EAX                         ; 00477b50
    JGE 0x00477a29                      ; 00477b52
        ;   XREF to: 00477a29 (CONDITIONAL_JUMP)  ; LAB_00477a29
    LEA EBP,[EBX*0x4 + 0x0]             ; 00477b58
        ;   Label: LAB_00477b58
    MOV EAX,dword ptr [ESI + 0x118]     ; 00477b5f
    ADD EAX,EBP                         ; 00477b65
    MOV EDX,dword ptr [EAX]             ; 00477b67
    CMP EDI,EDX                         ; 00477b69
    JNZ 0x00477bc6                      ; 00477b6b
        ;   XREF to: 00477bc6 (CONDITIONAL_JUMP)  ; LAB_00477bc6
    MOV ECX,dword ptr [ESP + 0x24]      ; 00477b6d
        ;   Label: LAB_00477b6d
    MOV dword ptr [ESP + 0x28],EBX      ; 00477b71
    LEA EAX,[EBX*0x4 + 0x0]             ; 00477b75
    SHL ECX,0x2                         ; 00477b7c
    ADD EAX,0x4                         ; 00477b7f
        ;   Label: LAB_00477b7f
    INC EBX                             ; 00477b82
    CMP EAX,ECX                         ; 00477b83
    JGE 0x00477b92                      ; 00477b85
        ;   XREF to: 00477b92 (CONDITIONAL_JUMP)  ; LAB_00477b92
    MOV EDX,dword ptr [ESI + 0x118]     ; 00477b87
    CMP EDI,dword ptr [EDX + EAX*0x1]   ; 00477b8d
    JZ 0x00477b7f                       ; 00477b90
        ;   XREF to: 00477b7f (CONDITIONAL_JUMP)  ; LAB_00477b7f
    MOV EBP,dword ptr [ESP + 0x28]      ; 00477b92
        ;   Label: LAB_00477b92
    MOV EAX,EBX                         ; 00477b96
    SUB EAX,EBP                         ; 00477b98
    IMUL EDX,EBP,0x48                   ; 00477b9a
    MOV ECX,dword ptr [ESP + 0x44]      ; 00477b9d
    PUSH ECX                            ; 00477ba1
    PUSH EAX                            ; 00477ba2
    MOV EAX,dword ptr [ESI + 0x114]     ; 00477ba3
    ADD EAX,EDX                         ; 00477ba9
    PUSH EAX                            ; 00477bab
    MOV EDX,dword ptr [0x006810c8]      ; 00477bac | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00477bb2 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 ; 00477bb3
        ;   XREF to: 00570770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 00477bb8
    CMP EBX,dword ptr [ESP + 0x24]      ; 00477bbb
    JL 0x00477b58                       ; 00477bbf
        ;   XREF to: 00477b58 (CONDITIONAL_JUMP)  ; LAB_00477b58
    JMP 0x00477a29                      ; 00477bc1
        ;   XREF to: 00477a29 (UNCONDITIONAL_JUMP)  ; LAB_00477a29
    IMUL EAX,EDX,0x48                   ; 00477bc6
        ;   Label: LAB_00477bc6
    ADD EAX,dword ptr [ESP + 0x20]      ; 00477bc9
    PUSH EAX                            ; 00477bcd
    MOV EAX,[0x006703ec]                ; 00477bce | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00477bd3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00477bd4
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,dword ptr [ESI + 0x118]     ; 00477bd9
    ADD ESP,0x8                         ; 00477bdf
    MOV EDI,dword ptr [EAX + EBP*0x1]   ; 00477be2
    JMP 0x00477b6d                      ; 00477be5
        ;   XREF to: 00477b6d (UNCONDITIONAL_JUMP)  ; LAB_00477b6d

