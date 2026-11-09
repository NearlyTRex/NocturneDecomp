; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_0049a150(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0 at 0049d211
;
; Referenced Globals:
;   TerminatedCString s_fr46_03d_raw_005d56a2
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a150
        ;   Label: core_fire.cpp_loadGunFlameAssets_FUN_0049a150
    PUSH ESI                            ; 0049a151
    PUSH EDI                            ; 0049a152
    PUSH EBP                            ; 0049a153
    MOV EDI,0x1c3f3c8                   ; 0049a154
    MOV ESI,0xbe                        ; 0049a159
    XOR EBX,EBX                         ; 0049a15e
    ADD EDI,0x8                         ; 0049a160
    IMUL EAX,EBX,0x18                   ; 0049a163
        ;   Label: LAB_0049a163
    PUSH ESI                            ; 0049a166
    PUSH 0x5d56a2                       ; 0049a167 | = "fr46%03d.raw"
    MOV EBP,0x1c3f3c8                   ; 0049a16c
    PUSH EDI                            ; 0049a171
    ADD EBP,EAX                         ; 0049a172
    CALL crt_unknown.c_FUN_005b7790     ; 0049a174
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0049a179
    PUSH EBP                            ; 0049a17c
    MOV EDX,dword ptr [0x0060b280]      ; 0049a17d | DAT_0060b280
    INC ESI                             ; 0049a183
    PUSH EDX                            ; 0049a184 | DAT_01ba5c50
    ADD EDI,0x18                        ; 0049a185
    INC EBX                             ; 0049a188
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049a189
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049a18e
    CMP EBX,0x14                        ; 0049a191
    JL 0x0049a163                       ; 0049a194
        ;   XREF to: 0049a163 (CONDITIONAL_JUMP)  ; LAB_0049a163
    POP EBP                             ; 0049a196
    POP EDI                             ; 0049a197
    POP ESI                             ; 0049a198
    POP EBX                             ; 0049a199
    RET                                 ; 0049a19a

