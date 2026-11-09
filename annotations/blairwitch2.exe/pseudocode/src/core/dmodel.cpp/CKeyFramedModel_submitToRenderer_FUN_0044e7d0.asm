; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)
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
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0 at 0044e6d2
;
; Referenced Globals:
;   undefined4 DAT_005cf7a7
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_FUN_00533f40
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e7d0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0
    PUSH ESI                            ; 0044e7d1
    PUSH EDI                            ; 0044e7d2
    PUSH EBP                            ; 0044e7d3
    MOV EBP,ESP                         ; 0044e7d4
    SUB ESP,0x34                        ; 0044e7d6
    AND ESP,0xfffffff8                  ; 0044e7d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e7dc
    CMP dword ptr [EAX + 0x110],0x1     ; 0044e7df
    JL 0x0044e8d2                       ; 0044e7e6
        ;   XREF to: 0044e8d2 (CONDITIONAL_JUMP)  ; LAB_0044e8d2
    CMP dword ptr [EAX + 0x360],0x0     ; 0044e7ec
    JNZ 0x0044e8d9                      ; 0044e7f3
        ;   XREF to: 0044e8d9 (CONDITIONAL_JUMP)  ; LAB_0044e8d9
    CMP dword ptr [EAX + 0x100],0x0     ; 0044e7f9
    JLE 0x0044e8fc                      ; 0044e800
        ;   XREF to: 0044e8fc (CONDITIONAL_JUMP)  ; LAB_0044e8fc
    PUSH 0x1                            ; 0044e806
        ;   Label: LAB_0044e806
    MOV ESI,dword ptr [0x0060b280]      ; 0044e808 | DAT_0060b280
    PUSH ESI                            ; 0044e80e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0044e80f
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0044e814
        ;   Label: LAB_0044e814
    MOV EDX,dword ptr [0x0060b280]      ; 0044e817 | DAT_0060b280
        ;   Label: LAB_0044e817
    PUSH EDX                            ; 0044e81d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0044e81e
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0044e823
    MOV dword ptr [ESP + 0x18],EAX      ; 0044e826
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e82a
    MOV ESI,0xffffffff                  ; 0044e82d
    XOR EDI,EDI                         ; 0044e832
    MOV EBX,dword ptr [EAX + 0x244]     ; 0044e834
    MOV dword ptr [ESP + 0x1c],EDI      ; 0044e83a
    TEST EBX,EBX                        ; 0044e83e
    JLE 0x0044e8b0                      ; 0044e840
        ;   XREF to: 0044e8b0 (CONDITIONAL_JUMP)  ; LAB_0044e8b0
    ADD EAX,0x124                       ; 0044e842
    MOV dword ptr [ESP + 0x28],EAX      ; 0044e847
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e84b
    MOV dword ptr [ESP + 0x20],EAX      ; 0044e84e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044e852
    MOV dword ptr [ESP + 0x24],EAX      ; 0044e855
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044e859
        ;   Label: LAB_0044e859
    MOV EAX,dword ptr [EAX + 0x24c]     ; 0044e85d
    ADD EAX,EDI                         ; 0044e863
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044e865
    CMP dword ptr [EBP + 0x18],0x0      ; 0044e869
    JZ 0x0044e96a                       ; 0044e86d
        ;   XREF to: 0044e96a (CONDITIONAL_JUMP)  ; LAB_0044e96a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044e873
    CMP dword ptr [EAX],0x0             ; 0044e877
    JNZ 0x0044e96a                      ; 0044e87a
        ;   XREF to: 0044e96a (CONDITIONAL_JUMP)  ; LAB_0044e96a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0044e880
        ;   Label: LAB_0044e880
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044e884
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044e888
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0044e88c
    ADD EDX,0x4                         ; 0044e890
    ADD EAX,0x8                         ; 0044e893
    MOV dword ptr [ESP + 0x24],EDX      ; 0044e896
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e89a
    INC ECX                             ; 0044e89d
    MOV dword ptr [ESP + 0x20],EAX      ; 0044e89e
    MOV EBX,dword ptr [EDX + 0x244]     ; 0044e8a2
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044e8a8
    CMP ECX,EBX                         ; 0044e8ac
    JL 0x0044e859                       ; 0044e8ae
        ;   XREF to: 0044e859 (CONDITIONAL_JUMP)  ; LAB_0044e859
    PUSH 0x0                            ; 0044e8b0
        ;   Label: LAB_0044e8b0
    MOV ESI,dword ptr [0x0060b280]      ; 0044e8b2 | DAT_0060b280
    PUSH ESI                            ; 0044e8b8 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0044e8b9
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0044e8be
    PUSH 0x1                            ; 0044e8c1
    MOV EDI,dword ptr [0x0060b280]      ; 0044e8c3 | DAT_0060b280
    PUSH EDI                            ; 0044e8c9 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 0044e8ca
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0044e8cf
    MOV ESP,EBP                         ; 0044e8d2
        ;   Label: LAB_0044e8d2
    POP EBP                             ; 0044e8d4
    POP EDI                             ; 0044e8d5
    POP ESI                             ; 0044e8d6
    POP EBX                             ; 0044e8d7
    RET                                 ; 0044e8d8
    PUSH 0x0                            ; 0044e8d9
        ;   Label: LAB_0044e8d9
    MOV EDI,dword ptr [0x0060b280]      ; 0044e8db | DAT_0060b280
    PUSH EDI                            ; 0044e8e1 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0044e8e2
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0044e8e7
    PUSH 0x0                            ; 0044e8ea
    MOV EAX,[0x0060b280]                ; 0044e8ec | DAT_0060b280
    PUSH EAX                            ; 0044e8f1 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 0044e8f2
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    JMP 0x0044e814                      ; 0044e8f7
        ;   XREF to: 0044e814 (UNCONDITIONAL_JUMP)  ; LAB_0044e814
    FLD float ptr [EAX + 0x344]         ; 0044e8fc
        ;   Label: LAB_0044e8fc
    FLD float ptr [EAX + 0x348]         ; 0044e902
    FLD float ptr [EAX + 0x34c]         ; 0044e908
    MOV EDI,ESP                         ; 0044e90e
    LEA ESI,[ESP + 0xc]                 ; 0044e910
    FXCH ST2                            ; 0044e914
    FSUB float ptr [EAX + 0x338]        ; 0044e916
    FXCH                                ; 0044e91c
    FSUB float ptr [EAX + 0x33c]        ; 0044e91e
    FXCH ST2                            ; 0044e924
    FSUB float ptr [EAX + 0x340]        ; 0044e926
    FXCH                                ; 0044e92c
    FSTP float ptr [ESP + 0xc]          ; 0044e92e
    FXCH                                ; 0044e932
    FSTP float ptr [ESP + 0x10]         ; 0044e934
    FSTP float ptr [ESP + 0x14]         ; 0044e938
    MOVSD ES:EDI,ESI                    ; 0044e93c
    MOVSD ES:EDI,ESI                    ; 0044e93d
    MOVSD ES:EDI,ESI                    ; 0044e93e
    FLD float ptr [ESP + 0x4]           ; 0044e93f
    FMUL ST0                            ; 0044e943
    FLD float ptr [ESP]                 ; 0044e945
    FMUL ST0                            ; 0044e948
    FADDP                               ; 0044e94a
    FLD float ptr [ESP + 0x8]           ; 0044e94c
    FMUL ST0                            ; 0044e950
    FADDP                               ; 0044e952
    FSQRT                               ; 0044e954
    FCOMP double ptr [0x005cf7a7]       ; 0044e956 | DAT_005cf7a7
    FNSTSW AX                           ; 0044e95c
    SAHF                                ; 0044e95e
    JA 0x0044e806                       ; 0044e95f
        ;   XREF to: 0044e806 (CONDITIONAL_JUMP)  ; LAB_0044e806
    JMP 0x0044e817                      ; 0044e965
        ;   XREF to: 0044e817 (UNCONDITIONAL_JUMP)  ; LAB_0044e817
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e96a
        ;   Label: LAB_0044e96a
    CMP dword ptr [EAX + 0x120],0x1     ; 0044e96d
    JLE 0x0044e97d                      ; 0044e974
        ;   XREF to: 0044e97d (CONDITIONAL_JUMP)  ; LAB_0044e97d
    CMP dword ptr [ESP + 0x18],0x0      ; 0044e976
    JZ 0x0044e9c6                       ; 0044e97b
        ;   XREF to: 0044e9c6 (CONDITIONAL_JUMP)  ; LAB_0044e9c6
    CMP dword ptr [ESP + 0x18],0x0      ; 0044e97d
        ;   Label: LAB_0044e97d
    JNZ 0x0044e998                      ; 0044e982
        ;   XREF to: 0044e998 (CONDITIONAL_JUMP)  ; LAB_0044e998
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044e984
    PUSH ECX                            ; 0044e988
    MOV EBX,dword ptr [0x0060b280]      ; 0044e989 | DAT_0060b280
    PUSH EBX                            ; 0044e98f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0044e990
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044e995
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044e998
        ;   Label: LAB_0044e998
    PUSH EAX                            ; 0044e99b
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044e99c
    SUB EAX,EDI                         ; 0044e9a0
    IMUL EDI,EDI,0x48                   ; 0044e9a2
    PUSH EAX                            ; 0044e9a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e9a6
    MOV EAX,dword ptr [EAX + 0x114]     ; 0044e9a9
    ADD EAX,EDI                         ; 0044e9af
    PUSH EAX                            ; 0044e9b1
    MOV EDX,dword ptr [0x0061b5a8]      ; 0044e9b2 | g_CDemonSetPtr
    PUSH EDX                            ; 0044e9b8 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00533f40      ; 0044e9b9
        ;   XREF to: 00533f40 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00533f40(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0044e9be
    JMP 0x0044e880                      ; 0044e9c1
        ;   XREF to: 0044e880 (UNCONDITIONAL_JUMP)  ; LAB_0044e880
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044e9c6
        ;   Label: LAB_0044e9c6
    MOV EBX,EDI                         ; 0044e9ca
    CMP EDI,EAX                         ; 0044e9cc
    JGE 0x0044e880                      ; 0044e9ce
        ;   XREF to: 0044e880 (CONDITIONAL_JUMP)  ; LAB_0044e880
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e9d4
        ;   Label: LAB_0044e9d4
    LEA EDI,[EBX*0x4 + 0x0]             ; 0044e9d7
    MOV EAX,dword ptr [EAX + 0x118]     ; 0044e9de
    ADD EAX,EDI                         ; 0044e9e4
    MOV EDX,dword ptr [EAX]             ; 0044e9e6
    CMP ESI,EDX                         ; 0044e9e8
    JNZ 0x0044ea4a                      ; 0044e9ea
        ;   XREF to: 0044ea4a (CONDITIONAL_JUMP)  ; LAB_0044ea4a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0044e9ec
        ;   Label: LAB_0044e9ec
    MOV dword ptr [ESP + 0x30],EBX      ; 0044e9f0
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044e9f4
    SHL ECX,0x2                         ; 0044e9fb
    ADD EAX,0x4                         ; 0044e9fe
        ;   Label: LAB_0044e9fe
    INC EBX                             ; 0044ea01
    CMP EAX,ECX                         ; 0044ea02
    JGE 0x0044ea14                      ; 0044ea04
        ;   XREF to: 0044ea14 (CONDITIONAL_JUMP)  ; LAB_0044ea14
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044ea06
    MOV EDX,dword ptr [EDX + 0x118]     ; 0044ea09
    CMP ESI,dword ptr [EDX + EAX*0x1]   ; 0044ea0f
    JZ 0x0044e9fe                       ; 0044ea12
        ;   XREF to: 0044e9fe (CONDITIONAL_JUMP)  ; LAB_0044e9fe
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044ea14
        ;   Label: LAB_0044ea14
    MOV EAX,EBX                         ; 0044ea18
    SUB EAX,EDI                         ; 0044ea1a
    IMUL EDX,EDI,0x48                   ; 0044ea1c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0044ea1f
    PUSH ECX                            ; 0044ea22
    PUSH EAX                            ; 0044ea23
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ea24
    MOV EAX,dword ptr [EAX + 0x114]     ; 0044ea27
    ADD EAX,EDX                         ; 0044ea2d
    PUSH EAX                            ; 0044ea2f
    MOV EDX,dword ptr [0x0061b5a8]      ; 0044ea30 | g_CDemonSetPtr
    PUSH EDX                            ; 0044ea36 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00533f40      ; 0044ea37
        ;   XREF to: 00533f40 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00533f40(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0044ea3c
    CMP EBX,dword ptr [ESP + 0x2c]      ; 0044ea3f
    JL 0x0044e9d4                       ; 0044ea43
        ;   XREF to: 0044e9d4 (CONDITIONAL_JUMP)  ; LAB_0044e9d4
    JMP 0x0044e880                      ; 0044ea45
        ;   XREF to: 0044e880 (UNCONDITIONAL_JUMP)  ; LAB_0044e880
    IMUL EAX,EDX,0x48                   ; 0044ea4a
        ;   Label: LAB_0044ea4a
    ADD EAX,dword ptr [ESP + 0x28]      ; 0044ea4d
    PUSH EAX                            ; 0044ea51
    MOV EAX,[0x0060b280]                ; 0044ea52 | DAT_0060b280
    PUSH EAX                            ; 0044ea57 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0044ea58
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044ea5d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ea60
    MOV EAX,dword ptr [EAX + 0x118]     ; 0044ea63
    MOV ESI,dword ptr [EDI + EAX*0x1]   ; 0044ea69
    JMP 0x0044e9ec                      ; 0044ea6c
        ;   XREF to: 0044e9ec (UNCONDITIONAL_JUMP)  ; LAB_0044e9ec

