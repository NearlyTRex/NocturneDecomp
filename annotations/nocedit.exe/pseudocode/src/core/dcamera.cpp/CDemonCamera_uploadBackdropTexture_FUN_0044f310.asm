; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   SMRGLTextureBasic g_CameraBackdropTexture
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SRGBColorPalette g_CameraImagePaletteData
;   undefined4 DAT_00c196fc
;   undefined4 DAT_00c196fd
;   char[307200] g_CameraIndexedImageData
;   uint[16384] g_CameraTextureWorkBuffer
;   undefined4 DAT_01566fa8+1
;   undefined4 DAT_01566fac
;   undefined4 DAT_01566fad
;   CDemonRenderer g_CDemonRendererInstance
;   byte* g_CurrentPalette
;   void* g_CurrentTextureData
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f310
        ;   Label: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310
    PUSH ESI                            ; 0044f311
    PUSH EDI                            ; 0044f312
    PUSH EBP                            ; 0044f313
    XOR EDI,EDI                         ; 0044f314
    XOR EBP,EBP                         ; 0044f316
    MOV EDX,EDI                         ; 0044f318
        ;   Label: LAB_0044f318
    MOV EAX,EDI                         ; 0044f31a
    SAR EDX,0x1f                        ; 0044f31c
    SHL EDX,0x8                         ; 0044f31f
    SBB EAX,EDX                         ; 0044f322
    SAR EAX,0x8                         ; 0044f324
    MOV EBX,EBP                         ; 0044f327
    XOR ECX,ECX                         ; 0044f329
    IMUL ESI,EAX,0x280                  ; 0044f32b
    MOV EDX,ECX                         ; 0044f331
        ;   Label: LAB_0044f331
    MOV EAX,ECX                         ; 0044f333
    SAR EDX,0x1f                        ; 0044f335
    SHL EDX,0x8                         ; 0044f338
    SBB EAX,EDX                         ; 0044f33b
    SAR EAX,0x8                         ; 0044f33d
    INC EBX                             ; 0044f340
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x151bfa8] ; 0044f341 | g_CameraIndexedImageData
    ADD ECX,0x280                       ; 0044f348
    MOV byte ptr [EBX + 0x1566fa7],AL   ; 0044f34e | g_CameraTextureWorkBuffer | DAT_01566fa8+1
    CMP ECX,0x28000                     ; 0044f354
    JNZ 0x0044f331                      ; 0044f35a
        ;   XREF to: 0044f331 (CONDITIONAL_JUMP)  ; LAB_0044f331
    ADD EBP,0x100                       ; 0044f35c
    ADD EDI,0x1e0                       ; 0044f362
    CMP EBP,0x10000                     ; 0044f368
    JNZ 0x0044f318                      ; 0044f36e
        ;   XREF to: 0044f318 (CONDITIONAL_JUMP)  ; LAB_0044f318
    PUSH 0x66ed50                       ; 0044f370 | g_CameraBackdropTexture
    MOV EDX,dword ptr [0x006703ec]      ; 0044f375 | g_CDemonRendererPtr2
    PUSH EDX                            ; 0044f37b | g_CDemonRendererInstance
    MOV ESI,0x1566fa8                   ; 0044f37c | g_CameraTextureWorkBuffer
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0044f381
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044f386
    MOV EDI,dword ptr [0x02d03e80]      ; 0044f389 | g_CurrentTextureData
    MOV ECX,EBP                         ; 0044f38f
    PUSH EDI                            ; 0044f391
    MOV EAX,ECX                         ; 0044f392
    SHR ECX,0x2                         ; 0044f394
    MOVSD.REP ES:EDI,ESI                ; 0044f397 | g_CameraTextureWorkBuffer | DAT_01566fac
    MOV CL,AL                           ; 0044f399
    AND CL,0x3                          ; 0044f39b
    MOVSB.REP ES:EDI,ESI                ; 0044f39e | DAT_01566fac | DAT_01566fad
    POP EDI                             ; 0044f3a0
    MOV ECX,0x300                       ; 0044f3a1
    MOV ESI,0xc196f8                    ; 0044f3a6 | g_CameraImagePaletteData
    MOV EDI,dword ptr [0x02d01920]      ; 0044f3ab | g_CurrentPalette
    PUSH EDI                            ; 0044f3b1
    MOV EAX,ECX                         ; 0044f3b2
    SHR ECX,0x2                         ; 0044f3b4
    MOVSD.REP ES:EDI,ESI                ; 0044f3b7 | g_CameraImagePaletteData | DAT_00c196fc
    MOV CL,AL                           ; 0044f3b9
    AND CL,0x3                          ; 0044f3bb
    MOVSB.REP ES:EDI,ESI                ; 0044f3be | DAT_00c196fc | DAT_00c196fd
    POP EDI                             ; 0044f3c0
    PUSH 0xc196f8                       ; 0044f3c1 | g_CameraImagePaletteData
    PUSH 0x66ed50                       ; 0044f3c6 | g_CameraBackdropTexture
    MOV ECX,dword ptr [0x006703ec]      ; 0044f3cb | g_CDemonRendererPtr2
    PUSH ECX                            ; 0044f3d1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30 ; 0044f3d2
        ;   XREF to: 0048dc30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0xc                         ; 0044f3d7
    POP EBP                             ; 0044f3da
    POP EDI                             ; 0044f3db
    POP ESI                             ; 0044f3dc
    POP EBX                             ; 0044f3dd
    RET                                 ; 0044f3de

