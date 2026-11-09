; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLTextureBasic * __cdecl engine_texture_cpp_FUN_0056acf0(void)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100 at 00407297
;   engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407300 at 00407402
;
; Referenced Globals:
;   undefined4 DAT_02cfd0cc
;   undefined4 DAT_02cfd0d0
;   undefined4 DAT_02cfd714
;   undefined4 DAT_02cfd718
;   undefined4 DAT_02cfd71c
;   undefined4 DAT_02cfd71d
;   undefined4 DAT_02cfd71e
;   undefined4 DAT_02cfd71f
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056acf0
        ;   Label: engine_texture.cpp_FUN_0056acf0
    PUSH EDI                            ; 0056acf1
    MOV EDX,0xd                         ; 0056acf2
    MOV EAX,[0x02cfd0cc]                ; 0056acf7 | DAT_02cfd0cc
    MOV dword ptr [0x02cfd714],EDX      ; 0056acfc | DAT_02cfd714
    MOV [0x02cfd718],EAX                ; 0056ad02 | DAT_02cfd718
    MOV EDX,EAX                         ; 0056ad07
    SHL EAX,0x2                         ; 0056ad09
    MOV ESI,dword ptr [0x02cfd0d0]      ; 0056ad0c | DAT_02cfd0d0
    SUB EAX,EDX                         ; 0056ad12
    ADD ESI,0x4                         ; 0056ad14
    SHL EAX,0x5                         ; 0056ad17
    ADD ESI,EAX                         ; 0056ad1a
    MOV EDI,0x2cfd71c                   ; 0056ad1c
    ADD ESI,0x4                         ; 0056ad21
    PUSH EDI                            ; 0056ad24
    MOV AL,byte ptr [ESI]               ; 0056ad25
        ;   Label: LAB_0056ad25
    MOV byte ptr [EDI],AL               ; 0056ad27 | DAT_02cfd71c | DAT_02cfd71e
    CMP AL,0x0                          ; 0056ad29
    JZ 0x0056ad3d                       ; 0056ad2b
        ;   XREF to: 0056ad3d (CONDITIONAL_JUMP)  ; LAB_0056ad3d
    MOV AL,byte ptr [ESI + 0x1]         ; 0056ad2d
    ADD ESI,0x2                         ; 0056ad30
    MOV byte ptr [EDI + 0x1],AL         ; 0056ad33 | DAT_02cfd71d | DAT_02cfd71f
    ADD EDI,0x2                         ; 0056ad36
    CMP AL,0x0                          ; 0056ad39
    JNZ 0x0056ad25                      ; 0056ad3b
        ;   XREF to: 0056ad25 (CONDITIONAL_JUMP)  ; LAB_0056ad25
    POP EDI                             ; 0056ad3d
        ;   Label: LAB_0056ad3d
    MOV EAX,0x2cfd714                   ; 0056ad3e | DAT_02cfd714
    POP EDI                             ; 0056ad43
    POP ESI                             ; 0056ad44
    RET                                 ; 0056ad45

