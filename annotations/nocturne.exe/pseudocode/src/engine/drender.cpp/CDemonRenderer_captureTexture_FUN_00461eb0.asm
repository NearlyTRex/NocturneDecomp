; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture
;
; XREF[71]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 at 004160cb
;   core_bodypart.cpp_CBodyPart_setup_FUN_00416500 at 0041652c
;   core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0 at 0042c54b
;   core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80 at 00426eab
;   core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0 at 00425d28
;   core_curtain.cpp_CCurtain_setup_FUN_0043dad0 at 0043daf6
;   core_curtain.cpp_FUN_0043f330 at 0043f3c5
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250 at 004438d8
;   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180 at 004431f1
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430 at 0044f8e5
;   ... and 61 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0057dd98
;   TerminatedCString s_CDR_texture_Too_many_cap_0057ddae
;   undefined4 DAT_01b4d7b0
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00461eb0
        ;   Label: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
    PUSH EBP                            ; 00461eb1
    MOV ESI,dword ptr [ESP + 0x10]      ; 00461eb2
    PUSH ESI                            ; 00461eb6
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 00461eb7
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 00461ebc
    MOV EAX,dword ptr [ESP + 0xc]       ; 00461ebf
    CMP dword ptr [EAX + 0x1c],0x0      ; 00461ec3
    JZ 0x00461f40                       ; 00461ec7
        ;   XREF to: 00461f40 (CONDITIONAL_JUMP)  ; LAB_00461f40
    PUSH EDI                            ; 00461ec9
    MOV ECX,dword ptr [0x01b4d7b0]      ; 00461eca | DAT_01b4d7b0
    INC ECX                             ; 00461ed0
    MOV dword ptr [0x01b4d7b0],ECX      ; 00461ed1 | DAT_01b4d7b0
    CMP ECX,0x64                        ; 00461ed7
    JLE 0x00461eff                      ; 00461eda
        ;   XREF to: 00461eff (CONDITIONAL_JUMP)  ; LAB_00461eff
    MOV EDI,0x57dd98                    ; 00461edc | = "..\\engine\\drender.cpp"
    MOV EBP,0xafc                       ; 00461ee1
    PUSH 0x57ddae                       ; 00461ee6 | = "CDR::texture - Too many captured text..."
    MOV dword ptr [0x01cc4800],EDI      ; 00461eeb | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00461ef1 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00461ef7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00461efc
    MOV EDX,dword ptr [0x01b4d7b0]      ; 00461eff | DAT_01b4d7b0
        ;   Label: LAB_00461eff
    LEA EAX,[EDX*0x8 + 0x0]             ; 00461f05
    ADD EAX,EDX                         ; 00461f0c
    SHL EAX,0x3                         ; 00461f0e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00461f11
    MOV dword ptr [EAX + 0x1b796d8],EDX ; 00461f14
    ADD EAX,0x1b796d4                   ; 00461f1a
    ADD ESI,0x8                         ; 00461f1f
    LEA EDI,[EAX + 0x8]                 ; 00461f22
    PUSH EDI                            ; 00461f25
    MOV AL,byte ptr [ESI]               ; 00461f26
        ;   Label: LAB_00461f26
    MOV byte ptr [EDI],AL               ; 00461f28
    CMP AL,0x0                          ; 00461f2a
    JZ 0x00461f3e                       ; 00461f2c
        ;   XREF to: 00461f3e (CONDITIONAL_JUMP)  ; LAB_00461f3e
    MOV AL,byte ptr [ESI + 0x1]         ; 00461f2e
    ADD ESI,0x2                         ; 00461f31
    MOV byte ptr [EDI + 0x1],AL         ; 00461f34
    ADD EDI,0x2                         ; 00461f37
    CMP AL,0x0                          ; 00461f3a
    JNZ 0x00461f26                      ; 00461f3c
        ;   XREF to: 00461f26 (CONDITIONAL_JUMP)  ; LAB_00461f26
    POP EDI                             ; 00461f3e
        ;   Label: LAB_00461f3e
    POP EDI                             ; 00461f3f
    POP EBP                             ; 00461f40
        ;   Label: LAB_00461f40
    POP ESI                             ; 00461f41
    RET                                 ; 00461f42

