; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture
;
; XREF[73]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 at 00414afb
;   core_bodypart.cpp_CBodyPart_setup_FUN_00414f60 at 00414f8c
;   core_chain.cpp_FUN_0042a280 at 0042a31e
;   core_charactr.cpp_FUN_0042d9f0 at 0042da58
;   core_charactr.cpp_FUN_0042f010 at 0042f03b
;   core_charactr.cpp_FUN_0042f280 at 0042f2a2
;   core_curtain.cpp_CCurtain_renderMesh_FUN_00448060 at 00448107
;   core_curtain.cpp_FUN_004464c0 at 004464e9
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c7b8
;   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044c060 at 0044c0d1
;   ... and 63 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005bc6bd
;   TerminatedCString s_CDR_texture_Too_many_cap_005bc6d3
;   undefined4 DAT_01bdd85c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046e5e0
        ;   Label: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
    PUSH EBP                            ; 0046e5e1
    MOV ESI,dword ptr [ESP + 0x10]      ; 0046e5e2
    PUSH ESI                            ; 0046e5e6
    CALL engine_texture.cpp_FUN_0056aa10 ; 0046e5e7
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0046e5ec
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046e5ef
    CMP dword ptr [EAX + 0x1c],0x0      ; 0046e5f3
    JZ 0x0046e670                       ; 0046e5f7
        ;   XREF to: 0046e670 (CONDITIONAL_JUMP)  ; LAB_0046e670
    PUSH EDI                            ; 0046e5f9
    MOV ECX,dword ptr [0x01bdd85c]      ; 0046e5fa | DAT_01bdd85c
    INC ECX                             ; 0046e600
    MOV dword ptr [0x01bdd85c],ECX      ; 0046e601 | DAT_01bdd85c
    CMP ECX,0x64                        ; 0046e607
    JLE 0x0046e62f                      ; 0046e60a
        ;   XREF to: 0046e62f (CONDITIONAL_JUMP)  ; LAB_0046e62f
    MOV EDI,0x5bc6bd                    ; 0046e60c | = "..\\engine\\drender.cpp"
    MOV EBP,0xbf3                       ; 0046e611
    PUSH 0x5bc6d3                       ; 0046e616 | = "CDR::texture - Too many captured text..."
    MOV dword ptr [0x01d71de0],EDI      ; 0046e61b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0046e621 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046e627
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046e62c
    MOV EDX,dword ptr [0x01bdd85c]      ; 0046e62f | DAT_01bdd85c
        ;   Label: LAB_0046e62f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0046e635
    ADD EAX,EDX                         ; 0046e63c
    SHL EAX,0x3                         ; 0046e63e
    MOV EDX,dword ptr [ESI + 0x4]       ; 0046e641
    MOV dword ptr [EAX + 0x1c09784],EDX ; 0046e644
    ADD EAX,0x1c09780                   ; 0046e64a
    ADD ESI,0x8                         ; 0046e64f
    LEA EDI,[EAX + 0x8]                 ; 0046e652
    PUSH EDI                            ; 0046e655
    MOV AL,byte ptr [ESI]               ; 0046e656
        ;   Label: LAB_0046e656
    MOV byte ptr [EDI],AL               ; 0046e658
    CMP AL,0x0                          ; 0046e65a
    JZ 0x0046e66e                       ; 0046e65c
        ;   XREF to: 0046e66e (CONDITIONAL_JUMP)  ; LAB_0046e66e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046e65e
    ADD ESI,0x2                         ; 0046e661
    MOV byte ptr [EDI + 0x1],AL         ; 0046e664
    ADD EDI,0x2                         ; 0046e667
    CMP AL,0x0                          ; 0046e66a
    JNZ 0x0046e656                      ; 0046e66c
        ;   XREF to: 0046e656 (CONDITIONAL_JUMP)  ; LAB_0046e656
    POP EDI                             ; 0046e66e
        ;   Label: LAB_0046e66e
    POP EDI                             ; 0046e66f
    POP EBP                             ; 0046e670
        ;   Label: LAB_0046e670
    POP ESI                             ; 0046e671
    RET                                 ; 0046e672

