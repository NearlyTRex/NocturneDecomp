; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00597d00(void)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0 at 00407255
;   engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_004072c0 at 004073c2
;
; Referenced Globals:
;   undefined4 DAT_02c8a67c
;   undefined4 DAT_02c8a680
;   undefined4 DAT_02c8acc4
;   undefined4 DAT_02c8acc8
;   undefined4 DAT_02c8accc
;   undefined4 DAT_02c8accd
;   undefined4 DAT_02c8acce
;   undefined4 DAT_02c8accf
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00597d00
        ;   Label: engine_texture.cpp_getCurrentTexture_FUN_00597d00
    PUSH EDI                            ; 00597d01
    MOV EDX,0xd                         ; 00597d02
    MOV EAX,[0x02c8a67c]                ; 00597d07 | DAT_02c8a67c
    MOV dword ptr [0x02c8acc4],EDX      ; 00597d0c | DAT_02c8acc4
    MOV [0x02c8acc8],EAX                ; 00597d12 | DAT_02c8acc8
    MOV EDX,EAX                         ; 00597d17
    SHL EAX,0x2                         ; 00597d19
    MOV ESI,dword ptr [0x02c8a680]      ; 00597d1c | DAT_02c8a680
    SUB EAX,EDX                         ; 00597d22
    ADD ESI,0x4                         ; 00597d24
    SHL EAX,0x5                         ; 00597d27
    ADD ESI,EAX                         ; 00597d2a
    MOV EDI,0x2c8accc                   ; 00597d2c
    ADD ESI,0x4                         ; 00597d31
    PUSH EDI                            ; 00597d34
    MOV AL,byte ptr [ESI]               ; 00597d35
        ;   Label: LAB_00597d35
    MOV byte ptr [EDI],AL               ; 00597d37 | DAT_02c8accc | DAT_02c8acce
    CMP AL,0x0                          ; 00597d39
    JZ 0x00597d4d                       ; 00597d3b
        ;   XREF to: 00597d4d (CONDITIONAL_JUMP)  ; LAB_00597d4d
    MOV AL,byte ptr [ESI + 0x1]         ; 00597d3d
    ADD ESI,0x2                         ; 00597d40
    MOV byte ptr [EDI + 0x1],AL         ; 00597d43 | DAT_02c8accd | DAT_02c8accf
    ADD EDI,0x2                         ; 00597d46
    CMP AL,0x0                          ; 00597d49
    JNZ 0x00597d35                      ; 00597d4b
        ;   XREF to: 00597d35 (CONDITIONAL_JUMP)  ; LAB_00597d35
    POP EDI                             ; 00597d4d
        ;   Label: LAB_00597d4d
    MOV EAX,0x2c8acc4                   ; 00597d4e | DAT_02c8acc4
    POP EDI                             ; 00597d53
    POP ESI                             ; 00597d54
    RET                                 ; 00597d55

