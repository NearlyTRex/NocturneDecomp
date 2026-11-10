; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0044c060(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01c6a970
;   undefined4 DAT_01c6ced0
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046e690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c060
        ;   Label: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044c060
    PUSH ESI                            ; 0044c061
    PUSH EDI                            ; 0044c062
    PUSH EBP                            ; 0044c063
    XOR EDI,EDI                         ; 0044c064
    XOR EBP,EBP                         ; 0044c066
    MOV EDX,EDI                         ; 0044c068
        ;   Label: LAB_0044c068
    MOV EAX,EDI                         ; 0044c06a
    SAR EDX,0x1f                        ; 0044c06c
    SHL EDX,0x8                         ; 0044c06f
    SBB EAX,EDX                         ; 0044c072
    SAR EAX,0x8                         ; 0044c074
    MOV EBX,EBP                         ; 0044c077
    XOR ECX,ECX                         ; 0044c079
    IMUL ESI,EAX,0x280                  ; 0044c07b
    MOV EDX,ECX                         ; 0044c081
        ;   Label: LAB_0044c081
    MOV EAX,ECX                         ; 0044c083
    SAR EDX,0x1f                        ; 0044c085
    SHL EDX,0x8                         ; 0044c088
    SBB EAX,EDX                         ; 0044c08b
    SAR EAX,0x8                         ; 0044c08d
    INC EBX                             ; 0044c090
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x14a0300] ; 0044c091
    ADD ECX,0x280                       ; 0044c098
    MOV byte ptr [EBX + 0x14eb2ff],AL   ; 0044c09e
    CMP ECX,0x28000                     ; 0044c0a4
    JNZ 0x0044c081                      ; 0044c0aa
        ;   XREF to: 0044c081 (CONDITIONAL_JUMP)  ; LAB_0044c081
    ADD EBP,0x100                       ; 0044c0ac
    ADD EDI,0x1e0                       ; 0044c0b2
    CMP EBP,0x10000                     ; 0044c0b8
    JNZ 0x0044c068                      ; 0044c0be
        ;   XREF to: 0044c068 (CONDITIONAL_JUMP)  ; LAB_0044c068
    PUSH 0x5f1830                       ; 0044c0c0
    MOV EDX,dword ptr [0x005f2afc]      ; 0044c0c5 | DAT_005f2afc
    PUSH EDX                            ; 0044c0cb
    MOV ESI,0x14eb300                   ; 0044c0cc
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0044c0d1
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044c0d6
    MOV EDI,dword ptr [0x01c6ced0]      ; 0044c0d9 | DAT_01c6ced0
    MOV ECX,EBP                         ; 0044c0df
    PUSH EDI                            ; 0044c0e1
    MOV EAX,ECX                         ; 0044c0e2
    SHR ECX,0x2                         ; 0044c0e4
    MOVSD.REP ES:EDI,ESI                ; 0044c0e7
    MOV CL,AL                           ; 0044c0e9
    AND CL,0x3                          ; 0044c0eb
    MOVSB.REP ES:EDI,ESI                ; 0044c0ee
    POP EDI                             ; 0044c0f0
    MOV ECX,0x300                       ; 0044c0f1
    MOV ESI,0xb9da48                    ; 0044c0f6
    MOV EDI,dword ptr [0x01c6a970]      ; 0044c0fb | DAT_01c6a970
    PUSH EDI                            ; 0044c101
    MOV EAX,ECX                         ; 0044c102
    SHR ECX,0x2                         ; 0044c104
    MOVSD.REP ES:EDI,ESI                ; 0044c107
    MOV CL,AL                           ; 0044c109
    AND CL,0x3                          ; 0044c10b
    MOVSB.REP ES:EDI,ESI                ; 0044c10e
    POP EDI                             ; 0044c110
    PUSH 0xb9da48                       ; 0044c111
    PUSH 0x5f1830                       ; 0044c116
    MOV ECX,dword ptr [0x005f2afc]      ; 0044c11b | DAT_005f2afc
    PUSH ECX                            ; 0044c121
    CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046e690 ; 0044c122
        ;   XREF to: 0046e690 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046e690(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0xc                         ; 0044c127
    POP EBP                             ; 0044c12a
    POP EDI                             ; 0044c12b
    POP ESI                             ; 0044c12c
    POP EBX                             ; 0044c12d
    RET                                 ; 0044c12e

