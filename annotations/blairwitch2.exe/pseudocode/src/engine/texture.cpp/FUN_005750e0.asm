; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLTextureBasic * __cdecl engine_texture_cpp_FUN_005750e0(void)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0 at 00407425
;   engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407490 at 00407592
;
; Referenced Globals:
;   undefined4 DAT_02652eac
;   undefined4 DAT_02652eb0
;   undefined4 DAT_026534f4
;   undefined4 DAT_026534f8
;   undefined4 DAT_026534fc
;   undefined4 DAT_026534fd
;   undefined4 DAT_026534fe
;   undefined4 DAT_026534ff
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005750e0
        ;   Label: engine_texture.cpp_FUN_005750e0
    PUSH EDI                            ; 005750e1
    MOV EDX,0xd                         ; 005750e2
    MOV EAX,[0x02652eac]                ; 005750e7 | DAT_02652eac
    MOV dword ptr [0x026534f4],EDX      ; 005750ec | DAT_026534f4
    MOV [0x026534f8],EAX                ; 005750f2 | DAT_026534f8
    MOV EDX,EAX                         ; 005750f7
    SHL EAX,0x2                         ; 005750f9
    MOV ESI,dword ptr [0x02652eb0]      ; 005750fc | DAT_02652eb0
    SUB EAX,EDX                         ; 00575102
    ADD ESI,0x4                         ; 00575104
    SHL EAX,0x5                         ; 00575107
    ADD ESI,EAX                         ; 0057510a
    MOV EDI,0x26534fc                   ; 0057510c
    ADD ESI,0x4                         ; 00575111
    PUSH EDI                            ; 00575114
    MOV AL,byte ptr [ESI]               ; 00575115
        ;   Label: LAB_00575115
    MOV byte ptr [EDI],AL               ; 00575117 | DAT_026534fc | DAT_026534fe
    CMP AL,0x0                          ; 00575119
    JZ 0x0057512d                       ; 0057511b
        ;   XREF to: 0057512d (CONDITIONAL_JUMP)  ; LAB_0057512d
    MOV AL,byte ptr [ESI + 0x1]         ; 0057511d
    ADD ESI,0x2                         ; 00575120
    MOV byte ptr [EDI + 0x1],AL         ; 00575123 | DAT_026534fd | DAT_026534ff
    ADD EDI,0x2                         ; 00575126
    CMP AL,0x0                          ; 00575129
    JNZ 0x00575115                      ; 0057512b
        ;   XREF to: 00575115 (CONDITIONAL_JUMP)  ; LAB_00575115
    POP EDI                             ; 0057512d
        ;   Label: LAB_0057512d
    MOV EAX,0x26534f4                   ; 0057512e | DAT_026534f4
    POP EDI                             ; 00575133
    POP ESI                             ; 00575134
    RET                                 ; 00575135

