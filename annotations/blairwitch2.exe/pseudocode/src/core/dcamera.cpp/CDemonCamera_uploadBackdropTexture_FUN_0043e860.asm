; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0043e860(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01c35210
;   undefined4 DAT_01c37770
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046cab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e860
        ;   Label: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0043e860
    PUSH ESI                            ; 0043e861
    PUSH EDI                            ; 0043e862
    PUSH EBP                            ; 0043e863
    XOR EDI,EDI                         ; 0043e864
    XOR EBP,EBP                         ; 0043e866
    MOV EDX,EDI                         ; 0043e868
        ;   Label: LAB_0043e868
    MOV EAX,EDI                         ; 0043e86a
    SAR EDX,0x1f                        ; 0043e86c
    SHL EDX,0x8                         ; 0043e86f
    SBB EAX,EDX                         ; 0043e872
    SAR EAX,0x8                         ; 0043e874
    MOV EBX,EBP                         ; 0043e877
    XOR ECX,ECX                         ; 0043e879
    IMUL ESI,EAX,0x280                  ; 0043e87b
    MOV EDX,ECX                         ; 0043e881
        ;   Label: LAB_0043e881
    MOV EAX,ECX                         ; 0043e883
    SAR EDX,0x1f                        ; 0043e885
    SHL EDX,0x8                         ; 0043e888
    SBB EAX,EDX                         ; 0043e88b
    SAR EAX,0x8                         ; 0043e88d
    INC EBX                             ; 0043e890
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1468550] ; 0043e891
    ADD ECX,0x280                       ; 0043e898
    MOV byte ptr [EBX + 0x14b354f],AL   ; 0043e89e
    CMP ECX,0x28000                     ; 0043e8a4
    JNZ 0x0043e881                      ; 0043e8aa
        ;   XREF to: 0043e881 (CONDITIONAL_JUMP)  ; LAB_0043e881
    ADD EBP,0x100                       ; 0043e8ac
    ADD EDI,0x1e0                       ; 0043e8b2
    CMP EBP,0x10000                     ; 0043e8b8
    JNZ 0x0043e868                      ; 0043e8be
        ;   XREF to: 0043e868 (CONDITIONAL_JUMP)  ; LAB_0043e868
    PUSH 0x609ff0                       ; 0043e8c0
    MOV EDX,dword ptr [0x0060b280]      ; 0043e8c5 | DAT_0060b280
    PUSH EDX                            ; 0043e8cb
    MOV ESI,0x14b3550                   ; 0043e8cc
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0043e8d1
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0043e8d6
    MOV EDI,dword ptr [0x01c37770]      ; 0043e8d9 | DAT_01c37770
    MOV ECX,EBP                         ; 0043e8df
    PUSH EDI                            ; 0043e8e1
    MOV EAX,ECX                         ; 0043e8e2
    SHR ECX,0x2                         ; 0043e8e4
    MOVSD.REP ES:EDI,ESI                ; 0043e8e7
    MOV CL,AL                           ; 0043e8e9
    AND CL,0x3                          ; 0043e8eb
    MOVSB.REP ES:EDI,ESI                ; 0043e8ee
    POP EDI                             ; 0043e8f0
    MOV ECX,0x300                       ; 0043e8f1
    MOV ESI,0xb65c98                    ; 0043e8f6
    MOV EDI,dword ptr [0x01c35210]      ; 0043e8fb | DAT_01c35210
    PUSH EDI                            ; 0043e901
    MOV EAX,ECX                         ; 0043e902
    SHR ECX,0x2                         ; 0043e904
    MOVSD.REP ES:EDI,ESI                ; 0043e907
    MOV CL,AL                           ; 0043e909
    AND CL,0x3                          ; 0043e90b
    MOVSB.REP ES:EDI,ESI                ; 0043e90e
    POP EDI                             ; 0043e910
    PUSH 0xb65c98                       ; 0043e911
    PUSH 0x609ff0                       ; 0043e916
    MOV ECX,dword ptr [0x0060b280]      ; 0043e91b | DAT_0060b280
    PUSH ECX                            ; 0043e921
    CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046cab0 ; 0043e922
        ;   XREF to: 0046cab0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046cab0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0xc                         ; 0043e927
    POP EBP                             ; 0043e92a
    POP EDI                             ; 0043e92b
    POP ESI                             ; 0043e92c
    POP EBX                             ; 0043e92d
    RET                                 ; 0043e92e

