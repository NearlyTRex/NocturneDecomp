; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005ad49c
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_00b0daf8
;   undefined4 DAT_00b0dafc
;   undefined4 DAT_00b0dafd
;   undefined4 DAT_0145b290
;   undefined4 DAT_0145b294
;   undefined4 DAT_0145b295
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c00020
;   undefined4 DAT_01c02580
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443180
        ;   Label: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180
    PUSH ESI                            ; 00443181
    PUSH EDI                            ; 00443182
    PUSH EBP                            ; 00443183
    XOR EDI,EDI                         ; 00443184
    XOR EBP,EBP                         ; 00443186
    MOV EDX,EDI                         ; 00443188
        ;   Label: LAB_00443188
    MOV EAX,EDI                         ; 0044318a
    SAR EDX,0x1f                        ; 0044318c
    SHL EDX,0x8                         ; 0044318f
    SBB EAX,EDX                         ; 00443192
    SAR EAX,0x8                         ; 00443194
    MOV EBX,EBP                         ; 00443197
    XOR ECX,ECX                         ; 00443199
    IMUL ESI,EAX,0x280                  ; 0044319b
    MOV EDX,ECX                         ; 004431a1
        ;   Label: LAB_004431a1
    MOV EAX,ECX                         ; 004431a3
    SAR EDX,0x1f                        ; 004431a5
    SHL EDX,0x8                         ; 004431a8
    SBB EAX,EDX                         ; 004431ab
    SAR EAX,0x8                         ; 004431ad
    INC EBX                             ; 004431b0
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1410290] ; 004431b1
    ADD ECX,0x280                       ; 004431b8
    MOV byte ptr [EBX + 0x145b28f],AL   ; 004431be | DAT_0145b290
    CMP ECX,0x28000                     ; 004431c4
    JNZ 0x004431a1                      ; 004431ca
        ;   XREF to: 004431a1 (CONDITIONAL_JUMP)  ; LAB_004431a1
    ADD EBP,0x100                       ; 004431cc
    ADD EDI,0x1e0                       ; 004431d2
    CMP EBP,0x10000                     ; 004431d8
    JNZ 0x00443188                      ; 004431de
        ;   XREF to: 00443188 (CONDITIONAL_JUMP)  ; LAB_00443188
    PUSH 0x5ad49c                       ; 004431e0 | DAT_005ad49c
    MOV EDX,dword ptr [0x005ae704]      ; 004431e5 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004431eb | DAT_01b4d738
    MOV ESI,0x145b290                   ; 004431ec
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004431f1
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004431f6
    MOV EDI,dword ptr [0x01c02580]      ; 004431f9 | DAT_01c02580
    MOV ECX,EBP                         ; 004431ff
    PUSH EDI                            ; 00443201
    MOV EAX,ECX                         ; 00443202
    SHR ECX,0x2                         ; 00443204
    MOVSD.REP ES:EDI,ESI                ; 00443207 | DAT_0145b290 | DAT_0145b294
    MOV CL,AL                           ; 00443209
    AND CL,0x3                          ; 0044320b
    MOVSB.REP ES:EDI,ESI                ; 0044320e | DAT_0145b294 | DAT_0145b295
    POP EDI                             ; 00443210
    MOV ECX,0x300                       ; 00443211
    MOV ESI,0xb0daf8                    ; 00443216
    MOV EDI,dword ptr [0x01c00020]      ; 0044321b | DAT_01c00020
    PUSH EDI                            ; 00443221
    MOV EAX,ECX                         ; 00443222
    SHR ECX,0x2                         ; 00443224
    MOVSD.REP ES:EDI,ESI                ; 00443227 | DAT_00b0daf8 | DAT_00b0dafc
    MOV CL,AL                           ; 00443229
    AND CL,0x3                          ; 0044322b
    MOVSB.REP ES:EDI,ESI                ; 0044322e | DAT_00b0dafc | DAT_00b0dafd
    POP EDI                             ; 00443230
    PUSH 0xb0daf8                       ; 00443231 | DAT_00b0daf8
    PUSH 0x5ad49c                       ; 00443236 | DAT_005ad49c
    MOV ECX,dword ptr [0x005ae704]      ; 0044323b | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00443241 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60 ; 00443242
        ;   XREF to: 00461f60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0xc                         ; 00443247
    POP EBP                             ; 0044324a
    POP EDI                             ; 0044324b
    POP ESI                             ; 0044324c
    POP EBX                             ; 0044324d
    RET                                 ; 0044324e

