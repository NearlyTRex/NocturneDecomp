; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0044ff20(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01c4e3d0
;   undefined4 DAT_01c50930
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_FUN_00484fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ff20
        ;   Label: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044ff20
    PUSH ESI                            ; 0044ff21
    PUSH EDI                            ; 0044ff22
    PUSH EBP                            ; 0044ff23
    XOR EDI,EDI                         ; 0044ff24
    XOR EBP,EBP                         ; 0044ff26
    MOV EDX,EDI                         ; 0044ff28
        ;   Label: LAB_0044ff28
    MOV EAX,EDI                         ; 0044ff2a
    SAR EDX,0x1f                        ; 0044ff2c
    SHL EDX,0x8                         ; 0044ff2f
    SBB EAX,EDX                         ; 0044ff32
    SAR EAX,0x8                         ; 0044ff34
    MOV EBX,EBP                         ; 0044ff37
    XOR ECX,ECX                         ; 0044ff39
    IMUL ESI,EAX,0x280                  ; 0044ff3b
    MOV EDX,ECX                         ; 0044ff41
        ;   Label: LAB_0044ff41
    MOV EAX,ECX                         ; 0044ff43
    SAR EDX,0x1f                        ; 0044ff45
    SHL EDX,0x8                         ; 0044ff48
    SBB EAX,EDX                         ; 0044ff4b
    SAR EAX,0x8                         ; 0044ff4d
    INC EBX                             ; 0044ff50
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1483a50] ; 0044ff51
    ADD ECX,0x280                       ; 0044ff58
    MOV byte ptr [EBX + 0x14cea4f],AL   ; 0044ff5e
    CMP ECX,0x28000                     ; 0044ff64
    JNZ 0x0044ff41                      ; 0044ff6a
        ;   XREF to: 0044ff41 (CONDITIONAL_JUMP)  ; LAB_0044ff41
    ADD EBP,0x100                       ; 0044ff6c
    ADD EDI,0x1e0                       ; 0044ff72
    CMP EBP,0x10000                     ; 0044ff78
    JNZ 0x0044ff28                      ; 0044ff7e
        ;   XREF to: 0044ff28 (CONDITIONAL_JUMP)  ; LAB_0044ff28
    PUSH 0x61127c                       ; 0044ff80
    MOV EDX,dword ptr [0x00612560]      ; 0044ff85 | DAT_00612560
    PUSH EDX                            ; 0044ff8b
    MOV ESI,0x14cea50                   ; 0044ff8c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 0044ff91
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044ff96
    MOV EDI,dword ptr [0x01c50930]      ; 0044ff99 | DAT_01c50930
    MOV ECX,EBP                         ; 0044ff9f
    PUSH EDI                            ; 0044ffa1
    MOV EAX,ECX                         ; 0044ffa2
    SHR ECX,0x2                         ; 0044ffa4
    MOVSD.REP ES:EDI,ESI                ; 0044ffa7
    MOV CL,AL                           ; 0044ffa9
    AND CL,0x3                          ; 0044ffab
    MOVSB.REP ES:EDI,ESI                ; 0044ffae
    POP EDI                             ; 0044ffb0
    MOV ECX,0x300                       ; 0044ffb1
    MOV ESI,0xb81198                    ; 0044ffb6
    MOV EDI,dword ptr [0x01c4e3d0]      ; 0044ffbb | DAT_01c4e3d0
    PUSH EDI                            ; 0044ffc1
    MOV EAX,ECX                         ; 0044ffc2
    SHR ECX,0x2                         ; 0044ffc4
    MOVSD.REP ES:EDI,ESI                ; 0044ffc7
    MOV CL,AL                           ; 0044ffc9
    AND CL,0x3                          ; 0044ffcb
    MOVSB.REP ES:EDI,ESI                ; 0044ffce
    POP EDI                             ; 0044ffd0
    PUSH 0xb81198                       ; 0044ffd1
    PUSH 0x61127c                       ; 0044ffd6
    MOV ECX,dword ptr [0x00612560]      ; 0044ffdb | DAT_00612560
    PUSH ECX                            ; 0044ffe1
    CALL engine_drender.cpp_FUN_00484fb0 ; 0044ffe2
        ;   XREF to: 00484fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_00484fb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0xc                         ; 0044ffe7
    POP EBP                             ; 0044ffea
    POP EDI                             ; 0044ffeb
    POP ESI                             ; 0044ffec
    POP EBX                             ; 0044ffed
    RET                                 ; 0044ffee

