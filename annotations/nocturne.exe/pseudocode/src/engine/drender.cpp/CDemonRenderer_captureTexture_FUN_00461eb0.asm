; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(int param_1,int param_2)
;
;
; XREF[67]:
;   FUN_0042c4c0 at 0042c54b
;   FUN_0043dad0 at 0043daf6
;   FUN_0043f330 at 0043f3c5
;   FUN_00489990 at 00489baa
;   FUN_0048d5d0 at 0048da49
;   FUN_004ac440 at 004ac4c5
;   FUN_004ac600 at 004ac67c
;   FUN_004ac7c0 at 004ac83b
;   FUN_004ac9b0 at 004aca27
;   FUN_004ada20 at 004adc6f
;   ... and 57 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0057dd98
;   TerminatedCString s_CDR_texture_Too_many_cap_0057ddae
;   undefined4 DAT_01b4d7b0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00461eb0
        ;   Label: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
    PUSH EBP                            ; 00461eb1
    MOV ESI,dword ptr [ESP + 0x10]      ; 00461eb2
    PUSH ESI                            ; 00461eb6
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 00461eb7
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_ensureTextureLoaded_FUN_00545920()
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
    MOV dword ptr [0x01cc4800],EDI      ; 00461eeb | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00461ef1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00461ef7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
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

